#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0029[3623] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0,
    0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 5, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 8, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 15, 0,
    0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 19, 0, 0, 20, 0, 0, 0, 0, 0, 0,
    0, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 24, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 29, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0,
    34, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    43, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0,
    52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0,
    0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 67, 0, 68, 0, 0, 0, 69, 0, 70, 0, 0, 0, 0,
    0, 0, 71, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0,
    0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 78, 0, 0, 0, 79, 80, 0, 81, 0, 0, 0, 82, 0, 0, 83, 0, 84, 0,
    0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 87, 0, 88, 0, 0, 0, 0, 89, 0, 90, 0, 0, 0,
    0, 91, 0, 0, 0, 92, 0, 93, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0,
    101, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 105, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 117, 0, 0, 118, 0, 0, 0, 119, 0,
    0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 121, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 124, 0, 125, 0, 126, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 130, 0, 131, 0, 132, 0, 133, 0, 134,
    0, 135, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 138, 0, 139, 0, 140, 0, 141, 0, 142, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 151, 152, 0, 153, 0, 154, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 159, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0,
    0, 162, 0, 163, 0, 0, 164, 0, 165, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0,
    0, 0, 169, 0, 170, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 173, 0, 0, 174, 0, 175, 0, 176, 0, 0, 177, 0, 178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 180, 0, 181, 182, 0, 0, 0, 183,
    0, 0, 184, 0, 185, 0, 186, 0, 187, 0, 0, 188, 0, 189, 0, 190, 0, 191, 0, 192, 0, 193, 0, 0, 194, 0, 195, 0, 0, 0, 0, 196,
    0, 197, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 201, 0, 0, 202, 0, 203, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0,
    0, 212, 0, 0, 0, 0, 0, 213, 0, 214, 0, 0, 215, 0, 0, 216, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 221, 0, 222, 0, 223, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225,
    0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 0,
    233, 0, 234, 0, 235, 0, 0, 236, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 239,
    0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 244, 0, 245, 0, 246, 0, 247, 0, 248, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249,
    0, 250, 0, 0, 0, 251, 252, 0, 253, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 257, 0, 258, 0, 259, 0, 260, 0, 261, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 263, 0, 264, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 267, 0, 268,
    0, 0, 0, 0, 0, 0, 0, 269, 0, 270, 0, 0, 271, 0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 0, 274, 0, 0, 275, 0, 276, 0, 0,
    0, 277, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 281, 0, 0, 282, 0, 283, 0, 284, 0, 285, 0, 0, 0, 0, 286, 0, 0, 287, 0,
    0, 0, 288, 0, 0, 0, 0, 289, 290, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    292, 293, 0, 0, 0, 0, 0, 0, 0, 294, 0, 295, 0, 296, 0, 297, 0, 298, 0, 299, 0, 0, 300, 0, 301, 0, 0, 0, 0, 0, 0, 0,
    302, 0, 0, 303, 0, 0, 304, 305, 0, 0, 306, 307, 0, 0, 0, 0, 308, 0, 309, 0, 310, 0, 311, 0, 0, 0, 0, 312, 0, 0, 313, 0,
    0, 0, 314, 0, 0, 0, 0, 315, 316, 0, 0, 317, 0, 318, 0, 319, 0, 0, 0, 320, 0, 321, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0,
    323, 0, 0, 0, 324, 0, 0, 325, 0, 0, 0, 0, 326, 0, 0, 0, 0, 327, 0, 328, 0, 329, 0, 330, 0, 331, 0, 332, 0, 333, 0, 0,
    0, 334, 0, 0, 335, 0, 0, 336, 0, 0, 0, 0, 337, 0, 0, 0, 0, 338, 0, 339, 0, 340, 0, 341, 0, 0, 342, 0, 0, 343, 0, 0,
    0, 0, 344, 0, 0, 0, 0, 0, 345, 346, 0, 347, 0, 348, 0, 349, 0, 0, 0, 0, 0, 0, 350, 0, 0, 351, 352, 353, 0, 0, 0, 354,
    0, 355, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 358, 0, 0, 359, 0, 360, 0, 0,
    0, 0, 0, 361, 0, 362, 0, 363, 0, 364, 0, 365, 0, 366, 0, 367, 0, 0, 0, 368, 0, 0, 0, 0, 0, 369, 370, 0, 0, 371, 0, 372,
    0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 375, 0, 0, 376, 0,
    377, 0, 378, 0, 379, 0, 380, 0, 381, 0, 382, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0,
    0, 385, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0,
    0, 0, 0, 0, 390, 0, 391, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 393, 0, 394, 0, 395, 0, 396, 0, 0, 0, 0, 397, 0, 0, 0,
    398, 0, 0, 0, 399, 0, 0, 400, 0, 0, 0, 401, 0, 0, 0, 402, 0, 0, 403, 0, 0, 0, 404, 0, 0, 0, 405, 0, 0, 0, 406, 0,
    0, 0, 407, 0, 0, 408, 0, 0, 0, 0, 409, 0, 0, 0, 410, 0, 411, 0, 412, 0, 413, 0, 0, 0, 414, 0, 415, 0, 0, 416, 0, 417,
    0, 418, 0, 0, 419, 0, 420, 0, 0, 421, 0, 0, 422, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0,
    425, 0, 0, 426, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 433, 0, 434, 0, 435, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0,
    0, 0, 0, 0, 0, 437, 0, 0, 438, 0, 0, 0, 439, 0, 0, 0, 440, 0, 0, 0, 441, 0, 0, 0, 442, 0, 0, 0, 443, 0, 0, 0,
    444, 0, 0, 0, 0, 0, 445, 0, 446, 0, 0, 447, 0, 0, 448, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0,
    451, 0, 452, 0, 453, 0, 454,
};
void recomp_unit_0029_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08878000u;
        entry_id = (entry_delta < 14492u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0029[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08878000;
    case 2u: goto L_088780EC;
    case 3u: goto L_0887810C;
    case 4u: goto L_0887812C;
    case 5u: goto L_08878130;
    case 6u: goto L_0887813C;
    case 7u: goto L_0887815C;
    case 8u: goto L_08878164;
    case 9u: goto L_0887818C;
    case 10u: goto L_0887819C;
    case 11u: goto L_0887820C;
    case 12u: goto L_088782E0;
    case 13u: goto L_08878338;
    case 14u: goto L_0887846C;
    case 15u: goto L_08878478;
    case 16u: goto L_08878498;
    case 17u: goto L_088784B8;
    case 18u: goto L_088784D0;
    case 19u: goto L_088784D8;
    case 20u: goto L_088784E4;
    case 21u: goto L_08878504;
    case 22u: goto L_08878524;
    case 23u: goto L_08878538;
    case 24u: goto L_08878604;
    case 25u: goto L_08878610;
    case 26u: goto L_08878630;
    case 27u: goto L_0887864C;
    case 28u: goto L_088786A8;
    case 29u: goto L_08878704;
    case 30u: goto L_0887870C;
    case 31u: goto L_08878724;
    case 32u: goto L_08878758;
    case 33u: goto L_08878870;
    case 34u: goto L_08878880;
    case 35u: goto L_0887888C;
    case 36u: goto L_088788B4;
    case 37u: goto L_08878930;
    case 38u: goto L_0887894C;
    case 39u: goto L_08878998;
    case 40u: goto L_088789E8;
    case 41u: goto L_08878A2C;
    case 42u: goto L_08878A44;
    case 43u: goto L_08878A80;
    case 44u: goto L_08878A9C;
    case 45u: goto L_08878AD0;
    case 46u: goto L_08878AE8;
    case 47u: goto L_08878B44;
    case 48u: goto L_08878B5C;
    case 49u: goto L_08878B98;
    case 50u: goto L_08878BB4;
    case 51u: goto L_08878BE8;
    case 52u: goto L_08878C00;
    case 53u: goto L_08878C14;
    case 54u: goto L_08878C28;
    case 55u: goto L_08878C44;
    case 56u: goto L_08878C74;
    case 57u: goto L_08878CF0;
    case 58u: goto L_08878D0C;
    case 59u: goto L_08878D50;
    case 60u: goto L_08878D8C;
    case 61u: goto L_08878EA8;
    case 62u: goto L_08878EBC;
    case 63u: goto L_08878ED8;
    case 64u: goto L_08878F08;
    case 65u: goto L_08878F38;
    case 66u: goto L_08878F48;
    case 67u: goto L_08878F4C;
    case 68u: goto L_08878F54;
    case 69u: goto L_08878F64;
    case 70u: goto L_08878F6C;
    case 71u: goto L_08878F88;
    case 72u: goto L_08878FA4;
    case 73u: goto L_08878FC0;
    case 74u: goto L_08878FDC;
    case 75u: goto L_08878FF8;
    case 76u: goto L_08879004;
    case 77u: goto L_08879030;
    case 78u: goto L_08879038;
    case 79u: goto L_08879048;
    case 80u: goto L_0887904C;
    case 81u: goto L_08879054;
    case 82u: goto L_08879064;
    case 83u: goto L_08879070;
    case 84u: goto L_08879078;
    case 85u: goto L_08879084;
    case 86u: goto L_088790C4;
    case 87u: goto L_088790CC;
    case 88u: goto L_088790D4;
    case 89u: goto L_088790E8;
    case 90u: goto L_088790F0;
    case 91u: goto L_08879104;
    case 92u: goto L_08879114;
    case 93u: goto L_0887911C;
    case 94u: goto L_08879128;
    case 95u: goto L_0887935C;
    case 96u: goto L_08879398;
    case 97u: goto L_088793EC;
    case 98u: goto L_0887941C;
    case 99u: goto L_0887944C;
    case 100u: goto L_08879478;
    case 101u: goto L_08879480;
    case 102u: goto L_08879490;
    case 103u: goto L_088794A0;
    case 104u: goto L_088794B4;
    case 105u: goto L_088794D0;
    case 106u: goto L_088794D4;
    case 107u: goto L_08879514;
    case 108u: goto L_08879528;
    case 109u: goto L_08879548;
    case 110u: goto L_08879550;
    case 111u: goto L_08879560;
    case 112u: goto L_08879574;
    case 113u: goto L_088795C8;
    case 114u: goto L_088795F8;
    case 115u: goto L_08879628;
    case 116u: goto L_08879654;
    case 117u: goto L_0887965C;
    case 118u: goto L_08879668;
    case 119u: goto L_08879678;
    case 120u: goto L_0887968C;
    case 121u: goto L_088796A8;
    case 122u: goto L_088796AC;
    case 123u: goto L_088796EC;
    case 124u: goto L_08879714;
    case 125u: goto L_0887971C;
    case 126u: goto L_08879724;
    case 127u: goto L_0887972C;
    case 128u: goto L_08879740;
    case 129u: goto L_08879754;
    case 130u: goto L_0887975C;
    case 131u: goto L_08879764;
    case 132u: goto L_0887976C;
    case 133u: goto L_08879774;
    case 134u: goto L_0887977C;
    case 135u: goto L_08879784;
    case 136u: goto L_0887978C;
    case 137u: goto L_088797A0;
    case 138u: goto L_088797B4;
    case 139u: goto L_088797BC;
    case 140u: goto L_088797C4;
    case 141u: goto L_088797CC;
    case 142u: goto L_088797D4;
    case 143u: goto L_088797DC;
    case 144u: goto L_08879814;
    case 145u: goto L_0887982C;
    case 146u: goto L_08879834;
    case 147u: goto L_08879848;
    case 148u: goto L_0887985C;
    case 149u: goto L_08879870;
    case 150u: goto L_088798B0;
    case 151u: goto L_088798CC;
    case 152u: goto L_088798D0;
    case 153u: goto L_088798D8;
    case 154u: goto L_088798E0;
    case 155u: goto L_0887992C;
    case 156u: goto L_08879940;
    case 157u: goto L_08879954;
    case 158u: goto L_08879968;
    case 159u: goto L_08879970;
    case 160u: goto L_088799D0;
    case 161u: goto L_088799E0;
    case 162u: goto L_08879A04;
    case 163u: goto L_08879A0C;
    case 164u: goto L_08879A18;
    case 165u: goto L_08879A20;
    case 166u: goto L_08879A40;
    case 167u: goto L_08879A5C;
    case 168u: goto L_08879A74;
    case 169u: goto L_08879A88;
    case 170u: goto L_08879A90;
    case 171u: goto L_08879A94;
    case 172u: goto L_08879AD4;
    case 173u: goto L_08879B08;
    case 174u: goto L_08879B14;
    case 175u: goto L_08879B1C;
    case 176u: goto L_08879B24;
    case 177u: goto L_08879B30;
    case 178u: goto L_08879B38;
    case 179u: goto L_08879B58;
    case 180u: goto L_08879B60;
    case 181u: goto L_08879B68;
    case 182u: goto L_08879B6C;
    case 183u: goto L_08879B7C;
    case 184u: goto L_08879B88;
    case 185u: goto L_08879B90;
    case 186u: goto L_08879B98;
    case 187u: goto L_08879BA0;
    case 188u: goto L_08879BAC;
    case 189u: goto L_08879BB4;
    case 190u: goto L_08879BBC;
    case 191u: goto L_08879BC4;
    case 192u: goto L_08879BCC;
    case 193u: goto L_08879BD4;
    case 194u: goto L_08879BE0;
    case 195u: goto L_08879BE8;
    case 196u: goto L_08879BFC;
    case 197u: goto L_08879C04;
    case 198u: goto L_08879C0C;
    case 199u: goto L_08879C20;
    case 200u: goto L_08879C38;
    case 201u: goto L_08879C40;
    case 202u: goto L_08879C4C;
    case 203u: goto L_08879C54;
    case 204u: goto L_08879C5C;
    case 205u: goto L_08879D18;
    case 206u: goto L_08879D24;
    case 207u: goto L_08879D34;
    case 208u: goto L_08879D44;
    case 209u: goto L_08879D54;
    case 210u: goto L_08879D64;
    case 211u: goto L_08879D74;
    case 212u: goto L_08879D84;
    case 213u: goto L_08879D9C;
    case 214u: goto L_08879DA4;
    case 215u: goto L_08879DB0;
    case 216u: goto L_08879DBC;
    case 217u: goto L_08879DC8;
    case 218u: goto L_08879E28;
    case 219u: goto L_08879E2C;
    case 220u: goto L_08879EB0;
    case 221u: goto L_08879EB8;
    case 222u: goto L_08879EC0;
    case 223u: goto L_08879EC8;
    case 224u: goto L_08879ED0;
    case 225u: goto L_08879F7C;
    case 226u: goto L_08879F88;
    case 227u: goto L_08879F98;
    case 228u: goto L_08879FA8;
    case 229u: goto L_08879FB8;
    case 230u: goto L_08879FC8;
    case 231u: goto L_08879FD8;
    case 232u: goto L_08879FE8;
    case 233u: goto L_0887A000;
    case 234u: goto L_0887A008;
    case 235u: goto L_0887A010;
    case 236u: goto L_0887A01C;
    case 237u: goto L_0887A024;
    case 238u: goto L_0887A074;
    case 239u: goto L_0887A07C;
    case 240u: goto L_0887A094;
    case 241u: goto L_0887A0BC;
    case 242u: goto L_0887A0C0;
    case 243u: goto L_0887A140;
    case 244u: goto L_0887A148;
    case 245u: goto L_0887A150;
    case 246u: goto L_0887A158;
    case 247u: goto L_0887A160;
    case 248u: goto L_0887A168;
    case 249u: goto L_0887A1FC;
    case 250u: goto L_0887A204;
    case 251u: goto L_0887A214;
    case 252u: goto L_0887A218;
    case 253u: goto L_0887A220;
    case 254u: goto L_0887A224;
    case 255u: goto L_0887A2A0;
    case 256u: goto L_0887A2C8;
    case 257u: goto L_0887A2D4;
    case 258u: goto L_0887A2DC;
    case 259u: goto L_0887A2E4;
    case 260u: goto L_0887A2EC;
    case 261u: goto L_0887A2F4;
    case 262u: goto L_0887A324;
    case 263u: goto L_0887A330;
    case 264u: goto L_0887A338;
    case 265u: goto L_0887A340;
    case 266u: goto L_0887A36C;
    case 267u: goto L_0887A374;
    case 268u: goto L_0887A37C;
    case 269u: goto L_0887A39C;
    case 270u: goto L_0887A3A4;
    case 271u: goto L_0887A3B0;
    case 272u: goto L_0887A3BC;
    case 273u: goto L_0887A3D4;
    case 274u: goto L_0887A3E0;
    case 275u: goto L_0887A3EC;
    case 276u: goto L_0887A3F4;
    case 277u: goto L_0887A404;
    case 278u: goto L_0887A410;
    case 279u: goto L_0887A49C;
    case 280u: goto L_0887A4AC;
    case 281u: goto L_0887A4B4;
    case 282u: goto L_0887A4C0;
    case 283u: goto L_0887A4C8;
    case 284u: goto L_0887A4D0;
    case 285u: goto L_0887A4D8;
    case 286u: goto L_0887A4EC;
    case 287u: goto L_0887A4F8;
    case 288u: goto L_0887A508;
    case 289u: goto L_0887A51C;
    case 290u: goto L_0887A520;
    case 291u: goto L_0887A528;
    case 292u: goto L_0887A580;
    case 293u: goto L_0887A584;
    case 294u: goto L_0887A5A4;
    case 295u: goto L_0887A5AC;
    case 296u: goto L_0887A5B4;
    case 297u: goto L_0887A5BC;
    case 298u: goto L_0887A5C4;
    case 299u: goto L_0887A5CC;
    case 300u: goto L_0887A5D8;
    case 301u: goto L_0887A5E0;
    case 302u: goto L_0887A600;
    case 303u: goto L_0887A60C;
    case 304u: goto L_0887A618;
    case 305u: goto L_0887A61C;
    case 306u: goto L_0887A628;
    case 307u: goto L_0887A62C;
    case 308u: goto L_0887A640;
    case 309u: goto L_0887A648;
    case 310u: goto L_0887A650;
    case 311u: goto L_0887A658;
    case 312u: goto L_0887A66C;
    case 313u: goto L_0887A678;
    case 314u: goto L_0887A688;
    case 315u: goto L_0887A69C;
    case 316u: goto L_0887A6A0;
    case 317u: goto L_0887A6AC;
    case 318u: goto L_0887A6B4;
    case 319u: goto L_0887A6BC;
    case 320u: goto L_0887A6CC;
    case 321u: goto L_0887A6D4;
    case 322u: goto L_0887A6E0;
    case 323u: goto L_0887A700;
    case 324u: goto L_0887A710;
    case 325u: goto L_0887A71C;
    case 326u: goto L_0887A730;
    case 327u: goto L_0887A744;
    case 328u: goto L_0887A74C;
    case 329u: goto L_0887A754;
    case 330u: goto L_0887A75C;
    case 331u: goto L_0887A764;
    case 332u: goto L_0887A76C;
    case 333u: goto L_0887A774;
    case 334u: goto L_0887A784;
    case 335u: goto L_0887A790;
    case 336u: goto L_0887A79C;
    case 337u: goto L_0887A7B0;
    case 338u: goto L_0887A7C4;
    case 339u: goto L_0887A7CC;
    case 340u: goto L_0887A7D4;
    case 341u: goto L_0887A7DC;
    case 342u: goto L_0887A7E8;
    case 343u: goto L_0887A7F4;
    case 344u: goto L_0887A808;
    case 345u: goto L_0887A820;
    case 346u: goto L_0887A824;
    case 347u: goto L_0887A82C;
    case 348u: goto L_0887A834;
    case 349u: goto L_0887A83C;
    case 350u: goto L_0887A858;
    case 351u: goto L_0887A864;
    case 352u: goto L_0887A868;
    case 353u: goto L_0887A86C;
    case 354u: goto L_0887A87C;
    case 355u: goto L_0887A884;
    case 356u: goto L_0887A88C;
    case 357u: goto L_0887A8D8;
    case 358u: goto L_0887A8E0;
    case 359u: goto L_0887A8EC;
    case 360u: goto L_0887A8F4;
    case 361u: goto L_0887A90C;
    case 362u: goto L_0887A914;
    case 363u: goto L_0887A91C;
    case 364u: goto L_0887A924;
    case 365u: goto L_0887A92C;
    case 366u: goto L_0887A934;
    case 367u: goto L_0887A93C;
    case 368u: goto L_0887A94C;
    case 369u: goto L_0887A964;
    case 370u: goto L_0887A968;
    case 371u: goto L_0887A974;
    case 372u: goto L_0887A97C;
    case 373u: goto L_0887A984;
    case 374u: goto L_0887A9D0;
    case 375u: goto L_0887A9EC;
    case 376u: goto L_0887A9F8;
    case 377u: goto L_0887AA00;
    case 378u: goto L_0887AA08;
    case 379u: goto L_0887AA10;
    case 380u: goto L_0887AA18;
    case 381u: goto L_0887AA20;
    case 382u: goto L_0887AA28;
    case 383u: goto L_0887AA40;
    case 384u: goto L_0887AA74;
    case 385u: goto L_0887AA84;
    case 386u: goto L_0887AA94;
    case 387u: goto L_0887AAA4;
    case 388u: goto L_0887AABC;
    case 389u: goto L_0887AAF8;
    case 390u: goto L_0887AB10;
    case 391u: goto L_0887AB18;
    case 392u: goto L_0887AB28;
    case 393u: goto L_0887AB44;
    case 394u: goto L_0887AB4C;
    case 395u: goto L_0887AB54;
    case 396u: goto L_0887AB5C;
    case 397u: goto L_0887AB70;
    case 398u: goto L_0887AB80;
    case 399u: goto L_0887AB90;
    case 400u: goto L_0887AB9C;
    case 401u: goto L_0887ABAC;
    case 402u: goto L_0887ABBC;
    case 403u: goto L_0887ABC8;
    case 404u: goto L_0887ABD8;
    case 405u: goto L_0887ABE8;
    case 406u: goto L_0887ABF8;
    case 407u: goto L_0887AC08;
    case 408u: goto L_0887AC14;
    case 409u: goto L_0887AC28;
    case 410u: goto L_0887AC38;
    case 411u: goto L_0887AC40;
    case 412u: goto L_0887AC48;
    case 413u: goto L_0887AC50;
    case 414u: goto L_0887AC60;
    case 415u: goto L_0887AC68;
    case 416u: goto L_0887AC74;
    case 417u: goto L_0887AC7C;
    case 418u: goto L_0887AC84;
    case 419u: goto L_0887AC90;
    case 420u: goto L_0887AC98;
    case 421u: goto L_0887ACA4;
    case 422u: goto L_0887ACB0;
    case 423u: goto L_0887ACCC;
    case 424u: goto L_0887ACF0;
    case 425u: goto L_0887AD00;
    case 426u: goto L_0887AD0C;
    case 427u: goto L_0887AD1C;
    case 428u: goto L_0887AFD8;
    case 429u: goto L_0887B004;
    case 430u: goto L_0887B048;
    case 431u: goto L_0887B050;
    case 432u: goto L_0887B63C;
    case 433u: goto L_0887B650;
    case 434u: goto L_0887B658;
    case 435u: goto L_0887B660;
    case 436u: goto L_0887B770;
    case 437u: goto L_0887B794;
    case 438u: goto L_0887B7A0;
    case 439u: goto L_0887B7B0;
    case 440u: goto L_0887B7C0;
    case 441u: goto L_0887B7D0;
    case 442u: goto L_0887B7E0;
    case 443u: goto L_0887B7F0;
    case 444u: goto L_0887B800;
    case 445u: goto L_0887B818;
    case 446u: goto L_0887B820;
    case 447u: goto L_0887B82C;
    case 448u: goto L_0887B838;
    case 449u: goto L_0887B840;
    case 450u: goto L_0887B870;
    case 451u: goto L_0887B880;
    case 452u: goto L_0887B888;
    case 453u: goto L_0887B890;
    case 454u: goto L_0887B898;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08878000:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(15, 255u << 16u);
    ctx.set_gpr(6, ctx.gpr[13] + ctx.gpr[10]);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    ctx.set_gpr(3, ctx.gpr[8] >> 24u);
    ctx.set_gpr(12, ctx.gpr[8] << 8u);
    ctx.set_gpr(2, ctx.gpr[5] & 65280u);
    ctx.set_gpr(5, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[12] & ctx.gpr[15]);
    ctx.set_gpr(10, ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(12, ctx.gpr[8] << 24u);
    ctx.set_gpr(4, ctx.gpr[5] | ctx.gpr[7]);
    ctx.set_gpr(7, ctx.gpr[4] | ctx.gpr[12]);
    rt.memory().aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.set_gpr(14, ctx.gpr[13] + ctx.gpr[10]);
    ctx.set_gpr(8, ctx.gpr[10] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, ctx.gpr[13] + ctx.gpr[8]);
    ctx.set_gpr(14, ctx.gpr[8] + ctx.gpr[13]);
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    ctx.set_gpr(2, ctx.gpr[13] & 65280u);
    ctx.set_gpr(3, ctx.gpr[7] >> 24u);
    ctx.set_gpr(12, ctx.gpr[7] << 8u);
    ctx.set_gpr(5, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[12] & ctx.gpr[15]);
    ctx.set_gpr(13, ctx.gpr[5] | ctx.gpr[4]);
    ctx.set_gpr(8, ctx.gpr[7] << 24u);
    ctx.set_gpr(12, ctx.gpr[13] | ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(0), ctx.gpr[12]);
    ctx.set_gpr(12, 0u + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(24, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    ctx.set_gpr(2, ctx.gpr[24] & 65280u);
    ctx.set_gpr(3, ctx.gpr[7] >> 24u);
    ctx.set_gpr(10, ctx.gpr[7] << 8u);
    ctx.set_gpr(5, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[10] & ctx.gpr[15]);
    ctx.set_gpr(6, ctx.gpr[5] | ctx.gpr[4]);
    ctx.set_gpr(8, ctx.gpr[7] << 24u);
    ctx.set_gpr(24, ctx.gpr[6] | ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(0), ctx.gpr[24]);
    ctx.set_gpr(7, ctx.gpr[13] << 8u);
    ctx.set_gpr(10, (ctx.gpr[13] >> 8u) & 0x000000FFu);
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[10] | ctx.gpr[7]);
    rt.memory().aot_store16(ctx.gpr[25] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[24]) >> 8u));
    ctx.set_gpr(3, ctx.gpr[2] & 65280u);
    ctx.set_gpr(5, ctx.gpr[24] >> 24u);
    ctx.set_gpr(8, ctx.gpr[24] << 8u);
    ctx.set_gpr(25, ctx.gpr[5] | ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[8] & ctx.gpr[15]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(13, ctx.gpr[25] | ctx.gpr[6]);
    ctx.set_gpr(14, ctx.gpr[24] << 24u);
    ctx.set_gpr(11, ctx.gpr[13] | ctx.gpr[14]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    (void)rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 667u, 0x08877F34u>(ctx, &aot_mem); return;
L_088780EC:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[5]) < 20 ? 1u : 0u);
    ctx.set_gpr(10, ctx.gpr[4] + 0u);
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(11, ctx.gpr[5] + 0u);
    ctx.set_gpr(13, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0887812C;
      }
      goto L_0887810C;
    }
L_0887810C:
    ctx.set_gpr(15, rt.memory().aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u | 32768u);
    ctx.set_gpr(14, ctx.gpr[15] << 8u);
    ctx.set_gpr(12, ctx.gpr[15] >> 8u);
    ctx.set_gpr(6, ctx.gpr[12] | ctx.gpr[14]);
    ctx.set_gpr(3, ctx.gpr[6] & 65535u);
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[5];
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_0887813C;
      }
      goto L_0887812C;
    }
L_0887812C:
    ctx.set_gpr(6, ctx.gpr[4] + 0u);
    goto L_08878130;
L_08878130:
    ctx.set_gpr(2, ctx.gpr[6] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887813C:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(25, ctx.gpr[5] << 8u);
    ctx.set_gpr(24, (ctx.gpr[5] >> 8u) & 0x000000FFu);
    ctx.set_gpr(4, ctx.gpr[24] | ctx.gpr[25]);
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[4]))));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[14]) < 16 ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(24, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(18)));
        goto L_08878164;
    }
    goto L_0887815C;
L_0887815C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
    goto L_0887812C;
L_08878164:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(19)));
    ctx.set_gpr(12, 0u + static_cast<std::uint32_t>(60));
    ctx.set_gpr(15, ctx.gpr[24] ^ 4u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(72));
    if (ctx.gpr[15] == 0u) ctx.set_gpr(12, ctx.gpr[2]);
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[12]) ? 1u : 0u);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[24]));
      if (branch_taken) {
          goto L_08878130;
      }
      goto L_0887818C;
    }
L_0887818C:
    ctx.set_gpr(25, ctx.gpr[12] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(11, static_cast<std::int32_t>(ctx.gpr[14]) < static_cast<std::int32_t>(ctx.gpr[25]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_08878130;
      }
      goto L_0887819C;
    }
L_0887819C:
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(32));
    if (ctx.gpr[15] == 0u) ctx.set_gpr(3, ctx.gpr[11]);
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(15, ctx.gpr[10] + ctx.gpr[2]);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[15] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(15, ctx.gpr[2] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, ctx.gpr[15] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(14, ctx.gpr[5] << 8u);
    ctx.set_gpr(12, (ctx.gpr[5] >> 8u) & 0x000000FFu);
    ctx.set_gpr(25, ctx.gpr[12] | ctx.gpr[14]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[25]))));
    if (ctx.gpr[4] != 0u) ctx.set_gpr(15, ctx.gpr[6]);
    ctx.set_gpr(5, ctx.gpr[10] + ctx.gpr[15]);
    ctx.set_gpr(24, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(25, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(12, ctx.gpr[24] << 24u);
    ctx.set_gpr(14, ctx.gpr[3] << 16u);
    ctx.set_gpr(24, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(6, ctx.gpr[12] | ctx.gpr[14]);
    ctx.set_gpr(4, ctx.gpr[25] << 8u);
    ctx.set_gpr(3, ctx.gpr[6] | ctx.gpr[4]);
    ctx.set_gpr(5, 16713u << 16u);
    ctx.set_gpr(14, ctx.gpr[3] | ctx.gpr[24]);
    ctx.set_gpr(12, ctx.gpr[5] | 20038u);
    ctx.set_gpr(11, ctx.gpr[15] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[14] != ctx.gpr[12];
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08878130;
      }
      goto L_0887820C;
    }
L_0887820C:
    ctx.set_gpr(25, ctx.gpr[10] + ctx.gpr[11]);
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, 255u << 16u);
    ctx.set_gpr(25, ctx.gpr[11] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[15]) >> 8u));
    ctx.set_gpr(2, ctx.gpr[12] & 65280u);
    ctx.set_gpr(5, ctx.gpr[15] >> 24u);
    ctx.set_gpr(24, ctx.gpr[15] << 8u);
    ctx.set_gpr(6, ctx.gpr[5] | ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[24] & ctx.gpr[4]);
    ctx.set_gpr(12, ctx.gpr[6] | ctx.gpr[3]);
    ctx.set_gpr(14, ctx.gpr[15] << 24u);
    ctx.set_gpr(4, ctx.gpr[12] | ctx.gpr[14]);
    rt.memory().aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(24, ctx.gpr[10] + ctx.gpr[25]);
    ctx.set_gpr(13, ctx.gpr[25] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(2, rt.memory().aot_load_word_left(ctx.gpr[24] + static_cast<std::uint32_t>(3), ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load_word_right(ctx.gpr[24] + static_cast<std::uint32_t>(0), ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load_word_left(ctx.gpr[24] + static_cast<std::uint32_t>(7), ctx.gpr[4]));
    ctx.set_gpr(4, rt.memory().aot_load_word_right(ctx.gpr[24] + static_cast<std::uint32_t>(4), ctx.gpr[4]));
    ctx.set_gpr(5, rt.memory().aot_load_word_left(ctx.gpr[24] + static_cast<std::uint32_t>(11), ctx.gpr[5]));
    ctx.set_gpr(5, rt.memory().aot_load_word_right(ctx.gpr[24] + static_cast<std::uint32_t>(8), ctx.gpr[5]));
    ctx.set_gpr(6, rt.memory().aot_load_word_left(ctx.gpr[24] + static_cast<std::uint32_t>(15), ctx.gpr[6]));
    ctx.set_gpr(6, rt.memory().aot_load_word_right(ctx.gpr[24] + static_cast<std::uint32_t>(12), ctx.gpr[6]));
    rt.memory().aot_store_word_left(ctx.gpr[7] + static_cast<std::uint32_t>(3), ctx.gpr[2]);
    rt.memory().aot_store_word_right(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store_word_left(ctx.gpr[7] + static_cast<std::uint32_t>(7), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    rt.memory().aot_store_word_left(ctx.gpr[7] + static_cast<std::uint32_t>(11), ctx.gpr[5]);
    rt.memory().aot_store_word_right(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    rt.memory().aot_store_word_left(ctx.gpr[7] + static_cast<std::uint32_t>(15), ctx.gpr[6]);
    rt.memory().aot_store_word_right(ctx.gpr[7] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.set_gpr(7, ctx.gpr[10] + ctx.gpr[13]);
    ctx.set_gpr(2, ctx.gpr[13] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(15, ctx.gpr[10] + ctx.gpr[2]);
    ctx.set_gpr(24, ctx.gpr[2] + ctx.gpr[10]);
    ctx.set_gpr(11, ctx.gpr[3] << 8u);
    ctx.set_gpr(5, (ctx.gpr[3] >> 8u) & 0x000000FFu);
    ctx.set_gpr(6, ctx.gpr[5] | ctx.gpr[11]);
    rt.memory().aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[15] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(12, ctx.gpr[14] << 8u);
    ctx.set_gpr(25, (ctx.gpr[14] >> 8u) & 0x000000FFu);
    ctx.set_gpr(4, ctx.gpr[25] | ctx.gpr[12]);
    rt.memory().aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[24] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(10, ctx.gpr[13] << 8u);
    ctx.set_gpr(8, (ctx.gpr[13] >> 8u) & 0x000000FFu);
    ctx.set_gpr(7, ctx.gpr[8] | ctx.gpr[10]);
    rt.memory().aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[7]));
    goto L_08878130;
L_088782E0:
    ctx.fpr[6] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(9, 2225u << 16u);
    ctx.fpr[21] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(6)));
    ctx.fpr[3] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[5] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12144)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(3)));
    { const float fs = ctx.fpr[21]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(19, 0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.set_gpr(5, 2225u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12140)));
    ctx.set_gpr(8, 2225u << 16u);
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[20];
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12148)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08878338u);
    ctx.fpr[20] = std::sqrt(ctx.fpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 361u, 0x0880DE00u>(ctx, &aot_mem) && ctx.pc == 0x08878338u) goto L_08878338;
    return;
L_08878338:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.fpr[7] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12152)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[17] = ctx.fpr[20] - ctx.fpr[0];
    ctx.fpr[16] = ctx.fpr[20] - ctx.fpr[21];
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[10] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = ctx.fpr[10] + ctx.fpr[15];
    ctx.fpr[14] = ctx.fpr[10] - ctx.fpr[15];
    ctx.fpr[9] = ctx.fpr[21] / ctx.fpr[15];
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[11] = std::sqrt(ctx.fpr[12]);
    ctx.fpr[8] = ctx.fpr[10] - ctx.fpr[11];
    { const float fs = ctx.fpr[8]; const float ft = ctx.fpr[9]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_fpr_bits(2, ctx.fpr_bits(1) ^ 0x80000000u);
    ctx.fpr[4] = ctx.fpr[1] + ctx.fpr[1];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(6, 0x7FC00000u); else ctx.fpr[6] = fs * ft; }
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[7]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    { const float fs = ctx.fpr[6]; const float ft = ctx.fpr[7]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(5, 0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[3], 1u));
    ctx.set_fpr_bits(3, ctx.fpu_float_to_word(ctx.fpr[5], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887846C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < 18 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088784D0;
      }
      goto L_08878478;
    }
L_08878478:
    ctx.set_gpr(11, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u | 32768u);
    ctx.set_gpr(10, ctx.gpr[11] << 8u);
    ctx.set_gpr(9, ctx.gpr[11] >> 8u);
    ctx.set_gpr(8, ctx.gpr[9] | ctx.gpr[10]);
    ctx.set_gpr(3, ctx.gpr[8] & 65535u);
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[5];
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_088784D0;
      }
      goto L_08878498;
    }
L_08878498:
    ctx.set_gpr(25, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(24, ctx.gpr[25] << 8u);
    ctx.set_gpr(15, (ctx.gpr[25] >> 8u) & 0x000000FFu);
    ctx.set_gpr(14, ctx.gpr[15] | ctx.gpr[24]);
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[14]))));
    ctx.set_gpr(12, static_cast<std::int32_t>(ctx.gpr[13]) < 14 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[12] != 0u;
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088784D0;
      }
      goto L_088784B8;
    }
L_088784B8:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(8, ctx.gpr[3] << 8u);
    ctx.set_gpr(5, ctx.gpr[3] >> 8u);
    ctx.set_gpr(4, ctx.gpr[5] | ctx.gpr[8]);
    rt.memory().aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_088784D0;
L_088784D0:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[7] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088784D8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08878538;
      }
      goto L_088784E4;
    }
L_088784E4:
    ctx.set_gpr(12, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u | 32768u);
    ctx.set_gpr(11, ctx.gpr[12] << 8u);
    ctx.set_gpr(10, ctx.gpr[12] >> 8u);
    ctx.set_gpr(9, ctx.gpr[10] | ctx.gpr[11]);
    ctx.set_gpr(3, ctx.gpr[9] & 65535u);
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[5];
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08878538;
      }
      goto L_08878504;
    }
L_08878504:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(25, ctx.gpr[5] << 8u);
    ctx.set_gpr(24, (ctx.gpr[5] >> 8u) & 0x000000FFu);
    ctx.set_gpr(15, ctx.gpr[24] | ctx.gpr[25]);
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[15]))));
    ctx.set_gpr(13, static_cast<std::int32_t>(ctx.gpr[14]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] != 0u;
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08878538;
      }
      goto L_08878524;
    }
L_08878524:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(18)));
    ctx.set_gpr(8, 0u + 0u);
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(19)));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_08878538;
L_08878538:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[8] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08878604:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0887864C;
      }
      goto L_08878610;
    }
L_08878610:
    ctx.set_gpr(11, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u | 32769u);
    ctx.set_gpr(10, ctx.gpr[11] << 8u);
    ctx.set_gpr(9, ctx.gpr[11] >> 8u);
    ctx.set_gpr(8, ctx.gpr[9] | ctx.gpr[10]);
    ctx.set_gpr(3, ctx.gpr[8] & 65535u);
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[5];
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_0887864C;
      }
      goto L_08878630;
    }
L_08878630:
    ctx.set_gpr(15, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(14, ctx.gpr[15] << 8u);
    ctx.set_gpr(13, (ctx.gpr[15] >> 8u) & 0x000000FFu);
    ctx.set_gpr(12, ctx.gpr[13] | ctx.gpr[14]);
    ctx.set_gpr(4, ctx.gpr[12] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_0887864C;
L_0887864C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[7] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088786A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[8]))));
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[9]))));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.set_gpr(15, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[11]))));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(25, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(24, 0u + static_cast<std::uint32_t>(32767));
    ctx.set_gpr(18, ctx.gpr[10] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    ctx.set_gpr(21, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(2))))));
      if (branch_taken) {
          goto L_08878880;
      }
      goto L_08878704;
    }
L_08878704:
    ctx.set_gpr(22, 2225u << 16u);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[15] + static_cast<std::uint32_t>(0))))));
    goto L_0887870C;
L_0887870C:
    ctx.set_gpr(4, (ctx.gpr[3] >> 8u) & 0x000000FFu);
    ctx.set_gpr(7, ctx.gpr[3] << 8u);
    ctx.set_gpr(6, ctx.gpr[4] | ctx.gpr[7]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[6]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.set_gpr(5, ctx.gpr[11] + 0u);
      if (branch_taken) {
          goto L_0887888C;
      }
      goto L_08878724;
    }
L_08878724:
    ctx.set_gpr(7, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(15, ctx.gpr[15] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(10, ctx.gpr[22] + static_cast<std::uint32_t>(12164));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.gpr[4] ^ ctx.gpr[7]);
    ctx.set_gpr(4, ctx.gpr[6] & 8191u);
    ctx.set_gpr(6, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(30));
    ctx.set_gpr(14, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[21] + ctx.gpr[14]);
    ctx.set_gpr(2, ctx.gpr[5] & 32767u);
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(14, ctx.gpr[16] + 0u);
    goto L_08878758;
L_08878758:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[13])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[15] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(13, ctx.gpr[12] + 0u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 4u));
    ctx.set_gpr(5, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[12])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.gpr[3] & 15u);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(12, ctx.gpr[3] + ctx.gpr[10]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(12, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 12u));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[13])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(12, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(12, static_cast<std::int32_t>(ctx.gpr[12]) < static_cast<std::int32_t>(ctx.gpr[24]) ? ctx.gpr[12] : ctx.gpr[24]);
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[12]) > static_cast<std::int32_t>(ctx.gpr[25]) ? ctx.gpr[12] : ctx.gpr[25]);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    rt.memory().aot_store16(ctx.gpr[14] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.set_gpr(2, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(12, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.gpr[12] + ctx.gpr[2]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 12u));
    ctx.set_gpr(13, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(12, ctx.gpr[4] + ctx.gpr[13]);
    ctx.set_gpr(12, static_cast<std::int32_t>(ctx.gpr[12]) < static_cast<std::int32_t>(ctx.gpr[24]) ? ctx.gpr[12] : ctx.gpr[24]);
    ctx.set_gpr(13, static_cast<std::int32_t>(ctx.gpr[12]) > static_cast<std::int32_t>(ctx.gpr[25]) ? ctx.gpr[12] : ctx.gpr[25]);
    rt.memory().aot_store16(ctx.gpr[14] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[13]));
    ctx.set_gpr(3, ctx.gpr[13] + 0u);
    ctx.set_gpr(5, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[15] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(15, ctx.gpr[15] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 4u));
    ctx.set_gpr(12, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.gpr[4] & 15u);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[10]);
    ctx.set_gpr(2, ctx.gpr[12] + ctx.gpr[5]);
    ctx.set_gpr(4, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[13])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 12u));
    ctx.set_gpr(5, ctx.gpr[12] + ctx.gpr[4]);
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[24]) ? ctx.gpr[5] : ctx.gpr[24]);
    ctx.set_gpr(12, static_cast<std::int32_t>(ctx.gpr[5]) > static_cast<std::int32_t>(ctx.gpr[25]) ? ctx.gpr[5] : ctx.gpr[25]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[12])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    rt.memory().aot_store16(ctx.gpr[14] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[12]));
    ctx.set_gpr(13, ctx.gpr[12] + 0u);
    ctx.set_gpr(5, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(12, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 12u));
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(12, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(12, static_cast<std::int32_t>(ctx.gpr[12]) < static_cast<std::int32_t>(ctx.gpr[24]) ? ctx.gpr[12] : ctx.gpr[24]);
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[12]) > static_cast<std::int32_t>(ctx.gpr[25]) ? ctx.gpr[12] : ctx.gpr[25]);
    rt.memory().aot_store16(ctx.gpr[14] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(12, ctx.gpr[3] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) >= 0;
    ctx.set_gpr(14, ctx.gpr[14] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08878758;
      }
      goto L_08878870;
    }
L_08878870:
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    if (ctx.gpr[10] != 0u) {
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[15] + static_cast<std::uint32_t>(0))))));
        goto L_0887870C;
    }
    goto L_08878880;
L_08878880:
    rt.memory().aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[13]));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    rt.memory().aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[12]));
    goto L_0887888C;
L_0887888C:
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088788B4:
    ctx.set_gpr(13, ctx.gpr[5] >> 31u);
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.set_gpr(12, ctx.gpr[5] + ctx.gpr[13]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 1u));
    ctx.set_gpr(25, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(88))))));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    ctx.set_gpr(30, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.set_gpr(17, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[10]))));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[11]))));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(84))))));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(15, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(2))))));
      if (branch_taken) {
          goto L_08878C28;
      }
      goto L_08878930;
    }
L_08878930:
    ctx.set_gpr(19, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[25] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, (ctx.gpr[19] >> 8u) & 0x000000FFu);
    ctx.set_gpr(18, ctx.gpr[19] << 8u);
    ctx.set_gpr(11, ctx.gpr[4] | ctx.gpr[18]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[11]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.set_gpr(10, ctx.gpr[30] << 1u);
      if (branch_taken) {
          goto L_08878C44;
      }
      goto L_0887894C;
    }
L_0887894C:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(11, rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[11])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(22, ctx.gpr[4] ^ ctx.gpr[11]);
    ctx.set_gpr(13, ctx.gpr[22] & 8191u);
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(12, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[12] & 32767u);
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.set_gpr(24, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[25] + static_cast<std::uint32_t>(18))))));
    ctx.set_gpr(23, ctx.gpr[24] << 8u);
    ctx.set_gpr(21, (ctx.gpr[24] >> 8u) & 0x000000FFu);
    ctx.set_gpr(20, ctx.gpr[21] | ctx.gpr[23]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[20]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.set_gpr(22, ctx.gpr[13] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08878C44;
      }
      goto L_08878998;
    }
L_08878998:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(21, ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.set_gpr(23, 26214u << 16u);
    ctx.set_gpr(5, ctx.gpr[21] & 8191u);
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(12, ctx.lo);
    ctx.set_gpr(24, ctx.gpr[2] + ctx.gpr[12]);
    ctx.set_gpr(20, ctx.gpr[24] & 32767u);
    rt.memory().aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[20]));
    ctx.set_gpr(21, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(20, ctx.gpr[23] | 26215u);
    ctx.set_gpr(25, ctx.gpr[25] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(11, 0u | 32768u);
    ctx.set_gpr(10, 0u | 65535u);
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(32767));
    ctx.set_gpr(23, ctx.gpr[4] + static_cast<std::uint32_t>(12164));
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(30));
    goto L_088789E8;
L_088789E8:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[25] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(24, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[25] + static_cast<std::uint32_t>(18))))));
    ctx.set_gpr(25, ctx.gpr[25] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[13]) >> 4u));
    ctx.set_gpr(2, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[14])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(12, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 12u));
    ctx.set_gpr(7, ctx.lo);
    ctx.set_gpr(12, ctx.gpr[2] + ctx.gpr[7]);
    ctx.set_gpr(4, ctx.gpr[12] + ctx.gpr[11]);
    ctx.set_gpr(7, ctx.gpr[10] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[24]) >> 4u));
      if (branch_taken) {
          goto L_08878A44;
      }
      goto L_08878A2C;
    }
L_08878A2C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[12]) ? 1u : 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(32767));
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[12]) < -32768 ? 1u : 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-32768));
    if (ctx.gpr[2] != 0u) ctx.set_gpr(12, ctx.gpr[3]);
    if (ctx.gpr[7] != 0u) ctx.set_gpr(12, ctx.gpr[4]);
    goto L_08878A44;
L_08878A44:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(7, ctx.gpr[14] + 0u);
    ctx.set_gpr(14, ctx.gpr[12] + 0u);
    ctx.set_gpr(3, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[15])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[21])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(12, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 12u));
    ctx.set_gpr(9, ctx.lo);
    ctx.set_gpr(12, ctx.gpr[4] + ctx.gpr[9]);
    ctx.set_gpr(5, ctx.gpr[12] + ctx.gpr[11]);
    ctx.set_gpr(9, ctx.gpr[10] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.set_gpr(3, ctx.gpr[14] + ctx.gpr[12]);
      if (branch_taken) {
          goto L_08878A9C;
      }
      goto L_08878A80;
    }
L_08878A80:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[12]) ? 1u : 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(32767));
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[12]) < -32768 ? 1u : 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-32768));
    if (ctx.gpr[2] != 0u) ctx.set_gpr(12, ctx.gpr[3]);
    if (ctx.gpr[9] != 0u) ctx.set_gpr(12, ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[14] + ctx.gpr[12]);
    goto L_08878A9C;
L_08878A9C:
    ctx.set_gpr(5, ctx.gpr[3] << 3u);
    ctx.set_gpr(4, ctx.gpr[5] - ctx.gpr[3]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(9, ctx.gpr[15] + 0u);
    ctx.set_gpr(15, ctx.gpr[12] + 0u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    ctx.set_gpr(12, ctx.hi);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 2u));
    ctx.set_gpr(12, ctx.gpr[5] - ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[12] + ctx.gpr[11]);
    ctx.set_gpr(4, ctx.gpr[10] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
      if (branch_taken) {
          goto L_08878AE8;
      }
      goto L_08878AD0;
    }
L_08878AD0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[12]) ? 1u : 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(32767));
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[12]) < -32768 ? 1u : 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-32768));
    if (ctx.gpr[2] != 0u) ctx.set_gpr(12, ctx.gpr[3]);
    if (ctx.gpr[5] != 0u) ctx.set_gpr(12, ctx.gpr[4]);
    goto L_08878AE8;
L_08878AE8:
    ctx.set_gpr(4, ctx.gpr[13] & 15u);
    ctx.set_gpr(5, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[23]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[14])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    rt.memory().aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[12]));
    ctx.set_gpr(4, ctx.gpr[24] & 15u);
    ctx.set_gpr(24, ctx.gpr[4] << 2u);
    rt.memory().aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[12]));
    ctx.set_gpr(7, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(12, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 12u));
    ctx.set_gpr(13, ctx.gpr[24] + ctx.gpr[23]);
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(12, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[12] + ctx.gpr[11]);
    ctx.set_gpr(13, ctx.gpr[10] < ctx.gpr[7] ? 1u : 0u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08878B5C;
      }
      goto L_08878B44;
    }
L_08878B44:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[12]) ? 1u : 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(32767));
    ctx.set_gpr(13, static_cast<std::int32_t>(ctx.gpr[12]) < -32768 ? 1u : 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-32768));
    if (ctx.gpr[2] != 0u) ctx.set_gpr(12, ctx.gpr[3]);
    if (ctx.gpr[13] != 0u) ctx.set_gpr(12, ctx.gpr[7]);
    goto L_08878B5C;
L_08878B5C:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(7, ctx.gpr[14] + 0u);
    ctx.set_gpr(14, ctx.gpr[12] + 0u);
    ctx.set_gpr(3, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[15])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(13, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[24])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[21])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(12, ctx.gpr[13] + ctx.gpr[3]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 12u));
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(12, ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_gpr(24, ctx.gpr[12] + ctx.gpr[11]);
    ctx.set_gpr(9, ctx.gpr[10] < ctx.gpr[24] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.set_gpr(3, ctx.gpr[14] + ctx.gpr[12]);
      if (branch_taken) {
          goto L_08878BB4;
      }
      goto L_08878B98;
    }
L_08878B98:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[12]) ? 1u : 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(32767));
    ctx.set_gpr(24, static_cast<std::int32_t>(ctx.gpr[12]) < -32768 ? 1u : 0u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(-32768));
    if (ctx.gpr[2] != 0u) ctx.set_gpr(12, ctx.gpr[5]);
    if (ctx.gpr[24] != 0u) ctx.set_gpr(12, ctx.gpr[9]);
    ctx.set_gpr(3, ctx.gpr[14] + ctx.gpr[12]);
    goto L_08878BB4;
L_08878BB4:
    ctx.set_gpr(13, ctx.gpr[3] << 3u);
    ctx.set_gpr(4, ctx.gpr[13] - ctx.gpr[3]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(9, ctx.gpr[15] + 0u);
    ctx.set_gpr(15, ctx.gpr[12] + 0u);
    ctx.set_gpr(24, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    ctx.set_gpr(12, ctx.hi);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 2u));
    ctx.set_gpr(12, ctx.gpr[5] - ctx.gpr[24]);
    ctx.set_gpr(13, ctx.gpr[12] + ctx.gpr[11]);
    ctx.set_gpr(4, ctx.gpr[10] < ctx.gpr[13] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08878C00;
      }
      goto L_08878BE8;
    }
L_08878BE8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[12]) ? 1u : 0u);
    ctx.set_gpr(13, 0u + static_cast<std::uint32_t>(32767));
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[12]) < -32768 ? 1u : 0u);
    ctx.set_gpr(24, 0u + static_cast<std::uint32_t>(-32768));
    if (ctx.gpr[2] != 0u) ctx.set_gpr(12, ctx.gpr[13]);
    if (ctx.gpr[5] != 0u) ctx.set_gpr(12, ctx.gpr[24]);
    goto L_08878C00;
L_08878C00:
    rt.memory().aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[12]));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(2));
    rt.memory().aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[12]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) >= 0;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088789E8;
      }
      goto L_08878C14;
    }
L_08878C14:
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(30, ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(22, static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[11]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.set_gpr(25, ctx.gpr[25] + static_cast<std::uint32_t>(18));
      if (branch_taken) {
          goto L_08878930;
      }
      goto L_08878C28;
    }
L_08878C28:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[7]));
    rt.memory().aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[14]));
    rt.memory().aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[9]));
    rt.memory().aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[15]));
    goto L_08878C44;
L_08878C44:
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, ctx.gpr[10] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08878C74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    ctx.set_gpr(25, ctx.gpr[8] + 0u);
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(88))))));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    ctx.set_gpr(24, ctx.gpr[4] + 0u);
    ctx.set_gpr(30, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(32767));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(-32768));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.set_gpr(17, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[10]))));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[11]))));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(84))))));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(2))))));
      if (branch_taken) {
          goto L_08878EBC;
      }
      goto L_08878CF0;
    }
L_08878CF0:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[24] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(6, ctx.gpr[8] << 8u);
    ctx.set_gpr(5, (ctx.gpr[8] >> 8u) & 0x000000FFu);
    ctx.set_gpr(4, ctx.gpr[5] | ctx.gpr[6]);
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[4]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    ctx.set_gpr(7, ctx.gpr[30] << 1u);
      if (branch_taken) {
          goto L_08878ED8;
      }
      goto L_08878D0C;
    }
L_08878D0C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[24] + static_cast<std::uint32_t>(18))))));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, (ctx.gpr[14] >> 8u) & 0x000000FFu);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(8, ctx.gpr[14] << 8u);
    ctx.set_gpr(18, ctx.gpr[2] | ctx.gpr[8]);
    ctx.set_gpr(23, ctx.gpr[6] ^ ctx.gpr[5]);
    ctx.set_gpr(15, ctx.gpr[23] & 8191u);
    ctx.set_gpr(21, ctx.lo);
    ctx.set_gpr(14, ctx.gpr[22] + ctx.gpr[21]);
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[18]))));
    ctx.set_gpr(22, ctx.gpr[15] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    ctx.set_gpr(2, ctx.gpr[14] & 32767u);
      if (branch_taken) {
          goto L_08878ED8;
      }
      goto L_08878D50;
    }
L_08878D50:
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(21, ctx.gpr[6] ^ ctx.gpr[2]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[14])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(8, ctx.gpr[21] & 8191u);
    ctx.set_gpr(7, 2225u << 16u);
    ctx.set_gpr(21, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(23, ctx.lo);
    ctx.set_gpr(18, ctx.gpr[5] + ctx.gpr[23]);
    ctx.set_gpr(15, ctx.gpr[18] & 32767u);
    rt.memory().aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[15]));
    ctx.set_gpr(24, ctx.gpr[24] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(23, ctx.gpr[7] + static_cast<std::uint32_t>(12164));
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(30));
    goto L_08878D8C;
L_08878D8C:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(18))))));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 4u));
    ctx.set_gpr(4, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[11])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(10, ctx.gpr[8] & 15u);
    ctx.set_gpr(14, ctx.gpr[10] << 2u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 4u));
    ctx.set_gpr(3, ctx.gpr[2] & 15u);
    ctx.set_gpr(8, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[13])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(11, ctx.gpr[3] << 2u);
    ctx.set_gpr(15, ctx.gpr[11] + ctx.gpr[23]);
    ctx.set_gpr(7, ctx.gpr[14] + ctx.gpr[23]);
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[12])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(11, ctx.gpr[13] + 0u);
    ctx.set_gpr(2, ctx.gpr[10] + ctx.gpr[4]);
    ctx.set_gpr(13, ctx.gpr[12] + 0u);
    ctx.set_gpr(3, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[8]);
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 12u));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 12u));
    ctx.set_gpr(24, ctx.gpr[24] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[21])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(12, ctx.gpr[10] + ctx.gpr[7]);
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[12]) < static_cast<std::int32_t>(ctx.gpr[20]) ? ctx.gpr[12] : ctx.gpr[20]);
    ctx.set_gpr(12, static_cast<std::int32_t>(ctx.gpr[6]) > static_cast<std::int32_t>(ctx.gpr[19]) ? ctx.gpr[6] : ctx.gpr[19]);
    rt.memory().aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[12]));
    ctx.set_gpr(8, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[11])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(7, ctx.gpr[3] + ctx.gpr[8]);
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[20]) ? ctx.gpr[7] : ctx.gpr[20]);
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[10]) > static_cast<std::int32_t>(ctx.gpr[19]) ? ctx.gpr[10] : ctx.gpr[19]);
    ctx.set_gpr(10, ctx.gpr[12] + 0u);
    ctx.set_gpr(2, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[13])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    rt.memory().aot_store16(ctx.gpr[25] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.set_gpr(11, ctx.gpr[8] + 0u);
    ctx.set_gpr(6, ctx.gpr[9] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, ctx.gpr[25] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(3, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[12])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(9, ctx.gpr[6] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(25, ctx.gpr[7] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(13, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.gpr[13] + ctx.gpr[2]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 12u));
    ctx.set_gpr(12, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[14])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(14, ctx.gpr[12] + ctx.gpr[3]);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[14]) >> 12u));
    ctx.set_gpr(8, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[15])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[21])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(13, ctx.gpr[4] + ctx.gpr[8]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[13]) < static_cast<std::int32_t>(ctx.gpr[20]) ? ctx.gpr[13] : ctx.gpr[20]);
    ctx.set_gpr(13, static_cast<std::int32_t>(ctx.gpr[2]) > static_cast<std::int32_t>(ctx.gpr[19]) ? ctx.gpr[2] : ctx.gpr[19]);
    rt.memory().aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[13]));
    ctx.set_gpr(15, ctx.lo);
    ctx.set_gpr(12, ctx.gpr[5] + ctx.gpr[15]);
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[12]) < static_cast<std::int32_t>(ctx.gpr[20]) ? ctx.gpr[12] : ctx.gpr[20]);
    ctx.set_gpr(12, static_cast<std::int32_t>(ctx.gpr[3]) > static_cast<std::int32_t>(ctx.gpr[19]) ? ctx.gpr[3] : ctx.gpr[19]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) >= 0;
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[12]));
      if (branch_taken) {
          goto L_08878D8C;
      }
      goto L_08878EA8;
    }
L_08878EA8:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(30, ctx.gpr[30] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(22, static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.set_gpr(24, ctx.gpr[24] + static_cast<std::uint32_t>(18));
      if (branch_taken) {
          goto L_08878CF0;
      }
      goto L_08878EBC;
    }
L_08878EBC:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[10]));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[13]));
    rt.memory().aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[11]));
    rt.memory().aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[12]));
    goto L_08878ED8;
L_08878ED8:
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, ctx.gpr[7] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08878F08:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26804)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[10]))));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[11]))));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.set_gpr(10, ctx.gpr[12] + 0u);
    ctx.set_gpr(11, ctx.gpr[2] + 0u);
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(36))))));
    { const bool branch_taken = ctx.gpr[24] != 0u;
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(40))))));
      if (branch_taken) {
          goto L_08878F54;
      }
      goto L_08878F38;
    }
L_08878F38:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[15]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[13]);
    ctx.set_gpr(31, 0x08878F48u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[14]);
    goto L_08878C74;
L_08878F48:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_08878F4C;
L_08878F4C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08878F54:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[15]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[13]);
    ctx.set_gpr(31, 0x08878F64u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[14]);
    goto L_088788B4;
L_08878F64:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_08878F4C;
L_08878F6C:
    ctx.set_gpr(3, 2247u << 16u);
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(-18412));
    ctx.set_gpr(5, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08878F88u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08878F88u) goto L_08878F88;
    return;
L_08878F88:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-26800), 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26796), 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08878FA4:
    ctx.set_gpr(3, 2247u << 16u);
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(-18412));
    ctx.set_gpr(5, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08878FC0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08878FC0u) goto L_08878FC0;
    return;
L_08878FC0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-26800), 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26796), 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08878FDC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(7, 2245u << 16u);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-26800), ctx.gpr[4]);
    ctx.set_gpr(31, 0x08878FF8u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-26796), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 516u, 0x088A3068u>(ctx, &aot_mem) && ctx.pc == 0x08878FF8u) goto L_08878FF8;
    return;
L_08878FF8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08879004:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[3] + static_cast<std::uint32_t>(-18412));
    ctx.set_gpr(3, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08879078;
      }
      goto L_08879030;
    }
L_08879030:
    ctx.set_gpr(31, 0x08879038u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 639u, 0x0888F250u>(ctx, &aot_mem) && ctx.pc == 0x08879038u) goto L_08879038;
    return;
L_08879038:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26800)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08879064;
      }
      goto L_08879048;
    }
L_08879048:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0887904C;
L_0887904C:
    ctx.set_gpr(31, 0x08879054u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 417u, 0x088A2290u>(ctx, &aot_mem) && ctx.pc == 0x08879054u) goto L_08879054;
    return;
L_08879054:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08879064:
    ctx.set_gpr(6, 2245u << 16u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x08879070u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-26796)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08879070u) goto L_08879070;
    return;
L_08879070:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0887904C;
L_08879078:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(12228));
    goto L_0887904C;
L_08879084:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, 2247u << 16u);
    ctx.set_gpr(9, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(10, ctx.gpr[16] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(8, ctx.gpr[9] | ctx.gpr[10]);
    ctx.set_gpr(17, ctx.gpr[3] + static_cast<std::uint32_t>(-18412));
    ctx.set_gpr(6, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(256));
      if (branch_taken) {
          goto L_088790E8;
      }
      goto L_088790C4;
    }
L_088790C4:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(12228));
    goto L_088790CC;
L_088790CC:
    ctx.set_gpr(31, 0x088790D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 417u, 0x088A2290u>(ctx, &aot_mem) && ctx.pc == 0x088790D4u) goto L_088790D4;
    return;
L_088790D4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088790E8:
    ctx.set_gpr(31, 0x088790F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 639u, 0x0888F250u>(ctx, &aot_mem) && ctx.pc == 0x088790F0u) goto L_088790F0;
    return;
L_088790F0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(31, 0x08879104u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 643u, 0x0888F28Cu>(ctx, &aot_mem) && ctx.pc == 0x08879104u) goto L_08879104;
    return;
L_08879104:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26800)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
      if (branch_taken) {
          goto L_0887911C;
      }
      goto L_08879114;
    }
L_08879114:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_088790CC;
L_0887911C:
    ctx.set_gpr(6, 2245u << 16u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x08879128u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-26796)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08879128u) goto L_08879128;
    return;
L_08879128:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_088790CC;
L_0887935C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.set_gpr(2, 26214u << 16u);
    ctx.set_gpr(8, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.set_gpr(10, ctx.gpr[2] | 26215u);
    ctx.set_gpr(9, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    goto L_08879398;
L_08879398:
    ctx.set_gpr(15, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 31u));
    ctx.set_gpr(6, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[9] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(13, ctx.gpr[9] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(16, ctx.hi);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 2u));
    ctx.set_gpr(5, ctx.gpr[3] - ctx.gpr[15]);
    ctx.set_gpr(14, ctx.gpr[5] << 2u);
    ctx.set_gpr(11, ctx.gpr[14] + ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[11] << 1u);
    ctx.set_gpr(12, ctx.gpr[8] - ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[9]);
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 31u));
    ctx.set_gpr(11, ctx.gpr[17] + ctx.gpr[13]);
    ctx.set_gpr(5, ctx.gpr[17] + ctx.gpr[6]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.set_gpr(6, ctx.gpr[17] + ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[9]) < 32 ? 1u : 0u);
      if (branch_taken) {
          goto L_088797CC;
      }
      goto L_088793EC;
    }
L_088793EC:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(14, ctx.hi);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[14]) >> 2u));
    ctx.set_gpr(24, ctx.gpr[2] - ctx.gpr[4]);
    ctx.set_gpr(13, ctx.gpr[24] << 2u);
    ctx.set_gpr(12, ctx.gpr[13] + ctx.gpr[24]);
    ctx.set_gpr(25, ctx.gpr[12] << 1u);
    ctx.set_gpr(20, ctx.gpr[8] - ctx.gpr[25]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[24]) >> 31u));
    ctx.set_gpr(8, ctx.gpr[24] + 0u);
    { const bool branch_taken = ctx.gpr[24] == 0u;
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[20]));
      if (branch_taken) {
          goto L_088797C4;
      }
      goto L_0887941C;
    }
L_0887941C:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[24])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(25, ctx.hi);
    ctx.set_gpr(24, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[25]) >> 2u));
    ctx.set_gpr(15, ctx.gpr[24] - ctx.gpr[4]);
    ctx.set_gpr(20, ctx.gpr[15] << 2u);
    ctx.set_gpr(16, ctx.gpr[20] + ctx.gpr[15]);
    ctx.set_gpr(4, ctx.gpr[16] << 1u);
    ctx.set_gpr(5, ctx.gpr[8] - ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(8, ctx.gpr[15] + 0u);
    { const bool branch_taken = ctx.gpr[15] == 0u;
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[15]) >> 31u));
      if (branch_taken) {
          goto L_088797BC;
      }
      goto L_0887944C;
    }
L_0887944C:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[15])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(15, ctx.hi);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[15]) >> 2u));
    ctx.set_gpr(6, ctx.gpr[2] - ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[6] << 2u);
    ctx.set_gpr(14, ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_gpr(13, ctx.gpr[14] << 1u);
    ctx.set_gpr(12, ctx.gpr[8] - ctx.gpr[13]);
    rt.memory().aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[12]));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
      if (branch_taken) {
          goto L_088797B4;
      }
      goto L_08879478;
    }
L_08879478:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
      if (branch_taken) {
          goto L_08879398;
      }
      goto L_08879480;
    }
L_08879480:
    ctx.set_gpr(20, 2245u << 16u);
    ctx.set_gpr(16, ctx.gpr[20] + static_cast<std::uint32_t>(-26792));
    ctx.set_gpr(31, 0x08879490u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08879490u) goto L_08879490;
    return;
L_08879490:
    ctx.set_gpr(9, ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[2]) ? ctx.gpr[9] : ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    ctx.set_gpr(8, 0u + 0u);
      if (branch_taken) {
          goto L_08879514;
      }
      goto L_088794A0;
    }
L_088794A0:
    ctx.set_gpr(4, ctx.gpr[7] + ctx.gpr[16]);
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[7]) < 2 ? 1u : 0u);
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.set_gpr(3, ctx.gpr[7] & 3u);
      if (branch_taken) {
          goto L_08879774;
      }
      goto L_088794B4;
    }
L_088794B4:
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[17] + ctx.gpr[8]);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[12]));
    { const bool branch_taken = ctx.gpr[25] == 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08879514;
      }
      goto L_088794D0;
    }
L_088794D0:
    ctx.set_gpr(4, ctx.gpr[8] + ctx.gpr[17]);
    goto L_088794D4;
L_088794D4:
    ctx.set_gpr(16, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(11, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(9, ctx.gpr[11] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.set_gpr(2, ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(13, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.set_gpr(15, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[15]));
    ctx.set_gpr(14, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[14]));
    { const bool branch_taken = ctx.gpr[13] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088794D4;
      }
      goto L_08879514;
    }
L_08879514:
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[8]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08879528u);
    ctx.set_gpr(16, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08879528u) goto L_08879528;
    return;
L_08879528:
    ctx.set_gpr(5, ctx.gpr[18] - ctx.gpr[2]);
    ctx.set_gpr(8, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(18, 2225u << 16u);
    ctx.set_gpr(7, ctx.gpr[8] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + static_cast<std::uint32_t>(12236));
    ctx.set_gpr(31, 0x08879548u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 643u, 0x0888F28Cu>(ctx, &aot_mem) && ctx.pc == 0x08879548u) goto L_08879548;
    return;
L_08879548:
    ctx.set_gpr(31, 0x08879550u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08879550u) goto L_08879550;
    return;
L_08879550:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(19, 26214u << 16u);
    ctx.set_gpr(31, 0x08879560u);
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08879560u) goto L_08879560;
    return;
L_08879560:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(18, ctx.gpr[7] - ctx.gpr[2]);
    ctx.set_gpr(9, ctx.gpr[19] | 26215u);
    ctx.set_gpr(8, 0u + 0u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    goto L_08879574;
L_08879574:
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 31u));
    ctx.set_gpr(6, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(12, ctx.gpr[8] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(25, ctx.gpr[8] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(19, ctx.hi);
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 2u));
    ctx.set_gpr(13, ctx.gpr[10] - ctx.gpr[11]);
    ctx.set_gpr(15, ctx.gpr[13] << 2u);
    ctx.set_gpr(14, ctx.gpr[15] + ctx.gpr[13]);
    ctx.set_gpr(4, ctx.gpr[14] << 1u);
    ctx.set_gpr(24, ctx.gpr[16] - ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[8]);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(5, ctx.gpr[17] + ctx.gpr[6]);
    ctx.set_gpr(16, ctx.gpr[13] + 0u);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[13]) >> 31u));
    ctx.set_gpr(6, ctx.gpr[17] + ctx.gpr[12]);
    ctx.set_gpr(10, ctx.gpr[17] + ctx.gpr[25]);
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[8]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] == 0u;
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[24]));
      if (branch_taken) {
          goto L_0887976C;
      }
      goto L_088795C8;
    }
L_088795C8:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[13])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(14, ctx.hi);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[14]) >> 2u));
    ctx.set_gpr(25, ctx.gpr[2] - ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[25] << 2u);
    ctx.set_gpr(13, ctx.gpr[4] + ctx.gpr[25]);
    ctx.set_gpr(12, ctx.gpr[13] << 1u);
    ctx.set_gpr(24, ctx.gpr[16] - ctx.gpr[12]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[25]) >> 31u));
    ctx.set_gpr(16, ctx.gpr[25] + 0u);
    { const bool branch_taken = ctx.gpr[25] == 0u;
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[24]));
      if (branch_taken) {
          goto L_08879764;
      }
      goto L_088795F8;
    }
L_088795F8:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[25])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(12, ctx.hi);
    ctx.set_gpr(25, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 2u));
    ctx.set_gpr(15, ctx.gpr[25] - ctx.gpr[4]);
    ctx.set_gpr(24, ctx.gpr[15] << 2u);
    ctx.set_gpr(19, ctx.gpr[24] + ctx.gpr[15]);
    ctx.set_gpr(11, ctx.gpr[19] << 1u);
    ctx.set_gpr(5, ctx.gpr[16] - ctx.gpr[11]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[15]) >> 31u));
    ctx.set_gpr(16, ctx.gpr[15] + 0u);
    { const bool branch_taken = ctx.gpr[15] == 0u;
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0887975C;
      }
      goto L_08879628;
    }
L_08879628:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[15])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(15, ctx.hi);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[15]) >> 2u));
    ctx.set_gpr(6, ctx.gpr[2] - ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[6] << 2u);
    ctx.set_gpr(14, ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_gpr(4, ctx.gpr[14] << 1u);
    ctx.set_gpr(13, ctx.gpr[16] - ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[13]));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
      if (branch_taken) {
          goto L_08879754;
      }
      goto L_08879654;
    }
L_08879654:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
      if (branch_taken) {
          goto L_08879574;
      }
      goto L_0887965C;
    }
L_0887965C:
    ctx.set_gpr(16, ctx.gpr[20] + static_cast<std::uint32_t>(-26792));
    ctx.set_gpr(31, 0x08879668u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08879668u) goto L_08879668;
    return;
L_08879668:
    ctx.set_gpr(7, ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[2]) ? ctx.gpr[7] : ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[9]) <= 0;
    ctx.set_gpr(4, 0u + 0u);
      if (branch_taken) {
          goto L_088796EC;
      }
      goto L_08879678;
    }
L_08879678:
    ctx.set_gpr(6, ctx.gpr[9] + ctx.gpr[16]);
    ctx.set_gpr(16, static_cast<std::int32_t>(ctx.gpr[9]) < 2 ? 1u : 0u);
    ctx.set_gpr(5, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(3, ctx.gpr[9] & 3u);
      if (branch_taken) {
          goto L_08879714;
      }
      goto L_0887968C;
    }
L_0887968C:
    ctx.set_gpr(25, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(24, ctx.gpr[17] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(19, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    rt.memory().aot_store8(ctx.gpr[24] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[25]));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088796EC;
      }
      goto L_088796A8;
    }
L_088796A8:
    ctx.set_gpr(7, ctx.gpr[4] + ctx.gpr[17]);
    goto L_088796AC;
L_088796AC:
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(15, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(13, ctx.gpr[15] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(20, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    ctx.set_gpr(5, ctx.gpr[13] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.set_gpr(14, rt.memory().aot_load8(ctx.gpr[15] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[14]));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = ctx.gpr[12] != 0u;
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088796AC;
      }
      goto L_088796EC;
    }
L_088796EC:
    ctx.set_gpr(9, ctx.gpr[17] + ctx.gpr[4]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08879714:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_088796A8;
      }
      goto L_0887971C;
    }
L_0887971C:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.set_gpr(18, static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0887968C;
      }
      goto L_08879724;
    }
L_08879724:
    if (ctx.gpr[18] != 0u) {
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
        goto L_08879740;
    }
    goto L_0887972C;
L_0887972C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-1)));
    ctx.set_gpr(5, ctx.gpr[6] + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08879740;
L_08879740:
    ctx.set_gpr(10, ctx.gpr[17] + ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_0887968C;
L_08879754:
    rt.memory().aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_0887965C;
L_0887975C:
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_0887965C;
L_08879764:
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_0887965C;
L_0887976C:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_0887965C;
L_08879774:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(11, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_088794D0;
      }
      goto L_0887977C;
    }
L_0887977C:
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.set_gpr(16, static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088794B4;
      }
      goto L_08879784;
    }
L_08879784:
    if (ctx.gpr[16] != 0u) {
    ctx.set_gpr(24, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
        goto L_088797A0;
    }
    goto L_0887978C;
L_0887978C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-1)));
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(24, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_088797A0;
L_088797A0:
    ctx.set_gpr(4, ctx.gpr[17] + ctx.gpr[8]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[24]));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_088794B4;
L_088797B4:
    rt.memory().aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08879480;
L_088797BC:
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08879480;
L_088797C4:
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08879480;
L_088797CC:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08879480;
L_088797D4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088797DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, 2245u << 16u);
    ctx.set_gpr(8, 2225u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-26760)));
    ctx.set_gpr(3, ctx.gpr[8] + static_cast<std::uint32_t>(12240));
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(8, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-18156));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(832));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-26756), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0887982C;
      }
      goto L_08879814;
    }
L_08879814:
    ctx.set_gpr(24, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-26760), ctx.gpr[24]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887982C:
    ctx.set_gpr(31, 0x08879834u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08879834u) goto L_08879834;
    return;
L_08879834:
    ctx.set_gpr(15, 2247u << 16u);
    ctx.set_gpr(4, ctx.gpr[15] + static_cast<std::uint32_t>(-17324));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08879848u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1024));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08879848u) goto L_08879848;
    return;
L_08879848:
    ctx.set_gpr(14, 2247u << 16u);
    ctx.set_gpr(4, ctx.gpr[14] + static_cast<std::uint32_t>(-16300));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(31, 0x0887985Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0887985Cu) goto L_0887985C;
    return;
L_0887985C:
    ctx.set_gpr(13, 2247u << 16u);
    ctx.set_gpr(4, ctx.gpr[13] + static_cast<std::uint32_t>(-16044));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08879870u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08879870u) goto L_08879870;
    return;
L_08879870:
    ctx.set_gpr(7, 2247u << 16u);
    ctx.set_gpr(12, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(11, 2247u << 16u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, 2247u << 16u);
    ctx.set_gpr(6, 2247u << 16u);
    ctx.set_gpr(5, 2247u << 16u);
    ctx.set_gpr(4, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-16012), 0u);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-16008), ctx.gpr[12]);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-16004), ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-16000), 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-15996), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-15992), 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-26760)));
    goto L_08879814;
L_088798B0:
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26760)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26760), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088798D8;
      }
      goto L_088798CC;
    }
L_088798CC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088798D0;
L_088798D0:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088798D8:
    ctx.set_gpr(31, 0x088798E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 9u, 0x0887C378u>(ctx, &aot_mem) && ctx.pc == 0x088798E0u) goto L_088798E0;
    return;
L_088798E0:
    ctx.set_gpr(24, 2247u << 16u);
    ctx.set_gpr(4, ctx.gpr[24] + static_cast<std::uint32_t>(-16044));
    ctx.set_gpr(15, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(14, 2247u << 16u);
    ctx.set_gpr(13, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(12, 2247u << 16u);
    ctx.set_gpr(11, 2247u << 16u);
    ctx.set_gpr(10, 2247u << 16u);
    ctx.set_gpr(9, 2247u << 16u);
    ctx.set_gpr(8, 2247u << 16u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(32));
    rt.memory().aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(-16004), ctx.gpr[15]);
    rt.memory().aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-16008), ctx.gpr[13]);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-15992), 0u);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-15996), 0u);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-16000), 0u);
    ctx.set_gpr(31, 0x0887992Cu);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-16012), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0887992Cu) goto L_0887992C;
    return;
L_0887992C:
    ctx.set_gpr(7, 2247u << 16u);
    ctx.set_gpr(4, ctx.gpr[7] + static_cast<std::uint32_t>(-16300));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(255));
    ctx.set_gpr(31, 0x08879940u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08879940u) goto L_08879940;
    return;
L_08879940:
    ctx.set_gpr(6, 2247u << 16u);
    ctx.set_gpr(4, ctx.gpr[6] + static_cast<std::uint32_t>(-17324));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08879954u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1024));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08879954u) goto L_08879954;
    return;
L_08879954:
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-18156));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08879968u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(832));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08879968u) goto L_08879968;
    return;
L_08879968:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_088798D0;
L_08879970:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    ctx.set_gpr(30, ctx.gpr[10] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    ctx.set_gpr(23, ctx.gpr[9] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    ctx.set_gpr(20, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.set_gpr(18, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[11] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-16004)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[22];
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
      if (branch_taken) {
          goto L_08879BD4;
      }
      goto L_088799D0;
    }
L_088799D0:
    ctx.set_gpr(19, 2247u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-15992)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08879BC4;
      }
      goto L_088799E0;
    }
L_088799E0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, 2247u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, 2225u << 16u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-16004), ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[6] + static_cast<std::uint32_t>(12316));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-16008), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08879BB4;
      }
      goto L_08879A04;
    }
L_08879A04:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) <= 0;
    ctx.set_gpr(9, 2225u << 16u);
      if (branch_taken) {
          goto L_08879BAC;
      }
      goto L_08879A0C;
    }
L_08879A0C:
    ctx.set_gpr(8, ctx.gpr[16] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.set_gpr(4, ctx.gpr[9] + static_cast<std::uint32_t>(12360));
      if (branch_taken) {
          goto L_08879B98;
      }
      goto L_08879A18;
    }
L_08879A18:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(24, 2247u << 16u);
      if (branch_taken) {
          goto L_08879B90;
      }
      goto L_08879A20;
    }
L_08879A20:
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-16004), ctx.gpr[22]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(284));
    ctx.set_gpr(22, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-16008), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08879A40u);
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(-15996), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08879A40u) goto L_08879A40;
    return;
L_08879A40:
    ctx.set_gpr(15, 2247u << 16u);
    ctx.set_gpr(13, ctx.gpr[16] << 2u);
    ctx.set_gpr(14, ctx.gpr[15] + static_cast<std::uint32_t>(-17324));
    ctx.set_gpr(12, ctx.gpr[13] + ctx.gpr[14]);
    rt.memory().aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08879B24;
      }
      goto L_08879A5C;
    }
L_08879A5C:
    ctx.set_gpr(22, ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(31, 0x08879A74u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 639u, 0x0888F250u>(ctx, &aot_mem) && ctx.pc == 0x08879A74u) goto L_08879A74;
    return;
L_08879A74:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(7, ctx.gpr[30] + 0u);
    ctx.set_gpr(31, 0x08879A88u);
    ctx.set_gpr(6, ctx.gpr[23] + 0u);
    goto L_08879C5C;
L_08879A88:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-15992), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08879B08;
      }
      goto L_08879A90;
    }
L_08879A90:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(276), ctx.gpr[23]);
    goto L_08879A94;
L_08879A94:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 31u));
    ctx.set_gpr(5, ctx.gpr[8] >> 21u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(15), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[5]);
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 11u));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(272), ctx.gpr[7]);
    ctx.set_gpr(30, 2245u << 16u);
    ctx.set_gpr(23, 2245u << 16u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    rt.memory().aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(-26748), ctx.gpr[6]);
    ctx.set_gpr(5, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-26752), ctx.gpr[25]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), 0u);
    goto L_08879AD4;
L_08879AD4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08879B08:
    ctx.set_gpr(20, 2225u << 16u);
    ctx.set_gpr(31, 0x08879B14u);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(12416));
    goto L_08879004;
L_08879B14:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(4));
    goto L_08879B1C;
L_08879B1C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-16004), ctx.gpr[21]);
    goto L_08879AD4;
L_08879B24:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x08879B30u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_08879ED0;
L_08879B30:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-15992), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08879B7C;
      }
      goto L_08879B38;
    }
L_08879B38:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(10, ctx.gpr[29] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08879B58u);
    ctx.set_gpr(7, ctx.gpr[29] + 0u);
    goto L_0887A984;
L_08879B58:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08879B68;
      }
      goto L_08879B60;
    }
L_08879B60:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(276), ctx.gpr[19]);
    goto L_08879A94;
L_08879B68:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    goto L_08879B6C;
L_08879B6C:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(17, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-16004), ctx.gpr[18]);
    goto L_08879AD4;
L_08879B7C:
    ctx.set_gpr(16, 2225u << 16u);
    ctx.set_gpr(31, 0x08879B88u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(12416));
    goto L_08879004;
L_08879B88:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_08879B6C;
L_08879B90:
    ctx.set_gpr(10, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[10] + static_cast<std::uint32_t>(12460));
    goto L_08879B98;
L_08879B98:
    ctx.set_gpr(31, 0x08879BA0u);
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(4));
    goto L_08879004;
L_08879BA0:
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(5, ctx.gpr[11] + 0u);
    goto L_08879B1C;
L_08879BAC:
    ctx.set_gpr(7, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[7] + static_cast<std::uint32_t>(12504));
    goto L_08879BB4;
L_08879BB4:
    ctx.set_gpr(31, 0x08879BBCu);
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(4));
    goto L_08879004;
L_08879BBC:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-3));
    goto L_08879B1C;
L_08879BC4:
    ctx.set_gpr(31, 0x08879BCCu);
    // nop
    goto L_0887A168;
L_08879BCC:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-15992), 0u);
    goto L_088799E0;
L_08879BD4:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(31, 0x08879BE0u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(12544));
    goto L_08879004;
L_08879BE0:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_08879AD4;
L_08879BE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08879BFCu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_0887ACF0;
L_08879BFC:
    ctx.set_gpr(31, 0x08879C04u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08879C20;
L_08879C04:
    ctx.set_gpr(31, 0x08879C0Cu);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_0887AD0C;
L_08879C0C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08879C20:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, 2225u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(12604));
      if (branch_taken) {
          goto L_08879C4C;
      }
      goto L_08879C38;
    }
L_08879C38:
    ctx.set_gpr(31, 0x08879C40u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 711u, 0x0888293Cu>(ctx, &aot_mem) && ctx.pc == 0x08879C40u) goto L_08879C40;
    return;
L_08879C40:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08879C4C:
    ctx.set_gpr(31, 0x08879C54u);
    // nop
    goto L_08879004;
L_08879C54:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08879C40;
L_08879C5C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.set_gpr(20, 2247u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-16012)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[30]);
    ctx.set_gpr(30, 2247u << 16u);
    ctx.set_gpr(14, ctx.gpr[30] + static_cast<std::uint32_t>(-16044));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[23]);
    ctx.set_gpr(23, 2247u << 16u);
    ctx.set_gpr(8, ctx.gpr[23] + static_cast<std::uint32_t>(-16300));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(22, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.set_gpr(21, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 31u));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[17] >> 28u);
    ctx.set_gpr(9, ctx.gpr[12] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.set_gpr(9, (ctx.gpr[9] & ~0x0000000Fu) | ((0u & 0x0000000Fu) << 0u));
    ctx.set_gpr(11, ctx.gpr[12] - ctx.gpr[9]);
    ctx.set_gpr(15, rt.memory().aot_load16(ctx.gpr[14] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(10, ctx.gpr[11] << 4u);
    ctx.set_gpr(12, ctx.gpr[10] + ctx.gpr[8]);
    ctx.set_gpr(13, ctx.gpr[15] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[11] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store16(ctx.gpr[14] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[13]));
    ctx.set_gpr(16, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-18156));
    ctx.set_gpr(6, ctx.gpr[3] + 0u);
    rt.memory().aot_store8(ctx.gpr[12] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(7, ctx.gpr[3] + static_cast<std::uint32_t>(832));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-16012), ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[12] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[13]));
    rt.memory().aot_store8(ctx.gpr[12] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(24, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    goto L_08879D18;
L_08879D18:
    ctx.set_gpr(4, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[24] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(52));
      if (branch_taken) {
          goto L_08879EC8;
      }
      goto L_08879D24;
    }
L_08879D24:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(52));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(52));
      if (branch_taken) {
          goto L_08879EC8;
      }
      goto L_08879D34;
    }
L_08879D34:
    ctx.set_gpr(25, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(52));
    { const bool branch_taken = ctx.gpr[25] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(52));
      if (branch_taken) {
          goto L_08879EC8;
      }
      goto L_08879D44;
    }
L_08879D44:
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(52));
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(52));
      if (branch_taken) {
          goto L_08879EC8;
      }
      goto L_08879D54;
    }
L_08879D54:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(52));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(52));
      if (branch_taken) {
          goto L_08879EC8;
      }
      goto L_08879D64;
    }
L_08879D64:
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(52));
    { const bool branch_taken = ctx.gpr[14] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(52));
      if (branch_taken) {
          goto L_08879EC8;
      }
      goto L_08879D74;
    }
L_08879D74:
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(52));
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(52));
      if (branch_taken) {
          goto L_08879EC8;
      }
      goto L_08879D84;
    }
L_08879D84:
    ctx.set_gpr(15, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(6, ctx.gpr[4] + static_cast<std::uint32_t>(52));
    { const bool branch_taken = ctx.gpr[15] == 0u;
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08879EC8;
      }
      goto L_08879D9C;
    }
L_08879D9C:
    if (ctx.gpr[5] != 0u) {
    ctx.set_gpr(24, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
        goto L_08879D18;
    }
    goto L_08879DA4;
L_08879DA4:
    ctx.set_gpr(7, 2225u << 16u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(4, ctx.gpr[7] + static_cast<std::uint32_t>(12644));
      if (branch_taken) {
          goto L_08879EB8;
      }
      goto L_08879DB0;
    }
L_08879DB0:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(31, 0x08879DBCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 584u, 0x088822A4u>(ctx, &aot_mem) && ctx.pc == 0x08879DBCu) goto L_08879DBC;
    return;
L_08879DBC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08879EB0;
      }
      goto L_08879DC8;
    }
L_08879DC8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2048));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(512));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    ctx.set_gpr(7, ctx.gpr[21] + 0u);
    ctx.set_gpr(9, ctx.hi);
    ctx.set_gpr(8, ctx.lo);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.set_gpr(17, ctx.gpr[16] + 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    ctx.set_gpr(31, 0x08879E28u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[22]);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 652u, 0x08882594u>(ctx, &aot_mem) && ctx.pc == 0x08879E28u) goto L_08879E28;
    return;
L_08879E28:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-16012)));
    goto L_08879E2C;
L_08879E2C:
    ctx.set_gpr(5, ctx.gpr[30] + static_cast<std::uint32_t>(-16044));
    ctx.set_gpr(30, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
    ctx.set_gpr(25, ctx.gpr[13] >> 28u);
    ctx.set_gpr(4, ctx.gpr[6] + ctx.gpr[25]);
    ctx.set_gpr(4, (ctx.gpr[4] & ~0x0000000Fu) | ((0u & 0x0000000Fu) << 0u));
    ctx.set_gpr(9, ctx.gpr[6] - ctx.gpr[4]);
    ctx.set_gpr(24, ctx.gpr[23] + static_cast<std::uint32_t>(-16300));
    ctx.set_gpr(16, ctx.gpr[9] << 4u);
    ctx.set_gpr(22, ctx.gpr[16] + ctx.gpr[24]);
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(8, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(12, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(12), ctx.gpr[12]);
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-16012), ctx.gpr[8]);
    rt.memory().aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[30]));
    rt.memory().aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[23]));
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[23]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08879EB0:
    ctx.set_gpr(21, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(12696));
    goto L_08879EB8;
L_08879EB8:
    ctx.set_gpr(31, 0x08879EC0u);
    ctx.set_gpr(17, 0u + 0u);
    goto L_08879004;
L_08879EC0:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-16012)));
    goto L_08879E2C;
L_08879EC8:
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_08879DA4;
L_08879ED0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    ctx.set_gpr(22, 2247u << 16u);
    ctx.set_gpr(10, ctx.gpr[22] + static_cast<std::uint32_t>(-16044));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    ctx.set_gpr(21, 2247u << 16u);
    ctx.set_gpr(6, ctx.gpr[21] + static_cast<std::uint32_t>(-16300));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.set_gpr(20, 2247u << 16u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.set_gpr(16, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-16012)));
    ctx.set_gpr(13, rt.memory().aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(15, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 31u));
    ctx.set_gpr(14, ctx.gpr[15] >> 28u);
    ctx.set_gpr(7, ctx.gpr[11] + ctx.gpr[14]);
    ctx.set_gpr(7, (ctx.gpr[7] & ~0x0000000Fu) | ((0u & 0x0000000Fu) << 0u));
    ctx.set_gpr(9, ctx.gpr[11] - ctx.gpr[7]);
    ctx.set_gpr(8, ctx.gpr[9] << 4u);
    ctx.set_gpr(11, ctx.gpr[8] + ctx.gpr[6]);
    ctx.set_gpr(12, ctx.gpr[13] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[12]));
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-18156));
    ctx.set_gpr(9, ctx.gpr[3] + 0u);
    rt.memory().aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(10, ctx.gpr[3] + static_cast<std::uint32_t>(832));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-16012), ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[12]));
    rt.memory().aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(8), ctx.gpr[19]);
    ctx.set_gpr(18, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    goto L_08879F7C;
L_08879F7C:
    ctx.set_gpr(4, ctx.gpr[9] + 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(52));
      if (branch_taken) {
          goto L_0887A160;
      }
      goto L_08879F88;
    }
L_08879F88:
    ctx.set_gpr(24, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[9] + static_cast<std::uint32_t>(52));
    { const bool branch_taken = ctx.gpr[24] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(52));
      if (branch_taken) {
          goto L_0887A160;
      }
      goto L_08879F98;
    }
L_08879F98:
    ctx.set_gpr(25, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(52));
    { const bool branch_taken = ctx.gpr[25] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(52));
      if (branch_taken) {
          goto L_0887A160;
      }
      goto L_08879FA8;
    }
L_08879FA8:
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(52));
    { const bool branch_taken = ctx.gpr[12] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(52));
      if (branch_taken) {
          goto L_0887A160;
      }
      goto L_08879FB8;
    }
L_08879FB8:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(52));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(52));
      if (branch_taken) {
          goto L_0887A160;
      }
      goto L_08879FC8;
    }
L_08879FC8:
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(52));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(52));
      if (branch_taken) {
          goto L_0887A160;
      }
      goto L_08879FD8;
    }
L_08879FD8:
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(52));
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(52));
      if (branch_taken) {
          goto L_0887A160;
      }
      goto L_08879FE8;
    }
L_08879FE8:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(9, ctx.gpr[4] + static_cast<std::uint32_t>(52));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
      if (branch_taken) {
          goto L_0887A160;
      }
      goto L_0887A000;
    }
L_0887A000:
    if (ctx.gpr[5] != 0u) {
    ctx.set_gpr(18, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
        goto L_08879F7C;
    }
    goto L_0887A008;
L_0887A008:
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(16, 2225u << 16u);
        goto L_0887A158;
    }
    goto L_0887A010;
L_0887A010:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(31, 0x0887A01Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 584u, 0x088822A4u>(ctx, &aot_mem) && ctx.pc == 0x0887A01Cu) goto L_0887A01C;
    return;
L_0887A01C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0887A140;
      }
      goto L_0887A024;
    }
L_0887A024:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(512));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(10, ctx.gpr[29] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(7, ctx.gpr[29] + 0u);
    ctx.set_gpr(18, ctx.gpr[16] + 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(31, 0x0887A074u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    goto L_0887A984;
L_0887A074:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
      if (branch_taken) {
          goto L_0887A0BC;
      }
      goto L_0887A07C;
    }
L_0887A07C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[7]);
    ctx.set_gpr(31, 0x0887A094u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    goto L_0887ACB0;
L_0887A094:
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[11]);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(31, 0x0887A0BCu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 652u, 0x08882594u>(ctx, &aot_mem) && ctx.pc == 0x0887A0BCu) goto L_0887A0BC;
    return;
L_0887A0BC:
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-16012)));
    goto L_0887A0C0;
L_0887A0C0:
    ctx.set_gpr(10, ctx.gpr[22] + static_cast<std::uint32_t>(-16044));
    ctx.set_gpr(22, rt.memory().aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[13]) >> 31u));
    ctx.set_gpr(8, ctx.gpr[16] >> 28u);
    ctx.set_gpr(5, ctx.gpr[13] + ctx.gpr[8]);
    ctx.set_gpr(5, (ctx.gpr[5] & ~0x0000000Fu) | ((0u & 0x0000000Fu) << 0u));
    ctx.set_gpr(25, ctx.gpr[13] - ctx.gpr[5]);
    ctx.set_gpr(9, ctx.gpr[21] + static_cast<std::uint32_t>(-16300));
    ctx.set_gpr(12, ctx.gpr[25] << 4u);
    ctx.set_gpr(21, ctx.gpr[12] + ctx.gpr[9]);
    ctx.set_gpr(15, ctx.gpr[25] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(24, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(12), ctx.gpr[24]);
    ctx.set_gpr(14, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-16012), ctx.gpr[15]);
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[20]));
    rt.memory().aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[22]));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), ctx.gpr[19]);
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[14]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887A140:
    ctx.set_gpr(10, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[10] + static_cast<std::uint32_t>(12696));
    goto L_0887A148;
L_0887A148:
    ctx.set_gpr(31, 0x0887A150u);
    ctx.set_gpr(18, 0u + 0u);
    goto L_08879004;
L_0887A150:
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-16012)));
    goto L_0887A0C0;
L_0887A158:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(12644));
    goto L_0887A148;
L_0887A160:
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_0887A008;
L_0887A168:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.set_gpr(20, 2247u << 16u);
    ctx.set_gpr(13, 2247u << 16u);
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-16012)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    ctx.set_gpr(2, 2247u << 16u);
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 31u));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.set_gpr(5, ctx.gpr[12] >> 28u);
    ctx.set_gpr(3, ctx.gpr[11] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(3, (ctx.gpr[3] & ~0x0000000Fu) | ((0u & 0x0000000Fu) << 0u));
    ctx.set_gpr(9, ctx.gpr[11] - ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[13] + static_cast<std::uint32_t>(-16044));
    ctx.set_gpr(22, ctx.gpr[2] + static_cast<std::uint32_t>(-16300));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(6, ctx.gpr[9] << 4u);
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(8, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(10, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(6)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(7, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-16012), ctx.gpr[8]);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[7]));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[7]));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), ctx.gpr[19]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[21]));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0887A2A0;
      }
      goto L_0887A1FC;
    }
L_0887A1FC:
    ctx.set_gpr(31, 0x0887A204u);
    // nop
    goto L_0887A8F4;
L_0887A204:
    ctx.set_gpr(15, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(14, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[15] == ctx.gpr[14];
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_0887A2E4;
      }
      goto L_0887A214;
    }
L_0887A214:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_0887A218;
L_0887A218:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
      if (branch_taken) {
          goto L_0887A2C8;
      }
      goto L_0887A220;
    }
L_0887A220:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    goto L_0887A224;
L_0887A224:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-16012)));
    ctx.set_gpr(24, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(6)));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 31u));
    ctx.set_gpr(10, ctx.gpr[6] >> 28u);
    ctx.set_gpr(9, ctx.gpr[8] + ctx.gpr[10]);
    ctx.set_gpr(9, (ctx.gpr[9] & ~0x0000000Fu) | ((0u & 0x0000000Fu) << 0u));
    ctx.set_gpr(25, ctx.gpr[8] - ctx.gpr[9]);
    ctx.set_gpr(7, ctx.gpr[25] << 4u);
    ctx.set_gpr(17, ctx.gpr[7] + ctx.gpr[22]);
    ctx.set_gpr(18, ctx.gpr[25] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[22]);
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[24]));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-16012), ctx.gpr[18]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[21]));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[19]);
    goto L_0887A2A0;
L_0887A2A0:
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
L_0887A2C8:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, 0x0887A2D4u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 683u, 0x08882814u>(ctx, &aot_mem) && ctx.pc == 0x0887A2D4u) goto L_0887A2D4;
    return;
L_0887A2D4:
    ctx.set_gpr(31, 0x0887A2DCu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 591u, 0x08882310u>(ctx, &aot_mem) && ctx.pc == 0x0887A2DCu) goto L_0887A2DC;
    return;
L_0887A2DC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    goto L_0887A224;
L_0887A2E4:
    ctx.set_gpr(31, 0x0887A2ECu);
    // nop
    goto L_0887A410;
L_0887A2EC:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_0887A218;
L_0887A2F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(19, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0887A324u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 719u, 0x08882988u>(ctx, &aot_mem) && ctx.pc == 0x0887A324u) goto L_0887A324;
    return;
L_0887A324:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0887A338;
      }
      goto L_0887A330;
    }
L_0887A330:
    ctx.set_gpr(31, 0x0887A338u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 754u, 0x08882BFCu>(ctx, &aot_mem) && ctx.pc == 0x0887A338u) goto L_0887A338;
    return;
L_0887A338:
    ctx.set_gpr(31, 0x0887A340u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 616u, 0x08877B90u>(ctx, &aot_mem) && ctx.pc == 0x0887A340u) goto L_0887A340;
    return;
L_0887A340:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(4, ctx.gpr[5] - ctx.gpr[2]);
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? ctx.gpr[4] : ctx.gpr[17]);
    ctx.set_gpr(7, ctx.gpr[8] + ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
      if (branch_taken) {
          goto L_0887A39C;
      }
      goto L_0887A36C;
    }
L_0887A36C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_0887A374;
L_0887A374:
    ctx.set_gpr(31, 0x0887A37Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 618u, 0x08877BACu>(ctx, &aot_mem) && ctx.pc == 0x0887A37Cu) goto L_0887A37C;
    return;
L_0887A37C:
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
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
L_0887A39C:
    ctx.set_gpr(31, 0x0887A3A4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 775u, 0x08882D18u>(ctx, &aot_mem) && ctx.pc == 0x0887A3A4u) goto L_0887A3A4;
    return;
L_0887A3A4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x0887A3B0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 847u, 0x08883508u>(ctx, &aot_mem) && ctx.pc == 0x0887A3B0u) goto L_0887A3B0;
    return;
L_0887A3B0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x0887A3BCu);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 820u, 0x088831ECu>(ctx, &aot_mem) && ctx.pc == 0x0887A3BCu) goto L_0887A3BC;
    return;
L_0887A3BC:
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x0887A3D4u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 844u, 0x088833A0u>(ctx, &aot_mem) && ctx.pc == 0x0887A3D4u) goto L_0887A3D4;
    return;
L_0887A3D4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x0887A3E0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 722u, 0x088829C0u>(ctx, &aot_mem) && ctx.pc == 0x0887A3E0u) goto L_0887A3E0;
    return;
L_0887A3E0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x0887A3ECu);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 738u, 0x08882B04u>(ctx, &aot_mem) && ctx.pc == 0x0887A3ECu) goto L_0887A3EC;
    return;
L_0887A3EC:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_0887A374;
L_0887A3F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0887A404u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 166u, 0x0887D4F4u>(ctx, &aot_mem) && ctx.pc == 0x0887A404u) goto L_0887A404;
    return;
L_0887A404:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887A410:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, 2247u << 16u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-16012)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.set_gpr(20, 2247u << 16u);
    ctx.set_gpr(15, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 31u));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(14, ctx.gpr[15] >> 28u);
    ctx.set_gpr(11, ctx.gpr[20] + static_cast<std::uint32_t>(-16044));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(5, ctx.gpr[8] + ctx.gpr[14]);
    ctx.set_gpr(5, (ctx.gpr[5] & ~0x0000000Fu) | ((0u & 0x0000000Fu) << 0u));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.set_gpr(12, ctx.gpr[8] - ctx.gpr[5]);
    ctx.set_gpr(19, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[19] + static_cast<std::uint32_t>(-16300));
    ctx.set_gpr(6, ctx.gpr[12] << 4u);
    ctx.set_gpr(13, rt.memory().aot_load16(ctx.gpr[11] + static_cast<std::uint32_t>(10)));
    ctx.set_gpr(8, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(10, ctx.gpr[13] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[12] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(5));
    rt.memory().aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[10]));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12), ctx.gpr[9]);
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    rt.memory().aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[10]));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-16012), ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
      if (branch_taken) {
          goto L_0887A5CC;
      }
      goto L_0887A49C;
    }
L_0887A49C:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[17];
    ctx.set_gpr(24, 0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0887A580;
      }
      goto L_0887A4AC;
    }
L_0887A4AC:
    if (ctx.gpr[3] == ctx.gpr[24]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
        goto L_0887A5C4;
    }
    goto L_0887A4B4;
L_0887A4B4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[4] == 0u) {
    ctx.set_gpr(16, 2225u << 16u);
        goto L_0887A5B4;
    }
    goto L_0887A4C0;
L_0887A4C0:
    ctx.set_gpr(31, 0x0887A4C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 754u, 0x08882BFCu>(ctx, &aot_mem) && ctx.pc == 0x0887A4C8u) goto L_0887A4C8;
    return;
L_0887A4C8:
    ctx.set_gpr(31, 0x0887A4D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 616u, 0x08877B90u>(ctx, &aot_mem) && ctx.pc == 0x0887A4D0u) goto L_0887A4D0;
    return;
L_0887A4D0:
    ctx.set_gpr(31, 0x0887A4D8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 727u, 0x08882A10u>(ctx, &aot_mem) && ctx.pc == 0x0887A4D8u) goto L_0887A4D8;
    return;
L_0887A4D8:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(25, ctx.gpr[2] - ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[25]);
      if (branch_taken) {
          goto L_0887A51C;
      }
      goto L_0887A4EC;
    }
L_0887A4EC:
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0887A520;
      }
      goto L_0887A4F8;
    }
L_0887A4F8:
    ctx.set_gpr(11, 2247u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-16000)));
    if (ctx.gpr[7] == ctx.gpr[17]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
        goto L_0887A5A4;
    }
    goto L_0887A508;
L_0887A508:
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[17];
    ctx.set_gpr(31, 0x0887A51Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887A51Cu) goto L_0887A51C;
    return;
L_0887A51C:
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(1));
    goto L_0887A520;
L_0887A520:
    ctx.set_gpr(31, 0x0887A528u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[10]));
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 618u, 0x08877BACu>(ctx, &aot_mem) && ctx.pc == 0x0887A528u) goto L_0887A528;
    return;
L_0887A528:
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-16012)));
    ctx.set_gpr(3, ctx.gpr[19] + static_cast<std::uint32_t>(-16300));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[24]) >> 31u));
    ctx.set_gpr(25, ctx.gpr[9] >> 28u);
    ctx.set_gpr(5, ctx.gpr[24] + ctx.gpr[25]);
    ctx.set_gpr(5, (ctx.gpr[5] & ~0x0000000Fu) | ((0u & 0x0000000Fu) << 0u));
    ctx.set_gpr(15, ctx.gpr[24] - ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[15] << 4u);
    ctx.set_gpr(19, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(14, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(6, ctx.gpr[20] + static_cast<std::uint32_t>(-16044));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[14]));
    ctx.set_gpr(13, ctx.gpr[15] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(20, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(10)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    rt.memory().aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[20]));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-16012), ctx.gpr[13]);
    goto L_0887A580;
L_0887A580:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_0887A584;
L_0887A584:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
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
L_0887A5A4:
    ctx.set_gpr(31, 0x0887A5ACu);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    goto L_088797D4;
L_0887A5AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_0887A508;
L_0887A5B4:
    ctx.set_gpr(31, 0x0887A5BCu);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(12752));
    goto L_08879004;
L_0887A5BC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_0887A584;
L_0887A5C4:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_0887A584;
L_0887A5CC:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(31, 0x0887A5D8u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(12796));
    goto L_08879004;
L_0887A5D8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    goto L_0887A584;
L_0887A5E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(31, 0x0887A600u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 719u, 0x08882988u>(ctx, &aot_mem) && ctx.pc == 0x0887A600u) goto L_0887A600;
    return;
L_0887A600:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0887A7DC;
      }
      goto L_0887A60C;
    }
L_0887A60C:
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    if (ctx.gpr[10] == ctx.gpr[9]) {
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_0887A6BC;
    }
    goto L_0887A618;
L_0887A618:
    ctx.set_gpr(17, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    goto L_0887A61C;
L_0887A61C:
    ctx.set_gpr(15, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[15];
    // nop
      if (branch_taken) {
          goto L_0887A640;
      }
      goto L_0887A628;
    }
L_0887A628:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_0887A62C;
L_0887A62C:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887A640:
    ctx.set_gpr(31, 0x0887A648u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 719u, 0x08882988u>(ctx, &aot_mem) && ctx.pc == 0x0887A648u) goto L_0887A648;
    return;
L_0887A648:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_0887A628;
      }
      goto L_0887A650;
    }
L_0887A650:
    ctx.set_gpr(31, 0x0887A658u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 727u, 0x08882A10u>(ctx, &aot_mem) && ctx.pc == 0x0887A658u) goto L_0887A658;
    return;
L_0887A658:
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, ctx.gpr[2] - ctx.gpr[24]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
      if (branch_taken) {
          goto L_0887A69C;
      }
      goto L_0887A66C;
    }
L_0887A66C:
    ctx.set_gpr(25, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    if (ctx.gpr[25] != 0u) {
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
        goto L_0887A6A0;
    }
    goto L_0887A678;
L_0887A678:
    ctx.set_gpr(3, 2247u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-16000)));
    if (ctx.gpr[6] == ctx.gpr[18]) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
        goto L_0887A6AC;
    }
    goto L_0887A688;
L_0887A688:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[18];
    ctx.set_gpr(31, 0x0887A69Cu);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887A69Cu) goto L_0887A69C;
    return;
L_0887A69C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_0887A6A0;
L_0887A6A0:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    goto L_0887A628;
L_0887A6AC:
    ctx.set_gpr(31, 0x0887A6B4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_088797D4;
L_0887A6B4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_0887A688;
L_0887A6BC:
    ctx.set_gpr(13, 15u << 16u);
    ctx.set_gpr(11, ctx.gpr[13] | 65535u);
    { const bool branch_taken = ctx.gpr[12] == ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_0887A75C;
      }
      goto L_0887A6CC;
    }
L_0887A6CC:
    ctx.set_gpr(31, 0x0887A6D4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 719u, 0x08882988u>(ctx, &aot_mem) && ctx.pc == 0x0887A6D4u) goto L_0887A6D4;
    return;
L_0887A6D4:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(31, 0x0887A6E0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 727u, 0x08882A10u>(ctx, &aot_mem) && ctx.pc == 0x0887A6E0u) goto L_0887A6E0;
    return;
L_0887A6E0:
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, ctx.gpr[8] + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(5, ctx.gpr[7] & 255u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[4]);
    ctx.set_gpr(6, ctx.gpr[5] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0887A618;
      }
      goto L_0887A700;
    }
L_0887A700:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(9, ctx.gpr[4] + ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[9]);
      if (branch_taken) {
          goto L_0887A618;
      }
      goto L_0887A710;
    }
L_0887A710:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    if (ctx.gpr[4] != 0u) {
    ctx.set_gpr(17, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
        goto L_0887A61C;
    }
    goto L_0887A71C;
L_0887A71C:
    ctx.set_gpr(12, 2247u << 16u);
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(-16000)));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[11] == ctx.gpr[10]) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
        goto L_0887A74C;
    }
    goto L_0887A730;
L_0887A730:
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[13];
    ctx.set_gpr(31, 0x0887A744u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887A744u) goto L_0887A744;
    return;
L_0887A744:
    ctx.set_gpr(17, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    goto L_0887A61C;
L_0887A74C:
    ctx.set_gpr(31, 0x0887A754u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_088797D4;
L_0887A754:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_0887A730;
L_0887A75C:
    ctx.set_gpr(31, 0x0887A764u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 711u, 0x0888293Cu>(ctx, &aot_mem) && ctx.pc == 0x0887A764u) goto L_0887A764;
    return;
L_0887A764:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887A6CC;
      }
      goto L_0887A76C;
    }
L_0887A76C:
    ctx.set_gpr(31, 0x0887A774u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 829u, 0x088832B0u>(ctx, &aot_mem) && ctx.pc == 0x0887A774u) goto L_0887A774;
    return;
L_0887A774:
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(14, static_cast<std::int32_t>(ctx.gpr[15]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[14] != 0u;
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0887A6CC;
      }
      goto L_0887A784;
    }
L_0887A784:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_0887A628;
      }
      goto L_0887A790;
    }
L_0887A790:
    ctx.set_gpr(18, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_0887A62C;
      }
      goto L_0887A79C;
    }
L_0887A79C:
    ctx.set_gpr(3, 2247u << 16u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-16000)));
    ctx.set_gpr(24, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[25] == ctx.gpr[24]) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
        goto L_0887A7CC;
    }
    goto L_0887A7B0;
L_0887A7B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[16];
    ctx.set_gpr(31, 0x0887A7C4u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887A7C4u) goto L_0887A7C4;
    return;
L_0887A7C4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_0887A62C;
L_0887A7CC:
    ctx.set_gpr(31, 0x0887A7D4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_088797D4;
L_0887A7D4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_0887A7B0;
L_0887A7DC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0887A824;
      }
      goto L_0887A7E8;
    }
L_0887A7E8:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    if (ctx.gpr[3] != 0u) {
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[8]));
        goto L_0887A628;
    }
    goto L_0887A7F4;
L_0887A7F4:
    ctx.set_gpr(4, 2247u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-16000)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[6] == ctx.gpr[2]) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
        goto L_0887A82C;
    }
    goto L_0887A808;
L_0887A808:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[5];
    ctx.set_gpr(31, 0x0887A820u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887A820u) goto L_0887A820;
    return;
L_0887A820:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(4));
    goto L_0887A824;
L_0887A824:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[8]));
    goto L_0887A628;
L_0887A82C:
    ctx.set_gpr(31, 0x0887A834u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_088797D4;
L_0887A834:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_0887A808;
L_0887A83C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(2, 15u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[2] | 65535u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
      if (branch_taken) {
          goto L_0887A8E0;
      }
      goto L_0887A858;
    }
L_0887A858:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0887A87C;
      }
      goto L_0887A864;
    }
L_0887A864:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_0887A868;
L_0887A868:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_0887A86C;
L_0887A86C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887A87C:
    ctx.set_gpr(31, 0x0887A884u);
    // nop
    goto L_0887A8F4;
L_0887A884:
    ctx.set_gpr(31, 0x0887A88Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 826u, 0x08883268u>(ctx, &aot_mem) && ctx.pc == 0x0887A88Cu) goto L_0887A88C;
    return;
L_0887A88C:
    ctx.set_gpr(15, ctx.gpr[2] + static_cast<std::uint32_t>(2047));
    ctx.set_gpr(25, ctx.gpr[15] < static_cast<std::uint32_t>(2047) ? 1u : 0u);
    ctx.set_gpr(12, ctx.gpr[3] + ctx.gpr[25]);
    ctx.set_gpr(24, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 31u));
    ctx.set_gpr(14, ctx.gpr[24] >> 21u);
    ctx.set_gpr(9, ctx.gpr[15] + ctx.gpr[14]);
    ctx.set_gpr(13, 0u + 0u);
    ctx.set_gpr(11, ctx.gpr[9] < ctx.gpr[14] ? 1u : 0u);
    ctx.set_gpr(10, ctx.gpr[12] + ctx.gpr[13]);
    ctx.set_gpr(8, ctx.gpr[10] + ctx.gpr[11]);
    ctx.set_gpr(5, 15u << 16u);
    ctx.set_gpr(6, ctx.gpr[9] >> 11u);
    ctx.set_gpr(7, ctx.gpr[8] << 21u);
    ctx.set_gpr(2, ctx.gpr[6] | ctx.gpr[7]);
    ctx.set_gpr(4, ctx.gpr[5] | 65534u);
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0887A864;
      }
      goto L_0887A8D8;
    }
L_0887A8D8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_0887A86C;
L_0887A8E0:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(31, 0x0887A8ECu);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(12832));
    goto L_08879004;
L_0887A8EC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-3));
    goto L_0887A868;
L_0887A8F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_0887A90C;
L_0887A90C:
    ctx.set_gpr(31, 0x0887A914u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08879C20;
L_0887A914:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[17];
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0887A93C;
      }
      goto L_0887A91C;
    }
L_0887A91C:
    ctx.set_gpr(31, 0x0887A924u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 715u, 0x08882964u>(ctx, &aot_mem) && ctx.pc == 0x0887A924u) goto L_0887A924;
    return;
L_0887A924:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0887A93C;
      }
      goto L_0887A92C;
    }
L_0887A92C:
    ctx.set_gpr(31, 0x0887A934u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 241u, 0x0887DAF4u>(ctx, &aot_mem) && ctx.pc == 0x0887A934u) goto L_0887A934;
    return;
L_0887A934:
    // nop
    goto L_0887A90C;
L_0887A93C:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887A94C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, 2225u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(12876));
      if (branch_taken) {
          goto L_0887A974;
      }
      goto L_0887A964;
    }
L_0887A964:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1))))));
    goto L_0887A968;
L_0887A968:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887A974:
    ctx.set_gpr(31, 0x0887A97Cu);
    // nop
    goto L_08879004;
L_0887A97C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    goto L_0887A968;
L_0887A984:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.set_gpr(3, ctx.gpr[4] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    ctx.set_gpr(30, ctx.gpr[8] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    ctx.set_gpr(23, ctx.gpr[10] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    ctx.set_gpr(22, ctx.gpr[9] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    ctx.set_gpr(21, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
      if (branch_taken) {
          goto L_0887ACA4;
      }
      goto L_0887A9D0;
    }
L_0887A9D0:
    ctx.set_gpr(6, 2247u << 16u);
    ctx.set_gpr(3, ctx.gpr[6] + static_cast<std::uint32_t>(-17324));
    ctx.set_gpr(5, ctx.gpr[4] << 2u);
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(8, 2225u << 16u);
        goto L_0887AC90;
    }
    goto L_0887A9EC;
L_0887A9EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    if (static_cast<std::int32_t>(ctx.gpr[2]) <= 0) {
    ctx.set_gpr(10, 2225u << 16u);
        goto L_0887AC7C;
    }
    goto L_0887A9F8;
L_0887A9F8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    ctx.set_gpr(11, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
      if (branch_taken) {
          goto L_0887AA08;
      }
      goto L_0887AA00;
    }
L_0887AA00:
    if (ctx.gpr[11] != 0u) {
    ctx.set_gpr(17, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(15))))));
        goto L_0887AA74;
    }
    goto L_0887AA08;
L_0887AA08:
    ctx.set_gpr(12, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[12] + static_cast<std::uint32_t>(13008));
    goto L_0887AA10;
L_0887AA10:
    ctx.set_gpr(31, 0x0887AA18u);
    // nop
    goto L_08879004;
L_0887AA18:
    ctx.set_gpr(13, 0u + static_cast<std::uint32_t>(-3));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[13]);
    goto L_0887AA20;
L_0887AA20:
    if (ctx.gpr[21] != 0u) {
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
        goto L_0887AA28;
    }
    goto L_0887AA28;
L_0887AA28:
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(14, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), ctx.gpr[14]);
    rt.memory().aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[14]);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[14]);
    goto L_0887AA40;
L_0887AA40:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887AA74:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(20, ctx.gpr[3] + 0u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[16];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
      if (branch_taken) {
          goto L_0887AB80;
      }
      goto L_0887AA84;
    }
L_0887AA84:
    ctx.set_gpr(17, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(280)));
    ctx.set_gpr(16, ctx.gpr[3] + static_cast<std::uint32_t>(282));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    ctx.set_gpr(19, 0u + 0u);
      if (branch_taken) {
          goto L_0887AAF8;
      }
      goto L_0887AA94;
    }
L_0887AA94:
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.set_gpr(3, ctx.gpr[18] & 3u);
      if (branch_taken) {
          goto L_0887AB44;
      }
      goto L_0887AAA4;
    }
L_0887AAA4:
    ctx.set_gpr(13, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(12, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[13]);
    { const bool branch_taken = ctx.gpr[12] == 0u;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0887AAF8;
      }
      goto L_0887AABC;
    }
L_0887AABC:
    ctx.set_gpr(10, ctx.gpr[6] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, ctx.gpr[10] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(8, rt.memory().aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(15, ctx.gpr[9] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, rt.memory().aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[17] + ctx.gpr[4]);
    ctx.set_gpr(25, rt.memory().aot_load16(ctx.gpr[15] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[8]);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(24, ctx.gpr[2] + ctx.gpr[7]);
    ctx.set_gpr(14, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    ctx.set_gpr(17, ctx.gpr[24] + ctx.gpr[25]);
    { const bool branch_taken = ctx.gpr[14] != 0u;
    ctx.set_gpr(6, ctx.gpr[15] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0887AABC;
      }
      goto L_0887AAF8;
    }
L_0887AAF8:
    ctx.set_gpr(19, ctx.gpr[18] << 1u);
    ctx.set_gpr(18, ctx.gpr[19] + ctx.gpr[16]);
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[6] << 11u);
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_0887AB10;
L_0887AB10:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.set_gpr(6, ctx.gpr[20] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0887AB28;
      }
      goto L_0887AB18;
    }
L_0887AB18:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(31, 0x0887AB28u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 639u, 0x0888F250u>(ctx, &aot_mem) && ctx.pc == 0x0887AB28u) goto L_0887AB28;
    return;
L_0887AB28:
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(276)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(272)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(20, ctx.gpr[23] + ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    goto L_0887AA40;
L_0887AB44:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0887AABC;
      }
      goto L_0887AB4C;
    }
L_0887AB4C:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0887AAA4;
      }
      goto L_0887AB54;
    }
L_0887AB54:
    if (ctx.gpr[10] != 0u) {
    ctx.set_gpr(11, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
        goto L_0887AB70;
    }
    goto L_0887AB5C;
L_0887AB5C:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(282)));
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[20] + static_cast<std::uint32_t>(284));
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[3]);
    ctx.set_gpr(11, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_0887AB70;
L_0887AB70:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[11]);
    goto L_0887AAA4;
L_0887AB80:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(280)));
    ctx.set_gpr(19, ctx.gpr[3] + static_cast<std::uint32_t>(284));
    ctx.set_gpr(31, 0x0887AB90u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    goto L_0887ACCC;
L_0887AB90:
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_0887AC14;
      }
      goto L_0887AB9C;
    }
L_0887AB9C:
    ctx.set_gpr(24, static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[24] == 0u;
    ctx.set_gpr(3, ctx.gpr[18] & 3u);
      if (branch_taken) {
          goto L_0887AC38;
      }
      goto L_0887ABAC;
    }
L_0887ABAC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0887ABBCu);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    goto L_0887ACCC;
L_0887ABBC:
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_0887AC14;
      }
      goto L_0887ABC8;
    }
L_0887ABC8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0887ABD8u);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    goto L_0887ACCC;
L_0887ABD8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0887ABE8u);
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[2]);
    goto L_0887ACCC;
L_0887ABE8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0887ABF8u);
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[2]);
    goto L_0887ACCC;
L_0887ABF8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x0887AC08u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    goto L_0887ACCC;
L_0887AC08:
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_0887ABC8;
      }
      goto L_0887AC14;
    }
L_0887AC14:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[18] << 2u);
    ctx.set_gpr(19, ctx.gpr[2] + ctx.gpr[7]);
    ctx.set_gpr(31, 0x0887AC28u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_0887ACCC;
L_0887AC28:
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    goto L_0887AB10;
L_0887AC38:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(25, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0887ABC8;
      }
      goto L_0887AC40;
    }
L_0887AC40:
    { const bool branch_taken = ctx.gpr[25] != 0u;
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0887ABAC;
      }
      goto L_0887AC48;
    }
L_0887AC48:
    if (ctx.gpr[4] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(284)));
        goto L_0887AC68;
    }
    goto L_0887AC50;
L_0887AC50:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0887AC60u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    goto L_0887ACCC;
L_0887AC60:
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[2]);
    goto L_0887ABAC;
L_0887AC68:
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0887AC74u);
    ctx.set_gpr(16, ctx.gpr[20] + static_cast<std::uint32_t>(288));
    goto L_0887ACCC;
L_0887AC74:
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[2]);
    goto L_0887AC50;
L_0887AC7C:
    ctx.set_gpr(31, 0x0887AC84u);
    ctx.set_gpr(4, ctx.gpr[10] + static_cast<std::uint32_t>(12956));
    goto L_08879004;
L_0887AC84:
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(-3));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    goto L_0887AA20;
L_0887AC90:
    ctx.set_gpr(31, 0x0887AC98u);
    ctx.set_gpr(4, ctx.gpr[8] + static_cast<std::uint32_t>(12916));
    goto L_08879004;
L_0887AC98:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-3));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    goto L_0887AA20;
L_0887ACA4:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(12916));
    goto L_0887AA10;
L_0887ACB0:
    ctx.set_gpr(7, 2247u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] << 2u);
    ctx.set_gpr(6, ctx.gpr[7] + static_cast<std::uint32_t>(-17324));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887ACCC:
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    ctx.set_gpr(5, ctx.gpr[9] >> 21u);
    ctx.set_gpr(8, ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 11u));
    ctx.set_gpr(7, ctx.gpr[5] << 11u);
    ctx.set_gpr(6, ctx.gpr[4] - ctx.gpr[7]);
    ctx.set_gpr(3, static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887ACF0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0887AD00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 620u, 0x08877BC8u>(ctx, &aot_mem) && ctx.pc == 0x0887AD00u) goto L_0887AD00;
    return;
L_0887AD00:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887AD0C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0887AD1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 621u, 0x08877BD0u>(ctx, &aot_mem) && ctx.pc == 0x0887AD1Cu) goto L_0887AD1C;
    return;
L_0887AD1C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887AFD8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.set_gpr(31, 0x0887B004u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_0887ACF0;
L_0887B004:
    ctx.set_gpr(4, 2247u << 16u);
    ctx.set_gpr(12, 15u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(-15957));
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(11, ctx.gpr[19] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2048));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(10, ctx.gpr[12] | 65535u);
    ctx.set_gpr(2, (ctx.gpr[2] & ~0x0000001Fu) | ((0u & 0x0000001Fu) << 0u));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0887B048u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    goto L_08879970;
L_0887B048:
    ctx.set_gpr(31, 0x0887B050u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    goto L_0887AD0C;
L_0887B050:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887B63C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0887B650u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_0887ACF0;
L_0887B650:
    ctx.set_gpr(31, 0x0887B658u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 105u, 0x0887D040u>(ctx, &aot_mem) && ctx.pc == 0x0887B658u) goto L_0887B658;
    return;
L_0887B658:
    ctx.set_gpr(31, 0x0887B660u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_0887AD0C;
L_0887B660:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887B770:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(-18156));
    ctx.set_gpr(6, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(7, ctx.gpr[4] + static_cast<std::uint32_t>(832));
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    goto L_0887B794;
L_0887B794:
    ctx.set_gpr(3, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(52));
      if (branch_taken) {
          goto L_0887B898;
      }
      goto L_0887B7A0;
    }
L_0887B7A0:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(52));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(52));
      if (branch_taken) {
          goto L_0887B898;
      }
      goto L_0887B7B0;
    }
L_0887B7B0:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(52));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(52));
      if (branch_taken) {
          goto L_0887B898;
      }
      goto L_0887B7C0;
    }
L_0887B7C0:
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(52));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(52));
      if (branch_taken) {
          goto L_0887B898;
      }
      goto L_0887B7D0;
    }
L_0887B7D0:
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(52));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(52));
      if (branch_taken) {
          goto L_0887B898;
      }
      goto L_0887B7E0;
    }
L_0887B7E0:
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(52));
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(52));
      if (branch_taken) {
          goto L_0887B898;
      }
      goto L_0887B7F0;
    }
L_0887B7F0:
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(52));
    { const bool branch_taken = ctx.gpr[12] == 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(52));
      if (branch_taken) {
          goto L_0887B898;
      }
      goto L_0887B800;
    }
L_0887B800:
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(6, ctx.gpr[3] + static_cast<std::uint32_t>(52));
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
      if (branch_taken) {
          goto L_0887B898;
      }
      goto L_0887B818;
    }
L_0887B818:
    if (ctx.gpr[5] != 0u) {
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
        goto L_0887B794;
    }
    goto L_0887B820;
L_0887B820:
    ctx.set_gpr(2, 2225u << 16u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(12644));
      if (branch_taken) {
          goto L_0887B888;
      }
      goto L_0887B82C;
    }
L_0887B82C:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(31, 0x0887B838u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(256));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 584u, 0x088822A4u>(ctx, &aot_mem) && ctx.pc == 0x0887B838u) goto L_0887B838;
    return;
L_0887B838:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0887B880;
      }
      goto L_0887B840;
    }
L_0887B840:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(512));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[7]);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    goto L_0887B870;
L_0887B870:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887B880:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(12696));
    goto L_0887B888;
L_0887B888:
    ctx.set_gpr(31, 0x0887B890u);
    // nop
    goto L_08879004;
L_0887B890:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0887B870;
L_0887B898:
    ctx.set_gpr(16, ctx.gpr[3] + 0u);
    goto L_0887B820;
}

void recomp_unit_0029(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0029_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_29(Runtime &runtime) {
    runtime.register_generated_unit(29u, 0x08878000u, 16384u, &recomp_unit_0029, &recomp_unit_0029_entry);
    runtime.register_function(0x08878000u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088780ECu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887810Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887812Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878130u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887813Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887815Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878164u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887818Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887819Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887820Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088782E0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878338u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887846Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878478u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878498u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088784B8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088784D0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088784D8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088784E4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878504u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878524u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878538u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878604u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878610u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878630u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887864Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088786A8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878704u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887870Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878724u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878758u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878870u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878880u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887888Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088788B4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878930u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887894Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878998u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088789E8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878A2Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878A44u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878A80u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878A9Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878AD0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878AE8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878B44u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878B5Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878B98u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878BB4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878BE8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878C00u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878C14u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878C28u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878C44u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878C74u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878CF0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878D0Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878D50u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878D8Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878EA8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878EBCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878ED8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878F08u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878F38u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878F48u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878F4Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878F54u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878F64u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878F6Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878F88u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878FA4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878FC0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878FDCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08878FF8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879004u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879030u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879038u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879048u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887904Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879054u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879064u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879070u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879078u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879084u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088790C4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088790CCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088790D4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088790E8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088790F0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879104u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879114u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887911Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879128u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887935Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879398u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088793ECu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887941Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887944Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879478u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879480u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879490u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088794A0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088794B4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088794D0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088794D4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879514u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879528u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879548u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879550u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879560u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879574u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088795C8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088795F8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879628u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879654u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887965Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879668u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879678u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887968Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088796A8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088796ACu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088796ECu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879714u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887971Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879724u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887972Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879740u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879754u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887975Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879764u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887976Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879774u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887977Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879784u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887978Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088797A0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088797B4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088797BCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088797C4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088797CCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088797D4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088797DCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879814u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887982Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879834u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879848u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887985Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879870u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088798B0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088798CCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088798D0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088798D8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088798E0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887992Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879940u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879954u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879968u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879970u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088799D0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x088799E0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879A04u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879A0Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879A18u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879A20u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879A40u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879A5Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879A74u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879A88u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879A90u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879A94u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879AD4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879B08u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879B14u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879B1Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879B24u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879B30u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879B38u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879B58u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879B60u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879B68u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879B6Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879B7Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879B88u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879B90u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879B98u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879BA0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879BACu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879BB4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879BBCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879BC4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879BCCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879BD4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879BE0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879BE8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879BFCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879C04u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879C0Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879C20u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879C38u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879C40u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879C4Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879C54u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879C5Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879D18u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879D24u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879D34u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879D44u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879D54u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879D64u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879D74u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879D84u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879D9Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879DA4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879DB0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879DBCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879DC8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879E28u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879E2Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879EB0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879EB8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879EC0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879EC8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879ED0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879F7Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879F88u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879F98u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879FA8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879FB8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879FC8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879FD8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x08879FE8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A000u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A008u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A010u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A01Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A024u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A074u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A07Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A094u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A0BCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A0C0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A140u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A148u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A150u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A158u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A160u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A168u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A1FCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A204u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A214u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A218u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A220u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A224u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A2A0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A2C8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A2D4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A2DCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A2E4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A2ECu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A2F4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A324u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A330u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A338u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A340u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A36Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A374u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A37Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A39Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A3A4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A3B0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A3BCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A3D4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A3E0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A3ECu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A3F4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A404u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A410u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A49Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A4ACu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A4B4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A4C0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A4C8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A4D0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A4D8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A4ECu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A4F8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A508u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A51Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A520u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A528u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A580u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A584u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A5A4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A5ACu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A5B4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A5BCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A5C4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A5CCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A5D8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A5E0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A600u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A60Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A618u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A61Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A628u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A62Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A640u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A648u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A650u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A658u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A66Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A678u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A688u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A69Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A6A0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A6ACu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A6B4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A6BCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A6CCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A6D4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A6E0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A700u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A710u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A71Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A730u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A744u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A74Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A754u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A75Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A764u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A76Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A774u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A784u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A790u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A79Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A7B0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A7C4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A7CCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A7D4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A7DCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A7E8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A7F4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A808u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A820u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A824u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A82Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A834u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A83Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A858u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A864u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A868u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A86Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A87Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A884u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A88Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A8D8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A8E0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A8ECu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A8F4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A90Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A914u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A91Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A924u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A92Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A934u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A93Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A94Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A964u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A968u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A974u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A97Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A984u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A9D0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A9ECu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887A9F8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AA00u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AA08u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AA10u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AA18u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AA20u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AA28u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AA40u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AA74u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AA84u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AA94u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AAA4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AABCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AAF8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AB10u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AB18u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AB28u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AB44u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AB4Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AB54u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AB5Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AB70u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AB80u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AB90u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AB9Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887ABACu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887ABBCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887ABC8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887ABD8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887ABE8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887ABF8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AC08u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AC14u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AC28u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AC38u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AC40u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AC48u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AC50u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AC60u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AC68u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AC74u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AC7Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AC84u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AC90u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AC98u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887ACA4u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887ACB0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887ACCCu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887ACF0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AD00u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AD0Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AD1Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887AFD8u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B004u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B048u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B050u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B63Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B650u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B658u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B660u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B770u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B794u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B7A0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B7B0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B7C0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B7D0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B7E0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B7F0u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B800u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B818u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B820u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B82Cu, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B838u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B840u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B870u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B880u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B888u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B890u, &recomp_unit_0029, "recomp_unit_0029");
    runtime.register_function(0x0887B898u, &recomp_unit_0029, "recomp_unit_0029");
}
} // namespace psprecomp
