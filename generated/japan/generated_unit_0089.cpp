#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0089[4095] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 8, 0,
    0, 0, 0, 9, 0, 0, 10, 11, 0, 0, 12, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 15, 16, 0, 0, 0,
    17, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 22, 23, 0, 0, 0, 24, 0, 25, 0, 0, 26, 27, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 31, 0, 0, 32, 33, 0,
    0, 0, 34, 0, 0, 35, 0, 36, 0, 37, 0, 0, 38, 39, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 44, 0, 0, 45, 46, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    48, 0, 0, 49, 50, 0, 0, 0, 0, 0, 0, 51, 0, 0, 52, 53, 0, 0, 0, 0, 0, 0, 54, 0, 0, 55, 56, 0, 0, 0, 0, 0,
    0, 57, 0, 0, 58, 59, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 62, 63, 0, 0, 0, 0, 64, 0, 0, 65, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 66, 0, 0, 67, 68, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 72, 0, 0, 73, 0, 0, 74, 75, 0, 0, 0, 76, 0, 0, 77, 78, 0, 0, 0, 0, 0, 0, 79, 0, 0, 80, 81,
    0, 0, 0, 0, 0, 0, 82, 0, 0, 83, 84, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0,
    0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 94, 95,
    0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 97, 0, 98, 0, 0, 0, 0, 99, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 115, 116, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 121, 122,
    0, 0, 0, 0, 0, 0, 123, 0, 0, 124, 125, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 127, 128, 0, 0, 0, 0, 0, 0, 0, 129, 0,
    0, 130, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 135, 136, 0, 0, 137, 0, 138, 0, 0, 139, 140, 0,
    141, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 145, 0, 0, 0, 146, 0, 0, 0, 0, 0,
    0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 150, 0, 151, 0, 0, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0,
    0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 159, 160, 0, 0,
    0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 165, 0, 0, 166, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 174, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0, 177, 178, 0, 0, 0, 0, 0, 0,
    179, 0, 0, 180, 181, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 190, 0, 0, 191, 192, 0, 0, 193, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 195, 0,
    0, 0, 0, 196, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0,
    0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 212, 213, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 218, 219, 0, 0, 0, 0, 0,
    0, 220, 0, 0, 221, 222, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 224, 225, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 227, 228, 0, 0,
    0, 0, 229, 230, 0, 0, 231, 0, 0, 0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 234, 235, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 240, 0, 0, 241, 0, 0, 0,
    242, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 246, 0, 247, 0, 0, 0, 0, 248, 0, 0,
    0, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 254, 0,
    0, 0, 255, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 262, 0, 263, 0, 0, 0, 0, 264, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 269, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 276, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 280, 281, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 286, 287, 0, 0, 288, 0, 0, 289, 0, 0, 290, 0, 0, 291, 0, 292,
    0, 293, 294, 0, 0, 0, 0, 295, 0, 0, 296, 0, 297, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 300, 0, 301, 0, 0, 0, 0, 302, 0, 303, 0, 0, 0, 0, 304, 0, 0, 305, 0, 0, 306, 0, 307, 308, 0, 0, 0, 0, 309, 0,
    310, 0, 0, 0, 0, 0, 311, 0, 0, 312, 0, 313, 314, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 316, 0, 317, 0, 0, 0, 318, 0,
    0, 319, 0, 320, 321, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 325, 0, 0, 0, 326, 0, 0,
    0, 0, 327, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 329, 0, 330, 0, 0, 331, 0, 332, 0, 0, 0, 0, 0, 333, 0, 0, 0,
    0, 0, 0, 334, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 337, 0, 0, 0, 0, 338, 0, 0, 0, 0, 339, 0,
    0, 340, 0, 0, 0, 0, 341, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 343, 0, 344, 0, 0, 0, 0, 345, 0, 0, 346, 0, 0, 0, 347,
    0, 0, 0, 348, 0, 0, 349, 0, 350, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 354,
    0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 357, 0, 0, 0, 0, 358, 0, 359, 0, 0, 0, 0, 360, 0, 0, 0, 361,
    0, 0, 0, 362, 0, 0, 363, 0, 364, 0, 0, 0, 0, 0, 365, 0, 0, 366, 0, 0, 0, 367, 0, 368, 0, 0, 0, 0, 369, 0, 0, 0,
    0, 0, 0, 0, 370, 0, 0, 0, 0, 371, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 374, 0, 0, 0, 0, 375, 0, 0, 0, 0, 376, 0, 0, 377, 0, 0, 0, 0, 0, 0, 378, 379, 0, 0, 0, 0, 0, 0, 0,
    0, 380, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 385, 0, 0, 386, 387, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 389, 0, 0, 0, 390, 391, 0, 392, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0,
    0, 0, 0, 396, 0, 0, 397, 398, 0, 0, 0, 399, 0, 0, 400, 401, 0, 0, 0, 0, 0, 0, 402, 0, 0, 403, 404, 0, 0, 0, 0, 0,
    0, 405, 0, 0, 406, 407, 0, 408, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 411, 0, 0, 412, 413,
    0, 0, 0, 414, 0, 0, 415, 416, 0, 0, 0, 0, 0, 0, 417, 0, 0, 418, 419, 0, 0, 0, 0, 0, 0, 420, 0, 0, 421, 422, 0, 0,
    423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0,
    0, 0, 0, 425, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 430, 0, 0, 0, 0, 0, 0, 0, 0,
    431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 433, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 435, 436, 0, 0, 0, 0, 0, 0, 437, 0, 0, 438, 439, 0, 0, 0, 0,
    0, 0, 440, 0, 0, 441, 442, 0, 0, 0, 0, 0, 0, 443, 0, 0, 444, 445, 0, 0, 0, 0, 0, 0, 446, 0, 0, 447, 448, 0, 0, 0,
    0, 449, 0, 0, 0, 450, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 453, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 458,
    0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 461, 0,
    0, 0, 462, 0, 0, 0, 463, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 467, 0, 0, 0, 0, 468, 0, 469, 0, 0, 470, 0, 0, 0, 471, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 475, 0, 0, 0, 0, 476, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 478, 0, 0, 479, 0, 480, 0, 0, 481, 0, 0, 0, 482, 0, 0, 0, 0, 0, 483, 0, 0, 484, 485, 0, 0, 0, 0, 0,
    0, 0, 486, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 489, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 492, 493, 0, 0, 0, 494, 0, 0, 495, 496,
    0, 0, 0, 0, 0, 0, 497, 0, 0, 498, 499, 0, 0, 0, 0, 0, 0, 500, 0, 0, 501, 502, 0, 503, 0, 0, 504, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 506, 0, 0, 507, 508, 0, 0, 0, 509, 0, 0, 510, 511, 0, 0, 0, 0, 0, 0, 512,
    0, 0, 513, 514, 0, 0, 0, 0, 0, 0, 515, 0, 0, 516, 517, 0, 518, 0, 0, 0, 0, 0, 519, 0, 0, 520, 521, 0, 0, 0, 522, 0,
    0, 523, 524, 0, 0, 0, 0, 0, 0, 525, 0, 0, 526, 527, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 529, 0, 0, 0, 0, 530,
    0, 0, 0, 531, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 535,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 539, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 541, 542, 0, 0, 0, 0, 0, 0, 543, 0, 0, 544, 545, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 546, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 549, 0, 0, 0, 0,
    550, 0, 0, 0, 0, 551, 0, 0, 0, 552, 0, 0, 0, 553, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    555, 0, 0, 0, 0, 556, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 557, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 559, 0, 0,
    0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 561, 0, 0, 562, 0, 0, 0, 563, 0, 564, 0, 0, 565, 0, 0, 0, 566, 0, 0, 567,
};
void recomp_unit_0089_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08968000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0089[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08968000;
    case 2u: goto L_08968020;
    case 3u: goto L_08968038;
    case 4u: goto L_0896805C;
    case 5u: goto L_0896806C;
    case 6u: goto L_089680A0;
    case 7u: goto L_089680E4;
    case 8u: goto L_089680F8;
    case 9u: goto L_0896810C;
    case 10u: goto L_08968118;
    case 11u: goto L_0896811C;
    case 12u: goto L_08968128;
    case 13u: goto L_08968134;
    case 14u: goto L_08968160;
    case 15u: goto L_0896816C;
    case 16u: goto L_08968170;
    case 17u: goto L_08968180;
    case 18u: goto L_08968194;
    case 19u: goto L_089681A0;
    case 20u: goto L_0896820C;
    case 21u: goto L_08968238;
    case 22u: goto L_08968244;
    case 23u: goto L_08968248;
    case 24u: goto L_08968258;
    case 25u: goto L_08968260;
    case 26u: goto L_0896826C;
    case 27u: goto L_08968270;
    case 28u: goto L_0896829C;
    case 29u: goto L_089682AC;
    case 30u: goto L_089682DC;
    case 31u: goto L_089682E8;
    case 32u: goto L_089682F4;
    case 33u: goto L_089682F8;
    case 34u: goto L_08968308;
    case 35u: goto L_08968314;
    case 36u: goto L_0896831C;
    case 37u: goto L_08968324;
    case 38u: goto L_08968330;
    case 39u: goto L_08968334;
    case 40u: goto L_0896833C;
    case 41u: goto L_08968364;
    case 42u: goto L_08968374;
    case 43u: goto L_089683A8;
    case 44u: goto L_089683B0;
    case 45u: goto L_089683BC;
    case 46u: goto L_089683C0;
    case 47u: goto L_089683C8;
    case 48u: goto L_08968400;
    case 49u: goto L_0896840C;
    case 50u: goto L_08968410;
    case 51u: goto L_0896842C;
    case 52u: goto L_08968438;
    case 53u: goto L_0896843C;
    case 54u: goto L_08968458;
    case 55u: goto L_08968464;
    case 56u: goto L_08968468;
    case 57u: goto L_08968484;
    case 58u: goto L_08968490;
    case 59u: goto L_08968494;
    case 60u: goto L_0896849C;
    case 61u: goto L_089684B4;
    case 62u: goto L_089684C0;
    case 63u: goto L_089684C4;
    case 64u: goto L_089684D8;
    case 65u: goto L_089684E4;
    case 66u: goto L_0896850C;
    case 67u: goto L_08968518;
    case 68u: goto L_0896851C;
    case 69u: goto L_0896852C;
    case 70u: goto L_08968554;
    case 71u: goto L_08968564;
    case 72u: goto L_08968594;
    case 73u: goto L_089685A0;
    case 74u: goto L_089685AC;
    case 75u: goto L_089685B0;
    case 76u: goto L_089685C0;
    case 77u: goto L_089685CC;
    case 78u: goto L_089685D0;
    case 79u: goto L_089685EC;
    case 80u: goto L_089685F8;
    case 81u: goto L_089685FC;
    case 82u: goto L_08968618;
    case 83u: goto L_08968624;
    case 84u: goto L_08968628;
    case 85u: goto L_0896864C;
    case 86u: goto L_0896869C;
    case 87u: goto L_089686C8;
    case 88u: goto L_0896875C;
    case 89u: goto L_08968770;
    case 90u: goto L_08968788;
    case 91u: goto L_089687C8;
    case 92u: goto L_089687D8;
    case 93u: goto L_089687EC;
    case 94u: goto L_089687F8;
    case 95u: goto L_089687FC;
    case 96u: goto L_08968808;
    case 97u: goto L_08968884;
    case 98u: goto L_0896888C;
    case 99u: goto L_089688A0;
    case 100u: goto L_089688AC;
    case 101u: goto L_0896897C;
    case 102u: goto L_089689BC;
    case 103u: goto L_089689CC;
    case 104u: goto L_089689D8;
    case 105u: goto L_08968A8C;
    case 106u: goto L_08968AA4;
    case 107u: goto L_08968AC8;
    case 108u: goto L_08968AD8;
    case 109u: goto L_08968B0C;
    case 110u: goto L_08968BB8;
    case 111u: goto L_08968BCC;
    case 112u: goto L_08968BD8;
    case 113u: goto L_08968CA8;
    case 114u: goto L_08968CE8;
    case 115u: goto L_08968D98;
    case 116u: goto L_08968D9C;
    case 117u: goto L_08968DC0;
    case 118u: goto L_08968E1C;
    case 119u: goto L_08968E2C;
    case 120u: goto L_08968E6C;
    case 121u: goto L_08968E78;
    case 122u: goto L_08968E7C;
    case 123u: goto L_08968E98;
    case 124u: goto L_08968EA4;
    case 125u: goto L_08968EA8;
    case 126u: goto L_08968EC8;
    case 127u: goto L_08968ED4;
    case 128u: goto L_08968ED8;
    case 129u: goto L_08968EF8;
    case 130u: goto L_08968F04;
    case 131u: goto L_08968F08;
    case 132u: goto L_08968F1C;
    case 133u: goto L_08968F30;
    case 134u: goto L_08968F44;
    case 135u: goto L_08968F50;
    case 136u: goto L_08968F54;
    case 137u: goto L_08968F60;
    case 138u: goto L_08968F68;
    case 139u: goto L_08968F74;
    case 140u: goto L_08968F78;
    case 141u: goto L_08968F80;
    case 142u: goto L_08968F88;
    case 143u: goto L_08968FC4;
    case 144u: goto L_08968FD0;
    case 145u: goto L_08968FD8;
    case 146u: goto L_08968FE8;
    case 147u: goto L_08969004;
    case 148u: goto L_08969028;
    case 149u: goto L_0896903C;
    case 150u: goto L_08969044;
    case 151u: goto L_0896904C;
    case 152u: goto L_08969064;
    case 153u: goto L_08969070;
    case 154u: goto L_08969088;
    case 155u: goto L_089690A0;
    case 156u: goto L_089690C4;
    case 157u: goto L_089690D0;
    case 158u: goto L_089690E4;
    case 159u: goto L_089690F0;
    case 160u: goto L_089690F4;
    case 161u: goto L_08969104;
    case 162u: goto L_08969124;
    case 163u: goto L_08969148;
    case 164u: goto L_08969158;
    case 165u: goto L_08969188;
    case 166u: goto L_08969194;
    case 167u: goto L_0896919C;
    case 168u: goto L_089691B4;
    case 169u: goto L_089691C0;
    case 170u: goto L_089691D0;
    case 171u: goto L_089691E8;
    case 172u: goto L_08969210;
    case 173u: goto L_08969228;
    case 174u: goto L_08969234;
    case 175u: goto L_08969238;
    case 176u: goto L_08969254;
    case 177u: goto L_08969260;
    case 178u: goto L_08969264;
    case 179u: goto L_08969280;
    case 180u: goto L_0896928C;
    case 181u: goto L_08969290;
    case 182u: goto L_089692B4;
    case 183u: goto L_08969304;
    case 184u: goto L_08969330;
    case 185u: goto L_089693C4;
    case 186u: goto L_089693D8;
    case 187u: goto L_089693F0;
    case 188u: goto L_08969430;
    case 189u: goto L_08969444;
    case 190u: goto L_08969458;
    case 191u: goto L_08969464;
    case 192u: goto L_08969468;
    case 193u: goto L_08969474;
    case 194u: goto L_089694F0;
    case 195u: goto L_089694F8;
    case 196u: goto L_0896950C;
    case 197u: goto L_08969518;
    case 198u: goto L_089695E8;
    case 199u: goto L_08969628;
    case 200u: goto L_08969638;
    case 201u: goto L_08969644;
    case 202u: goto L_089696F8;
    case 203u: goto L_08969710;
    case 204u: goto L_08969734;
    case 205u: goto L_08969744;
    case 206u: goto L_08969778;
    case 207u: goto L_08969824;
    case 208u: goto L_08969838;
    case 209u: goto L_08969844;
    case 210u: goto L_08969914;
    case 211u: goto L_08969954;
    case 212u: goto L_08969A04;
    case 213u: goto L_08969A08;
    case 214u: goto L_08969A2C;
    case 215u: goto L_08969A88;
    case 216u: goto L_08969A98;
    case 217u: goto L_08969AD8;
    case 218u: goto L_08969AE4;
    case 219u: goto L_08969AE8;
    case 220u: goto L_08969B04;
    case 221u: goto L_08969B10;
    case 222u: goto L_08969B14;
    case 223u: goto L_08969B34;
    case 224u: goto L_08969B40;
    case 225u: goto L_08969B44;
    case 226u: goto L_08969B64;
    case 227u: goto L_08969B70;
    case 228u: goto L_08969B74;
    case 229u: goto L_08969B88;
    case 230u: goto L_08969B8C;
    case 231u: goto L_08969B98;
    case 232u: goto L_08969BAC;
    case 233u: goto L_08969BC0;
    case 234u: goto L_08969BCC;
    case 235u: goto L_08969BD0;
    case 236u: goto L_08969BDC;
    case 237u: goto L_08969C04;
    case 238u: goto L_08969C14;
    case 239u: goto L_08969C58;
    case 240u: goto L_08969C64;
    case 241u: goto L_08969C70;
    case 242u: goto L_08969C80;
    case 243u: goto L_08969C8C;
    case 244u: goto L_08969CA4;
    case 245u: goto L_08969CB8;
    case 246u: goto L_08969CD8;
    case 247u: goto L_08969CE0;
    case 248u: goto L_08969CF4;
    case 249u: goto L_08969D08;
    case 250u: goto L_08969D24;
    case 251u: goto L_08969D34;
    case 252u: goto L_08969D48;
    case 253u: goto L_08969D5C;
    case 254u: goto L_08969D78;
    case 255u: goto L_08969D88;
    case 256u: goto L_08969D90;
    case 257u: goto L_08969DA8;
    case 258u: goto L_08969DB4;
    case 259u: goto L_08969DCC;
    case 260u: goto L_08969DE4;
    case 261u: goto L_08969E0C;
    case 262u: goto L_08969E90;
    case 263u: goto L_08969E98;
    case 264u: goto L_08969EAC;
    case 265u: goto L_08969EB8;
    case 266u: goto L_08969F88;
    case 267u: goto L_08969FC8;
    case 268u: goto L_08969FD8;
    case 269u: goto L_08969FE4;
    case 270u: goto L_0896A098;
    case 271u: goto L_0896A0B0;
    case 272u: goto L_0896A0D4;
    case 273u: goto L_0896A0E4;
    case 274u: goto L_0896A118;
    case 275u: goto L_0896A1C0;
    case 276u: goto L_0896A1D4;
    case 277u: goto L_0896A1E0;
    case 278u: goto L_0896A2B0;
    case 279u: goto L_0896A2F0;
    case 280u: goto L_0896A3A0;
    case 281u: goto L_0896A3A4;
    case 282u: goto L_0896A3C8;
    case 283u: goto L_0896A40C;
    case 284u: goto L_0896A420;
    case 285u: goto L_0896A434;
    case 286u: goto L_0896A440;
    case 287u: goto L_0896A444;
    case 288u: goto L_0896A450;
    case 289u: goto L_0896A45C;
    case 290u: goto L_0896A468;
    case 291u: goto L_0896A474;
    case 292u: goto L_0896A47C;
    case 293u: goto L_0896A484;
    case 294u: goto L_0896A488;
    case 295u: goto L_0896A49C;
    case 296u: goto L_0896A4A8;
    case 297u: goto L_0896A4B0;
    case 298u: goto L_0896A4C8;
    case 299u: goto L_0896A4DC;
    case 300u: goto L_0896A508;
    case 301u: goto L_0896A510;
    case 302u: goto L_0896A524;
    case 303u: goto L_0896A52C;
    case 304u: goto L_0896A540;
    case 305u: goto L_0896A54C;
    case 306u: goto L_0896A558;
    case 307u: goto L_0896A560;
    case 308u: goto L_0896A564;
    case 309u: goto L_0896A578;
    case 310u: goto L_0896A580;
    case 311u: goto L_0896A598;
    case 312u: goto L_0896A5A4;
    case 313u: goto L_0896A5AC;
    case 314u: goto L_0896A5B0;
    case 315u: goto L_0896A5C4;
    case 316u: goto L_0896A5E0;
    case 317u: goto L_0896A5E8;
    case 318u: goto L_0896A5F8;
    case 319u: goto L_0896A604;
    case 320u: goto L_0896A60C;
    case 321u: goto L_0896A610;
    case 322u: goto L_0896A624;
    case 323u: goto L_0896A644;
    case 324u: goto L_0896A658;
    case 325u: goto L_0896A664;
    case 326u: goto L_0896A674;
    case 327u: goto L_0896A688;
    case 328u: goto L_0896A69C;
    case 329u: goto L_0896A6BC;
    case 330u: goto L_0896A6C4;
    case 331u: goto L_0896A6D0;
    case 332u: goto L_0896A6D8;
    case 333u: goto L_0896A6F0;
    case 334u: goto L_0896A70C;
    case 335u: goto L_0896A724;
    case 336u: goto L_0896A748;
    case 337u: goto L_0896A750;
    case 338u: goto L_0896A764;
    case 339u: goto L_0896A778;
    case 340u: goto L_0896A784;
    case 341u: goto L_0896A798;
    case 342u: goto L_0896A7A4;
    case 343u: goto L_0896A7C4;
    case 344u: goto L_0896A7CC;
    case 345u: goto L_0896A7E0;
    case 346u: goto L_0896A7EC;
    case 347u: goto L_0896A7FC;
    case 348u: goto L_0896A80C;
    case 349u: goto L_0896A818;
    case 350u: goto L_0896A820;
    case 351u: goto L_0896A838;
    case 352u: goto L_0896A84C;
    case 353u: goto L_0896A868;
    case 354u: goto L_0896A87C;
    case 355u: goto L_0896A888;
    case 356u: goto L_0896A8B4;
    case 357u: goto L_0896A8BC;
    case 358u: goto L_0896A8D0;
    case 359u: goto L_0896A8D8;
    case 360u: goto L_0896A8EC;
    case 361u: goto L_0896A8FC;
    case 362u: goto L_0896A90C;
    case 363u: goto L_0896A918;
    case 364u: goto L_0896A920;
    case 365u: goto L_0896A938;
    case 366u: goto L_0896A944;
    case 367u: goto L_0896A954;
    case 368u: goto L_0896A95C;
    case 369u: goto L_0896A970;
    case 370u: goto L_0896A990;
    case 371u: goto L_0896A9A4;
    case 372u: goto L_0896A9A8;
    case 373u: goto L_0896A9DC;
    case 374u: goto L_0896AA0C;
    case 375u: goto L_0896AA20;
    case 376u: goto L_0896AA34;
    case 377u: goto L_0896AA40;
    case 378u: goto L_0896AA5C;
    case 379u: goto L_0896AA60;
    case 380u: goto L_0896AA84;
    case 381u: goto L_0896AA94;
    case 382u: goto L_0896AAC4;
    case 383u: goto L_0896AAD4;
    case 384u: goto L_0896AAE4;
    case 385u: goto L_0896AB18;
    case 386u: goto L_0896AB24;
    case 387u: goto L_0896AB28;
    case 388u: goto L_0896AB3C;
    case 389u: goto L_0896AB54;
    case 390u: goto L_0896AB64;
    case 391u: goto L_0896AB68;
    case 392u: goto L_0896AB70;
    case 393u: goto L_0896ABA4;
    case 394u: goto L_0896ABB4;
    case 395u: goto L_0896ABE8;
    case 396u: goto L_0896AC0C;
    case 397u: goto L_0896AC18;
    case 398u: goto L_0896AC1C;
    case 399u: goto L_0896AC2C;
    case 400u: goto L_0896AC38;
    case 401u: goto L_0896AC3C;
    case 402u: goto L_0896AC58;
    case 403u: goto L_0896AC64;
    case 404u: goto L_0896AC68;
    case 405u: goto L_0896AC84;
    case 406u: goto L_0896AC90;
    case 407u: goto L_0896AC94;
    case 408u: goto L_0896AC9C;
    case 409u: goto L_0896ACA8;
    case 410u: goto L_0896ACD4;
    case 411u: goto L_0896ACEC;
    case 412u: goto L_0896ACF8;
    case 413u: goto L_0896ACFC;
    case 414u: goto L_0896AD0C;
    case 415u: goto L_0896AD18;
    case 416u: goto L_0896AD1C;
    case 417u: goto L_0896AD38;
    case 418u: goto L_0896AD44;
    case 419u: goto L_0896AD48;
    case 420u: goto L_0896AD64;
    case 421u: goto L_0896AD70;
    case 422u: goto L_0896AD74;
    case 423u: goto L_0896AD80;
    case 424u: goto L_0896ADF8;
    case 425u: goto L_0896AE0C;
    case 426u: goto L_0896AE18;
    case 427u: goto L_0896AEE8;
    case 428u: goto L_0896AF28;
    case 429u: goto L_0896AFD8;
    case 430u: goto L_0896AFDC;
    case 431u: goto L_0896B000;
    case 432u: goto L_0896B05C;
    case 433u: goto L_0896B06C;
    case 434u: goto L_0896B0B0;
    case 435u: goto L_0896B0BC;
    case 436u: goto L_0896B0C0;
    case 437u: goto L_0896B0DC;
    case 438u: goto L_0896B0E8;
    case 439u: goto L_0896B0EC;
    case 440u: goto L_0896B108;
    case 441u: goto L_0896B114;
    case 442u: goto L_0896B118;
    case 443u: goto L_0896B134;
    case 444u: goto L_0896B140;
    case 445u: goto L_0896B144;
    case 446u: goto L_0896B160;
    case 447u: goto L_0896B16C;
    case 448u: goto L_0896B170;
    case 449u: goto L_0896B184;
    case 450u: goto L_0896B194;
    case 451u: goto L_0896B19C;
    case 452u: goto L_0896B218;
    case 453u: goto L_0896B22C;
    case 454u: goto L_0896B238;
    case 455u: goto L_0896B308;
    case 456u: goto L_0896B348;
    case 457u: goto L_0896B3F8;
    case 458u: goto L_0896B3FC;
    case 459u: goto L_0896B420;
    case 460u: goto L_0896B468;
    case 461u: goto L_0896B478;
    case 462u: goto L_0896B488;
    case 463u: goto L_0896B498;
    case 464u: goto L_0896B4A4;
    case 465u: goto L_0896B4CC;
    case 466u: goto L_0896B4DC;
    case 467u: goto L_0896B510;
    case 468u: goto L_0896B524;
    case 469u: goto L_0896B52C;
    case 470u: goto L_0896B538;
    case 471u: goto L_0896B548;
    case 472u: goto L_0896B554;
    case 473u: goto L_0896B574;
    case 474u: goto L_0896B5AC;
    case 475u: goto L_0896B5C0;
    case 476u: goto L_0896B5D4;
    case 477u: goto L_0896B5E8;
    case 478u: goto L_0896B610;
    case 479u: goto L_0896B61C;
    case 480u: goto L_0896B624;
    case 481u: goto L_0896B630;
    case 482u: goto L_0896B640;
    case 483u: goto L_0896B658;
    case 484u: goto L_0896B664;
    case 485u: goto L_0896B668;
    case 486u: goto L_0896B688;
    case 487u: goto L_0896B698;
    case 488u: goto L_0896B6E4;
    case 489u: goto L_0896B6F4;
    case 490u: goto L_0896B728;
    case 491u: goto L_0896B74C;
    case 492u: goto L_0896B758;
    case 493u: goto L_0896B75C;
    case 494u: goto L_0896B76C;
    case 495u: goto L_0896B778;
    case 496u: goto L_0896B77C;
    case 497u: goto L_0896B798;
    case 498u: goto L_0896B7A4;
    case 499u: goto L_0896B7A8;
    case 500u: goto L_0896B7C4;
    case 501u: goto L_0896B7D0;
    case 502u: goto L_0896B7D4;
    case 503u: goto L_0896B7DC;
    case 504u: goto L_0896B7E8;
    case 505u: goto L_0896B814;
    case 506u: goto L_0896B830;
    case 507u: goto L_0896B83C;
    case 508u: goto L_0896B840;
    case 509u: goto L_0896B850;
    case 510u: goto L_0896B85C;
    case 511u: goto L_0896B860;
    case 512u: goto L_0896B87C;
    case 513u: goto L_0896B888;
    case 514u: goto L_0896B88C;
    case 515u: goto L_0896B8A8;
    case 516u: goto L_0896B8B4;
    case 517u: goto L_0896B8B8;
    case 518u: goto L_0896B8C0;
    case 519u: goto L_0896B8D8;
    case 520u: goto L_0896B8E4;
    case 521u: goto L_0896B8E8;
    case 522u: goto L_0896B8F8;
    case 523u: goto L_0896B904;
    case 524u: goto L_0896B908;
    case 525u: goto L_0896B924;
    case 526u: goto L_0896B930;
    case 527u: goto L_0896B934;
    case 528u: goto L_0896B954;
    case 529u: goto L_0896B968;
    case 530u: goto L_0896B97C;
    case 531u: goto L_0896B98C;
    case 532u: goto L_0896B99C;
    case 533u: goto L_0896BA0C;
    case 534u: goto L_0896BA68;
    case 535u: goto L_0896BA7C;
    case 536u: goto L_0896BB70;
    case 537u: goto L_0896BBA4;
    case 538u: goto L_0896BBDC;
    case 539u: goto L_0896BBF8;
    case 540u: goto L_0896BC24;
    case 541u: goto L_0896BC30;
    case 542u: goto L_0896BC34;
    case 543u: goto L_0896BC50;
    case 544u: goto L_0896BC5C;
    case 545u: goto L_0896BC60;
    case 546u: goto L_0896BC8C;
    case 547u: goto L_0896BC9C;
    case 548u: goto L_0896BCD0;
    case 549u: goto L_0896BCEC;
    case 550u: goto L_0896BD00;
    case 551u: goto L_0896BD14;
    case 552u: goto L_0896BD24;
    case 553u: goto L_0896BD34;
    case 554u: goto L_0896BDA4;
    case 555u: goto L_0896BE00;
    case 556u: goto L_0896BE14;
    case 557u: goto L_0896BF08;
    case 558u: goto L_0896BF3C;
    case 559u: goto L_0896BF74;
    case 560u: goto L_0896BF90;
    case 561u: goto L_0896BFAC;
    case 562u: goto L_0896BFB8;
    case 563u: goto L_0896BFC8;
    case 564u: goto L_0896BFD0;
    case 565u: goto L_0896BFDC;
    case 566u: goto L_0896BFEC;
    case 567u: goto L_0896BFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08968000:
    ctx.set_gpr(2, 0u & 31u);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-125));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896806C;
      }
      goto L_08968020;
    }
L_08968020:
    ctx.set_gpr(3, ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896806C;
      }
      goto L_08968038;
    }
L_08968038:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, 0u & 1u);
    ctx.set_gpr(3, ctx.gpr[2] << 7u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896806C;
      }
      goto L_0896805C;
    }
L_0896805C:
    ctx.set_gpr(3, ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    goto L_0896806C;
L_0896806C:
    ctx.set_gpr(3, ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[6] - ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] >> 2u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 15u);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_089680A0;
L_089680A0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[20] & 65535u);
    ctx.set_gpr(3, ctx.gpr[2] << 5u);
    ctx.set_gpr(2, 65504u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 31u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[5] & 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089680F8;
      }
      goto L_089680E4;
    }
L_089680E4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089680F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 326u, 0x08961AC4u>(ctx, &aot_mem) && ctx.pc == 0x089680F8u) goto L_089680F8;
    return;
L_089680F8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08968118;
      }
      goto L_0896810C;
    }
L_0896810C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896811C;
      }
      goto L_08968118;
    }
L_08968118:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_0896811C;
L_0896811C:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A9A8;
      }
      goto L_08968128;
    }
L_08968128:
    ctx.set_gpr(1, ctx.gpr[6] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08968180;
      }
      goto L_08968134;
    }
L_08968134:
    ctx.set_gpr(7, ctx.gpr[6] >> 3u);
    ctx.set_gpr(2, ctx.gpr[7] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[7]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(55)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896816C;
      }
      goto L_08968160;
    }
L_08968160:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08968170;
      }
      goto L_0896816C;
    }
L_0896816C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_08968170;
L_08968170:
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089683C8;
      }
      goto L_08968180;
    }
L_08968180:
    ctx.set_gpr(3, ctx.gpr[6] >> 8u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089681A0;
      }
      goto L_08968194;
    }
L_08968194:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(95));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896820C;
      }
      goto L_089681A0;
    }
L_089681A0:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(-256));
    ctx.set_gpr(2, ctx.gpr[2] >> 16u);
    ctx.set_gpr(4, ctx.gpr[2] & 8u);
    ctx.set_gpr(3, ctx.gpr[3] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(-4096));
    ctx.set_gpr(2, ctx.gpr[2] >> 16u);
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] << (ctx.gpr[2] & 31u));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(-16384));
    ctx.set_gpr(2, ctx.gpr[2] >> 16u);
    ctx.set_gpr(2, ctx.gpr[2] & 2u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << (ctx.gpr[2] & 31u));
    ctx.set_gpr(3, ctx.gpr[2] >> 14u);
    ctx.set_gpr(2, ctx.gpr[3] >> 1u);
    ctx.set_gpr(2, ~(ctx.gpr[2] | 0u));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(13));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(2, ctx.gpr[6] >> (ctx.gpr[2] & 31u));
    ctx.set_gpr(2, ctx.gpr[2] & 3u);
    ctx.set_gpr(7, ctx.gpr[3] + ctx.gpr[2]);
    goto L_0896820C;
L_0896820C:
    ctx.set_gpr(2, ctx.gpr[7] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[7]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(55)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08968244;
      }
      goto L_08968238;
    }
L_08968238:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08968248;
      }
      goto L_08968244;
    }
L_08968244:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_08968248;
L_08968248:
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089683C8;
      }
      goto L_08968258;
    }
L_08968258:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896826C;
      }
      goto L_08968260;
    }
L_08968260:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08968270;
      }
      goto L_0896826C;
    }
L_0896826C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_08968270;
L_08968270:
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, ctx.gpr[8] << 11u);
    ctx.set_gpr(10, ctx.gpr[8] >> 16u);
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(8, ctx.gpr[8] << 24u);
    ctx.set_gpr(9, ctx.gpr[8] >> 31u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_089682AC;
      }
      goto L_0896829C;
    }
L_0896829C:
    ctx.set_gpr(8, rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(8, ctx.gpr[8] & 32767u);
    ctx.set_gpr(8, ctx.gpr[8] << 16u);
    ctx.set_gpr(10, ctx.gpr[10] + ctx.gpr[8]);
    goto L_089682AC;
L_089682AC:
    ctx.set_gpr(9, ctx.gpr[10] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(8, ctx.gpr[9] & ctx.gpr[8]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 27u);
    ctx.set_gpr(2, ctx.gpr[2] >> 28u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[8] + ctx.gpr[2]);
    ctx.set_gpr(1, ctx.gpr[6] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08968308;
      }
      goto L_089682DC;
    }
L_089682DC:
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089682F4;
      }
      goto L_089682E8;
    }
L_089682E8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089682F8;
      }
      goto L_089682F4;
    }
L_089682F4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_089682F8;
L_089682F8:
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089683C8;
      }
      goto L_08968308;
    }
L_08968308:
    ctx.set_gpr(2, ctx.gpr[6] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089683C8;
      }
      goto L_08968314;
    }
L_08968314:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896833C;
      }
      goto L_0896831C;
    }
L_0896831C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08968330;
      }
      goto L_08968324;
    }
L_08968324:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08968334;
      }
      goto L_08968330;
    }
L_08968330:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_08968334;
L_08968334:
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_0896833C;
L_0896833C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 11u);
    ctx.set_gpr(4, ctx.gpr[2] >> 16u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08968374;
      }
      goto L_08968364;
    }
L_08968364:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] & 32767u);
    ctx.set_gpr(3, ctx.gpr[3] << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[3]);
    goto L_08968374;
L_08968374:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(8, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[6] | 1u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 27u);
    ctx.set_gpr(3, ctx.gpr[3] >> 28u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[8] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[4] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896831C;
      }
      goto L_089683A8;
    }
L_089683A8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089683BC;
      }
      goto L_089683B0;
    }
L_089683B0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089683C0;
      }
      goto L_089683BC;
    }
L_089683BC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_089683C0;
L_089683C0:
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    goto L_089683C8;
L_089683C8:
    ctx.set_gpr(3, ctx.gpr[7] & 31u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[2] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 5u));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(1972)));
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(1972), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896840C;
      }
      goto L_08968400;
    }
L_08968400:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08968410;
      }
      goto L_0896840C;
    }
L_0896840C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_08968410;
L_08968410:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08968438;
      }
      goto L_0896842C;
    }
L_0896842C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896843C;
      }
      goto L_08968438;
    }
L_08968438:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_0896843C;
L_0896843C:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08968464;
      }
      goto L_08968458;
    }
L_08968458:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08968468;
      }
      goto L_08968464;
    }
L_08968464:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_08968468;
L_08968468:
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08968490;
      }
      goto L_08968484;
    }
L_08968484:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08968494;
      }
      goto L_08968490;
    }
L_08968490:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_08968494;
L_08968494:
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    goto L_0896849C;
L_0896849C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(75)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089684C0;
      }
      goto L_089684B4;
    }
L_089684B4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089684C4;
      }
      goto L_089684C0;
    }
L_089684C0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_089684C4;
L_089684C4:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(72));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 399u, 0x089674A8u>(ctx, &aot_mem); return;
      }
      goto L_089684D8;
    }
L_089684D8:
    ctx.set_gpr(2, ctx.gpr[19] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08968F88;
      }
      goto L_089684E4;
    }
L_089684E4:
    ctx.set_gpr(2, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(55)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(3, ctx.gpr[3] >> 31u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08968518;
      }
      goto L_0896850C;
    }
L_0896850C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896851C;
      }
      goto L_08968518;
    }
L_08968518:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(12));
    goto L_0896851C;
L_0896851C:
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08968F80;
      }
      goto L_0896852C;
    }
L_0896852C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 11u);
    ctx.set_gpr(5, ctx.gpr[3] >> 16u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(3, ctx.gpr[3] >> 31u);
    ctx.set_gpr(3, ctx.gpr[3] & 255u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08968564;
      }
      goto L_08968554;
    }
L_08968554:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[4] & 32767u);
    ctx.set_gpr(4, ctx.gpr[4] << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[4]);
    goto L_08968564;
L_08968564:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] << 27u);
    ctx.set_gpr(4, ctx.gpr[4] >> 28u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(6, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[6] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08968F60;
      }
      goto L_08968594;
    }
L_08968594:
    ctx.set_gpr(2, ctx.gpr[6] - ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089685AC;
      }
      goto L_089685A0;
    }
L_089685A0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089685B0;
      }
      goto L_089685AC;
    }
L_089685AC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(12));
    goto L_089685B0;
L_089685B0:
    ctx.set_gpr(4, ctx.gpr[17] + ctx.gpr[4]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089685CC;
      }
      goto L_089685C0;
    }
L_089685C0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089685D0;
      }
      goto L_089685CC;
    }
L_089685CC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(12));
    goto L_089685D0;
L_089685D0:
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(3, ctx.gpr[3] >> 31u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089685F8;
      }
      goto L_089685EC;
    }
L_089685EC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089685FC;
      }
      goto L_089685F8;
    }
L_089685F8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(12));
    goto L_089685FC;
L_089685FC:
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(3, ctx.gpr[3] >> 31u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08968624;
      }
      goto L_08968618;
    }
L_08968618:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08968628;
      }
      goto L_08968624;
    }
L_08968624:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(12));
    goto L_08968628;
L_08968628:
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08968808;
      }
      goto L_0896864C;
    }
L_0896864C:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[17] + ctx.gpr[6]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[20] & 65535u);
    ctx.set_gpr(5, ctx.gpr[4] << 5u);
    ctx.set_gpr(4, 65504u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | 31u);
    ctx.set_gpr(4, ctx.gpr[7] & ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(4, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[20] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896875C;
      }
      goto L_0896869C;
    }
L_0896869C:
    ctx.set_gpr(7, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, (ctx.gpr[20] >> 16u) & 0x00007FFFu);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(4, ctx.gpr[7] & ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[5]);
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, ctx.gpr[7] << 24u);
    ctx.set_gpr(4, ctx.gpr[4] >> 31u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08968788;
      }
      goto L_089686C8;
    }
L_089686C8:
    ctx.set_gpr(5, ctx.gpr[3] << 7u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(3, ctx.gpr[7] & ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, 0u & 1u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, 0u & 31u);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-125));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u & 511u);
    ctx.set_gpr(3, ctx.gpr[2] << 15u);
    ctx.set_gpr(2, 65280u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32767u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08968788;
      }
      goto L_0896875C;
    }
L_0896875C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08968788;
      }
      goto L_08968770;
    }
L_08968770:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, 0u & 32767u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[2]));
    goto L_08968788;
L_08968788:
    ctx.set_gpr(3, ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[6] - ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] >> 2u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 15u);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089687D8;
      }
      goto L_089687C8;
    }
L_089687C8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089687D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 326u, 0x08961AC4u>(ctx, &aot_mem) && ctx.pc == 0x089687D8u) goto L_089687D8;
    return;
L_089687D8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089687F8;
      }
      goto L_089687EC;
    }
L_089687EC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089687FC;
      }
      goto L_089687F8;
    }
L_089687F8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_089687FC;
L_089687FC:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A9A8;
      }
      goto L_08968808;
    }
L_08968808:
    ctx.set_gpr(7, ctx.gpr[17] + ctx.gpr[19]);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(8, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, ctx.gpr[4] & 255u);
    ctx.set_gpr(6, ctx.gpr[3] << 5u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-8161));
    ctx.set_gpr(3, ctx.gpr[8] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[6]);
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, 0u & 1u);
    ctx.set_gpr(8, ctx.gpr[3] << 6u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-65));
    ctx.set_gpr(6, ctx.gpr[9] & ctx.gpr[6]);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[8]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(8, ctx.gpr[3] << 5u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-33));
    ctx.set_gpr(6, ctx.gpr[9] & ctx.gpr[6]);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[8]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(6, ctx.gpr[8] & ctx.gpr[6]);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089689BC;
      }
      goto L_08968884;
    }
L_08968884:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089689BC;
      }
      goto L_0896888C;
    }
L_0896888C:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 4u);
    ctx.set_gpr(1, ctx.gpr[19] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089688AC;
      }
      goto L_089688A0;
    }
L_089688A0:
    ctx.set_gpr(5, ctx.gpr[4] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896897C;
      }
      goto L_089688AC;
    }
L_089688AC:
    ctx.set_gpr(20, ctx.gpr[19] + static_cast<std::uint32_t>(-12));
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, (ctx.gpr[20] >> 16u) & 0x00007FFFu);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[5]);
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, (ctx.gpr[4] >> 8u) & 0x000001FFu);
    ctx.set_gpr(4, ctx.gpr[3] << 15u);
    ctx.set_gpr(3, 65280u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 32767u);
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(4, 0u & 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(4, ctx.gpr[4] << 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, 0u & 31u);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-125));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08968B0C;
      }
      goto L_0896897C;
    }
L_0896897C:
    ctx.set_gpr(20, ctx.gpr[19] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, ctx.gpr[3] << 7u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u & 15u);
    ctx.set_gpr(4, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08968B0C;
      }
      goto L_089689BC;
    }
L_089689BC:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[20] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089689D8;
      }
      goto L_089689CC;
    }
L_089689CC:
    ctx.set_gpr(3, ctx.gpr[4] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08968AA4;
      }
      goto L_089689D8;
    }
L_089689D8:
    ctx.set_gpr(8, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, (ctx.gpr[20] >> 16u) & 0x00007FFFu);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[8] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[6]);
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, (ctx.gpr[4] >> 8u) & 0x000001FFu);
    ctx.set_gpr(4, ctx.gpr[3] << 15u);
    ctx.set_gpr(3, 65280u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 32767u);
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[6]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[6]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(4, 0u & 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(4, ctx.gpr[4] << 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, 0u & 31u);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-125));
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08968AD8;
      }
      goto L_08968A8C;
    }
L_08968A8C:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08968AD8;
      }
      goto L_08968AA4;
    }
L_08968AA4:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, 0u & 1u);
    ctx.set_gpr(4, ctx.gpr[3] << 7u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08968AD8;
      }
      goto L_08968AC8;
    }
L_08968AC8:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(4));
    goto L_08968AD8;
L_08968AD8:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[5] - ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] >> 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & 15u);
    ctx.set_gpr(4, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08968B0C;
L_08968B0C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[20] & 65535u);
    ctx.set_gpr(4, ctx.gpr[3] << 5u);
    ctx.set_gpr(3, 65504u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 31u);
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[6]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(8, ctx.gpr[2] + 0u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(11, rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, ctx.gpr[4] & 255u);
    ctx.set_gpr(10, ctx.gpr[3] << 5u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-8161));
    ctx.set_gpr(3, ctx.gpr[11] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[10]);
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, 0u & 1u);
    ctx.set_gpr(11, ctx.gpr[3] << 6u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(-65));
    ctx.set_gpr(10, ctx.gpr[12] & ctx.gpr[10]);
    ctx.set_gpr(10, ctx.gpr[10] | ctx.gpr[11]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(11, ctx.gpr[3] << 5u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(-33));
    ctx.set_gpr(10, ctx.gpr[12] & ctx.gpr[10]);
    ctx.set_gpr(10, ctx.gpr[10] | ctx.gpr[11]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, ctx.gpr[10] & ctx.gpr[5]);
    ctx.set_gpr(10, ctx.gpr[10] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08968CE8;
      }
      goto L_08968BB8;
    }
L_08968BB8:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 4u);
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08968BD8;
      }
      goto L_08968BCC;
    }
L_08968BCC:
    ctx.set_gpr(5, ctx.gpr[4] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08968CA8;
      }
      goto L_08968BD8;
    }
L_08968BD8:
    ctx.set_gpr(9, ctx.gpr[2] + static_cast<std::uint32_t>(-12));
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, (ctx.gpr[9] >> 16u) & 0x00007FFFu);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[5]);
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, (ctx.gpr[4] >> 8u) & 0x000001FFu);
    ctx.set_gpr(4, ctx.gpr[3] << 15u);
    ctx.set_gpr(3, 65280u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 32767u);
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(4, 0u & 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(4, ctx.gpr[4] << 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, 0u & 31u);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-125));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08968DC0;
      }
      goto L_08968CA8;
    }
L_08968CA8:
    ctx.set_gpr(9, ctx.gpr[2] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, ctx.gpr[3] << 7u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u & 15u);
    ctx.set_gpr(4, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08968DC0;
      }
      goto L_08968CE8;
    }
L_08968CE8:
    ctx.set_gpr(10, 0u | 65535u);
    ctx.set_gpr(12, rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(11, ctx.gpr[10] & 32767u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(10, ctx.gpr[12] & ctx.gpr[10]);
    ctx.set_gpr(10, ctx.gpr[10] | ctx.gpr[11]);
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, (ctx.gpr[4] >> 8u) & 0x000001FFu);
    ctx.set_gpr(10, ctx.gpr[4] << 15u);
    ctx.set_gpr(4, 65280u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | 32767u);
    ctx.set_gpr(4, ctx.gpr[11] & ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(10, ctx.gpr[6] << 7u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[6]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[10]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[6]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[10]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(4, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, 0u & 31u);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-125));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08968D9C;
      }
      goto L_08968D98;
    }
L_08968D98:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(12));
    goto L_08968D9C;
L_08968D9C:
    ctx.set_gpr(3, ctx.gpr[8] >> 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & 15u);
    ctx.set_gpr(4, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08968DC0;
L_08968DC0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[9] & 65535u);
    ctx.set_gpr(4, ctx.gpr[3] << 5u);
    ctx.set_gpr(3, 65504u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 31u);
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 11u);
    ctx.set_gpr(4, ctx.gpr[3] >> 16u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(3, ctx.gpr[3] >> 31u);
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08968E2C;
      }
      goto L_08968E1C;
    }
L_08968E1C:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] & 32767u);
    ctx.set_gpr(3, ctx.gpr[3] << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[3]);
    goto L_08968E2C;
L_08968E2C:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 27u);
    ctx.set_gpr(3, ctx.gpr[3] >> 28u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[7] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(75)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08968E78;
      }
      goto L_08968E6C;
    }
L_08968E6C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08968E7C;
      }
      goto L_08968E78;
    }
L_08968E78:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_08968E7C;
L_08968E7C:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(76), ctx.gpr[7]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(75)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08968EA4;
      }
      goto L_08968E98;
    }
L_08968E98:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08968EA8;
      }
      goto L_08968EA4;
    }
L_08968EA4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_08968EA8;
L_08968EA8:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(72), ctx.gpr[7]);
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08968ED4;
      }
      goto L_08968EC8;
    }
L_08968EC8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08968ED8;
      }
      goto L_08968ED4;
    }
L_08968ED4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_08968ED8;
L_08968ED8:
    ctx.set_gpr(2, ctx.gpr[7] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08968F04;
      }
      goto L_08968EF8;
    }
L_08968EF8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08968F08;
      }
      goto L_08968F04;
    }
L_08968F04:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_08968F08;
L_08968F08:
    ctx.set_gpr(2, ctx.gpr[7] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08968F30;
      }
      goto L_08968F1C;
    }
L_08968F1C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08968F30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 326u, 0x08961AC4u>(ctx, &aot_mem) && ctx.pc == 0x08968F30u) goto L_08968F30;
    return;
L_08968F30:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08968F50;
      }
      goto L_08968F44;
    }
L_08968F44:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08968F54;
      }
      goto L_08968F50;
    }
L_08968F50:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_08968F54;
L_08968F54:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A9A8;
      }
      goto L_08968F60;
    }
L_08968F60:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08968F74;
      }
      goto L_08968F68;
    }
L_08968F68:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08968F78;
      }
      goto L_08968F74;
    }
L_08968F74:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(12));
    goto L_08968F78;
L_08968F78:
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[3]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    goto L_08968F80;
L_08968F80:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0896852C;
      }
      goto L_08968F88;
    }
L_08968F88:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(18, ctx.gpr[2] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(23, ctx.gpr[4] >> 5u);
    ctx.set_gpr(2, ctx.gpr[23] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1972));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(1972)));
    ctx.set_gpr(3, ctx.gpr[4] & 31u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(22, ctx.gpr[2] << (ctx.gpr[3] & 31u));
    goto L_08968FC4;
L_08968FC4:
    ctx.set_gpr(1, ctx.gpr[30] < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08968FD8;
      }
      goto L_08968FD0;
    }
L_08968FD0:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_089690C4;
      }
      goto L_08968FD8;
    }
L_08968FD8:
    ctx.set_gpr(23, ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, ctx.gpr[23] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08969BDC;
      }
      goto L_08968FE8;
    }
L_08968FE8:
    ctx.set_gpr(2, ctx.gpr[23] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1972));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(1972)));
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08968FD8;
      }
      goto L_08969004;
    }
L_08969004:
    ctx.set_gpr(3, ctx.gpr[23] << 5u);
    ctx.set_gpr(2, ctx.gpr[23] << 7u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(18, ctx.gpr[2] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089690C4;
      }
      goto L_08969028;
    }
L_08969028:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(22, ctx.gpr[22] << 1u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089690C4;
      }
      goto L_0896903C;
    }
L_0896903C:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_089690C4;
      }
      goto L_08969044;
    }
L_08969044:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089690C4;
      }
      goto L_0896904C;
    }
L_0896904C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08969064u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08969064u) goto L_08969064;
    return;
L_08969064:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08969070u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x08969070u) goto L_08969070;
    return;
L_08969070:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08969088u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08969088u) goto L_08969088;
    return;
L_08969088:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089690A0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089690A0u) goto L_089690A0;
    return;
L_089690A0:
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11220)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, 2228u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(3024));
    ctx.set_gpr(31, 0x089690C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x089690C4u) goto L_089690C4;
    return;
L_089690C4:
    ctx.set_gpr(2, ctx.gpr[22] & ctx.gpr[30]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08969028;
      }
      goto L_089690D0;
    }
L_089690D0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089690F0;
      }
      goto L_089690E4;
    }
L_089690E4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089690F4;
      }
      goto L_089690F0;
    }
L_089690F0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_089690F4;
L_089690F4:
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08969124;
      }
      goto L_08969104;
    }
L_08969104:
    ctx.set_gpr(2, ~(ctx.gpr[22] | 0u));
    ctx.set_gpr(30, ctx.gpr[30] & ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(22, ctx.gpr[22] << 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08968FC4;
      }
      goto L_08969124;
    }
L_08969124:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 11u);
    ctx.set_gpr(4, ctx.gpr[2] >> 16u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(3, ctx.gpr[2] >> 31u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08969158;
      }
      goto L_08969148;
    }
L_08969148:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] & 32767u);
    ctx.set_gpr(2, ctx.gpr[2] << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[2]);
    goto L_08969158;
L_08969158:
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 27u);
    ctx.set_gpr(2, ctx.gpr[2] >> 28u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(22, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08969210;
      }
      goto L_08969188;
    }
L_08969188:
    ctx.set_gpr(1, ctx.gpr[22] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08969210;
      }
      goto L_08969194;
    }
L_08969194:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08969210;
      }
      goto L_0896919C;
    }
L_0896919C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089691B4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089691B4u) goto L_089691B4;
    return;
L_089691B4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089691C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x089691C0u) goto L_089691C0;
    return;
L_089691C0:
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089691D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x089691D0u) goto L_089691D0;
    return;
L_089691D0:
    ctx.set_gpr(30, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089691E8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089691E8u) goto L_089691E8;
    return;
L_089691E8:
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11152)));
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[30] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(3060));
    ctx.set_gpr(31, 0x08969210u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08969210u) goto L_08969210;
    return;
L_08969210:
    ctx.set_gpr(2, ctx.gpr[22] - ctx.gpr[19]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(3, ctx.gpr[3] >> 31u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08969234;
      }
      goto L_08969228;
    }
L_08969228:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08969238;
      }
      goto L_08969234;
    }
L_08969234:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(12));
    goto L_08969238;
L_08969238:
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(3, ctx.gpr[3] >> 31u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08969260;
      }
      goto L_08969254;
    }
L_08969254:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08969264;
      }
      goto L_08969260;
    }
L_08969260:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(12));
    goto L_08969264;
L_08969264:
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(3, ctx.gpr[3] >> 31u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896928C;
      }
      goto L_08969280;
    }
L_08969280:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08969290;
      }
      goto L_0896928C;
    }
L_0896928C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(12));
    goto L_08969290;
L_08969290:
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08969474;
      }
      goto L_089692B4;
    }
L_089692B4:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[17] + ctx.gpr[22]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[20] & 65535u);
    ctx.set_gpr(5, ctx.gpr[4] << 5u);
    ctx.set_gpr(4, 65504u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | 31u);
    ctx.set_gpr(4, ctx.gpr[6] & ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(4, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[20] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089693C4;
      }
      goto L_08969304;
    }
L_08969304:
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, (ctx.gpr[20] >> 16u) & 0x00007FFFu);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(4, ctx.gpr[6] & ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[5]);
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, ctx.gpr[6] << 24u);
    ctx.set_gpr(4, ctx.gpr[4] >> 31u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089693F0;
      }
      goto L_08969330;
    }
L_08969330:
    ctx.set_gpr(5, ctx.gpr[3] << 7u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, 0u & 1u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, 0u & 31u);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-125));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u & 511u);
    ctx.set_gpr(3, ctx.gpr[2] << 15u);
    ctx.set_gpr(2, 65280u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32767u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089693F0;
      }
      goto L_089693C4;
    }
L_089693C4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_089693F0;
      }
      goto L_089693D8;
    }
L_089693D8:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, 0u & 32767u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[2]));
    goto L_089693F0;
L_089693F0:
    ctx.set_gpr(3, ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[22] - ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] >> 2u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 15u);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08969444;
      }
      goto L_08969430;
    }
L_08969430:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x08969444u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 326u, 0x08961AC4u>(ctx, &aot_mem) && ctx.pc == 0x08969444u) goto L_08969444;
    return;
L_08969444:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08969464;
      }
      goto L_08969458;
    }
L_08969458:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08969468;
      }
      goto L_08969464;
    }
L_08969464:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_08969468;
L_08969468:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A9A8;
      }
      goto L_08969474;
    }
L_08969474:
    ctx.set_gpr(7, ctx.gpr[17] + ctx.gpr[19]);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(8, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, ctx.gpr[4] & 255u);
    ctx.set_gpr(6, ctx.gpr[3] << 5u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-8161));
    ctx.set_gpr(3, ctx.gpr[8] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[6]);
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, 0u & 1u);
    ctx.set_gpr(8, ctx.gpr[3] << 6u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-65));
    ctx.set_gpr(6, ctx.gpr[9] & ctx.gpr[6]);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[8]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(8, ctx.gpr[3] << 5u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-33));
    ctx.set_gpr(6, ctx.gpr[9] & ctx.gpr[6]);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[8]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(6, ctx.gpr[8] & ctx.gpr[6]);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08969628;
      }
      goto L_089694F0;
    }
L_089694F0:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08969628;
      }
      goto L_089694F8;
    }
L_089694F8:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 4u);
    ctx.set_gpr(1, ctx.gpr[19] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08969518;
      }
      goto L_0896950C;
    }
L_0896950C:
    ctx.set_gpr(5, ctx.gpr[4] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089695E8;
      }
      goto L_08969518;
    }
L_08969518:
    ctx.set_gpr(20, ctx.gpr[19] + static_cast<std::uint32_t>(-12));
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, (ctx.gpr[20] >> 16u) & 0x00007FFFu);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[5]);
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, (ctx.gpr[4] >> 8u) & 0x000001FFu);
    ctx.set_gpr(4, ctx.gpr[3] << 15u);
    ctx.set_gpr(3, 65280u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 32767u);
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(4, 0u & 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(4, ctx.gpr[4] << 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, 0u & 31u);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-125));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08969778;
      }
      goto L_089695E8;
    }
L_089695E8:
    ctx.set_gpr(20, ctx.gpr[19] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, ctx.gpr[3] << 7u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u & 15u);
    ctx.set_gpr(4, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08969778;
      }
      goto L_08969628;
    }
L_08969628:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[20] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08969644;
      }
      goto L_08969638;
    }
L_08969638:
    ctx.set_gpr(3, ctx.gpr[4] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08969710;
      }
      goto L_08969644;
    }
L_08969644:
    ctx.set_gpr(8, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, (ctx.gpr[20] >> 16u) & 0x00007FFFu);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[8] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[6]);
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, (ctx.gpr[4] >> 8u) & 0x000001FFu);
    ctx.set_gpr(4, ctx.gpr[3] << 15u);
    ctx.set_gpr(3, 65280u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 32767u);
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[6]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[6]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(4, 0u & 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(4, ctx.gpr[4] << 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, 0u & 31u);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-125));
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08969744;
      }
      goto L_089696F8;
    }
L_089696F8:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08969744;
      }
      goto L_08969710;
    }
L_08969710:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, 0u & 1u);
    ctx.set_gpr(4, ctx.gpr[3] << 7u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08969744;
      }
      goto L_08969734;
    }
L_08969734:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(4));
    goto L_08969744;
L_08969744:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[5] - ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] >> 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & 15u);
    ctx.set_gpr(4, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08969778;
L_08969778:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[20] & 65535u);
    ctx.set_gpr(4, ctx.gpr[3] << 5u);
    ctx.set_gpr(3, 65504u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 31u);
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[6]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(8, ctx.gpr[2] + 0u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(11, rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, ctx.gpr[4] & 255u);
    ctx.set_gpr(10, ctx.gpr[3] << 5u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-8161));
    ctx.set_gpr(3, ctx.gpr[11] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[10]);
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, 0u & 1u);
    ctx.set_gpr(11, ctx.gpr[3] << 6u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(-65));
    ctx.set_gpr(10, ctx.gpr[12] & ctx.gpr[10]);
    ctx.set_gpr(10, ctx.gpr[10] | ctx.gpr[11]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(11, ctx.gpr[3] << 5u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(-33));
    ctx.set_gpr(10, ctx.gpr[12] & ctx.gpr[10]);
    ctx.set_gpr(10, ctx.gpr[10] | ctx.gpr[11]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, ctx.gpr[10] & ctx.gpr[5]);
    ctx.set_gpr(10, ctx.gpr[10] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08969954;
      }
      goto L_08969824;
    }
L_08969824:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 4u);
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08969844;
      }
      goto L_08969838;
    }
L_08969838:
    ctx.set_gpr(5, ctx.gpr[4] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08969914;
      }
      goto L_08969844;
    }
L_08969844:
    ctx.set_gpr(9, ctx.gpr[2] + static_cast<std::uint32_t>(-12));
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, (ctx.gpr[9] >> 16u) & 0x00007FFFu);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[5]);
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, (ctx.gpr[4] >> 8u) & 0x000001FFu);
    ctx.set_gpr(4, ctx.gpr[3] << 15u);
    ctx.set_gpr(3, 65280u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 32767u);
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(4, 0u & 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(4, ctx.gpr[4] << 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, 0u & 31u);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-125));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08969A2C;
      }
      goto L_08969914;
    }
L_08969914:
    ctx.set_gpr(9, ctx.gpr[2] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, ctx.gpr[3] << 7u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u & 15u);
    ctx.set_gpr(4, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08969A2C;
      }
      goto L_08969954;
    }
L_08969954:
    ctx.set_gpr(10, 0u | 65535u);
    ctx.set_gpr(12, rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(11, ctx.gpr[10] & 32767u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(10, ctx.gpr[12] & ctx.gpr[10]);
    ctx.set_gpr(10, ctx.gpr[10] | ctx.gpr[11]);
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, (ctx.gpr[4] >> 8u) & 0x000001FFu);
    ctx.set_gpr(10, ctx.gpr[4] << 15u);
    ctx.set_gpr(4, 65280u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | 32767u);
    ctx.set_gpr(4, ctx.gpr[11] & ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(10, ctx.gpr[6] << 7u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[6]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[10]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[6]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[10]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(4, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, 0u & 31u);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-125));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08969A08;
      }
      goto L_08969A04;
    }
L_08969A04:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(12));
    goto L_08969A08;
L_08969A08:
    ctx.set_gpr(3, ctx.gpr[8] >> 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & 15u);
    ctx.set_gpr(4, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08969A2C;
L_08969A2C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[9] & 65535u);
    ctx.set_gpr(4, ctx.gpr[3] << 5u);
    ctx.set_gpr(3, 65504u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 31u);
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 11u);
    ctx.set_gpr(4, ctx.gpr[3] >> 16u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(3, ctx.gpr[3] >> 31u);
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08969A98;
      }
      goto L_08969A88;
    }
L_08969A88:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] & 32767u);
    ctx.set_gpr(3, ctx.gpr[3] << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[3]);
    goto L_08969A98;
L_08969A98:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 27u);
    ctx.set_gpr(3, ctx.gpr[3] >> 28u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[7] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(75)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08969AE4;
      }
      goto L_08969AD8;
    }
L_08969AD8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08969AE8;
      }
      goto L_08969AE4;
    }
L_08969AE4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_08969AE8;
L_08969AE8:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(76), ctx.gpr[7]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(75)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08969B10;
      }
      goto L_08969B04;
    }
L_08969B04:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08969B14;
      }
      goto L_08969B10;
    }
L_08969B10:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_08969B14;
L_08969B14:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(72), ctx.gpr[7]);
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08969B40;
      }
      goto L_08969B34;
    }
L_08969B34:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08969B44;
      }
      goto L_08969B40;
    }
L_08969B40:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_08969B44;
L_08969B44:
    ctx.set_gpr(2, ctx.gpr[7] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08969B70;
      }
      goto L_08969B64;
    }
L_08969B64:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08969B74;
      }
      goto L_08969B70;
    }
L_08969B70:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_08969B74;
L_08969B74:
    ctx.set_gpr(2, ctx.gpr[7] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(1, ctx.gpr[19] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08969B8C;
      }
      goto L_08969B88;
    }
L_08969B88:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[7]);
    goto L_08969B8C;
L_08969B8C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08969BAC;
      }
      goto L_08969B98;
    }
L_08969B98:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08969BACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 326u, 0x08961AC4u>(ctx, &aot_mem) && ctx.pc == 0x08969BACu) goto L_08969BAC;
    return;
L_08969BAC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08969BCC;
      }
      goto L_08969BC0;
    }
L_08969BC0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08969BD0;
      }
      goto L_08969BCC;
    }
L_08969BCC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_08969BD0;
L_08969BD0:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A9A8;
      }
      goto L_08969BDC;
    }
L_08969BDC:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 11u);
    ctx.set_gpr(4, ctx.gpr[2] >> 16u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(3, ctx.gpr[2] >> 31u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08969C14;
      }
      goto L_08969C04;
    }
L_08969C04:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] & 32767u);
    ctx.set_gpr(2, ctx.gpr[2] << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[2]);
    goto L_08969C14;
L_08969C14:
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 27u);
    ctx.set_gpr(2, ctx.gpr[2] >> 28u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(17, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896A450;
      }
      goto L_08969C58;
    }
L_08969C58:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08969E0C;
      }
      goto L_08969C64;
    }
L_08969C64:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08969E0C;
      }
      goto L_08969C70;
    }
L_08969C70:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(4, ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08969D88;
      }
      goto L_08969C80;
    }
L_08969C80:
    ctx.set_gpr(1, ctx.gpr[18] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08969D88;
      }
      goto L_08969C8C;
    }
L_08969C8C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, ctx.gpr[4] << 24u);
    ctx.set_gpr(4, ctx.gpr[4] >> 31u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08969CB8;
      }
      goto L_08969CA4;
    }
L_08969CA4:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(4, ctx.gpr[4] << 19u);
    ctx.set_gpr(4, ctx.gpr[4] >> 24u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08969CD8;
      }
      goto L_08969CB8;
    }
L_08969CB8:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(4, ctx.gpr[4] << 19u);
    ctx.set_gpr(5, ctx.gpr[4] >> 24u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[4] << 8u);
    ctx.set_gpr(4, ctx.gpr[4] >> 23u);
    ctx.set_gpr(4, ctx.gpr[4] << 8u);
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    goto L_08969CD8;
L_08969CD8:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08969D88;
      }
      goto L_08969CE0;
    }
L_08969CE0:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, ctx.gpr[4] << 24u);
    ctx.set_gpr(4, ctx.gpr[4] >> 31u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08969D08;
      }
      goto L_08969CF4;
    }
L_08969CF4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] << 11u);
    ctx.set_gpr(4, ctx.gpr[4] >> 16u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08969D24;
      }
      goto L_08969D08;
    }
L_08969D08:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[4] & 32767u);
    ctx.set_gpr(5, ctx.gpr[4] << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] << 11u);
    ctx.set_gpr(4, ctx.gpr[4] >> 16u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[5]);
    goto L_08969D24;
L_08969D24:
    ctx.set_gpr(1, 8192u << 16u);
    ctx.set_gpr(1, ctx.gpr[4] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08969D88;
      }
      goto L_08969D34;
    }
L_08969D34:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, ctx.gpr[4] << 24u);
    ctx.set_gpr(4, ctx.gpr[4] >> 31u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08969D5C;
      }
      goto L_08969D48;
    }
L_08969D48:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] << 11u);
    ctx.set_gpr(4, ctx.gpr[4] >> 16u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08969D78;
      }
      goto L_08969D5C;
    }
L_08969D5C:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[4] & 32767u);
    ctx.set_gpr(5, ctx.gpr[4] << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] << 11u);
    ctx.set_gpr(4, ctx.gpr[4] >> 16u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[5]);
    goto L_08969D78;
L_08969D78:
    ctx.set_gpr(4, ctx.gpr[18] + ctx.gpr[4]);
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08969E0C;
      }
      goto L_08969D88;
    }
L_08969D88:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08969E0C;
      }
      goto L_08969D90;
    }
L_08969D90:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08969DA8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08969DA8u) goto L_08969DA8;
    return;
L_08969DA8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08969DB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x08969DB4u) goto L_08969DB4;
    return;
L_08969DB4:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08969DCCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08969DCCu) goto L_08969DCC;
    return;
L_08969DCC:
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08969DE4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08969DE4u) goto L_08969DE4;
    return;
L_08969DE4:
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11252)));
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, ctx.gpr[23] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, 2228u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(3092));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x08969E0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08969E0Cu) goto L_08969E0C;
    return;
L_08969E0C:
    ctx.set_gpr(2, ctx.gpr[17] - ctx.gpr[19]);
    ctx.set_gpr(7, ctx.gpr[18] + ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(8, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, ctx.gpr[4] & 255u);
    ctx.set_gpr(6, ctx.gpr[3] << 5u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-8161));
    ctx.set_gpr(3, ctx.gpr[8] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[6]);
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, 0u & 1u);
    ctx.set_gpr(8, ctx.gpr[3] << 6u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-65));
    ctx.set_gpr(6, ctx.gpr[9] & ctx.gpr[6]);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[8]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(8, ctx.gpr[3] << 5u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-33));
    ctx.set_gpr(6, ctx.gpr[9] & ctx.gpr[6]);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[8]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(6, ctx.gpr[8] & ctx.gpr[6]);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08969FC8;
      }
      goto L_08969E90;
    }
L_08969E90:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08969FC8;
      }
      goto L_08969E98;
    }
L_08969E98:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 4u);
    ctx.set_gpr(1, ctx.gpr[19] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08969EB8;
      }
      goto L_08969EAC;
    }
L_08969EAC:
    ctx.set_gpr(5, ctx.gpr[4] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08969F88;
      }
      goto L_08969EB8;
    }
L_08969EB8:
    ctx.set_gpr(20, ctx.gpr[19] + static_cast<std::uint32_t>(-12));
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, (ctx.gpr[20] >> 16u) & 0x00007FFFu);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[5]);
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, (ctx.gpr[4] >> 8u) & 0x000001FFu);
    ctx.set_gpr(4, ctx.gpr[3] << 15u);
    ctx.set_gpr(3, 65280u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 32767u);
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(4, 0u & 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(4, ctx.gpr[4] << 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, 0u & 31u);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-125));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A118;
      }
      goto L_08969F88;
    }
L_08969F88:
    ctx.set_gpr(20, ctx.gpr[19] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, ctx.gpr[3] << 7u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u & 15u);
    ctx.set_gpr(4, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A118;
      }
      goto L_08969FC8;
    }
L_08969FC8:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[20] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08969FE4;
      }
      goto L_08969FD8;
    }
L_08969FD8:
    ctx.set_gpr(3, ctx.gpr[4] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896A0B0;
      }
      goto L_08969FE4;
    }
L_08969FE4:
    ctx.set_gpr(8, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, (ctx.gpr[20] >> 16u) & 0x00007FFFu);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[8] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[6]);
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, (ctx.gpr[4] >> 8u) & 0x000001FFu);
    ctx.set_gpr(4, ctx.gpr[3] << 15u);
    ctx.set_gpr(3, 65280u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 32767u);
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[6]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[6]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(4, 0u & 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(4, ctx.gpr[4] << 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, 0u & 31u);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-125));
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896A0E4;
      }
      goto L_0896A098;
    }
L_0896A098:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A0E4;
      }
      goto L_0896A0B0;
    }
L_0896A0B0:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, 0u & 1u);
    ctx.set_gpr(4, ctx.gpr[3] << 7u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896A0E4;
      }
      goto L_0896A0D4;
    }
L_0896A0D4:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(4));
    goto L_0896A0E4;
L_0896A0E4:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[5] - ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] >> 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & 15u);
    ctx.set_gpr(4, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_0896A118;
L_0896A118:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[20] & 65535u);
    ctx.set_gpr(4, ctx.gpr[3] << 5u);
    ctx.set_gpr(3, 65504u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 31u);
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[6]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(10, rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, ctx.gpr[4] & 255u);
    ctx.set_gpr(9, ctx.gpr[3] << 5u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-8161));
    ctx.set_gpr(3, ctx.gpr[10] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[9]);
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, 0u & 1u);
    ctx.set_gpr(10, ctx.gpr[3] << 6u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(-65));
    ctx.set_gpr(9, ctx.gpr[11] & ctx.gpr[9]);
    ctx.set_gpr(9, ctx.gpr[9] | ctx.gpr[10]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(10, ctx.gpr[3] << 5u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(-33));
    ctx.set_gpr(9, ctx.gpr[11] & ctx.gpr[9]);
    ctx.set_gpr(9, ctx.gpr[9] | ctx.gpr[10]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, ctx.gpr[9] & ctx.gpr[5]);
    ctx.set_gpr(9, ctx.gpr[9] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A2F0;
      }
      goto L_0896A1C0;
    }
L_0896A1C0:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 4u);
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A1E0;
      }
      goto L_0896A1D4;
    }
L_0896A1D4:
    ctx.set_gpr(5, ctx.gpr[4] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896A2B0;
      }
      goto L_0896A1E0;
    }
L_0896A1E0:
    ctx.set_gpr(8, ctx.gpr[2] + static_cast<std::uint32_t>(-12));
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, (ctx.gpr[8] >> 16u) & 0x00007FFFu);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, (ctx.gpr[4] >> 8u) & 0x000001FFu);
    ctx.set_gpr(3, ctx.gpr[2] << 15u);
    ctx.set_gpr(2, 65280u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32767u);
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, 0u & 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, 0u & 31u);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-125));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A3C8;
      }
      goto L_0896A2B0;
    }
L_0896A2B0:
    ctx.set_gpr(8, ctx.gpr[2] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 7u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u & 15u);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A3C8;
      }
      goto L_0896A2F0;
    }
L_0896A2F0:
    ctx.set_gpr(9, 0u | 65535u);
    ctx.set_gpr(11, rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(10, ctx.gpr[9] & 32767u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(9, ctx.gpr[11] & ctx.gpr[9]);
    ctx.set_gpr(9, ctx.gpr[9] | ctx.gpr[10]);
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, (ctx.gpr[4] >> 8u) & 0x000001FFu);
    ctx.set_gpr(9, ctx.gpr[4] << 15u);
    ctx.set_gpr(4, 65280u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | 32767u);
    ctx.set_gpr(4, ctx.gpr[10] & ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(9, ctx.gpr[6] << 7u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[6]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[9]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[6]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[9]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(4, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, 0u & 31u);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-125));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896A3A4;
      }
      goto L_0896A3A0;
    }
L_0896A3A0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_0896A3A4;
L_0896A3A4:
    ctx.set_gpr(2, ctx.gpr[2] >> 2u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 15u);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_0896A3C8;
L_0896A3C8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[8] & 65535u);
    ctx.set_gpr(3, ctx.gpr[2] << 5u);
    ctx.set_gpr(2, 65504u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 31u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0896A420;
      }
      goto L_0896A40C;
    }
L_0896A40C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0896A420u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 326u, 0x08961AC4u>(ctx, &aot_mem) && ctx.pc == 0x0896A420u) goto L_0896A420;
    return;
L_0896A420:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896A440;
      }
      goto L_0896A434;
    }
L_0896A434:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A444;
      }
      goto L_0896A440;
    }
L_0896A440:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_0896A444;
L_0896A444:
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A9A8;
      }
      goto L_0896A450;
    }
L_0896A450:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896A49C;
      }
      goto L_0896A45C;
    }
L_0896A45C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A474;
      }
      goto L_0896A468;
    }
L_0896A468:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    // nop
      if (branch_taken) {
          goto L_0896A49C;
      }
      goto L_0896A474;
    }
L_0896A474:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A484;
      }
      goto L_0896A47C;
    }
L_0896A47C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A488;
      }
      goto L_0896A484;
    }
L_0896A484:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(104)));
    goto L_0896A488;
L_0896A488:
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A4B0;
      }
      goto L_0896A49C;
    }
L_0896A49C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0896A4A8u);
    // nop
    goto L_0896B574;
L_0896A4A8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 326u, 0x08966AF0u>(ctx, &aot_mem); return;
      }
      goto L_0896A4B0;
    }
L_0896A4B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[19]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A664;
      }
      goto L_0896A4C8;
    }
L_0896A4C8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(288)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896A4DCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896A4DCu) goto L_0896A4DC;
    return;
L_0896A4DC:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, ctx.gpr[7] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(500)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896A508u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896A508u) goto L_0896A508;
    return;
L_0896A508:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A52C;
      }
      goto L_0896A510;
    }
L_0896A510:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(284)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896A524u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896A524u) goto L_0896A524;
    return;
L_0896A524:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 326u, 0x08966AF0u>(ctx, &aot_mem); return;
      }
      goto L_0896A52C;
    }
L_0896A52C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, ctx.gpr[2] & 64u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A5E8;
      }
      goto L_0896A540;
    }
L_0896A540:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0896A644;
      }
      goto L_0896A54C;
    }
L_0896A54C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A560;
      }
      goto L_0896A558;
    }
L_0896A558:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A564;
      }
      goto L_0896A560;
    }
L_0896A560:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(104)));
    goto L_0896A564;
L_0896A564:
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A644;
      }
      goto L_0896A578;
    }
L_0896A578:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0896A644;
      }
      goto L_0896A580;
    }
L_0896A580:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896A598u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896A598u) goto L_0896A598;
    return;
L_0896A598:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A5AC;
      }
      goto L_0896A5A4;
    }
L_0896A5A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A5B0;
      }
      goto L_0896A5AC;
    }
L_0896A5AC:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(104)));
    goto L_0896A5B0;
L_0896A5B0:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896A5C4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896A5C4u) goto L_0896A5C4;
    return;
L_0896A5C4:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(3116));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0896A5E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x0896A5E0u) goto L_0896A5E0;
    return;
L_0896A5E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A644;
      }
      goto L_0896A5E8;
    }
L_0896A5E8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896A644;
      }
      goto L_0896A5F8;
    }
L_0896A5F8:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A60C;
      }
      goto L_0896A604;
    }
L_0896A604:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A610;
      }
      goto L_0896A60C;
    }
L_0896A60C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(104)));
    goto L_0896A610;
L_0896A610:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896A624u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896A624u) goto L_0896A624;
    return;
L_0896A624:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(3220));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(31, 0x0896A644u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 441u, 0x08955DC4u>(ctx, &aot_mem) && ctx.pc == 0x0896A644u) goto L_0896A644;
    return;
L_0896A644:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(284)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896A658u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896A658u) goto L_0896A658;
    return;
L_0896A658:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A9A8;
      }
      goto L_0896A664;
    }
L_0896A664:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0896A764;
      }
      goto L_0896A674;
    }
L_0896A674:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, ctx.gpr[2] & 128u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A764;
      }
      goto L_0896A688;
    }
L_0896A688:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(288)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896A69Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896A69Cu) goto L_0896A69C;
    return;
L_0896A69C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(500)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896A6BCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896A6BCu) goto L_0896A6BC;
    return;
L_0896A6BC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896A750;
      }
      goto L_0896A6C4;
    }
L_0896A6C4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0896A748;
      }
      goto L_0896A6D0;
    }
L_0896A6D0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0896A748;
      }
      goto L_0896A6D8;
    }
L_0896A6D8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896A6F0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896A6F0u) goto L_0896A6F0;
    return;
L_0896A6F0:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(180)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896A70Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896A70Cu) goto L_0896A70C;
    return;
L_0896A70C:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(320)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896A724u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896A724u) goto L_0896A724;
    return;
L_0896A724:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(3344));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(9, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0896A748u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x0896A748u) goto L_0896A748;
    return;
L_0896A748:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(116), ctx.gpr[2]);
    goto L_0896A750;
L_0896A750:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(284)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896A764u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896A764u) goto L_0896A764;
    return;
L_0896A764:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0896A778u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 775u, 0x08963BACu>(ctx, &aot_mem) && ctx.pc == 0x0896A778u) goto L_0896A778;
    return;
L_0896A778:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896A9A4;
      }
      goto L_0896A784;
    }
L_0896A784:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(288)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896A798u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896A798u) goto L_0896A798;
    return;
L_0896A798:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A888;
      }
      goto L_0896A7A4;
    }
L_0896A7A4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(500)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896A7C4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896A7C4u) goto L_0896A7C4;
    return;
L_0896A7C4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A7EC;
      }
      goto L_0896A7CC;
    }
L_0896A7CC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(284)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896A7E0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896A7E0u) goto L_0896A7E0;
    return;
L_0896A7E0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A9A8;
      }
      goto L_0896A7EC;
    }
L_0896A7EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896A80C;
      }
      goto L_0896A7FC;
    }
L_0896A7FC:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0896A80Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 173u, 0x0893CAD8u>(ctx, &aot_mem) && ctx.pc == 0x0896A80Cu) goto L_0896A80C;
    return;
L_0896A80C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0896A868;
      }
      goto L_0896A818;
    }
L_0896A818:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0896A868;
      }
      goto L_0896A820;
    }
L_0896A820:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896A838u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896A838u) goto L_0896A838;
    return;
L_0896A838:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896A84Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896A84Cu) goto L_0896A84C;
    return;
L_0896A84C:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(3496));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(7, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0896A868u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x0896A868u) goto L_0896A868;
    return;
L_0896A868:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(284)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896A87Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896A87Cu) goto L_0896A87C;
    return;
L_0896A87C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A9A8;
      }
      goto L_0896A888;
    }
L_0896A888:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, ctx.gpr[7] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(500)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896A8B4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896A8B4u) goto L_0896A8B4;
    return;
L_0896A8B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A8D8;
      }
      goto L_0896A8BC;
    }
L_0896A8BC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(284)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896A8D0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896A8D0u) goto L_0896A8D0;
    return;
L_0896A8D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 326u, 0x08966AF0u>(ctx, &aot_mem); return;
      }
      goto L_0896A8D8;
    }
L_0896A8D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, ctx.gpr[2] & 256u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A990;
      }
      goto L_0896A8EC;
    }
L_0896A8EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896A90C;
      }
      goto L_0896A8FC;
    }
L_0896A8FC:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0896A90Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 173u, 0x0893CAD8u>(ctx, &aot_mem) && ctx.pc == 0x0896A90Cu) goto L_0896A90C;
    return;
L_0896A90C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0896A990;
      }
      goto L_0896A918;
    }
L_0896A918:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0896A990;
      }
      goto L_0896A920;
    }
L_0896A920:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896A938u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896A938u) goto L_0896A938;
    return;
L_0896A938:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A954;
      }
      goto L_0896A944;
    }
L_0896A944:
    ctx.set_gpr(16, 2228u << 16u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-5868));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A95C;
      }
      goto L_0896A954;
    }
L_0896A954:
    ctx.set_gpr(16, 2228u << 16u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-7432));
    goto L_0896A95C;
L_0896A95C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896A970u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896A970u) goto L_0896A970;
    return;
L_0896A970:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(3600));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(8, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0896A990u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x0896A990u) goto L_0896A990;
    return;
L_0896A990:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(284)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896A9A4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896A9A4u) goto L_0896A9A4;
    return;
L_0896A9A4:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_0896A9A8;
L_0896A9A8:
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
L_0896A9DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896AA34;
      }
      goto L_0896AA0C;
    }
L_0896AA0C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(516)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896AA20u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896AA20u) goto L_0896AA20;
    return;
L_0896AA20:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(516)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896AA34u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896AA34u) goto L_0896AA34;
    return;
L_0896AA34:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(212)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B554;
      }
      goto L_0896AA40;
    }
L_0896AA40:
    ctx.set_gpr(18, ctx.gpr[17] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-1)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(4, ctx.gpr[3] >> 31u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0896AA60;
      }
      goto L_0896AA5C;
    }
L_0896AA5C:
    ctx.set_gpr(18, ctx.gpr[17] + static_cast<std::uint32_t>(-12));
    goto L_0896AA60;
L_0896AA60:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 11u);
    ctx.set_gpr(5, ctx.gpr[3] >> 16u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(4, ctx.gpr[3] >> 31u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0896AA94;
      }
      goto L_0896AA84;
    }
L_0896AA84:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] & 32767u);
    ctx.set_gpr(3, ctx.gpr[3] << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[3]);
    goto L_0896AA94;
L_0896AA94:
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 27u);
    ctx.set_gpr(3, ctx.gpr[3] >> 28u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(17, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0896AAD4;
      }
      goto L_0896AAC4;
    }
L_0896AAC4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0896AAD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 180u, 0x08960E58u>(ctx, &aot_mem) && ctx.pc == 0x0896AAD4u) goto L_0896AAD4;
    return;
L_0896AAD4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896AB3C;
      }
      goto L_0896AAE4;
    }
L_0896AAE4:
    ctx.set_gpr(3, ctx.gpr[3] | 3u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[17] >> 3u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(3, ctx.gpr[3] >> 31u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896AB24;
      }
      goto L_0896AB18;
    }
L_0896AB18:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896AB28;
      }
      goto L_0896AB24;
    }
L_0896AB24:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(12));
    goto L_0896AB28;
L_0896AB28:
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B554;
      }
      goto L_0896AB3C;
    }
L_0896AB3C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(4, ctx.gpr[3] >> 31u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0896AB64;
      }
      goto L_0896AB54;
    }
L_0896AB54:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896AB68;
      }
      goto L_0896AB64;
    }
L_0896AB64:
    ctx.set_gpr(3, 0u + 0u);
    goto L_0896AB68;
L_0896AB68:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896B554;
      }
      goto L_0896AB70;
    }
L_0896AB70:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] | 1u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[18] + ctx.gpr[17]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 11u);
    ctx.set_gpr(6, ctx.gpr[3] >> 16u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(5, ctx.gpr[3] >> 31u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0896ABB4;
      }
      goto L_0896ABA4;
    }
L_0896ABA4:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] & 32767u);
    ctx.set_gpr(3, ctx.gpr[3] << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[3]);
    goto L_0896ABB4;
L_0896ABB4:
    ctx.set_gpr(5, ctx.gpr[6] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 27u);
    ctx.set_gpr(3, ctx.gpr[3] >> 28u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896AC9C;
      }
      goto L_0896ABE8;
    }
L_0896ABE8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[5]);
    ctx.set_gpr(18, ctx.gpr[18] - ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(5, ctx.gpr[5] << 24u);
    ctx.set_gpr(5, ctx.gpr[5] >> 31u);
    ctx.set_gpr(6, ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896AC18;
      }
      goto L_0896AC0C;
    }
L_0896AC0C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896AC1C;
      }
      goto L_0896AC18;
    }
L_0896AC18:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(12));
    goto L_0896AC1C;
L_0896AC1C:
    ctx.set_gpr(5, ctx.gpr[18] + ctx.gpr[5]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896AC38;
      }
      goto L_0896AC2C;
    }
L_0896AC2C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896AC3C;
      }
      goto L_0896AC38;
    }
L_0896AC38:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(12));
    goto L_0896AC3C;
L_0896AC3C:
    ctx.set_gpr(5, ctx.gpr[18] + ctx.gpr[5]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(5, ctx.gpr[5] << 24u);
    ctx.set_gpr(5, ctx.gpr[5] >> 31u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896AC64;
      }
      goto L_0896AC58;
    }
L_0896AC58:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896AC68;
      }
      goto L_0896AC64;
    }
L_0896AC64:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(12));
    goto L_0896AC68;
L_0896AC68:
    ctx.set_gpr(5, ctx.gpr[7] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(5, ctx.gpr[5] << 24u);
    ctx.set_gpr(5, ctx.gpr[5] >> 31u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896AC90;
      }
      goto L_0896AC84;
    }
L_0896AC84:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896AC94;
      }
      goto L_0896AC90;
    }
L_0896AC90:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(12));
    goto L_0896AC94;
L_0896AC94:
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    goto L_0896AC9C;
L_0896AC9C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896B19C;
      }
      goto L_0896ACA8;
    }
L_0896ACA8:
    ctx.set_gpr(5, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, ctx.gpr[5] & 1u);
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, 0u & 1u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[7] & ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[6]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896AD80;
      }
      goto L_0896ACD4;
    }
L_0896ACD4:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(5, ctx.gpr[5] << 24u);
    ctx.set_gpr(5, ctx.gpr[5] >> 31u);
    ctx.set_gpr(7, ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896ACF8;
      }
      goto L_0896ACEC;
    }
L_0896ACEC:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896ACFC;
      }
      goto L_0896ACF8;
    }
L_0896ACF8:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(12));
    goto L_0896ACFC;
L_0896ACFC:
    ctx.set_gpr(5, ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896AD18;
      }
      goto L_0896AD0C;
    }
L_0896AD0C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896AD1C;
      }
      goto L_0896AD18;
    }
L_0896AD18:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(12));
    goto L_0896AD1C;
L_0896AD1C:
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, ctx.gpr[4] << 24u);
    ctx.set_gpr(4, ctx.gpr[4] >> 31u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896AD44;
      }
      goto L_0896AD38;
    }
L_0896AD38:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896AD48;
      }
      goto L_0896AD44;
    }
L_0896AD44:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(12));
    goto L_0896AD48;
L_0896AD48:
    ctx.set_gpr(4, ctx.gpr[6] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, ctx.gpr[4] << 24u);
    ctx.set_gpr(4, ctx.gpr[4] >> 31u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896AD70;
      }
      goto L_0896AD64;
    }
L_0896AD64:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896AD74;
      }
      goto L_0896AD70;
    }
L_0896AD70:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(12));
    goto L_0896AD74;
L_0896AD74:
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[3]);
    goto L_0896AD80;
L_0896AD80:
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(8, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, ctx.gpr[5] & 255u);
    ctx.set_gpr(4, ctx.gpr[3] << 5u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-8161));
    ctx.set_gpr(3, ctx.gpr[8] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, 0u & 1u);
    ctx.set_gpr(8, ctx.gpr[4] << 6u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-65));
    ctx.set_gpr(3, ctx.gpr[9] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[8]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(8, ctx.gpr[4] << 5u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-33));
    ctx.set_gpr(3, ctx.gpr[9] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[8]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(8, ctx.gpr[8] & ctx.gpr[3]);
    ctx.set_gpr(8, ctx.gpr[8] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896AF28;
      }
      goto L_0896ADF8;
    }
L_0896ADF8:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 4u);
    ctx.set_gpr(1, ctx.gpr[17] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896AE18;
      }
      goto L_0896AE0C;
    }
L_0896AE0C:
    ctx.set_gpr(3, ctx.gpr[5] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896AEE8;
      }
      goto L_0896AE18;
    }
L_0896AE18:
    ctx.set_gpr(7, ctx.gpr[17] + static_cast<std::uint32_t>(-12));
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, (ctx.gpr[7] >> 16u) & 0x00007FFFu);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, (ctx.gpr[5] >> 8u) & 0x000001FFu);
    ctx.set_gpr(4, ctx.gpr[3] << 15u);
    ctx.set_gpr(3, 65280u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 32767u);
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(4, 0u & 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(4, ctx.gpr[4] << 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, 0u & 31u);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-125));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B000;
      }
      goto L_0896AEE8;
    }
L_0896AEE8:
    ctx.set_gpr(7, ctx.gpr[17] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, ctx.gpr[4] << 7u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u & 15u);
    ctx.set_gpr(4, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B000;
      }
      goto L_0896AF28;
    }
L_0896AF28:
    ctx.set_gpr(8, 0u | 65535u);
    ctx.set_gpr(10, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(9, ctx.gpr[8] & 32767u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(8, ctx.gpr[10] & ctx.gpr[8]);
    ctx.set_gpr(8, ctx.gpr[8] | ctx.gpr[9]);
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, (ctx.gpr[5] >> 8u) & 0x000001FFu);
    ctx.set_gpr(8, ctx.gpr[5] << 15u);
    ctx.set_gpr(5, 65280u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] | 32767u);
    ctx.set_gpr(5, ctx.gpr[9] & ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[8]);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[9]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[8]);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[9]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(4, ctx.gpr[4] << 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, 0u & 31u);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-125));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896AFDC;
      }
      goto L_0896AFD8;
    }
L_0896AFD8:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    goto L_0896AFDC;
L_0896AFDC:
    ctx.set_gpr(3, ctx.gpr[6] >> 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & 15u);
    ctx.set_gpr(4, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_0896B000;
L_0896B000:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[7] & 65535u);
    ctx.set_gpr(4, ctx.gpr[3] << 5u);
    ctx.set_gpr(3, 65504u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 31u);
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 11u);
    ctx.set_gpr(4, ctx.gpr[3] >> 16u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(3, ctx.gpr[3] >> 31u);
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0896B06C;
      }
      goto L_0896B05C;
    }
L_0896B05C:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] & 32767u);
    ctx.set_gpr(3, ctx.gpr[3] << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[3]);
    goto L_0896B06C;
L_0896B06C:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 27u);
    ctx.set_gpr(3, ctx.gpr[3] >> 28u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(75)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(3, ctx.gpr[3] >> 31u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896B0BC;
      }
      goto L_0896B0B0;
    }
L_0896B0B0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B0C0;
      }
      goto L_0896B0BC;
    }
L_0896B0BC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(12));
    goto L_0896B0C0;
L_0896B0C0:
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(5, ctx.gpr[5] << 24u);
    ctx.set_gpr(5, ctx.gpr[5] >> 31u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896B0E8;
      }
      goto L_0896B0DC;
    }
L_0896B0DC:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B0EC;
      }
      goto L_0896B0E8;
    }
L_0896B0E8:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(12));
    goto L_0896B0EC;
L_0896B0EC:
    ctx.set_gpr(5, ctx.gpr[18] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(5, ctx.gpr[5] << 24u);
    ctx.set_gpr(5, ctx.gpr[5] >> 31u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896B114;
      }
      goto L_0896B108;
    }
L_0896B108:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B118;
      }
      goto L_0896B114;
    }
L_0896B114:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(12));
    goto L_0896B118;
L_0896B118:
    ctx.set_gpr(5, ctx.gpr[18] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(5, ctx.gpr[5] << 24u);
    ctx.set_gpr(5, ctx.gpr[5] >> 31u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896B140;
      }
      goto L_0896B134;
    }
L_0896B134:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B144;
      }
      goto L_0896B140;
    }
L_0896B140:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(12));
    goto L_0896B144;
L_0896B144:
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, ctx.gpr[4] << 24u);
    ctx.set_gpr(4, ctx.gpr[4] >> 31u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896B16C;
      }
      goto L_0896B160;
    }
L_0896B160:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B170;
      }
      goto L_0896B16C;
    }
L_0896B16C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(12));
    goto L_0896B170;
L_0896B170:
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0896B478;
      }
      goto L_0896B184;
    }
L_0896B184:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0896B194u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 63u, 0x08960574u>(ctx, &aot_mem) && ctx.pc == 0x0896B194u) goto L_0896B194;
    return;
L_0896B194:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B478;
      }
      goto L_0896B19C;
    }
L_0896B19C:
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(8, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, ctx.gpr[5] & 255u);
    ctx.set_gpr(4, ctx.gpr[3] << 5u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-8161));
    ctx.set_gpr(3, ctx.gpr[8] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, 0u & 1u);
    ctx.set_gpr(8, ctx.gpr[4] << 6u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-65));
    ctx.set_gpr(3, ctx.gpr[9] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[8]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(8, ctx.gpr[4] << 5u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-33));
    ctx.set_gpr(3, ctx.gpr[9] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[8]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(8, ctx.gpr[8] & ctx.gpr[3]);
    ctx.set_gpr(8, ctx.gpr[8] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B348;
      }
      goto L_0896B218;
    }
L_0896B218:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 4u);
    ctx.set_gpr(1, ctx.gpr[17] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B238;
      }
      goto L_0896B22C;
    }
L_0896B22C:
    ctx.set_gpr(3, ctx.gpr[5] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896B308;
      }
      goto L_0896B238;
    }
L_0896B238:
    ctx.set_gpr(7, ctx.gpr[17] + static_cast<std::uint32_t>(-12));
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, (ctx.gpr[7] >> 16u) & 0x00007FFFu);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, (ctx.gpr[5] >> 8u) & 0x000001FFu);
    ctx.set_gpr(4, ctx.gpr[3] << 15u);
    ctx.set_gpr(3, 65280u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 32767u);
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(4, 0u & 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(4, ctx.gpr[4] << 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, 0u & 31u);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-125));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B420;
      }
      goto L_0896B308;
    }
L_0896B308:
    ctx.set_gpr(7, ctx.gpr[17] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, ctx.gpr[4] << 7u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u & 15u);
    ctx.set_gpr(4, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B420;
      }
      goto L_0896B348;
    }
L_0896B348:
    ctx.set_gpr(8, 0u | 65535u);
    ctx.set_gpr(10, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(9, ctx.gpr[8] & 32767u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(8, ctx.gpr[10] & ctx.gpr[8]);
    ctx.set_gpr(8, ctx.gpr[8] | ctx.gpr[9]);
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, (ctx.gpr[5] >> 8u) & 0x000001FFu);
    ctx.set_gpr(8, ctx.gpr[5] << 15u);
    ctx.set_gpr(5, 65280u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] | 32767u);
    ctx.set_gpr(5, ctx.gpr[9] & ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[8]);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[9]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[8]);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[9]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(4, ctx.gpr[4] << 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, 0u & 31u);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-125));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896B3FC;
      }
      goto L_0896B3F8;
    }
L_0896B3F8:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    goto L_0896B3FC;
L_0896B3FC:
    ctx.set_gpr(3, ctx.gpr[6] >> 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & 15u);
    ctx.set_gpr(4, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_0896B420;
L_0896B420:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[7] & 65535u);
    ctx.set_gpr(4, ctx.gpr[3] << 5u);
    ctx.set_gpr(3, 65504u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 31u);
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0896B478;
      }
      goto L_0896B468;
    }
L_0896B468:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0896B478u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 8u, 0x0896012Cu>(ctx, &aot_mem) && ctx.pc == 0x0896B478u) goto L_0896B478;
    return;
L_0896B478:
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[17] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896B52C;
      }
      goto L_0896B488;
    }
L_0896B488:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & 2u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B4A4;
      }
      goto L_0896B498;
    }
L_0896B498:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0896B4A4u);
    // nop
    goto L_0896B574;
L_0896B4A4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 11u);
    ctx.set_gpr(6, ctx.gpr[3] >> 16u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(4, ctx.gpr[3] >> 31u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0896B4DC;
      }
      goto L_0896B4CC;
    }
L_0896B4CC:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] & 32767u);
    ctx.set_gpr(3, ctx.gpr[3] << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[3]);
    goto L_0896B4DC;
L_0896B4DC:
    ctx.set_gpr(4, ctx.gpr[6] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 27u);
    ctx.set_gpr(3, ctx.gpr[3] >> 28u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1988)));
    ctx.set_gpr(3, ctx.gpr[4] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896B554;
      }
      goto L_0896B510;
    }
L_0896B510:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1992)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0896B524u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 104u, 0x089654A0u>(ctx, &aot_mem) && ctx.pc == 0x0896B524u) goto L_0896B524;
    return;
L_0896B524:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B554;
      }
      goto L_0896B52C;
    }
L_0896B52C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(164)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896B554;
      }
      goto L_0896B538;
    }
L_0896B538:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & 2u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B554;
      }
      goto L_0896B548;
    }
L_0896B548:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0896B554u);
    // nop
    goto L_0896B574;
L_0896B554:
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
L_0896B574:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896B5D4;
      }
      goto L_0896B5AC;
    }
L_0896B5AC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(516)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896B5C0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896B5C0u) goto L_0896B5C0;
    return;
L_0896B5C0:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(516)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896B5D4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896B5D4u) goto L_0896B5D4;
    return;
L_0896B5D4:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BFD0;
      }
      goto L_0896B5E8;
    }
L_0896B5E8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(2, ctx.gpr[2] >> 3u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(22, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(20, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    goto L_0896B610;
L_0896B610:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BFB8;
      }
      goto L_0896B61C;
    }
L_0896B61C:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), 0u);
    goto L_0896B624;
L_0896B624:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0896B640;
      }
      goto L_0896B630;
    }
L_0896B630:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0896B640u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 180u, 0x08960E58u>(ctx, &aot_mem) && ctx.pc == 0x0896B640u) goto L_0896B640;
    return;
L_0896B640:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896B664;
      }
      goto L_0896B658;
    }
L_0896B658:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B668;
      }
      goto L_0896B664;
    }
L_0896B664:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_0896B668;
L_0896B668:
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 11u);
    ctx.set_gpr(4, ctx.gpr[2] >> 16u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0896B698;
      }
      goto L_0896B688;
    }
L_0896B688:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] & 32767u);
    ctx.set_gpr(2, ctx.gpr[2] << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[2]);
    goto L_0896B698;
L_0896B698:
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 27u);
    ctx.set_gpr(2, ctx.gpr[2] >> 28u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + ctx.gpr[6]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 11u);
    ctx.set_gpr(7, ctx.gpr[2] >> 16u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(3, ctx.gpr[2] >> 31u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0896B6F4;
      }
      goto L_0896B6E4;
    }
L_0896B6E4:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] & 32767u);
    ctx.set_gpr(2, ctx.gpr[2] << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[2]);
    goto L_0896B6F4;
L_0896B6F4:
    ctx.set_gpr(3, ctx.gpr[7] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 27u);
    ctx.set_gpr(2, ctx.gpr[2] >> 28u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896B7DC;
      }
      goto L_0896B728;
    }
L_0896B728:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(19, ctx.gpr[19] - ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    ctx.set_gpr(7, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896B758;
      }
      goto L_0896B74C;
    }
L_0896B74C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B75C;
      }
      goto L_0896B758;
    }
L_0896B758:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_0896B75C;
L_0896B75C:
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896B778;
      }
      goto L_0896B76C;
    }
L_0896B76C:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B77C;
      }
      goto L_0896B778;
    }
L_0896B778:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(12));
    goto L_0896B77C;
L_0896B77C:
    ctx.set_gpr(7, ctx.gpr[19] + ctx.gpr[7]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(7, ctx.gpr[7] << 24u);
    ctx.set_gpr(7, ctx.gpr[7] >> 31u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896B7A4;
      }
      goto L_0896B798;
    }
L_0896B798:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B7A8;
      }
      goto L_0896B7A4;
    }
L_0896B7A4:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(12));
    goto L_0896B7A8;
L_0896B7A8:
    ctx.set_gpr(7, ctx.gpr[2] + ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(7, ctx.gpr[7] << 24u);
    ctx.set_gpr(7, ctx.gpr[7] >> 31u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896B7D0;
      }
      goto L_0896B7C4;
    }
L_0896B7C4:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B7D4;
      }
      goto L_0896B7D0;
    }
L_0896B7D0:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(12));
    goto L_0896B7D4;
L_0896B7D4:
    ctx.set_gpr(7, ctx.gpr[8] + ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_0896B7DC;
L_0896B7DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0896BCD0;
      }
      goto L_0896B7E8;
    }
L_0896B7E8:
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, ctx.gpr[2] & 1u);
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, 0u & 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[8] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[7]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896B8C0;
      }
      goto L_0896B814;
    }
L_0896B814:
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896B83C;
      }
      goto L_0896B830;
    }
L_0896B830:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B840;
      }
      goto L_0896B83C;
    }
L_0896B83C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_0896B840;
L_0896B840:
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896B85C;
      }
      goto L_0896B850;
    }
L_0896B850:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B860;
      }
      goto L_0896B85C;
    }
L_0896B85C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(12));
    goto L_0896B860;
L_0896B860:
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(3, ctx.gpr[3] >> 31u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896B888;
      }
      goto L_0896B87C;
    }
L_0896B87C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B88C;
      }
      goto L_0896B888;
    }
L_0896B888:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(12));
    goto L_0896B88C;
L_0896B88C:
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(3, ctx.gpr[3] >> 31u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896B8B4;
      }
      goto L_0896B8A8;
    }
L_0896B8A8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B8B8;
      }
      goto L_0896B8B4;
    }
L_0896B8B4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(12));
    goto L_0896B8B8;
L_0896B8B8:
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_0896B8C0;
L_0896B8C0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    ctx.set_gpr(4, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896B8E4;
      }
      goto L_0896B8D8;
    }
L_0896B8D8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B8E8;
      }
      goto L_0896B8E4;
    }
L_0896B8E4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_0896B8E8;
L_0896B8E8:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896B904;
      }
      goto L_0896B8F8;
    }
L_0896B8F8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B908;
      }
      goto L_0896B904;
    }
L_0896B904:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_0896B908;
L_0896B908:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896B930;
      }
      goto L_0896B924;
    }
L_0896B924:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B934;
      }
      goto L_0896B930;
    }
L_0896B930:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_0896B934;
L_0896B934:
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(4, ctx.gpr[2] >> 31u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0896BA68;
      }
      goto L_0896B954;
    }
L_0896B954:
    ctx.set_gpr(8, ctx.gpr[6] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[8] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BA0C;
      }
      goto L_0896B968;
    }
L_0896B968:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] << 8u);
    ctx.set_gpr(2, ctx.gpr[2] >> 23u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896BA0C;
      }
      goto L_0896B97C;
    }
L_0896B97C:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896BA0C;
      }
      goto L_0896B98C;
    }
L_0896B98C:
    ctx.set_gpr(2, ctx.gpr[4] << 30u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896BA0C;
      }
      goto L_0896B99C;
    }
L_0896B99C:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[8] & 65535u);
    ctx.set_gpr(4, ctx.gpr[2] << 5u);
    ctx.set_gpr(2, 65504u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 31u);
    ctx.set_gpr(2, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u & 15u);
    ctx.set_gpr(4, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, 0u & 1u);
    ctx.set_gpr(7, ctx.gpr[2] << 7u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[8] & ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[7]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[7]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BBF8;
      }
      goto L_0896BA0C;
    }
L_0896BA0C:
    ctx.set_gpr(8, ctx.gpr[6] + static_cast<std::uint32_t>(-12));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[8] & 65535u);
    ctx.set_gpr(4, ctx.gpr[2] << 5u);
    ctx.set_gpr(2, 65504u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 31u);
    ctx.set_gpr(2, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(7, rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, (ctx.gpr[8] >> 16u) & 0x00007FFFu);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BBF8;
      }
      goto L_0896BA68;
    }
L_0896BA68:
    ctx.set_gpr(7, ctx.gpr[6] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(4, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[7] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896BB70;
      }
      goto L_0896BA7C;
    }
L_0896BA7C:
    ctx.set_gpr(9, ctx.gpr[6] + static_cast<std::uint32_t>(-12));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[9] & 65535u);
    ctx.set_gpr(7, ctx.gpr[4] << 5u);
    ctx.set_gpr(4, 65504u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | 31u);
    ctx.set_gpr(4, ctx.gpr[8] & ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(8, rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, (ctx.gpr[9] >> 16u) & 0x00007FFFu);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(4, ctx.gpr[8] & ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[7]);
    rt.memory().aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(7, ctx.gpr[2] << 7u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[8] & ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[7]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[7]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(4, 0u & 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(4, ctx.gpr[4] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(2, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, 0u & 31u);
    ctx.set_gpr(4, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-125));
    ctx.set_gpr(2, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u & 511u);
    ctx.set_gpr(4, ctx.gpr[2] << 15u);
    ctx.set_gpr(2, 65280u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32767u);
    ctx.set_gpr(2, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BBF8;
      }
      goto L_0896BB70;
    }
L_0896BB70:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[7] & 65535u);
    ctx.set_gpr(7, ctx.gpr[4] << 5u);
    ctx.set_gpr(4, 65504u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | 31u);
    ctx.set_gpr(4, ctx.gpr[8] & ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, ctx.gpr[4] << 24u);
    ctx.set_gpr(4, ctx.gpr[4] >> 31u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0896BBDC;
      }
      goto L_0896BBA4;
    }
L_0896BBA4:
    ctx.set_gpr(7, rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, 0u & 32767u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BBF8;
      }
      goto L_0896BBDC;
    }
L_0896BBDC:
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u & 15u);
    ctx.set_gpr(4, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_0896BBF8;
L_0896BBF8:
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896BC30;
      }
      goto L_0896BC24;
    }
L_0896BC24:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BC34;
      }
      goto L_0896BC30;
    }
L_0896BC30:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_0896BC34;
L_0896BC34:
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896BC5C;
      }
      goto L_0896BC50;
    }
L_0896BC50:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BC60;
      }
      goto L_0896BC5C;
    }
L_0896BC5C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_0896BC60;
L_0896BC60:
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 11u);
    ctx.set_gpr(4, ctx.gpr[2] >> 16u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(3, ctx.gpr[2] >> 31u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0896BC9C;
      }
      goto L_0896BC8C;
    }
L_0896BC8C:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] & 32767u);
    ctx.set_gpr(2, ctx.gpr[2] << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[2]);
    goto L_0896BC9C;
L_0896BC9C:
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 27u);
    ctx.set_gpr(2, ctx.gpr[2] >> 28u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-4), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BFAC;
      }
      goto L_0896BCD0;
    }
L_0896BCD0:
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(4, ctx.gpr[2] >> 31u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0896BE00;
      }
      goto L_0896BCEC;
    }
L_0896BCEC:
    ctx.set_gpr(6, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[6] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BDA4;
      }
      goto L_0896BD00;
    }
L_0896BD00:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] << 8u);
    ctx.set_gpr(2, ctx.gpr[2] >> 23u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896BDA4;
      }
      goto L_0896BD14;
    }
L_0896BD14:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896BDA4;
      }
      goto L_0896BD24;
    }
L_0896BD24:
    ctx.set_gpr(2, ctx.gpr[4] << 30u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896BDA4;
      }
      goto L_0896BD34;
    }
L_0896BD34:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[6] & 65535u);
    ctx.set_gpr(3, ctx.gpr[2] << 5u);
    ctx.set_gpr(2, 65504u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 31u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u & 15u);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, 0u & 1u);
    ctx.set_gpr(4, ctx.gpr[2] << 7u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BF90;
      }
      goto L_0896BDA4;
    }
L_0896BDA4:
    ctx.set_gpr(6, ctx.gpr[3] + static_cast<std::uint32_t>(-12));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[6] & 65535u);
    ctx.set_gpr(3, ctx.gpr[2] << 5u);
    ctx.set_gpr(2, 65504u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 31u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, (ctx.gpr[6] >> 16u) & 0x00007FFFu);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BF90;
      }
      goto L_0896BE00;
    }
L_0896BE00:
    ctx.set_gpr(7, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(4, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[7] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896BF08;
      }
      goto L_0896BE14;
    }
L_0896BE14:
    ctx.set_gpr(7, ctx.gpr[3] + static_cast<std::uint32_t>(-12));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[7] & 65535u);
    ctx.set_gpr(4, ctx.gpr[3] << 5u);
    ctx.set_gpr(3, 65504u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 31u);
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, (ctx.gpr[7] >> 16u) & 0x00007FFFu);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(4, ctx.gpr[2] << 7u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, 0u & 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, 0u & 31u);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-125));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u & 511u);
    ctx.set_gpr(3, ctx.gpr[2] << 15u);
    ctx.set_gpr(2, 65280u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32767u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BF90;
      }
      goto L_0896BF08;
    }
L_0896BF08:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[7] & 65535u);
    ctx.set_gpr(4, ctx.gpr[3] << 5u);
    ctx.set_gpr(3, 65504u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 31u);
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(3, ctx.gpr[3] >> 31u);
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0896BF74;
      }
      goto L_0896BF3C;
    }
L_0896BF3C:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, 0u & 32767u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BF90;
      }
      goto L_0896BF74;
    }
L_0896BF74:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u & 15u);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_0896BF90;
L_0896BF90:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    goto L_0896BFAC;
L_0896BFAC:
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896B624;
      }
      goto L_0896BFB8;
    }
L_0896BFB8:
    ctx.set_gpr(2, ctx.gpr[20] + 0u);
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_0896B610;
      }
      goto L_0896BFC8;
    }
L_0896BFC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BFF8;
      }
      goto L_0896BFD0;
    }
L_0896BFD0:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0896BFDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 883u, 0x0895FC44u>(ctx, &aot_mem) && ctx.pc == 0x0896BFDCu) goto L_0896BFDC;
    return;
L_0896BFDC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896BFF8;
      }
      goto L_0896BFEC;
    }
L_0896BFEC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0896BFF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 336u, 0x08961BA4u>(ctx, &aot_mem) && ctx.pc == 0x0896BFF8u) goto L_0896BFF8;
    return;
L_0896BFF8:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.pc = 0x0896C000u; return;
}

void recomp_unit_0089(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0089_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_89(Runtime &runtime) {
    runtime.register_generated_unit(89u, 0x08968000u, 16384u, &recomp_unit_0089, &recomp_unit_0089_entry);
    runtime.register_function(0x08968000u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968020u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968038u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896805Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896806Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089680A0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089680E4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089680F8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896810Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968118u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896811Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968128u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968134u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968160u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896816Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968170u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968180u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968194u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089681A0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896820Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968238u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968244u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968248u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968258u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968260u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896826Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968270u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896829Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089682ACu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089682DCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089682E8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089682F4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089682F8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968308u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968314u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896831Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968324u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968330u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968334u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896833Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968364u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968374u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089683A8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089683B0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089683BCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089683C0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089683C8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968400u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896840Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968410u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896842Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968438u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896843Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968458u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968464u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968468u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968484u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968490u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968494u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896849Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089684B4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089684C0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089684C4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089684D8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089684E4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896850Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968518u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896851Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896852Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968554u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968564u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968594u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089685A0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089685ACu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089685B0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089685C0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089685CCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089685D0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089685ECu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089685F8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089685FCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968618u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968624u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968628u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896864Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896869Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089686C8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896875Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968770u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968788u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089687C8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089687D8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089687ECu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089687F8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089687FCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968808u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968884u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896888Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089688A0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089688ACu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896897Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089689BCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089689CCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089689D8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968A8Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968AA4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968AC8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968AD8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968B0Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968BB8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968BCCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968BD8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968CA8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968CE8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968D98u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968D9Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968DC0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968E1Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968E2Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968E6Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968E78u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968E7Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968E98u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968EA4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968EA8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968EC8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968ED4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968ED8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968EF8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968F04u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968F08u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968F1Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968F30u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968F44u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968F50u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968F54u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968F60u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968F68u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968F74u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968F78u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968F80u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968F88u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968FC4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968FD0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968FD8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968FE8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969004u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969028u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896903Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969044u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896904Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969064u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969070u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969088u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089690A0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089690C4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089690D0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089690E4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089690F0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089690F4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969104u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969124u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969148u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969158u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969188u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969194u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896919Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089691B4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089691C0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089691D0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089691E8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969210u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969228u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969234u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969238u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969254u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969260u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969264u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969280u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896928Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969290u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089692B4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969304u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969330u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089693C4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089693D8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089693F0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969430u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969444u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969458u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969464u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969468u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969474u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089694F0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089694F8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896950Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969518u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089695E8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969628u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969638u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969644u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089696F8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969710u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969734u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969744u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969778u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969824u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969838u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969844u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969914u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969954u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969A04u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969A08u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969A2Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969A88u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969A98u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969AD8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969AE4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969AE8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969B04u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969B10u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969B14u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969B34u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969B40u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969B44u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969B64u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969B70u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969B74u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969B88u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969B8Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969B98u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969BACu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969BC0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969BCCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969BD0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969BDCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969C04u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969C14u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969C58u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969C64u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969C70u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969C80u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969C8Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969CA4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969CB8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969CD8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969CE0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969CF4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969D08u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969D24u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969D34u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969D48u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969D5Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969D78u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969D88u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969D90u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969DA8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969DB4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969DCCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969DE4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969E0Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969E90u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969E98u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969EACu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969EB8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969F88u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969FC8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969FD8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969FE4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A098u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A0B0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A0D4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A0E4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A118u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A1C0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A1D4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A1E0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A2B0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A2F0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A3A0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A3A4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A3C8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A40Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A420u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A434u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A440u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A444u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A450u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A45Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A468u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A474u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A47Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A484u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A488u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A49Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A4A8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A4B0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A4C8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A4DCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A508u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A510u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A524u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A52Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A540u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A54Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A558u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A560u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A564u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A578u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A580u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A598u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A5A4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A5ACu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A5B0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A5C4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A5E0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A5E8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A5F8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A604u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A60Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A610u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A624u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A644u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A658u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A664u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A674u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A688u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A69Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A6BCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A6C4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A6D0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A6D8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A6F0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A70Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A724u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A748u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A750u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A764u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A778u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A784u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A798u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A7A4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A7C4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A7CCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A7E0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A7ECu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A7FCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A80Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A818u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A820u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A838u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A84Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A868u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A87Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A888u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A8B4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A8BCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A8D0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A8D8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A8ECu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A8FCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A90Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A918u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A920u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A938u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A944u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A954u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A95Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A970u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A990u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A9A4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A9A8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A9DCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AA0Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AA20u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AA34u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AA40u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AA5Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AA60u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AA84u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AA94u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AAC4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AAD4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AAE4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AB18u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AB24u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AB28u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AB3Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AB54u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AB64u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AB68u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AB70u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896ABA4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896ABB4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896ABE8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AC0Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AC18u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AC1Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AC2Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AC38u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AC3Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AC58u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AC64u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AC68u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AC84u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AC90u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AC94u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AC9Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896ACA8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896ACD4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896ACECu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896ACF8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896ACFCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AD0Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AD18u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AD1Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AD38u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AD44u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AD48u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AD64u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AD70u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AD74u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AD80u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896ADF8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AE0Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AE18u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AEE8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AF28u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AFD8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AFDCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B000u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B05Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B06Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B0B0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B0BCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B0C0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B0DCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B0E8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B0ECu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B108u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B114u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B118u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B134u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B140u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B144u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B160u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B16Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B170u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B184u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B194u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B19Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B218u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B22Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B238u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B308u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B348u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B3F8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B3FCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B420u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B468u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B478u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B488u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B498u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B4A4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B4CCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B4DCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B510u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B524u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B52Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B538u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B548u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B554u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B574u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B5ACu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B5C0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B5D4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B5E8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B610u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B61Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B624u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B630u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B640u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B658u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B664u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B668u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B688u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B698u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B6E4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B6F4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B728u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B74Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B758u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B75Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B76Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B778u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B77Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B798u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B7A4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B7A8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B7C4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B7D0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B7D4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B7DCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B7E8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B814u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B830u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B83Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B840u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B850u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B85Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B860u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B87Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B888u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B88Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B8A8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B8B4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B8B8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B8C0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B8D8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B8E4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B8E8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B8F8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B904u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B908u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B924u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B930u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B934u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B954u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B968u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B97Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B98Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B99Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BA0Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BA68u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BA7Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BB70u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BBA4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BBDCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BBF8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BC24u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BC30u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BC34u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BC50u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BC5Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BC60u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BC8Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BC9Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BCD0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BCECu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BD00u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BD14u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BD24u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BD34u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BDA4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BE00u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BE14u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BF08u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BF3Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BF74u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BF90u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BFACu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BFB8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BFC8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BFD0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BFDCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BFECu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BFF8u, &recomp_unit_0089, "recomp_unit_0089");
}
} // namespace psprecomp
