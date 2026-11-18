#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0028[4094] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0,
    0, 5, 6, 0, 0, 0, 0, 7, 0, 8, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 12, 13, 0, 0, 0, 0, 0, 14, 0, 15, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 20, 0, 21, 22, 0, 23, 0, 24, 0, 25, 0, 26, 0, 27, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0, 32,
    33, 0, 0, 0, 34, 35, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 38, 0, 39, 0, 0, 0, 40, 0, 0, 41,
    0, 0, 42, 0, 43, 0, 44, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 48, 0, 0, 0, 0, 0, 0, 49,
    0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 53, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 55, 0, 0, 0, 0, 56,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 62, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 64, 0, 0, 65, 0, 66, 0, 67, 0, 68, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 72, 0, 73, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0, 78, 0, 79, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 87, 0,
    0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 0, 94, 0, 95, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 98, 0,
    99, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 102, 103, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0,
    0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 108, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 114, 0,
    0, 0, 115, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 119, 0, 120, 0, 0,
    0, 121, 0, 122, 0, 123, 0, 0, 0, 124, 0, 125, 0, 0, 0, 0, 0, 0, 0, 126, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0,
    130, 0, 0, 0, 0, 0, 0, 131, 0, 132, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0,
    0, 0, 0, 136, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    139, 0, 140, 0, 141, 0, 0, 142, 143, 0, 0, 0, 0, 0, 0, 144, 0, 145, 0, 146, 0, 0, 147, 0, 148, 0, 149, 0, 150, 0, 0, 151,
    0, 152, 0, 153, 0, 154, 0, 0, 0, 155, 0, 156, 0, 157, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 160,
    0, 161, 0, 0, 162, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 166, 0, 0, 0, 0, 0, 167, 168, 0,
    0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 176,
    0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 179, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 182, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 0, 0, 190,
    0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 195, 0, 196, 0, 197,
    0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 203, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 208, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 209, 0, 210, 0, 211, 0, 212, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 216, 0, 217, 0, 218,
    0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 220, 0, 0, 221, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 230, 0,
    231, 0, 232, 0, 233, 0, 0, 0, 0, 0, 234, 235, 0, 0, 236, 0, 237, 0, 238, 0, 239, 0, 0, 0, 240, 0, 241, 0, 0, 242, 0, 0,
    243, 0, 244, 0, 245, 0, 0, 246, 0, 247, 0, 248, 0, 249, 0, 250, 0, 251, 0, 252, 0, 253, 0, 254, 0, 255, 256, 0, 257, 0, 258, 0,
    259, 0, 260, 0, 261, 0, 0, 0, 262, 0, 263, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0,
    0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 276,
    0, 0, 0, 277, 0, 278, 0, 279, 0, 280, 0, 281, 0, 0, 282, 0, 0, 0, 0, 283, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 288, 289, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 292, 0, 0, 0,
    0, 0, 0, 0, 293, 0, 0, 0, 294, 0, 295, 0, 0, 296, 0, 297, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 299, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 0, 302, 303, 0, 304, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0,
    307, 0, 0, 0, 308, 0, 0, 0, 309, 0, 310, 0, 311, 0, 0, 312, 0, 313, 0, 314, 0, 0, 0, 0, 315, 0, 316, 0, 317, 0, 318, 0,
    319, 0, 0, 0, 0, 320, 0, 321, 0, 0, 0, 322, 0, 0, 323, 0, 324, 0, 325, 0, 326, 0, 327, 0, 328, 0, 329, 0, 330, 0, 331, 0,
    332, 0, 333, 0, 334, 0, 335, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 338, 0, 339, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 342, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 344, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0,
    0, 0, 348, 0, 0, 349, 0, 0, 0, 0, 350, 0, 0, 0, 351, 0, 0, 352, 0, 353, 0, 354, 0, 355, 0, 0, 0, 0, 356, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 358, 0, 0, 359, 360, 0, 0, 0, 0, 0, 0, 361, 362, 0, 363, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 364, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 367, 0, 0, 368, 0, 0, 369, 0, 0, 0, 370, 0,
    0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 375, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 377, 0, 378, 0, 379, 0, 380, 0, 0, 0, 0, 0,
    0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383,
    0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 386,
    0, 0, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389,
    0, 0, 0, 390, 0, 0, 0, 391, 0, 392, 0, 0, 0, 393, 394, 0, 0, 395, 0, 396, 0, 0, 0, 397, 0, 398, 0, 0, 0, 399, 0, 400,
    0, 0, 0, 401, 0, 402, 0, 0, 0, 403, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 405, 0, 406, 0, 0, 0, 407, 0, 0, 0, 408, 0, 409, 0, 0, 0, 410, 411, 0, 0, 412, 0, 413, 0, 0, 0, 414, 0,
    415, 0, 0, 0, 416, 0, 417, 0, 0, 0, 418, 0, 419, 0, 0, 0, 420, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 424, 0, 425, 0, 0,
    426, 0, 0, 427, 0, 0, 0, 0, 0, 428, 0, 429, 430, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 434, 0, 435, 0, 0, 436, 0, 0, 437, 0, 438, 0, 439, 0, 440, 0, 0, 441, 0, 442, 443, 0,
    0, 444, 0, 445, 0, 446, 0, 447, 0, 448, 0, 449, 0, 450, 0, 451, 452, 0, 0, 453, 0, 454, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0,
    456, 0, 0, 457, 0, 0, 0, 0, 458, 0, 0, 0, 459, 0, 0, 460, 0, 461, 0, 462, 0, 463, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 466, 0, 0, 467, 468, 0, 0, 0, 0, 0, 0, 469, 470, 0, 471, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 472, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 475, 0, 0, 476, 0, 0, 477, 0, 0, 0, 478, 0, 0, 0,
    0, 0, 479, 0, 0, 0, 0, 0, 480, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 483, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 485, 0, 486, 0, 487, 0, 488, 0, 0, 0, 0, 0, 0, 489,
    0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 492, 0, 0, 0, 0, 493, 0, 0, 0, 494, 0, 0,
    495, 0, 496, 0, 497, 0, 498, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 501, 0, 0, 0, 502,
    503, 0, 0, 0, 0, 0, 0, 0, 504, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 506, 507, 508, 0, 0, 0, 0, 0, 0, 0, 509, 0, 510, 0, 511, 0, 0, 512, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0,
    514, 0, 0, 0, 0, 0, 515, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0, 518, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 520, 0, 521, 0, 522, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 527, 0, 0, 0, 0, 528, 0, 0, 0, 529,
    0, 0, 530, 0, 531, 0, 532, 0, 533, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 536, 0, 0,
    537, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 539, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 540, 541, 0, 0, 0, 0, 0, 0, 0, 0, 0, 542, 0, 543, 0, 544,
    0, 545, 0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 548, 0, 0, 0, 549, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 551, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    552, 0, 553, 0, 554, 0, 555, 0, 556, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 557, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 559, 0, 560, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0,
    0, 0, 563, 0, 0, 0, 0, 0, 564, 565, 0, 0, 0, 0, 566, 0, 567, 0, 568, 0, 569, 0, 0, 0, 0, 0, 570, 0, 571, 0, 572, 573,
    0, 574, 0, 575, 0, 576, 0, 577, 0, 578, 0, 579, 0, 580, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 581, 0, 0, 0,
    582, 0, 0, 0, 583, 0, 584, 0, 0, 0, 585, 586, 0, 0, 587, 0, 0, 588, 0, 0, 589, 0, 0, 590, 0, 0, 591, 0, 0, 592, 0, 0,
    593, 0, 594, 0, 0, 0, 595, 596, 0, 0, 597, 0, 598, 0, 0, 0, 0, 0, 0, 0, 0, 599, 0, 600, 0, 601, 0, 602, 0, 0, 603, 0,
    604, 0, 0, 605, 0, 606, 0, 0, 607, 0, 608, 0, 609, 0, 610, 0, 0, 0, 0, 0, 0, 0, 611, 0, 612, 0, 613, 0, 0, 0, 0, 0,
    0, 614, 615, 0, 616, 0, 0, 0, 617, 0, 0, 618, 0, 0, 0, 619, 0, 0, 620, 0, 621, 0, 622, 0, 0, 0, 0, 0, 623, 0, 0, 624,
    0, 0, 0, 625, 0, 0, 0, 626, 627, 0, 0, 628, 0, 0, 0, 0, 629, 0, 0, 0, 0, 630, 0, 0, 0, 0, 631, 0, 0, 0, 632, 633,
    0, 0, 634, 0, 0, 635, 0, 0, 0, 636, 0, 637, 0, 638, 0, 639, 0, 0, 640, 0, 0, 641, 0, 642, 0, 0, 643, 0, 644, 0, 0, 0,
    0, 645, 0, 0, 0, 0, 0, 0, 646, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 647, 648, 649, 0, 650, 0, 651, 0, 0, 0, 0, 0, 652, 0, 0, 0,
    653, 0, 0, 0, 0, 0, 0, 0, 654, 655, 656, 0, 657, 0, 0, 0, 0, 0, 0, 658, 0, 0, 0, 0, 0, 659, 0, 0, 660, 0, 0, 661,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 662, 0, 663, 0, 0, 0, 0, 664, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 665, 0, 0, 0, 0, 0, 0, 0, 666, 667, 0, 0, 668, 0, 0, 0, 0, 0, 0, 0, 669, 0, 670, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 671, 0, 0, 0, 672, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 673,
};
void recomp_unit_0028_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08874000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0028[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08874000;
    case 2u: goto L_08874014;
    case 3u: goto L_08874050;
    case 4u: goto L_08874070;
    case 5u: goto L_08874084;
    case 6u: goto L_08874088;
    case 7u: goto L_0887409C;
    case 8u: goto L_088740A4;
    case 9u: goto L_088740AC;
    case 10u: goto L_088741D4;
    case 11u: goto L_0887422C;
    case 12u: goto L_08874230;
    case 13u: goto L_08874234;
    case 14u: goto L_0887424C;
    case 15u: goto L_08874254;
    case 16u: goto L_08874260;
    case 17u: goto L_08874270;
    case 18u: goto L_0887431C;
    case 19u: goto L_08874334;
    case 20u: goto L_0887433C;
    case 21u: goto L_08874344;
    case 22u: goto L_08874348;
    case 23u: goto L_08874350;
    case 24u: goto L_08874358;
    case 25u: goto L_08874360;
    case 26u: goto L_08874368;
    case 27u: goto L_08874370;
    case 28u: goto L_088743E4;
    case 29u: goto L_08874440;
    case 30u: goto L_088744E4;
    case 31u: goto L_088744F0;
    case 32u: goto L_088744FC;
    case 33u: goto L_08874500;
    case 34u: goto L_08874510;
    case 35u: goto L_08874514;
    case 36u: goto L_08874518;
    case 37u: goto L_088745D0;
    case 38u: goto L_088745D8;
    case 39u: goto L_088745E0;
    case 40u: goto L_088745F0;
    case 41u: goto L_088745FC;
    case 42u: goto L_08874608;
    case 43u: goto L_08874610;
    case 44u: goto L_08874618;
    case 45u: goto L_08874624;
    case 46u: goto L_08874640;
    case 47u: goto L_08874658;
    case 48u: goto L_08874660;
    case 49u: goto L_0887467C;
    case 50u: goto L_0887468C;
    case 51u: goto L_088746A0;
    case 52u: goto L_088746E8;
    case 53u: goto L_088746EC;
    case 54u: goto L_088747DC;
    case 55u: goto L_088747E8;
    case 56u: goto L_088747FC;
    case 57u: goto L_08874844;
    case 58u: goto L_08874848;
    case 59u: goto L_08874938;
    case 60u: goto L_08874944;
    case 61u: goto L_08874958;
    case 62u: goto L_088749A0;
    case 63u: goto L_088749A4;
    case 64u: goto L_08874A94;
    case 65u: goto L_08874AA0;
    case 66u: goto L_08874AA8;
    case 67u: goto L_08874AB0;
    case 68u: goto L_08874AB8;
    case 69u: goto L_08874AC0;
    case 70u: goto L_08874B00;
    case 71u: goto L_08874B40;
    case 72u: goto L_08874B48;
    case 73u: goto L_08874B50;
    case 74u: goto L_08874B58;
    case 75u: goto L_08874B98;
    case 76u: goto L_08874BD8;
    case 77u: goto L_08874BE0;
    case 78u: goto L_08874BE8;
    case 79u: goto L_08874BF0;
    case 80u: goto L_08874C30;
    case 81u: goto L_08874C70;
    case 82u: goto L_08874CB0;
    case 83u: goto L_08874CB8;
    case 84u: goto L_08874CC8;
    case 85u: goto L_08874CD8;
    case 86u: goto L_08874CE8;
    case 87u: goto L_08874CF8;
    case 88u: goto L_08874D08;
    case 89u: goto L_08874D18;
    case 90u: goto L_08874D28;
    case 91u: goto L_08874D38;
    case 92u: goto L_08874D44;
    case 93u: goto L_08874D60;
    case 94u: goto L_08874D6C;
    case 95u: goto L_08874D74;
    case 96u: goto L_08874DCC;
    case 97u: goto L_08874DF0;
    case 98u: goto L_08874DF8;
    case 99u: goto L_08874E00;
    case 100u: goto L_08874E14;
    case 101u: goto L_08874E20;
    case 102u: goto L_08874E30;
    case 103u: goto L_08874E34;
    case 104u: goto L_08874E44;
    case 105u: goto L_08874E74;
    case 106u: goto L_08874E84;
    case 107u: goto L_08874EC0;
    case 108u: goto L_08874EC8;
    case 109u: goto L_08874ED8;
    case 110u: goto L_08874EE4;
    case 111u: goto L_08874F44;
    case 112u: goto L_08874F4C;
    case 113u: goto L_08874F70;
    case 114u: goto L_08874F78;
    case 115u: goto L_08874F88;
    case 116u: goto L_08874F8C;
    case 117u: goto L_08874FC0;
    case 118u: goto L_08874FE4;
    case 119u: goto L_08874FEC;
    case 120u: goto L_08874FF4;
    case 121u: goto L_08875004;
    case 122u: goto L_0887500C;
    case 123u: goto L_08875014;
    case 124u: goto L_08875024;
    case 125u: goto L_0887502C;
    case 126u: goto L_0887504C;
    case 127u: goto L_08875054;
    case 128u: goto L_08875068;
    case 129u: goto L_08875078;
    case 130u: goto L_08875080;
    case 131u: goto L_0887509C;
    case 132u: goto L_088750A4;
    case 133u: goto L_088750B4;
    case 134u: goto L_088750C4;
    case 135u: goto L_088750F0;
    case 136u: goto L_0887510C;
    case 137u: goto L_08875114;
    case 138u: goto L_08875124;
    case 139u: goto L_08875180;
    case 140u: goto L_08875188;
    case 141u: goto L_08875190;
    case 142u: goto L_0887519C;
    case 143u: goto L_088751A0;
    case 144u: goto L_088751BC;
    case 145u: goto L_088751C4;
    case 146u: goto L_088751CC;
    case 147u: goto L_088751D8;
    case 148u: goto L_088751E0;
    case 149u: goto L_088751E8;
    case 150u: goto L_088751F0;
    case 151u: goto L_088751FC;
    case 152u: goto L_08875204;
    case 153u: goto L_0887520C;
    case 154u: goto L_08875214;
    case 155u: goto L_08875224;
    case 156u: goto L_0887522C;
    case 157u: goto L_08875234;
    case 158u: goto L_0887523C;
    case 159u: goto L_08875270;
    case 160u: goto L_0887527C;
    case 161u: goto L_08875284;
    case 162u: goto L_08875290;
    case 163u: goto L_0887529C;
    case 164u: goto L_088752C4;
    case 165u: goto L_088752D8;
    case 166u: goto L_088752DC;
    case 167u: goto L_088752F4;
    case 168u: goto L_088752F8;
    case 169u: goto L_08875304;
    case 170u: goto L_08875318;
    case 171u: goto L_08875330;
    case 172u: goto L_08875338;
    case 173u: goto L_0887535C;
    case 174u: goto L_088753E0;
    case 175u: goto L_088753F4;
    case 176u: goto L_088753FC;
    case 177u: goto L_08875410;
    case 178u: goto L_0887542C;
    case 179u: goto L_08875434;
    case 180u: goto L_08875444;
    case 181u: goto L_08875468;
    case 182u: goto L_08875470;
    case 183u: goto L_088754B4;
    case 184u: goto L_088754E8;
    case 185u: goto L_088754F8;
    case 186u: goto L_08875534;
    case 187u: goto L_08875540;
    case 188u: goto L_08875554;
    case 189u: goto L_08875564;
    case 190u: goto L_0887557C;
    case 191u: goto L_08875584;
    case 192u: goto L_088755B4;
    case 193u: goto L_088755B8;
    case 194u: goto L_088755E4;
    case 195u: goto L_088755EC;
    case 196u: goto L_088755F4;
    case 197u: goto L_088755FC;
    case 198u: goto L_08875614;
    case 199u: goto L_08875628;
    case 200u: goto L_0887563C;
    case 201u: goto L_0887564C;
    case 202u: goto L_08875664;
    case 203u: goto L_0887566C;
    case 204u: goto L_0887569C;
    case 205u: goto L_088756B8;
    case 206u: goto L_088756C8;
    case 207u: goto L_088756E0;
    case 208u: goto L_088756E8;
    case 209u: goto L_08875718;
    case 210u: goto L_08875720;
    case 211u: goto L_08875728;
    case 212u: goto L_08875730;
    case 213u: goto L_08875738;
    case 214u: goto L_08875750;
    case 215u: goto L_08875764;
    case 216u: goto L_0887576C;
    case 217u: goto L_08875774;
    case 218u: goto L_0887577C;
    case 219u: goto L_08875794;
    case 220u: goto L_088757A8;
    case 221u: goto L_088757B4;
    case 222u: goto L_088757C0;
    case 223u: goto L_088757D0;
    case 224u: goto L_088757F4;
    case 225u: goto L_08875848;
    case 226u: goto L_08875878;
    case 227u: goto L_088758BC;
    case 228u: goto L_088758C4;
    case 229u: goto L_08875960;
    case 230u: goto L_08875978;
    case 231u: goto L_08875980;
    case 232u: goto L_08875988;
    case 233u: goto L_08875990;
    case 234u: goto L_088759A8;
    case 235u: goto L_088759AC;
    case 236u: goto L_088759B8;
    case 237u: goto L_088759C0;
    case 238u: goto L_088759C8;
    case 239u: goto L_088759D0;
    case 240u: goto L_088759E0;
    case 241u: goto L_088759E8;
    case 242u: goto L_088759F4;
    case 243u: goto L_08875A00;
    case 244u: goto L_08875A08;
    case 245u: goto L_08875A10;
    case 246u: goto L_08875A1C;
    case 247u: goto L_08875A24;
    case 248u: goto L_08875A2C;
    case 249u: goto L_08875A34;
    case 250u: goto L_08875A3C;
    case 251u: goto L_08875A44;
    case 252u: goto L_08875A4C;
    case 253u: goto L_08875A54;
    case 254u: goto L_08875A5C;
    case 255u: goto L_08875A64;
    case 256u: goto L_08875A68;
    case 257u: goto L_08875A70;
    case 258u: goto L_08875A78;
    case 259u: goto L_08875A80;
    case 260u: goto L_08875A88;
    case 261u: goto L_08875A90;
    case 262u: goto L_08875AA0;
    case 263u: goto L_08875AA8;
    case 264u: goto L_08875AC8;
    case 265u: goto L_08875AE0;
    case 266u: goto L_08875AF0;
    case 267u: goto L_08875B10;
    case 268u: goto L_08875B24;
    case 269u: goto L_08875B34;
    case 270u: goto L_08875B54;
    case 271u: goto L_08875B6C;
    case 272u: goto L_08875B98;
    case 273u: goto L_08875BAC;
    case 274u: goto L_08875BD0;
    case 275u: goto L_08875BE0;
    case 276u: goto L_08875BFC;
    case 277u: goto L_08875C0C;
    case 278u: goto L_08875C14;
    case 279u: goto L_08875C1C;
    case 280u: goto L_08875C24;
    case 281u: goto L_08875C2C;
    case 282u: goto L_08875C38;
    case 283u: goto L_08875C4C;
    case 284u: goto L_08875C58;
    case 285u: goto L_08875C6C;
    case 286u: goto L_08875C9C;
    case 287u: goto L_08875CAC;
    case 288u: goto L_08875CB8;
    case 289u: goto L_08875CBC;
    case 290u: goto L_08875CC4;
    case 291u: goto L_08875CDC;
    case 292u: goto L_08875CF0;
    case 293u: goto L_08875D10;
    case 294u: goto L_08875D20;
    case 295u: goto L_08875D28;
    case 296u: goto L_08875D34;
    case 297u: goto L_08875D3C;
    case 298u: goto L_08875D44;
    case 299u: goto L_08876204;
    case 300u: goto L_08876220;
    case 301u: goto L_08876230;
    case 302u: goto L_0887623C;
    case 303u: goto L_08876240;
    case 304u: goto L_08876248;
    case 305u: goto L_0887625C;
    case 306u: goto L_08876274;
    case 307u: goto L_08876280;
    case 308u: goto L_08876290;
    case 309u: goto L_088762A0;
    case 310u: goto L_088762A8;
    case 311u: goto L_088762B0;
    case 312u: goto L_088762BC;
    case 313u: goto L_088762C4;
    case 314u: goto L_088762CC;
    case 315u: goto L_088762E0;
    case 316u: goto L_088762E8;
    case 317u: goto L_088762F0;
    case 318u: goto L_088762F8;
    case 319u: goto L_08876300;
    case 320u: goto L_08876314;
    case 321u: goto L_0887631C;
    case 322u: goto L_0887632C;
    case 323u: goto L_08876338;
    case 324u: goto L_08876340;
    case 325u: goto L_08876348;
    case 326u: goto L_08876350;
    case 327u: goto L_08876358;
    case 328u: goto L_08876360;
    case 329u: goto L_08876368;
    case 330u: goto L_08876370;
    case 331u: goto L_08876378;
    case 332u: goto L_08876380;
    case 333u: goto L_08876388;
    case 334u: goto L_08876390;
    case 335u: goto L_08876398;
    case 336u: goto L_088763A0;
    case 337u: goto L_088764D4;
    case 338u: goto L_08876518;
    case 339u: goto L_08876520;
    case 340u: goto L_08876528;
    case 341u: goto L_0887654C;
    case 342u: goto L_08876554;
    case 343u: goto L_08876558;
    case 344u: goto L_0887658C;
    case 345u: goto L_08876594;
    case 346u: goto L_088765C4;
    case 347u: goto L_088765E4;
    case 348u: goto L_08876608;
    case 349u: goto L_08876614;
    case 350u: goto L_08876628;
    case 351u: goto L_08876638;
    case 352u: goto L_08876644;
    case 353u: goto L_0887664C;
    case 354u: goto L_08876654;
    case 355u: goto L_0887665C;
    case 356u: goto L_08876670;
    case 357u: goto L_088766A8;
    case 358u: goto L_088766B0;
    case 359u: goto L_088766BC;
    case 360u: goto L_088766C0;
    case 361u: goto L_088766DC;
    case 362u: goto L_088766E0;
    case 363u: goto L_088766E8;
    case 364u: goto L_0887671C;
    case 365u: goto L_08876720;
    case 366u: goto L_08876748;
    case 367u: goto L_08876750;
    case 368u: goto L_0887675C;
    case 369u: goto L_08876768;
    case 370u: goto L_08876778;
    case 371u: goto L_08876790;
    case 372u: goto L_088767A8;
    case 373u: goto L_088767B8;
    case 374u: goto L_088767E4;
    case 375u: goto L_088767F0;
    case 376u: goto L_08876848;
    case 377u: goto L_08876850;
    case 378u: goto L_08876858;
    case 379u: goto L_08876860;
    case 380u: goto L_08876868;
    case 381u: goto L_08876884;
    case 382u: goto L_088768A8;
    case 383u: goto L_088768FC;
    case 384u: goto L_08876904;
    case 385u: goto L_08876968;
    case 386u: goto L_0887697C;
    case 387u: goto L_08876994;
    case 388u: goto L_088769A4;
    case 389u: goto L_088769FC;
    case 390u: goto L_08876A0C;
    case 391u: goto L_08876A1C;
    case 392u: goto L_08876A24;
    case 393u: goto L_08876A34;
    case 394u: goto L_08876A38;
    case 395u: goto L_08876A44;
    case 396u: goto L_08876A4C;
    case 397u: goto L_08876A5C;
    case 398u: goto L_08876A64;
    case 399u: goto L_08876A74;
    case 400u: goto L_08876A7C;
    case 401u: goto L_08876A8C;
    case 402u: goto L_08876A94;
    case 403u: goto L_08876AA4;
    case 404u: goto L_08876AAC;
    case 405u: goto L_08876B10;
    case 406u: goto L_08876B18;
    case 407u: goto L_08876B28;
    case 408u: goto L_08876B38;
    case 409u: goto L_08876B40;
    case 410u: goto L_08876B50;
    case 411u: goto L_08876B54;
    case 412u: goto L_08876B60;
    case 413u: goto L_08876B68;
    case 414u: goto L_08876B78;
    case 415u: goto L_08876B80;
    case 416u: goto L_08876B90;
    case 417u: goto L_08876B98;
    case 418u: goto L_08876BA8;
    case 419u: goto L_08876BB0;
    case 420u: goto L_08876BC0;
    case 421u: goto L_08876BC8;
    case 422u: goto L_08876C40;
    case 423u: goto L_08876C64;
    case 424u: goto L_08876C6C;
    case 425u: goto L_08876C74;
    case 426u: goto L_08876C80;
    case 427u: goto L_08876C8C;
    case 428u: goto L_08876CA4;
    case 429u: goto L_08876CAC;
    case 430u: goto L_08876CB0;
    case 431u: goto L_08876CB4;
    case 432u: goto L_08876CE0;
    case 433u: goto L_08876D10;
    case 434u: goto L_08876D28;
    case 435u: goto L_08876D30;
    case 436u: goto L_08876D3C;
    case 437u: goto L_08876D48;
    case 438u: goto L_08876D50;
    case 439u: goto L_08876D58;
    case 440u: goto L_08876D60;
    case 441u: goto L_08876D6C;
    case 442u: goto L_08876D74;
    case 443u: goto L_08876D78;
    case 444u: goto L_08876D84;
    case 445u: goto L_08876D8C;
    case 446u: goto L_08876D94;
    case 447u: goto L_08876D9C;
    case 448u: goto L_08876DA4;
    case 449u: goto L_08876DAC;
    case 450u: goto L_08876DB4;
    case 451u: goto L_08876DBC;
    case 452u: goto L_08876DC0;
    case 453u: goto L_08876DCC;
    case 454u: goto L_08876DD4;
    case 455u: goto L_08876DDC;
    case 456u: goto L_08876E00;
    case 457u: goto L_08876E0C;
    case 458u: goto L_08876E20;
    case 459u: goto L_08876E30;
    case 460u: goto L_08876E3C;
    case 461u: goto L_08876E44;
    case 462u: goto L_08876E4C;
    case 463u: goto L_08876E54;
    case 464u: goto L_08876E68;
    case 465u: goto L_08876EA0;
    case 466u: goto L_08876EA8;
    case 467u: goto L_08876EB4;
    case 468u: goto L_08876EB8;
    case 469u: goto L_08876ED4;
    case 470u: goto L_08876ED8;
    case 471u: goto L_08876EE0;
    case 472u: goto L_08876F14;
    case 473u: goto L_08876F18;
    case 474u: goto L_08876F40;
    case 475u: goto L_08876F48;
    case 476u: goto L_08876F54;
    case 477u: goto L_08876F60;
    case 478u: goto L_08876F70;
    case 479u: goto L_08876F88;
    case 480u: goto L_08876FA0;
    case 481u: goto L_08876FB0;
    case 482u: goto L_08876FDC;
    case 483u: goto L_08876FE8;
    case 484u: goto L_08877040;
    case 485u: goto L_08877048;
    case 486u: goto L_08877050;
    case 487u: goto L_08877058;
    case 488u: goto L_08877060;
    case 489u: goto L_0887707C;
    case 490u: goto L_088770A0;
    case 491u: goto L_088770C4;
    case 492u: goto L_088770D0;
    case 493u: goto L_088770E4;
    case 494u: goto L_088770F4;
    case 495u: goto L_08877100;
    case 496u: goto L_08877108;
    case 497u: goto L_08877110;
    case 498u: goto L_08877118;
    case 499u: goto L_0887712C;
    case 500u: goto L_08877164;
    case 501u: goto L_0887716C;
    case 502u: goto L_0887717C;
    case 503u: goto L_08877180;
    case 504u: goto L_088771A0;
    case 505u: goto L_088771A4;
    case 506u: goto L_08877204;
    case 507u: goto L_08877208;
    case 508u: goto L_0887720C;
    case 509u: goto L_0887722C;
    case 510u: goto L_08877234;
    case 511u: goto L_0887723C;
    case 512u: goto L_08877248;
    case 513u: goto L_08877264;
    case 514u: goto L_08877280;
    case 515u: goto L_08877298;
    case 516u: goto L_088772A4;
    case 517u: goto L_088772E0;
    case 518u: goto L_088772EC;
    case 519u: goto L_088773AC;
    case 520u: goto L_088773B4;
    case 521u: goto L_088773BC;
    case 522u: goto L_088773C4;
    case 523u: goto L_088773CC;
    case 524u: goto L_088773F4;
    case 525u: goto L_08877428;
    case 526u: goto L_0887744C;
    case 527u: goto L_08877458;
    case 528u: goto L_0887746C;
    case 529u: goto L_0887747C;
    case 530u: goto L_08877488;
    case 531u: goto L_08877490;
    case 532u: goto L_08877498;
    case 533u: goto L_088774A0;
    case 534u: goto L_088774B4;
    case 535u: goto L_088774EC;
    case 536u: goto L_088774F4;
    case 537u: goto L_08877500;
    case 538u: goto L_0887752C;
    case 539u: goto L_08877534;
    case 540u: goto L_088775C0;
    case 541u: goto L_088775C4;
    case 542u: goto L_088775EC;
    case 543u: goto L_088775F4;
    case 544u: goto L_088775FC;
    case 545u: goto L_08877604;
    case 546u: goto L_08877620;
    case 547u: goto L_08877644;
    case 548u: goto L_0887765C;
    case 549u: goto L_0887766C;
    case 550u: goto L_088776B0;
    case 551u: goto L_088776BC;
    case 552u: goto L_08877780;
    case 553u: goto L_08877788;
    case 554u: goto L_08877790;
    case 555u: goto L_08877798;
    case 556u: goto L_088777A0;
    case 557u: goto L_088777D4;
    case 558u: goto L_08877810;
    case 559u: goto L_08877868;
    case 560u: goto L_08877870;
    case 561u: goto L_088778D0;
    case 562u: goto L_088778E8;
    case 563u: goto L_08877908;
    case 564u: goto L_08877920;
    case 565u: goto L_08877924;
    case 566u: goto L_08877938;
    case 567u: goto L_08877940;
    case 568u: goto L_08877948;
    case 569u: goto L_08877950;
    case 570u: goto L_08877968;
    case 571u: goto L_08877970;
    case 572u: goto L_08877978;
    case 573u: goto L_0887797C;
    case 574u: goto L_08877984;
    case 575u: goto L_0887798C;
    case 576u: goto L_08877994;
    case 577u: goto L_0887799C;
    case 578u: goto L_088779A4;
    case 579u: goto L_088779AC;
    case 580u: goto L_088779B4;
    case 581u: goto L_088779F0;
    case 582u: goto L_08877A00;
    case 583u: goto L_08877A10;
    case 584u: goto L_08877A18;
    case 585u: goto L_08877A28;
    case 586u: goto L_08877A2C;
    case 587u: goto L_08877A38;
    case 588u: goto L_08877A44;
    case 589u: goto L_08877A50;
    case 590u: goto L_08877A5C;
    case 591u: goto L_08877A68;
    case 592u: goto L_08877A74;
    case 593u: goto L_08877A80;
    case 594u: goto L_08877A88;
    case 595u: goto L_08877A98;
    case 596u: goto L_08877A9C;
    case 597u: goto L_08877AA8;
    case 598u: goto L_08877AB0;
    case 599u: goto L_08877AD4;
    case 600u: goto L_08877ADC;
    case 601u: goto L_08877AE4;
    case 602u: goto L_08877AEC;
    case 603u: goto L_08877AF8;
    case 604u: goto L_08877B00;
    case 605u: goto L_08877B0C;
    case 606u: goto L_08877B14;
    case 607u: goto L_08877B20;
    case 608u: goto L_08877B28;
    case 609u: goto L_08877B30;
    case 610u: goto L_08877B38;
    case 611u: goto L_08877B58;
    case 612u: goto L_08877B60;
    case 613u: goto L_08877B68;
    case 614u: goto L_08877B84;
    case 615u: goto L_08877B88;
    case 616u: goto L_08877B90;
    case 617u: goto L_08877BA0;
    case 618u: goto L_08877BAC;
    case 619u: goto L_08877BBC;
    case 620u: goto L_08877BC8;
    case 621u: goto L_08877BD0;
    case 622u: goto L_08877BD8;
    case 623u: goto L_08877BF0;
    case 624u: goto L_08877BFC;
    case 625u: goto L_08877C0C;
    case 626u: goto L_08877C1C;
    case 627u: goto L_08877C20;
    case 628u: goto L_08877C2C;
    case 629u: goto L_08877C40;
    case 630u: goto L_08877C54;
    case 631u: goto L_08877C68;
    case 632u: goto L_08877C78;
    case 633u: goto L_08877C7C;
    case 634u: goto L_08877C88;
    case 635u: goto L_08877C94;
    case 636u: goto L_08877CA4;
    case 637u: goto L_08877CAC;
    case 638u: goto L_08877CB4;
    case 639u: goto L_08877CBC;
    case 640u: goto L_08877CC8;
    case 641u: goto L_08877CD4;
    case 642u: goto L_08877CDC;
    case 643u: goto L_08877CE8;
    case 644u: goto L_08877CF0;
    case 645u: goto L_08877D04;
    case 646u: goto L_08877D20;
    case 647u: goto L_08877DC0;
    case 648u: goto L_08877DC4;
    case 649u: goto L_08877DC8;
    case 650u: goto L_08877DD0;
    case 651u: goto L_08877DD8;
    case 652u: goto L_08877DF0;
    case 653u: goto L_08877E00;
    case 654u: goto L_08877E20;
    case 655u: goto L_08877E24;
    case 656u: goto L_08877E28;
    case 657u: goto L_08877E30;
    case 658u: goto L_08877E4C;
    case 659u: goto L_08877E64;
    case 660u: goto L_08877E70;
    case 661u: goto L_08877E7C;
    case 662u: goto L_08877ECC;
    case 663u: goto L_08877ED4;
    case 664u: goto L_08877EE8;
    case 665u: goto L_08877F10;
    case 666u: goto L_08877F30;
    case 667u: goto L_08877F34;
    case 668u: goto L_08877F40;
    case 669u: goto L_08877F60;
    case 670u: goto L_08877F68;
    case 671u: goto L_08877F90;
    case 672u: goto L_08877FA0;
    case 673u: goto L_08877FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08874000:
    ctx.set_gpr(5, ctx.gpr[12] << 1u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[11]);
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store16(ctx.gpr[14] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.set_gpr(2, ctx.gpr[10] << 1u);
    goto L_08874014;
L_08874014:
    ctx.set_gpr(15, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[15] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[2] + ctx.gpr[13]);
    ctx.set_gpr(24, ctx.gpr[2] + ctx.gpr[14]);
    ctx.set_gpr(25, ctx.gpr[3] << 1u);
    ctx.set_gpr(9, ctx.gpr[25] + ctx.gpr[11]);
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[15] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(5, ctx.gpr[12] << 1u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[11]);
    ctx.set_gpr(25, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store16(ctx.gpr[24] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[25]));
    (void)rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 854u, 0x08873E94u>(ctx, &aot_mem); return;
L_08874050:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(9812));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08874070u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08874070u) goto L_08874070;
    return;
L_08874070:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(9820));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0887409C;
      }
      goto L_08874084;
    }
L_08874084:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    goto L_08874088;
L_08874088:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887409C:
    ctx.set_gpr(31, 0x088740A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x088740A4u) goto L_088740A4;
    return;
L_088740A4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_08874088;
      }
      goto L_088740AC;
    }
L_088740AC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    goto L_08874088;
L_088741D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.set_gpr(10, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.set_gpr(12, static_cast<std::int32_t>(ctx.gpr[10]) < 8 ? 1u : 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.set_gpr(5, ctx.gpr[10] + 0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(10, ctx.gpr[29] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    { const bool branch_taken = ctx.gpr[12] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
      if (branch_taken) {
          goto L_0887424C;
      }
      goto L_0887422C;
    }
L_0887422C:
    rt.memory().aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    goto L_08874230;
L_08874230:
    ctx.set_gpr(14, 0u + 0u);
    goto L_08874234;
L_08874234:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, ctx.gpr[14] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887424C:
    ctx.set_gpr(31, 0x08874254u);
    // nop
    goto L_08874370;
L_08874254:
    ctx.set_gpr(4, ctx.gpr[2] - ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[4]))));
      if (branch_taken) {
          goto L_08874230;
      }
      goto L_08874260;
    }
L_08874260:
    ctx.set_gpr(15, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    ctx.set_gpr(14, ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_08874230;
      }
      goto L_08874270;
    }
L_08874270:
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(12))))));
    ctx.set_gpr(24, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[12])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[24])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(17, ctx.lo);
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 31u));
    ctx.set_gpr(3, ctx.gpr[13] >> 29u);
    ctx.set_gpr(4, ctx.gpr[17] + ctx.gpr[3]);
    ctx.set_gpr(17, rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 3u));
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[13]))));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[7]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[12]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), ctx.gpr[15]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[25]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[11]);
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(152), static_cast<std::uint16_t>(ctx.gpr[4]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(ctx.gpr[12]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[24]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15), static_cast<std::uint8_t>(ctx.gpr[13]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[15]);
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(0u));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(0u));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(140), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(136), 0u);
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(156), static_cast<std::uint16_t>(ctx.gpr[17]));
    goto L_08874234;
L_0887431C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(156))))));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08874360;
      }
      goto L_08874334;
    }
L_08874334:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08874350;
      }
      goto L_0887433C;
    }
L_0887433C:
    ctx.set_gpr(31, 0x08874344u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 762u, 0x0887357Cu>(ctx, &aot_mem) && ctx.pc == 0x08874344u) goto L_08874344;
    return;
L_08874344:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08874348;
L_08874348:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08874350:
    ctx.set_gpr(31, 0x08874358u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 796u, 0x08873938u>(ctx, &aot_mem) && ctx.pc == 0x08874358u) goto L_08874358;
    return;
L_08874358:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08874348;
L_08874360:
    ctx.set_gpr(31, 0x08874368u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 830u, 0x08873C68u>(ctx, &aot_mem) && ctx.pc == 0x08874368u) goto L_08874368;
    return;
L_08874368:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_08874348;
L_08874370:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(12, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 100u << 16u);
    ctx.set_gpr(25, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(24, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(14, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[25] << 8u);
    ctx.set_gpr(11, ctx.gpr[24] | ctx.gpr[3]);
    ctx.set_gpr(15, ctx.gpr[16] << 16u);
    ctx.set_gpr(13, ctx.gpr[11] | ctx.gpr[15]);
    ctx.set_gpr(4, ctx.gpr[14] << 24u);
    ctx.set_gpr(25, 25710u << 16u);
    ctx.set_gpr(15, ctx.gpr[13] | ctx.gpr[4]);
    ctx.set_gpr(24, ctx.gpr[25] | 29486u);
    ctx.set_gpr(16, ctx.gpr[2] | 29486u);
    ctx.set_gpr(11, ctx.gpr[15] ^ ctx.gpr[24]);
    ctx.set_gpr(14, ctx.gpr[15] ^ ctx.gpr[16]);
    ctx.set_gpr(4, 0u < ctx.gpr[14] ? 1u : 0u);
    ctx.set_gpr(13, 0u < ctx.gpr[11] ? 1u : 0u);
    ctx.set_gpr(11, ctx.gpr[4] & ctx.gpr[13]);
    ctx.set_gpr(25, ctx.gpr[6] + 0u);
    ctx.set_gpr(13, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(15, ctx.gpr[8] + 0u);
    ctx.set_gpr(24, ctx.gpr[9] + 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.set_gpr(4, 0u + 0u);
      if (branch_taken) {
          goto L_08874500;
      }
      goto L_088743E4;
    }
L_088743E4:
    ctx.set_gpr(14, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(5)));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(6)));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(7)));
    ctx.set_gpr(4, ctx.gpr[14] << 8u);
    ctx.set_gpr(8, ctx.gpr[5] | ctx.gpr[4]);
    ctx.set_gpr(9, ctx.gpr[11] << 16u);
    ctx.set_gpr(6, ctx.gpr[8] | ctx.gpr[9]);
    ctx.set_gpr(3, ctx.gpr[7] << 24u);
    ctx.set_gpr(8, ctx.gpr[6] | ctx.gpr[3]);
    ctx.set_gpr(14, ctx.gpr[8] >> 8u);
    ctx.set_gpr(4, ctx.gpr[14] & 65280u);
    ctx.set_gpr(5, ctx.gpr[8] << 8u);
    ctx.set_gpr(2, ctx.gpr[8] >> 24u);
    ctx.set_gpr(14, 255u << 16u);
    ctx.set_gpr(11, ctx.gpr[5] & ctx.gpr[14]);
    ctx.set_gpr(9, ctx.gpr[2] | ctx.gpr[4]);
    ctx.set_gpr(7, ctx.gpr[9] | ctx.gpr[11]);
    ctx.set_gpr(6, ctx.gpr[8] << 24u);
    ctx.set_gpr(11, ctx.gpr[7] | ctx.gpr[6]);
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[13]) < static_cast<std::int32_t>(ctx.gpr[11]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(4, 0u + 0u);
      if (branch_taken) {
          goto L_08874500;
      }
      goto L_08874440;
    }
L_08874440:
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(13)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(9)));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(14)));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(10)));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(15)));
    ctx.set_gpr(2, ctx.gpr[8] << 8u);
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(9, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] << 8u);
    ctx.set_gpr(4, ctx.gpr[4] << 16u);
    ctx.set_gpr(2, ctx.gpr[5] | ctx.gpr[7]);
    ctx.set_gpr(3, ctx.gpr[9] | ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[13] << 16u);
    ctx.set_gpr(13, ctx.gpr[6] << 24u);
    ctx.set_gpr(7, ctx.gpr[3] | ctx.gpr[13]);
    ctx.set_gpr(13, ctx.gpr[2] | ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[8] << 24u);
    ctx.set_gpr(9, ctx.gpr[13] | ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[7] >> 8u);
    ctx.set_gpr(3, ctx.gpr[9] >> 8u);
    ctx.set_gpr(4, ctx.gpr[7] >> 24u);
    ctx.set_gpr(5, ctx.gpr[7] << 8u);
    ctx.set_gpr(8, ctx.gpr[6] & 65280u);
    ctx.set_gpr(6, ctx.gpr[4] | ctx.gpr[8]);
    ctx.set_gpr(13, ctx.gpr[9] >> 24u);
    ctx.set_gpr(8, ctx.gpr[9] << 8u);
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[14]);
    ctx.set_gpr(5, ctx.gpr[3] & 65280u);
    ctx.set_gpr(3, ctx.gpr[13] | ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[8] & ctx.gpr[14]);
    ctx.set_gpr(13, ctx.gpr[6] | ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[7] << 24u);
    ctx.set_gpr(8, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(7, ctx.gpr[13] | ctx.gpr[5]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(13, ctx.gpr[9] << 24u);
    ctx.set_gpr(9, ctx.gpr[8] | ctx.gpr[13]);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[4];
    ctx.set_gpr(8, ctx.gpr[12] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08874624;
      }
      goto L_088744E4;
    }
L_088744E4:
    ctx.set_gpr(14, ctx.gpr[7] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    if (ctx.gpr[14] == 0u) {
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
        goto L_08874610;
    }
    goto L_088744F0;
L_088744F0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[3];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08874510;
      }
      goto L_088744FC;
    }
L_088744FC:
    ctx.set_gpr(4, 0u + 0u);
    goto L_08874500;
L_08874500:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08874510:
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08874514;
L_08874514:
    rt.memory().aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08874518;
L_08874518:
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(15, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, ctx.gpr[13] << 8u);
    ctx.set_gpr(6, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(14, ctx.gpr[7] << 16u);
    ctx.set_gpr(13, ctx.gpr[6] | ctx.gpr[14]);
    ctx.set_gpr(5, ctx.gpr[15] << 24u);
    ctx.set_gpr(15, ctx.gpr[13] | ctx.gpr[5]);
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[15]) >> 8u));
    ctx.set_gpr(2, ctx.gpr[7] & 65280u);
    ctx.set_gpr(3, ctx.gpr[15] >> 24u);
    ctx.set_gpr(14, ctx.gpr[15] << 8u);
    ctx.set_gpr(7, 255u << 16u);
    ctx.set_gpr(13, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[14] & ctx.gpr[7]);
    ctx.set_gpr(14, ctx.gpr[13] | ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[15] << 24u);
    ctx.set_gpr(13, ctx.gpr[14] | ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(0), ctx.gpr[13]);
    ctx.set_gpr(15, ctx.gpr[8] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[15] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[15] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[15] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[15] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[5] << 8u);
    ctx.set_gpr(8, ctx.gpr[4] | ctx.gpr[3]);
    ctx.set_gpr(14, ctx.gpr[6] << 16u);
    ctx.set_gpr(25, ctx.gpr[8] | ctx.gpr[14]);
    ctx.set_gpr(2, ctx.gpr[13] << 24u);
    ctx.set_gpr(13, ctx.gpr[25] | ctx.gpr[2]);
    ctx.set_gpr(15, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[13]) >> 8u));
    ctx.set_gpr(5, ctx.gpr[15] & 65280u);
    ctx.set_gpr(6, ctx.gpr[13] >> 24u);
    ctx.set_gpr(14, ctx.gpr[13] << 8u);
    ctx.set_gpr(8, ctx.gpr[6] | ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[14] & ctx.gpr[7]);
    ctx.set_gpr(25, ctx.gpr[8] | ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[13] << 24u);
    ctx.set_gpr(5, ctx.gpr[25] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.set_gpr(15, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[15];
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08874608;
      }
      goto L_088745D0;
    }
L_088745D0:
    if (ctx.gpr[10] == ctx.gpr[16]) {
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[9]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
        goto L_088745F0;
    }
    goto L_088745D8;
L_088745D8:
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.set_gpr(2, 32767u << 16u);
      if (branch_taken) {
          goto L_088745FC;
      }
      goto L_088745E0;
    }
L_088745E0:
    ctx.set_gpr(8, ctx.gpr[9] >> 31u);
    ctx.set_gpr(25, ctx.gpr[9] + ctx.gpr[8]);
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[25]) >> 1u));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[10]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    goto L_088745F0;
L_088745F0:
    ctx.set_gpr(2, ctx.lo);
    if (ctx.gpr[5] == 0u) {
    ctx.pc = 0x088745F8u; rt.stop("Allegrex BREAK code 7 at 0x088745F8"); return;
        goto L_088745FC;
    }
    goto L_088745FC;
L_088745FC:
    rt.memory().aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[12] + ctx.gpr[11]);
    goto L_08874500;
L_08874608:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[9]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    goto L_088745F0;
L_08874610:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    ctx.set_gpr(4, 0u + 0u);
      if (branch_taken) {
          goto L_08874500;
      }
      goto L_08874618;
    }
L_08874618:
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    goto L_08874514;
L_08874624:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    goto L_08874518;
L_08874640:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26844)));
    ctx.set_gpr(24, ctx.gpr[4] + 0u);
    ctx.set_gpr(15, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.set_gpr(25, ctx.gpr[6] + 0u);
      if (branch_taken) {
          goto L_08874660;
      }
      goto L_08874658;
    }
L_08874658:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26844), ctx.gpr[4]);
    goto L_08874660;
L_08874660:
    ctx.set_gpr(6, ctx.gpr[24] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[15]) < 1 ? 1u : 0u);
    ctx.set_gpr(5, ctx.gpr[6] & ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[25] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    rt.memory().aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          goto L_08874AA0;
      }
      goto L_0887467C;
    }
L_0887467C:
    ctx.set_gpr(11, static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[15]) ? 1u : 0u);
    ctx.set_gpr(14, 0u + static_cast<std::uint32_t>(18973));
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.set_gpr(13, 0u + 0u);
      if (branch_taken) {
          goto L_088747DC;
      }
      goto L_0887468C;
    }
L_0887468C:
    ctx.set_gpr(12, 2225u << 16u);
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[15]) < 2 ? 1u : 0u);
    ctx.set_gpr(10, ctx.gpr[12] + static_cast<std::uint32_t>(9872));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.set_gpr(4, ctx.gpr[15] & 3u);
      if (branch_taken) {
          goto L_08874BD8;
      }
      goto L_088746A0;
    }
L_088746A0:
    ctx.set_gpr(2, ctx.gpr[24] + ctx.gpr[13]);
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[13]) < static_cast<std::int32_t>(ctx.gpr[15]) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[6] << 1u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[10]);
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(256))))));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[14])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[12])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 31u));
    ctx.set_gpr(6, ctx.gpr[9] >> 22u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_gpr(3, (ctx.gpr[3] & ~0x000003FFu) | ((0u & 0x000003FFu) << 0u));
    ctx.set_gpr(12, ctx.gpr[5] - ctx.gpr[3]);
    ctx.set_gpr(14, ctx.gpr[12] << 1u);
    ctx.set_gpr(9, ctx.gpr[14] + ctx.gpr[10]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_088747DC;
      }
      goto L_088746E8;
    }
L_088746E8:
    ctx.set_gpr(9, ctx.gpr[13] + ctx.gpr[24]);
    goto L_088746EC;
L_088746EC:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(12, ctx.gpr[3] << 1u);
    ctx.set_gpr(4, ctx.gpr[12] + ctx.gpr[10]);
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(256))))));
    ctx.set_gpr(3, ctx.gpr[6] << 1u);
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[10]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[14])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[12])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(256))))));
    ctx.set_gpr(4, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[10]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(256))))));
    ctx.set_gpr(14, ctx.lo);
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[14]) >> 31u));
    ctx.set_gpr(5, ctx.gpr[6] >> 22u);
    ctx.set_gpr(3, ctx.gpr[14] + ctx.gpr[5]);
    ctx.set_gpr(3, (ctx.gpr[3] & ~0x000003FFu) | ((0u & 0x000003FFu) << 0u));
    ctx.set_gpr(6, ctx.gpr[14] - ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[6] << 1u);
    ctx.set_gpr(14, ctx.gpr[5] + ctx.gpr[10]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[14] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(3))))));
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(4));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[12])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.gpr[3] << 1u);
    ctx.set_gpr(12, ctx.gpr[6] + ctx.gpr[10]);
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[12] + static_cast<std::uint32_t>(256))))));
    ctx.set_gpr(12, static_cast<std::int32_t>(ctx.gpr[13]) < static_cast<std::int32_t>(ctx.gpr[15]) ? 1u : 0u);
    ctx.set_gpr(14, ctx.lo);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[14]) >> 31u));
    ctx.set_gpr(3, ctx.gpr[5] >> 22u);
    ctx.set_gpr(5, ctx.gpr[14] + ctx.gpr[3]);
    ctx.set_gpr(5, (ctx.gpr[5] & ~0x000003FFu) | ((0u & 0x000003FFu) << 0u));
    ctx.set_gpr(3, ctx.gpr[14] - ctx.gpr[5]);
    ctx.set_gpr(14, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, ctx.gpr[14] + ctx.gpr[10]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(4));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 31u));
    ctx.set_gpr(3, ctx.gpr[14] >> 22u);
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(4, (ctx.gpr[4] & ~0x000003FFu) | ((0u & 0x000003FFu) << 0u));
    ctx.set_gpr(14, ctx.gpr[5] - ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[14] << 1u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[10]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
    ctx.set_gpr(4, ctx.gpr[14] >> 22u);
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[4]);
    ctx.set_gpr(3, (ctx.gpr[3] & ~0x000003FFu) | ((0u & 0x000003FFu) << 0u));
    ctx.set_gpr(5, ctx.gpr[6] - ctx.gpr[3]);
    ctx.set_gpr(14, ctx.gpr[5] << 1u);
    ctx.set_gpr(4, ctx.gpr[14] + ctx.gpr[10]);
    { const bool branch_taken = ctx.gpr[12] != 0u;
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_088746EC;
      }
      goto L_088747DC;
    }
L_088747DC:
    ctx.set_gpr(12, 0u + static_cast<std::uint32_t>(21503));
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.set_gpr(13, 0u + 0u);
      if (branch_taken) {
          goto L_08874938;
      }
      goto L_088747E8;
    }
L_088747E8:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[15]) < 2 ? 1u : 0u);
    ctx.set_gpr(10, ctx.gpr[5] + static_cast<std::uint32_t>(9872));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.set_gpr(4, ctx.gpr[15] & 3u);
      if (branch_taken) {
          goto L_08874B40;
      }
      goto L_088747FC;
    }
L_088747FC:
    ctx.set_gpr(2, ctx.gpr[24] + ctx.gpr[13]);
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[13]) < static_cast<std::int32_t>(ctx.gpr[15]) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[6] << 1u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[10]);
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(256))))));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[12])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 31u));
    ctx.set_gpr(6, ctx.gpr[12] >> 22u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_gpr(3, (ctx.gpr[3] & ~0x000003FFu) | ((0u & 0x000003FFu) << 0u));
    ctx.set_gpr(9, ctx.gpr[5] - ctx.gpr[3]);
    ctx.set_gpr(12, ctx.gpr[9] << 1u);
    ctx.set_gpr(6, ctx.gpr[12] + ctx.gpr[10]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08874938;
      }
      goto L_08874844;
    }
L_08874844:
    ctx.set_gpr(9, ctx.gpr[13] + ctx.gpr[24]);
    goto L_08874848;
L_08874848:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(5, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[10]);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(256))))));
    ctx.set_gpr(3, ctx.gpr[4] << 1u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[10]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[12])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.gpr[6] << 1u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(256))))));
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[10]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(256))))));
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.set_gpr(12, ctx.gpr[6] >> 22u);
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[12]);
    ctx.set_gpr(6, (ctx.gpr[6] & ~0x000003FFu) | ((0u & 0x000003FFu) << 0u));
    ctx.set_gpr(12, ctx.gpr[3] - ctx.gpr[6]);
    ctx.set_gpr(6, ctx.gpr[12] << 1u);
    ctx.set_gpr(12, ctx.gpr[6] + ctx.gpr[10]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[12] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(3))))));
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(4));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.gpr[6] << 1u);
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[10]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(256))))));
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[13]) < static_cast<std::int32_t>(ctx.gpr[15]) ? 1u : 0u);
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 31u));
    ctx.set_gpr(12, ctx.gpr[2] >> 22u);
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[12]);
    ctx.set_gpr(2, (ctx.gpr[2] & ~0x000003FFu) | ((0u & 0x000003FFu) << 0u));
    ctx.set_gpr(12, ctx.gpr[5] - ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[12] << 1u);
    ctx.set_gpr(12, ctx.gpr[2] + ctx.gpr[10]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[12] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(4));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 31u));
    ctx.set_gpr(12, ctx.gpr[4] >> 22u);
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[12]);
    ctx.set_gpr(4, (ctx.gpr[4] & ~0x000003FFu) | ((0u & 0x000003FFu) << 0u));
    ctx.set_gpr(12, ctx.gpr[5] - ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[12] << 1u);
    ctx.set_gpr(12, ctx.gpr[5] + ctx.gpr[10]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[12] + static_cast<std::uint32_t>(0))))));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 31u));
    ctx.set_gpr(12, ctx.gpr[5] >> 22u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[12]);
    ctx.set_gpr(3, (ctx.gpr[3] & ~0x000003FFu) | ((0u & 0x000003FFu) << 0u));
    ctx.set_gpr(5, ctx.gpr[4] - ctx.gpr[3]);
    ctx.set_gpr(12, ctx.gpr[5] << 1u);
    ctx.set_gpr(4, ctx.gpr[12] + ctx.gpr[10]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08874848;
      }
      goto L_08874938;
    }
L_08874938:
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(24001));
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.set_gpr(13, 0u + 0u);
      if (branch_taken) {
          goto L_08874A94;
      }
      goto L_08874944;
    }
L_08874944:
    ctx.set_gpr(6, 2225u << 16u);
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[15]) < 2 ? 1u : 0u);
    ctx.set_gpr(11, ctx.gpr[6] + static_cast<std::uint32_t>(9872));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.set_gpr(4, ctx.gpr[15] & 3u);
      if (branch_taken) {
          goto L_08874AA8;
      }
      goto L_08874958;
    }
L_08874958:
    ctx.set_gpr(2, ctx.gpr[24] + ctx.gpr[13]);
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[13]) < static_cast<std::int32_t>(ctx.gpr[15]) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[10] << 1u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[11]);
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(256))))));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 31u));
    ctx.set_gpr(10, ctx.gpr[9] >> 22u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[10]);
    ctx.set_gpr(3, (ctx.gpr[3] & ~0x000003FFu) | ((0u & 0x000003FFu) << 0u));
    ctx.set_gpr(6, ctx.gpr[5] - ctx.gpr[3]);
    ctx.set_gpr(9, ctx.gpr[6] << 1u);
    ctx.set_gpr(10, ctx.gpr[9] + ctx.gpr[11]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08874A94;
      }
      goto L_088749A0;
    }
L_088749A0:
    ctx.set_gpr(10, ctx.gpr[13] + ctx.gpr[24]);
    goto L_088749A4;
L_088749A4:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(24, ctx.gpr[3] << 1u);
    ctx.set_gpr(4, ctx.gpr[24] + ctx.gpr[11]);
    ctx.set_gpr(24, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(256))))));
    ctx.set_gpr(3, ctx.gpr[6] << 1u);
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[11]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[24])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(24, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(256))))));
    ctx.set_gpr(4, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[11]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(256))))));
    ctx.set_gpr(9, ctx.lo);
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 31u));
    ctx.set_gpr(5, ctx.gpr[6] >> 22u);
    ctx.set_gpr(3, ctx.gpr[9] + ctx.gpr[5]);
    ctx.set_gpr(3, (ctx.gpr[3] & ~0x000003FFu) | ((0u & 0x000003FFu) << 0u));
    ctx.set_gpr(6, ctx.gpr[9] - ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[6] << 1u);
    ctx.set_gpr(9, ctx.gpr[5] + ctx.gpr[11]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(3))))));
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(4));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[24])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.gpr[3] << 1u);
    ctx.set_gpr(24, ctx.gpr[6] + ctx.gpr[11]);
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[24] + static_cast<std::uint32_t>(256))))));
    ctx.set_gpr(24, static_cast<std::int32_t>(ctx.gpr[13]) < static_cast<std::int32_t>(ctx.gpr[15]) ? 1u : 0u);
    ctx.set_gpr(9, ctx.lo);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 31u));
    ctx.set_gpr(3, ctx.gpr[5] >> 22u);
    ctx.set_gpr(5, ctx.gpr[9] + ctx.gpr[3]);
    ctx.set_gpr(5, (ctx.gpr[5] & ~0x000003FFu) | ((0u & 0x000003FFu) << 0u));
    ctx.set_gpr(3, ctx.gpr[9] - ctx.gpr[5]);
    ctx.set_gpr(9, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, ctx.gpr[9] + ctx.gpr[11]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(4));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 31u));
    ctx.set_gpr(3, ctx.gpr[9] >> 22u);
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(4, (ctx.gpr[4] & ~0x000003FFu) | ((0u & 0x000003FFu) << 0u));
    ctx.set_gpr(9, ctx.gpr[5] - ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[9] << 1u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[11]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 31u));
    ctx.set_gpr(4, ctx.gpr[9] >> 22u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(3, (ctx.gpr[3] & ~0x000003FFu) | ((0u & 0x000003FFu) << 0u));
    ctx.set_gpr(6, ctx.gpr[5] - ctx.gpr[3]);
    ctx.set_gpr(9, ctx.gpr[6] << 1u);
    ctx.set_gpr(4, ctx.gpr[9] + ctx.gpr[11]);
    { const bool branch_taken = ctx.gpr[24] != 0u;
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_088749A4;
      }
      goto L_08874A94;
    }
L_08874A94:
    rt.memory().aot_store16(ctx.gpr[25] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[14]));
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[12]));
    rt.memory().aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
    goto L_08874AA0;
L_08874AA0:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08874AA8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_088749A0;
      }
      goto L_08874AB0;
    }
L_08874AB0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08874958;
      }
      goto L_08874AB8;
    }
L_08874AB8:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(2, ctx.gpr[24] + ctx.gpr[13]);
      if (branch_taken) {
          goto L_08874B00;
      }
      goto L_08874AC0;
    }
L_08874AC0:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(13, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[3] << 1u);
    ctx.set_gpr(6, ctx.gpr[5] + ctx.gpr[11]);
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(256))))));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
    ctx.set_gpr(3, ctx.gpr[4] >> 22u);
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(5, (ctx.gpr[5] & ~0x000003FFu) | ((0u & 0x000003FFu) << 0u));
    ctx.set_gpr(10, ctx.gpr[6] - ctx.gpr[5]);
    ctx.set_gpr(9, ctx.gpr[10] << 1u);
    ctx.set_gpr(4, ctx.gpr[9] + ctx.gpr[11]);
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, ctx.gpr[24] + ctx.gpr[13]);
    goto L_08874B00;
L_08874B00:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[5] << 1u);
    ctx.set_gpr(10, ctx.gpr[6] + ctx.gpr[11]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(256))))));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(10, ctx.lo);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 31u));
    ctx.set_gpr(5, ctx.gpr[3] >> 22u);
    ctx.set_gpr(6, ctx.gpr[10] + ctx.gpr[5]);
    ctx.set_gpr(6, (ctx.gpr[6] & ~0x000003FFu) | ((0u & 0x000003FFu) << 0u));
    ctx.set_gpr(4, ctx.gpr[10] - ctx.gpr[6]);
    ctx.set_gpr(9, ctx.gpr[4] << 1u);
    ctx.set_gpr(2, ctx.gpr[9] + ctx.gpr[11]);
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    goto L_08874958;
L_08874B40:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08874844;
      }
      goto L_08874B48;
    }
L_08874B48:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088747FC;
      }
      goto L_08874B50;
    }
L_08874B50:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(2, ctx.gpr[24] + ctx.gpr[13]);
      if (branch_taken) {
          goto L_08874B98;
      }
      goto L_08874B58;
    }
L_08874B58:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(13, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[6] << 1u);
    ctx.set_gpr(9, ctx.gpr[5] + ctx.gpr[10]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(256))))));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[12])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(9, ctx.lo);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 31u));
    ctx.set_gpr(6, ctx.gpr[3] >> 22u);
    ctx.set_gpr(5, ctx.gpr[9] + ctx.gpr[6]);
    ctx.set_gpr(5, (ctx.gpr[5] & ~0x000003FFu) | ((0u & 0x000003FFu) << 0u));
    ctx.set_gpr(12, ctx.gpr[9] - ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[12] << 1u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[10]);
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, ctx.gpr[24] + ctx.gpr[13]);
    goto L_08874B98;
L_08874B98:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[5] << 1u);
    ctx.set_gpr(9, ctx.gpr[3] + ctx.gpr[10]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(256))))));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[12])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(9, ctx.lo);
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 31u));
    ctx.set_gpr(5, ctx.gpr[6] >> 22u);
    ctx.set_gpr(3, ctx.gpr[9] + ctx.gpr[5]);
    ctx.set_gpr(3, (ctx.gpr[3] & ~0x000003FFu) | ((0u & 0x000003FFu) << 0u));
    ctx.set_gpr(4, ctx.gpr[9] - ctx.gpr[3]);
    ctx.set_gpr(12, ctx.gpr[4] << 1u);
    ctx.set_gpr(2, ctx.gpr[12] + ctx.gpr[10]);
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    goto L_088747FC;
L_08874BD8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_088746E8;
      }
      goto L_08874BE0;
    }
L_08874BE0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088746A0;
      }
      goto L_08874BE8;
    }
L_08874BE8:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(2, ctx.gpr[24] + ctx.gpr[13]);
      if (branch_taken) {
          goto L_08874C30;
      }
      goto L_08874BF0;
    }
L_08874BF0:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[24] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(13, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, ctx.gpr[3] << 1u);
    ctx.set_gpr(4, ctx.gpr[9] + ctx.gpr[10]);
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(256))))));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[14])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(9, ctx.lo);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 31u));
    ctx.set_gpr(12, ctx.gpr[5] >> 22u);
    ctx.set_gpr(3, ctx.gpr[9] + ctx.gpr[12]);
    ctx.set_gpr(3, (ctx.gpr[3] & ~0x000003FFu) | ((0u & 0x000003FFu) << 0u));
    ctx.set_gpr(4, ctx.gpr[9] - ctx.gpr[3]);
    ctx.set_gpr(14, ctx.gpr[4] << 1u);
    ctx.set_gpr(2, ctx.gpr[14] + ctx.gpr[10]);
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, ctx.gpr[24] + ctx.gpr[13]);
    goto L_08874C30;
L_08874C30:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[6] << 1u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[10]);
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(256))))));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[14])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[12])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 31u));
    ctx.set_gpr(4, ctx.gpr[9] >> 22u);
    ctx.set_gpr(6, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(6, (ctx.gpr[6] & ~0x000003FFu) | ((0u & 0x000003FFu) << 0u));
    ctx.set_gpr(12, ctx.gpr[5] - ctx.gpr[6]);
    ctx.set_gpr(14, ctx.gpr[12] << 1u);
    ctx.set_gpr(2, ctx.gpr[14] + ctx.gpr[10]);
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    goto L_088746A0;
L_08874C70:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.set_gpr(3, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.set_gpr(8, ctx.gpr[3] + static_cast<std::uint32_t>(-22252));
    ctx.set_gpr(3, ctx.gpr[8] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.set_gpr(20, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    goto L_08874CB0;
L_08874CB0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(240));
      if (branch_taken) {
          goto L_08874D38;
      }
      goto L_08874CB8;
    }
L_08874CB8:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(240));
      if (branch_taken) {
          goto L_08874D38;
      }
      goto L_08874CC8;
    }
L_08874CC8:
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(240));
      if (branch_taken) {
          goto L_08874D38;
      }
      goto L_08874CD8;
    }
L_08874CD8:
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(240));
      if (branch_taken) {
          goto L_08874D38;
      }
      goto L_08874CE8;
    }
L_08874CE8:
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(240));
      if (branch_taken) {
          goto L_08874D38;
      }
      goto L_08874CF8;
    }
L_08874CF8:
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(240));
      if (branch_taken) {
          goto L_08874D38;
      }
      goto L_08874D08;
    }
L_08874D08:
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[12] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(240));
      if (branch_taken) {
          goto L_08874D38;
      }
      goto L_08874D18;
    }
L_08874D18:
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(240));
      if (branch_taken) {
          goto L_08874D38;
      }
      goto L_08874D28;
    }
L_08874D28:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(14, static_cast<std::int32_t>(ctx.gpr[4]) < 16 ? 1u : 0u);
    if (ctx.gpr[14] != 0u) {
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
        goto L_08874CB0;
    }
    goto L_08874D38;
L_08874D38:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    ctx.set_gpr(5, 0u + 0u);
      if (branch_taken) {
          goto L_08874DCC;
      }
      goto L_08874D44;
    }
L_08874D44:
    ctx.set_gpr(16, ctx.gpr[4] << 4u);
    ctx.set_gpr(15, ctx.gpr[16] - ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[15] << 4u);
    ctx.set_gpr(16, ctx.gpr[4] + ctx.gpr[8]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08874D60u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(240));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08874D60u) goto L_08874D60;
    return;
L_08874D60:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08874D6Cu);
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 302u, 0x088898C0u>(ctx, &aot_mem) && ctx.pc == 0x08874D6Cu) goto L_08874D6C;
    return;
L_08874D6C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08874DF0;
      }
      goto L_08874D74;
    }
L_08874D74:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    ctx.set_gpr(18, 2183u << 16u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(-128));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    ctx.set_gpr(20, 2183u << 16u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[18] + static_cast<std::uint32_t>(22648));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[20] + static_cast<std::uint32_t>(22600));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(128), ctx.gpr[17]);
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(220), static_cast<std::uint16_t>(ctx.gpr[8]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(124), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(132), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(196), 0u);
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(216), static_cast<std::uint16_t>(0u));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(218), static_cast<std::uint16_t>(ctx.gpr[8]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(200), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(204), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(208), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(212), 0u);
    goto L_08874DCC;
L_08874DCC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
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
L_08874DF0:
    ctx.set_gpr(31, 0x08874DF8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08874E00;
L_08874DF8:
    ctx.set_gpr(5, 0u + 0u);
    goto L_08874DCC;
L_08874E00:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
      if (branch_taken) {
          goto L_08874E34;
      }
      goto L_08874E14;
    }
L_08874E14:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x08874E20u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 323u, 0x08889A84u>(ctx, &aot_mem) && ctx.pc == 0x08874E20u) goto L_08874E20;
    return;
L_08874E20:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08874E30u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(240));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08874E30u) goto L_08874E30;
    return;
L_08874E30:
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    goto L_08874E34;
L_08874E34:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08874E44:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    ctx.set_gpr(3, ctx.gpr[5] & 1u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08874E84;
      }
      goto L_08874E74;
    }
L_08874E74:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26820)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(5, 2225u << 16u);
      if (branch_taken) {
          goto L_08875114;
      }
      goto L_08874E84;
    }
L_08874E84:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.set_gpr(13, ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(12, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(8, ctx.gpr[16] + static_cast<std::uint32_t>(13));
    ctx.set_gpr(9, ctx.gpr[16] + static_cast<std::uint32_t>(15));
    ctx.set_gpr(10, ctx.gpr[16] + static_cast<std::uint32_t>(14));
    ctx.set_gpr(11, ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[13]);
    ctx.set_gpr(31, 0x08874EC0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[12]);
    goto L_08877CF0;
L_08874EC0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_08874FC0;
      }
      goto L_08874EC8;
    }
L_08874EC8:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(12))))));
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[8]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08875014;
      }
      goto L_08874ED8;
    }
L_08874ED8:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(184)));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.set_gpr(15, 0u + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08874FF4;
      }
      goto L_08874EE4;
    }
L_08874EE4:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(14))))));
    ctx.set_gpr(14, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(25, ctx.gpr[4] << 1u);
    ctx.set_gpr(24, ctx.gpr[25] + ctx.gpr[4]);
    ctx.set_gpr(19, ctx.gpr[24] << 6u);
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(97));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[15]);
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(152), static_cast<std::uint16_t>(ctx.gpr[14]));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(0u));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(0u));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(31, 0x08874F44u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(136), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 19u, 0x088784D8u>(ctx, &aot_mem) && ctx.pc == 0x08874F44u) goto L_08874F44;
    return;
L_08874F44:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_08874FC0;
      }
      goto L_08874F4C;
    }
L_08874F4C:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(97)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(82));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(10, ctx.gpr[29] + static_cast<std::uint32_t>(86));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08874F70u);
    rt.memory().aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(80), static_cast<std::uint16_t>(0u));
    goto L_0887523C;
L_08874F70:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08874FC0;
      }
      goto L_08874F78;
    }
L_08874F78:
    ctx.set_gpr(17, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26832)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(184)));
        goto L_08874FE4;
    }
    goto L_08874F88;
L_08874F88:
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(14))))));
    goto L_08874F8C;
L_08874F8C:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(15))))));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[13]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[12]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(140), 0u);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    goto L_08874FC0;
L_08874FC0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08874FE4:
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08874FECu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08874FECu) goto L_08874FEC;
    return;
L_08874FEC:
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(14))))));
    goto L_08874F8C;
L_08874FF4:
    ctx.set_gpr(11, 2225u << 16u);
    ctx.set_gpr(10, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[11] + static_cast<std::uint32_t>(11952));
    ctx.set_gpr(5, ctx.gpr[10] + static_cast<std::uint32_t>(11984));
    goto L_08875004;
L_08875004:
    ctx.set_gpr(31, 0x0887500Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 85u, 0x08879084u>(ctx, &aot_mem) && ctx.pc == 0x0887500Cu) goto L_0887500C;
    return;
L_0887500C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    goto L_08874FC0;
L_08875014:
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(97));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08875024u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 19u, 0x088784D8u>(ctx, &aot_mem) && ctx.pc == 0x08875024u) goto L_08875024;
    return;
L_08875024:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_08874FC0;
      }
      goto L_0887502C;
    }
L_0887502C:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(97)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(66));
    ctx.set_gpr(10, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(31, 0x0887504Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0887523C;
L_0887504C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08874FC0;
      }
      goto L_08875054;
    }
L_08875054:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(64))))));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(66))))));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(68))))));
    ctx.set_gpr(31, 0x08875068u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 321u, 0x08889A58u>(ctx, &aot_mem) && ctx.pc == 0x08875068u) goto L_08875068;
    return;
L_08875068:
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08875078u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 14u, 0x0887846Cu>(ctx, &aot_mem) && ctx.pc == 0x08875078u) goto L_08875078;
    return;
L_08875078:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_08874FC0;
      }
      goto L_08875080;
    }
L_08875080:
    ctx.set_gpr(19, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(20, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0887509Cu);
    ctx.set_gpr(7, ctx.gpr[20] + 0u);
    goto L_08877DF0;
L_0887509C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_08874FC0;
      }
      goto L_088750A4;
    }
L_088750A4:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(28))))));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x088750B4u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 317u, 0x088899E4u>(ctx, &aot_mem) && ctx.pc == 0x088750B4u) goto L_088750B4;
    return;
L_088750B4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x088750C4u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 319u, 0x08889A10u>(ctx, &aot_mem) && ctx.pc == 0x088750C4u) goto L_088750C4;
    return;
L_088750C4:
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(8, ctx.gpr[16] + static_cast<std::uint32_t>(38));
    ctx.set_gpr(9, ctx.gpr[16] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(10, ctx.gpr[16] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(11, ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088750F0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_08877EE8;
L_088750F0:
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(196));
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(200));
    ctx.set_gpr(8, ctx.gpr[16] + static_cast<std::uint32_t>(216));
    ctx.set_gpr(9, ctx.gpr[16] + static_cast<std::uint32_t>(218));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0887510Cu);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 2u, 0x088780ECu>(ctx, &aot_mem) && ctx.pc == 0x0887510Cu) goto L_0887510C;
    return;
L_0887510C:
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(152), static_cast<std::uint16_t>(0u));
    goto L_08874F88;
L_08875114:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(11920));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(12020));
    goto L_08875004;
L_08875124:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(-128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(220), static_cast<std::uint16_t>(ctx.gpr[10]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(196), 0u);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(216), static_cast<std::uint16_t>(0u));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(218), static_cast<std::uint16_t>(ctx.gpr[10]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(200), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(204), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(208), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(212), 0u);
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(8, ctx.gpr[7] << 8u);
    ctx.set_gpr(3, ctx.gpr[8] | ctx.gpr[9]);
    ctx.set_gpr(7, 0u | 32768u);
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[7];
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_0887522C;
      }
      goto L_08875180;
    }
L_08875180:
    ctx.set_gpr(31, 0x08875188u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    goto L_0887697C;
L_08875188:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_088751BC;
      }
      goto L_08875190;
    }
L_08875190:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0887519Cu);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    goto L_088768A8;
L_0887519C:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    goto L_088751A0;
L_088751A0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088751BC:
    ctx.set_gpr(31, 0x088751C4u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_088778E8;
L_088751C4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_088751E0;
      }
      goto L_088751CC;
    }
L_088751CC:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088751D8u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    goto L_08877810;
L_088751D8:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    goto L_088751A0;
L_088751E0:
    ctx.set_gpr(31, 0x088751E8u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 719u, 0x08872EE4u>(ctx, &aot_mem) && ctx.pc == 0x088751E8u) goto L_088751E8;
    return;
L_088751E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08875204;
      }
      goto L_088751F0;
    }
L_088751F0:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088751FCu);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 726u, 0x08873070u>(ctx, &aot_mem) && ctx.pc == 0x088751FCu) goto L_088751FC;
    return;
L_088751FC:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    goto L_088751A0;
L_08875204:
    ctx.set_gpr(31, 0x0887520Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08874050;
L_0887520C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088751A0;
      }
      goto L_08875214;
    }
L_08875214:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08875224u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    goto L_088741D4;
L_08875224:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    goto L_088751A0;
L_0887522C:
    ctx.set_gpr(31, 0x08875234u);
    // nop
    goto L_08874E44;
L_08875234:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    goto L_088751A0;
L_0887523C:
    ctx.set_gpr(3, ctx.gpr[5] & 255u);
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.set_gpr(2, ctx.gpr[3] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.set_gpr(11, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[10] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.set_gpr(6, ctx.gpr[6] & 255u);
    ctx.set_gpr(17, ctx.gpr[9] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[8] + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
      if (branch_taken) {
          goto L_088752F4;
      }
      goto L_08875270;
    }
L_08875270:
    ctx.set_gpr(4, ctx.gpr[6] < static_cast<std::uint32_t>(16) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(5, ctx.gpr[6] < static_cast<std::uint32_t>(8) ? 1u : 0u);
      if (branch_taken) {
          goto L_08875304;
      }
      goto L_0887527C;
    }
L_0887527C:
    if (ctx.gpr[5] != 0u) {
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
        goto L_088752F8;
    }
    goto L_08875284;
L_08875284:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(160)));
    if (ctx.gpr[6] != 0u) {
    ctx.set_gpr(24, rt.memory().aot_load16(ctx.gpr[11] + static_cast<std::uint32_t>(160)));
        goto L_088752C4;
    }
    goto L_08875290;
L_08875290:
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[11] + static_cast<std::uint32_t>(164))))));
    if (ctx.gpr[7] != 0u) {
    ctx.set_gpr(24, rt.memory().aot_load16(ctx.gpr[11] + static_cast<std::uint32_t>(160)));
        goto L_088752C4;
    }
    goto L_0887529C;
L_0887529C:
    ctx.set_gpr(14, 2245u << 16u);
    ctx.set_gpr(13, 2245u << 16u);
    ctx.set_gpr(12, 2245u << 16u);
    ctx.set_gpr(10, rt.memory().aot_load16(ctx.gpr[14] + static_cast<std::uint32_t>(-26828)));
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[13] + static_cast<std::uint32_t>(-26826)));
    ctx.set_gpr(8, rt.memory().aot_load16(ctx.gpr[12] + static_cast<std::uint32_t>(-26824)));
    rt.memory().aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(160), static_cast<std::uint16_t>(ctx.gpr[10]));
    rt.memory().aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(162), static_cast<std::uint16_t>(ctx.gpr[9]));
    rt.memory().aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(164), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.set_gpr(24, rt.memory().aot_load16(ctx.gpr[11] + static_cast<std::uint32_t>(160)));
    goto L_088752C4;
L_088752C4:
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[24]));
    ctx.set_gpr(16, rt.memory().aot_load16(ctx.gpr[11] + static_cast<std::uint32_t>(162)));
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[16]));
    ctx.set_gpr(15, rt.memory().aot_load16(ctx.gpr[11] + static_cast<std::uint32_t>(164)));
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[15]));
    goto L_088752D8;
L_088752D8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_088752DC;
L_088752DC:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088752F4:
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    goto L_088752F8;
L_088752F8:
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    goto L_088752D8;
L_08875304:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(12052));
    ctx.set_gpr(31, 0x08875318u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 634u, 0x0888F1B8u>(ctx, &aot_mem) && ctx.pc == 0x08875318u) goto L_08875318;
    return;
L_08875318:
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08875330u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    goto L_08874640;
L_08875330:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_088752DC;
L_08875338:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(11, ctx.gpr[4] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(76)));
    if (ctx.gpr[4] == 0u) {
    ctx.pc = 0x08875358u; rt.stop("Allegrex BREAK code 7 at 0x08875358"); return;
        goto L_0887535C;
    }
    goto L_0887535C;
L_0887535C:
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(24, ctx.gpr[15] - ctx.gpr[13]);
    ctx.set_gpr(14, ctx.gpr[24] + ctx.gpr[10]);
    ctx.set_gpr(5, ctx.gpr[14] + static_cast<std::uint32_t>(-1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[10]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[10]);
    ctx.set_gpr(12, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(25, ctx.gpr[13] << 1u);
    ctx.set_gpr(24, ctx.gpr[25] + 0u);
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    ctx.set_gpr(14, ctx.gpr[11] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(9, ctx.lo);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[12]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[10]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(12, ctx.gpr[9] + 0u);
    ctx.set_gpr(16, ctx.hi);
    ctx.set_gpr(5, ctx.lo);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(3, ctx.gpr[10] - ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(16, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    ctx.set_gpr(9, ctx.gpr[2] + ctx.gpr[4]);
    if (ctx.gpr[6] != 0u) ctx.set_gpr(2, ctx.gpr[9]);
    ctx.set_gpr(7, ctx.lo);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[10]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? ctx.gpr[6] : ctx.gpr[7]);
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[5]) ? ctx.gpr[3] : ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[12])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
      if (branch_taken) {
          goto L_088753F4;
      }
      goto L_088753E0;
    }
L_088753E0:
    ctx.set_gpr(16, ctx.lo);
    ctx.set_gpr(7, ctx.gpr[13] + ctx.gpr[16]);
    ctx.set_gpr(6, ctx.gpr[7] - ctx.gpr[4]);
    ctx.set_gpr(13, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[15]) ? 1u : 0u);
    ctx.set_gpr(12, ctx.gpr[12] + ctx.gpr[13]);
    goto L_088753F4;
L_088753F4:
    if (ctx.gpr[10] == 0u) {
    ctx.pc = 0x088753F8u; rt.stop("Allegrex BREAK code 7 at 0x088753F8"); return;
        goto L_088753FC;
    }
    goto L_088753FC;
L_088753FC:
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[12]) ? ctx.gpr[9] : ctx.gpr[12]);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[15] == ctx.gpr[10];
    ctx.set_gpr(6, ctx.gpr[9] << 1u);
      if (branch_taken) {
          goto L_08875444;
      }
      goto L_08875410;
    }
L_08875410:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(6, ctx.gpr[9] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0887542Cu);
    ctx.set_gpr(7, ctx.gpr[25] + ctx.gpr[24]);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 327u, 0x08889ABCu>(ctx, &aot_mem) && ctx.pc == 0x0887542Cu) goto L_0887542C;
    return;
L_0887542C:
    ctx.set_gpr(31, 0x08875434u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 336u, 0x08889B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08875434u) goto L_08875434;
    return;
L_08875434:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08875444:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(7, ctx.gpr[3] + ctx.gpr[25]);
    ctx.set_gpr(11, ctx.gpr[4] << 1u);
    ctx.set_gpr(8, ctx.gpr[7] + ctx.gpr[11]);
    ctx.set_gpr(31, 0x08875468u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 330u, 0x08889AECu>(ctx, &aot_mem) && ctx.pc == 0x08875468u) goto L_08875468;
    return;
L_08875468:
    // nop
    goto L_0887542C;
L_08875470:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    if (ctx.gpr[16] == 0u) {
    ctx.pc = 0x088754B0u; rt.stop("Allegrex BREAK code 7 at 0x088754B0"); return;
        goto L_088754B4;
    }
    goto L_088754B4;
L_088754B4:
    ctx.set_gpr(11, ctx.gpr[12] + ctx.gpr[16]);
    ctx.set_gpr(10, ctx.gpr[11] + static_cast<std::uint32_t>(-1));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[10]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[16]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(3, ctx.hi);
    ctx.set_gpr(2, ctx.gpr[16] - ctx.gpr[3]);
    ctx.set_gpr(17, ctx.lo);
    ctx.set_gpr(31, 0x088754E8u);
    ctx.set_gpr(18, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 342u, 0x08889B90u>(ctx, &aot_mem) && ctx.pc == 0x088754E8u) goto L_088754E8;
    return;
L_088754E8:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    if (ctx.gpr[3] == 0u) {
    ctx.pc = 0x088754F4u; rt.stop("Allegrex BREAK code 7 at 0x088754F4"); return;
        goto L_088754F8;
    }
    goto L_088754F8;
L_088754F8:
    ctx.set_gpr(9, ctx.lo);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[9]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[3]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(4, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.gpr[4] - ctx.gpr[18]);
    ctx.set_gpr(8, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) ctx.set_gpr(5, ctx.gpr[4]);
    ctx.set_gpr(21, ctx.gpr[21] + ctx.gpr[5]);
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    ctx.set_gpr(6, ctx.lo);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(148), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(144), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088755B4;
      }
      goto L_08875534;
    }
L_08875534:
    ctx.set_gpr(13, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[13];
    ctx.set_gpr(21, ctx.gpr[21] - ctx.gpr[22]);
      if (branch_taken) {
          goto L_08875628;
      }
      goto L_08875540;
    }
L_08875540:
    ctx.set_gpr(13, ctx.gpr[22] << 1u);
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) <= 0;
    ctx.set_gpr(3, ctx.gpr[23] + ctx.gpr[13]);
      if (branch_taken) {
          goto L_088755B4;
      }
      goto L_08875554;
    }
L_08875554:
    ctx.set_gpr(14, 0u - ctx.gpr[21]);
    ctx.set_gpr(7, ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) > 0;
    ctx.set_gpr(5, ctx.gpr[14] & 3u);
      if (branch_taken) {
          goto L_088755E4;
      }
      goto L_08875564;
    }
L_08875564:
    ctx.set_gpr(19, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(2));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[19]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088755B4;
      }
      goto L_0887557C;
    }
L_0887557C:
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[3] + 0u);
    goto L_08875584;
L_08875584:
    ctx.set_gpr(7, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-4));
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.set_gpr(25, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[25]));
    ctx.set_gpr(24, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[24]));
    ctx.set_gpr(20, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(6)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[20]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08875584;
      }
      goto L_088755B4;
    }
L_088755B4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_088755B8;
L_088755B8:
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
L_088755E4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(15, static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0887557C;
      }
      goto L_088755EC;
    }
L_088755EC:
    { const bool branch_taken = ctx.gpr[15] == 0u;
    ctx.set_gpr(16, static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08875564;
      }
      goto L_088755F4;
    }
L_088755F4:
    if (ctx.gpr[16] != 0u) {
    ctx.set_gpr(17, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
        goto L_08875614;
    }
    goto L_088755FC;
L_088755FC:
    ctx.set_gpr(18, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(2));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2));
    goto L_08875564;
L_08875614:
    ctx.set_gpr(6, ctx.gpr[7] + 0u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(2));
    rt.memory().aot_store16(ctx.gpr[23] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[17]));
    ctx.set_gpr(4, ctx.gpr[23] + static_cast<std::uint32_t>(2));
    goto L_088755FC;
L_08875628:
    ctx.set_gpr(14, ctx.gpr[22] << 1u);
    ctx.set_gpr(3, ctx.gpr[23] + ctx.gpr[14]);
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) <= 0;
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
      if (branch_taken) {
          goto L_0887569C;
      }
      goto L_0887563C;
    }
L_0887563C:
    ctx.set_gpr(15, 0u - ctx.gpr[21]);
    ctx.set_gpr(7, ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) > 0;
    ctx.set_gpr(5, ctx.gpr[15] & 3u);
      if (branch_taken) {
          goto L_08875764;
      }
      goto L_0887564C;
    }
L_0887564C:
    ctx.set_gpr(20, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(2));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[20]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0887569C;
      }
      goto L_08875664;
    }
L_08875664:
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[3] + 0u);
    goto L_0887566C;
L_0887566C:
    ctx.set_gpr(8, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-4));
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.set_gpr(7, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.set_gpr(25, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[25]));
    ctx.set_gpr(24, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(6)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[24]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0887566C;
      }
      goto L_0887569C;
    }
L_0887569C:
    ctx.set_gpr(6, ctx.gpr[30] + ctx.gpr[22]);
    ctx.set_gpr(5, ctx.gpr[6] << 1u);
    ctx.set_gpr(22, ctx.gpr[30] << 1u);
    ctx.set_gpr(7, ctx.gpr[23] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[23] + ctx.gpr[22]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) <= 0;
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
      if (branch_taken) {
          goto L_088755B4;
      }
      goto L_088756B8;
    }
L_088756B8:
    ctx.set_gpr(23, 0u - ctx.gpr[21]);
    ctx.set_gpr(5, ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    ctx.set_gpr(4, ctx.gpr[23] & 3u);
      if (branch_taken) {
          goto L_08875720;
      }
      goto L_088756C8;
    }
L_088756C8:
    ctx.set_gpr(10, rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2));
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[10]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088755B4;
      }
      goto L_088756E0;
    }
L_088756E0:
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, ctx.gpr[7] + 0u);
    goto L_088756E8;
L_088756E8:
    ctx.set_gpr(12, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-4));
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[12]));
    ctx.set_gpr(11, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[11]));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(6)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[3]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088756E8;
      }
      goto L_08875718;
    }
L_08875718:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_088755B8;
L_08875720:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(21, static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088756E0;
      }
      goto L_08875728;
    }
L_08875728:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.set_gpr(30, static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_088756C8;
      }
      goto L_08875730;
    }
L_08875730:
    if (ctx.gpr[30] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
        goto L_08875750;
    }
    goto L_08875738;
L_08875738:
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2));
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(2));
    goto L_088756C8;
L_08875750:
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2));
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(2));
    goto L_08875738;
L_08875764:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(16, static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08875664;
      }
      goto L_0887576C;
    }
L_0887576C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(17, static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0887564C;
      }
      goto L_08875774;
    }
L_08875774:
    if (ctx.gpr[17] != 0u) {
    ctx.set_gpr(18, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
        goto L_08875794;
    }
    goto L_0887577C;
L_0887577C:
    ctx.set_gpr(19, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(2));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[19]));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2));
    goto L_0887564C;
L_08875794:
    ctx.set_gpr(6, ctx.gpr[7] + 0u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(2));
    rt.memory().aot_store16(ctx.gpr[23] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.set_gpr(4, ctx.gpr[23] + static_cast<std::uint32_t>(2));
    goto L_0887577C;
L_088757A8:
    ctx.set_gpr(3, 2245u << 16u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26820), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088757B4:
    ctx.set_gpr(4, 2245u << 16u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26820)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088757C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088757D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 298u, 0x08889870u>(ctx, &aot_mem) && ctx.pc == 0x088757D0u) goto L_088757D0;
    return;
L_088757D0:
    ctx.set_gpr(7, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-26844)));
    ctx.set_gpr(5, 2247u << 16u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3840));
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(-22252));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088757F4u);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-26844), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x088757F4u) goto L_088757F4;
    return;
L_088757F4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-26820), 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08875848:
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(8, ctx.gpr[9] - ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(4, ctx.gpr[6] - ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08875878:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(7, ctx.gpr[8] + ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(136), ctx.gpr[7]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(140), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088758BC:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(154), static_cast<std::uint16_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088758C4:
    ctx.set_gpr(8, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(154)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(24, 32767u << 16u);
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(1024));
    ctx.set_gpr(7, ctx.gpr[24] | 65535u);
    ctx.set_gpr(15, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(14, 0u | 48000u);
    ctx.set_gpr(13, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(12, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(127));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(127));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[15]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[14]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(ctx.gpr[13]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[12]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(15), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(152), static_cast<std::uint16_t>(ctx.gpr[8]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(88), ctx.gpr[11]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(136), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[11]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(140), 0u);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(0u));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(0u));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(0u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08875960:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(124), ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(120), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08875978:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08875980:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(152))))));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08875988:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08875990:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, 2225u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(12060));
      if (branch_taken) {
          goto L_088759B8;
      }
      goto L_088759A8;
    }
L_088759A8:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(14))))));
    goto L_088759AC;
L_088759AC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088759B8:
    ctx.set_gpr(31, 0x088759C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 76u, 0x08879004u>(ctx, &aot_mem) && ctx.pc == 0x088759C0u) goto L_088759C0;
    return;
L_088759C0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_088759AC;
L_088759C8:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13))))));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088759D0:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(152))))));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08875A08;
      }
      goto L_088759E0;
    }
L_088759E0:
    if (ctx.gpr[3] == ctx.gpr[6]) {
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(156))))));
        goto L_08875A10;
    }
    goto L_088759E8;
L_088759E8:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08875A08;
      }
      goto L_088759F4;
    }
L_088759F4:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(156))))));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(3, ctx.gpr[2] ^ 2u);
    goto L_08875A00;
L_08875A00:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    if (ctx.gpr[3] != 0u) ctx.set_gpr(5, ctx.gpr[4]);
    goto L_08875A08;
L_08875A08:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08875A10:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[6];
    ctx.set_gpr(3, ctx.gpr[7] ^ 1u);
      if (branch_taken) {
          goto L_08875A08;
      }
      goto L_08875A1C;
    }
L_08875A1C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    goto L_08875A00;
L_08875A24:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08875A2C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(15))))));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08875A34:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08875A3C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(28))))));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08875A44:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08875A4C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(36))))));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08875A54:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08875A5C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08875A68;
      }
      goto L_08875A64;
    }
L_08875A64:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    goto L_08875A68;
L_08875A68:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08875A70:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08875A78:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08875A80:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(196)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08875A88:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(216))))));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08875A90:
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(218))))));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08875AA0:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(200));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08875AA8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(176));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x08875AC8u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(180));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 320u, 0x08889A34u>(ctx, &aot_mem) && ctx.pc == 0x08875AC8u) goto L_08875AC8;
    return;
L_08875AC8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(170));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(166));
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(168));
    ctx.set_gpr(31, 0x08875AE0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 322u, 0x08889A68u>(ctx, &aot_mem) && ctx.pc == 0x08875AE0u) goto L_08875AE0;
    return;
L_08875AE0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08875AF0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(176));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x08875B10u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(180));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 319u, 0x08889A10u>(ctx, &aot_mem) && ctx.pc == 0x08875B10u) goto L_08875B10;
    return;
L_08875B10:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(166))))));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(168))))));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(170))))));
    ctx.set_gpr(31, 0x08875B24u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 321u, 0x08889A58u>(ctx, &aot_mem) && ctx.pc == 0x08875B24u) goto L_08875B24;
    return;
L_08875B24:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08875B34:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08875B54u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08875B54u) goto L_08875B54;
    return;
L_08875B54:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08875B6Cu);
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    goto L_08874640;
L_08875B6C:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(160), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(164), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2)));
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(162), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08875B98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08875BACu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08875BACu) goto L_08875BAC;
    return;
L_08875BAC:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(-26826));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[3] + static_cast<std::uint32_t>(-26828));
    ctx.set_gpr(31, 0x08875BD0u);
    ctx.set_gpr(8, ctx.gpr[2] + static_cast<std::uint32_t>(-26824));
    goto L_08874640;
L_08875BD0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08875BE0:
    ctx.set_gpr(8, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(162)));
    rt.memory().aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(164)));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08875BFC:
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(164), static_cast<std::uint16_t>(ctx.gpr[7]));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(160), static_cast<std::uint16_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(162), static_cast<std::uint16_t>(ctx.gpr[6]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08875C0C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08875C1C;
      }
      goto L_08875C14;
    }
L_08875C14:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(172), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08875C1C:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(172), ctx.gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08875C24:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08875C2C:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(152))))));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(7, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08875C6C;
      }
      goto L_08875C38;
    }
L_08875C38:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(15))))));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[3]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    if (ctx.gpr[3] == 0u) {
    ctx.pc = 0x08875C48u; rt.stop("Allegrex BREAK code 7 at 0x08875C48"); return;
        goto L_08875C4C;
    }
    goto L_08875C4C;
L_08875C4C:
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(116), 0u);
    ctx.set_gpr(4, ctx.lo);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    goto L_08875C58;
L_08875C58:
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(224), 0u);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(144), 0u);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(148), 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(228), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08875C6C:
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13))))));
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(14))))));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 31u));
    ctx.set_gpr(12, ctx.gpr[13] >> 29u);
    ctx.set_gpr(10, ctx.gpr[11] + ctx.gpr[12]);
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 3u));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[2]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    if (ctx.gpr[2] == 0u) {
    ctx.pc = 0x08875C98u; rt.stop("Allegrex BREAK code 7 at 0x08875C98"); return;
        goto L_08875C9C;
    }
    goto L_08875C9C;
L_08875C9C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(116), 0u);
    ctx.set_gpr(5, ctx.lo);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    goto L_08875C58;
L_08875CAC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08875CBC;
      }
      goto L_08875CB8;
    }
L_08875CB8:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08875CBC;
L_08875CBC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08875CC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08875CDCu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 339u, 0x08889B68u>(ctx, &aot_mem) && ctx.pc == 0x08875CDCu) goto L_08875CDC;
    return;
L_08875CDC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08875CF0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08875D20;
      }
      goto L_08875D10;
    }
L_08875D10:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08875D20:
    ctx.set_gpr(31, 0x08875D28u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 340u, 0x08889B78u>(ctx, &aot_mem) && ctx.pc == 0x08875D28u) goto L_08875D28;
    return;
L_08875D28:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(140), 0u);
    goto L_08875D10;
L_08875D34:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08875D3C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08875D44:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(236), ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(232), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08876204:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(152))))));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_0887632C;
      }
      goto L_08876220;
    }
L_08876220:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088762E8;
      }
      goto L_08876230;
    }
L_08876230:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088762A0;
      }
      goto L_0887623C;
    }
L_0887623C:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(232)));
    goto L_08876240;
L_08876240:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08876280;
      }
      goto L_08876248;
    }
L_08876248:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(224)));
    ctx.set_gpr(5, ctx.gpr[2] - ctx.gpr[12]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
      if (branch_taken) {
          goto L_08876290;
      }
      goto L_0887625C;
    }
L_0887625C:
    ctx.set_gpr(25, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(14))))));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(236)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[25])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(24, ctx.lo);
    jump_target = ctx.gpr[7];
    ctx.set_gpr(31, 0x08876274u);
    ctx.set_gpr(6, ctx.gpr[24] << 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08876274u) goto L_08876274;
    return;
L_08876274:
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(224), ctx.gpr[15]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_08876280;
L_08876280:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08876290:
    ctx.set_gpr(14, 32767u << 16u);
    ctx.set_gpr(13, ctx.gpr[14] | 65535u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[13]);
    goto L_0887625C;
L_088762A0:
    ctx.set_gpr(31, 0x088762A8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 343u, 0x08889BA8u>(ctx, &aot_mem) && ctx.pc == 0x088762A8u) goto L_088762A8;
    return;
L_088762A8:
    ctx.set_gpr(31, 0x088762B0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 326u, 0x08889AB4u>(ctx, &aot_mem) && ctx.pc == 0x088762B0u) goto L_088762B0;
    return;
L_088762B0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_0887623C;
      }
      goto L_088762BC;
    }
L_088762BC:
    ctx.set_gpr(31, 0x088762C4u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08875470;
L_088762C4:
    ctx.set_gpr(31, 0x088762CCu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 340u, 0x08889B78u>(ctx, &aot_mem) && ctx.pc == 0x088762CCu) goto L_088762CC;
    return;
L_088762CC:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[7];
    ctx.set_gpr(31, 0x088762E0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088762E0u) goto L_088762E0;
    return;
L_088762E0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    goto L_0887623C;
L_088762E8:
    ctx.set_gpr(31, 0x088762F0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 326u, 0x08889AB4u>(ctx, &aot_mem) && ctx.pc == 0x088762F0u) goto L_088762F0;
    return;
L_088762F0:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
        goto L_08876300;
    }
    goto L_088762F8;
L_088762F8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08876230;
L_08876300:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(108));
    jump_target = ctx.gpr[17];
    ctx.set_gpr(31, 0x08876314u);
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08876314u) goto L_08876314;
    return;
L_08876314:
    ctx.set_gpr(31, 0x0887631Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08875338;
L_0887631C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08876230;
L_0887632C:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(10));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[6];
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08876398;
      }
      goto L_08876338;
    }
L_08876338:
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[8];
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08876388;
      }
      goto L_08876340;
    }
L_08876340:
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[9];
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08876378;
      }
      goto L_08876348;
    }
L_08876348:
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[10];
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08876368;
      }
      goto L_08876350;
    }
L_08876350:
    if (ctx.gpr[3] != ctx.gpr[11]) {
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(232)));
        goto L_08876240;
    }
    goto L_08876358;
L_08876358:
    ctx.set_gpr(31, 0x08876360u);
    // nop
    goto L_08877950;
L_08876360:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(232)));
    goto L_08876240;
L_08876368:
    ctx.set_gpr(31, 0x08876370u);
    // nop
    goto L_0887431C;
L_08876370:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(232)));
    goto L_08876240;
L_08876378:
    ctx.set_gpr(31, 0x08876380u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 737u, 0x088731B8u>(ctx, &aot_mem) && ctx.pc == 0x08876380u) goto L_08876380;
    return;
L_08876380:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(232)));
    goto L_08876240;
L_08876388:
    ctx.set_gpr(31, 0x08876390u);
    // nop
    goto L_088765E4;
L_08876390:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(232)));
    goto L_08876240;
L_08876398:
    ctx.set_gpr(31, 0x088763A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 644u, 0x0887279Cu>(ctx, &aot_mem) && ctx.pc == 0x088763A0u) goto L_088763A0;
    return;
L_088763A0:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(232)));
    goto L_08876240;
L_088764D4:
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(7)));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(14, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(12, ctx.gpr[13] << 4u);
    rt.memory().aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[12]));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(9)));
    ctx.set_gpr(4, ctx.gpr[6] & 3u);
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(42)));
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[14];
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_088765C4;
      }
      goto L_08876518;
    }
L_08876518:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0887658C;
      }
      goto L_08876520;
    }
L_08876520:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08876558;
      }
      goto L_08876528;
    }
L_08876528:
    ctx.set_gpr(24, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[24]));
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(15, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[15]));
    rt.memory().aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[11]));
    ctx.set_gpr(2, ctx.gpr[4] << 1u);
    goto L_0887654C;
L_0887654C:
    rt.memory().aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    goto L_08876554;
L_08876554:
    ctx.set_gpr(14, 0u + static_cast<std::uint32_t>(1));
    goto L_08876558;
L_08876558:
    rt.memory().aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(16));
    rt.memory().aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(0), ctx.gpr[14]);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(25, ctx.gpr[10] >> 31u);
    ctx.set_gpr(12, ctx.gpr[10] + ctx.gpr[25]);
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 1u));
    rt.memory().aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887658C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08876554;
      }
      goto L_08876594;
    }
L_08876594:
    ctx.set_gpr(25, 0u + static_cast<std::uint32_t>(16));
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[25]));
    ctx.set_gpr(24, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(15, ctx.gpr[24] << 1u);
    rt.memory().aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[15]));
    rt.memory().aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(0), ctx.gpr[14]);
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.set_gpr(2, ctx.gpr[11] >> 31u);
    ctx.set_gpr(10, ctx.gpr[11] + ctx.gpr[2]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 1u));
    goto L_0887654C;
L_088765C4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(14, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[14]));
    rt.memory().aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_0887654C;
L_088765E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_08876644;
      }
      goto L_08876608;
    }
L_08876608:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[5] == ctx.gpr[7]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
        goto L_08876628;
    }
    goto L_08876614;
L_08876614:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08876628:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08876638u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08876638u) goto L_08876638;
    return;
L_08876638:
    ctx.set_gpr(13, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[13]);
    goto L_08876614;
L_08876644:
    ctx.set_gpr(31, 0x0887664Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 326u, 0x08889AB4u>(ctx, &aot_mem) && ctx.pc == 0x0887664Cu) goto L_0887664C;
    return;
L_0887664C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
        goto L_0887665C;
    }
    goto L_08876654;
L_08876654:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08876608;
L_0887665C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(108));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08876670u);
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08876670u) goto L_08876670;
    return;
L_08876670:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(14)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(5, ctx.gpr[12] - ctx.gpr[6]);
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? ctx.gpr[5] : ctx.gpr[7]);
    ctx.set_gpr(4, ctx.gpr[6] << 1u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[8]))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[11]) ? ctx.gpr[9] : ctx.gpr[11]);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    ctx.set_gpr(11, ctx.gpr[10] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08876790;
      }
      goto L_088766A8;
    }
L_088766A8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    ctx.set_gpr(9, 0u + 0u);
      if (branch_taken) {
          goto L_08876720;
      }
      goto L_088766B0;
    }
L_088766B0:
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[7]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(3, ctx.gpr[7] & 3u);
      if (branch_taken) {
          goto L_08876748;
      }
      goto L_088766BC;
    }
L_088766BC:
    ctx.set_gpr(8, ctx.gpr[9] << 1u);
    goto L_088766C0;
L_088766C0:
    ctx.set_gpr(15, ctx.gpr[8] + ctx.gpr[17]);
    ctx.set_gpr(14, rt.memory().aot_load16(ctx.gpr[15] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[8] + ctx.gpr[11]);
    ctx.set_gpr(13, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] == 0u;
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[14]));
      if (branch_taken) {
          goto L_0887671C;
      }
      goto L_088766DC;
    }
L_088766DC:
    ctx.set_gpr(6, ctx.gpr[9] << 1u);
    goto L_088766E0;
L_088766E0:
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[6] + ctx.gpr[11]);
    goto L_088766E8;
L_088766E8:
    ctx.set_gpr(10, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(17, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.set_gpr(25, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[25]));
    ctx.set_gpr(24, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[24]));
    ctx.set_gpr(11, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(6)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[11]));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088766E8;
      }
      goto L_0887671C;
    }
L_0887671C:
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(14)));
    goto L_08876720;
L_08876720:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[8]))));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(12, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[12]);
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(9, ctx.gpr[4] << 1u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(148), ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(144), ctx.gpr[7]);
    goto L_08876608;
L_08876748:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(6, ctx.gpr[9] << 1u);
      if (branch_taken) {
          goto L_088766E0;
      }
      goto L_08876750;
    }
L_08876750:
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(8, ctx.gpr[9] << 1u);
      if (branch_taken) {
          goto L_088766C0;
      }
      goto L_0887675C;
    }
L_0887675C:
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(12, ctx.gpr[9] << 1u);
      if (branch_taken) {
          goto L_08876778;
      }
      goto L_08876768;
    }
L_08876768:
    ctx.set_gpr(24, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[24]));
    ctx.set_gpr(12, ctx.gpr[9] << 1u);
    goto L_08876778;
L_08876778:
    ctx.set_gpr(2, ctx.gpr[12] + ctx.gpr[17]);
    ctx.set_gpr(10, rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, ctx.gpr[12] + ctx.gpr[11]);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store16(ctx.gpr[25] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[10]));
    goto L_088766BC;
L_08876790:
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(13, ctx.gpr[14] + ctx.gpr[6]);
    ctx.set_gpr(6, ctx.gpr[13] << 1u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    ctx.set_gpr(10, ctx.gpr[10] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_08876720;
      }
      goto L_088767A8;
    }
L_088767A8:
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[7]) < 2 ? 1u : 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.set_gpr(3, ctx.gpr[7] & 3u);
      if (branch_taken) {
          goto L_08876850;
      }
      goto L_088767B8;
    }
L_088767B8:
    ctx.set_gpr(25, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(15, ctx.gpr[9] << 1u);
    ctx.set_gpr(24, ctx.gpr[15] + ctx.gpr[11]);
    rt.memory().aot_store16(ctx.gpr[24] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[25]));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(14, ctx.gpr[15] + ctx.gpr[10]);
    ctx.set_gpr(8, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(13, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[13] == 0u;
    rt.memory().aot_store16(ctx.gpr[14] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
      if (branch_taken) {
          goto L_0887671C;
      }
      goto L_088767E4;
    }
L_088767E4:
    ctx.set_gpr(17, ctx.gpr[9] << 1u);
    ctx.set_gpr(6, ctx.gpr[17] + ctx.gpr[11]);
    ctx.set_gpr(4, ctx.gpr[17] + ctx.gpr[10]);
    goto L_088767F0;
L_088767F0:
    ctx.set_gpr(15, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    rt.memory().aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[15]));
    ctx.set_gpr(8, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.set_gpr(14, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[14]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(6)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(13, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[13]));
    ctx.set_gpr(12, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(10)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[12]));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(11, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(14)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[11]));
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088767F0;
      }
      goto L_08876848;
    }
L_08876848:
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(14)));
    goto L_08876720;
L_08876850:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(15, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_088767E4;
      }
      goto L_08876858;
    }
L_08876858:
    { const bool branch_taken = ctx.gpr[15] != 0u;
    ctx.set_gpr(24, static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088767B8;
      }
      goto L_08876860;
    }
L_08876860:
    if (ctx.gpr[24] != 0u) {
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
        goto L_08876884;
    }
    goto L_08876868;
L_08876868:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(25, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    rt.memory().aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[25]));
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08876884;
L_08876884:
    ctx.set_gpr(12, ctx.gpr[9] << 1u);
    ctx.set_gpr(3, ctx.gpr[12] + ctx.gpr[11]);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.set_gpr(17, ctx.gpr[12] + ctx.gpr[10]);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_088767B8;
L_088768A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(12, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(13, ctx.gpr[16] + static_cast<std::uint32_t>(156));
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(8, ctx.gpr[16] + static_cast<std::uint32_t>(13));
    ctx.set_gpr(9, ctx.gpr[16] + static_cast<std::uint32_t>(15));
    ctx.set_gpr(10, ctx.gpr[16] + static_cast<std::uint32_t>(14));
    ctx.set_gpr(11, ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[12]);
    ctx.set_gpr(31, 0x088768FCu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[13]);
    goto L_088764D4;
L_088768FC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_08876968;
      }
      goto L_08876904;
    }
L_08876904:
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(14))))));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(15))))));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(152), static_cast<std::uint16_t>(ctx.gpr[11]));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(0u));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(0u));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(140), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(136), 0u);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    goto L_08876968;
L_08876968:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887697C:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(12100));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08876994u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08876994u) goto L_08876994;
    return;
L_08876994:
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088769A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[21]);
    ctx.set_gpr(21, static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[30]);
    ctx.set_gpr(30, ctx.gpr[11] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[23]);
    ctx.set_gpr(23, ctx.gpr[9] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[22]);
    ctx.set_gpr(22, ctx.gpr[10] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    ctx.set_gpr(20, ctx.gpr[8] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.set_gpr(16, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08876AA4;
      }
      goto L_088769FC;
    }
L_088769FC:
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    ctx.set_gpr(19, 2227u << 16u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(3, ctx.gpr[18] & 3u);
      if (branch_taken) {
          goto L_08876D94;
      }
      goto L_08876A0C;
    }
L_08876A0C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(380)));
    ctx.set_gpr(4, ctx.gpr[17] + ctx.gpr[16]);
    ctx.set_gpr(31, 0x08876A1Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08876A1Cu) goto L_08876A1C;
    return;
L_08876A1C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08876AA4;
      }
      goto L_08876A24;
    }
L_08876A24:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08876AA4;
      }
      goto L_08876A34;
    }
L_08876A34:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(380)));
    goto L_08876A38;
L_08876A38:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08876A44u);
    ctx.set_gpr(4, ctx.gpr[17] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08876A44u) goto L_08876A44;
    return;
L_08876A44:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08876AA4;
      }
      goto L_08876A4C;
    }
L_08876A4C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(380)));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08876A5Cu);
    ctx.set_gpr(4, ctx.gpr[17] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08876A5Cu) goto L_08876A5C;
    return;
L_08876A5C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08876AA4;
      }
      goto L_08876A64;
    }
L_08876A64:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(380)));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08876A74u);
    ctx.set_gpr(4, ctx.gpr[17] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08876A74u) goto L_08876A74;
    return;
L_08876A74:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08876AA4;
      }
      goto L_08876A7C;
    }
L_08876A7C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(380)));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08876A8Cu);
    ctx.set_gpr(4, ctx.gpr[17] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08876A8Cu) goto L_08876A8C;
    return;
L_08876A8C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08876AA4;
      }
      goto L_08876A94;
    }
L_08876A94:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(380)));
      if (branch_taken) {
          goto L_08876A38;
      }
      goto L_08876AA4;
    }
L_08876AA4:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[18];
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08876CAC;
      }
      goto L_08876AAC;
    }
L_08876AAC:
    ctx.set_gpr(9, ctx.gpr[17] + ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load_word_left(ctx.gpr[9] + static_cast<std::uint32_t>(11), ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load_word_right(ctx.gpr[9] + static_cast<std::uint32_t>(8), ctx.gpr[3]));
    ctx.set_gpr(4, rt.memory().aot_load_word_left(ctx.gpr[9] + static_cast<std::uint32_t>(15), ctx.gpr[4]));
    ctx.set_gpr(4, rt.memory().aot_load_word_right(ctx.gpr[9] + static_cast<std::uint32_t>(12), ctx.gpr[4]));
    ctx.set_gpr(5, rt.memory().aot_load_word_left(ctx.gpr[9] + static_cast<std::uint32_t>(19), ctx.gpr[5]));
    ctx.set_gpr(5, rt.memory().aot_load_word_right(ctx.gpr[9] + static_cast<std::uint32_t>(16), ctx.gpr[5]));
    ctx.set_gpr(6, rt.memory().aot_load_word_left(ctx.gpr[9] + static_cast<std::uint32_t>(23), ctx.gpr[6]));
    ctx.set_gpr(6, rt.memory().aot_load_word_right(ctx.gpr[9] + static_cast<std::uint32_t>(20), ctx.gpr[6]));
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(3), ctx.gpr[3]);
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(7), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(11), ctx.gpr[5]);
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(15), ctx.gpr[6]);
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.set_gpr(3, rt.memory().aot_load_word_left(ctx.gpr[9] + static_cast<std::uint32_t>(27), ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load_word_right(ctx.gpr[9] + static_cast<std::uint32_t>(24), ctx.gpr[3]));
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(19), ctx.gpr[3]);
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[8]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08876CAC;
      }
      goto L_08876B10;
    }
L_08876B10:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_08876BC0;
      }
      goto L_08876B18;
    }
L_08876B18:
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    ctx.set_gpr(19, 2227u << 16u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.set_gpr(3, ctx.gpr[18] & 3u);
      if (branch_taken) {
          goto L_08876D48;
      }
      goto L_08876B28;
    }
L_08876B28:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(384)));
    ctx.set_gpr(4, ctx.gpr[17] + ctx.gpr[16]);
    ctx.set_gpr(31, 0x08876B38u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08876B38u) goto L_08876B38;
    return;
L_08876B38:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08876BC0;
      }
      goto L_08876B40;
    }
L_08876B40:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(13, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] == 0u;
    // nop
      if (branch_taken) {
          goto L_08876BC0;
      }
      goto L_08876B50;
    }
L_08876B50:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(384)));
    goto L_08876B54;
L_08876B54:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08876B60u);
    ctx.set_gpr(4, ctx.gpr[17] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08876B60u) goto L_08876B60;
    return;
L_08876B60:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08876BC0;
      }
      goto L_08876B68;
    }
L_08876B68:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(384)));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08876B78u);
    ctx.set_gpr(4, ctx.gpr[17] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08876B78u) goto L_08876B78;
    return;
L_08876B78:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08876BC0;
      }
      goto L_08876B80;
    }
L_08876B80:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(384)));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08876B90u);
    ctx.set_gpr(4, ctx.gpr[17] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08876B90u) goto L_08876B90;
    return;
L_08876B90:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08876BC0;
      }
      goto L_08876B98;
    }
L_08876B98:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(384)));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08876BA8u);
    ctx.set_gpr(4, ctx.gpr[17] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08876BA8u) goto L_08876BA8;
    return;
L_08876BA8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08876BC0;
      }
      goto L_08876BB0;
    }
L_08876BB0:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(14, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[14] != 0u;
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(384)));
      if (branch_taken) {
          goto L_08876B54;
      }
      goto L_08876BC0;
    }
L_08876BC0:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[18];
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08876CAC;
      }
      goto L_08876BC8;
    }
L_08876BC8:
    ctx.set_gpr(15, ctx.gpr[17] + ctx.gpr[16]);
    ctx.set_gpr(14, rt.memory().aot_load8(ctx.gpr[15] + static_cast<std::uint32_t>(5)));
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[15] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[15] + static_cast<std::uint32_t>(6)));
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[15] + static_cast<std::uint32_t>(7)));
    ctx.set_gpr(4, ctx.gpr[14] << 8u);
    ctx.set_gpr(19, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(12))))));
    ctx.set_gpr(10, ctx.gpr[13] | ctx.gpr[4]);
    ctx.set_gpr(11, ctx.gpr[12] << 16u);
    ctx.set_gpr(8, ctx.gpr[10] | ctx.gpr[11]);
    ctx.set_gpr(7, ctx.gpr[9] << 24u);
    ctx.set_gpr(9, ctx.gpr[8] | ctx.gpr[7]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[9]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(24, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(21, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(14)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(16));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    rt.memory().aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), ctx.gpr[25]);
    rt.memory().aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[24]));
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[21]));
    rt.memory().aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[19]));
    if (ctx.gpr[19] == 0u) {
    ctx.pc = 0x08876C3Cu; rt.stop("Allegrex BREAK code 7 at 0x08876C3C"); return;
        goto L_08876C40;
    }
    goto L_08876C40;
L_08876C40:
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(17, ctx.lo);
    rt.memory().aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[3]))));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[11];
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08876D3C;
      }
      goto L_08876C64;
    }
L_08876C64:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[17];
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08876D30;
      }
      goto L_08876C6C;
    }
L_08876C6C:
    if (ctx.gpr[5] == ctx.gpr[19]) {
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(0))))));
        goto L_08876CE0;
    }
    goto L_08876C74;
L_08876C74:
    ctx.set_gpr(20, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[3]))));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08876CAC;
      }
      goto L_08876C80;
    }
L_08876C80:
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
      if (branch_taken) {
          goto L_08876CB0;
      }
      goto L_08876C8C;
    }
L_08876C8C:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(13, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(23, ctx.gpr[13] & 255u);
    ctx.set_gpr(22, ctx.gpr[23] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    if (ctx.gpr[22] == 0u) {
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
        goto L_08876CB4;
    }
    goto L_08876CA4;
L_08876CA4:
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[14] != 0u) ctx.set_gpr(3, 0u);
    goto L_08876CAC;
L_08876CAC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    goto L_08876CB0;
L_08876CB0:
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    goto L_08876CB4;
L_08876CB4:
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08876CE0:
    ctx.set_gpr(12, ctx.gpr[9] >> 31u);
    ctx.set_gpr(6, ctx.gpr[9] + ctx.gpr[12]);
    ctx.set_gpr(9, ctx.gpr[10] << 1u);
    rt.memory().aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.set_gpr(24, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(0))))));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    if (ctx.gpr[5] == 0u) {
    ctx.pc = 0x08876D0Cu; rt.stop("Allegrex BREAK code 7 at 0x08876D0C"); return;
        goto L_08876D10;
    }
    goto L_08876D10;
L_08876D10:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(16, ctx.lo);
    rt.memory().aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    rt.memory().aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[24]));
    goto L_08876D28;
L_08876D28:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    goto L_08876C74;
L_08876D30:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[10]));
    goto L_08876D28;
L_08876D3C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    goto L_08876D28;
L_08876D48:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(11, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08876B50;
      }
      goto L_08876D50;
    }
L_08876D50:
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.set_gpr(12, static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08876B28;
      }
      goto L_08876D58;
    }
L_08876D58:
    { const bool branch_taken = ctx.gpr[12] != 0u;
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(384)));
      if (branch_taken) {
          goto L_08876D78;
      }
      goto L_08876D60;
    }
L_08876D60:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08876D6Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08876D6Cu) goto L_08876D6C;
    return;
L_08876D6C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(384)));
      if (branch_taken) {
          goto L_08876BC0;
      }
      goto L_08876D74;
    }
L_08876D74:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    goto L_08876D78;
L_08876D78:
    ctx.set_gpr(4, ctx.gpr[17] + ctx.gpr[16]);
    ctx.set_gpr(31, 0x08876D84u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08876D84u) goto L_08876D84;
    return;
L_08876D84:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08876BC0;
      }
      goto L_08876D8C;
    }
L_08876D8C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08876B28;
L_08876D94:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08876A34;
      }
      goto L_08876D9C;
    }
L_08876D9C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08876A0C;
      }
      goto L_08876DA4;
    }
L_08876DA4:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(380)));
      if (branch_taken) {
          goto L_08876DC0;
      }
      goto L_08876DAC;
    }
L_08876DAC:
    ctx.set_gpr(31, 0x08876DB4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08876DB4u) goto L_08876DB4;
    return;
L_08876DB4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(380)));
      if (branch_taken) {
          goto L_08876AA4;
      }
      goto L_08876DBC;
    }
L_08876DBC:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    goto L_08876DC0;
L_08876DC0:
    ctx.set_gpr(4, ctx.gpr[17] + ctx.gpr[16]);
    ctx.set_gpr(31, 0x08876DCCu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08876DCCu) goto L_08876DCC;
    return;
L_08876DCC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08876AA4;
      }
      goto L_08876DD4;
    }
L_08876DD4:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08876A0C;
L_08876DDC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_08876E3C;
      }
      goto L_08876E00;
    }
L_08876E00:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[5] == ctx.gpr[7]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
        goto L_08876E20;
    }
    goto L_08876E0C;
L_08876E0C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08876E20:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08876E30u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08876E30u) goto L_08876E30;
    return;
L_08876E30:
    ctx.set_gpr(13, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[13]);
    goto L_08876E0C;
L_08876E3C:
    ctx.set_gpr(31, 0x08876E44u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 326u, 0x08889AB4u>(ctx, &aot_mem) && ctx.pc == 0x08876E44u) goto L_08876E44;
    return;
L_08876E44:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
        goto L_08876E54;
    }
    goto L_08876E4C;
L_08876E4C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08876E00;
L_08876E54:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(108));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08876E68u);
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08876E68u) goto L_08876E68;
    return;
L_08876E68:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(14)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(5, ctx.gpr[12] - ctx.gpr[6]);
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? ctx.gpr[5] : ctx.gpr[7]);
    ctx.set_gpr(4, ctx.gpr[6] << 1u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[8]))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[11]) ? ctx.gpr[9] : ctx.gpr[11]);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    ctx.set_gpr(11, ctx.gpr[10] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08876F88;
      }
      goto L_08876EA0;
    }
L_08876EA0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    ctx.set_gpr(9, 0u + 0u);
      if (branch_taken) {
          goto L_08876F18;
      }
      goto L_08876EA8;
    }
L_08876EA8:
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[7]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(3, ctx.gpr[7] & 3u);
      if (branch_taken) {
          goto L_08876F40;
      }
      goto L_08876EB4;
    }
L_08876EB4:
    ctx.set_gpr(8, ctx.gpr[9] << 1u);
    goto L_08876EB8;
L_08876EB8:
    ctx.set_gpr(15, ctx.gpr[8] + ctx.gpr[17]);
    ctx.set_gpr(14, rt.memory().aot_load16(ctx.gpr[15] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[8] + ctx.gpr[11]);
    ctx.set_gpr(13, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] == 0u;
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[14]));
      if (branch_taken) {
          goto L_08876F14;
      }
      goto L_08876ED4;
    }
L_08876ED4:
    ctx.set_gpr(6, ctx.gpr[9] << 1u);
    goto L_08876ED8;
L_08876ED8:
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[6] + ctx.gpr[11]);
    goto L_08876EE0;
L_08876EE0:
    ctx.set_gpr(10, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(17, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.set_gpr(25, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[25]));
    ctx.set_gpr(24, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[24]));
    ctx.set_gpr(11, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(6)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[11]));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08876EE0;
      }
      goto L_08876F14;
    }
L_08876F14:
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(14)));
    goto L_08876F18;
L_08876F18:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[8]))));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(12, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[12]);
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(9, ctx.gpr[4] << 1u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(148), ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(144), ctx.gpr[7]);
    goto L_08876E00;
L_08876F40:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(6, ctx.gpr[9] << 1u);
      if (branch_taken) {
          goto L_08876ED8;
      }
      goto L_08876F48;
    }
L_08876F48:
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(8, ctx.gpr[9] << 1u);
      if (branch_taken) {
          goto L_08876EB8;
      }
      goto L_08876F54;
    }
L_08876F54:
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(12, ctx.gpr[9] << 1u);
      if (branch_taken) {
          goto L_08876F70;
      }
      goto L_08876F60;
    }
L_08876F60:
    ctx.set_gpr(24, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[24]));
    ctx.set_gpr(12, ctx.gpr[9] << 1u);
    goto L_08876F70;
L_08876F70:
    ctx.set_gpr(2, ctx.gpr[12] + ctx.gpr[17]);
    ctx.set_gpr(10, rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, ctx.gpr[12] + ctx.gpr[11]);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store16(ctx.gpr[25] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[10]));
    goto L_08876EB4;
L_08876F88:
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(13, ctx.gpr[14] + ctx.gpr[6]);
    ctx.set_gpr(6, ctx.gpr[13] << 1u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) <= 0;
    ctx.set_gpr(10, ctx.gpr[10] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_08876F18;
      }
      goto L_08876FA0;
    }
L_08876FA0:
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[7]) < 2 ? 1u : 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.set_gpr(3, ctx.gpr[7] & 3u);
      if (branch_taken) {
          goto L_08877048;
      }
      goto L_08876FB0;
    }
L_08876FB0:
    ctx.set_gpr(25, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(15, ctx.gpr[9] << 1u);
    ctx.set_gpr(24, ctx.gpr[15] + ctx.gpr[11]);
    rt.memory().aot_store16(ctx.gpr[24] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[25]));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(14, ctx.gpr[15] + ctx.gpr[10]);
    ctx.set_gpr(8, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(13, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[13] == 0u;
    rt.memory().aot_store16(ctx.gpr[14] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
      if (branch_taken) {
          goto L_08876F14;
      }
      goto L_08876FDC;
    }
L_08876FDC:
    ctx.set_gpr(17, ctx.gpr[9] << 1u);
    ctx.set_gpr(6, ctx.gpr[17] + ctx.gpr[11]);
    ctx.set_gpr(4, ctx.gpr[17] + ctx.gpr[10]);
    goto L_08876FE8;
L_08876FE8:
    ctx.set_gpr(15, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    rt.memory().aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[15]));
    ctx.set_gpr(8, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.set_gpr(14, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[14]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(6)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(13, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[13]));
    ctx.set_gpr(12, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(10)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[12]));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(11, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(14)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[11]));
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08876FE8;
      }
      goto L_08877040;
    }
L_08877040:
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(14)));
    goto L_08876F18;
L_08877048:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(15, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08876FDC;
      }
      goto L_08877050;
    }
L_08877050:
    { const bool branch_taken = ctx.gpr[15] != 0u;
    ctx.set_gpr(24, static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08876FB0;
      }
      goto L_08877058;
    }
L_08877058:
    if (ctx.gpr[24] != 0u) {
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
        goto L_0887707C;
    }
    goto L_08877060;
L_08877060:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(25, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    rt.memory().aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[25]));
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_0887707C;
L_0887707C:
    ctx.set_gpr(12, ctx.gpr[9] << 1u);
    ctx.set_gpr(3, ctx.gpr[12] + ctx.gpr[11]);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.set_gpr(17, ctx.gpr[12] + ctx.gpr[10]);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08876FB0;
L_088770A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_08877100;
      }
      goto L_088770C4;
    }
L_088770C4:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[5] == ctx.gpr[8]) {
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
        goto L_088770E4;
    }
    goto L_088770D0;
L_088770D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088770E4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[17];
    ctx.set_gpr(31, 0x088770F4u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088770F4u) goto L_088770F4;
    return;
L_088770F4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_088770D0;
L_08877100:
    ctx.set_gpr(31, 0x08877108u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 326u, 0x08889AB4u>(ctx, &aot_mem) && ctx.pc == 0x08877108u) goto L_08877108;
    return;
L_08877108:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
        goto L_08877118;
    }
    goto L_08877110;
L_08877110:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_088770C4;
L_08877118:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(108));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x0887712Cu);
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887712Cu) goto L_0887712C;
    return;
L_0887712C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(14)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(5, ctx.gpr[12] - ctx.gpr[6]);
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[8]) ? ctx.gpr[5] : ctx.gpr[8]);
    ctx.set_gpr(4, ctx.gpr[6] << 1u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[7]))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[11]) ? ctx.gpr[10] : ctx.gpr[11]);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    ctx.set_gpr(12, ctx.gpr[9] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08877280;
      }
      goto L_08877164;
    }
L_08877164:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) <= 0;
    ctx.set_gpr(10, 0u + 0u);
      if (branch_taken) {
          goto L_0887720C;
      }
      goto L_0887716C;
    }
L_0887716C:
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[8]) < 2 ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[12] + 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.set_gpr(3, ctx.gpr[8] & 3u);
      if (branch_taken) {
          goto L_0887722C;
      }
      goto L_0887717C;
    }
L_0887717C:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[10]);
    goto L_08877180;
L_08877180:
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    ctx.set_gpr(7, ctx.gpr[9] + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(15, ctx.gpr[7] << 8u);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[15]));
    { const bool branch_taken = ctx.gpr[25] == 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08877204;
      }
      goto L_088771A0;
    }
L_088771A0:
    ctx.set_gpr(3, ctx.gpr[10] + ctx.gpr[17]);
    goto L_088771A4;
L_088771A4:
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(15, ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(5, ctx.gpr[15] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(12, ctx.gpr[13] + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(11, ctx.gpr[12] << 8u);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[11]));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(17, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(9, ctx.gpr[6] + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(7, ctx.gpr[9] << 8u);
    rt.memory().aot_store16(ctx.gpr[15] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.set_gpr(6, ctx.gpr[5] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[6] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(25, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(14, ctx.gpr[25] + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(24, ctx.gpr[14] << 8u);
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[24]));
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(12, ctx.gpr[13] + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(11, ctx.gpr[12] << 8u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    rt.memory().aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[11]));
      if (branch_taken) {
          goto L_088771A4;
      }
      goto L_08877204;
    }
L_08877204:
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(14)));
    goto L_08877208;
L_08877208:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[7]))));
    goto L_0887720C;
L_0887720C:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.set_gpr(10, ctx.lo);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(148), ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(144), ctx.gpr[8]);
    goto L_088770C4;
L_0887722C:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_088771A0;
      }
      goto L_08877234;
    }
L_08877234:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[10]);
      if (branch_taken) {
          goto L_08877180;
      }
      goto L_0887723C;
    }
L_0887723C:
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(14, ctx.gpr[17] + ctx.gpr[10]);
      if (branch_taken) {
          goto L_08877264;
      }
      goto L_08877248;
    }
L_08877248:
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(11, ctx.gpr[12] + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(3, ctx.gpr[11] << 8u);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(14, ctx.gpr[17] + ctx.gpr[10]);
    goto L_08877264;
L_08877264:
    ctx.set_gpr(24, rt.memory().aot_load8(ctx.gpr[14] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[24] + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(13, ctx.gpr[5] << 8u);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[13]));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2));
    goto L_0887717C;
L_08877280:
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(14, ctx.gpr[15] + ctx.gpr[6]);
    ctx.set_gpr(13, ctx.gpr[14] << 1u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) <= 0;
    ctx.set_gpr(6, ctx.gpr[9] + ctx.gpr[13]);
      if (branch_taken) {
          goto L_08877208;
      }
      goto L_08877298;
    }
L_08877298:
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[8]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.set_gpr(3, ctx.gpr[8] & 3u);
      if (branch_taken) {
          goto L_088773B4;
      }
      goto L_088772A4;
    }
L_088772A4:
    ctx.set_gpr(24, ctx.gpr[10] << 1u);
    ctx.set_gpr(9, ctx.gpr[24] + ctx.gpr[17]);
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[24] + ctx.gpr[12]);
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[11] + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(25, ctx.gpr[4] << 8u);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[25]));
    ctx.set_gpr(14, ctx.gpr[24] + ctx.gpr[6]);
    ctx.set_gpr(13, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(15, ctx.gpr[7] + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(5, ctx.gpr[15] << 8u);
    { const bool branch_taken = ctx.gpr[13] == 0u;
    rt.memory().aot_store16(ctx.gpr[14] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08877204;
      }
      goto L_088772E0;
    }
L_088772E0:
    ctx.set_gpr(13, ctx.gpr[10] << 1u);
    ctx.set_gpr(9, ctx.gpr[13] + ctx.gpr[12]);
    ctx.set_gpr(7, ctx.gpr[13] + ctx.gpr[6]);
    goto L_088772EC;
L_088772EC:
    ctx.set_gpr(4, ctx.gpr[10] << 1u);
    ctx.set_gpr(5, ctx.gpr[4] + ctx.gpr[17]);
    ctx.set_gpr(15, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(24, ctx.gpr[2] << 1u);
    ctx.set_gpr(25, ctx.gpr[15] + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(14, ctx.gpr[25] << 8u);
    rt.memory().aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[14]));
    ctx.set_gpr(14, ctx.gpr[24] + ctx.gpr[17]);
    ctx.set_gpr(13, ctx.gpr[10] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(12, ctx.gpr[13] << 1u);
    ctx.set_gpr(13, ctx.gpr[12] + ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[11] + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(6, ctx.gpr[3] << 8u);
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.set_gpr(15, ctx.gpr[10] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, ctx.gpr[15] << 1u);
    ctx.set_gpr(25, rt.memory().aot_load8(ctx.gpr[14] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(15, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(24, ctx.gpr[25] + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(12, ctx.gpr[24] << 8u);
    rt.memory().aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[12]));
    ctx.set_gpr(12, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[14] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(3, ctx.gpr[11] + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(25, ctx.gpr[3] << 8u);
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[25]));
    ctx.set_gpr(24, rt.memory().aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[24] + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(14, ctx.gpr[2] << 8u);
    rt.memory().aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[14]));
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(4, ctx.gpr[11] + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(3, ctx.gpr[4] << 8u);
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(25, rt.memory().aot_load8(ctx.gpr[15] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(24, ctx.gpr[25] + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(2, ctx.gpr[24] << 8u);
    rt.memory().aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[15] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(14, ctx.gpr[5] + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(6, ctx.gpr[14] << 8u);
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[6]));
    { const bool branch_taken = ctx.gpr[12] != 0u;
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088772EC;
      }
      goto L_088773AC;
    }
L_088773AC:
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(14)));
    goto L_08877208;
L_088773B4:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_088772E0;
      }
      goto L_088773BC;
    }
L_088773BC:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.set_gpr(24, static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088772A4;
      }
      goto L_088773C4;
    }
L_088773C4:
    { const bool branch_taken = ctx.gpr[24] != 0u;
    ctx.set_gpr(2, ctx.gpr[10] << 1u);
      if (branch_taken) {
          goto L_088773F4;
      }
      goto L_088773CC;
    }
L_088773CC:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(11, ctx.gpr[5] + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(2, ctx.gpr[11] << 8u);
    rt.memory().aot_store16(ctx.gpr[12] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(25, ctx.gpr[3] << 8u);
    rt.memory().aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[25]));
    ctx.set_gpr(2, ctx.gpr[10] << 1u);
    goto L_088773F4;
L_088773F4:
    ctx.set_gpr(9, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(24, ctx.gpr[2] + ctx.gpr[12]);
    ctx.set_gpr(13, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(4, ctx.gpr[11] + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(25, ctx.gpr[4] << 8u);
    rt.memory().aot_store16(ctx.gpr[24] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[25]));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(15, ctx.gpr[7] + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(14, ctx.gpr[15] << 8u);
    rt.memory().aot_store16(ctx.gpr[13] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[14]));
    goto L_088772A4;
L_08877428:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_08877488;
      }
      goto L_0887744C;
    }
L_0887744C:
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[5] == ctx.gpr[9]) {
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
        goto L_0887746C;
    }
    goto L_08877458;
L_08877458:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887746C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[10];
    ctx.set_gpr(31, 0x0887747Cu);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887747Cu) goto L_0887747C;
    return;
L_0887747C:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    goto L_08877458;
L_08877488:
    ctx.set_gpr(31, 0x08877490u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 326u, 0x08889AB4u>(ctx, &aot_mem) && ctx.pc == 0x08877490u) goto L_08877490;
    return;
L_08877490:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
        goto L_088774A0;
    }
    goto L_08877498;
L_08877498:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_0887744C;
L_088774A0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(108));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088774B4u);
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088774B4u) goto L_088774B4;
    return;
L_088774B4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(14)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(5, ctx.gpr[12] - ctx.gpr[6]);
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[9]) ? ctx.gpr[5] : ctx.gpr[9]);
    ctx.set_gpr(4, ctx.gpr[6] << 1u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[7]))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[11]) ? ctx.gpr[8] : ctx.gpr[11]);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    ctx.set_gpr(11, ctx.gpr[10] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08877644;
      }
      goto L_088774EC;
    }
L_088774EC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[9]) <= 0;
    ctx.set_gpr(8, 0u + 0u);
      if (branch_taken) {
          goto L_088775C4;
      }
      goto L_088774F4;
    }
L_088774F4:
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[9]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.set_gpr(3, ctx.gpr[9] & 3u);
      if (branch_taken) {
          goto L_088775EC;
      }
      goto L_08877500;
    }
L_08877500:
    ctx.set_gpr(6, ctx.gpr[8] << 1u);
    ctx.set_gpr(25, ctx.gpr[6] + ctx.gpr[17]);
    ctx.set_gpr(24, rt.memory().aot_load8(ctx.gpr[25] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[25] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[24] << 8u);
    ctx.set_gpr(15, ctx.gpr[5] | ctx.gpr[3]);
    ctx.set_gpr(14, ctx.gpr[6] + ctx.gpr[11]);
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    rt.memory().aot_store16(ctx.gpr[14] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[15]));
      if (branch_taken) {
          goto L_088775C0;
      }
      goto L_0887752C;
    }
L_0887752C:
    ctx.set_gpr(12, ctx.gpr[8] << 1u);
    ctx.set_gpr(6, ctx.gpr[12] + ctx.gpr[11]);
    goto L_08877534;
L_08877534:
    ctx.set_gpr(13, ctx.gpr[8] << 1u);
    ctx.set_gpr(3, ctx.gpr[13] + ctx.gpr[17]);
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(25, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(24, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(12, ctx.gpr[11] << 8u);
    ctx.set_gpr(5, ctx.gpr[25] | ctx.gpr[12]);
    rt.memory().aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.set_gpr(15, ctx.gpr[24] << 1u);
    ctx.set_gpr(2, ctx.gpr[15] + ctx.gpr[17]);
    ctx.set_gpr(14, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(13, ctx.gpr[8] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(10, ctx.gpr[14] << 8u);
    ctx.set_gpr(4, ctx.gpr[7] | ctx.gpr[10]);
    rt.memory().aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.set_gpr(11, ctx.gpr[13] << 1u);
    ctx.set_gpr(12, ctx.gpr[11] + ctx.gpr[17]);
    ctx.set_gpr(25, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(24, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(15, ctx.gpr[8] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, ctx.gpr[25] << 8u);
    ctx.set_gpr(5, ctx.gpr[24] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.set_gpr(14, ctx.gpr[15] << 1u);
    ctx.set_gpr(2, ctx.gpr[14] + ctx.gpr[17]);
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(7, ctx.gpr[10] << 8u);
    ctx.set_gpr(4, ctx.gpr[13] | ctx.gpr[7]);
    ctx.set_gpr(11, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    rt.memory().aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[4]));
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08877534;
      }
      goto L_088775C0;
    }
L_088775C0:
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(14)));
    goto L_088775C4;
L_088775C4:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[7]))));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.set_gpr(17, ctx.lo);
    ctx.set_gpr(8, ctx.gpr[17] << 1u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(148), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(144), ctx.gpr[9]);
    goto L_0887744C;
L_088775EC:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0887752C;
      }
      goto L_088775F4;
    }
L_088775F4:
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08877500;
      }
      goto L_088775FC;
    }
L_088775FC:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(2, ctx.gpr[8] << 1u);
      if (branch_taken) {
          goto L_08877620;
      }
      goto L_08877604;
    }
L_08877604:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(15, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[6] << 8u);
    ctx.set_gpr(14, ctx.gpr[15] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[14]));
    ctx.set_gpr(2, ctx.gpr[8] << 1u);
    goto L_08877620;
L_08877620:
    ctx.set_gpr(7, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(24, ctx.gpr[2] + ctx.gpr[11]);
    ctx.set_gpr(4, ctx.gpr[13] << 8u);
    ctx.set_gpr(25, ctx.gpr[12] | ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[24] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[25]));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_08877500;
L_08877644:
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(14, ctx.gpr[15] + ctx.gpr[6]);
    ctx.set_gpr(13, ctx.gpr[14] << 1u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[9]) <= 0;
    ctx.set_gpr(6, ctx.gpr[10] + ctx.gpr[13]);
      if (branch_taken) {
          goto L_088775C4;
      }
      goto L_0887765C;
    }
L_0887765C:
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[9]) < 2 ? 1u : 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.set_gpr(3, ctx.gpr[9] & 3u);
      if (branch_taken) {
          goto L_08877788;
      }
      goto L_0887766C;
    }
L_0887766C:
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, ctx.gpr[8] << 1u);
    ctx.set_gpr(4, ctx.gpr[13] << 8u);
    ctx.set_gpr(3, ctx.gpr[5] | ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[12] + ctx.gpr[11]);
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(15, ctx.gpr[12] + ctx.gpr[6]);
    ctx.set_gpr(17, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(24, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(14, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    ctx.set_gpr(25, ctx.gpr[17] << 8u);
    ctx.set_gpr(10, ctx.gpr[24] | ctx.gpr[25]);
    rt.memory().aot_store16(ctx.gpr[15] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[10]));
    { const bool branch_taken = ctx.gpr[14] == 0u;
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088775C0;
      }
      goto L_088776B0;
    }
L_088776B0:
    ctx.set_gpr(14, ctx.gpr[8] << 1u);
    ctx.set_gpr(11, ctx.gpr[14] + ctx.gpr[11]);
    ctx.set_gpr(10, ctx.gpr[14] + ctx.gpr[6]);
    goto L_088776BC;
L_088776BC:
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(17, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[13] << 8u);
    ctx.set_gpr(12, ctx.gpr[17] | ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[12]));
    ctx.set_gpr(17, ctx.gpr[7] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(12, ctx.gpr[7] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(25, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(24, ctx.gpr[25] << 8u);
    ctx.set_gpr(15, ctx.gpr[6] | ctx.gpr[24]);
    rt.memory().aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[15]));
    ctx.set_gpr(15, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    ctx.set_gpr(14, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[14] << 8u);
    ctx.set_gpr(4, ctx.gpr[13] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.set_gpr(25, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(24, ctx.gpr[25] << 8u);
    ctx.set_gpr(14, ctx.gpr[6] | ctx.gpr[24]);
    rt.memory().aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[14]));
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[13] << 8u);
    ctx.set_gpr(5, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.set_gpr(25, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(24, ctx.gpr[25] << 8u);
    ctx.set_gpr(14, ctx.gpr[6] | ctx.gpr[24]);
    rt.memory().aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[14]));
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(3, ctx.gpr[13] << 8u);
    ctx.set_gpr(5, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(17, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(24, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(25, ctx.gpr[17] << 8u);
    ctx.set_gpr(6, ctx.gpr[24] | ctx.gpr[25]);
    rt.memory().aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[6]));
    { const bool branch_taken = ctx.gpr[15] != 0u;
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088776BC;
      }
      goto L_08877780;
    }
L_08877780:
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(14)));
    goto L_088775C4;
L_08877788:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(24, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_088776B0;
      }
      goto L_08877790;
    }
L_08877790:
    { const bool branch_taken = ctx.gpr[24] != 0u;
    ctx.set_gpr(25, static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0887766C;
      }
      goto L_08877798;
    }
L_08877798:
    if (ctx.gpr[25] != 0u) {
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(2)));
        goto L_088777D4;
    }
    goto L_088777A0;
L_088777A0:
    ctx.set_gpr(14, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(13, ctx.gpr[14] << 8u);
    ctx.set_gpr(8, ctx.gpr[12] | ctx.gpr[13]);
    rt.memory().aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(3, ctx.gpr[5] << 8u);
    ctx.set_gpr(17, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[17]));
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(2)));
    goto L_088777D4;
L_088777D4:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, ctx.gpr[8] << 1u);
    ctx.set_gpr(4, ctx.gpr[13] << 8u);
    ctx.set_gpr(3, ctx.gpr[5] | ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[12] + ctx.gpr[11]);
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(15, ctx.gpr[12] + ctx.gpr[6]);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(24, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(25, ctx.gpr[17] << 8u);
    ctx.set_gpr(10, ctx.gpr[24] | ctx.gpr[25]);
    rt.memory().aot_store16(ctx.gpr[15] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[10]));
    goto L_0887766C;
L_08877810:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[17]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(12, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(13, ctx.gpr[16] + static_cast<std::uint32_t>(156));
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(8, ctx.gpr[16] + static_cast<std::uint32_t>(13));
    ctx.set_gpr(9, ctx.gpr[16] + static_cast<std::uint32_t>(15));
    ctx.set_gpr(10, ctx.gpr[16] + static_cast<std::uint32_t>(14));
    ctx.set_gpr(11, ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[12]);
    ctx.set_gpr(31, 0x08877868u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[13]);
    goto L_088769A4;
L_08877868:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_088778D0;
      }
      goto L_08877870;
    }
L_08877870:
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(14))))));
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(15))))));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(152), static_cast<std::uint16_t>(ctx.gpr[17]));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(0u));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(0u));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(140), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(136), 0u);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    goto L_088778D0;
L_088778D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088778E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(2, 2225u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(12124));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08877908u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08877908u) goto L_08877908;
    return;
L_08877908:
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[3] + 0u);
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(12132));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08877938;
      }
      goto L_08877920;
    }
L_08877920:
    ctx.set_gpr(3, 0u + 0u);
    goto L_08877924;
L_08877924:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08877938:
    ctx.set_gpr(31, 0x08877940u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08877940u) goto L_08877940;
    return;
L_08877940:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08877924;
      }
      goto L_08877948;
    }
L_08877948:
    ctx.set_gpr(3, 0u + 0u);
    goto L_08877924;
L_08877950:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(156))))));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088779A4;
      }
      goto L_08877968;
    }
L_08877968:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08877994;
      }
      goto L_08877970;
    }
L_08877970:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08877984;
      }
      goto L_08877978;
    }
L_08877978:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0887797C;
L_0887797C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08877984:
    ctx.set_gpr(31, 0x0887798Cu);
    // nop
    goto L_08876DDC;
L_0887798C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0887797C;
L_08877994:
    ctx.set_gpr(31, 0x0887799Cu);
    // nop
    goto L_088770A0;
L_0887799C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0887797C;
L_088779A4:
    ctx.set_gpr(31, 0x088779ACu);
    // nop
    goto L_08877428;
L_088779AC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0887797C;
L_088779B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(2, 32767u << 16u);
    ctx.set_gpr(18, ctx.gpr[5] + static_cast<std::uint32_t>(-3));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.set_gpr(21, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.set_gpr(20, ctx.gpr[2] | 65535u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08877A98;
      }
      goto L_088779F0;
    }
L_088779F0:
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    ctx.set_gpr(19, 2225u << 16u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(3, ctx.gpr[18] & 3u);
      if (branch_taken) {
          goto L_08877AE4;
      }
      goto L_08877A00;
    }
L_08877A00:
    ctx.set_gpr(4, ctx.gpr[17] + ctx.gpr[16]);
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(12124));
    ctx.set_gpr(31, 0x08877A10u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08877A10u) goto L_08877A10;
    return;
L_08877A10:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(20, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[16]) ? ctx.gpr[20] : ctx.gpr[16]);
        goto L_08877A98;
    }
    goto L_08877A18;
L_08877A18:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(9, 32767u << 16u);
      if (branch_taken) {
          goto L_08877A9C;
      }
      goto L_08877A28;
    }
L_08877A28:
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(12124));
    goto L_08877A2C;
L_08877A2C:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08877A38u);
    ctx.set_gpr(4, ctx.gpr[17] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08877A38u) goto L_08877A38;
    return;
L_08877A38:
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(12124));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08877ADC;
      }
      goto L_08877A44;
    }
L_08877A44:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08877A50u);
    ctx.set_gpr(4, ctx.gpr[17] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08877A50u) goto L_08877A50;
    return;
L_08877A50:
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(12124));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08877ADC;
      }
      goto L_08877A5C;
    }
L_08877A5C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08877A68u);
    ctx.set_gpr(4, ctx.gpr[17] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08877A68u) goto L_08877A68;
    return;
L_08877A68:
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(12124));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08877ADC;
      }
      goto L_08877A74;
    }
L_08877A74:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08877A80u);
    ctx.set_gpr(4, ctx.gpr[17] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08877A80u) goto L_08877A80;
    return;
L_08877A80:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(20, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[16]) ? ctx.gpr[20] : ctx.gpr[16]);
        goto L_08877A98;
    }
    goto L_08877A88;
L_08877A88:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(12124));
      if (branch_taken) {
          goto L_08877A2C;
      }
      goto L_08877A98;
    }
L_08877A98:
    ctx.set_gpr(9, 32767u << 16u);
    goto L_08877A9C;
L_08877A9C:
    ctx.set_gpr(8, ctx.gpr[9] | 65535u);
    if (ctx.gpr[20] == ctx.gpr[8]) {
    rt.memory().aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
        goto L_08877AD4;
    }
    goto L_08877AA8;
L_08877AA8:
    ctx.set_gpr(2, 0u + 0u);
    rt.memory().aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[20]));
    goto L_08877AB0;
L_08877AB0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
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
L_08877AD4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08877AB0;
L_08877ADC:
    ctx.set_gpr(20, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[16]) ? ctx.gpr[20] : ctx.gpr[16]);
    goto L_08877A98;
L_08877AE4:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(12124));
      if (branch_taken) {
          goto L_08877A2C;
      }
      goto L_08877AEC;
    }
L_08877AEC:
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08877A00;
      }
      goto L_08877AF8;
    }
L_08877AF8:
    if (ctx.gpr[7] != 0u) {
    ctx.set_gpr(4, ctx.gpr[17] + ctx.gpr[16]);
        goto L_08877B20;
    }
    goto L_08877B00;
L_08877B00:
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(12124));
    ctx.set_gpr(31, 0x08877B0Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08877B0Cu) goto L_08877B0C;
    return;
L_08877B0C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(20, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[16]) ? ctx.gpr[20] : ctx.gpr[16]);
        goto L_08877A98;
    }
    goto L_08877B14;
L_08877B14:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + ctx.gpr[16]);
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(12124));
    goto L_08877B20;
L_08877B20:
    ctx.set_gpr(31, 0x08877B28u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x08877B28u) goto L_08877B28;
    return;
L_08877B28:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(20, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[16]) ? ctx.gpr[20] : ctx.gpr[16]);
        goto L_08877A98;
    }
    goto L_08877B30;
L_08877B30:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08877A00;
L_08877B38:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26808)));
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-26808), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26808)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    ctx.set_gpr(6, 2245u << 16u);
      if (branch_taken) {
          goto L_08877B60;
      }
      goto L_08877B58;
    }
L_08877B58:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08877B60:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-26816), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08877B68:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26808)));
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-26808), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26808)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(3, 2245u << 16u);
      if (branch_taken) {
          goto L_08877B88;
      }
      goto L_08877B84;
    }
L_08877B84:
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26816), 0u);
    goto L_08877B88;
L_08877B88:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08877B90:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08877BA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 424u, 0x088A2324u>(ctx, &aot_mem) && ctx.pc == 0x08877BA0u) goto L_08877BA0;
    return;
L_08877BA0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08877BAC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08877BBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 431u, 0x088A237Cu>(ctx, &aot_mem) && ctx.pc == 0x08877BBCu) goto L_08877BBC;
    return;
L_08877BBC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08877BC8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08877BD0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08877BD8:
    ctx.set_gpr(2, 32767u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(9, ctx.gpr[2] | 65535u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(128));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.set_gpr(7, 0u + 0u);
      if (branch_taken) {
          goto L_08877C78;
      }
      goto L_08877BF0;
    }
L_08877BF0:
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.set_gpr(3, ctx.gpr[5] & 7u);
      if (branch_taken) {
          goto L_08877CA4;
      }
      goto L_08877BFC;
    }
L_08877BFC:
    ctx.set_gpr(25, ctx.gpr[4] + ctx.gpr[7]);
    ctx.set_gpr(24, rt.memory().aot_load16(ctx.gpr[25] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[24] == ctx.gpr[8]) {
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[7]) ? ctx.gpr[9] : ctx.gpr[7]);
        goto L_08877C78;
    }
    goto L_08877C0C;
L_08877C0C:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[10] == 0u) {
    ctx.set_gpr(5, 32767u << 16u);
        goto L_08877C7C;
    }
    goto L_08877C1C;
L_08877C1C:
    ctx.set_gpr(12, ctx.gpr[4] + ctx.gpr[7]);
    goto L_08877C20;
L_08877C20:
    ctx.set_gpr(11, rt.memory().aot_load16(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[11] == ctx.gpr[8]) {
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[7]) ? ctx.gpr[9] : ctx.gpr[7]);
        goto L_08877C78;
    }
    goto L_08877C2C;
L_08877C2C:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[7]);
    ctx.set_gpr(13, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[13] == ctx.gpr[8]) {
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[7]) ? ctx.gpr[9] : ctx.gpr[7]);
        goto L_08877C78;
    }
    goto L_08877C40;
L_08877C40:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(15, ctx.gpr[4] + ctx.gpr[7]);
    ctx.set_gpr(14, rt.memory().aot_load16(ctx.gpr[15] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[14] == ctx.gpr[8]) {
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[7]) ? ctx.gpr[9] : ctx.gpr[7]);
        goto L_08877C78;
    }
    goto L_08877C54;
L_08877C54:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(25, ctx.gpr[4] + ctx.gpr[7]);
    ctx.set_gpr(24, rt.memory().aot_load16(ctx.gpr[25] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[24] == ctx.gpr[8]) {
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[7]) ? ctx.gpr[9] : ctx.gpr[7]);
        goto L_08877C78;
    }
    goto L_08877C68;
L_08877C68:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.set_gpr(12, ctx.gpr[4] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08877C20;
      }
      goto L_08877C78;
    }
L_08877C78:
    ctx.set_gpr(5, 32767u << 16u);
    goto L_08877C7C;
L_08877C7C:
    ctx.set_gpr(4, ctx.gpr[5] | 65535u);
    if (ctx.gpr[9] == ctx.gpr[4]) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
        goto L_08877C94;
    }
    goto L_08877C88;
L_08877C88:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08877C94:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08877CA4:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(11, static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08877C1C;
      }
      goto L_08877CAC;
    }
L_08877CAC:
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.set_gpr(12, static_cast<std::int32_t>(ctx.gpr[3]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08877BFC;
      }
      goto L_08877CB4;
    }
L_08877CB4:
    { const bool branch_taken = ctx.gpr[12] != 0u;
    ctx.set_gpr(15, ctx.gpr[4] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08877CDC;
      }
      goto L_08877CBC;
    }
L_08877CBC:
    ctx.set_gpr(13, static_cast<std::int32_t>(ctx.gpr[3]) < 7 ? 1u : 0u);
    if (ctx.gpr[13] == 0u) {
    ctx.set_gpr(12, ctx.gpr[4] + ctx.gpr[7]);
        goto L_08877C20;
    }
    goto L_08877CC8;
L_08877CC8:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[3] == ctx.gpr[8]) {
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[7]) ? ctx.gpr[9] : ctx.gpr[7]);
        goto L_08877C78;
    }
    goto L_08877CD4;
L_08877CD4:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(15, ctx.gpr[4] + ctx.gpr[7]);
    goto L_08877CDC;
L_08877CDC:
    ctx.set_gpr(14, rt.memory().aot_load16(ctx.gpr[15] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[14] == ctx.gpr[8]) {
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[7]) ? ctx.gpr[9] : ctx.gpr[7]);
        goto L_08877C78;
    }
    goto L_08877CE8;
L_08877CE8:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2));
    goto L_08877BFC;
L_08877CF0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < 16 ? 1u : 0u);
    ctx.set_gpr(12, ctx.gpr[4] + 0u);
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(13, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08877DC8;
      }
      goto L_08877D04;
    }
L_08877D04:
    ctx.set_gpr(24, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(15, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(4, 0u | 32768u);
    ctx.set_gpr(5, ctx.gpr[24] << 8u);
    ctx.set_gpr(3, ctx.gpr[5] | ctx.gpr[15]);
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[4];
    ctx.set_gpr(13, 0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08877DC8;
      }
      goto L_08877D20;
    }
L_08877D20:
    ctx.set_gpr(15, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(5, ctx.gpr[15] << 8u);
    ctx.set_gpr(25, ctx.gpr[4] | ctx.gpr[5]);
    ctx.set_gpr(13, ctx.gpr[25] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[13]));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(5)));
    rt.memory().aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(24, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(6)));
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[24]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(7)));
    rt.memory().aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(15, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(9)));
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(10)));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(25, ctx.gpr[15] << 24u);
    ctx.set_gpr(4, ctx.gpr[5] << 16u);
    ctx.set_gpr(7, ctx.gpr[25] | ctx.gpr[4]);
    ctx.set_gpr(10, ctx.gpr[13] << 8u);
    ctx.set_gpr(24, ctx.gpr[7] | ctx.gpr[10]);
    ctx.set_gpr(3, ctx.gpr[24] | ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(15, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(13)));
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(14)));
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(15)));
    ctx.set_gpr(25, ctx.gpr[15] << 24u);
    ctx.set_gpr(4, ctx.gpr[5] << 16u);
    ctx.set_gpr(11, ctx.gpr[25] | ctx.gpr[4]);
    ctx.set_gpr(12, ctx.gpr[13] << 8u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[11] | ctx.gpr[12]);
    ctx.set_gpr(2, ctx.gpr[7] | ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    if (ctx.gpr[8] != 0u) {
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
        goto L_08877DD0;
    }
    goto L_08877DC0;
L_08877DC0:
    rt.memory().aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(0), 0u);
    goto L_08877DC4;
L_08877DC4:
    ctx.set_gpr(13, 0u + 0u);
    goto L_08877DC8;
L_08877DC8:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[13] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08877DD0:
    if (ctx.gpr[8] == 0u) {
    ctx.pc = 0x08877DD4u; rt.stop("Allegrex BREAK code 7 at 0x08877DD4"); return;
        goto L_08877DD8;
    }
    goto L_08877DD8;
L_08877DD8:
    ctx.set_gpr(11, ctx.gpr[12] << 3u);
    ctx.set_gpr(9, ctx.gpr[11] + static_cast<std::uint32_t>(-16));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[9]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[8]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(8, ctx.lo);
    rt.memory().aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    goto L_08877DC4;
L_08877DF0:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[5]) < 20 ? 1u : 0u);
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(8, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08877E20;
      }
      goto L_08877E00;
    }
L_08877E00:
    ctx.set_gpr(12, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, 0u | 32768u);
    ctx.set_gpr(11, ctx.gpr[12] << 8u);
    ctx.set_gpr(10, ctx.gpr[12] >> 8u);
    ctx.set_gpr(9, ctx.gpr[10] | ctx.gpr[11]);
    ctx.set_gpr(3, ctx.gpr[9] & 65535u);
    if (ctx.gpr[3] == ctx.gpr[4]) {
    ctx.set_gpr(24, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(2))))));
        goto L_08877E30;
    }
    goto L_08877E20;
L_08877E20:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
    goto L_08877E24;
L_08877E24:
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    goto L_08877E28;
L_08877E28:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08877E30:
    ctx.set_gpr(15, ctx.gpr[24] << 8u);
    ctx.set_gpr(14, (ctx.gpr[24] >> 8u) & 0x000000FFu);
    ctx.set_gpr(13, ctx.gpr[14] | ctx.gpr[15]);
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[13]))));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[9]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08877E24;
      }
      goto L_08877E4C;
    }
L_08877E4C:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(18)));
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(19)));
    ctx.set_gpr(25, ctx.gpr[4] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[10]));
    { const bool branch_taken = ctx.gpr[25] != 0u;
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08877ED4;
      }
      goto L_08877E64;
    }
L_08877E64:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[5]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08877E24;
      }
      goto L_08877E70;
    }
L_08877E70:
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[9]) < 28 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08877E28;
      }
      goto L_08877E7C;
    }
L_08877E7C:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(9, ctx.gpr[3] << 8u);
    ctx.set_gpr(5, ctx.gpr[3] >> 8u);
    ctx.set_gpr(10, ctx.gpr[5] | ctx.gpr[9]);
    rt.memory().aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(26)));
    ctx.set_gpr(4, ctx.gpr[2] << 8u);
    ctx.set_gpr(25, ctx.gpr[2] >> 8u);
    ctx.set_gpr(24, ctx.gpr[25] | ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[24]));
    ctx.set_gpr(15, rt.memory().aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(14, ctx.gpr[15] << 8u);
    ctx.set_gpr(13, ctx.gpr[15] >> 8u);
    ctx.set_gpr(12, ctx.gpr[13] | ctx.gpr[14]);
    rt.memory().aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[12]));
    ctx.set_gpr(11, rt.memory().aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(30)));
    ctx.set_gpr(9, ctx.gpr[11] << 8u);
    ctx.set_gpr(8, ctx.gpr[11] >> 8u);
    ctx.set_gpr(6, ctx.gpr[8] | ctx.gpr[9]);
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[6]));
    goto L_08877ECC;
L_08877ECC:
    ctx.set_gpr(4, 0u + 0u);
    goto L_08877E24;
L_08877ED4:
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(0u));
    rt.memory().aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(0u));
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    rt.memory().aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    goto L_08877ECC;
L_08877EE8:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[5]) < 20 ? 1u : 0u);
    ctx.set_gpr(13, ctx.gpr[4] + 0u);
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(12, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, ctx.gpr[8] + 0u);
    ctx.set_gpr(14, ctx.gpr[9] + 0u);
    ctx.set_gpr(24, ctx.gpr[10] + 0u);
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08877F30;
      }
      goto L_08877F10;
    }
L_08877F10:
    ctx.set_gpr(15, rt.memory().aot_load16(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u | 32768u);
    ctx.set_gpr(10, ctx.gpr[15] << 8u);
    ctx.set_gpr(9, ctx.gpr[15] >> 8u);
    ctx.set_gpr(8, ctx.gpr[9] | ctx.gpr[10]);
    ctx.set_gpr(3, ctx.gpr[8] & 65535u);
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[5];
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08877F40;
      }
      goto L_08877F30;
    }
L_08877F30:
    ctx.set_gpr(12, ctx.gpr[4] + 0u);
    goto L_08877F34;
L_08877F34:
    ctx.set_gpr(2, ctx.gpr[12] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08877F40:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[13] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(8, ctx.gpr[3] << 8u);
    ctx.set_gpr(5, (ctx.gpr[3] >> 8u) & 0x000000FFu);
    ctx.set_gpr(4, ctx.gpr[5] | ctx.gpr[8]);
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[4]))));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[10]) < 16 ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(18)));
        goto L_08877F68;
    }
    goto L_08877F60;
L_08877F60:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
    goto L_08877F30;
L_08877F68:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(19)));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(48));
    ctx.set_gpr(15, ctx.gpr[4] ^ 4u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(60));
    if (ctx.gpr[15] == 0u) ctx.set_gpr(8, ctx.gpr[2]);
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[12]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(12, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08877F34;
      }
      goto L_08877F90;
    }
L_08877F90:
    ctx.set_gpr(5, ctx.gpr[8] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08877F34;
      }
      goto L_08877FA0;
    }
L_08877FA0:
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    if (ctx.gpr[15] == 0u) ctx.set_gpr(10, ctx.gpr[9]);
    ctx.set_gpr(12, ctx.gpr[10] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[13] + ctx.gpr[10]);
    ctx.set_gpr(2, ctx.gpr[13] + ctx.gpr[12]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(15, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(9, ctx.gpr[12] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(8, ctx.gpr[3] << 8u);
    ctx.set_gpr(4, ctx.gpr[15] << 8u);
    ctx.set_gpr(10, (ctx.gpr[3] >> 8u) & 0x000000FFu);
    ctx.set_gpr(5, (ctx.gpr[15] >> 8u) & 0x000000FFu);
    ctx.set_gpr(15, ctx.gpr[5] | ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[10] | ctx.gpr[8]);
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[4]))));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[15]))));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(12, 0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[6];
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[15]));
      if (branch_taken) {
          goto L_08877F34;
      }
      goto L_08877FF4;
    }
L_08877FF4:
    ctx.set_gpr(10, ctx.gpr[9] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[10] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(15, ctx.gpr[13] + ctx.gpr[4]);
    ctx.pc = 0x08878000u; return;
}

void recomp_unit_0028(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0028_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_28(Runtime &runtime) {
    runtime.register_generated_unit(28u, 0x08874000u, 16384u, &recomp_unit_0028, &recomp_unit_0028_entry);
    runtime.register_function(0x08874000u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874014u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874050u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874070u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874084u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874088u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887409Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088740A4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088740ACu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088741D4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887422Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874230u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874234u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887424Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874254u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874260u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874270u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887431Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874334u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887433Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874344u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874348u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874350u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874358u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874360u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874368u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874370u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088743E4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874440u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088744E4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088744F0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088744FCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874500u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874510u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874514u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874518u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088745D0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088745D8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088745E0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088745F0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088745FCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874608u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874610u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874618u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874624u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874640u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874658u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874660u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887467Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887468Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088746A0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088746E8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088746ECu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088747DCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088747E8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088747FCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874844u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874848u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874938u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874944u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874958u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088749A0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088749A4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874A94u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874AA0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874AA8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874AB0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874AB8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874AC0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874B00u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874B40u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874B48u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874B50u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874B58u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874B98u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874BD8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874BE0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874BE8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874BF0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874C30u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874C70u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874CB0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874CB8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874CC8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874CD8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874CE8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874CF8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874D08u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874D18u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874D28u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874D38u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874D44u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874D60u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874D6Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874D74u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874DCCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874DF0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874DF8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874E00u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874E14u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874E20u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874E30u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874E34u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874E44u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874E74u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874E84u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874EC0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874EC8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874ED8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874EE4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874F44u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874F4Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874F70u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874F78u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874F88u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874F8Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874FC0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874FE4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874FECu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08874FF4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875004u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887500Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875014u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875024u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887502Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887504Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875054u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875068u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875078u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875080u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887509Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088750A4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088750B4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088750C4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088750F0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887510Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875114u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875124u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875180u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875188u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875190u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887519Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088751A0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088751BCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088751C4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088751CCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088751D8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088751E0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088751E8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088751F0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088751FCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875204u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887520Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875214u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875224u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887522Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875234u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887523Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875270u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887527Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875284u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875290u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887529Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088752C4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088752D8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088752DCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088752F4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088752F8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875304u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875318u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875330u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875338u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887535Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088753E0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088753F4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088753FCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875410u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887542Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875434u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875444u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875468u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875470u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088754B4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088754E8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088754F8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875534u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875540u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875554u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875564u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887557Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875584u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088755B4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088755B8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088755E4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088755ECu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088755F4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088755FCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875614u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875628u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887563Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887564Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875664u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887566Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887569Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088756B8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088756C8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088756E0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088756E8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875718u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875720u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875728u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875730u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875738u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875750u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875764u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887576Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875774u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887577Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875794u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088757A8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088757B4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088757C0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088757D0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088757F4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875848u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875878u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088758BCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088758C4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875960u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875978u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875980u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875988u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875990u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088759A8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088759ACu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088759B8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088759C0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088759C8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088759D0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088759E0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088759E8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088759F4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875A00u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875A08u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875A10u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875A1Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875A24u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875A2Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875A34u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875A3Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875A44u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875A4Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875A54u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875A5Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875A64u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875A68u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875A70u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875A78u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875A80u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875A88u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875A90u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875AA0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875AA8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875AC8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875AE0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875AF0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875B10u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875B24u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875B34u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875B54u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875B6Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875B98u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875BACu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875BD0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875BE0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875BFCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875C0Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875C14u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875C1Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875C24u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875C2Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875C38u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875C4Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875C58u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875C6Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875C9Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875CACu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875CB8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875CBCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875CC4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875CDCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875CF0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875D10u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875D20u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875D28u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875D34u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875D3Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08875D44u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876204u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876220u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876230u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887623Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876240u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876248u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887625Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876274u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876280u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876290u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088762A0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088762A8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088762B0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088762BCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088762C4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088762CCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088762E0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088762E8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088762F0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088762F8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876300u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876314u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887631Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887632Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876338u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876340u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876348u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876350u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876358u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876360u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876368u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876370u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876378u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876380u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876388u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876390u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876398u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088763A0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088764D4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876518u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876520u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876528u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887654Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876554u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876558u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887658Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876594u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088765C4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088765E4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876608u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876614u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876628u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876638u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876644u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887664Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876654u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887665Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876670u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088766A8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088766B0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088766BCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088766C0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088766DCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088766E0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088766E8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887671Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876720u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876748u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876750u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887675Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876768u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876778u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876790u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088767A8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088767B8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088767E4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088767F0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876848u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876850u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876858u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876860u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876868u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876884u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088768A8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088768FCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876904u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876968u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887697Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876994u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088769A4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088769FCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876A0Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876A1Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876A24u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876A34u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876A38u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876A44u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876A4Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876A5Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876A64u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876A74u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876A7Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876A8Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876A94u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876AA4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876AACu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876B10u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876B18u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876B28u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876B38u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876B40u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876B50u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876B54u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876B60u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876B68u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876B78u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876B80u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876B90u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876B98u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876BA8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876BB0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876BC0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876BC8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876C40u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876C64u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876C6Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876C74u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876C80u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876C8Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876CA4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876CACu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876CB0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876CB4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876CE0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876D10u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876D28u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876D30u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876D3Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876D48u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876D50u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876D58u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876D60u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876D6Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876D74u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876D78u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876D84u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876D8Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876D94u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876D9Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876DA4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876DACu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876DB4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876DBCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876DC0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876DCCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876DD4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876DDCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876E00u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876E0Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876E20u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876E30u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876E3Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876E44u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876E4Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876E54u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876E68u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876EA0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876EA8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876EB4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876EB8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876ED4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876ED8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876EE0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876F14u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876F18u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876F40u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876F48u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876F54u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876F60u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876F70u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876F88u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876FA0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876FB0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876FDCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08876FE8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877040u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877048u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877050u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877058u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877060u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887707Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088770A0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088770C4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088770D0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088770E4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088770F4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877100u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877108u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877110u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877118u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887712Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877164u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887716Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887717Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877180u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088771A0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088771A4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877204u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877208u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887720Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887722Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877234u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887723Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877248u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877264u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877280u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877298u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088772A4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088772E0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088772ECu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088773ACu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088773B4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088773BCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088773C4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088773CCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088773F4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877428u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887744Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877458u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887746Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887747Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877488u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877490u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877498u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088774A0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088774B4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088774ECu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088774F4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877500u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887752Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877534u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088775C0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088775C4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088775ECu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088775F4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088775FCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877604u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877620u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877644u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887765Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887766Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088776B0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088776BCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877780u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877788u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877790u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877798u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088777A0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088777D4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877810u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877868u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877870u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088778D0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088778E8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877908u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877920u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877924u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877938u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877940u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877948u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877950u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877968u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877970u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877978u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887797Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877984u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887798Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877994u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x0887799Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088779A4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088779ACu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088779B4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x088779F0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877A00u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877A10u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877A18u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877A28u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877A2Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877A38u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877A44u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877A50u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877A5Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877A68u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877A74u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877A80u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877A88u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877A98u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877A9Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877AA8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877AB0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877AD4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877ADCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877AE4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877AECu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877AF8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877B00u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877B0Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877B14u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877B20u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877B28u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877B30u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877B38u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877B58u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877B60u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877B68u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877B84u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877B88u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877B90u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877BA0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877BACu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877BBCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877BC8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877BD0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877BD8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877BF0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877BFCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877C0Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877C1Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877C20u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877C2Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877C40u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877C54u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877C68u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877C78u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877C7Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877C88u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877C94u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877CA4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877CACu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877CB4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877CBCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877CC8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877CD4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877CDCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877CE8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877CF0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877D04u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877D20u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877DC0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877DC4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877DC8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877DD0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877DD8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877DF0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877E00u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877E20u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877E24u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877E28u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877E30u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877E4Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877E64u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877E70u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877E7Cu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877ECCu, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877ED4u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877EE8u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877F10u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877F30u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877F34u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877F40u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877F60u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877F68u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877F90u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877FA0u, &recomp_unit_0028, "recomp_unit_0028");
    runtime.register_function(0x08877FF4u, &recomp_unit_0028, "recomp_unit_0028");
}
} // namespace psprecomp
