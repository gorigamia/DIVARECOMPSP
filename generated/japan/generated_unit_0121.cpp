#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0121[4094] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 7, 8, 0,
    0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0,
    0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0,
    0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 42, 43, 0, 0, 0, 44, 0, 0, 0, 45, 0, 46, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0,
    0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53,
    0, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0,
    0, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 61, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0,
    0, 0, 0, 0, 67, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0,
    0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0,
    81, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0,
    0, 0, 0, 99, 100, 0, 0, 0, 101, 0, 0, 0, 102, 0, 103, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0,
    0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 114, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 120, 0, 0, 0, 0, 0, 0,
    0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124,
    0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131,
    0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0,
    0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 146, 147, 0, 0, 0, 148, 0, 0,
    0, 149, 0, 150, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0,
    0, 0, 160, 0, 0, 0, 0, 0, 0, 161, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 167, 0, 0, 168, 0, 0,
    0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0,
    0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    176, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 182, 0, 0, 0, 183, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 0,
    193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0,
    0, 0, 0, 198, 199, 0, 0, 0, 200, 0, 0, 0, 201, 0, 202, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0, 0, 208,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0,
    0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 0,
    0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 217, 218, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0,
    0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 238,
    0, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 244, 0, 0, 0, 245, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0,
    254, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 256, 257, 0, 0, 0, 258, 0, 0, 0, 259, 0, 260, 0, 0, 261, 0, 0, 0,
    0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    264, 0, 0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0,
    0, 0, 271, 272, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 277, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 279,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0,
    0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0,
    287, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0,
    0, 0, 293, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 302, 0, 0, 0, 0, 303, 0,
    0, 0, 0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 0,
    0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 310, 311, 0, 0, 0, 312, 0, 0, 0, 313, 0, 314, 0, 0, 315, 0, 0, 0, 0, 0,
    0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0,
    0, 0, 0, 319, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 326, 0,
    0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0,
    0, 331, 332, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 337, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0,
    339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 342, 0, 0,
    0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 345, 0, 0, 0, 0, 346, 0, 0, 0, 0, 347, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 350, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 353, 0, 0,
    0, 0, 354, 0, 0, 0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 360, 0, 0, 0, 361, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 364, 0, 0, 0, 0, 365, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 368, 0, 0, 0, 369, 0, 0,
    0, 370, 0, 371, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 374, 0, 0, 0, 0, 375, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 378, 0, 0, 0, 379, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 382, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 384, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0,
    387, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0,
    0, 0, 391, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 397, 0, 0,
    398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 400, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 404, 405, 0, 0, 0, 406,
    0, 0, 0, 407, 0, 408, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 411, 0, 0, 0, 0, 412, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0,
    0, 0, 415, 416, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 419, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 421, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0,
    424, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 428, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0,
    0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 434, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 437, 0,
    0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0,
    0, 441, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 445,
    446, 0, 0, 0, 447, 0, 0, 0, 448, 0, 449, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 452,
};
void recomp_unit_0121_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089E8000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0121[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089E8000;
    case 2u: goto L_089E8018;
    case 3u: goto L_089E8054;
    case 4u: goto L_089E80AC;
    case 5u: goto L_089E80BC;
    case 6u: goto L_089E80D8;
    case 7u: goto L_089E80F4;
    case 8u: goto L_089E80F8;
    case 9u: goto L_089E8108;
    case 10u: goto L_089E8144;
    case 11u: goto L_089E8200;
    case 12u: goto L_089E8218;
    case 13u: goto L_089E8230;
    case 14u: goto L_089E823C;
    case 15u: goto L_089E8260;
    case 16u: goto L_089E8290;
    case 17u: goto L_089E82B8;
    case 18u: goto L_089E82F4;
    case 19u: goto L_089E8374;
    case 20u: goto L_089E83A0;
    case 21u: goto L_089E83B0;
    case 22u: goto L_089E83C8;
    case 23u: goto L_089E83E0;
    case 24u: goto L_089E83F8;
    case 25u: goto L_089E8440;
    case 26u: goto L_089E84A4;
    case 27u: goto L_089E84B4;
    case 28u: goto L_089E84C0;
    case 29u: goto L_089E84E4;
    case 30u: goto L_089E8514;
    case 31u: goto L_089E8548;
    case 32u: goto L_089E8584;
    case 33u: goto L_089E85C8;
    case 34u: goto L_089E85DC;
    case 35u: goto L_089E85F0;
    case 36u: goto L_089E8604;
    case 37u: goto L_089E861C;
    case 38u: goto L_089E8634;
    case 39u: goto L_089E8658;
    case 40u: goto L_089E8668;
    case 41u: goto L_089E8684;
    case 42u: goto L_089E86A8;
    case 43u: goto L_089E86AC;
    case 44u: goto L_089E86BC;
    case 45u: goto L_089E86CC;
    case 46u: goto L_089E86D4;
    case 47u: goto L_089E86E0;
    case 48u: goto L_089E8704;
    case 49u: goto L_089E8734;
    case 50u: goto L_089E8768;
    case 51u: goto L_089E87A4;
    case 52u: goto L_089E87E8;
    case 53u: goto L_089E87FC;
    case 54u: goto L_089E8810;
    case 55u: goto L_089E8824;
    case 56u: goto L_089E883C;
    case 57u: goto L_089E8854;
    case 58u: goto L_089E8878;
    case 59u: goto L_089E8888;
    case 60u: goto L_089E88A4;
    case 61u: goto L_089E88C8;
    case 62u: goto L_089E88CC;
    case 63u: goto L_089E88DC;
    case 64u: goto L_089E8920;
    case 65u: goto L_089E89E0;
    case 66u: goto L_089E89F8;
    case 67u: goto L_089E8A10;
    case 68u: goto L_089E8A1C;
    case 69u: goto L_089E8A40;
    case 70u: goto L_089E8A70;
    case 71u: goto L_089E8A98;
    case 72u: goto L_089E8AD4;
    case 73u: goto L_089E8B18;
    case 74u: goto L_089E8B2C;
    case 75u: goto L_089E8B40;
    case 76u: goto L_089E8B54;
    case 77u: goto L_089E8B6C;
    case 78u: goto L_089E8B84;
    case 79u: goto L_089E8BD0;
    case 80u: goto L_089E8BF0;
    case 81u: goto L_089E8C00;
    case 82u: goto L_089E8C14;
    case 83u: goto L_089E8C24;
    case 84u: goto L_089E8C3C;
    case 85u: goto L_089E8C54;
    case 86u: goto L_089E8C6C;
    case 87u: goto L_089E8CB8;
    case 88u: goto L_089E8D10;
    case 89u: goto L_089E8D20;
    case 90u: goto L_089E8D2C;
    case 91u: goto L_089E8D50;
    case 92u: goto L_089E8D80;
    case 93u: goto L_089E8DBC;
    case 94u: goto L_089E8DD0;
    case 95u: goto L_089E8DE4;
    case 96u: goto L_089E8E24;
    case 97u: goto L_089E8E60;
    case 98u: goto L_089E8E70;
    case 99u: goto L_089E8E8C;
    case 100u: goto L_089E8E90;
    case 101u: goto L_089E8EA0;
    case 102u: goto L_089E8EB0;
    case 103u: goto L_089E8EB8;
    case 104u: goto L_089E8EC4;
    case 105u: goto L_089E8EE8;
    case 106u: goto L_089E8F18;
    case 107u: goto L_089E8F54;
    case 108u: goto L_089E8F68;
    case 109u: goto L_089E8F7C;
    case 110u: goto L_089E8FBC;
    case 111u: goto L_089E8FF8;
    case 112u: goto L_089E9008;
    case 113u: goto L_089E9024;
    case 114u: goto L_089E9028;
    case 115u: goto L_089E9038;
    case 116u: goto L_089E9070;
    case 117u: goto L_089E9128;
    case 118u: goto L_089E9140;
    case 119u: goto L_089E9158;
    case 120u: goto L_089E9164;
    case 121u: goto L_089E9188;
    case 122u: goto L_089E91B8;
    case 123u: goto L_089E91E8;
    case 124u: goto L_089E91FC;
    case 125u: goto L_089E9210;
    case 126u: goto L_089E9250;
    case 127u: goto L_089E92B4;
    case 128u: goto L_089E92BC;
    case 129u: goto L_089E92CC;
    case 130u: goto L_089E92E4;
    case 131u: goto L_089E92FC;
    case 132u: goto L_089E9314;
    case 133u: goto L_089E9358;
    case 134u: goto L_089E93B8;
    case 135u: goto L_089E93C8;
    case 136u: goto L_089E93D4;
    case 137u: goto L_089E93F8;
    case 138u: goto L_089E9428;
    case 139u: goto L_089E9464;
    case 140u: goto L_089E9478;
    case 141u: goto L_089E948C;
    case 142u: goto L_089E94CC;
    case 143u: goto L_089E9518;
    case 144u: goto L_089E9528;
    case 145u: goto L_089E9544;
    case 146u: goto L_089E9560;
    case 147u: goto L_089E9564;
    case 148u: goto L_089E9574;
    case 149u: goto L_089E9584;
    case 150u: goto L_089E958C;
    case 151u: goto L_089E9598;
    case 152u: goto L_089E95BC;
    case 153u: goto L_089E95EC;
    case 154u: goto L_089E9628;
    case 155u: goto L_089E963C;
    case 156u: goto L_089E9650;
    case 157u: goto L_089E9690;
    case 158u: goto L_089E96DC;
    case 159u: goto L_089E96EC;
    case 160u: goto L_089E9708;
    case 161u: goto L_089E9724;
    case 162u: goto L_089E9728;
    case 163u: goto L_089E9738;
    case 164u: goto L_089E9778;
    case 165u: goto L_089E9838;
    case 166u: goto L_089E9850;
    case 167u: goto L_089E9868;
    case 168u: goto L_089E9874;
    case 169u: goto L_089E9898;
    case 170u: goto L_089E98C8;
    case 171u: goto L_089E98F8;
    case 172u: goto L_089E990C;
    case 173u: goto L_089E9920;
    case 174u: goto L_089E9960;
    case 175u: goto L_089E99D4;
    case 176u: goto L_089E9A00;
    case 177u: goto L_089E9A10;
    case 178u: goto L_089E9A28;
    case 179u: goto L_089E9A40;
    case 180u: goto L_089E9A58;
    case 181u: goto L_089E9AA4;
    case 182u: goto L_089E9B08;
    case 183u: goto L_089E9B18;
    case 184u: goto L_089E9B24;
    case 185u: goto L_089E9B48;
    case 186u: goto L_089E9B78;
    case 187u: goto L_089E9BB4;
    case 188u: goto L_089E9BC8;
    case 189u: goto L_089E9BDC;
    case 190u: goto L_089E9C1C;
    case 191u: goto L_089E9C58;
    case 192u: goto L_089E9C68;
    case 193u: goto L_089E9C80;
    case 194u: goto L_089E9C98;
    case 195u: goto L_089E9CBC;
    case 196u: goto L_089E9CCC;
    case 197u: goto L_089E9CE8;
    case 198u: goto L_089E9D0C;
    case 199u: goto L_089E9D10;
    case 200u: goto L_089E9D20;
    case 201u: goto L_089E9D30;
    case 202u: goto L_089E9D38;
    case 203u: goto L_089E9D44;
    case 204u: goto L_089E9D68;
    case 205u: goto L_089E9D98;
    case 206u: goto L_089E9DD4;
    case 207u: goto L_089E9DE8;
    case 208u: goto L_089E9DFC;
    case 209u: goto L_089E9E3C;
    case 210u: goto L_089E9E78;
    case 211u: goto L_089E9E88;
    case 212u: goto L_089E9EA0;
    case 213u: goto L_089E9EB8;
    case 214u: goto L_089E9EDC;
    case 215u: goto L_089E9EEC;
    case 216u: goto L_089E9F08;
    case 217u: goto L_089E9F2C;
    case 218u: goto L_089E9F30;
    case 219u: goto L_089E9F40;
    case 220u: goto L_089E9F84;
    case 221u: goto L_089EA048;
    case 222u: goto L_089EA060;
    case 223u: goto L_089EA078;
    case 224u: goto L_089EA084;
    case 225u: goto L_089EA0A8;
    case 226u: goto L_089EA0D8;
    case 227u: goto L_089EA108;
    case 228u: goto L_089EA11C;
    case 229u: goto L_089EA130;
    case 230u: goto L_089EA170;
    case 231u: goto L_089EA1AC;
    case 232u: goto L_089EA1BC;
    case 233u: goto L_089EA1D4;
    case 234u: goto L_089EA1EC;
    case 235u: goto L_089EA238;
    case 236u: goto L_089EA258;
    case 237u: goto L_089EA268;
    case 238u: goto L_089EA27C;
    case 239u: goto L_089EA28C;
    case 240u: goto L_089EA2A4;
    case 241u: goto L_089EA2BC;
    case 242u: goto L_089EA2D4;
    case 243u: goto L_089EA324;
    case 244u: goto L_089EA384;
    case 245u: goto L_089EA394;
    case 246u: goto L_089EA3A0;
    case 247u: goto L_089EA3C4;
    case 248u: goto L_089EA3F4;
    case 249u: goto L_089EA430;
    case 250u: goto L_089EA444;
    case 251u: goto L_089EA458;
    case 252u: goto L_089EA498;
    case 253u: goto L_089EA4F0;
    case 254u: goto L_089EA500;
    case 255u: goto L_089EA51C;
    case 256u: goto L_089EA538;
    case 257u: goto L_089EA53C;
    case 258u: goto L_089EA54C;
    case 259u: goto L_089EA55C;
    case 260u: goto L_089EA564;
    case 261u: goto L_089EA570;
    case 262u: goto L_089EA594;
    case 263u: goto L_089EA5C4;
    case 264u: goto L_089EA600;
    case 265u: goto L_089EA614;
    case 266u: goto L_089EA628;
    case 267u: goto L_089EA668;
    case 268u: goto L_089EA6C0;
    case 269u: goto L_089EA6D0;
    case 270u: goto L_089EA6EC;
    case 271u: goto L_089EA708;
    case 272u: goto L_089EA70C;
    case 273u: goto L_089EA71C;
    case 274u: goto L_089EA75C;
    case 275u: goto L_089EA81C;
    case 276u: goto L_089EA834;
    case 277u: goto L_089EA84C;
    case 278u: goto L_089EA858;
    case 279u: goto L_089EA87C;
    case 280u: goto L_089EA8AC;
    case 281u: goto L_089EA8DC;
    case 282u: goto L_089EA8F0;
    case 283u: goto L_089EA904;
    case 284u: goto L_089EA944;
    case 285u: goto L_089EA9C4;
    case 286u: goto L_089EA9F0;
    case 287u: goto L_089EAA00;
    case 288u: goto L_089EAA18;
    case 289u: goto L_089EAA30;
    case 290u: goto L_089EAA48;
    case 291u: goto L_089EAA94;
    case 292u: goto L_089EAAF8;
    case 293u: goto L_089EAB08;
    case 294u: goto L_089EAB14;
    case 295u: goto L_089EAB38;
    case 296u: goto L_089EAB68;
    case 297u: goto L_089EABA4;
    case 298u: goto L_089EABB8;
    case 299u: goto L_089EABCC;
    case 300u: goto L_089EAC0C;
    case 301u: goto L_089EAC50;
    case 302u: goto L_089EAC64;
    case 303u: goto L_089EAC78;
    case 304u: goto L_089EAC8C;
    case 305u: goto L_089EACA4;
    case 306u: goto L_089EACBC;
    case 307u: goto L_089EACE0;
    case 308u: goto L_089EACF0;
    case 309u: goto L_089EAD0C;
    case 310u: goto L_089EAD30;
    case 311u: goto L_089EAD34;
    case 312u: goto L_089EAD44;
    case 313u: goto L_089EAD54;
    case 314u: goto L_089EAD5C;
    case 315u: goto L_089EAD68;
    case 316u: goto L_089EAD8C;
    case 317u: goto L_089EADBC;
    case 318u: goto L_089EADF8;
    case 319u: goto L_089EAE0C;
    case 320u: goto L_089EAE20;
    case 321u: goto L_089EAE60;
    case 322u: goto L_089EAEA4;
    case 323u: goto L_089EAEB8;
    case 324u: goto L_089EAECC;
    case 325u: goto L_089EAEE0;
    case 326u: goto L_089EAEF8;
    case 327u: goto L_089EAF10;
    case 328u: goto L_089EAF34;
    case 329u: goto L_089EAF44;
    case 330u: goto L_089EAF60;
    case 331u: goto L_089EAF84;
    case 332u: goto L_089EAF88;
    case 333u: goto L_089EAF98;
    case 334u: goto L_089EAFDC;
    case 335u: goto L_089EB0A0;
    case 336u: goto L_089EB0B8;
    case 337u: goto L_089EB0D0;
    case 338u: goto L_089EB0DC;
    case 339u: goto L_089EB100;
    case 340u: goto L_089EB130;
    case 341u: goto L_089EB160;
    case 342u: goto L_089EB174;
    case 343u: goto L_089EB188;
    case 344u: goto L_089EB1C8;
    case 345u: goto L_089EB20C;
    case 346u: goto L_089EB220;
    case 347u: goto L_089EB234;
    case 348u: goto L_089EB248;
    case 349u: goto L_089EB260;
    case 350u: goto L_089EB278;
    case 351u: goto L_089EB2C4;
    case 352u: goto L_089EB2E4;
    case 353u: goto L_089EB2F4;
    case 354u: goto L_089EB308;
    case 355u: goto L_089EB318;
    case 356u: goto L_089EB330;
    case 357u: goto L_089EB348;
    case 358u: goto L_089EB360;
    case 359u: goto L_089EB3B0;
    case 360u: goto L_089EB408;
    case 361u: goto L_089EB418;
    case 362u: goto L_089EB424;
    case 363u: goto L_089EB450;
    case 364u: goto L_089EB464;
    case 365u: goto L_089EB478;
    case 366u: goto L_089EB4AC;
    case 367u: goto L_089EB4E0;
    case 368u: goto L_089EB4E4;
    case 369u: goto L_089EB4F4;
    case 370u: goto L_089EB504;
    case 371u: goto L_089EB50C;
    case 372u: goto L_089EB518;
    case 373u: goto L_089EB544;
    case 374u: goto L_089EB558;
    case 375u: goto L_089EB56C;
    case 376u: goto L_089EB5A0;
    case 377u: goto L_089EB5D4;
    case 378u: goto L_089EB5D8;
    case 379u: goto L_089EB5E8;
    case 380u: goto L_089EB620;
    case 381u: goto L_089EB658;
    case 382u: goto L_089EB704;
    case 383u: goto L_089EB71C;
    case 384u: goto L_089EB734;
    case 385u: goto L_089EB740;
    case 386u: goto L_089EB76C;
    case 387u: goto L_089EB780;
    case 388u: goto L_089EB794;
    case 389u: goto L_089EB7C8;
    case 390u: goto L_089EB7F8;
    case 391u: goto L_089EB808;
    case 392u: goto L_089EB820;
    case 393u: goto L_089EB838;
    case 394u: goto L_089EB850;
    case 395u: goto L_089EB888;
    case 396u: goto L_089EB8E4;
    case 397u: goto L_089EB8F4;
    case 398u: goto L_089EB900;
    case 399u: goto L_089EB92C;
    case 400u: goto L_089EB940;
    case 401u: goto L_089EB954;
    case 402u: goto L_089EB988;
    case 403u: goto L_089EB9CC;
    case 404u: goto L_089EB9E8;
    case 405u: goto L_089EB9EC;
    case 406u: goto L_089EB9FC;
    case 407u: goto L_089EBA0C;
    case 408u: goto L_089EBA14;
    case 409u: goto L_089EBA20;
    case 410u: goto L_089EBA4C;
    case 411u: goto L_089EBA60;
    case 412u: goto L_089EBA74;
    case 413u: goto L_089EBAA8;
    case 414u: goto L_089EBAEC;
    case 415u: goto L_089EBB08;
    case 416u: goto L_089EBB0C;
    case 417u: goto L_089EBB1C;
    case 418u: goto L_089EBB58;
    case 419u: goto L_089EBC04;
    case 420u: goto L_089EBC1C;
    case 421u: goto L_089EBC34;
    case 422u: goto L_089EBC40;
    case 423u: goto L_089EBC6C;
    case 424u: goto L_089EBC80;
    case 425u: goto L_089EBC94;
    case 426u: goto L_089EBCC8;
    case 427u: goto L_089EBD2C;
    case 428u: goto L_089EBD3C;
    case 429u: goto L_089EBD54;
    case 430u: goto L_089EBD6C;
    case 431u: goto L_089EBD84;
    case 432u: goto L_089EBDBC;
    case 433u: goto L_089EBE1C;
    case 434u: goto L_089EBE2C;
    case 435u: goto L_089EBE38;
    case 436u: goto L_089EBE64;
    case 437u: goto L_089EBE78;
    case 438u: goto L_089EBE8C;
    case 439u: goto L_089EBEC0;
    case 440u: goto L_089EBEF4;
    case 441u: goto L_089EBF04;
    case 442u: goto L_089EBF1C;
    case 443u: goto L_089EBF34;
    case 444u: goto L_089EBF58;
    case 445u: goto L_089EBF7C;
    case 446u: goto L_089EBF80;
    case 447u: goto L_089EBF90;
    case 448u: goto L_089EBFA0;
    case 449u: goto L_089EBFA8;
    case 450u: goto L_089EBFB4;
    case 451u: goto L_089EBFE0;
    case 452u: goto L_089EBFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089E8000:
    ctx.set_gpr(5, ctx.gpr[21] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(17, ctx.gpr[21] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(31, 0x089E8018u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 449u, 0x089E6A8Cu>(ctx, &aot_mem) && ctx.pc == 0x089E8018u) goto L_089E8018;
    return;
L_089E8018:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[15] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x089E8054u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x089E8054u) goto L_089E8054;
    return;
L_089E8054:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(92)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(84)));
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[22] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(212));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E80ACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E80ACu) goto L_089E80AC;
    return;
L_089E80AC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(196));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089E80BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x089E80BCu) goto L_089E80BC;
    return;
L_089E80BC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E80D8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E80D8u) goto L_089E80D8;
    return;
L_089E80D8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(22));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(208)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E80F4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E80F4u) goto L_089E80F4;
    return;
L_089E80F4:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089E80F8;
L_089E80F8:
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[20]);
    ctx.set_gpr(3, ctx.gpr[16] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 592u, 0x089E7F90u>(ctx, &aot_mem); return;
      }
      goto L_089E8108;
    }
L_089E8108:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E8144:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-384));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[25]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_fpr_bits(24, ctx.fpr_bits(12));
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(22, ctx.gpr[6] + 0u);
    ctx.set_gpr(23, ctx.gpr[7] + 0u);
    ctx.set_gpr(19, ctx.gpr[8] + 0u);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(23, 0x7FC00000u); else ctx.fpr[23] = fs * ft; }
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(9));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(296));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E8200u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E8200u) goto L_089E8200;
    return;
L_089E8200:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E8218u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E8218u) goto L_089E8218;
    return;
L_089E8218:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(152));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E8230u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E8230u) goto L_089E8230;
    return;
L_089E8230:
    ctx.set_gpr(18, ctx.gpr[20] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E83A0;
      }
      goto L_089E823C;
    }
L_089E823C:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[23])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(17, ctx.gpr[22] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(148));
    ctx.set_gpr(31, 0x089E8260u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 249u, 0x089E4F64u>(ctx, &aot_mem) && ctx.pc == 0x089E8260u) goto L_089E8260;
    return;
L_089E8260:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(31, 0x089E8290u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x089E8290u) goto L_089E8290;
    return;
L_089E8290:
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(31, 0x089E82B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 449u, 0x089E6A8Cu>(ctx, &aot_mem) && ctx.pc == 0x089E82B8u) goto L_089E82B8;
    return;
L_089E82B8:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[15] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(31, 0x089E82F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x089E82F4u) goto L_089E82F4;
    return;
L_089E82F4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(380), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[23]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[25] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(368));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089E8374u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x089E8374u) goto L_089E8374;
    return;
L_089E8374:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[25]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_089E83A0;
L_089E83A0:
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[21]);
    ctx.set_gpr(2, ctx.gpr[18] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E823C;
      }
      goto L_089E83B0;
    }
L_089E83B0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(296));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E83C8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E83C8u) goto L_089E83C8;
    return;
L_089E83C8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E83E0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E83E0u) goto L_089E83E0;
    return;
L_089E83E0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(152));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E83F8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E83F8u) goto L_089E83F8;
    return;
L_089E83F8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[25] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[24] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(384));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E8440:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-320));
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
    ctx.set_fpr_bits(21, ctx.fpr_bits(12));
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(22, ctx.gpr[6] + 0u);
    ctx.set_gpr(23, ctx.gpr[7] + 0u);
    ctx.set_gpr(18, ctx.gpr[8] + 0u);
    ctx.set_gpr(17, ctx.gpr[9] + 0u);
    { const float fs = ctx.fpr[21]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(20, 0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E86D4;
      }
      goto L_089E84A4;
    }
L_089E84A4:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089E84B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089E84B4u) goto L_089E84B4;
    return;
L_089E84B4:
    ctx.set_gpr(16, ctx.gpr[19] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E86AC;
      }
      goto L_089E84C0;
    }
L_089E84C0:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[23])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(21, ctx.gpr[22] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(5, ctx.gpr[21] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(248));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.set_gpr(31, 0x089E84E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 249u, 0x089E4F64u>(ctx, &aot_mem) && ctx.pc == 0x089E84E4u) goto L_089E84E4;
    return;
L_089E84E4:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(260));
    ctx.set_gpr(31, 0x089E8514u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x089E8514u) goto L_089E8514;
    return;
L_089E8514:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(5, ctx.gpr[21] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(18, ctx.gpr[21] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(212));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(244));
    ctx.set_gpr(31, 0x089E8548u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 449u, 0x089E6A8Cu>(ctx, &aot_mem) && ctx.pc == 0x089E8548u) goto L_089E8548;
    return;
L_089E8548:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.fpr[15] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(228));
    ctx.set_gpr(31, 0x089E8584u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x089E8584u) goto L_089E8584;
    return;
L_089E8584:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(5, ctx.gpr[21] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(30, ctx.gpr[21] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(18, ctx.gpr[21] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(172));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(204));
    ctx.set_gpr(31, 0x089E85C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 321u, 0x089E5914u>(ctx, &aot_mem) && ctx.pc == 0x089E85C8u) goto L_089E85C8;
    return;
L_089E85C8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(180));
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.set_gpr(31, 0x089E85DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 321u, 0x089E5914u>(ctx, &aot_mem) && ctx.pc == 0x089E85DCu) goto L_089E85DC;
    return;
L_089E85DC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(188));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(180));
    ctx.set_gpr(31, 0x089E85F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 403u, 0x089E6438u>(ctx, &aot_mem) && ctx.pc == 0x089E85F0u) goto L_089E85F0;
    return;
L_089E85F0:
    ctx.set_gpr(18, ctx.gpr[29] + static_cast<std::uint32_t>(188));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(172));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089E8604u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 320u, 0x089E5900u>(ctx, &aot_mem) && ctx.pc == 0x089E8604u) goto L_089E8604;
    return;
L_089E8604:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(172));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089E861Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 320u, 0x089E5900u>(ctx, &aot_mem) && ctx.pc == 0x089E861Cu) goto L_089E861C;
    return;
L_089E861C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(196));
    ctx.set_fpr_bits(12, ctx.fpr_bits(22));
    ctx.set_gpr(31, 0x089E8634u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 595u, 0x0883E9F0u>(ctx, &aot_mem) && ctx.pc == 0x089E8634u) goto L_089E8634;
    return;
L_089E8634:
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(308));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E8658u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E8658u) goto L_089E8658;
    return;
L_089E8658:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(292));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089E8668u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x089E8668u) goto L_089E8668;
    return;
L_089E8668:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E8684u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E8684u) goto L_089E8684;
    return;
L_089E8684:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(284));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(188)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E86A8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E86A8u) goto L_089E86A8;
    return;
L_089E86A8:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089E86AC;
L_089E86AC:
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[20]);
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E84C0;
      }
      goto L_089E86BC;
    }
L_089E86BC:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089E86CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089E86CCu) goto L_089E86CC;
    return;
L_089E86CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E88DC;
      }
      goto L_089E86D4;
    }
L_089E86D4:
    ctx.set_gpr(16, ctx.gpr[19] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E88CC;
      }
      goto L_089E86E0;
    }
L_089E86E0:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[23])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(21, ctx.gpr[22] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(5, ctx.gpr[21] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(168));
    ctx.set_gpr(31, 0x089E8704u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 249u, 0x089E4F64u>(ctx, &aot_mem) && ctx.pc == 0x089E8704u) goto L_089E8704;
    return;
L_089E8704:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(156));
    ctx.set_gpr(31, 0x089E8734u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x089E8734u) goto L_089E8734;
    return;
L_089E8734:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(5, ctx.gpr[21] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(17, ctx.gpr[21] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(140));
    ctx.set_gpr(31, 0x089E8768u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 449u, 0x089E6A8Cu>(ctx, &aot_mem) && ctx.pc == 0x089E8768u) goto L_089E8768;
    return;
L_089E8768:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[15] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(31, 0x089E87A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x089E87A4u) goto L_089E87A4;
    return;
L_089E87A4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(5, ctx.gpr[21] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(30, ctx.gpr[21] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(17, ctx.gpr[21] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(31, 0x089E87E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 321u, 0x089E5914u>(ctx, &aot_mem) && ctx.pc == 0x089E87E8u) goto L_089E87E8;
    return;
L_089E87E8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(31, 0x089E87FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 321u, 0x089E5914u>(ctx, &aot_mem) && ctx.pc == 0x089E87FCu) goto L_089E87FC;
    return;
L_089E87FC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(31, 0x089E8810u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 403u, 0x089E6438u>(ctx, &aot_mem) && ctx.pc == 0x089E8810u) goto L_089E8810;
    return;
L_089E8810:
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089E8824u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 320u, 0x089E5900u>(ctx, &aot_mem) && ctx.pc == 0x089E8824u) goto L_089E8824;
    return;
L_089E8824:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089E883Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 320u, 0x089E5900u>(ctx, &aot_mem) && ctx.pc == 0x089E883Cu) goto L_089E883C;
    return;
L_089E883C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.set_fpr_bits(12, ctx.fpr_bits(22));
    ctx.set_gpr(31, 0x089E8854u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 595u, 0x0883E9F0u>(ctx, &aot_mem) && ctx.pc == 0x089E8854u) goto L_089E8854;
    return;
L_089E8854:
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(308));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E8878u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E8878u) goto L_089E8878;
    return;
L_089E8878:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(292));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089E8888u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x089E8888u) goto L_089E8888;
    return;
L_089E8888:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E88A4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E88A4u) goto L_089E88A4;
    return;
L_089E88A4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(276));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(216)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E88C8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E88C8u) goto L_089E88C8;
    return;
L_089E88C8:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089E88CC;
L_089E88CC:
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[20]);
    ctx.set_gpr(3, ctx.gpr[16] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E86E0;
      }
      goto L_089E88DC;
    }
L_089E88DC:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(320));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E8920:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-432));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[25]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_fpr_bits(24, ctx.fpr_bits(12));
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(22, ctx.gpr[6] + 0u);
    ctx.set_gpr(23, ctx.gpr[7] + 0u);
    ctx.set_gpr(19, ctx.gpr[8] + 0u);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(23, 0x7FC00000u); else ctx.fpr[23] = fs * ft; }
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(9));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(344));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E89E0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E89E0u) goto L_089E89E0;
    return;
L_089E89E0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E89F8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E89F8u) goto L_089E89F8;
    return;
L_089E89F8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(200));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E8A10u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E8A10u) goto L_089E8A10;
    return;
L_089E8A10:
    ctx.set_gpr(18, ctx.gpr[20] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E8C14;
      }
      goto L_089E8A1C;
    }
L_089E8A1C:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[23])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(16, ctx.gpr[22] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(172));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(196));
    ctx.set_gpr(31, 0x089E8A40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 249u, 0x089E4F64u>(ctx, &aot_mem) && ctx.pc == 0x089E8A40u) goto L_089E8A40;
    return;
L_089E8A40:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(184));
    ctx.set_gpr(31, 0x089E8A70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x089E8A70u) goto L_089E8A70;
    return;
L_089E8A70:
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(17, ctx.gpr[16] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(168));
    ctx.set_gpr(31, 0x089E8A98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 449u, 0x089E6A8Cu>(ctx, &aot_mem) && ctx.pc == 0x089E8A98u) goto L_089E8A98;
    return;
L_089E8A98:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[15] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(152));
    ctx.set_gpr(31, 0x089E8AD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x089E8AD4u) goto L_089E8AD4;
    return;
L_089E8AD4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(17, ctx.gpr[16] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x089E8B18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 321u, 0x089E5914u>(ctx, &aot_mem) && ctx.pc == 0x089E8B18u) goto L_089E8B18;
    return;
L_089E8B18:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(31, 0x089E8B2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 321u, 0x089E5914u>(ctx, &aot_mem) && ctx.pc == 0x089E8B2Cu) goto L_089E8B2C;
    return;
L_089E8B2C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(31, 0x089E8B40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 403u, 0x089E6438u>(ctx, &aot_mem) && ctx.pc == 0x089E8B40u) goto L_089E8B40;
    return;
L_089E8B40:
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089E8B54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 320u, 0x089E5900u>(ctx, &aot_mem) && ctx.pc == 0x089E8B54u) goto L_089E8B54;
    return;
L_089E8B54:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[25] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089E8B6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 320u, 0x089E5900u>(ctx, &aot_mem) && ctx.pc == 0x089E8B6Cu) goto L_089E8B6C;
    return;
L_089E8B6C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.set_fpr_bits(12, ctx.fpr_bits(25));
    ctx.set_gpr(31, 0x089E8B84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 595u, 0x0883E9F0u>(ctx, &aot_mem) && ctx.pc == 0x089E8B84u) goto L_089E8B84;
    return;
L_089E8B84:
    ctx.fpr[26] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[25] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(416));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089E8BD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x089E8BD0u) goto L_089E8BD0;
    return;
L_089E8BD0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-14216)));
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[25]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(31, 0x089E8BF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 595u, 0x0883E9F0u>(ctx, &aot_mem) && ctx.pc == 0x089E8BF0u) goto L_089E8BF0;
    return;
L_089E8BF0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(200));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089E8C00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 340u, 0x089E5BE0u>(ctx, &aot_mem) && ctx.pc == 0x089E8C00u) goto L_089E8C00;
    return;
L_089E8C00:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_089E8C14;
L_089E8C14:
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[21]);
    ctx.set_gpr(2, ctx.gpr[18] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E8A1C;
      }
      goto L_089E8C24;
    }
L_089E8C24:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(344));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E8C3Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E8C3Cu) goto L_089E8C3C;
    return;
L_089E8C3C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E8C54u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E8C54u) goto L_089E8C54;
    return;
L_089E8C54:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(200));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E8C6Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E8C6Cu) goto L_089E8C6C;
    return;
L_089E8C6C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[26] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[25] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[24] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(432));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E8CB8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-304));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_fpr_bits(21, ctx.fpr_bits(12));
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(22, ctx.gpr[7] + 0u);
    ctx.set_gpr(18, ctx.gpr[8] + 0u);
    ctx.set_gpr(17, ctx.gpr[9] + 0u);
    { const float fs = ctx.fpr[21]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(20, 0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E8EB8;
      }
      goto L_089E8D10;
    }
L_089E8D10:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089E8D20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089E8D20u) goto L_089E8D20;
    return;
L_089E8D20:
    ctx.set_gpr(16, ctx.gpr[20] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E8E90;
      }
      goto L_089E8D2C;
    }
L_089E8D2C:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(18, ctx.gpr[19] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(248));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.set_gpr(31, 0x089E8D50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 249u, 0x089E4F64u>(ctx, &aot_mem) && ctx.pc == 0x089E8D50u) goto L_089E8D50;
    return;
L_089E8D50:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(260));
    ctx.set_gpr(31, 0x089E8D80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x089E8D80u) goto L_089E8D80;
    return;
L_089E8D80:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(23, ctx.gpr[18] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.set_gpr(31, 0x089E8DBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 449u, 0x089E6A8Cu>(ctx, &aot_mem) && ctx.pc == 0x089E8DBCu) goto L_089E8DBC;
    return;
L_089E8DBC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(244));
    ctx.set_gpr(31, 0x089E8DD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 449u, 0x089E6A8Cu>(ctx, &aot_mem) && ctx.pc == 0x089E8DD0u) goto L_089E8DD0;
    return;
L_089E8DD0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(31, 0x089E8DE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 496u, 0x089E7188u>(ctx, &aot_mem) && ctx.pc == 0x089E8DE4u) goto L_089E8DE4;
    return;
L_089E8DE4:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.fpr[15] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.set_gpr(31, 0x089E8E24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x089E8E24u) goto L_089E8E24;
    return;
L_089E8E24:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(292));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E8E60u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E8E60u) goto L_089E8E60;
    return;
L_089E8E60:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(276));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089E8E70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x089E8E70u) goto L_089E8E70;
    return;
L_089E8E70:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E8E8Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E8E8Cu) goto L_089E8E8C;
    return;
L_089E8E8C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089E8E90;
L_089E8E90:
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[21]);
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E8D2C;
      }
      goto L_089E8EA0;
    }
L_089E8EA0:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089E8EB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089E8EB0u) goto L_089E8EB0;
    return;
L_089E8EB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E9038;
      }
      goto L_089E8EB8;
    }
L_089E8EB8:
    ctx.set_gpr(16, ctx.gpr[20] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E9028;
      }
      goto L_089E8EC4;
    }
L_089E8EC4:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(17, ctx.gpr[19] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(148));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(172));
    ctx.set_gpr(31, 0x089E8EE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 249u, 0x089E4F64u>(ctx, &aot_mem) && ctx.pc == 0x089E8EE8u) goto L_089E8EE8;
    return;
L_089E8EE8:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.set_gpr(31, 0x089E8F18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x089E8F18u) goto L_089E8F18;
    return;
L_089E8F18:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(23, ctx.gpr[17] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(140));
    ctx.set_gpr(31, 0x089E8F54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 449u, 0x089E6A8Cu>(ctx, &aot_mem) && ctx.pc == 0x089E8F54u) goto L_089E8F54;
    return;
L_089E8F54:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.set_gpr(31, 0x089E8F68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 449u, 0x089E6A8Cu>(ctx, &aot_mem) && ctx.pc == 0x089E8F68u) goto L_089E8F68;
    return;
L_089E8F68:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(31, 0x089E8F7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 496u, 0x089E7188u>(ctx, &aot_mem) && ctx.pc == 0x089E8F7Cu) goto L_089E8F7C;
    return;
L_089E8F7C:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[15] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(31, 0x089E8FBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x089E8FBCu) goto L_089E8FBC;
    return;
L_089E8FBC:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(292));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E8FF8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E8FF8u) goto L_089E8FF8;
    return;
L_089E8FF8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(276));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089E9008u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x089E9008u) goto L_089E9008;
    return;
L_089E9008:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E9024u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E9024u) goto L_089E9024;
    return;
L_089E9024:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089E9028;
L_089E9028:
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[21]);
    ctx.set_gpr(3, ctx.gpr[16] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E8EC4;
      }
      goto L_089E9038;
    }
L_089E9038:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(304));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9070:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-416));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_fpr_bits(24, ctx.fpr_bits(12));
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(23, ctx.gpr[7] + 0u);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(23, 0x7FC00000u); else ctx.fpr[23] = fs * ft; }
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(9));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(328));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E9128u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E9128u) goto L_089E9128;
    return;
L_089E9128:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E9140u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E9140u) goto L_089E9140;
    return;
L_089E9140:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(184));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E9158u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E9158u) goto L_089E9158;
    return;
L_089E9158:
    ctx.set_gpr(16, ctx.gpr[19] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E92BC;
      }
      goto L_089E9164;
    }
L_089E9164:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[23])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(21, ctx.gpr[18] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_gpr(5, ctx.gpr[21] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(156));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(180));
    ctx.set_gpr(31, 0x089E9188u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 249u, 0x089E4F64u>(ctx, &aot_mem) && ctx.pc == 0x089E9188u) goto L_089E9188;
    return;
L_089E9188:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(168));
    ctx.set_gpr(31, 0x089E91B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x089E91B8u) goto L_089E91B8;
    return;
L_089E91B8:
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_gpr(5, ctx.gpr[21] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(22, ctx.gpr[21] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(148));
    ctx.set_gpr(31, 0x089E91E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 449u, 0x089E6A8Cu>(ctx, &aot_mem) && ctx.pc == 0x089E91E8u) goto L_089E91E8;
    return;
L_089E91E8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(152));
    ctx.set_gpr(31, 0x089E91FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 449u, 0x089E6A8Cu>(ctx, &aot_mem) && ctx.pc == 0x089E91FCu) goto L_089E91FC;
    return;
L_089E91FC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(31, 0x089E9210u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 496u, 0x089E7188u>(ctx, &aot_mem) && ctx.pc == 0x089E9210u) goto L_089E9210;
    return;
L_089E9210:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[15] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(31, 0x089E9250u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x089E9250u) goto L_089E9250;
    return;
L_089E9250:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(412), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.set_gpr(21, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(400));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089E92B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x089E92B4u) goto L_089E92B4;
    return;
L_089E92B4:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089E92BC;
L_089E92BC:
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[20]);
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E9164;
      }
      goto L_089E92CC;
    }
L_089E92CC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(328));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E92E4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E92E4u) goto L_089E92E4;
    return;
L_089E92E4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E92FCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E92FCu) goto L_089E92FC;
    return;
L_089E92FC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(184));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E9314u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E9314u) goto L_089E9314;
    return;
L_089E9314:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[24] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(416));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9358:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-304));
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
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_fpr_bits(21, ctx.fpr_bits(12));
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(22, ctx.gpr[7] + 0u);
    ctx.set_gpr(18, ctx.gpr[8] + 0u);
    ctx.set_gpr(17, ctx.gpr[9] + 0u);
    { const float fs = ctx.fpr[21]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(20, 0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E958C;
      }
      goto L_089E93B8;
    }
L_089E93B8:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089E93C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089E93C8u) goto L_089E93C8;
    return;
L_089E93C8:
    ctx.set_gpr(16, ctx.gpr[20] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E9564;
      }
      goto L_089E93D4;
    }
L_089E93D4:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(18, ctx.gpr[19] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(248));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.set_gpr(31, 0x089E93F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 249u, 0x089E4F64u>(ctx, &aot_mem) && ctx.pc == 0x089E93F8u) goto L_089E93F8;
    return;
L_089E93F8:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(260));
    ctx.set_gpr(31, 0x089E9428u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x089E9428u) goto L_089E9428;
    return;
L_089E9428:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(23, ctx.gpr[18] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(30, ctx.gpr[18] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.set_gpr(31, 0x089E9464u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 449u, 0x089E6A8Cu>(ctx, &aot_mem) && ctx.pc == 0x089E9464u) goto L_089E9464;
    return;
L_089E9464:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(244));
    ctx.set_gpr(31, 0x089E9478u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 449u, 0x089E6A8Cu>(ctx, &aot_mem) && ctx.pc == 0x089E9478u) goto L_089E9478;
    return;
L_089E9478:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(31, 0x089E948Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 496u, 0x089E7188u>(ctx, &aot_mem) && ctx.pc == 0x089E948Cu) goto L_089E948C;
    return;
L_089E948C:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.fpr[15] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.set_gpr(31, 0x089E94CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x089E94CCu) goto L_089E94CC;
    return;
L_089E94CC:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.fpr[22] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(292));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E9518u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E9518u) goto L_089E9518;
    return;
L_089E9518:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(276));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089E9528u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x089E9528u) goto L_089E9528;
    return;
L_089E9528:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E9544u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E9544u) goto L_089E9544;
    return;
L_089E9544:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(22));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(180)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E9560u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E9560u) goto L_089E9560;
    return;
L_089E9560:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089E9564;
L_089E9564:
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[21]);
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E93D4;
      }
      goto L_089E9574;
    }
L_089E9574:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089E9584u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089E9584u) goto L_089E9584;
    return;
L_089E9584:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E9738;
      }
      goto L_089E958C;
    }
L_089E958C:
    ctx.set_gpr(16, ctx.gpr[20] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E9728;
      }
      goto L_089E9598;
    }
L_089E9598:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(17, ctx.gpr[19] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(148));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(172));
    ctx.set_gpr(31, 0x089E95BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 249u, 0x089E4F64u>(ctx, &aot_mem) && ctx.pc == 0x089E95BCu) goto L_089E95BC;
    return;
L_089E95BC:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.set_gpr(31, 0x089E95ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x089E95ECu) goto L_089E95EC;
    return;
L_089E95EC:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(23, ctx.gpr[17] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(30, ctx.gpr[17] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(140));
    ctx.set_gpr(31, 0x089E9628u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 449u, 0x089E6A8Cu>(ctx, &aot_mem) && ctx.pc == 0x089E9628u) goto L_089E9628;
    return;
L_089E9628:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.set_gpr(31, 0x089E963Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 449u, 0x089E6A8Cu>(ctx, &aot_mem) && ctx.pc == 0x089E963Cu) goto L_089E963C;
    return;
L_089E963C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(31, 0x089E9650u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 496u, 0x089E7188u>(ctx, &aot_mem) && ctx.pc == 0x089E9650u) goto L_089E9650;
    return;
L_089E9650:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[15] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(31, 0x089E9690u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x089E9690u) goto L_089E9690;
    return;
L_089E9690:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    ctx.fpr[22] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(292));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E96DCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E96DCu) goto L_089E96DC;
    return;
L_089E96DC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(276));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089E96ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x089E96ECu) goto L_089E96EC;
    return;
L_089E96EC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E9708u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E9708u) goto L_089E9708;
    return;
L_089E9708:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(22));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(208)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E9724u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E9724u) goto L_089E9724;
    return;
L_089E9724:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089E9728;
L_089E9728:
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[21]);
    ctx.set_gpr(3, ctx.gpr[16] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E9598;
      }
      goto L_089E9738;
    }
L_089E9738:
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
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(304));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9778:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-416));
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
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_fpr_bits(24, ctx.fpr_bits(12));
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(30, ctx.gpr[7] + 0u);
    ctx.set_gpr(18, ctx.gpr[8] + 0u);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(23, 0x7FC00000u); else ctx.fpr[23] = fs * ft; }
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(9));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(328));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E9838u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E9838u) goto L_089E9838;
    return;
L_089E9838:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E9850u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E9850u) goto L_089E9850;
    return;
L_089E9850:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(184));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E9868u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E9868u) goto L_089E9868;
    return;
L_089E9868:
    ctx.set_gpr(17, ctx.gpr[20] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E9A00;
      }
      goto L_089E9874;
    }
L_089E9874:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[30])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(16, ctx.gpr[19] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(156));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(180));
    ctx.set_gpr(31, 0x089E9898u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 249u, 0x089E4F64u>(ctx, &aot_mem) && ctx.pc == 0x089E9898u) goto L_089E9898;
    return;
L_089E9898:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(168));
    ctx.set_gpr(31, 0x089E98C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x089E98C8u) goto L_089E98C8;
    return;
L_089E98C8:
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(22, ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(23, ctx.gpr[16] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(148));
    ctx.set_gpr(31, 0x089E98F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 449u, 0x089E6A8Cu>(ctx, &aot_mem) && ctx.pc == 0x089E98F8u) goto L_089E98F8;
    return;
L_089E98F8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(152));
    ctx.set_gpr(31, 0x089E990Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 449u, 0x089E6A8Cu>(ctx, &aot_mem) && ctx.pc == 0x089E990Cu) goto L_089E990C;
    return;
L_089E990C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(31, 0x089E9920u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 496u, 0x089E7188u>(ctx, &aot_mem) && ctx.pc == 0x089E9920u) goto L_089E9920;
    return;
L_089E9920:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[15] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(31, 0x089E9960u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x089E9960u) goto L_089E9960;
    return;
L_089E9960:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(412), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.fpr[25] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(400));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089E99D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x089E99D4u) goto L_089E99D4;
    return;
L_089E99D4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[25]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089E9A00;
L_089E9A00:
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[21]);
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E9874;
      }
      goto L_089E9A10;
    }
L_089E9A10:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(328));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E9A28u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E9A28u) goto L_089E9A28;
    return;
L_089E9A28:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E9A40u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E9A40u) goto L_089E9A40;
    return;
L_089E9A40:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(184));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E9A58u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E9A58u) goto L_089E9A58;
    return;
L_089E9A58:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(416));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9AA4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-352));
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
    ctx.set_fpr_bits(21, ctx.fpr_bits(12));
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(22, ctx.gpr[7] + 0u);
    ctx.set_gpr(18, ctx.gpr[8] + 0u);
    ctx.set_gpr(17, ctx.gpr[9] + 0u);
    { const float fs = ctx.fpr[21]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(20, 0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089E9D38;
      }
      goto L_089E9B08;
    }
L_089E9B08:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089E9B18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089E9B18u) goto L_089E9B18;
    return;
L_089E9B18:
    ctx.set_gpr(16, ctx.gpr[20] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E9D10;
      }
      goto L_089E9B24;
    }
L_089E9B24:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(18, ctx.gpr[19] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(280));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(304));
    ctx.set_gpr(31, 0x089E9B48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 249u, 0x089E4F64u>(ctx, &aot_mem) && ctx.pc == 0x089E9B48u) goto L_089E9B48;
    return;
L_089E9B48:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(292));
    ctx.set_gpr(31, 0x089E9B78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x089E9B78u) goto L_089E9B78;
    return;
L_089E9B78:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(23, ctx.gpr[18] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(30, ctx.gpr[18] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.set_gpr(31, 0x089E9BB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 449u, 0x089E6A8Cu>(ctx, &aot_mem) && ctx.pc == 0x089E9BB4u) goto L_089E9BB4;
    return;
L_089E9BB4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(276));
    ctx.set_gpr(31, 0x089E9BC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 449u, 0x089E6A8Cu>(ctx, &aot_mem) && ctx.pc == 0x089E9BC8u) goto L_089E9BC8;
    return;
L_089E9BC8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.set_gpr(31, 0x089E9BDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 496u, 0x089E7188u>(ctx, &aot_mem) && ctx.pc == 0x089E9BDCu) goto L_089E9BDC;
    return;
L_089E9BDC:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.fpr[15] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.set_gpr(31, 0x089E9C1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x089E9C1Cu) goto L_089E9C1C;
    return;
L_089E9C1C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(188));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(204));
    ctx.set_gpr(31, 0x089E9C58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 321u, 0x089E5914u>(ctx, &aot_mem) && ctx.pc == 0x089E9C58u) goto L_089E9C58;
    return;
L_089E9C58:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(188));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089E9C68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 320u, 0x089E5900u>(ctx, &aot_mem) && ctx.pc == 0x089E9C68u) goto L_089E9C68;
    return;
L_089E9C68:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(188));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089E9C80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 320u, 0x089E5900u>(ctx, &aot_mem) && ctx.pc == 0x089E9C80u) goto L_089E9C80;
    return;
L_089E9C80:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(196));
    ctx.set_fpr_bits(12, ctx.fpr_bits(22));
    ctx.set_gpr(31, 0x089E9C98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 595u, 0x0883E9F0u>(ctx, &aot_mem) && ctx.pc == 0x089E9C98u) goto L_089E9C98;
    return;
L_089E9C98:
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(340));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E9CBCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E9CBCu) goto L_089E9CBC;
    return;
L_089E9CBC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(324));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089E9CCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x089E9CCCu) goto L_089E9CCC;
    return;
L_089E9CCC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E9CE8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E9CE8u) goto L_089E9CE8;
    return;
L_089E9CE8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(316));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(188)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E9D0Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E9D0Cu) goto L_089E9D0C;
    return;
L_089E9D0C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089E9D10;
L_089E9D10:
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[21]);
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E9B24;
      }
      goto L_089E9D20;
    }
L_089E9D20:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089E9D30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089E9D30u) goto L_089E9D30;
    return;
L_089E9D30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E9F40;
      }
      goto L_089E9D38;
    }
L_089E9D38:
    ctx.set_gpr(16, ctx.gpr[20] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089E9F30;
      }
      goto L_089E9D44;
    }
L_089E9D44:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(17, ctx.gpr[19] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(184));
    ctx.set_gpr(31, 0x089E9D68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 249u, 0x089E4F64u>(ctx, &aot_mem) && ctx.pc == 0x089E9D68u) goto L_089E9D68;
    return;
L_089E9D68:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(172));
    ctx.set_gpr(31, 0x089E9D98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x089E9D98u) goto L_089E9D98;
    return;
L_089E9D98:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(23, ctx.gpr[17] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(30, ctx.gpr[17] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(152));
    ctx.set_gpr(31, 0x089E9DD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 449u, 0x089E6A8Cu>(ctx, &aot_mem) && ctx.pc == 0x089E9DD4u) goto L_089E9DD4;
    return;
L_089E9DD4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(156));
    ctx.set_gpr(31, 0x089E9DE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 449u, 0x089E6A8Cu>(ctx, &aot_mem) && ctx.pc == 0x089E9DE8u) goto L_089E9DE8;
    return;
L_089E9DE8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(31, 0x089E9DFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 496u, 0x089E7188u>(ctx, &aot_mem) && ctx.pc == 0x089E9DFCu) goto L_089E9DFC;
    return;
L_089E9DFC:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[15] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(31, 0x089E9E3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x089E9E3Cu) goto L_089E9E3C;
    return;
L_089E9E3C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x089E9E78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 321u, 0x089E5914u>(ctx, &aot_mem) && ctx.pc == 0x089E9E78u) goto L_089E9E78;
    return;
L_089E9E78:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089E9E88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 320u, 0x089E5900u>(ctx, &aot_mem) && ctx.pc == 0x089E9E88u) goto L_089E9E88;
    return;
L_089E9E88:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089E9EA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 320u, 0x089E5900u>(ctx, &aot_mem) && ctx.pc == 0x089E9EA0u) goto L_089E9EA0;
    return;
L_089E9EA0:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_fpr_bits(12, ctx.fpr_bits(22));
    ctx.set_gpr(31, 0x089E9EB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 595u, 0x0883E9F0u>(ctx, &aot_mem) && ctx.pc == 0x089E9EB8u) goto L_089E9EB8;
    return;
L_089E9EB8:
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(340));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E9EDCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E9EDCu) goto L_089E9EDC;
    return;
L_089E9EDC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(324));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089E9EECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x089E9EECu) goto L_089E9EEC;
    return;
L_089E9EEC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E9F08u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E9F08u) goto L_089E9F08;
    return;
L_089E9F08:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(308));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(216)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089E9F2Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089E9F2Cu) goto L_089E9F2C;
    return;
L_089E9F2C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089E9F30;
L_089E9F30:
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[21]);
    ctx.set_gpr(3, ctx.gpr[16] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089E9D44;
      }
      goto L_089E9F40;
    }
L_089E9F40:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(352));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089E9F84:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-448));
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
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_fpr_bits(24, ctx.fpr_bits(12));
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(30, ctx.gpr[7] + 0u);
    ctx.set_gpr(18, ctx.gpr[8] + 0u);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(23, 0x7FC00000u); else ctx.fpr[23] = fs * ft; }
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(9));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(360));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089EA048u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EA048u) goto L_089EA048;
    return;
L_089EA048:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089EA060u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EA060u) goto L_089EA060;
    return;
L_089EA060:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(216));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089EA078u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EA078u) goto L_089EA078;
    return;
L_089EA078:
    ctx.set_gpr(17, ctx.gpr[20] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EA27C;
      }
      goto L_089EA084;
    }
L_089EA084:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[30])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(16, ctx.gpr[19] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(188));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(212));
    ctx.set_gpr(31, 0x089EA0A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 249u, 0x089E4F64u>(ctx, &aot_mem) && ctx.pc == 0x089EA0A8u) goto L_089EA0A8;
    return;
L_089EA0A8:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(200));
    ctx.set_gpr(31, 0x089EA0D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x089EA0D8u) goto L_089EA0D8;
    return;
L_089EA0D8:
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(22, ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(23, ctx.gpr[16] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(180));
    ctx.set_gpr(31, 0x089EA108u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 449u, 0x089E6A8Cu>(ctx, &aot_mem) && ctx.pc == 0x089EA108u) goto L_089EA108;
    return;
L_089EA108:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(184));
    ctx.set_gpr(31, 0x089EA11Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 449u, 0x089E6A8Cu>(ctx, &aot_mem) && ctx.pc == 0x089EA11Cu) goto L_089EA11C;
    return;
L_089EA11C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(148));
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(31, 0x089EA130u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 496u, 0x089E7188u>(ctx, &aot_mem) && ctx.pc == 0x089EA130u) goto L_089EA130;
    return;
L_089EA130:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(148));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[15] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(164));
    ctx.set_gpr(31, 0x089EA170u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x089EA170u) goto L_089EA170;
    return;
L_089EA170:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(444), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(31, 0x089EA1ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 321u, 0x089E5914u>(ctx, &aot_mem) && ctx.pc == 0x089EA1ACu) goto L_089EA1AC;
    return;
L_089EA1AC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089EA1BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 320u, 0x089E5900u>(ctx, &aot_mem) && ctx.pc == 0x089EA1BCu) goto L_089EA1BC;
    return;
L_089EA1BC:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[25] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089EA1D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 320u, 0x089E5900u>(ctx, &aot_mem) && ctx.pc == 0x089EA1D4u) goto L_089EA1D4;
    return;
L_089EA1D4:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_fpr_bits(12, ctx.fpr_bits(25));
    ctx.set_gpr(31, 0x089EA1ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 595u, 0x0883E9F0u>(ctx, &aot_mem) && ctx.pc == 0x089EA1ECu) goto L_089EA1EC;
    return;
L_089EA1EC:
    ctx.fpr[26] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[25] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(380)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(432));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089EA238u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x089EA238u) goto L_089EA238;
    return;
L_089EA238:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-14216)));
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[25]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(31, 0x089EA258u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 595u, 0x0883E9F0u>(ctx, &aot_mem) && ctx.pc == 0x089EA258u) goto L_089EA258;
    return;
L_089EA258:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(216));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089EA268u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 340u, 0x089E5BE0u>(ctx, &aot_mem) && ctx.pc == 0x089EA268u) goto L_089EA268;
    return;
L_089EA268:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089EA27C;
L_089EA27C:
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[21]);
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EA084;
      }
      goto L_089EA28C;
    }
L_089EA28C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(360));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089EA2A4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EA2A4u) goto L_089EA2A4;
    return;
L_089EA2A4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089EA2BCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EA2BCu) goto L_089EA2BC;
    return;
L_089EA2BC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(216));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089EA2D4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EA2D4u) goto L_089EA2D4;
    return;
L_089EA2D4:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(448));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EA324:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-304));
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
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_fpr_bits(21, ctx.fpr_bits(12));
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(22, ctx.gpr[7] + 0u);
    ctx.set_gpr(18, ctx.gpr[8] + 0u);
    ctx.set_gpr(17, ctx.gpr[9] + 0u);
    { const float fs = ctx.fpr[21]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(20, 0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EA564;
      }
      goto L_089EA384;
    }
L_089EA384:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089EA394u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089EA394u) goto L_089EA394;
    return;
L_089EA394:
    ctx.set_gpr(16, ctx.gpr[20] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EA53C;
      }
      goto L_089EA3A0;
    }
L_089EA3A0:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(18, ctx.gpr[19] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(248));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.set_gpr(31, 0x089EA3C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 249u, 0x089E4F64u>(ctx, &aot_mem) && ctx.pc == 0x089EA3C4u) goto L_089EA3C4;
    return;
L_089EA3C4:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(260));
    ctx.set_gpr(31, 0x089EA3F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x089EA3F4u) goto L_089EA3F4;
    return;
L_089EA3F4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(23, ctx.gpr[18] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(30, ctx.gpr[18] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.set_gpr(31, 0x089EA430u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 449u, 0x089E6A8Cu>(ctx, &aot_mem) && ctx.pc == 0x089EA430u) goto L_089EA430;
    return;
L_089EA430:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(244));
    ctx.set_gpr(31, 0x089EA444u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 449u, 0x089E6A8Cu>(ctx, &aot_mem) && ctx.pc == 0x089EA444u) goto L_089EA444;
    return;
L_089EA444:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(31, 0x089EA458u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 496u, 0x089E7188u>(ctx, &aot_mem) && ctx.pc == 0x089EA458u) goto L_089EA458;
    return;
L_089EA458:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.fpr[15] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.set_gpr(31, 0x089EA498u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x089EA498u) goto L_089EA498;
    return;
L_089EA498:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[22] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(292));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089EA4F0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EA4F0u) goto L_089EA4F0;
    return;
L_089EA4F0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(276));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089EA500u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x089EA500u) goto L_089EA500;
    return;
L_089EA500:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089EA51Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EA51Cu) goto L_089EA51C;
    return;
L_089EA51C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(22));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(180)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089EA538u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EA538u) goto L_089EA538;
    return;
L_089EA538:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089EA53C;
L_089EA53C:
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[21]);
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EA3A0;
      }
      goto L_089EA54C;
    }
L_089EA54C:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089EA55Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089EA55Cu) goto L_089EA55C;
    return;
L_089EA55C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EA71C;
      }
      goto L_089EA564;
    }
L_089EA564:
    ctx.set_gpr(16, ctx.gpr[20] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EA70C;
      }
      goto L_089EA570;
    }
L_089EA570:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(17, ctx.gpr[19] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(148));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(172));
    ctx.set_gpr(31, 0x089EA594u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 249u, 0x089E4F64u>(ctx, &aot_mem) && ctx.pc == 0x089EA594u) goto L_089EA594;
    return;
L_089EA594:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.set_gpr(31, 0x089EA5C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x089EA5C4u) goto L_089EA5C4;
    return;
L_089EA5C4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(23, ctx.gpr[17] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(30, ctx.gpr[17] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(140));
    ctx.set_gpr(31, 0x089EA600u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 449u, 0x089E6A8Cu>(ctx, &aot_mem) && ctx.pc == 0x089EA600u) goto L_089EA600;
    return;
L_089EA600:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.set_gpr(31, 0x089EA614u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 449u, 0x089E6A8Cu>(ctx, &aot_mem) && ctx.pc == 0x089EA614u) goto L_089EA614;
    return;
L_089EA614:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(31, 0x089EA628u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 496u, 0x089E7188u>(ctx, &aot_mem) && ctx.pc == 0x089EA628u) goto L_089EA628;
    return;
L_089EA628:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[15] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(31, 0x089EA668u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x089EA668u) goto L_089EA668;
    return;
L_089EA668:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[22] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(292));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089EA6C0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EA6C0u) goto L_089EA6C0;
    return;
L_089EA6C0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(276));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089EA6D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x089EA6D0u) goto L_089EA6D0;
    return;
L_089EA6D0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089EA6ECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EA6ECu) goto L_089EA6EC;
    return;
L_089EA6EC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(22));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(208)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089EA708u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EA708u) goto L_089EA708;
    return;
L_089EA708:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089EA70C;
L_089EA70C:
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[21]);
    ctx.set_gpr(3, ctx.gpr[16] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EA570;
      }
      goto L_089EA71C;
    }
L_089EA71C:
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
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(304));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EA75C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-416));
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
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_fpr_bits(24, ctx.fpr_bits(12));
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(30, ctx.gpr[7] + 0u);
    ctx.set_gpr(18, ctx.gpr[8] + 0u);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(23, 0x7FC00000u); else ctx.fpr[23] = fs * ft; }
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(9));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(328));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089EA81Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EA81Cu) goto L_089EA81C;
    return;
L_089EA81C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089EA834u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EA834u) goto L_089EA834;
    return;
L_089EA834:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(184));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089EA84Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EA84Cu) goto L_089EA84C;
    return;
L_089EA84C:
    ctx.set_gpr(17, ctx.gpr[20] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EA9F0;
      }
      goto L_089EA858;
    }
L_089EA858:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[30])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(16, ctx.gpr[19] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(156));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(180));
    ctx.set_gpr(31, 0x089EA87Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 249u, 0x089E4F64u>(ctx, &aot_mem) && ctx.pc == 0x089EA87Cu) goto L_089EA87C;
    return;
L_089EA87C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(168));
    ctx.set_gpr(31, 0x089EA8ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x089EA8ACu) goto L_089EA8AC;
    return;
L_089EA8AC:
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(22, ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(23, ctx.gpr[16] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(148));
    ctx.set_gpr(31, 0x089EA8DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 449u, 0x089E6A8Cu>(ctx, &aot_mem) && ctx.pc == 0x089EA8DCu) goto L_089EA8DC;
    return;
L_089EA8DC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(152));
    ctx.set_gpr(31, 0x089EA8F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 449u, 0x089E6A8Cu>(ctx, &aot_mem) && ctx.pc == 0x089EA8F0u) goto L_089EA8F0;
    return;
L_089EA8F0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(31, 0x089EA904u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 496u, 0x089E7188u>(ctx, &aot_mem) && ctx.pc == 0x089EA904u) goto L_089EA904;
    return;
L_089EA904:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[15] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(31, 0x089EA944u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x089EA944u) goto L_089EA944;
    return;
L_089EA944:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(412), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[23]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[25] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(400));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089EA9C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x089EA9C4u) goto L_089EA9C4;
    return;
L_089EA9C4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[25]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089EA9F0;
L_089EA9F0:
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[21]);
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EA858;
      }
      goto L_089EAA00;
    }
L_089EAA00:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(328));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089EAA18u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EAA18u) goto L_089EAA18;
    return;
L_089EAA18:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089EAA30u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EAA30u) goto L_089EAA30;
    return;
L_089EAA30:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(184));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089EAA48u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EAA48u) goto L_089EAA48;
    return;
L_089EAA48:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(416));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EAA94:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-400));
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
    ctx.set_fpr_bits(21, ctx.fpr_bits(12));
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(22, ctx.gpr[7] + 0u);
    ctx.set_gpr(18, ctx.gpr[8] + 0u);
    ctx.set_gpr(17, ctx.gpr[9] + 0u);
    { const float fs = ctx.fpr[21]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(20, 0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EAD5C;
      }
      goto L_089EAAF8;
    }
L_089EAAF8:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089EAB08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089EAB08u) goto L_089EAB08;
    return;
L_089EAB08:
    ctx.set_gpr(16, ctx.gpr[20] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EAD34;
      }
      goto L_089EAB14;
    }
L_089EAB14:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(18, ctx.gpr[19] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(328));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(352));
    ctx.set_gpr(31, 0x089EAB38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 249u, 0x089E4F64u>(ctx, &aot_mem) && ctx.pc == 0x089EAB38u) goto L_089EAB38;
    return;
L_089EAB38:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(340));
    ctx.set_gpr(31, 0x089EAB68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x089EAB68u) goto L_089EAB68;
    return;
L_089EAB68:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(23, ctx.gpr[18] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(30, ctx.gpr[18] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(320));
    ctx.set_gpr(31, 0x089EABA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 449u, 0x089E6A8Cu>(ctx, &aot_mem) && ctx.pc == 0x089EABA4u) goto L_089EABA4;
    return;
L_089EABA4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(324));
    ctx.set_gpr(31, 0x089EABB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 449u, 0x089E6A8Cu>(ctx, &aot_mem) && ctx.pc == 0x089EABB8u) goto L_089EABB8;
    return;
L_089EABB8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.set_gpr(31, 0x089EABCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 496u, 0x089E7188u>(ctx, &aot_mem) && ctx.pc == 0x089EABCCu) goto L_089EABCC;
    return;
L_089EABCC:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.fpr[15] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(304));
    ctx.set_gpr(31, 0x089EAC0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x089EAC0Cu) goto L_089EAC0C;
    return;
L_089EAC0C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(380), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(23, ctx.gpr[18] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(216));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(248));
    ctx.set_gpr(31, 0x089EAC50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 321u, 0x089E5914u>(ctx, &aot_mem) && ctx.pc == 0x089EAC50u) goto L_089EAC50;
    return;
L_089EAC50:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(252));
    ctx.set_gpr(31, 0x089EAC64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 321u, 0x089E5914u>(ctx, &aot_mem) && ctx.pc == 0x089EAC64u) goto L_089EAC64;
    return;
L_089EAC64:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(232));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.set_gpr(31, 0x089EAC78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 403u, 0x089E6438u>(ctx, &aot_mem) && ctx.pc == 0x089EAC78u) goto L_089EAC78;
    return;
L_089EAC78:
    ctx.set_gpr(18, ctx.gpr[29] + static_cast<std::uint32_t>(232));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(216));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089EAC8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 320u, 0x089E5900u>(ctx, &aot_mem) && ctx.pc == 0x089EAC8Cu) goto L_089EAC8C;
    return;
L_089EAC8C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(216));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089EACA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 320u, 0x089E5900u>(ctx, &aot_mem) && ctx.pc == 0x089EACA4u) goto L_089EACA4;
    return;
L_089EACA4:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.set_fpr_bits(12, ctx.fpr_bits(22));
    ctx.set_gpr(31, 0x089EACBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 595u, 0x0883E9F0u>(ctx, &aot_mem) && ctx.pc == 0x089EACBCu) goto L_089EACBC;
    return;
L_089EACBC:
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(388));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089EACE0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EACE0u) goto L_089EACE0;
    return;
L_089EACE0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(372));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089EACF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x089EACF0u) goto L_089EACF0;
    return;
L_089EACF0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089EAD0Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EAD0Cu) goto L_089EAD0C;
    return;
L_089EAD0C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(364));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(188)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089EAD30u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EAD30u) goto L_089EAD30;
    return;
L_089EAD30:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089EAD34;
L_089EAD34:
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[21]);
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EAB14;
      }
      goto L_089EAD44;
    }
L_089EAD44:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089EAD54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089EAD54u) goto L_089EAD54;
    return;
L_089EAD54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EAF98;
      }
      goto L_089EAD5C;
    }
L_089EAD5C:
    ctx.set_gpr(16, ctx.gpr[20] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EAF88;
      }
      goto L_089EAD68;
    }
L_089EAD68:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(17, ctx.gpr[19] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(188));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(212));
    ctx.set_gpr(31, 0x089EAD8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 249u, 0x089E4F64u>(ctx, &aot_mem) && ctx.pc == 0x089EAD8Cu) goto L_089EAD8C;
    return;
L_089EAD8C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(200));
    ctx.set_gpr(31, 0x089EADBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x089EADBCu) goto L_089EADBC;
    return;
L_089EADBC:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(23, ctx.gpr[17] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(30, ctx.gpr[17] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(180));
    ctx.set_gpr(31, 0x089EADF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 449u, 0x089E6A8Cu>(ctx, &aot_mem) && ctx.pc == 0x089EADF8u) goto L_089EADF8;
    return;
L_089EADF8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(184));
    ctx.set_gpr(31, 0x089EAE0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 449u, 0x089E6A8Cu>(ctx, &aot_mem) && ctx.pc == 0x089EAE0Cu) goto L_089EAE0C;
    return;
L_089EAE0C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(148));
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(31, 0x089EAE20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 496u, 0x089E7188u>(ctx, &aot_mem) && ctx.pc == 0x089EAE20u) goto L_089EAE20;
    return;
L_089EAE20:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(148));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[15] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(164));
    ctx.set_gpr(31, 0x089EAE60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x089EAE60u) goto L_089EAE60;
    return;
L_089EAE60:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(380), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(23, ctx.gpr[17] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(31, 0x089EAEA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 321u, 0x089E5914u>(ctx, &aot_mem) && ctx.pc == 0x089EAEA4u) goto L_089EAEA4;
    return;
L_089EAEA4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(31, 0x089EAEB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 321u, 0x089E5914u>(ctx, &aot_mem) && ctx.pc == 0x089EAEB8u) goto L_089EAEB8;
    return;
L_089EAEB8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x089EAECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 403u, 0x089E6438u>(ctx, &aot_mem) && ctx.pc == 0x089EAECCu) goto L_089EAECC;
    return;
L_089EAECC:
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089EAEE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 320u, 0x089E5900u>(ctx, &aot_mem) && ctx.pc == 0x089EAEE0u) goto L_089EAEE0;
    return;
L_089EAEE0:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089EAEF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 320u, 0x089E5900u>(ctx, &aot_mem) && ctx.pc == 0x089EAEF8u) goto L_089EAEF8;
    return;
L_089EAEF8:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.set_fpr_bits(12, ctx.fpr_bits(22));
    ctx.set_gpr(31, 0x089EAF10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 595u, 0x0883E9F0u>(ctx, &aot_mem) && ctx.pc == 0x089EAF10u) goto L_089EAF10;
    return;
L_089EAF10:
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(388));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089EAF34u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EAF34u) goto L_089EAF34;
    return;
L_089EAF34:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(372));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089EAF44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x089EAF44u) goto L_089EAF44;
    return;
L_089EAF44:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089EAF60u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EAF60u) goto L_089EAF60;
    return;
L_089EAF60:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(356));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(216)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089EAF84u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EAF84u) goto L_089EAF84;
    return;
L_089EAF84:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089EAF88;
L_089EAF88:
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[21]);
    ctx.set_gpr(3, ctx.gpr[16] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EAD68;
      }
      goto L_089EAF98;
    }
L_089EAF98:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(400));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EAFDC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-464));
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
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_fpr_bits(24, ctx.fpr_bits(12));
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(23, ctx.gpr[6] + 0u);
    ctx.set_gpr(30, ctx.gpr[7] + 0u);
    ctx.set_gpr(19, ctx.gpr[8] + 0u);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(23, 0x7FC00000u); else ctx.fpr[23] = fs * ft; }
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(380), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(9));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(376));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089EB0A0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EB0A0u) goto L_089EB0A0;
    return;
L_089EB0A0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(304));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089EB0B8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EB0B8u) goto L_089EB0B8;
    return;
L_089EB0B8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(232));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089EB0D0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EB0D0u) goto L_089EB0D0;
    return;
L_089EB0D0:
    ctx.set_gpr(18, ctx.gpr[20] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EB308;
      }
      goto L_089EB0DC;
    }
L_089EB0DC:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[30])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(16, ctx.gpr[23] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(204));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(228));
    ctx.set_gpr(31, 0x089EB100u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 249u, 0x089E4F64u>(ctx, &aot_mem) && ctx.pc == 0x089EB100u) goto L_089EB100;
    return;
L_089EB100:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(216));
    ctx.set_gpr(31, 0x089EB130u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x089EB130u) goto L_089EB130;
    return;
L_089EB130:
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(17, ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(22, ctx.gpr[16] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(196));
    ctx.set_gpr(31, 0x089EB160u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 449u, 0x089E6A8Cu>(ctx, &aot_mem) && ctx.pc == 0x089EB160u) goto L_089EB160;
    return;
L_089EB160:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(148));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(200));
    ctx.set_gpr(31, 0x089EB174u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 449u, 0x089E6A8Cu>(ctx, &aot_mem) && ctx.pc == 0x089EB174u) goto L_089EB174;
    return;
L_089EB174:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(164));
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(148));
    ctx.set_gpr(31, 0x089EB188u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 496u, 0x089E7188u>(ctx, &aot_mem) && ctx.pc == 0x089EB188u) goto L_089EB188;
    return;
L_089EB188:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(164));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[15] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(180));
    ctx.set_gpr(31, 0x089EB1C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x089EB1C8u) goto L_089EB1C8;
    return;
L_089EB1C8:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(460), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(17, ctx.gpr[16] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(31, 0x089EB20Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 321u, 0x089E5914u>(ctx, &aot_mem) && ctx.pc == 0x089EB20Cu) goto L_089EB20C;
    return;
L_089EB20C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x089EB220u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 321u, 0x089E5914u>(ctx, &aot_mem) && ctx.pc == 0x089EB220u) goto L_089EB220;
    return;
L_089EB220:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(31, 0x089EB234u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 403u, 0x089E6438u>(ctx, &aot_mem) && ctx.pc == 0x089EB234u) goto L_089EB234;
    return;
L_089EB234:
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089EB248u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 320u, 0x089E5900u>(ctx, &aot_mem) && ctx.pc == 0x089EB248u) goto L_089EB248;
    return;
L_089EB248:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[25] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089EB260u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 320u, 0x089E5900u>(ctx, &aot_mem) && ctx.pc == 0x089EB260u) goto L_089EB260;
    return;
L_089EB260:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.set_fpr_bits(12, ctx.fpr_bits(25));
    ctx.set_gpr(31, 0x089EB278u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 595u, 0x0883E9F0u>(ctx, &aot_mem) && ctx.pc == 0x089EB278u) goto L_089EB278;
    return;
L_089EB278:
    ctx.fpr[26] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[25] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(396)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(448));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089EB2C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x089EB2C4u) goto L_089EB2C4;
    return;
L_089EB2C4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-14216)));
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[25]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x089EB2E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 595u, 0x0883E9F0u>(ctx, &aot_mem) && ctx.pc == 0x089EB2E4u) goto L_089EB2E4;
    return;
L_089EB2E4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(232));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089EB2F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 340u, 0x089E5BE0u>(ctx, &aot_mem) && ctx.pc == 0x089EB2F4u) goto L_089EB2F4;
    return;
L_089EB2F4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_089EB308;
L_089EB308:
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[21]);
    ctx.set_gpr(2, ctx.gpr[18] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EB0DC;
      }
      goto L_089EB318;
    }
L_089EB318:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(376));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089EB330u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EB330u) goto L_089EB330;
    return;
L_089EB330:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(304));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089EB348u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EB348u) goto L_089EB348;
    return;
L_089EB348:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(232));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089EB360u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EB360u) goto L_089EB360;
    return;
L_089EB360:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(464));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EB3B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_fpr_bits(21, ctx.fpr_bits(12));
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(22, ctx.gpr[7] + 0u);
    ctx.set_gpr(19, ctx.gpr[8] + 0u);
    ctx.set_gpr(21, ctx.gpr[9] + 0u);
    { const float fs = ctx.fpr[21]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(20, 0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EB50C;
      }
      goto L_089EB408;
    }
L_089EB408:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089EB418u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089EB418u) goto L_089EB418;
    return;
L_089EB418:
    ctx.set_gpr(20, ctx.gpr[17] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EB4E4;
      }
      goto L_089EB424;
    }
L_089EB424:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(19, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(23, ctx.gpr[19] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(172));
    ctx.set_gpr(31, 0x089EB450u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 249u, 0x089E4F64u>(ctx, &aot_mem) && ctx.pc == 0x089EB450u) goto L_089EB450;
    return;
L_089EB450:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.set_gpr(31, 0x089EB464u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 249u, 0x089E4F64u>(ctx, &aot_mem) && ctx.pc == 0x089EB464u) goto L_089EB464;
    return;
L_089EB464:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(148));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(31, 0x089EB478u);
    // nop
    goto L_089EB620;
L_089EB478:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(148));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.set_gpr(31, 0x089EB4ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x089EB4ACu) goto L_089EB4AC;
    return;
L_089EB4AC:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(180));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089EB4E0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EB4E0u) goto L_089EB4E0;
    return;
L_089EB4E0:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_089EB4E4;
L_089EB4E4:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[20] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EB424;
      }
      goto L_089EB4F4;
    }
L_089EB4F4:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089EB504u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089EB504u) goto L_089EB504;
    return;
L_089EB504:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EB5E8;
      }
      goto L_089EB50C;
    }
L_089EB50C:
    ctx.set_gpr(20, ctx.gpr[17] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EB5D8;
      }
      goto L_089EB518;
    }
L_089EB518:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(21, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(5, ctx.gpr[21] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(23, ctx.gpr[21] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.set_gpr(31, 0x089EB544u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 249u, 0x089E4F64u>(ctx, &aot_mem) && ctx.pc == 0x089EB544u) goto L_089EB544;
    return;
L_089EB544:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(31, 0x089EB558u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 249u, 0x089E4F64u>(ctx, &aot_mem) && ctx.pc == 0x089EB558u) goto L_089EB558;
    return;
L_089EB558:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x089EB56Cu);
    // nop
    goto L_089EB620;
L_089EB56C:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(31, 0x089EB5A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x089EB5A0u) goto L_089EB5A0;
    return;
L_089EB5A0:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(180));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089EB5D4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EB5D4u) goto L_089EB5D4;
    return;
L_089EB5D4:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_089EB5D8;
L_089EB5D8:
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[18]);
    ctx.set_gpr(3, ctx.gpr[20] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EB518;
      }
      goto L_089EB5E8;
    }
L_089EB5E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EB620:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.fpr[3] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[2] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EB658:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-336));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_fpr_bits(21, ctx.fpr_bits(12));
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(23, ctx.gpr[7] + 0u);
    ctx.set_gpr(16, ctx.gpr[8] + 0u);
    { const float fs = ctx.fpr[21]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(20, 0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(9));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(264));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089EB704u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EB704u) goto L_089EB704;
    return;
L_089EB704:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089EB71Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EB71Cu) goto L_089EB71C;
    return;
L_089EB71C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089EB734u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EB734u) goto L_089EB734;
    return;
L_089EB734:
    ctx.set_gpr(22, ctx.gpr[18] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EB7F8;
      }
      goto L_089EB740;
    }
L_089EB740:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[23])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(21, ctx.gpr[17] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(5, ctx.gpr[21] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(20, ctx.gpr[21] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(31, 0x089EB76Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 249u, 0x089E4F64u>(ctx, &aot_mem) && ctx.pc == 0x089EB76Cu) goto L_089EB76C;
    return;
L_089EB76C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.set_gpr(31, 0x089EB780u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 249u, 0x089E4F64u>(ctx, &aot_mem) && ctx.pc == 0x089EB780u) goto L_089EB780;
    return;
L_089EB780:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(31, 0x089EB794u);
    // nop
    goto L_089EB620;
L_089EB794:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(31, 0x089EB7C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x089EB7C8u) goto L_089EB7C8;
    return;
L_089EB7C8:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    goto L_089EB7F8;
L_089EB7F8:
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[19]);
    ctx.set_gpr(2, ctx.gpr[22] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EB740;
      }
      goto L_089EB808;
    }
L_089EB808:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(264));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089EB820u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EB820u) goto L_089EB820;
    return;
L_089EB820:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089EB838u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EB838u) goto L_089EB838;
    return;
L_089EB838:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089EB850u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EB850u) goto L_089EB850;
    return;
L_089EB850:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(336));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EB888:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_fpr_bits(21, ctx.fpr_bits(12));
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(22, ctx.gpr[7] + 0u);
    ctx.set_gpr(19, ctx.gpr[8] + 0u);
    ctx.set_gpr(21, ctx.gpr[9] + 0u);
    { const float fs = ctx.fpr[21]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(20, 0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EBA14;
      }
      goto L_089EB8E4;
    }
L_089EB8E4:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089EB8F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089EB8F4u) goto L_089EB8F4;
    return;
L_089EB8F4:
    ctx.set_gpr(20, ctx.gpr[17] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EB9EC;
      }
      goto L_089EB900;
    }
L_089EB900:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(19, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(23, ctx.gpr[19] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(172));
    ctx.set_gpr(31, 0x089EB92Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 249u, 0x089E4F64u>(ctx, &aot_mem) && ctx.pc == 0x089EB92Cu) goto L_089EB92C;
    return;
L_089EB92C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.set_gpr(31, 0x089EB940u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 249u, 0x089E4F64u>(ctx, &aot_mem) && ctx.pc == 0x089EB940u) goto L_089EB940;
    return;
L_089EB940:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(148));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(31, 0x089EB954u);
    // nop
    goto L_089EB620;
L_089EB954:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(148));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.set_gpr(31, 0x089EB988u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x089EB988u) goto L_089EB988;
    return;
L_089EB988:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(92)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(84)));
    ctx.fpr[22] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(180));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089EB9CCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EB9CCu) goto L_089EB9CC;
    return;
L_089EB9CC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(22));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(180)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089EB9E8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EB9E8u) goto L_089EB9E8;
    return;
L_089EB9E8:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_089EB9EC;
L_089EB9EC:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[20] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EB900;
      }
      goto L_089EB9FC;
    }
L_089EB9FC:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089EBA0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089EBA0Cu) goto L_089EBA0C;
    return;
L_089EBA0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EBB1C;
      }
      goto L_089EBA14;
    }
L_089EBA14:
    ctx.set_gpr(20, ctx.gpr[17] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EBB0C;
      }
      goto L_089EBA20;
    }
L_089EBA20:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(21, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(5, ctx.gpr[21] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(23, ctx.gpr[21] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.set_gpr(31, 0x089EBA4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 249u, 0x089E4F64u>(ctx, &aot_mem) && ctx.pc == 0x089EBA4Cu) goto L_089EBA4C;
    return;
L_089EBA4C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(31, 0x089EBA60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 249u, 0x089E4F64u>(ctx, &aot_mem) && ctx.pc == 0x089EBA60u) goto L_089EBA60;
    return;
L_089EBA60:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x089EBA74u);
    // nop
    goto L_089EB620;
L_089EBA74:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(31, 0x089EBAA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x089EBAA8u) goto L_089EBAA8;
    return;
L_089EBAA8:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(92)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(84)));
    ctx.fpr[22] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(180));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089EBAECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EBAECu) goto L_089EBAEC;
    return;
L_089EBAEC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(22));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(208)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089EBB08u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EBB08u) goto L_089EBB08;
    return;
L_089EBB08:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_089EBB0C;
L_089EBB0C:
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[18]);
    ctx.set_gpr(3, ctx.gpr[20] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EBA20;
      }
      goto L_089EBB1C;
    }
L_089EBB1C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EBB58:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-336));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_fpr_bits(21, ctx.fpr_bits(12));
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(23, ctx.gpr[7] + 0u);
    ctx.set_gpr(16, ctx.gpr[8] + 0u);
    { const float fs = ctx.fpr[21]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(20, 0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(9));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(264));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089EBC04u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EBC04u) goto L_089EBC04;
    return;
L_089EBC04:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089EBC1Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EBC1Cu) goto L_089EBC1C;
    return;
L_089EBC1C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089EBC34u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EBC34u) goto L_089EBC34;
    return;
L_089EBC34:
    ctx.set_gpr(22, ctx.gpr[18] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EBD2C;
      }
      goto L_089EBC40;
    }
L_089EBC40:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[23])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(21, ctx.gpr[17] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(5, ctx.gpr[21] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(20, ctx.gpr[21] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(31, 0x089EBC6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 249u, 0x089E4F64u>(ctx, &aot_mem) && ctx.pc == 0x089EBC6Cu) goto L_089EBC6C;
    return;
L_089EBC6C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.set_gpr(31, 0x089EBC80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 249u, 0x089E4F64u>(ctx, &aot_mem) && ctx.pc == 0x089EBC80u) goto L_089EBC80;
    return;
L_089EBC80:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(31, 0x089EBC94u);
    // nop
    goto L_089EB620;
L_089EBC94:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(31, 0x089EBCC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x089EBCC8u) goto L_089EBCC8;
    return;
L_089EBCC8:
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(92)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(84)));
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    goto L_089EBD2C;
L_089EBD2C:
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[19]);
    ctx.set_gpr(2, ctx.gpr[22] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EBC40;
      }
      goto L_089EBD3C;
    }
L_089EBD3C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(264));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089EBD54u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EBD54u) goto L_089EBD54;
    return;
L_089EBD54:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089EBD6Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EBD6Cu) goto L_089EBD6C;
    return;
L_089EBD6C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089EBD84u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EBD84u) goto L_089EBD84;
    return;
L_089EBD84:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(336));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089EBDBC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-256));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_fpr_bits(21, ctx.fpr_bits(12));
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(22, ctx.gpr[7] + 0u);
    ctx.set_gpr(18, ctx.gpr[8] + 0u);
    ctx.set_gpr(17, ctx.gpr[9] + 0u);
    { const float fs = ctx.fpr[21]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(20, 0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089EBFA8;
      }
      goto L_089EBE1C;
    }
L_089EBE1C:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089EBE2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089EBE2Cu) goto L_089EBE2C;
    return;
L_089EBE2C:
    ctx.set_gpr(16, ctx.gpr[20] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089EBF80;
      }
      goto L_089EBE38;
    }
L_089EBE38:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(18, ctx.gpr[19] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(23, ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(172));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(31, 0x089EBE64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 249u, 0x089E4F64u>(ctx, &aot_mem) && ctx.pc == 0x089EBE64u) goto L_089EBE64;
    return;
L_089EBE64:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(184));
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.set_gpr(31, 0x089EBE78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 249u, 0x089E4F64u>(ctx, &aot_mem) && ctx.pc == 0x089EBE78u) goto L_089EBE78;
    return;
L_089EBE78:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(196));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(184));
    ctx.set_gpr(31, 0x089EBE8Cu);
    // nop
    goto L_089EB620;
L_089EBE8C:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(196));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.set_gpr(31, 0x089EBEC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x089EBEC0u) goto L_089EBEC0;
    return;
L_089EBEC0:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(152));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(168));
    ctx.set_gpr(31, 0x089EBEF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 321u, 0x089E5914u>(ctx, &aot_mem) && ctx.pc == 0x089EBEF4u) goto L_089EBEF4;
    return;
L_089EBEF4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(152));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089EBF04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 320u, 0x089E5900u>(ctx, &aot_mem) && ctx.pc == 0x089EBF04u) goto L_089EBF04;
    return;
L_089EBF04:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(152));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089EBF1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 320u, 0x089E5900u>(ctx, &aot_mem) && ctx.pc == 0x089EBF1Cu) goto L_089EBF1C;
    return;
L_089EBF1C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.set_fpr_bits(12, ctx.fpr_bits(22));
    ctx.set_gpr(31, 0x089EBF34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 595u, 0x0883E9F0u>(ctx, &aot_mem) && ctx.pc == 0x089EBF34u) goto L_089EBF34;
    return;
L_089EBF34:
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(244));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089EBF58u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EBF58u) goto L_089EBF58;
    return;
L_089EBF58:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(236));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(188)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089EBF7Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089EBF7Cu) goto L_089EBF7C;
    return;
L_089EBF7C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089EBF80;
L_089EBF80:
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[21]);
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089EBE38;
      }
      goto L_089EBF90;
    }
L_089EBF90:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089EBFA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089EBFA0u) goto L_089EBFA0;
    return;
L_089EBFA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 11u, 0x089EC10Cu>(ctx, &aot_mem); return;
      }
      goto L_089EBFA8;
    }
L_089EBFA8:
    ctx.set_gpr(16, ctx.gpr[20] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 10u, 0x089EC0FCu>(ctx, &aot_mem); return;
      }
      goto L_089EBFB4;
    }
L_089EBFB4:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(17, ctx.gpr[19] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(23, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.set_gpr(31, 0x089EBFE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 249u, 0x089E4F64u>(ctx, &aot_mem) && ctx.pc == 0x089EBFE0u) goto L_089EBFE0;
    return;
L_089EBFE0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(148));
    ctx.set_gpr(31, 0x089EBFF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 249u, 0x089E4F64u>(ctx, &aot_mem) && ctx.pc == 0x089EBFF4u) goto L_089EBFF4;
    return;
L_089EBFF4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.pc = 0x089EC000u; return;
}

void recomp_unit_0121(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0121_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_121(Runtime &runtime) {
    runtime.register_generated_unit(121u, 0x089E8000u, 16384u, &recomp_unit_0121, &recomp_unit_0121_entry);
    runtime.register_function(0x089E8000u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8018u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8054u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E80ACu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E80BCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E80D8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E80F4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E80F8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8108u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8144u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8200u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8218u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8230u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E823Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8260u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8290u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E82B8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E82F4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8374u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E83A0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E83B0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E83C8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E83E0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E83F8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8440u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E84A4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E84B4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E84C0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E84E4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8514u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8548u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8584u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E85C8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E85DCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E85F0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8604u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E861Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8634u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8658u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8668u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8684u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E86A8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E86ACu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E86BCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E86CCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E86D4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E86E0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8704u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8734u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8768u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E87A4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E87E8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E87FCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8810u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8824u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E883Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8854u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8878u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8888u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E88A4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E88C8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E88CCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E88DCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8920u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E89E0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E89F8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8A10u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8A1Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8A40u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8A70u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8A98u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8AD4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8B18u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8B2Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8B40u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8B54u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8B6Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8B84u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8BD0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8BF0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8C00u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8C14u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8C24u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8C3Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8C54u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8C6Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8CB8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8D10u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8D20u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8D2Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8D50u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8D80u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8DBCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8DD0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8DE4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8E24u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8E60u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8E70u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8E8Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8E90u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8EA0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8EB0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8EB8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8EC4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8EE8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8F18u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8F54u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8F68u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8F7Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8FBCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E8FF8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9008u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9024u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9028u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9038u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9070u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9128u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9140u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9158u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9164u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9188u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E91B8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E91E8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E91FCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9210u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9250u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E92B4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E92BCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E92CCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E92E4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E92FCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9314u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9358u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E93B8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E93C8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E93D4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E93F8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9428u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9464u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9478u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E948Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E94CCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9518u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9528u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9544u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9560u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9564u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9574u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9584u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E958Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9598u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E95BCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E95ECu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9628u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E963Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9650u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9690u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E96DCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E96ECu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9708u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9724u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9728u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9738u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9778u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9838u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9850u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9868u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9874u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9898u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E98C8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E98F8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E990Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9920u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9960u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E99D4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9A00u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9A10u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9A28u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9A40u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9A58u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9AA4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9B08u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9B18u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9B24u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9B48u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9B78u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9BB4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9BC8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9BDCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9C1Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9C58u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9C68u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9C80u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9C98u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9CBCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9CCCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9CE8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9D0Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9D10u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9D20u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9D30u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9D38u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9D44u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9D68u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9D98u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9DD4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9DE8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9DFCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9E3Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9E78u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9E88u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9EA0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9EB8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9EDCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9EECu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9F08u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9F2Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9F30u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9F40u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089E9F84u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA048u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA060u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA078u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA084u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA0A8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA0D8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA108u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA11Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA130u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA170u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA1ACu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA1BCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA1D4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA1ECu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA238u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA258u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA268u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA27Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA28Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA2A4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA2BCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA2D4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA324u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA384u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA394u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA3A0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA3C4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA3F4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA430u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA444u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA458u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA498u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA4F0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA500u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA51Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA538u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA53Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA54Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA55Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA564u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA570u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA594u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA5C4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA600u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA614u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA628u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA668u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA6C0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA6D0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA6ECu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA708u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA70Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA71Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA75Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA81Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA834u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA84Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA858u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA87Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA8ACu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA8DCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA8F0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA904u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA944u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA9C4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EA9F0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAA00u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAA18u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAA30u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAA48u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAA94u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAAF8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAB08u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAB14u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAB38u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAB68u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EABA4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EABB8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EABCCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAC0Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAC50u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAC64u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAC78u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAC8Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EACA4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EACBCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EACE0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EACF0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAD0Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAD30u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAD34u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAD44u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAD54u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAD5Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAD68u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAD8Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EADBCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EADF8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAE0Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAE20u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAE60u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAEA4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAEB8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAECCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAEE0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAEF8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAF10u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAF34u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAF44u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAF60u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAF84u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAF88u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAF98u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EAFDCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB0A0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB0B8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB0D0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB0DCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB100u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB130u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB160u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB174u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB188u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB1C8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB20Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB220u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB234u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB248u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB260u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB278u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB2C4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB2E4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB2F4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB308u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB318u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB330u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB348u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB360u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB3B0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB408u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB418u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB424u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB450u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB464u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB478u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB4ACu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB4E0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB4E4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB4F4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB504u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB50Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB518u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB544u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB558u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB56Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB5A0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB5D4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB5D8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB5E8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB620u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB658u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB704u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB71Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB734u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB740u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB76Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB780u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB794u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB7C8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB7F8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB808u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB820u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB838u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB850u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB888u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB8E4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB8F4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB900u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB92Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB940u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB954u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB988u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB9CCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB9E8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB9ECu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EB9FCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBA0Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBA14u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBA20u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBA4Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBA60u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBA74u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBAA8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBAECu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBB08u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBB0Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBB1Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBB58u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBC04u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBC1Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBC34u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBC40u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBC6Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBC80u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBC94u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBCC8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBD2Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBD3Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBD54u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBD6Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBD84u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBDBCu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBE1Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBE2Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBE38u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBE64u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBE78u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBE8Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBEC0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBEF4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBF04u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBF1Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBF34u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBF58u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBF7Cu, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBF80u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBF90u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBFA0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBFA8u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBFB4u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBFE0u, &recomp_unit_0121, "recomp_unit_0121");
    runtime.register_function(0x089EBFF4u, &recomp_unit_0121, "recomp_unit_0121");
}
} // namespace psprecomp
