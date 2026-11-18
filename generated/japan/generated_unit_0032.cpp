#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0032[4095] = {
    1, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 6, 0, 7, 0, 0, 0, 8, 0, 9, 0, 10, 0, 11,
    0, 0, 0, 12, 0, 13, 0, 14, 0, 15, 0, 16, 0, 17, 0, 18, 0, 19, 0, 20, 0, 21, 0, 22, 0, 0, 23, 0, 24, 0, 0, 0,
    0, 25, 0, 0, 26, 27, 0, 0, 28, 0, 29, 0, 0, 30, 0, 0, 31, 0, 32, 0, 0, 0, 33, 34, 0, 35, 36, 0, 0, 37, 38, 0,
    0, 39, 0, 40, 0, 41, 0, 42, 0, 0, 0, 0, 43, 0, 44, 0, 45, 0, 0, 46, 0, 0, 0, 47, 0, 48, 0, 49, 0, 50, 0, 0,
    51, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 54, 0, 0, 55, 0, 0, 0, 0, 0, 56, 0,
    0, 57, 0, 58, 0, 0, 0, 0, 59, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0, 63, 0, 0, 64, 0, 0, 65, 0,
    0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 68, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 72,
    0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 76, 0, 77, 0, 0, 0, 0, 78, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 80, 0,
    0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 0, 84, 85, 0, 0,
    0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 89, 0, 90, 0, 0, 91, 0, 0, 92, 0, 0, 0, 93, 0,
    0, 0, 0, 0, 94, 0, 95, 0, 96, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0, 100, 0, 0, 101, 0, 102, 0, 103, 0, 0,
    104, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0,
    108, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 115,
    0, 116, 0, 117, 0, 0, 0, 0, 0, 118, 119, 0, 120, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 125,
    0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 132, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 137,
    138, 0, 139, 140, 0, 141, 142, 0, 143, 144, 0, 145, 146, 0, 147, 148, 0, 149, 150, 0, 151, 0, 152, 0, 153, 0, 154, 0, 0, 0, 0, 0,
    155, 0, 156, 0, 157, 0, 158, 0, 159, 0, 160, 0, 161, 0, 162, 0, 163, 0, 164, 0, 165, 0, 166, 0, 167, 0, 168, 0, 169, 0, 170, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 173, 0, 0, 0, 0,
    174, 0, 0, 0, 175, 0, 0, 176, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 179, 0, 180,
    181, 0, 0, 0, 0, 0, 182, 0, 183, 0, 184, 0, 185, 0, 0, 186, 0, 187, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 192, 0, 193, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 195, 0, 196, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 201,
    0, 202, 0, 0, 0, 0, 203, 0, 204, 0, 205, 0, 0, 0, 0, 206, 0, 0, 207, 0, 208, 0, 209, 0, 0, 0, 0, 210, 0, 211, 0, 0,
    212, 0, 0, 213, 0, 214, 0, 0, 0, 215, 216, 0, 217, 218, 0, 0, 219, 0, 220, 0, 0, 0, 221, 0, 222, 0, 223, 0, 224, 0, 0, 0,
    0, 225, 0, 226, 0, 0, 0, 0, 227, 0, 228, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 231, 0, 0, 232, 233, 0, 234, 0, 0,
    0, 0, 0, 235, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0,
    0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 242, 0, 0, 243, 0, 0, 0, 244, 0, 245, 0, 0,
    0, 0, 0, 246, 0, 247, 0, 248, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 251, 0, 0, 252, 0, 0, 0, 253, 0, 254, 0, 0, 0, 0, 0, 255,
    0, 256, 0, 257, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 261, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 264, 0, 0, 265, 0, 0, 0, 0, 266,
    0, 0, 0, 267, 0, 268, 0, 0, 0, 0, 269, 0, 270, 0, 271, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0,
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
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 276, 0, 0, 0, 277, 0, 278, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 281, 0, 0, 282, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 285,
    0, 0, 286, 0, 287, 288, 0, 289, 0, 0, 0, 0, 0, 290, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 294, 0, 0, 295, 0, 0, 0, 296, 0, 297, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 299,
    0, 0, 300, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 305, 0, 306,
    0, 0, 0, 0, 307, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 310, 0, 311, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 313, 0, 314, 0, 0, 0, 315, 0, 316, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 321,
    0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 325, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 329, 0, 0, 330, 0, 331, 0, 0, 332, 0, 0, 0, 333, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 335, 0, 0, 0, 336, 337, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 339, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 343, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 345, 0, 346, 0, 0, 0, 0, 347, 0, 348, 0, 0, 349, 0, 350, 0, 351, 0, 352, 0,
    0, 0, 353, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 356, 0, 0,
    0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0,
    360, 0, 361, 362, 0, 0, 0, 0, 0, 0, 0, 363, 0, 364, 0, 365, 0, 366, 0, 0, 0, 367, 0, 0, 368, 0, 369, 0, 370, 0, 371, 0,
    372, 0, 373, 0, 0, 0, 0, 0, 0, 374, 0, 375, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 378, 0, 0, 379, 0, 380,
    0, 381, 0, 382, 0, 0, 383, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 387, 0, 0, 0, 388, 0,
    0, 0, 389, 0, 0, 0, 390, 0, 0, 391, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 393, 394, 0, 0, 0, 0, 0, 395, 0, 396, 0, 397,
    0, 398, 0, 0, 0, 0, 399, 400, 0, 401, 0, 0, 402, 0, 0, 0, 0, 403, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 406,
    0, 407, 408, 0, 0, 0, 0, 0, 409, 0, 0, 410, 0, 0, 0, 411, 0, 412, 0, 0, 0, 0, 0, 0, 413, 0, 414, 415, 0, 416, 417, 0,
    418, 419, 0, 420, 421, 0, 422, 423, 0, 424, 425, 0, 426, 427, 0, 428, 0, 429, 0, 430, 0, 0, 0, 0, 0, 431, 0, 432, 0, 0, 433, 434,
    0, 0, 0, 0, 435, 0, 0, 436, 0, 437, 0, 438, 0, 439, 0, 440, 0, 441, 0, 442, 0, 443, 0, 444, 0, 445, 0, 446, 0, 447, 0, 448,
    0, 449, 0, 450, 0, 451, 0, 452, 0, 453, 0, 454, 0, 455, 0, 456, 0, 457, 0, 458, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    460, 0, 461, 0, 462, 463, 0, 464, 0, 465, 466, 467, 0, 0, 0, 0, 468, 0, 469, 0, 470, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 472,
    0, 0, 473, 0, 0, 0, 474, 0, 0, 0, 0, 0, 475, 0, 476, 0, 0, 0, 0, 0, 477, 0, 478, 0, 0, 479, 0, 0, 0, 0, 0, 480,
    0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 482, 0, 0, 0, 0, 0, 483, 0, 484, 0, 0, 0, 485, 0, 486, 0, 0, 487, 0, 488, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 490, 0, 0, 491, 0, 0,
    0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 496, 0,
    0, 497, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 501, 0, 0, 0, 502, 0,
    503, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0,
    0, 0, 0, 505, 0, 0, 0, 0, 506, 0, 507, 0, 508, 0, 509, 0, 0, 0, 0, 510, 0, 511, 0, 512, 0, 0, 513, 0, 0, 514, 0, 0,
    515, 0, 0, 516, 0, 517, 0, 518, 0, 519, 0, 0, 520, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 522, 0, 523, 0, 524,
    0, 525, 0, 0, 526, 0, 0, 527, 0, 0, 528, 0, 0, 529, 0, 530, 0, 531, 0, 0, 0, 0, 0, 532, 0, 533, 0, 534, 0, 535, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0,
    0, 0, 537, 0, 538, 0, 0, 0, 0, 0, 0, 539, 0, 540, 0, 0, 0, 0, 0, 0, 541, 0, 542, 0, 0, 0, 543, 0, 0, 0, 0, 544,
    0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 546, 0, 547, 0, 0, 548, 0, 549, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 550, 0, 551, 0, 552, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 553, 0, 0, 0, 0, 0,
    554, 0, 555, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 556, 0, 0, 557, 0, 0, 558, 0, 0, 559, 0, 560, 0, 561,
};
void recomp_unit_0032_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08884004u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0032[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08884004;
    case 2u: goto L_08884018;
    case 3u: goto L_08884020;
    case 4u: goto L_08884034;
    case 5u: goto L_0888403C;
    case 6u: goto L_08884050;
    case 7u: goto L_08884058;
    case 8u: goto L_08884068;
    case 9u: goto L_08884070;
    case 10u: goto L_08884078;
    case 11u: goto L_08884080;
    case 12u: goto L_08884090;
    case 13u: goto L_08884098;
    case 14u: goto L_088840A0;
    case 15u: goto L_088840A8;
    case 16u: goto L_088840B0;
    case 17u: goto L_088840B8;
    case 18u: goto L_088840C0;
    case 19u: goto L_088840C8;
    case 20u: goto L_088840D0;
    case 21u: goto L_088840D8;
    case 22u: goto L_088840E0;
    case 23u: goto L_088840EC;
    case 24u: goto L_088840F4;
    case 25u: goto L_08884108;
    case 26u: goto L_08884114;
    case 27u: goto L_08884118;
    case 28u: goto L_08884124;
    case 29u: goto L_0888412C;
    case 30u: goto L_08884138;
    case 31u: goto L_08884144;
    case 32u: goto L_0888414C;
    case 33u: goto L_0888415C;
    case 34u: goto L_08884160;
    case 35u: goto L_08884168;
    case 36u: goto L_0888416C;
    case 37u: goto L_08884178;
    case 38u: goto L_0888417C;
    case 39u: goto L_08884188;
    case 40u: goto L_08884190;
    case 41u: goto L_08884198;
    case 42u: goto L_088841A0;
    case 43u: goto L_088841B4;
    case 44u: goto L_088841BC;
    case 45u: goto L_088841C4;
    case 46u: goto L_088841D0;
    case 47u: goto L_088841E0;
    case 48u: goto L_088841E8;
    case 49u: goto L_088841F0;
    case 50u: goto L_088841F8;
    case 51u: goto L_08884204;
    case 52u: goto L_0888420C;
    case 53u: goto L_08884250;
    case 54u: goto L_08884258;
    case 55u: goto L_08884264;
    case 56u: goto L_0888427C;
    case 57u: goto L_08884288;
    case 58u: goto L_08884290;
    case 59u: goto L_088842A4;
    case 60u: goto L_088842A8;
    case 61u: goto L_088842D0;
    case 62u: goto L_088842D8;
    case 63u: goto L_088842E4;
    case 64u: goto L_088842F0;
    case 65u: goto L_088842FC;
    case 66u: goto L_08884308;
    case 67u: goto L_0888432C;
    case 68u: goto L_08884334;
    case 69u: goto L_08884340;
    case 70u: goto L_08884350;
    case 71u: goto L_08884364;
    case 72u: goto L_08884380;
    case 73u: goto L_0888438C;
    case 74u: goto L_088843B0;
    case 75u: goto L_088843CC;
    case 76u: goto L_088843DC;
    case 77u: goto L_088843E4;
    case 78u: goto L_088843F8;
    case 79u: goto L_08884464;
    case 80u: goto L_0888447C;
    case 81u: goto L_08884490;
    case 82u: goto L_088844CC;
    case 83u: goto L_088844E0;
    case 84u: goto L_088844F4;
    case 85u: goto L_088844F8;
    case 86u: goto L_08884508;
    case 87u: goto L_0888451C;
    case 88u: goto L_08884544;
    case 89u: goto L_0888454C;
    case 90u: goto L_08884554;
    case 91u: goto L_08884560;
    case 92u: goto L_0888456C;
    case 93u: goto L_0888457C;
    case 94u: goto L_08884594;
    case 95u: goto L_0888459C;
    case 96u: goto L_088845A4;
    case 97u: goto L_088845B0;
    case 98u: goto L_088845C0;
    case 99u: goto L_088845D0;
    case 100u: goto L_088845DC;
    case 101u: goto L_088845E8;
    case 102u: goto L_088845F0;
    case 103u: goto L_088845F8;
    case 104u: goto L_08884604;
    case 105u: goto L_08884610;
    case 106u: goto L_08884620;
    case 107u: goto L_08884678;
    case 108u: goto L_08884684;
    case 109u: goto L_0888468C;
    case 110u: goto L_08884694;
    case 111u: goto L_088846C0;
    case 112u: goto L_088846D4;
    case 113u: goto L_088846E0;
    case 114u: goto L_088846F0;
    case 115u: goto L_08884700;
    case 116u: goto L_08884708;
    case 117u: goto L_08884710;
    case 118u: goto L_08884728;
    case 119u: goto L_0888472C;
    case 120u: goto L_08884734;
    case 121u: goto L_0888473C;
    case 122u: goto L_088847C4;
    case 123u: goto L_088847E8;
    case 124u: goto L_088847F8;
    case 125u: goto L_08884800;
    case 126u: goto L_0888481C;
    case 127u: goto L_08884838;
    case 128u: goto L_08884848;
    case 129u: goto L_08884850;
    case 130u: goto L_08884898;
    case 131u: goto L_088848AC;
    case 132u: goto L_088848B4;
    case 133u: goto L_088848BC;
    case 134u: goto L_088848CC;
    case 135u: goto L_088848E8;
    case 136u: goto L_088848F8;
    case 137u: goto L_08884900;
    case 138u: goto L_08884904;
    case 139u: goto L_0888490C;
    case 140u: goto L_08884910;
    case 141u: goto L_08884918;
    case 142u: goto L_0888491C;
    case 143u: goto L_08884924;
    case 144u: goto L_08884928;
    case 145u: goto L_08884930;
    case 146u: goto L_08884934;
    case 147u: goto L_0888493C;
    case 148u: goto L_08884940;
    case 149u: goto L_08884948;
    case 150u: goto L_0888494C;
    case 151u: goto L_08884954;
    case 152u: goto L_0888495C;
    case 153u: goto L_08884964;
    case 154u: goto L_0888496C;
    case 155u: goto L_08884984;
    case 156u: goto L_0888498C;
    case 157u: goto L_08884994;
    case 158u: goto L_0888499C;
    case 159u: goto L_088849A4;
    case 160u: goto L_088849AC;
    case 161u: goto L_088849B4;
    case 162u: goto L_088849BC;
    case 163u: goto L_088849C4;
    case 164u: goto L_088849CC;
    case 165u: goto L_088849D4;
    case 166u: goto L_088849DC;
    case 167u: goto L_088849E4;
    case 168u: goto L_088849EC;
    case 169u: goto L_088849F4;
    case 170u: goto L_088849FC;
    case 171u: goto L_08884B3C;
    case 172u: goto L_08884B68;
    case 173u: goto L_08884B70;
    case 174u: goto L_08884B84;
    case 175u: goto L_08884B94;
    case 176u: goto L_08884BA0;
    case 177u: goto L_08884BAC;
    case 178u: goto L_08884BF4;
    case 179u: goto L_08884BF8;
    case 180u: goto L_08884C00;
    case 181u: goto L_08884C04;
    case 182u: goto L_08884C1C;
    case 183u: goto L_08884C24;
    case 184u: goto L_08884C2C;
    case 185u: goto L_08884C34;
    case 186u: goto L_08884C40;
    case 187u: goto L_08884C48;
    case 188u: goto L_08884C50;
    case 189u: goto L_08884CA4;
    case 190u: goto L_08884CB4;
    case 191u: goto L_08884CC4;
    case 192u: goto L_08884CD0;
    case 193u: goto L_08884CD8;
    case 194u: goto L_08884CE0;
    case 195u: goto L_08884D0C;
    case 196u: goto L_08884D14;
    case 197u: goto L_08884D20;
    case 198u: goto L_08884D44;
    case 199u: goto L_08884D60;
    case 200u: goto L_08884D74;
    case 201u: goto L_08884D80;
    case 202u: goto L_08884D88;
    case 203u: goto L_08884D9C;
    case 204u: goto L_08884DA4;
    case 205u: goto L_08884DAC;
    case 206u: goto L_08884DC0;
    case 207u: goto L_08884DCC;
    case 208u: goto L_08884DD4;
    case 209u: goto L_08884DDC;
    case 210u: goto L_08884DF0;
    case 211u: goto L_08884DF8;
    case 212u: goto L_08884E04;
    case 213u: goto L_08884E10;
    case 214u: goto L_08884E18;
    case 215u: goto L_08884E28;
    case 216u: goto L_08884E2C;
    case 217u: goto L_08884E34;
    case 218u: goto L_08884E38;
    case 219u: goto L_08884E44;
    case 220u: goto L_08884E4C;
    case 221u: goto L_08884E5C;
    case 222u: goto L_08884E64;
    case 223u: goto L_08884E6C;
    case 224u: goto L_08884E74;
    case 225u: goto L_08884E88;
    case 226u: goto L_08884E90;
    case 227u: goto L_08884EA4;
    case 228u: goto L_08884EAC;
    case 229u: goto L_08884EB4;
    case 230u: goto L_08884EC4;
    case 231u: goto L_08884EE0;
    case 232u: goto L_08884EEC;
    case 233u: goto L_08884EF0;
    case 234u: goto L_08884EF8;
    case 235u: goto L_08884F10;
    case 236u: goto L_08884F18;
    case 237u: goto L_0888517C;
    case 238u: goto L_088851A0;
    case 239u: goto L_088851B0;
    case 240u: goto L_088851B8;
    case 241u: goto L_08885238;
    case 242u: goto L_08885254;
    case 243u: goto L_08885260;
    case 244u: goto L_08885270;
    case 245u: goto L_08885278;
    case 246u: goto L_08885290;
    case 247u: goto L_08885298;
    case 248u: goto L_088852A0;
    case 249u: goto L_088852A8;
    case 250u: goto L_08885328;
    case 251u: goto L_08885344;
    case 252u: goto L_08885350;
    case 253u: goto L_08885360;
    case 254u: goto L_08885368;
    case 255u: goto L_08885380;
    case 256u: goto L_08885388;
    case 257u: goto L_08885390;
    case 258u: goto L_08885398;
    case 259u: goto L_08885490;
    case 260u: goto L_088854B4;
    case 261u: goto L_088854C4;
    case 262u: goto L_088854CC;
    case 263u: goto L_08885644;
    case 264u: goto L_08885660;
    case 265u: goto L_0888566C;
    case 266u: goto L_08885680;
    case 267u: goto L_08885690;
    case 268u: goto L_08885698;
    case 269u: goto L_088856AC;
    case 270u: goto L_088856B4;
    case 271u: goto L_088856BC;
    case 272u: goto L_088856C4;
    case 273u: goto L_088858BC;
    case 274u: goto L_088858D0;
    case 275u: goto L_088858E4;
    case 276u: goto L_08886010;
    case 277u: goto L_08886020;
    case 278u: goto L_08886028;
    case 279u: goto L_08886030;
    case 280u: goto L_08886320;
    case 281u: goto L_0888633C;
    case 282u: goto L_08886348;
    case 283u: goto L_08886350;
    case 284u: goto L_08886364;
    case 285u: goto L_08886380;
    case 286u: goto L_0888638C;
    case 287u: goto L_08886394;
    case 288u: goto L_08886398;
    case 289u: goto L_088863A0;
    case 290u: goto L_088863B8;
    case 291u: goto L_088863C0;
    case 292u: goto L_08886430;
    case 293u: goto L_08886440;
    case 294u: goto L_08886448;
    case 295u: goto L_08886454;
    case 296u: goto L_08886464;
    case 297u: goto L_0888646C;
    case 298u: goto L_08886764;
    case 299u: goto L_08886780;
    case 300u: goto L_0888678C;
    case 301u: goto L_08886794;
    case 302u: goto L_08886C44;
    case 303u: goto L_08886C60;
    case 304u: goto L_08886C70;
    case 305u: goto L_08886C78;
    case 306u: goto L_08886C80;
    case 307u: goto L_08886C94;
    case 308u: goto L_08886C9C;
    case 309u: goto L_08886CD8;
    case 310u: goto L_08886CF0;
    case 311u: goto L_08886CF8;
    case 312u: goto L_08886DD0;
    case 313u: goto L_08886E10;
    case 314u: goto L_08886E18;
    case 315u: goto L_08886E28;
    case 316u: goto L_08886E30;
    case 317u: goto L_08886E40;
    case 318u: goto L_08886E50;
    case 319u: goto L_08886E60;
    case 320u: goto L_08886E70;
    case 321u: goto L_08886E80;
    case 322u: goto L_08886E90;
    case 323u: goto L_08886EA0;
    case 324u: goto L_08886EB0;
    case 325u: goto L_08886EBC;
    case 326u: goto L_08886ED8;
    case 327u: goto L_08886F10;
    case 328u: goto L_08886F44;
    case 329u: goto L_08886F4C;
    case 330u: goto L_08886F58;
    case 331u: goto L_08886F60;
    case 332u: goto L_08886F6C;
    case 333u: goto L_08886F7C;
    case 334u: goto L_08886FA8;
    case 335u: goto L_08886FB0;
    case 336u: goto L_08886FC0;
    case 337u: goto L_08886FC4;
    case 338u: goto L_08886FF0;
    case 339u: goto L_08886FFC;
    case 340u: goto L_0888702C;
    case 341u: goto L_08887038;
    case 342u: goto L_08887068;
    case 343u: goto L_08887074;
    case 344u: goto L_088870A4;
    case 345u: goto L_088870B4;
    case 346u: goto L_088870BC;
    case 347u: goto L_088870D0;
    case 348u: goto L_088870D8;
    case 349u: goto L_088870E4;
    case 350u: goto L_088870EC;
    case 351u: goto L_088870F4;
    case 352u: goto L_088870FC;
    case 353u: goto L_0888710C;
    case 354u: goto L_08887114;
    case 355u: goto L_08887164;
    case 356u: goto L_08887178;
    case 357u: goto L_0888718C;
    case 358u: goto L_088871B8;
    case 359u: goto L_088871F8;
    case 360u: goto L_08887204;
    case 361u: goto L_0888720C;
    case 362u: goto L_08887210;
    case 363u: goto L_08887230;
    case 364u: goto L_08887238;
    case 365u: goto L_08887240;
    case 366u: goto L_08887248;
    case 367u: goto L_08887258;
    case 368u: goto L_08887264;
    case 369u: goto L_0888726C;
    case 370u: goto L_08887274;
    case 371u: goto L_0888727C;
    case 372u: goto L_08887284;
    case 373u: goto L_0888728C;
    case 374u: goto L_088872A8;
    case 375u: goto L_088872B0;
    case 376u: goto L_088872BC;
    case 377u: goto L_088872E4;
    case 378u: goto L_088872EC;
    case 379u: goto L_088872F8;
    case 380u: goto L_08887300;
    case 381u: goto L_08887308;
    case 382u: goto L_08887310;
    case 383u: goto L_0888731C;
    case 384u: goto L_08887328;
    case 385u: goto L_08887350;
    case 386u: goto L_08887360;
    case 387u: goto L_0888736C;
    case 388u: goto L_0888737C;
    case 389u: goto L_0888738C;
    case 390u: goto L_0888739C;
    case 391u: goto L_088873A8;
    case 392u: goto L_088873C8;
    case 393u: goto L_088873D4;
    case 394u: goto L_088873D8;
    case 395u: goto L_088873F0;
    case 396u: goto L_088873F8;
    case 397u: goto L_08887400;
    case 398u: goto L_08887408;
    case 399u: goto L_0888741C;
    case 400u: goto L_08887420;
    case 401u: goto L_08887428;
    case 402u: goto L_08887434;
    case 403u: goto L_08887448;
    case 404u: goto L_08887454;
    case 405u: goto L_08887474;
    case 406u: goto L_08887480;
    case 407u: goto L_08887488;
    case 408u: goto L_0888748C;
    case 409u: goto L_088874A4;
    case 410u: goto L_088874B0;
    case 411u: goto L_088874C0;
    case 412u: goto L_088874C8;
    case 413u: goto L_088874E4;
    case 414u: goto L_088874EC;
    case 415u: goto L_088874F0;
    case 416u: goto L_088874F8;
    case 417u: goto L_088874FC;
    case 418u: goto L_08887504;
    case 419u: goto L_08887508;
    case 420u: goto L_08887510;
    case 421u: goto L_08887514;
    case 422u: goto L_0888751C;
    case 423u: goto L_08887520;
    case 424u: goto L_08887528;
    case 425u: goto L_0888752C;
    case 426u: goto L_08887534;
    case 427u: goto L_08887538;
    case 428u: goto L_08887540;
    case 429u: goto L_08887548;
    case 430u: goto L_08887550;
    case 431u: goto L_08887568;
    case 432u: goto L_08887570;
    case 433u: goto L_0888757C;
    case 434u: goto L_08887580;
    case 435u: goto L_08887594;
    case 436u: goto L_088875A0;
    case 437u: goto L_088875A8;
    case 438u: goto L_088875B0;
    case 439u: goto L_088875B8;
    case 440u: goto L_088875C0;
    case 441u: goto L_088875C8;
    case 442u: goto L_088875D0;
    case 443u: goto L_088875D8;
    case 444u: goto L_088875E0;
    case 445u: goto L_088875E8;
    case 446u: goto L_088875F0;
    case 447u: goto L_088875F8;
    case 448u: goto L_08887600;
    case 449u: goto L_08887608;
    case 450u: goto L_08887610;
    case 451u: goto L_08887618;
    case 452u: goto L_08887620;
    case 453u: goto L_08887628;
    case 454u: goto L_08887630;
    case 455u: goto L_08887638;
    case 456u: goto L_08887640;
    case 457u: goto L_08887648;
    case 458u: goto L_08887650;
    case 459u: goto L_08887658;
    case 460u: goto L_08887684;
    case 461u: goto L_0888768C;
    case 462u: goto L_08887694;
    case 463u: goto L_08887698;
    case 464u: goto L_088876A0;
    case 465u: goto L_088876A8;
    case 466u: goto L_088876AC;
    case 467u: goto L_088876B0;
    case 468u: goto L_088876C4;
    case 469u: goto L_088876CC;
    case 470u: goto L_088876D4;
    case 471u: goto L_088876DC;
    case 472u: goto L_08887700;
    case 473u: goto L_0888770C;
    case 474u: goto L_0888771C;
    case 475u: goto L_08887734;
    case 476u: goto L_0888773C;
    case 477u: goto L_08887754;
    case 478u: goto L_0888775C;
    case 479u: goto L_08887768;
    case 480u: goto L_08887780;
    case 481u: goto L_088877A4;
    case 482u: goto L_088877B0;
    case 483u: goto L_088877C8;
    case 484u: goto L_088877D0;
    case 485u: goto L_088877E0;
    case 486u: goto L_088877E8;
    case 487u: goto L_088877F4;
    case 488u: goto L_088877FC;
    case 489u: goto L_08887854;
    case 490u: goto L_0888786C;
    case 491u: goto L_08887878;
    case 492u: goto L_08887898;
    case 493u: goto L_088878AC;
    case 494u: goto L_088878C8;
    case 495u: goto L_088878E0;
    case 496u: goto L_088878FC;
    case 497u: goto L_08887908;
    case 498u: goto L_08887928;
    case 499u: goto L_0888793C;
    case 500u: goto L_08887954;
    case 501u: goto L_0888796C;
    case 502u: goto L_0888797C;
    case 503u: goto L_08887984;
    case 504u: goto L_08887B74;
    case 505u: goto L_08887B90;
    case 506u: goto L_08887BA4;
    case 507u: goto L_08887BAC;
    case 508u: goto L_08887BB4;
    case 509u: goto L_08887BBC;
    case 510u: goto L_08887BD0;
    case 511u: goto L_08887BD8;
    case 512u: goto L_08887BE0;
    case 513u: goto L_08887BEC;
    case 514u: goto L_08887BF8;
    case 515u: goto L_08887C04;
    case 516u: goto L_08887C10;
    case 517u: goto L_08887C18;
    case 518u: goto L_08887C20;
    case 519u: goto L_08887C28;
    case 520u: goto L_08887C34;
    case 521u: goto L_08887C58;
    case 522u: goto L_08887C70;
    case 523u: goto L_08887C78;
    case 524u: goto L_08887C80;
    case 525u: goto L_08887C88;
    case 526u: goto L_08887C94;
    case 527u: goto L_08887CA0;
    case 528u: goto L_08887CAC;
    case 529u: goto L_08887CB8;
    case 530u: goto L_08887CC0;
    case 531u: goto L_08887CC8;
    case 532u: goto L_08887CE0;
    case 533u: goto L_08887CE8;
    case 534u: goto L_08887CF0;
    case 535u: goto L_08887CF8;
    case 536u: goto L_08887DE8;
    case 537u: goto L_08887E0C;
    case 538u: goto L_08887E14;
    case 539u: goto L_08887E30;
    case 540u: goto L_08887E38;
    case 541u: goto L_08887E54;
    case 542u: goto L_08887E5C;
    case 543u: goto L_08887E6C;
    case 544u: goto L_08887E80;
    case 545u: goto L_08887E94;
    case 546u: goto L_08887ECC;
    case 547u: goto L_08887ED4;
    case 548u: goto L_08887EE0;
    case 549u: goto L_08887EE8;
    case 550u: goto L_08887F1C;
    case 551u: goto L_08887F24;
    case 552u: goto L_08887F2C;
    case 553u: goto L_08887F6C;
    case 554u: goto L_08887F84;
    case 555u: goto L_08887F8C;
    case 556u: goto L_08887FC8;
    case 557u: goto L_08887FD4;
    case 558u: goto L_08887FE0;
    case 559u: goto L_08887FEC;
    case 560u: goto L_08887FF4;
    case 561u: goto L_08887FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08884004:
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(128), 0u);
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[12];
    ctx.set_gpr(31, 0x08884018u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08884018u) goto L_08884018;
    return;
L_08884018:
    ctx.set_gpr(15, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    (void)rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 966u, 0x08883FA4u>(ctx, &aot_mem); return;
L_08884020:
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), 0u);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[10];
    ctx.set_gpr(31, 0x08884034u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08884034u) goto L_08884034;
    return;
L_08884034:
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[17]);
    (void)rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 964u, 0x08883F94u>(ctx, &aot_mem); return;
L_0888403C:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[8];
    ctx.set_gpr(31, 0x08884050u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08884050u) goto L_08884050;
    return;
L_08884050:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    (void)rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 962u, 0x08883F88u>(ctx, &aot_mem); return;
L_08884058:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[5];
    ctx.set_gpr(31, 0x08884068u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08884068u) goto L_08884068;
    return;
L_08884068:
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    (void)rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 958u, 0x08883F60u>(ctx, &aot_mem); return;
L_08884070:
    ctx.set_gpr(31, 0x08884078u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(148), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 127u, 0x08894974u>(ctx, &aot_mem) && ctx.pc == 0x08884078u) goto L_08884078;
    return;
L_08884078:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 955u, 0x08883F48u>(ctx, &aot_mem); return;
L_08884080:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08884090u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 772u, 0x08882CD0u>(ctx, &aot_mem) && ctx.pc == 0x08884090u) goto L_08884090;
    return;
L_08884090:
    ctx.set_gpr(31, 0x08884098u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 591u, 0x08882310u>(ctx, &aot_mem) && ctx.pc == 0x08884098u) goto L_08884098;
    return;
L_08884098:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(148)));
    (void)rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 954u, 0x08883F40u>(ctx, &aot_mem); return;
L_088840A0:
    ctx.set_gpr(31, 0x088840A8u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 214u, 0x08880D1Cu>(ctx, &aot_mem) && ctx.pc == 0x088840A8u) goto L_088840A8;
    return;
L_088840A8:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    (void)rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 952u, 0x08883F34u>(ctx, &aot_mem); return;
L_088840B0:
    ctx.set_gpr(31, 0x088840B8u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 551u, 0x0887FC98u>(ctx, &aot_mem) && ctx.pc == 0x088840B8u) goto L_088840B8;
    return;
L_088840B8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    (void)rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 950u, 0x08883F28u>(ctx, &aot_mem); return;
L_088840C0:
    ctx.set_gpr(31, 0x088840C8u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_088840F4;
L_088840C8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    (void)rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 948u, 0x08883F1Cu>(ctx, &aot_mem); return;
L_088840D0:
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088840D8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088840D8u) goto L_088840D8;
    return;
L_088840D8:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    (void)rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 946u, 0x08883F0Cu>(ctx, &aot_mem); return;
L_088840E0:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(31, 0x088840ECu);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(15484));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 76u, 0x08879004u>(ctx, &aot_mem) && ctx.pc == 0x088840ECu) goto L_088840EC;
    return;
L_088840EC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    (void)rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 972u, 0x08883FD8u>(ctx, &aot_mem); return;
L_088840F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
      if (branch_taken) {
          goto L_088841F8;
      }
      goto L_08884108;
    }
L_08884108:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088841E8;
      }
      goto L_08884114;
    }
L_08884114:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    goto L_08884118;
L_08884118:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088841BC;
      }
      goto L_08884124;
    }
L_08884124:
    ctx.set_gpr(31, 0x0888412Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 616u, 0x08877B90u>(ctx, &aot_mem) && ctx.pc == 0x0888412Cu) goto L_0888412C;
    return;
L_0888412C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08884138u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 553u, 0x0887FCB4u>(ctx, &aot_mem) && ctx.pc == 0x08884138u) goto L_08884138;
    return;
L_08884138:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08884144u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 555u, 0x0887FCD0u>(ctx, &aot_mem) && ctx.pc == 0x08884144u) goto L_08884144;
    return;
L_08884144:
    ctx.set_gpr(31, 0x0888414Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 230u, 0x08880E34u>(ctx, &aot_mem) && ctx.pc == 0x0888414Cu) goto L_0888414C;
    return;
L_0888414C:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[8] == ctx.gpr[7]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
        goto L_08884198;
    }
    goto L_0888415C;
L_0888415C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    goto L_08884160;
L_08884160:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08884188;
      }
      goto L_08884168;
    }
L_08884168:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(168), static_cast<std::uint8_t>(0u));
    goto L_0888416C;
L_0888416C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(31, 0x08884178u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 618u, 0x08877BACu>(ctx, &aot_mem) && ctx.pc == 0x08884178u) goto L_08884178;
    return;
L_08884178:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_0888417C;
L_0888417C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08884188:
    ctx.set_gpr(31, 0x08884190u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 632u, 0x08872568u>(ctx, &aot_mem) && ctx.pc == 0x08884190u) goto L_08884190;
    return;
L_08884190:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(168), static_cast<std::uint8_t>(0u));
    goto L_0888416C;
L_08884198:
    if (ctx.gpr[4] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
        goto L_08884160;
    }
    goto L_088841A0;
L_088841A0:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[9];
    ctx.set_gpr(31, 0x088841B4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088841B4u) goto L_088841B4;
    return;
L_088841B4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    goto L_08884160;
L_088841BC:
    ctx.set_gpr(31, 0x088841C4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 181u, 0x08894C64u>(ctx, &aot_mem) && ctx.pc == 0x088841C4u) goto L_088841C4;
    return;
L_088841C4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08884124;
      }
      goto L_088841D0;
    }
L_088841D0:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[5];
    ctx.set_gpr(31, 0x088841E0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088841E0u) goto L_088841E0;
    return;
L_088841E0:
    // nop
    goto L_08884124;
L_088841E8:
    ctx.set_gpr(31, 0x088841F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 669u, 0x08882768u>(ctx, &aot_mem) && ctx.pc == 0x088841F0u) goto L_088841F0;
    return;
L_088841F0:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    goto L_08884118;
L_088841F8:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(31, 0x08884204u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(15524));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 76u, 0x08879004u>(ctx, &aot_mem) && ctx.pc == 0x08884204u) goto L_08884204;
    return;
L_08884204:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_0888417C;
L_0888420C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, ctx.gpr[18] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(5, ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08884678;
      }
      goto L_08884250;
    }
L_08884250:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(20, 2245u << 16u);
      if (branch_taken) {
          goto L_08884678;
      }
      goto L_08884258;
    }
L_08884258:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-26400)));
    if (ctx.gpr[4] != 0u) {
    ctx.set_gpr(21, 2247u << 16u);
        goto L_08884364;
    }
    goto L_08884264;
L_08884264:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(8, ctx.gpr[3] + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(7, ctx.gpr[8] & 255u);
    ctx.set_gpr(6, ctx.gpr[7] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[3]))));
      if (branch_taken) {
          goto L_0888432C;
      }
      goto L_0888427C;
    }
L_0888427C:
    ctx.set_gpr(12, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[13] == ctx.gpr[12];
    ctx.set_gpr(24, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088842D8;
      }
      goto L_08884288;
    }
L_08884288:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[24]);
    goto L_08884290;
L_08884290:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[25] + ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
      if (branch_taken) {
          goto L_088842D0;
      }
      goto L_088842A4;
    }
L_088842A4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_088842A8;
L_088842A8:
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088842D0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
    goto L_088842A4;
L_088842D8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x088842E4u);
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 197u, 0x08880BE0u>(ctx, &aot_mem) && ctx.pc == 0x088842E4u) goto L_088842E4;
    return;
L_088842E4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088842F0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 336u, 0x088813C8u>(ctx, &aot_mem) && ctx.pc == 0x088842F0u) goto L_088842F0;
    return;
L_088842F0:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088842FCu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 340u, 0x08881400u>(ctx, &aot_mem) && ctx.pc == 0x088842FCu) goto L_088842FC;
    return;
L_088842FC:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[22]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[2]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    if (ctx.gpr[2] == 0u) {
    ctx.pc = 0x08884304u; rt.stop("Allegrex BREAK code 7 at 0x08884304"); return;
        goto L_08884308;
    }
    goto L_08884308;
L_08884308:
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(20, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[21])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(15, ctx.lo);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[15]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(14, ctx.gpr[15] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[14]);
    goto L_08884290;
L_0888432C:
    ctx.set_gpr(31, 0x08884334u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 336u, 0x088813C8u>(ctx, &aot_mem) && ctx.pc == 0x08884334u) goto L_08884334;
    return;
L_08884334:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08884340u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 310u, 0x08881208u>(ctx, &aot_mem) && ctx.pc == 0x08884340u) goto L_08884340;
    return;
L_08884340:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08884350u);
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    goto L_08884694;
L_08884350:
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(10, ctx.gpr[19] - ctx.gpr[2]);
    ctx.set_gpr(9, ctx.gpr[10] + ctx.gpr[11]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    goto L_08884290;
L_08884364:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(2528), 0u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(7, ctx.gpr[3] + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(6, ctx.gpr[7] & 255u);
    ctx.set_gpr(4, ctx.gpr[6] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[3]))));
      if (branch_taken) {
          goto L_088845D0;
      }
      goto L_08884380;
    }
L_08884380:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(114))))));
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(156)));
        goto L_088843B0;
    }
    goto L_0888438C;
L_0888438C:
    ctx.set_gpr(13, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(160)));
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(-26620)));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(100));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(11, ctx.gpr[12] - ctx.gpr[2]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[11])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(8, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[8] + ctx.gpr[9]);
    goto L_088843B0;
L_088843B0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(16, ctx.gpr[3] + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(15, ctx.gpr[16] & 255u);
    ctx.set_gpr(14, ctx.gpr[15] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[14] != 0u;
    ctx.set_gpr(22, ctx.gpr[29] + 0u);
      if (branch_taken) {
          goto L_0888459C;
      }
      goto L_088843CC;
    }
L_088843CC:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[3]))));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0888454C;
      }
      goto L_088843DC;
    }
L_088843DC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    goto L_088843E4;
L_088843E4:
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(13, ctx.gpr[14] + ctx.gpr[6]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[13]) < 0;
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[13]);
      if (branch_taken) {
          goto L_08884544;
      }
      goto L_088843F8;
    }
L_088843F8:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(22, 2247u << 16u);
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(2532)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[11] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(4)));
    ctx.fpr[10] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(13)));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(12)));
    ctx.fpr[9] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(11)));
    ctx.set_gpr(15, 2225u << 16u);
    ctx.fpr[6] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(17468)));
    ctx.fpr[7] = ctx.fpr[10] / ctx.fpr[0];
    ctx.set_gpr(24, 2225u << 16u);
    ctx.fpr[8] = ctx.fpr[9] / ctx.fpr[1];
    ctx.fpr[5] = ctx.fpr[7] - ctx.fpr[8];
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(2528), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2528)));
    ctx.set_gpr(21, 2225u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(17472)));
    ctx.set_fpu_condition((ctx.fpr[2] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(17464)));
      if (branch_taken) {
          goto L_0888447C;
      }
      goto L_08884464;
    }
L_08884464:
    ctx.set_gpr(25, 2225u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(17476)));
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.set_gpr(17, ctx.gpr[3] + ctx.gpr[6]);
        goto L_088844F8;
    }
    goto L_0888447C;
L_0888447C:
    ctx.set_gpr(4, 2227u << 16u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(512)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[7];
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-26400)));
      if (branch_taken) {
          goto L_08884508;
      }
      goto L_08884490;
    }
L_08884490:
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[3] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(4)));
    ctx.fpr[19] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(2)));
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(3)));
    ctx.set_gpr(16, 2225u << 16u);
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(17480)));
    ctx.fpr[18] = ctx.fpr[20] / ctx.fpr[19];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(16, 0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpr_bits(4, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_fpu_condition((ctx.fpr[3] <= ctx.fpr[0]));
    ctx.set_gpr(16, std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(156));
      if (branch_taken) {
          goto L_088844E0;
      }
      goto L_088844CC;
    }
L_088844CC:
    ctx.fpr[5] = ctx.fpr[0] - ctx.fpr[3];
    ctx.set_gpr(3, 32768u << 16u);
    ctx.set_fpr_bits(20, ctx.fpu_float_to_word(ctx.fpr[5], 1u));
    ctx.set_gpr(9, std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(16, ctx.gpr[9] | ctx.gpr[3]);
    goto L_088844E0;
L_088844E0:
    ctx.set_gpr(11, 2245u << 16u);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-26620)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(160), ctx.gpr[10]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    goto L_088844F4;
L_088844F4:
    ctx.set_gpr(17, ctx.gpr[3] + ctx.gpr[6]);
    goto L_088844F8;
L_088844F8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(2532)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    goto L_088842A4;
L_08884508:
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(5, ctx.gpr[29] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0888451Cu);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-26400), 0u);
    goto L_0888420C;
L_0888451C:
    ctx.set_gpr(6, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-26380)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-26400), ctx.gpr[21]);
    ctx.set_gpr(20, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-26380), ctx.gpr[20]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(2532)));
    goto L_08884490;
L_08884544:
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), 0u);
    goto L_088843F8;
L_0888454C:
    ctx.set_gpr(31, 0x08884554u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 197u, 0x08880BE0u>(ctx, &aot_mem) && ctx.pc == 0x08884554u) goto L_08884554;
    return;
L_08884554:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08884560u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 336u, 0x088813C8u>(ctx, &aot_mem) && ctx.pc == 0x08884560u) goto L_08884560;
    return;
L_08884560:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x0888456Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 340u, 0x08881400u>(ctx, &aot_mem) && ctx.pc == 0x0888456Cu) goto L_0888456C;
    return;
L_0888456C:
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(16));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[10]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[2]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    if (ctx.gpr[2] == 0u) {
    ctx.pc = 0x08884578u; rt.stop("Allegrex BREAK code 7 at 0x08884578"); return;
        goto L_0888457C;
    }
    goto L_0888457C;
L_0888457C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(9, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(7, ctx.lo);
    ctx.set_gpr(16, ctx.gpr[7] + ctx.gpr[8]);
    goto L_08884594;
L_08884594:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_088843E4;
L_0888459C:
    ctx.set_gpr(31, 0x088845A4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 336u, 0x088813C8u>(ctx, &aot_mem) && ctx.pc == 0x088845A4u) goto L_088845A4;
    return;
L_088845A4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x088845B0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 310u, 0x08881208u>(ctx, &aot_mem) && ctx.pc == 0x088845B0u) goto L_088845B0;
    return;
L_088845B0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088845C0u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_08884694;
L_088845C0:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(24, ctx.gpr[16] - ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[24] + ctx.gpr[25]);
    goto L_08884594;
L_088845D0:
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(5));
    if (ctx.gpr[12] == ctx.gpr[22]) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
        goto L_088845F0;
    }
    goto L_088845DC;
L_088845DC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(3, 0u + 0u);
    ctx.set_gpr(22, 2247u << 16u);
    goto L_088845E8;
L_088845E8:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(136)));
    goto L_088844F4;
L_088845F0:
    ctx.set_gpr(31, 0x088845F8u);
    ctx.set_gpr(22, 2247u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 197u, 0x08880BE0u>(ctx, &aot_mem) && ctx.pc == 0x088845F8u) goto L_088845F8;
    return;
L_088845F8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08884604u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 336u, 0x088813C8u>(ctx, &aot_mem) && ctx.pc == 0x08884604u) goto L_08884604;
    return;
L_08884604:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08884610u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 340u, 0x08881400u>(ctx, &aot_mem) && ctx.pc == 0x08884610u) goto L_08884610;
    return;
L_08884610:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(16));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[8]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[2]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    if (ctx.gpr[2] == 0u) {
    ctx.pc = 0x0888461Cu; rt.stop("Allegrex BREAK code 7 at 0x0888461C"); return;
        goto L_08884620;
    }
    goto L_08884620;
L_08884620:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(25, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[25])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(24, ctx.lo);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[24]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[24]);
    ctx.fpr[11] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[10] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(2532)));
    ctx.fpr[8] = ctx.fpr[11] / ctx.fpr[12];
    ctx.fpr[9] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(10)));
    { const float fs = ctx.fpr[8]; const float ft = ctx.fpr[9]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(7, 0x7FC00000u); else ctx.fpr[7] = fs * ft; }
    ctx.set_fpr_bits(6, ctx.fpu_float_to_word(ctx.fpr[7], 1u));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[6]));
    ctx.set_gpr(15, std::bit_cast<std::uint32_t>(ctx.fpr[6]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(14, ctx.gpr[15] + ctx.gpr[2]);
    ctx.set_gpr(13, ctx.gpr[14] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[13] + 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[13]);
    goto L_088845E8;
L_08884678:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(31, 0x08884684u);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(15564));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 76u, 0x08879004u>(ctx, &aot_mem) && ctx.pc == 0x08884684u) goto L_08884684;
    return;
L_08884684:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_088842A8;
L_0888468C:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08884694:
    ctx.set_gpr(6, ctx.gpr[4] + 0u);
    ctx.set_gpr(7, ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[5] << 2u);
    ctx.set_gpr(8, ctx.gpr[5] >> 31u);
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[4]);
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(6, ctx.gpr[7] | ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(15604));
      if (branch_taken) {
          goto L_08884700;
      }
      goto L_088846C0;
    }
L_088846C0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(4, ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_088846E0;
      }
      goto L_088846D4;
    }
L_088846D4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088846E0:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088846F0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088846F0u) goto L_088846F0;
    return;
L_088846F0:
    ctx.set_gpr(9, ctx.gpr[2] >> 31u);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[9]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    goto L_088846D4;
L_08884700:
    ctx.set_gpr(31, 0x08884708u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 76u, 0x08879004u>(ctx, &aot_mem) && ctx.pc == 0x08884708u) goto L_08884708;
    return;
L_08884708:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_088846D4;
L_08884710:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(152), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(4, ctx.gpr[6] + 0u);
      if (branch_taken) {
          goto L_08884734;
      }
      goto L_08884728;
    }
L_08884728:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0888472C;
L_0888472C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08884734:
    ctx.set_gpr(31, 0x0888473Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 314u, 0x0888123Cu>(ctx, &aot_mem) && ctx.pc == 0x0888473Cu) goto L_0888473C;
    return;
L_0888473C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    goto L_0888472C;
L_088847C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088847E8u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 620u, 0x08877BC8u>(ctx, &aot_mem) && ctx.pc == 0x088847E8u) goto L_088847E8;
    return;
L_088847E8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088847F8u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    goto L_08886DD0;
L_088847F8:
    ctx.set_gpr(31, 0x08884800u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 621u, 0x08877BD0u>(ctx, &aot_mem) && ctx.pc == 0x08884800u) goto L_08884800;
    return;
L_08884800:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
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
L_0888481C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08884838u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 620u, 0x08877BC8u>(ctx, &aot_mem) && ctx.pc == 0x08884838u) goto L_08884838;
    return;
L_08884838:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08884848u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08886DD0;
L_08884848:
    ctx.set_gpr(31, 0x08884850u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 621u, 0x08877BD0u>(ctx, &aot_mem) && ctx.pc == 0x08884850u) goto L_08884850;
    return;
L_08884850:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08884898:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088848ACu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 620u, 0x08877BC8u>(ctx, &aot_mem) && ctx.pc == 0x088848ACu) goto L_088848AC;
    return;
L_088848AC:
    ctx.set_gpr(31, 0x088848B4u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 943u, 0x08883ED4u>(ctx, &aot_mem) && ctx.pc == 0x088848B4u) goto L_088848B4;
    return;
L_088848B4:
    ctx.set_gpr(31, 0x088848BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 621u, 0x08877BD0u>(ctx, &aot_mem) && ctx.pc == 0x088848BCu) goto L_088848BC;
    return;
L_088848BC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088848CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088848E8u);
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 620u, 0x08877BC8u>(ctx, &aot_mem) && ctx.pc == 0x088848E8u) goto L_088848E8;
    return;
L_088848E8:
    ctx.set_gpr(3, 2247u << 16u);
    ctx.set_gpr(16, ctx.gpr[3] + static_cast<std::uint32_t>(-7668));
    ctx.set_gpr(18, ctx.gpr[16] + static_cast<std::uint32_t>(3136));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    goto L_088848F8;
L_088848F8:
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088849F4;
      }
      goto L_08884900;
    }
L_08884900:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(196))))));
    goto L_08884904;
L_08884904:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[17];
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(196));
      if (branch_taken) {
          goto L_088849E4;
      }
      goto L_0888490C;
    }
L_0888490C:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(392))))));
    goto L_08884910;
L_08884910:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[17];
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(392));
      if (branch_taken) {
          goto L_088849D4;
      }
      goto L_08884918;
    }
L_08884918:
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(588))))));
    goto L_0888491C;
L_0888491C:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[17];
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(588));
      if (branch_taken) {
          goto L_088849C4;
      }
      goto L_08884924;
    }
L_08884924:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(784))))));
    goto L_08884928;
L_08884928:
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[17];
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(784));
      if (branch_taken) {
          goto L_088849B4;
      }
      goto L_08884930;
    }
L_08884930:
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(980))))));
    goto L_08884934;
L_08884934:
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[17];
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(980));
      if (branch_taken) {
          goto L_088849A4;
      }
      goto L_0888493C;
    }
L_0888493C:
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1176))))));
    goto L_08884940;
L_08884940:
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[17];
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1176));
      if (branch_taken) {
          goto L_08884994;
      }
      goto L_08884948;
    }
L_08884948:
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1372))))));
    goto L_0888494C;
L_0888494C:
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[17];
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1372));
      if (branch_taken) {
          goto L_08884984;
      }
      goto L_08884954;
    }
L_08884954:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1568));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    goto L_0888495C;
L_0888495C:
    if (ctx.gpr[4] != 0u) {
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
        goto L_088848F8;
    }
    goto L_08884964;
L_08884964:
    ctx.set_gpr(31, 0x0888496Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 621u, 0x08877BD0u>(ctx, &aot_mem) && ctx.pc == 0x0888496Cu) goto L_0888496C;
    return;
L_0888496C:
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
L_08884984:
    ctx.set_gpr(31, 0x0888498Cu);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1568));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 943u, 0x08883ED4u>(ctx, &aot_mem) && ctx.pc == 0x0888498Cu) goto L_0888498C;
    return;
L_0888498C:
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    goto L_0888495C;
L_08884994:
    ctx.set_gpr(31, 0x0888499Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 943u, 0x08883ED4u>(ctx, &aot_mem) && ctx.pc == 0x0888499Cu) goto L_0888499C;
    return;
L_0888499C:
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1372))))));
    goto L_0888494C;
L_088849A4:
    ctx.set_gpr(31, 0x088849ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 943u, 0x08883ED4u>(ctx, &aot_mem) && ctx.pc == 0x088849ACu) goto L_088849AC;
    return;
L_088849AC:
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1176))))));
    goto L_08884940;
L_088849B4:
    ctx.set_gpr(31, 0x088849BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 943u, 0x08883ED4u>(ctx, &aot_mem) && ctx.pc == 0x088849BCu) goto L_088849BC;
    return;
L_088849BC:
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(980))))));
    goto L_08884934;
L_088849C4:
    ctx.set_gpr(31, 0x088849CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 943u, 0x08883ED4u>(ctx, &aot_mem) && ctx.pc == 0x088849CCu) goto L_088849CC;
    return;
L_088849CC:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(784))))));
    goto L_08884928;
L_088849D4:
    ctx.set_gpr(31, 0x088849DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 943u, 0x08883ED4u>(ctx, &aot_mem) && ctx.pc == 0x088849DCu) goto L_088849DC;
    return;
L_088849DC:
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(588))))));
    goto L_0888491C;
L_088849E4:
    ctx.set_gpr(31, 0x088849ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 943u, 0x08883ED4u>(ctx, &aot_mem) && ctx.pc == 0x088849ECu) goto L_088849EC;
    return;
L_088849EC:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(392))))));
    goto L_08884910;
L_088849F4:
    ctx.set_gpr(31, 0x088849FCu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 943u, 0x08883ED4u>(ctx, &aot_mem) && ctx.pc == 0x088849FCu) goto L_088849FC;
    return;
L_088849FC:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(196))))));
    goto L_08884904;
L_08884B3C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08884B94;
      }
      goto L_08884B68;
    }
L_08884B68:
    ctx.set_gpr(16, ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08884B70;
L_08884B70:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[5];
    ctx.set_gpr(31, 0x08884B84u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08884B84u) goto L_08884B84;
    return;
L_08884B84:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08884B70;
    }
    goto L_08884B94;
L_08884B94:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08884BA0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 223u, 0x08880D84u>(ctx, &aot_mem) && ctx.pc == 0x08884BA0u) goto L_08884BA0;
    return;
L_08884BA0:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    ctx.set_gpr(31, 0x08884BACu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 229u, 0x08880DF0u>(ctx, &aot_mem) && ctx.pc == 0x08884BACu) goto L_08884BAC;
    return;
L_08884BAC:
    ctx.set_gpr(13, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[13]));
    ctx.set_gpr(12, 2245u << 16u);
    ctx.set_gpr(2, 32767u << 16u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(11, ctx.gpr[2] | 65535u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(-26620)));
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(140), ctx.gpr[11]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(144), ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(160), ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(76), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(156), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(164), 0u);
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[7];
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(192), 0u);
      if (branch_taken) {
          goto L_08884C2C;
      }
      goto L_08884BF4;
    }
L_08884BF4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(116)));
    goto L_08884BF8;
L_08884BF8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08884C1C;
      }
      goto L_08884C00;
    }
L_08884C00:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_08884C04;
L_08884C04:
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
L_08884C1C:
    ctx.set_gpr(31, 0x08884C24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 577u, 0x08871F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08884C24u) goto L_08884C24;
    return;
L_08884C24:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_08884C04;
L_08884C2C:
    ctx.set_gpr(31, 0x08884C34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 620u, 0x08877BC8u>(ctx, &aot_mem) && ctx.pc == 0x08884C34u) goto L_08884C34;
    return;
L_08884C34:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08884C40u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_088876DC;
L_08884C40:
    ctx.set_gpr(31, 0x08884C48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 621u, 0x08877BD0u>(ctx, &aot_mem) && ctx.pc == 0x08884C48u) goto L_08884C48;
    return;
L_08884C48:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(116)));
    goto L_08884BF8;
L_08884C50:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.set_gpr(21, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[8] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(60))))));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(62))))));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(9, ctx.gpr[11] << 11u);
    ctx.set_gpr(10, ctx.gpr[3] << 11u);
    ctx.set_gpr(5, ctx.gpr[10] + 0u);
    ctx.set_gpr(31, 0x08884CA4u);
    ctx.set_gpr(6, ctx.gpr[9] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 817u, 0x088831A0u>(ctx, &aot_mem) && ctx.pc == 0x08884CA4u) goto L_08884CA4;
    return;
L_08884CA4:
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(508)));
    ctx.set_gpr(31, 0x08884CB4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 775u, 0x08882D18u>(ctx, &aot_mem) && ctx.pc == 0x08884CB4u) goto L_08884CB4;
    return;
L_08884CB4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08884CC4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 772u, 0x08882CD0u>(ctx, &aot_mem) && ctx.pc == 0x08884CC4u) goto L_08884CC4;
    return;
L_08884CC4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x08884CD0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 722u, 0x088829C0u>(ctx, &aot_mem) && ctx.pc == 0x08884CD0u) goto L_08884CD0;
    return;
L_08884CD0:
    ctx.set_gpr(31, 0x08884CD8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 745u, 0x08882B80u>(ctx, &aot_mem) && ctx.pc == 0x08884CD8u) goto L_08884CD8;
    return;
L_08884CD8:
    ctx.set_gpr(31, 0x08884CE0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 669u, 0x08882768u>(ctx, &aot_mem) && ctx.pc == 0x08884CE0u) goto L_08884CE0;
    return;
L_08884CE0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2048));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(19, ctx.hi);
    ctx.set_gpr(18, ctx.lo);
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08884D0Cu);
    ctx.set_gpr(9, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 652u, 0x08882594u>(ctx, &aot_mem) && ctx.pc == 0x08884D0Cu) goto L_08884D0C;
    return;
L_08884D0C:
    ctx.set_gpr(31, 0x08884D14u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 731u, 0x08882A8Cu>(ctx, &aot_mem) && ctx.pc == 0x08884D14u) goto L_08884D14;
    return;
L_08884D14:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x08884D20u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08884B3C;
L_08884D20:
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
L_08884D44:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08884D60u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 620u, 0x08877BC8u>(ctx, &aot_mem) && ctx.pc == 0x08884D60u) goto L_08884D60;
    return;
L_08884D60:
    ctx.set_gpr(6, ctx.gpr[16] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[17] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08884D9C;
      }
      goto L_08884D74;
    }
L_08884D74:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(31, 0x08884D80u);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(15652));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 76u, 0x08879004u>(ctx, &aot_mem) && ctx.pc == 0x08884D80u) goto L_08884D80;
    return;
L_08884D80:
    ctx.set_gpr(31, 0x08884D88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 621u, 0x08877BD0u>(ctx, &aot_mem) && ctx.pc == 0x08884D88u) goto L_08884D88;
    return;
L_08884D88:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08884D9C:
    ctx.set_gpr(31, 0x08884DA4u);
    // nop
    goto L_088840F4;
L_08884DA4:
    ctx.set_gpr(31, 0x08884DACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 616u, 0x08877B90u>(ctx, &aot_mem) && ctx.pc == 0x08884DACu) goto L_08884DAC;
    return;
L_08884DAC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08884DC0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08884B3C;
L_08884DC0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08884DCCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08884710;
L_08884DCC:
    ctx.set_gpr(31, 0x08884DD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 618u, 0x08877BACu>(ctx, &aot_mem) && ctx.pc == 0x08884DD4u) goto L_08884DD4;
    return;
L_08884DD4:
    // nop
    goto L_08884D80;
L_08884DDC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08884DF0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 620u, 0x08877BC8u>(ctx, &aot_mem) && ctx.pc == 0x08884DF0u) goto L_08884DF0;
    return;
L_08884DF0:
    ctx.set_gpr(31, 0x08884DF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 616u, 0x08877B90u>(ctx, &aot_mem) && ctx.pc == 0x08884DF8u) goto L_08884DF8;
    return;
L_08884DF8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08884E04u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 553u, 0x0887FCB4u>(ctx, &aot_mem) && ctx.pc == 0x08884E04u) goto L_08884E04;
    return;
L_08884E04:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08884E10u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 555u, 0x0887FCD0u>(ctx, &aot_mem) && ctx.pc == 0x08884E10u) goto L_08884E10;
    return;
L_08884E10:
    ctx.set_gpr(31, 0x08884E18u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 230u, 0x08880E34u>(ctx, &aot_mem) && ctx.pc == 0x08884E18u) goto L_08884E18;
    return;
L_08884E18:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[2] == ctx.gpr[4]) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
        goto L_08884E6C;
    }
    goto L_08884E28;
L_08884E28:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    goto L_08884E2C;
L_08884E2C:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(4, ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_08884E5C;
      }
      goto L_08884E34;
    }
L_08884E34:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(168), static_cast<std::uint8_t>(0u));
    goto L_08884E38;
L_08884E38:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(31, 0x08884E44u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 618u, 0x08877BACu>(ctx, &aot_mem) && ctx.pc == 0x08884E44u) goto L_08884E44;
    return;
L_08884E44:
    ctx.set_gpr(31, 0x08884E4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 621u, 0x08877BD0u>(ctx, &aot_mem) && ctx.pc == 0x08884E4Cu) goto L_08884E4C;
    return;
L_08884E4C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08884E5C:
    ctx.set_gpr(31, 0x08884E64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 632u, 0x08872568u>(ctx, &aot_mem) && ctx.pc == 0x08884E64u) goto L_08884E64;
    return;
L_08884E64:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(168), static_cast<std::uint8_t>(0u));
    goto L_08884E38;
L_08884E6C:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(4, ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_08884E28;
      }
      goto L_08884E74;
    }
L_08884E74:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[5];
    ctx.set_gpr(31, 0x08884E88u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08884E88u) goto L_08884E88;
    return;
L_08884E88:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    goto L_08884E2C;
L_08884E90:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08884EA4u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 620u, 0x08877BC8u>(ctx, &aot_mem) && ctx.pc == 0x08884EA4u) goto L_08884EA4;
    return;
L_08884EA4:
    ctx.set_gpr(31, 0x08884EACu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_088840F4;
L_08884EAC:
    ctx.set_gpr(31, 0x08884EB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 621u, 0x08877BD0u>(ctx, &aot_mem) && ctx.pc == 0x08884EB4u) goto L_08884EB4;
    return;
L_08884EB4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08884EC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08884EE0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 620u, 0x08877BC8u>(ctx, &aot_mem) && ctx.pc == 0x08884EE0u) goto L_08884EE0;
    return;
L_08884EE0:
    ctx.set_gpr(2, 2225u << 16u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(15692));
      if (branch_taken) {
          goto L_08884F10;
      }
      goto L_08884EEC;
    }
L_08884EEC:
    ctx.set_gpr(17, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    goto L_08884EF0;
L_08884EF0:
    ctx.set_gpr(31, 0x08884EF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 621u, 0x08877BD0u>(ctx, &aot_mem) && ctx.pc == 0x08884EF8u) goto L_08884EF8;
    return;
L_08884EF8:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08884F10:
    ctx.set_gpr(31, 0x08884F18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 76u, 0x08879004u>(ctx, &aot_mem) && ctx.pc == 0x08884F18u) goto L_08884F18;
    return;
L_08884F18:
    // nop
    goto L_08884EF0;
L_0888517C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088851A0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 620u, 0x08877BC8u>(ctx, &aot_mem) && ctx.pc == 0x088851A0u) goto L_088851A0;
    return;
L_088851A0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088851B0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    goto L_0888420C;
L_088851B0:
    ctx.set_gpr(31, 0x088851B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 621u, 0x08877BD0u>(ctx, &aot_mem) && ctx.pc == 0x088851B8u) goto L_088851B8;
    return;
L_088851B8:
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
L_08885238:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08885254u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 620u, 0x08877BC8u>(ctx, &aot_mem) && ctx.pc == 0x08885254u) goto L_08885254;
    return;
L_08885254:
    ctx.set_gpr(2, 2225u << 16u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(15732));
      if (branch_taken) {
          goto L_088852A0;
      }
      goto L_08885260;
    }
L_08885260:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_08885290;
      }
      goto L_08885270;
    }
L_08885270:
    ctx.set_gpr(31, 0x08885278u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 621u, 0x08877BD0u>(ctx, &aot_mem) && ctx.pc == 0x08885278u) goto L_08885278;
    return;
L_08885278:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08885290:
    ctx.set_gpr(31, 0x08885298u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 197u, 0x08880BE0u>(ctx, &aot_mem) && ctx.pc == 0x08885298u) goto L_08885298;
    return;
L_08885298:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    goto L_08885270;
L_088852A0:
    ctx.set_gpr(31, 0x088852A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 76u, 0x08879004u>(ctx, &aot_mem) && ctx.pc == 0x088852A8u) goto L_088852A8;
    return;
L_088852A8:
    // nop
    goto L_08885270;
L_08885328:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08885344u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 620u, 0x08877BC8u>(ctx, &aot_mem) && ctx.pc == 0x08885344u) goto L_08885344;
    return;
L_08885344:
    ctx.set_gpr(2, 2225u << 16u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(15820));
      if (branch_taken) {
          goto L_08885390;
      }
      goto L_08885350;
    }
L_08885350:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_08885380;
      }
      goto L_08885360;
    }
L_08885360:
    ctx.set_gpr(31, 0x08885368u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 621u, 0x08877BD0u>(ctx, &aot_mem) && ctx.pc == 0x08885368u) goto L_08885368;
    return;
L_08885368:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08885380:
    ctx.set_gpr(31, 0x08885388u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 338u, 0x088813E4u>(ctx, &aot_mem) && ctx.pc == 0x08885388u) goto L_08885388;
    return;
L_08885388:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    goto L_08885360;
L_08885390:
    ctx.set_gpr(31, 0x08885398u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 76u, 0x08879004u>(ctx, &aot_mem) && ctx.pc == 0x08885398u) goto L_08885398;
    return;
L_08885398:
    // nop
    goto L_08885360;
L_08885490:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088854B4u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 620u, 0x08877BC8u>(ctx, &aot_mem) && ctx.pc == 0x088854B4u) goto L_088854B4;
    return;
L_088854B4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088854C4u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    goto L_08887328;
L_088854C4:
    ctx.set_gpr(31, 0x088854CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 621u, 0x08877BD0u>(ctx, &aot_mem) && ctx.pc == 0x088854CCu) goto L_088854CC;
    return;
L_088854CC:
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
L_08885644:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08885660u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 620u, 0x08877BC8u>(ctx, &aot_mem) && ctx.pc == 0x08885660u) goto L_08885660;
    return;
L_08885660:
    ctx.set_gpr(2, 2225u << 16u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(16092));
      if (branch_taken) {
          goto L_088856BC;
      }
      goto L_0888566C;
    }
L_0888566C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(169))))));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(ctx.gpr[17]));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.set_gpr(6, 0u + 0u);
      if (branch_taken) {
          goto L_088856AC;
      }
      goto L_08885680;
    }
L_08885680:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(64))))));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08885690u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 571u, 0x0887FDF4u>(ctx, &aot_mem) && ctx.pc == 0x08885690u) goto L_08885690;
    return;
L_08885690:
    ctx.set_gpr(31, 0x08885698u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 621u, 0x08877BD0u>(ctx, &aot_mem) && ctx.pc == 0x08885698u) goto L_08885698;
    return;
L_08885698:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088856AC:
    ctx.set_gpr(31, 0x088856B4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 353u, 0x08881520u>(ctx, &aot_mem) && ctx.pc == 0x088856B4u) goto L_088856B4;
    return;
L_088856B4:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    goto L_08885680;
L_088856BC:
    ctx.set_gpr(31, 0x088856C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 76u, 0x08879004u>(ctx, &aot_mem) && ctx.pc == 0x088856C4u) goto L_088856C4;
    return;
L_088856C4:
    // nop
    goto L_08885690;
L_088858BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(31, 0x088858D0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 620u, 0x08877BC8u>(ctx, &aot_mem) && ctx.pc == 0x088858D0u) goto L_088858D0;
    return;
L_088858D0:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26388), ctx.gpr[16]);
    ctx.set_gpr(31, 0x088858E4u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-26392), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 621u, 0x08877BD0u>(ctx, &aot_mem) && ctx.pc == 0x088858E4u) goto L_088858E4;
    return;
L_088858E4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08886010:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08886020u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 620u, 0x08877BC8u>(ctx, &aot_mem) && ctx.pc == 0x08886020u) goto L_08886020;
    return;
L_08886020:
    ctx.set_gpr(31, 0x08886028u);
    // nop
    goto L_08887454;
L_08886028:
    ctx.set_gpr(31, 0x08886030u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 621u, 0x08877BD0u>(ctx, &aot_mem) && ctx.pc == 0x08886030u) goto L_08886030;
    return;
L_08886030:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08886320:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(31, 0x0888633Cu);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 620u, 0x08877BC8u>(ctx, &aot_mem) && ctx.pc == 0x0888633Cu) goto L_0888633C;
    return;
L_0888633C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08886348u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 581u, 0x0887FEF4u>(ctx, &aot_mem) && ctx.pc == 0x08886348u) goto L_08886348;
    return;
L_08886348:
    ctx.set_gpr(31, 0x08886350u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 621u, 0x08877BD0u>(ctx, &aot_mem) && ctx.pc == 0x08886350u) goto L_08886350;
    return;
L_08886350:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08886364:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08886380u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 620u, 0x08877BC8u>(ctx, &aot_mem) && ctx.pc == 0x08886380u) goto L_08886380;
    return;
L_08886380:
    ctx.set_gpr(2, 2225u << 16u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(16844));
      if (branch_taken) {
          goto L_088863B8;
      }
      goto L_0888638C;
    }
L_0888638C:
    ctx.set_gpr(31, 0x08886394u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 587u, 0x0887FF48u>(ctx, &aot_mem) && ctx.pc == 0x08886394u) goto L_08886394;
    return;
L_08886394:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    goto L_08886398;
L_08886398:
    ctx.set_gpr(31, 0x088863A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 621u, 0x08877BD0u>(ctx, &aot_mem) && ctx.pc == 0x088863A0u) goto L_088863A0;
    return;
L_088863A0:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088863B8:
    ctx.set_gpr(31, 0x088863C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 76u, 0x08879004u>(ctx, &aot_mem) && ctx.pc == 0x088863C0u) goto L_088863C0;
    return;
L_088863C0:
    // nop
    goto L_08886398;
L_08886430:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08886440u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 620u, 0x08877BC8u>(ctx, &aot_mem) && ctx.pc == 0x08886440u) goto L_08886440;
    return;
L_08886440:
    ctx.set_gpr(31, 0x08886448u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 621u, 0x08877BD0u>(ctx, &aot_mem) && ctx.pc == 0x08886448u) goto L_08886448;
    return;
L_08886448:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08886454:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08886464u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 620u, 0x08877BC8u>(ctx, &aot_mem) && ctx.pc == 0x08886464u) goto L_08886464;
    return;
L_08886464:
    ctx.set_gpr(31, 0x0888646Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 621u, 0x08877BD0u>(ctx, &aot_mem) && ctx.pc == 0x0888646Cu) goto L_0888646C;
    return;
L_0888646C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08886764:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08886780u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 620u, 0x08877BC8u>(ctx, &aot_mem) && ctx.pc == 0x08886780u) goto L_08886780;
    return;
L_08886780:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0888678Cu);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_08884710;
L_0888678C:
    ctx.set_gpr(31, 0x08886794u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 621u, 0x08877BD0u>(ctx, &aot_mem) && ctx.pc == 0x08886794u) goto L_08886794;
    return;
L_08886794:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08886C44:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08886C60u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 620u, 0x08877BC8u>(ctx, &aot_mem) && ctx.pc == 0x08886C60u) goto L_08886C60;
    return;
L_08886C60:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(17100));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08886C94;
      }
      goto L_08886C70;
    }
L_08886C70:
    ctx.set_gpr(31, 0x08886C78u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 316u, 0x08881264u>(ctx, &aot_mem) && ctx.pc == 0x08886C78u) goto L_08886C78;
    return;
L_08886C78:
    ctx.set_gpr(31, 0x08886C80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 621u, 0x08877BD0u>(ctx, &aot_mem) && ctx.pc == 0x08886C80u) goto L_08886C80;
    return;
L_08886C80:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08886C94:
    ctx.set_gpr(31, 0x08886C9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 76u, 0x08879004u>(ctx, &aot_mem) && ctx.pc == 0x08886C9Cu) goto L_08886C9C;
    return;
L_08886C9C:
    // nop
    goto L_08886C78;
L_08886CD8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08886CF0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 620u, 0x08877BC8u>(ctx, &aot_mem) && ctx.pc == 0x08886CF0u) goto L_08886CF0;
    return;
L_08886CF0:
    ctx.set_gpr(31, 0x08886CF8u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 621u, 0x08877BD0u>(ctx, &aot_mem) && ctx.pc == 0x08886CF8u) goto L_08886CF8;
    return;
L_08886CF8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08886DD0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + static_cast<std::uint32_t>(63));
    ctx.set_gpr(2, ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(16, (ctx.gpr[16] & ~0x0000003Fu) | ((0u & 0x0000003Fu) << 0u));
    ctx.set_gpr(7, ctx.gpr[4] >> 31u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(3, ctx.gpr[16] - ctx.gpr[5]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[7] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[6] - ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
      if (branch_taken) {
          goto L_0888731C;
      }
      goto L_08886E10;
    }
L_08886E10:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    ctx.set_gpr(6, 2247u << 16u);
      if (branch_taken) {
          goto L_0888731C;
      }
      goto L_08886E18;
    }
L_08886E18:
    ctx.set_gpr(4, ctx.gpr[6] + static_cast<std::uint32_t>(-7668));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(3, ctx.gpr[4] + 0u);
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    goto L_08886E28;
L_08886E28:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(196));
      if (branch_taken) {
          goto L_08886EB0;
      }
      goto L_08886E30;
    }
L_08886E30:
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(196));
      if (branch_taken) {
          goto L_08886EB0;
      }
      goto L_08886E40;
    }
L_08886E40:
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(196));
      if (branch_taken) {
          goto L_08886EB0;
      }
      goto L_08886E50;
    }
L_08886E50:
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(196));
      if (branch_taken) {
          goto L_08886EB0;
      }
      goto L_08886E60;
    }
L_08886E60:
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[12] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(196));
      if (branch_taken) {
          goto L_08886EB0;
      }
      goto L_08886E70;
    }
L_08886E70:
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(196));
      if (branch_taken) {
          goto L_08886EB0;
      }
      goto L_08886E80;
    }
L_08886E80:
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[14] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(196));
      if (branch_taken) {
          goto L_08886EB0;
      }
      goto L_08886E90;
    }
L_08886E90:
    ctx.set_gpr(15, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[15] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(196));
      if (branch_taken) {
          goto L_08886EB0;
      }
      goto L_08886EA0;
    }
L_08886EA0:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, static_cast<std::int32_t>(ctx.gpr[5]) < 16 ? 1u : 0u);
    if (ctx.gpr[17] != 0u) {
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
        goto L_08886E28;
    }
    goto L_08886EB0;
L_08886EB0:
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[20];
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(196));
      if (branch_taken) {
          goto L_08887310;
      }
      goto L_08886EBC;
    }
L_08886EBC:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(196));
    ctx.set_gpr(8, ctx.lo);
    ctx.set_gpr(17, ctx.gpr[8] + ctx.gpr[4]);
    ctx.set_gpr(31, 0x08886ED8u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08886ED8u) goto L_08886ED8;
    return;
L_08886ED8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(16576));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.set_gpr(24, ctx.lo);
    ctx.set_gpr(7, ctx.gpr[18] - ctx.gpr[24]);
    ctx.set_gpr(18, ctx.gpr[7] + static_cast<std::uint32_t>(-292));
    ctx.set_gpr(25, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 31u));
    ctx.set_gpr(4, ctx.gpr[25] >> 21u);
    ctx.set_gpr(5, ctx.gpr[18] + ctx.gpr[4]);
    ctx.set_gpr(5, (ctx.gpr[5] & ~0x000007FFu) | ((0u & 0x000007FFu) << 0u));
    ctx.set_gpr(4, ctx.gpr[16] + ctx.gpr[24]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088872F8;
      }
      goto L_08886F10;
    }
L_08886F10:
    ctx.set_gpr(12, ctx.gpr[5] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(10, ctx.gpr[4] + ctx.gpr[12]);
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(36));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(8192));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8288));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[11]);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(36));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(172), ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08886F44u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 726u, 0x0889F958u>(ctx, &aot_mem) && ctx.pc == 0x08886F44u) goto L_08886F44;
    return;
L_08886F44:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08887264;
      }
      goto L_08886F4C;
    }
L_08886F4C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08886F58u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 584u, 0x088822A4u>(ctx, &aot_mem) && ctx.pc == 0x08886F58u) goto L_08886F58;
    return;
L_08886F58:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08887264;
      }
      goto L_08886F60;
    }
L_08886F60:
    ctx.set_gpr(20, static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.set_gpr(18, 0u + 0u);
      if (branch_taken) {
          goto L_088870BC;
      }
      goto L_08886F6C;
    }
L_08886F6C:
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(3, ctx.gpr[19] & 3u);
      if (branch_taken) {
          goto L_08887274;
      }
      goto L_08886F7C;
    }
L_08886F7C:
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[13])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.gpr[13] - ctx.gpr[12]);
    ctx.set_gpr(6, ctx.gpr[5] << 1u);
    ctx.set_gpr(5, ctx.gpr[12] << 1u);
    ctx.set_gpr(11, ctx.lo);
    ctx.set_gpr(10, ctx.gpr[11] << 1u);
    ctx.set_gpr(31, 0x08886FA8u);
    ctx.set_gpr(4, ctx.gpr[9] + ctx.gpr[10]);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 726u, 0x0889F958u>(ctx, &aot_mem) && ctx.pc == 0x08886FA8u) goto L_08886FA8;
    return;
L_08886FA8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08887264;
      }
      goto L_08886FB0;
    }
L_08886FB0:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088870BC;
      }
      goto L_08886FC0;
    }
L_08886FC0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    goto L_08886FC4;
L_08886FC4:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(7, ctx.gpr[4] - ctx.gpr[25]);
    ctx.set_gpr(6, ctx.gpr[7] << 1u);
    ctx.set_gpr(5, ctx.gpr[25] << 1u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(24, ctx.lo);
    ctx.set_gpr(15, ctx.gpr[24] << 1u);
    ctx.set_gpr(31, 0x08886FF0u);
    ctx.set_gpr(4, ctx.gpr[14] + ctx.gpr[15]);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 726u, 0x0889F958u>(ctx, &aot_mem) && ctx.pc == 0x08886FF0u) goto L_08886FF0;
    return;
L_08886FF0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08887264;
      }
      goto L_08886FFC;
    }
L_08886FFC:
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[11])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(10, ctx.gpr[11] - ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[10] << 1u);
    ctx.set_gpr(5, ctx.gpr[2] << 1u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, ctx.lo);
    ctx.set_gpr(8, ctx.gpr[9] << 1u);
    ctx.set_gpr(31, 0x0888702Cu);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[8]);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 726u, 0x0889F958u>(ctx, &aot_mem) && ctx.pc == 0x0888702Cu) goto L_0888702C;
    return;
L_0888702C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08887264;
      }
      goto L_08887038;
    }
L_08887038:
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[24])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.gpr[24] - ctx.gpr[15]);
    ctx.set_gpr(6, ctx.gpr[5] << 1u);
    ctx.set_gpr(5, ctx.gpr[15] << 1u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(14, ctx.lo);
    ctx.set_gpr(13, ctx.gpr[14] << 1u);
    ctx.set_gpr(31, 0x08887068u);
    ctx.set_gpr(4, ctx.gpr[12] + ctx.gpr[13]);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 726u, 0x0889F958u>(ctx, &aot_mem) && ctx.pc == 0x08887068u) goto L_08887068;
    return;
L_08887068:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08887264;
      }
      goto L_08887074;
    }
L_08887074:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(8, ctx.gpr[9] - ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[3] << 1u);
    ctx.set_gpr(6, ctx.gpr[8] << 1u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(7, ctx.gpr[4] << 1u);
    ctx.set_gpr(31, 0x088870A4u);
    ctx.set_gpr(4, ctx.gpr[25] + ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 726u, 0x0889F958u>(ctx, &aot_mem) && ctx.pc == 0x088870A4u) goto L_088870A4;
    return;
L_088870A4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08887264;
      }
      goto L_088870B4;
    }
L_088870B4:
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
        goto L_08886FC4;
    }
    goto L_088870BC;
L_088870BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x088870D0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 591u, 0x0887FF7Cu>(ctx, &aot_mem) && ctx.pc == 0x088870D0u) goto L_088870D0;
    return;
L_088870D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08887264;
      }
      goto L_088870D8;
    }
L_088870D8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088870E4u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 549u, 0x0887FC7Cu>(ctx, &aot_mem) && ctx.pc == 0x088870E4u) goto L_088870E4;
    return;
L_088870E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08887264;
      }
      goto L_088870EC;
    }
L_088870EC:
    ctx.set_gpr(31, 0x088870F4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 123u, 0x0889493Cu>(ctx, &aot_mem) && ctx.pc == 0x088870F4u) goto L_088870F4;
    return;
L_088870F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(148), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08887264;
      }
      goto L_088870FC;
    }
L_088870FC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0888710Cu);
    ctx.set_gpr(18, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 143u, 0x08894A24u>(ctx, &aot_mem) && ctx.pc == 0x0888710Cu) goto L_0888710C;
    return;
L_0888710C:
    ctx.set_gpr(31, 0x08887114u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 616u, 0x08877B90u>(ctx, &aot_mem) && ctx.pc == 0x08887114u) goto L_08887114;
    return;
L_08887114:
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(10, 2225u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(17500)));
    ctx.set_gpr(24, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[15]) >> 31u));
    ctx.set_gpr(5, ctx.gpr[24] >> 21u);
    ctx.set_gpr(14, ctx.gpr[15] + ctx.gpr[5]);
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[14]) >> 11u));
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[11]))));
    ctx.fpr[4] = std::bit_cast<float>(ctx.gpr[13]);
    ctx.set_gpr(12, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(-26392)));
    ctx.fpr[3] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(4)));
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(ctx.gpr[11]));
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[6]);
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[2], 1u));
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(0u));
    ctx.set_gpr(16, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(62), static_cast<std::uint16_t>(ctx.gpr[16]));
      if (branch_taken) {
          goto L_088871B8;
      }
      goto L_08887164;
    }
L_08887164:
    ctx.set_gpr(20, static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(3, ctx.gpr[17] + static_cast<std::uint32_t>(66));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.set_gpr(5, ctx.gpr[19] & 3u);
      if (branch_taken) {
          goto L_08887230;
      }
      goto L_08887178;
    }
L_08887178:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088871B8;
      }
      goto L_0888718C;
    }
L_0888718C:
    ctx.set_gpr(6, ctx.gpr[3] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(16, ctx.gpr[6] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(2));
    rt.memory().aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0888718C;
      }
      goto L_088871B8;
    }
L_088871B8:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(70), static_cast<std::uint16_t>(0u));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(ctx.gpr[18]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(84), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(88), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), 0u);
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(96), static_cast<std::uint16_t>(0u));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(100), 0u);
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(104), static_cast<std::uint16_t>(0u));
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(106), static_cast<std::uint16_t>(0u));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(109), static_cast<std::uint8_t>(ctx.gpr[18]));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, 0x088871F8u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(136), 0u);
    goto L_08884710;
L_088871F8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08887204u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_0888468C;
L_08887204:
    ctx.set_gpr(31, 0x0888720Cu);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[18]));
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 618u, 0x08877BACu>(ctx, &aot_mem) && ctx.pc == 0x0888720Cu) goto L_0888720C;
    return;
L_0888720C:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_08887210;
L_08887210:
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
L_08887230:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(25, static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0888718C;
      }
      goto L_08887238;
    }
L_08887238:
    { const bool branch_taken = ctx.gpr[25] != 0u;
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08887178;
      }
      goto L_08887240;
    }
L_08887240:
    if (ctx.gpr[7] != 0u) {
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
        goto L_08887258;
    }
    goto L_08887248;
L_08887248:
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(66), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[17] + static_cast<std::uint32_t>(68));
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08887258;
L_08887258:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(2));
    goto L_08887178;
L_08887264:
    ctx.set_gpr(31, 0x0888726Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 943u, 0x08883ED4u>(ctx, &aot_mem) && ctx.pc == 0x0888726Cu) goto L_0888726C;
    return;
L_0888726C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08887210;
L_08887274:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(13, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08886FC0;
      }
      goto L_0888727C;
    }
L_0888727C:
    { const bool branch_taken = ctx.gpr[13] != 0u;
    ctx.set_gpr(14, static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08886F7C;
      }
      goto L_08887284;
    }
L_08887284:
    if (ctx.gpr[14] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
        goto L_088872BC;
    }
    goto L_0888728C;
L_0888728C:
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(5, ctx.gpr[24] << 1u);
    ctx.set_gpr(15, ctx.gpr[16] - ctx.gpr[24]);
    ctx.set_gpr(31, 0x088872A8u);
    ctx.set_gpr(6, ctx.gpr[15] << 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 726u, 0x0889F958u>(ctx, &aot_mem) && ctx.pc == 0x088872A8u) goto L_088872A8;
    return;
L_088872A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08887264;
      }
      goto L_088872B0;
    }
L_088872B0:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    goto L_088872BC;
L_088872BC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(8, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[8] << 1u);
    ctx.set_gpr(5, ctx.gpr[3] << 1u);
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(7, ctx.gpr[4] << 1u);
    ctx.set_gpr(31, 0x088872E4u);
    ctx.set_gpr(4, ctx.gpr[25] + ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 726u, 0x0889F958u>(ctx, &aot_mem) && ctx.pc == 0x088872E4u) goto L_088872E4;
    return;
L_088872E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08887264;
      }
      goto L_088872EC;
    }
L_088872EC:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    goto L_08886F7C;
L_088872F8:
    ctx.set_gpr(19, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(17148));
    goto L_08887300;
L_08887300:
    ctx.set_gpr(31, 0x08887308u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 76u, 0x08879004u>(ctx, &aot_mem) && ctx.pc == 0x08887308u) goto L_08887308;
    return;
L_08887308:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08887210;
L_08887310:
    ctx.set_gpr(16, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(17196));
    goto L_08887300;
L_0888731C:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(17240));
    goto L_08887300;
L_08887328:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08887448;
      }
      goto L_08887350;
    }
L_08887350:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(3, ctx.gpr[5] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(17280));
      if (branch_taken) {
          goto L_088873F0;
      }
      goto L_08887360;
    }
L_08887360:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-128));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(15));
      if (branch_taken) {
          goto L_0888737C;
      }
      goto L_0888736C;
    }
L_0888736C:
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[6]) < -15 ? 1u : 0u);
    ctx.set_gpr(16, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[7]) ? ctx.gpr[16] : ctx.gpr[7]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-15));
    if (ctx.gpr[6] != 0u) ctx.set_gpr(16, ctx.gpr[5]);
    goto L_0888737C;
L_0888737C:
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(169))))));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[8];
    ctx.set_gpr(19, 0u + 0u);
      if (branch_taken) {
          goto L_08887428;
      }
      goto L_0888738C;
    }
L_0888738C:
    ctx.set_gpr(13, 2245u << 16u);
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(-26628)));
    { const bool branch_taken = ctx.gpr[12] != 0u;
    ctx.set_gpr(6, 0u + 0u);
      if (branch_taken) {
          goto L_088873A8;
      }
      goto L_0888739C;
    }
L_0888739C:
    ctx.set_gpr(14, 0u + static_cast<std::uint32_t>(-128));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[14];
    ctx.set_gpr(6, ctx.gpr[16] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_08887400;
      }
      goto L_088873A8;
    }
L_088873A8:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.set_gpr(3, ctx.gpr[18] << 1u);
    ctx.set_gpr(25, ctx.gpr[3] + ctx.gpr[17]);
    ctx.set_gpr(19, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    rt.memory().aot_store16(ctx.gpr[25] + static_cast<std::uint32_t>(66), static_cast<std::uint16_t>(ctx.gpr[16]));
    ctx.set_gpr(16, 2225u << 16u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(17324));
      if (branch_taken) {
          goto L_088873F0;
      }
      goto L_088873C8;
    }
L_088873C8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x088873D4u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 573u, 0x0887FE10u>(ctx, &aot_mem) && ctx.pc == 0x088873D4u) goto L_088873D4;
    return;
L_088873D4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_088873D8;
L_088873D8:
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
L_088873F0:
    ctx.set_gpr(31, 0x088873F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 76u, 0x08879004u>(ctx, &aot_mem) && ctx.pc == 0x088873F8u) goto L_088873F8;
    return;
L_088873F8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_088873D8;
L_08887400:
    ctx.set_gpr(31, 0x08887408u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 338u, 0x088813E4u>(ctx, &aot_mem) && ctx.pc == 0x08887408u) goto L_08887408;
    return;
L_08887408:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-15));
    ctx.set_gpr(24, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(15, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[15];
    if (ctx.gpr[18] != 0u) ctx.set_gpr(6, ctx.gpr[24]);
      if (branch_taken) {
          goto L_08887420;
      }
      goto L_0888741C;
    }
L_0888741C:
    ctx.set_gpr(6, 0u + 0u);
    goto L_08887420;
L_08887420:
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[19]);
    goto L_088873A8;
L_08887428:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08887434u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 360u, 0x08881578u>(ctx, &aot_mem) && ctx.pc == 0x08887434u) goto L_08887434;
    return;
L_08887434:
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(10, ctx.gpr[2] ^ ctx.gpr[11]);
    if (ctx.gpr[10] == 0u) ctx.set_gpr(19, 0u);
    goto L_0888738C;
L_08887448:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(17368));
    goto L_088873F0;
L_08887454:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(31, 0x08887474u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 616u, 0x08877B90u>(ctx, &aot_mem) && ctx.pc == 0x08887474u) goto L_08887474;
    return;
L_08887474:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-26396)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088874A4;
      }
      goto L_08887480;
    }
L_08887480:
    ctx.set_gpr(31, 0x08887488u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 618u, 0x08877BACu>(ctx, &aot_mem) && ctx.pc == 0x08887488u) goto L_08887488;
    return;
L_08887488:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_0888748C;
L_0888748C:
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
L_088874A4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-26396), ctx.gpr[3]);
    ctx.set_gpr(31, 0x088874B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 618u, 0x08877BACu>(ctx, &aot_mem) && ctx.pc == 0x088874B0u) goto L_088874B0;
    return;
L_088874B0:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26432)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(5, 2245u << 16u);
      if (branch_taken) {
          goto L_08887648;
      }
      goto L_088874C0;
    }
L_088874C0:
    ctx.set_gpr(31, 0x088874C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 259u, 0x0888103Cu>(ctx, &aot_mem) && ctx.pc == 0x088874C8u) goto L_088874C8;
    return;
L_088874C8:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-26396), ctx.gpr[6]);
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(-7668));
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(19, ctx.gpr[16] + static_cast<std::uint32_t>(3136));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    goto L_088874E4;
L_088874E4:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08887638;
      }
      goto L_088874EC;
    }
L_088874EC:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(196))))));
    goto L_088874F0;
L_088874F0:
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[17];
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(196));
      if (branch_taken) {
          goto L_08887628;
      }
      goto L_088874F8;
    }
L_088874F8:
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(392))))));
    goto L_088874FC;
L_088874FC:
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[17];
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(392));
      if (branch_taken) {
          goto L_08887618;
      }
      goto L_08887504;
    }
L_08887504:
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(588))))));
    goto L_08887508;
L_08887508:
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[17];
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(588));
      if (branch_taken) {
          goto L_08887608;
      }
      goto L_08887510;
    }
L_08887510:
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(784))))));
    goto L_08887514;
L_08887514:
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[17];
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(784));
      if (branch_taken) {
          goto L_088875F8;
      }
      goto L_0888751C;
    }
L_0888751C:
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(980))))));
    goto L_08887520;
L_08887520:
    { const bool branch_taken = ctx.gpr[12] == ctx.gpr[17];
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(980));
      if (branch_taken) {
          goto L_088875E8;
      }
      goto L_08887528;
    }
L_08887528:
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1176))))));
    goto L_0888752C;
L_0888752C:
    { const bool branch_taken = ctx.gpr[13] == ctx.gpr[17];
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1176));
      if (branch_taken) {
          goto L_088875D8;
      }
      goto L_08887534;
    }
L_08887534:
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1372))))));
    goto L_08887538;
L_08887538:
    { const bool branch_taken = ctx.gpr[14] == ctx.gpr[17];
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(1372));
      if (branch_taken) {
          goto L_088875C8;
      }
      goto L_08887540;
    }
L_08887540:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1568));
    ctx.set_gpr(15, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    goto L_08887548;
L_08887548:
    if (ctx.gpr[15] != 0u) {
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
        goto L_088874E4;
    }
    goto L_08887550;
L_08887550:
    ctx.set_gpr(17, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26416)));
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-26396), ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(18, 2245u << 16u);
      if (branch_taken) {
          goto L_088875B8;
      }
      goto L_08887568;
    }
L_08887568:
    ctx.set_gpr(31, 0x08887570u);
    ctx.set_gpr(19, 2245u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 565u, 0x0887FD68u>(ctx, &aot_mem) && ctx.pc == 0x08887570u) goto L_08887570;
    return;
L_08887570:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-26408)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(24, 2245u << 16u);
      if (branch_taken) {
          goto L_088875A8;
      }
      goto L_0888757C;
    }
L_0888757C:
    ctx.set_gpr(4, 2245u << 16u);
    goto L_08887580;
L_08887580:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26424)));
    ctx.set_gpr(25, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(-26396), 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
        goto L_0888748C;
    }
    goto L_08887594;
L_08887594:
    ctx.set_gpr(3, 2245u << 16u);
    jump_target = ctx.gpr[5];
    ctx.set_gpr(31, 0x088875A0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26420)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088875A0u) goto L_088875A0;
    return;
L_088875A0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_0888748C;
L_088875A8:
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x088875B0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(-26404)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088875B0u) goto L_088875B0;
    return;
L_088875B0:
    ctx.set_gpr(4, 2245u << 16u);
    goto L_08887580;
L_088875B8:
    jump_target = ctx.gpr[5];
    ctx.set_gpr(31, 0x088875C0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-26412)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088875C0u) goto L_088875C0;
    return;
L_088875C0:
    // nop
    goto L_08887568;
L_088875C8:
    ctx.set_gpr(31, 0x088875D0u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1568));
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 266u, 0x088896A0u>(ctx, &aot_mem) && ctx.pc == 0x088875D0u) goto L_088875D0;
    return;
L_088875D0:
    ctx.set_gpr(15, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    goto L_08887548;
L_088875D8:
    ctx.set_gpr(31, 0x088875E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 266u, 0x088896A0u>(ctx, &aot_mem) && ctx.pc == 0x088875E0u) goto L_088875E0;
    return;
L_088875E0:
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1372))))));
    goto L_08887538;
L_088875E8:
    ctx.set_gpr(31, 0x088875F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 266u, 0x088896A0u>(ctx, &aot_mem) && ctx.pc == 0x088875F0u) goto L_088875F0;
    return;
L_088875F0:
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1176))))));
    goto L_0888752C;
L_088875F8:
    ctx.set_gpr(31, 0x08887600u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 266u, 0x088896A0u>(ctx, &aot_mem) && ctx.pc == 0x08887600u) goto L_08887600;
    return;
L_08887600:
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(980))))));
    goto L_08887520;
L_08887608:
    ctx.set_gpr(31, 0x08887610u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 266u, 0x088896A0u>(ctx, &aot_mem) && ctx.pc == 0x08887610u) goto L_08887610;
    return;
L_08887610:
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(784))))));
    goto L_08887514;
L_08887618:
    ctx.set_gpr(31, 0x08887620u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 266u, 0x088896A0u>(ctx, &aot_mem) && ctx.pc == 0x08887620u) goto L_08887620;
    return;
L_08887620:
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(588))))));
    goto L_08887508;
L_08887628:
    ctx.set_gpr(31, 0x08887630u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 266u, 0x088896A0u>(ctx, &aot_mem) && ctx.pc == 0x08887630u) goto L_08887630;
    return;
L_08887630:
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(392))))));
    goto L_088874FC;
L_08887638:
    ctx.set_gpr(31, 0x08887640u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 266u, 0x088896A0u>(ctx, &aot_mem) && ctx.pc == 0x08887640u) goto L_08887640;
    return;
L_08887640:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(196))))));
    goto L_088874F0;
L_08887648:
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x08887650u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26428)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08887650u) goto L_08887650;
    return;
L_08887650:
    // nop
    goto L_088874C0;
L_08887658:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_088876C4;
      }
      goto L_08887684;
    }
L_08887684:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08887698;
      }
      goto L_0888768C;
    }
L_0888768C:
    ctx.set_gpr(31, 0x08887694u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 344u, 0x0888148Cu>(ctx, &aot_mem) && ctx.pc == 0x08887694u) goto L_08887694;
    return;
L_08887694:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08887698;
L_08887698:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_088876B0;
      }
      goto L_088876A0;
    }
L_088876A0:
    ctx.set_gpr(31, 0x088876A8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 349u, 0x088814CCu>(ctx, &aot_mem) && ctx.pc == 0x088876A8u) goto L_088876A8;
    return;
L_088876A8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_088876AC;
L_088876AC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_088876B0;
L_088876B0:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088876C4:
    if (ctx.gpr[5] != 0u) {
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
        goto L_088876CC;
    }
    goto L_088876CC;
L_088876CC:
    if (ctx.gpr[18] != 0u) {
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), 0u);
        goto L_088876AC;
    }
    goto L_088876D4;
L_088876D4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_088876B0;
L_088876DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
      if (branch_taken) {
          goto L_088877E8;
      }
      goto L_08887700;
    }
L_08887700:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_088877D0;
      }
      goto L_0888770C;
    }
L_0888770C:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.set_gpr(8, ctx.gpr[18] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08887734;
      }
      goto L_0888771C;
    }
L_0888771C:
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(108))))));
    ctx.set_gpr(3, ctx.gpr[9] ^ 1u);
    ctx.set_gpr(7, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(6, ctx.gpr[7] & ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08887754;
      }
      goto L_08887734;
    }
L_08887734:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_0888773C;
L_0888773C:
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
L_08887754:
    ctx.set_gpr(31, 0x0888775Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 309u, 0x08881200u>(ctx, &aot_mem) && ctx.pc == 0x0888775Cu) goto L_0888775C;
    return;
L_0888775C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08887768u);
    ctx.set_gpr(19, ctx.gpr[2] + ctx.gpr[17]);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 346u, 0x088814A8u>(ctx, &aot_mem) && ctx.pc == 0x08887768u) goto L_08887768;
    return;
L_08887768:
    ctx.set_gpr(15, ctx.gpr[2] + static_cast<std::uint32_t>(2047));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(24, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[15]) >> 31u));
    ctx.set_gpr(14, ctx.gpr[24] >> 21u);
    ctx.set_gpr(31, 0x08887780u);
    ctx.set_gpr(17, ctx.gpr[15] + ctx.gpr[14]);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 351u, 0x088814E8u>(ctx, &aot_mem) && ctx.pc == 0x08887780u) goto L_08887780;
    return;
L_08887780:
    ctx.set_gpr(11, ctx.gpr[2] + static_cast<std::uint32_t>(2047));
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 31u));
    ctx.set_gpr(12, ctx.gpr[13] >> 21u);
    ctx.set_gpr(10, ctx.gpr[11] + ctx.gpr[12]);
    ctx.set_gpr(17, (ctx.gpr[17] & ~0x000007FFu) | ((0u & 0x000007FFu) << 0u));
    ctx.set_gpr(10, (ctx.gpr[10] & ~0x000007FFu) | ((0u & 0x000007FFu) << 0u));
    ctx.set_gpr(3, ctx.gpr[10] - ctx.gpr[17]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    ctx.set_gpr(6, ctx.gpr[19] - ctx.gpr[17]);
      if (branch_taken) {
          goto L_088877C8;
      }
      goto L_088877A4;
    }
L_088877A4:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[3]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    if (ctx.gpr[3] == 0u) {
    ctx.pc = 0x088877ACu; rt.stop("Allegrex BREAK code 7 at 0x088877AC"); return;
        goto L_088877B0;
    }
    goto L_088877B0;
L_088877B0:
    ctx.set_gpr(5, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(19, ctx.gpr[17] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(192), ctx.gpr[19]);
    goto L_08887734;
L_088877C8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(192), 0u);
    goto L_08887734;
L_088877D0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[17];
    ctx.set_gpr(31, 0x088877E0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088877E0u) goto L_088877E0;
    return;
L_088877E0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    goto L_0888770C;
L_088877E8:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(31, 0x088877F4u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(17420));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 76u, 0x08879004u>(ctx, &aot_mem) && ctx.pc == 0x088877F4u) goto L_088877F4;
    return;
L_088877F4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_0888773C;
L_088877FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
    ctx.set_gpr(9, ctx.gpr[5] << 3u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    ctx.set_gpr(8, ctx.gpr[3] >> 27u);
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.set_gpr(7, ctx.gpr[29] + 0u);
    ctx.set_gpr(21, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 5u));
    ctx.set_gpr(2, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[9] + ctx.gpr[5]);
    ctx.set_gpr(20, ctx.gpr[4] << 1u);
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
      if (branch_taken) {
          goto L_08887984;
      }
      goto L_08887854;
    }
L_08887854:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, ctx.lo);
    jump_target = ctx.gpr[10];
    ctx.set_gpr(31, 0x0888786Cu);
    ctx.set_gpr(17, ctx.lo);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888786Cu) goto L_0888786C;
    return;
L_0888786C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[20] == 0u) {
    ctx.pc = 0x08887874u; rt.stop("Allegrex BREAK code 7 at 0x08887874"); return;
        goto L_08887878;
    }
    goto L_08887878;
L_08887878:
    ctx.set_gpr(5, 0u + 0u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[20]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(16, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(16, ctx.lo);
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(31, 0x08887898u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08887898u) goto L_08887898;
    return;
L_08887898:
    ctx.set_gpr(7, ctx.gpr[21] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088878ACu);
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 412u, 0x088A1D1Cu>(ctx, &aot_mem) && ctx.pc == 0x088878ACu) goto L_088878AC;
    return;
L_088878AC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    jump_target = ctx.gpr[8];
    ctx.set_gpr(31, 0x088878C8u);
    ctx.set_gpr(18, ctx.gpr[17] - ctx.gpr[16]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088878C8u) goto L_088878C8;
    return;
L_088878C8:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[24];
    ctx.set_gpr(31, 0x088878E0u);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088878E0u) goto L_088878E0;
    return;
L_088878E0:
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[29] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    jump_target = ctx.gpr[14];
    ctx.set_gpr(31, 0x088878FCu);
    ctx.set_gpr(5, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088878FCu) goto L_088878FC;
    return;
L_088878FC:
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[20] == 0u) {
    ctx.pc = 0x08887904u; rt.stop("Allegrex BREAK code 7 at 0x08887904"); return;
        goto L_08887908;
    }
    goto L_08887908;
L_08887908:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[13]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[20]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(12, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[12])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(17, ctx.lo);
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(31, 0x08887928u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08887928u) goto L_08887928;
    return;
L_08887928:
    ctx.set_gpr(7, ctx.gpr[21] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0888793Cu);
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 412u, 0x088A1D1Cu>(ctx, &aot_mem) && ctx.pc == 0x0888793Cu) goto L_0888793C;
    return;
L_0888793C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[11];
    ctx.set_gpr(31, 0x08887954u);
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08887954u) goto L_08887954;
    return;
L_08887954:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[7];
    ctx.set_gpr(31, 0x0888796Cu);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0888796Cu) goto L_0888796C;
    return;
L_0888796C:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[17]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[2]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[20]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    if (ctx.gpr[20] == 0u) {
    ctx.pc = 0x08887978u; rt.stop("Allegrex BREAK code 7 at 0x08887978"); return;
        goto L_0888797C;
    }
    goto L_0888797C;
L_0888797C:
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[5] << 5u);
    goto L_08887984;
L_08887984:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08887B74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08887B90u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 620u, 0x08877BC8u>(ctx, &aot_mem) && ctx.pc == 0x08887B90u) goto L_08887B90;
    return;
L_08887B90:
    ctx.set_gpr(6, ctx.gpr[16] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[17] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08887BD0;
      }
      goto L_08887BA4;
    }
L_08887BA4:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(17552));
    goto L_08887BAC;
L_08887BAC:
    ctx.set_gpr(31, 0x08887BB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 76u, 0x08879004u>(ctx, &aot_mem) && ctx.pc == 0x08887BB4u) goto L_08887BB4;
    return;
L_08887BB4:
    ctx.set_gpr(31, 0x08887BBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 621u, 0x08877BD0u>(ctx, &aot_mem) && ctx.pc == 0x08887BBCu) goto L_08887BBC;
    return;
L_08887BBC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08887BD0:
    ctx.set_gpr(31, 0x08887BD8u);
    // nop
    goto L_08884E90;
L_08887BD8:
    ctx.set_gpr(31, 0x08887BE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 616u, 0x08877B90u>(ctx, &aot_mem) && ctx.pc == 0x08887BE0u) goto L_08887BE0;
    return;
L_08887BE0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08887BECu);
    ctx.set_gpr(5, 16384u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 513u, 0x0889EB18u>(ctx, &aot_mem) && ctx.pc == 0x08887BECu) goto L_08887BEC;
    return;
L_08887BEC:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08887C20;
      }
      goto L_08887BF8;
    }
L_08887BF8:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08887C04u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    goto L_08884B3C;
L_08887C04:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08887C10u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08886764;
L_08887C10:
    ctx.set_gpr(31, 0x08887C18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 618u, 0x08877BACu>(ctx, &aot_mem) && ctx.pc == 0x08887C18u) goto L_08887C18;
    return;
L_08887C18:
    // nop
    goto L_08887BB4;
L_08887C20:
    ctx.set_gpr(31, 0x08887C28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 618u, 0x08877BACu>(ctx, &aot_mem) && ctx.pc == 0x08887C28u) goto L_08887C28;
    return;
L_08887C28:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(17596));
    goto L_08887BAC;
L_08887C34:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08887C58u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 620u, 0x08877BC8u>(ctx, &aot_mem) && ctx.pc == 0x08887C58u) goto L_08887C58;
    return;
L_08887C58:
    ctx.set_gpr(6, ctx.gpr[16] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[17] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(17552));
      if (branch_taken) {
          goto L_08887CF0;
      }
      goto L_08887C70;
    }
L_08887C70:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_08887CF0;
      }
      goto L_08887C78;
    }
L_08887C78:
    ctx.set_gpr(31, 0x08887C80u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08884E90;
L_08887C80:
    ctx.set_gpr(31, 0x08887C88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 616u, 0x08877B90u>(ctx, &aot_mem) && ctx.pc == 0x08887C88u) goto L_08887C88;
    return;
L_08887C88:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08887C94u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 513u, 0x0889EB18u>(ctx, &aot_mem) && ctx.pc == 0x08887C94u) goto L_08887C94;
    return;
L_08887C94:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_08887CE0;
      }
      goto L_08887CA0;
    }
L_08887CA0:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08887CACu);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    goto L_08884B3C;
L_08887CAC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08887CB8u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08886764;
L_08887CB8:
    ctx.set_gpr(31, 0x08887CC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 618u, 0x08877BACu>(ctx, &aot_mem) && ctx.pc == 0x08887CC0u) goto L_08887CC0;
    return;
L_08887CC0:
    ctx.set_gpr(31, 0x08887CC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 621u, 0x08877BD0u>(ctx, &aot_mem) && ctx.pc == 0x08887CC8u) goto L_08887CC8;
    return;
L_08887CC8:
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
L_08887CE0:
    ctx.set_gpr(31, 0x08887CE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 618u, 0x08877BACu>(ctx, &aot_mem) && ctx.pc == 0x08887CE8u) goto L_08887CE8;
    return;
L_08887CE8:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(17596));
    goto L_08887CF0;
L_08887CF0:
    ctx.set_gpr(31, 0x08887CF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 76u, 0x08879004u>(ctx, &aot_mem) && ctx.pc == 0x08887CF8u) goto L_08887CF8;
    return;
L_08887CF8:
    // nop
    goto L_08887CC0;
L_08887DE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
      if (branch_taken) {
          goto L_08887ED4;
      }
      goto L_08887E0C;
    }
L_08887E0C:
    ctx.set_gpr(31, 0x08887E14u);
    // nop
    goto L_08884E90;
L_08887E14:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08887E30u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 97u, 0x0887CCA4u>(ctx, &aot_mem) && ctx.pc == 0x08887E30u) goto L_08887E30;
    return;
L_08887E30:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_08887E80;
      }
      goto L_08887E38;
    }
L_08887E38:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08887E94;
      }
      goto L_08887E54;
    }
L_08887E54:
    ctx.set_gpr(31, 0x08887E5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 95u, 0x0887935Cu>(ctx, &aot_mem) && ctx.pc == 0x08887E5Cu) goto L_08887E5C;
    return;
L_08887E5C:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(17640));
    ctx.set_gpr(31, 0x08887E6Cu);
    ctx.set_gpr(5, ctx.gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 85u, 0x08879084u>(ctx, &aot_mem) && ctx.pc == 0x08887E6Cu) goto L_08887E6C;
    return;
L_08887E6C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(96), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_08887E80;
L_08887E80:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08887E94:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[8]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(168), static_cast<std::uint8_t>(ctx.gpr[8]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(176), ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(180), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(184), ctx.gpr[7]);
    ctx.set_gpr(31, 0x08887ECCu);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(188), ctx.gpr[9]);
    goto L_08886764;
L_08887ECC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_08887E80;
L_08887ED4:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(31, 0x08887EE0u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(17676));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 76u, 0x08879004u>(ctx, &aot_mem) && ctx.pc == 0x08887EE0u) goto L_08887EE0;
    return;
L_08887EE0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_08887E80;
L_08887EE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.set_gpr(7, ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[7] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 4u, 0x08888018u>(ctx, &aot_mem); return;
      }
      goto L_08887F1C;
    }
L_08887F1C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    ctx.set_gpr(19, 255u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 4u, 0x08888018u>(ctx, &aot_mem); return;
      }
      goto L_08887F24;
    }
L_08887F24:
    ctx.set_gpr(31, 0x08887F2Cu);
    // nop
    goto L_08884E90;
L_08887F2C:
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, ctx.gpr[16] >> 31u);
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 8u));
    ctx.set_gpr(25, ctx.gpr[7] & 65280u);
    ctx.set_gpr(24, ctx.gpr[12] >> 24u);
    ctx.set_gpr(15, ctx.gpr[12] << 8u);
    ctx.set_gpr(13, ctx.gpr[24] | ctx.gpr[25]);
    ctx.set_gpr(14, ctx.gpr[15] & ctx.gpr[19]);
    ctx.set_gpr(10, ctx.gpr[13] | ctx.gpr[14]);
    ctx.set_gpr(11, ctx.gpr[12] << 24u);
    ctx.set_gpr(9, ctx.gpr[10] | ctx.gpr[11]);
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    ctx.set_gpr(5, ctx.gpr[8] ^ 1u);
    ctx.set_gpr(4, ctx.gpr[5] | ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08887F84;
      }
      goto L_08887F6C;
    }
L_08887F6C:
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
L_08887F84:
    ctx.set_gpr(31, 0x08887F8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 616u, 0x08877B90u>(ctx, &aot_mem) && ctx.pc == 0x08887F8Cu) goto L_08887F8C;
    return;
L_08887F8C:
    ctx.set_gpr(13, ctx.gpr[16] << 3u);
    ctx.set_gpr(12, ctx.gpr[13] + ctx.gpr[17]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, 16384u << 16u);
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 8u));
    ctx.set_gpr(4, ctx.gpr[11] & 65280u);
    ctx.set_gpr(10, ctx.gpr[8] >> 24u);
    ctx.set_gpr(9, ctx.gpr[8] << 8u);
    ctx.set_gpr(6, ctx.gpr[10] | ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[9] & ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[6] | ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[8] << 24u);
    ctx.set_gpr(16, ctx.gpr[19] | ctx.gpr[2]);
    ctx.set_gpr(31, 0x08887FC8u);
    ctx.set_gpr(4, ctx.gpr[17] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 513u, 0x0889EB18u>(ctx, &aot_mem) && ctx.pc == 0x08887FC8u) goto L_08887FC8;
    return;
L_08887FC8:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
      if (branch_taken) {
          goto L_08887FFC;
      }
      goto L_08887FD4;
    }
L_08887FD4:
    ctx.set_gpr(14, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08887FE0u);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[14]));
    goto L_08884B3C;
L_08887FE0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08887FECu);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08886764;
L_08887FEC:
    ctx.set_gpr(31, 0x08887FF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 618u, 0x08877BACu>(ctx, &aot_mem) && ctx.pc == 0x08887FF4u) goto L_08887FF4;
    return;
L_08887FF4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_08887F6C;
L_08887FFC:
    ctx.set_gpr(31, 0x08888004u);
    ctx.set_gpr(17, 2225u << 16u);
    (void)rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 618u, 0x08877BACu>(ctx, &aot_mem);
    return;
}

void recomp_unit_0032(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0032_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_32(Runtime &runtime) {
    runtime.register_generated_unit(32u, 0x08884000u, 16384u, &recomp_unit_0032, &recomp_unit_0032_entry);
    runtime.register_function(0x08884004u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884018u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884020u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884034u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888403Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884050u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884058u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884068u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884070u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884078u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884080u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884090u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884098u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088840A0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088840A8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088840B0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088840B8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088840C0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088840C8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088840D0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088840D8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088840E0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088840ECu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088840F4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884108u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884114u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884118u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884124u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888412Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884138u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884144u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888414Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888415Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884160u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884168u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888416Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884178u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888417Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884188u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884190u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884198u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088841A0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088841B4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088841BCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088841C4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088841D0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088841E0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088841E8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088841F0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088841F8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884204u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888420Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884250u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884258u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884264u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888427Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884288u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884290u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088842A4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088842A8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088842D0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088842D8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088842E4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088842F0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088842FCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884308u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888432Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884334u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884340u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884350u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884364u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884380u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888438Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088843B0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088843CCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088843DCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088843E4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088843F8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884464u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888447Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884490u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088844CCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088844E0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088844F4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088844F8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884508u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888451Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884544u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888454Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884554u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884560u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888456Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888457Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884594u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888459Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088845A4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088845B0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088845C0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088845D0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088845DCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088845E8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088845F0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088845F8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884604u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884610u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884620u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884678u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884684u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888468Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884694u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088846C0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088846D4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088846E0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088846F0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884700u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884708u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884710u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884728u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888472Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884734u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888473Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088847C4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088847E8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088847F8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884800u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888481Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884838u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884848u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884850u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884898u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088848ACu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088848B4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088848BCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088848CCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088848E8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088848F8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884900u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884904u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888490Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884910u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884918u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888491Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884924u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884928u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884930u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884934u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888493Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884940u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884948u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888494Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884954u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888495Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884964u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888496Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884984u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888498Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884994u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888499Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088849A4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088849ACu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088849B4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088849BCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088849C4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088849CCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088849D4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088849DCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088849E4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088849ECu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088849F4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088849FCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884B3Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884B68u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884B70u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884B84u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884B94u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884BA0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884BACu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884BF4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884BF8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884C00u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884C04u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884C1Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884C24u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884C2Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884C34u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884C40u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884C48u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884C50u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884CA4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884CB4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884CC4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884CD0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884CD8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884CE0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884D0Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884D14u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884D20u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884D44u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884D60u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884D74u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884D80u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884D88u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884D9Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884DA4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884DACu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884DC0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884DCCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884DD4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884DDCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884DF0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884DF8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884E04u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884E10u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884E18u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884E28u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884E2Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884E34u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884E38u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884E44u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884E4Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884E5Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884E64u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884E6Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884E74u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884E88u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884E90u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884EA4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884EACu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884EB4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884EC4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884EE0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884EECu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884EF0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884EF8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884F10u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08884F18u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888517Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088851A0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088851B0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088851B8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885238u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885254u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885260u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885270u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885278u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885290u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885298u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088852A0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088852A8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885328u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885344u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885350u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885360u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885368u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885380u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885388u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885390u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885398u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885490u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088854B4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088854C4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088854CCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885644u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885660u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888566Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885680u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885690u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08885698u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088856ACu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088856B4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088856BCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088856C4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088858BCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088858D0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088858E4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886010u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886020u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886028u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886030u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886320u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888633Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886348u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886350u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886364u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886380u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888638Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886394u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886398u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088863A0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088863B8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088863C0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886430u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886440u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886448u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886454u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886464u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888646Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886764u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886780u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888678Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886794u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886C44u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886C60u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886C70u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886C78u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886C80u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886C94u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886C9Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886CD8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886CF0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886CF8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886DD0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886E10u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886E18u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886E28u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886E30u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886E40u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886E50u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886E60u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886E70u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886E80u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886E90u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886EA0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886EB0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886EBCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886ED8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886F10u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886F44u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886F4Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886F58u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886F60u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886F6Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886F7Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886FA8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886FB0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886FC0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886FC4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886FF0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08886FFCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888702Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887038u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887068u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887074u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088870A4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088870B4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088870BCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088870D0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088870D8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088870E4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088870ECu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088870F4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088870FCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888710Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887114u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887164u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887178u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888718Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088871B8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088871F8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887204u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888720Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887210u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887230u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887238u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887240u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887248u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887258u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887264u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888726Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887274u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888727Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887284u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888728Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088872A8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088872B0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088872BCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088872E4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088872ECu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088872F8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887300u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887308u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887310u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888731Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887328u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887350u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887360u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888736Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888737Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888738Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888739Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088873A8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088873C8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088873D4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088873D8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088873F0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088873F8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887400u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887408u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888741Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887420u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887428u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887434u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887448u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887454u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887474u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887480u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887488u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888748Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088874A4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088874B0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088874C0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088874C8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088874E4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088874ECu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088874F0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088874F8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088874FCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887504u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887508u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887510u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887514u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888751Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887520u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887528u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888752Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887534u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887538u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887540u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887548u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887550u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887568u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887570u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888757Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887580u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887594u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088875A0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088875A8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088875B0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088875B8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088875C0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088875C8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088875D0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088875D8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088875E0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088875E8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088875F0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088875F8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887600u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887608u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887610u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887618u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887620u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887628u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887630u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887638u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887640u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887648u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887650u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887658u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887684u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888768Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887694u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887698u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088876A0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088876A8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088876ACu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088876B0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088876C4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088876CCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088876D4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088876DCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887700u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888770Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888771Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887734u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888773Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887754u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888775Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887768u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887780u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088877A4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088877B0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088877C8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088877D0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088877E0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088877E8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088877F4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088877FCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887854u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888786Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887878u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887898u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088878ACu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088878C8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088878E0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x088878FCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887908u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887928u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888793Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887954u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888796Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x0888797Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887984u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887B74u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887B90u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887BA4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887BACu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887BB4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887BBCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887BD0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887BD8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887BE0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887BECu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887BF8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887C04u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887C10u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887C18u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887C20u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887C28u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887C34u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887C58u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887C70u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887C78u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887C80u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887C88u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887C94u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887CA0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887CACu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887CB8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887CC0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887CC8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887CE0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887CE8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887CF0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887CF8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887DE8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887E0Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887E14u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887E30u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887E38u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887E54u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887E5Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887E6Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887E80u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887E94u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887ECCu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887ED4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887EE0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887EE8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887F1Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887F24u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887F2Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887F6Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887F84u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887F8Cu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887FC8u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887FD4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887FE0u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887FECu, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887FF4u, &recomp_unit_0032, "recomp_unit_0032");
    runtime.register_function(0x08887FFCu, &recomp_unit_0032, "recomp_unit_0032");
}
} // namespace psprecomp
