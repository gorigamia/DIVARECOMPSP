#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0117[4079] = {
    1, 0, 0, 2, 0, 0, 3, 0, 0, 4, 5, 0, 0, 0, 0, 6, 0, 7, 8, 0, 9, 0, 10, 0, 11, 0, 0, 12, 0, 0, 13, 0,
    14, 0, 0, 15, 16, 0, 17, 0, 0, 0, 0, 18, 0, 19, 0, 0, 20, 0, 0, 21, 0, 0, 22, 0, 0, 0, 23, 0, 0, 24, 0, 25,
    0, 0, 26, 0, 27, 0, 0, 0, 28, 0, 0, 29, 0, 0, 30, 0, 0, 31, 0, 0, 32, 0, 0, 33, 0, 0, 34, 0, 0, 35, 0, 36,
    0, 0, 37, 0, 38, 0, 0, 0, 39, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 44, 0, 0, 0, 0, 45,
    0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 48, 49, 50, 0, 0, 0, 0, 0, 0, 0, 51, 0, 52, 0, 0, 53, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 54, 0, 0, 55, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0,
    0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67,
    0, 0, 68, 0, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0,
    0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 81, 0, 0, 0, 0, 82, 0, 0, 83, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 84, 85, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 93, 0, 0, 94, 0, 95, 0, 96, 0, 97, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 100, 101, 0, 0, 102, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0,
    0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0,
    0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 145,
    0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 0, 152, 0, 153, 0, 0, 0, 154, 0, 0, 0,
    0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 166, 0, 167, 0, 168, 0, 0, 169, 0, 0, 170, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0,
    0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 178, 179, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0,
    0, 0, 0, 182, 0, 0, 183, 0, 184, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0,
    191, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 195, 0, 0, 196, 0, 197, 0, 198, 0, 0, 0, 199, 0, 0, 0, 200,
    0, 0, 0, 201, 202, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 205, 0, 206, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 209,
    0, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 220, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0,
    0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0,
    0, 0, 230, 0, 0, 231, 0, 232, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 237, 0, 0, 238, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0, 0,
    0, 0, 0, 0, 0, 244, 0, 0, 245, 0, 246, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 250, 0, 0, 251, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    253, 0, 254, 0, 0, 255, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 260, 0, 0, 0, 0,
    0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 263, 0, 0, 264, 0, 265, 0, 266, 0, 0, 0, 267, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 271, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    273, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0,
    277, 0, 0, 278, 0, 279, 0, 280, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0,
    0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 285, 0, 0, 286, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 289, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 291, 0, 0, 292, 0, 293, 0, 294, 0, 0, 0, 295, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 298, 0, 0, 299, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0,
    0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 305, 0,
    0, 306, 0, 307, 0, 308, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0,
    311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 313, 0, 0, 314, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 317, 0, 0, 0, 0, 318, 0, 0, 0, 0, 319, 0, 0, 320, 0, 321, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 324, 0, 0,
    0, 0, 0, 0, 0, 0, 325, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 329, 0, 0, 330, 0, 331, 0, 332,
    0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 335, 336, 0, 337, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 338, 0, 339, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 0, 342, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 344,
    0, 345, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0,
    348, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0,
    0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0,
    355, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 0, 362, 0, 363, 0, 0, 0, 0, 364, 0, 0, 0,
    365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 368,
    0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 374, 0,
    0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 385, 0, 386, 0, 0, 0, 387,
    0, 0, 388, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0,
    0, 0, 0, 0, 392, 0, 0, 393, 0, 0, 0, 0, 0, 394, 0, 0, 395, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 397, 0, 0,
    398, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0,
    0, 0, 402, 0, 0, 403, 0, 0, 0, 0, 0, 404, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 406, 0, 407, 0, 408, 0, 409, 0, 410, 0,
    411, 0, 412, 0, 413, 0, 0, 0, 0, 0, 414, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 417, 0, 0, 0,
    418, 0, 419, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0,
    0, 423, 0, 0, 0, 0, 424, 0, 0, 0, 0, 425, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 428, 0, 0, 429, 0,
    0, 0, 0, 430, 0, 0, 0, 431, 0, 0, 432, 0, 0, 0, 0, 433, 0, 0, 0, 434, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 436,
    0, 0, 437, 0, 0, 0, 0, 438, 0, 0, 439, 440, 0, 441, 0, 0, 442, 0, 0, 443, 444, 0, 445, 446, 0, 0, 0, 0, 447, 0, 0, 448,
    449, 0, 450, 0, 0, 451, 0, 0, 452, 453, 0, 454, 455, 0, 0, 0, 456, 0, 0, 457, 458, 0, 0, 0, 459, 0, 0, 460, 0, 461, 462, 0,
    0, 463, 464, 0, 0, 0, 0, 465, 0, 0, 466, 467, 0, 0, 0, 468, 0, 0, 469, 0, 470, 471, 0, 0, 472, 473, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 475, 0, 0, 476, 477, 0, 478, 0, 0, 479, 0, 0, 480, 481, 0, 482, 483, 0, 0, 0, 0,
    484, 0, 0, 485, 486, 0, 487, 0, 0, 488, 0, 0, 489, 490, 0, 491, 492, 0, 0, 0, 493, 0, 0, 494, 495, 0, 0, 0, 496, 0, 0, 497,
    0, 498, 499, 0, 0, 500, 501, 0, 0, 0, 0, 502, 0, 0, 503, 504, 0, 0, 0, 505, 0, 0, 506, 0, 507, 508, 0, 0, 509, 510, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 511, 0, 0, 512, 0, 513, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 515, 0, 0,
    0, 0, 0, 0, 0, 0, 516, 0, 517, 518, 0, 0, 0, 519, 0, 520, 521, 0, 0, 0, 0, 0, 522, 0, 0, 0, 523, 0, 0, 0, 0, 0,
    524, 0, 0, 0, 0, 0, 525, 0, 0, 0, 526, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 531, 0, 0, 532, 0, 0, 0, 0,
    533, 0, 0, 0, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 536, 0, 537, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 540, 0, 0, 0, 541, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 542,
};
void recomp_unit_0117_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089D8000u;
        entry_id = (entry_delta < 16316u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0117[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089D8000;
    case 2u: goto L_089D800C;
    case 3u: goto L_089D8018;
    case 4u: goto L_089D8024;
    case 5u: goto L_089D8028;
    case 6u: goto L_089D803C;
    case 7u: goto L_089D8044;
    case 8u: goto L_089D8048;
    case 9u: goto L_089D8050;
    case 10u: goto L_089D8058;
    case 11u: goto L_089D8060;
    case 12u: goto L_089D806C;
    case 13u: goto L_089D8078;
    case 14u: goto L_089D8080;
    case 15u: goto L_089D808C;
    case 16u: goto L_089D8090;
    case 17u: goto L_089D8098;
    case 18u: goto L_089D80AC;
    case 19u: goto L_089D80B4;
    case 20u: goto L_089D80C0;
    case 21u: goto L_089D80CC;
    case 22u: goto L_089D80D8;
    case 23u: goto L_089D80E8;
    case 24u: goto L_089D80F4;
    case 25u: goto L_089D80FC;
    case 26u: goto L_089D8108;
    case 27u: goto L_089D8110;
    case 28u: goto L_089D8120;
    case 29u: goto L_089D812C;
    case 30u: goto L_089D8138;
    case 31u: goto L_089D8144;
    case 32u: goto L_089D8150;
    case 33u: goto L_089D815C;
    case 34u: goto L_089D8168;
    case 35u: goto L_089D8174;
    case 36u: goto L_089D817C;
    case 37u: goto L_089D8188;
    case 38u: goto L_089D8190;
    case 39u: goto L_089D81A0;
    case 40u: goto L_089D81A8;
    case 41u: goto L_089D81BC;
    case 42u: goto L_089D81D0;
    case 43u: goto L_089D81E0;
    case 44u: goto L_089D81E8;
    case 45u: goto L_089D81FC;
    case 46u: goto L_089D8210;
    case 47u: goto L_089D8220;
    case 48u: goto L_089D8228;
    case 49u: goto L_089D822C;
    case 50u: goto L_089D8230;
    case 51u: goto L_089D8250;
    case 52u: goto L_089D8258;
    case 53u: goto L_089D8264;
    case 54u: goto L_089D8294;
    case 55u: goto L_089D82A0;
    case 56u: goto L_089D82A4;
    case 57u: goto L_089D82F0;
    case 58u: goto L_089D8314;
    case 59u: goto L_089D8344;
    case 60u: goto L_089D8368;
    case 61u: goto L_089D8390;
    case 62u: goto L_089D83A0;
    case 63u: goto L_089D83AC;
    case 64u: goto L_089D83C8;
    case 65u: goto L_089D83D4;
    case 66u: goto L_089D83E0;
    case 67u: goto L_089D83FC;
    case 68u: goto L_089D8408;
    case 69u: goto L_089D841C;
    case 70u: goto L_089D8464;
    case 71u: goto L_089D84C4;
    case 72u: goto L_089D84D0;
    case 73u: goto L_089D84F4;
    case 74u: goto L_089D8514;
    case 75u: goto L_089D852C;
    case 76u: goto L_089D8550;
    case 77u: goto L_089D8588;
    case 78u: goto L_089D8598;
    case 79u: goto L_089D85AC;
    case 80u: goto L_089D85C0;
    case 81u: goto L_089D85C8;
    case 82u: goto L_089D85DC;
    case 83u: goto L_089D85E8;
    case 84u: goto L_089D8614;
    case 85u: goto L_089D8618;
    case 86u: goto L_089D8638;
    case 87u: goto L_089D8650;
    case 88u: goto L_089D8688;
    case 89u: goto L_089D8690;
    case 90u: goto L_089D86C0;
    case 91u: goto L_089D86D8;
    case 92u: goto L_089D8744;
    case 93u: goto L_089D8748;
    case 94u: goto L_089D8754;
    case 95u: goto L_089D875C;
    case 96u: goto L_089D8764;
    case 97u: goto L_089D876C;
    case 98u: goto L_089D879C;
    case 99u: goto L_089D87B4;
    case 100u: goto L_089D8820;
    case 101u: goto L_089D8824;
    case 102u: goto L_089D8830;
    case 103u: goto L_089D8838;
    case 104u: goto L_089D8864;
    case 105u: goto L_089D8890;
    case 106u: goto L_089D88DC;
    case 107u: goto L_089D891C;
    case 108u: goto L_089D8968;
    case 109u: goto L_089D89A8;
    case 110u: goto L_089D89F8;
    case 111u: goto L_089D8A0C;
    case 112u: goto L_089D8A20;
    case 113u: goto L_089D8A40;
    case 114u: goto L_089D8A5C;
    case 115u: goto L_089D8A70;
    case 116u: goto L_089D8AB0;
    case 117u: goto L_089D8B10;
    case 118u: goto L_089D8B34;
    case 119u: goto L_089D8B48;
    case 120u: goto L_089D8B70;
    case 121u: goto L_089D8BA8;
    case 122u: goto L_089D8BEC;
    case 123u: goto L_089D8C34;
    case 124u: goto L_089D8C48;
    case 125u: goto L_089D8C6C;
    case 126u: goto L_089D8CA4;
    case 127u: goto L_089D8CEC;
    case 128u: goto L_089D8D14;
    case 129u: goto L_089D8D38;
    case 130u: goto L_089D8D74;
    case 131u: goto L_089D8D98;
    case 132u: goto L_089D8DDC;
    case 133u: goto L_089D8E14;
    case 134u: goto L_089D8E30;
    case 135u: goto L_089D8E40;
    case 136u: goto L_089D8E78;
    case 137u: goto L_089D8EA4;
    case 138u: goto L_089D8EDC;
    case 139u: goto L_089D8F08;
    case 140u: goto L_089D8F40;
    case 141u: goto L_089D8F6C;
    case 142u: goto L_089D8FA4;
    case 143u: goto L_089D8FD0;
    case 144u: goto L_089D8FEC;
    case 145u: goto L_089D8FFC;
    case 146u: goto L_089D9014;
    case 147u: goto L_089D90C0;
    case 148u: goto L_089D9100;
    case 149u: goto L_089D914C;
    case 150u: goto L_089D9190;
    case 151u: goto L_089D91B8;
    case 152u: goto L_089D91D8;
    case 153u: goto L_089D91E0;
    case 154u: goto L_089D91F0;
    case 155u: goto L_089D9208;
    case 156u: goto L_089D921C;
    case 157u: goto L_089D9234;
    case 158u: goto L_089D924C;
    case 159u: goto L_089D9264;
    case 160u: goto L_089D93C0;
    case 161u: goto L_089D9444;
    case 162u: goto L_089D9458;
    case 163u: goto L_089D9488;
    case 164u: goto L_089D949C;
    case 165u: goto L_089D94BC;
    case 166u: goto L_089D94C8;
    case 167u: goto L_089D94D0;
    case 168u: goto L_089D94D8;
    case 169u: goto L_089D94E4;
    case 170u: goto L_089D94F0;
    case 171u: goto L_089D9674;
    case 172u: goto L_089D9684;
    case 173u: goto L_089D969C;
    case 174u: goto L_089D96AC;
    case 175u: goto L_089D96C0;
    case 176u: goto L_089D96D4;
    case 177u: goto L_089D99B8;
    case 178u: goto L_089D99C4;
    case 179u: goto L_089D99C8;
    case 180u: goto L_089D99D4;
    case 181u: goto L_089D99F8;
    case 182u: goto L_089D9A0C;
    case 183u: goto L_089D9A18;
    case 184u: goto L_089D9A20;
    case 185u: goto L_089D9A28;
    case 186u: goto L_089D9A3C;
    case 187u: goto L_089D9A4C;
    case 188u: goto L_089D9A54;
    case 189u: goto L_089D9A68;
    case 190u: goto L_089D9A78;
    case 191u: goto L_089D9A80;
    case 192u: goto L_089D9A94;
    case 193u: goto L_089D9AA4;
    case 194u: goto L_089D9AB4;
    case 195u: goto L_089D9AC0;
    case 196u: goto L_089D9ACC;
    case 197u: goto L_089D9AD4;
    case 198u: goto L_089D9ADC;
    case 199u: goto L_089D9AEC;
    case 200u: goto L_089D9AFC;
    case 201u: goto L_089D9B0C;
    case 202u: goto L_089D9B10;
    case 203u: goto L_089D9B18;
    case 204u: goto L_089D9B3C;
    case 205u: goto L_089D9B48;
    case 206u: goto L_089D9B50;
    case 207u: goto L_089D9B58;
    case 208u: goto L_089D9B68;
    case 209u: goto L_089D9B7C;
    case 210u: goto L_089D9B8C;
    case 211u: goto L_089D9BA0;
    case 212u: goto L_089D9BC0;
    case 213u: goto L_089D9C0C;
    case 214u: goto L_089D9C1C;
    case 215u: goto L_089D9C30;
    case 216u: goto L_089D9C40;
    case 217u: goto L_089D9C54;
    case 218u: goto L_089D9C74;
    case 219u: goto L_089D9CC8;
    case 220u: goto L_089D9CD4;
    case 221u: goto L_089D9CE0;
    case 222u: goto L_089D9D28;
    case 223u: goto L_089D9D38;
    case 224u: goto L_089D9D4C;
    case 225u: goto L_089D9D5C;
    case 226u: goto L_089D9D70;
    case 227u: goto L_089D9D90;
    case 228u: goto L_089D9DD0;
    case 229u: goto L_089D9DEC;
    case 230u: goto L_089D9E08;
    case 231u: goto L_089D9E14;
    case 232u: goto L_089D9E1C;
    case 233u: goto L_089D9E24;
    case 234u: goto L_089D9E4C;
    case 235u: goto L_089D9E98;
    case 236u: goto L_089D9EC0;
    case 237u: goto L_089D9F14;
    case 238u: goto L_089D9F20;
    case 239u: goto L_089D9F2C;
    case 240u: goto L_089D9F74;
    case 241u: goto L_089D9F9C;
    case 242u: goto L_089D9FDC;
    case 243u: goto L_089D9FF0;
    case 244u: goto L_089DA014;
    case 245u: goto L_089DA020;
    case 246u: goto L_089DA028;
    case 247u: goto L_089DA030;
    case 248u: goto L_089DA080;
    case 249u: goto L_089DA0D4;
    case 250u: goto L_089DA0E0;
    case 251u: goto L_089DA0EC;
    case 252u: goto L_089DA134;
    case 253u: goto L_089DA180;
    case 254u: goto L_089DA188;
    case 255u: goto L_089DA194;
    case 256u: goto L_089DA1A4;
    case 257u: goto L_089DA1B8;
    case 258u: goto L_089DA1CC;
    case 259u: goto L_089DA1E4;
    case 260u: goto L_089DA1EC;
    case 261u: goto L_089DA20C;
    case 262u: goto L_089DA228;
    case 263u: goto L_089DA244;
    case 264u: goto L_089DA250;
    case 265u: goto L_089DA258;
    case 266u: goto L_089DA260;
    case 267u: goto L_089DA270;
    case 268u: goto L_089DA2BC;
    case 269u: goto L_089DA2CC;
    case 270u: goto L_089DA320;
    case 271u: goto L_089DA32C;
    case 272u: goto L_089DA338;
    case 273u: goto L_089DA380;
    case 274u: goto L_089DA390;
    case 275u: goto L_089DA3D0;
    case 276u: goto L_089DA3E4;
    case 277u: goto L_089DA400;
    case 278u: goto L_089DA40C;
    case 279u: goto L_089DA414;
    case 280u: goto L_089DA41C;
    case 281u: goto L_089DA42C;
    case 282u: goto L_089DA478;
    case 283u: goto L_089DA488;
    case 284u: goto L_089DA4DC;
    case 285u: goto L_089DA4E8;
    case 286u: goto L_089DA4F4;
    case 287u: goto L_089DA53C;
    case 288u: goto L_089DA54C;
    case 289u: goto L_089DA58C;
    case 290u: goto L_089DA5A0;
    case 291u: goto L_089DA5BC;
    case 292u: goto L_089DA5C8;
    case 293u: goto L_089DA5D0;
    case 294u: goto L_089DA5D8;
    case 295u: goto L_089DA5E8;
    case 296u: goto L_089DA634;
    case 297u: goto L_089DA644;
    case 298u: goto L_089DA698;
    case 299u: goto L_089DA6A4;
    case 300u: goto L_089DA6B0;
    case 301u: goto L_089DA6F8;
    case 302u: goto L_089DA708;
    case 303u: goto L_089DA748;
    case 304u: goto L_089DA75C;
    case 305u: goto L_089DA778;
    case 306u: goto L_089DA784;
    case 307u: goto L_089DA78C;
    case 308u: goto L_089DA794;
    case 309u: goto L_089DA7A4;
    case 310u: goto L_089DA7F0;
    case 311u: goto L_089DA800;
    case 312u: goto L_089DA854;
    case 313u: goto L_089DA860;
    case 314u: goto L_089DA86C;
    case 315u: goto L_089DA8B4;
    case 316u: goto L_089DA8C4;
    case 317u: goto L_089DA904;
    case 318u: goto L_089DA918;
    case 319u: goto L_089DA92C;
    case 320u: goto L_089DA938;
    case 321u: goto L_089DA940;
    case 322u: goto L_089DA948;
    case 323u: goto L_089DA96C;
    case 324u: goto L_089DA974;
    case 325u: goto L_089DA998;
    case 326u: goto L_089DA9A0;
    case 327u: goto L_089DA9C4;
    case 328u: goto L_089DA9D4;
    case 329u: goto L_089DA9E0;
    case 330u: goto L_089DA9EC;
    case 331u: goto L_089DA9F4;
    case 332u: goto L_089DA9FC;
    case 333u: goto L_089DAA1C;
    case 334u: goto L_089DAA3C;
    case 335u: goto L_089DAA5C;
    case 336u: goto L_089DAA60;
    case 337u: goto L_089DAA68;
    case 338u: goto L_089DAA94;
    case 339u: goto L_089DAA9C;
    case 340u: goto L_089DAAAC;
    case 341u: goto L_089DAABC;
    case 342u: goto L_089DAAD0;
    case 343u: goto L_089DAAE4;
    case 344u: goto L_089DAAFC;
    case 345u: goto L_089DAB04;
    case 346u: goto L_089DAB24;
    case 347u: goto L_089DAB70;
    case 348u: goto L_089DAB80;
    case 349u: goto L_089DABA0;
    case 350u: goto L_089DABC8;
    case 351u: goto L_089DABF0;
    case 352u: goto L_089DAC14;
    case 353u: goto L_089DAC38;
    case 354u: goto L_089DAC5C;
    case 355u: goto L_089DAC80;
    case 356u: goto L_089DACA4;
    case 357u: goto L_089DACBC;
    case 358u: goto L_089DACEC;
    case 359u: goto L_089DAD18;
    case 360u: goto L_089DAD30;
    case 361u: goto L_089DAD40;
    case 362u: goto L_089DAD54;
    case 363u: goto L_089DAD5C;
    case 364u: goto L_089DAD70;
    case 365u: goto L_089DAD80;
    case 366u: goto L_089DAE40;
    case 367u: goto L_089DAE58;
    case 368u: goto L_089DAE7C;
    case 369u: goto L_089DAE94;
    case 370u: goto L_089DAEAC;
    case 371u: goto L_089DB02C;
    case 372u: goto L_089DB048;
    case 373u: goto L_089DB064;
    case 374u: goto L_089DB078;
    case 375u: goto L_089DB09C;
    case 376u: goto L_089DB0C4;
    case 377u: goto L_089DB0E8;
    case 378u: goto L_089DB118;
    case 379u: goto L_089DB12C;
    case 380u: goto L_089DB14C;
    case 381u: goto L_089DB1C0;
    case 382u: goto L_089DB228;
    case 383u: goto L_089DB248;
    case 384u: goto L_089DB258;
    case 385u: goto L_089DB264;
    case 386u: goto L_089DB26C;
    case 387u: goto L_089DB27C;
    case 388u: goto L_089DB288;
    case 389u: goto L_089DB28C;
    case 390u: goto L_089DB2D4;
    case 391u: goto L_089DB2F8;
    case 392u: goto L_089DB310;
    case 393u: goto L_089DB31C;
    case 394u: goto L_089DB334;
    case 395u: goto L_089DB340;
    case 396u: goto L_089DB35C;
    case 397u: goto L_089DB374;
    case 398u: goto L_089DB380;
    case 399u: goto L_089DB384;
    case 400u: goto L_089DB3CC;
    case 401u: goto L_089DB3F0;
    case 402u: goto L_089DB408;
    case 403u: goto L_089DB414;
    case 404u: goto L_089DB42C;
    case 405u: goto L_089DB438;
    case 406u: goto L_089DB458;
    case 407u: goto L_089DB460;
    case 408u: goto L_089DB468;
    case 409u: goto L_089DB470;
    case 410u: goto L_089DB478;
    case 411u: goto L_089DB480;
    case 412u: goto L_089DB488;
    case 413u: goto L_089DB490;
    case 414u: goto L_089DB4A8;
    case 415u: goto L_089DB4B4;
    case 416u: goto L_089DB4D8;
    case 417u: goto L_089DB4F0;
    case 418u: goto L_089DB500;
    case 419u: goto L_089DB508;
    case 420u: goto L_089DB514;
    case 421u: goto L_089DB554;
    case 422u: goto L_089DB574;
    case 423u: goto L_089DB584;
    case 424u: goto L_089DB598;
    case 425u: goto L_089DB5AC;
    case 426u: goto L_089DB5BC;
    case 427u: goto L_089DB5DC;
    case 428u: goto L_089DB5EC;
    case 429u: goto L_089DB5F8;
    case 430u: goto L_089DB60C;
    case 431u: goto L_089DB61C;
    case 432u: goto L_089DB628;
    case 433u: goto L_089DB63C;
    case 434u: goto L_089DB64C;
    case 435u: goto L_089DB658;
    case 436u: goto L_089DB67C;
    case 437u: goto L_089DB688;
    case 438u: goto L_089DB69C;
    case 439u: goto L_089DB6A8;
    case 440u: goto L_089DB6AC;
    case 441u: goto L_089DB6B4;
    case 442u: goto L_089DB6C0;
    case 443u: goto L_089DB6CC;
    case 444u: goto L_089DB6D0;
    case 445u: goto L_089DB6D8;
    case 446u: goto L_089DB6DC;
    case 447u: goto L_089DB6F0;
    case 448u: goto L_089DB6FC;
    case 449u: goto L_089DB700;
    case 450u: goto L_089DB708;
    case 451u: goto L_089DB714;
    case 452u: goto L_089DB720;
    case 453u: goto L_089DB724;
    case 454u: goto L_089DB72C;
    case 455u: goto L_089DB730;
    case 456u: goto L_089DB740;
    case 457u: goto L_089DB74C;
    case 458u: goto L_089DB750;
    case 459u: goto L_089DB760;
    case 460u: goto L_089DB76C;
    case 461u: goto L_089DB774;
    case 462u: goto L_089DB778;
    case 463u: goto L_089DB784;
    case 464u: goto L_089DB788;
    case 465u: goto L_089DB79C;
    case 466u: goto L_089DB7A8;
    case 467u: goto L_089DB7AC;
    case 468u: goto L_089DB7BC;
    case 469u: goto L_089DB7C8;
    case 470u: goto L_089DB7D0;
    case 471u: goto L_089DB7D4;
    case 472u: goto L_089DB7E0;
    case 473u: goto L_089DB7E4;
    case 474u: goto L_089DB918;
    case 475u: goto L_089DB92C;
    case 476u: goto L_089DB938;
    case 477u: goto L_089DB93C;
    case 478u: goto L_089DB944;
    case 479u: goto L_089DB950;
    case 480u: goto L_089DB95C;
    case 481u: goto L_089DB960;
    case 482u: goto L_089DB968;
    case 483u: goto L_089DB96C;
    case 484u: goto L_089DB980;
    case 485u: goto L_089DB98C;
    case 486u: goto L_089DB990;
    case 487u: goto L_089DB998;
    case 488u: goto L_089DB9A4;
    case 489u: goto L_089DB9B0;
    case 490u: goto L_089DB9B4;
    case 491u: goto L_089DB9BC;
    case 492u: goto L_089DB9C0;
    case 493u: goto L_089DB9D0;
    case 494u: goto L_089DB9DC;
    case 495u: goto L_089DB9E0;
    case 496u: goto L_089DB9F0;
    case 497u: goto L_089DB9FC;
    case 498u: goto L_089DBA04;
    case 499u: goto L_089DBA08;
    case 500u: goto L_089DBA14;
    case 501u: goto L_089DBA18;
    case 502u: goto L_089DBA2C;
    case 503u: goto L_089DBA38;
    case 504u: goto L_089DBA3C;
    case 505u: goto L_089DBA4C;
    case 506u: goto L_089DBA58;
    case 507u: goto L_089DBA60;
    case 508u: goto L_089DBA64;
    case 509u: goto L_089DBA70;
    case 510u: goto L_089DBA74;
    case 511u: goto L_089DBB1C;
    case 512u: goto L_089DBB28;
    case 513u: goto L_089DBB30;
    case 514u: goto L_089DBB64;
    case 515u: goto L_089DBB74;
    case 516u: goto L_089DBB98;
    case 517u: goto L_089DBBA0;
    case 518u: goto L_089DBBA4;
    case 519u: goto L_089DBBB4;
    case 520u: goto L_089DBBBC;
    case 521u: goto L_089DBBC0;
    case 522u: goto L_089DBBD8;
    case 523u: goto L_089DBBE8;
    case 524u: goto L_089DBC00;
    case 525u: goto L_089DBC18;
    case 526u: goto L_089DBC28;
    case 527u: goto L_089DBC40;
    case 528u: goto L_089DBCDC;
    case 529u: goto L_089DBD0C;
    case 530u: goto L_089DBE54;
    case 531u: goto L_089DBE60;
    case 532u: goto L_089DBE6C;
    case 533u: goto L_089DBE80;
    case 534u: goto L_089DBEA8;
    case 535u: goto L_089DBEE0;
    case 536u: goto L_089DBF08;
    case 537u: goto L_089DBF10;
    case 538u: goto L_089DBF20;
    case 539u: goto L_089DBF48;
    case 540u: goto L_089DBF5C;
    case 541u: goto L_089DBF6C;
    case 542u: goto L_089DBFB8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089D8000:
    ctx.set_gpr(17, ctx.gpr[3] + ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D8028;
      }
      goto L_089D800C;
    }
L_089D800C:
    ctx.set_gpr(17, ctx.gpr[19] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D8028;
      }
      goto L_089D8018;
    }
L_089D8018:
    ctx.set_gpr(17, ctx.gpr[19] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D8028;
      }
      goto L_089D8024;
    }
L_089D8024:
    ctx.set_gpr(17, 0u + 0u);
    goto L_089D8028;
L_089D8028:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D8048;
      }
      goto L_089D803C;
    }
L_089D803C:
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089D8048;
      }
      goto L_089D8044;
    }
L_089D8044:
    ctx.set_gpr(23, 0u + 0u);
    goto L_089D8048;
L_089D8048:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D8090;
      }
      goto L_089D8050;
    }
L_089D8050:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D808C;
      }
      goto L_089D8058;
    }
L_089D8058:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D808C;
      }
      goto L_089D8060;
    }
L_089D8060:
    ctx.set_gpr(4, ctx.gpr[20] & 8192u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D8078;
      }
      goto L_089D806C;
    }
L_089D806C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089D808C;
      }
      goto L_089D8078;
    }
L_089D8078:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D8090;
      }
      goto L_089D8080;
    }
L_089D8080:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089D8090;
      }
      goto L_089D808C;
    }
L_089D808C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089D8090;
L_089D8090:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D80B4;
      }
      goto L_089D8098;
    }
L_089D8098:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(808)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D80ACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D80ACu) goto L_089D80AC;
    return;
L_089D80AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D8250;
      }
      goto L_089D80B4;
    }
L_089D80B4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D80FC;
      }
      goto L_089D80C0;
    }
L_089D80C0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D80D8;
      }
      goto L_089D80CC;
    }
L_089D80CC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_089D80D8;
L_089D80D8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x089D80E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 19u, 0x089C81F0u>(ctx, &aot_mem) && ctx.pc == 0x089D80E8u) goto L_089D80E8;
    return;
L_089D80E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D80FC;
      }
      goto L_089D80F4;
    }
L_089D80F4:
    ctx.set_gpr(31, 0x089D80FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089D80FCu) goto L_089D80FC;
    return;
L_089D80FC:
    ctx.set_gpr(2, ctx.gpr[20] & 8192u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D8110;
      }
      goto L_089D8108;
    }
L_089D8108:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D8230;
      }
      goto L_089D8110;
    }
L_089D8110:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(412)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8193));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D81E8;
      }
      goto L_089D8120;
    }
L_089D8120:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8194));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D81E8;
      }
      goto L_089D812C;
    }
L_089D812C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8192));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D81A8;
      }
      goto L_089D8138;
    }
L_089D8138:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D8190;
      }
      goto L_089D8144;
    }
L_089D8144:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D8190;
      }
      goto L_089D8150;
    }
L_089D8150:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D8190;
      }
      goto L_089D815C;
    }
L_089D815C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D8190;
      }
      goto L_089D8168;
    }
L_089D8168:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D8190;
      }
      goto L_089D8174;
    }
L_089D8174:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D8190;
      }
      goto L_089D817C;
    }
L_089D817C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4102));
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D8190;
      }
      goto L_089D8188;
    }
L_089D8188:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D8228;
      }
      goto L_089D8190;
    }
L_089D8190:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089D81A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 752u, 0x089D7720u>(ctx, &aot_mem) && ctx.pc == 0x089D81A0u) goto L_089D81A0;
    return;
L_089D81A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D822C;
      }
      goto L_089D81A8;
    }
L_089D81A8:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D81D0;
      }
      goto L_089D81BC;
    }
L_089D81BC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_089D81D0;
L_089D81D0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[5] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D81BC;
      }
      goto L_089D81E0;
    }
L_089D81E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D822C;
      }
      goto L_089D81E8;
    }
L_089D81E8:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D8210;
      }
      goto L_089D81FC;
    }
L_089D81FC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_089D8210;
L_089D8210:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[5] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D81FC;
      }
      goto L_089D8220;
    }
L_089D8220:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D822C;
      }
      goto L_089D8228;
    }
L_089D8228:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089D822C;
L_089D822C:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    goto L_089D8230;
L_089D8230:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(9, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x089D8250u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 258u, 0x089D16A0u>(ctx, &aot_mem) && ctx.pc == 0x089D8250u) goto L_089D8250;
    return;
L_089D8250:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D8264;
      }
      goto L_089D8258;
    }
L_089D8258:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(524)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), ctx.gpr[3]);
    goto L_089D8264;
L_089D8264:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D8294:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32168)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D82A4;
      }
      goto L_089D82A0;
    }
L_089D82A0:
    ctx.set_gpr(5, 0u + 0u);
    goto L_089D82A4;
L_089D82A4:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-28380)));
    ctx.set_gpr(5, ctx.gpr[5] & 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[3] | ctx.gpr[5]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-28380), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27448)));
    ctx.set_gpr(3, 128u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27448), ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 64u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D82F0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-28380)));
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
L_089D8314:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(420)));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    // nop
      if (branch_taken) {
          goto L_089D841C;
      }
      goto L_089D8344;
    }
L_089D8344:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[2] << 3u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089D8368u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 433u, 0x08929E9Cu>(ctx, &aot_mem) && ctx.pc == 0x089D8368u) goto L_089D8368;
    return;
L_089D8368:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[4] << 4u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(480));
    ctx.set_gpr(31, 0x089D8390u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x089D8390u) goto L_089D8390;
    return;
L_089D8390:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D83D4;
      }
      goto L_089D83A0;
    }
L_089D83A0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089D83ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 445u, 0x08929F74u>(ctx, &aot_mem) && ctx.pc == 0x089D83ACu) goto L_089D83AC;
    return;
L_089D83AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D83C8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D83C8u) goto L_089D83C8;
    return;
L_089D83C8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[2]));
    goto L_089D83D4;
L_089D83D4:
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D83FC;
      }
      goto L_089D83E0;
    }
L_089D83E0:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_089D83FC;
L_089D83FC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D83E0;
      }
      goto L_089D8408;
    }
L_089D8408:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    goto L_089D841C;
L_089D841C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(17, rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(-2)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(420)));
    ctx.set_gpr(2, ctx.gpr[17] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(116));
    ctx.set_gpr(31, 0x089D8464u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x089D8464u) goto L_089D8464;
    return;
L_089D8464:
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(3, 0u & 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(4, 0u & 3u);
    ctx.set_gpr(3, ctx.gpr[4] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-7));
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(3, ctx.gpr[4] << 3u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-25));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D8514;
      }
      goto L_089D84C4;
    }
L_089D84C4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D84F4;
      }
      goto L_089D84D0;
    }
L_089D84D0:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(2, 0u & 3u);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-25));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D852C;
      }
      goto L_089D84F4;
    }
L_089D84F4:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(2, ctx.gpr[2] & 3u);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D852C;
      }
      goto L_089D8514;
    }
L_089D8514:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(2, ctx.gpr[2] & 3u);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_089D852C;
L_089D852C:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
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
L_089D8550:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(420)));
    ctx.set_gpr(3, ctx.gpr[17] << 4u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[17]);
    ctx.set_gpr(6, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D8638;
      }
      goto L_089D8588;
    }
L_089D8588:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D85AC;
      }
      goto L_089D8598;
    }
L_089D8598:
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(308)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D85ACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D85ACu) goto L_089D85AC;
    return;
L_089D85AC:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(420)));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D8638;
      }
      goto L_089D85C0;
    }
L_089D85C0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_089D8638;
      }
      goto L_089D85C8;
    }
L_089D85C8:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D8618;
      }
      goto L_089D85DC;
    }
L_089D85DC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089D85E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 445u, 0x08929F74u>(ctx, &aot_mem) && ctx.pc == 0x089D85E8u) goto L_089D85E8;
    return;
L_089D85E8:
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
    ctx.set_gpr(31, 0x089D8614u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D8614u) goto L_089D8614;
    return;
L_089D8614:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    goto L_089D8618;
L_089D8618:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[17]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[3]));
    goto L_089D8638;
L_089D8638:
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
L_089D8650:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(420)));
    ctx.set_gpr(2, ctx.gpr[5] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(2, ctx.gpr[8] & 1u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(7, ctx.gpr[2] & 255u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D875C;
      }
      goto L_089D8688;
    }
L_089D8688:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D875C;
      }
      goto L_089D8690;
    }
L_089D8690:
    ctx.set_gpr(5, ctx.gpr[5] & 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[8] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(2, ctx.gpr[2] | 2u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D8748;
      }
      goto L_089D86C0;
    }
L_089D86C0:
    ctx.set_gpr(8, ctx.gpr[5] << 2u);
    ctx.set_gpr(6, ctx.gpr[8] + ctx.gpr[4]);
    ctx.set_gpr(7, ctx.gpr[6] + static_cast<std::uint32_t>(444));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(444)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D8744;
      }
      goto L_089D86D8;
    }
L_089D86D8:
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(464)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(464), ctx.gpr[2]);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-28472));
    ctx.set_gpr(6, ctx.gpr[2] + ctx.gpr[8]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(3, ctx.gpr[4] & 31u);
    ctx.set_gpr(5, ctx.gpr[7] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(3, ctx.gpr[4] >> 5u);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-27448));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D8830;
      }
      goto L_089D8744;
    }
L_089D8744:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_089D8748;
L_089D8748:
    ctx.set_gpr(6, ctx.gpr[5] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D86C0;
      }
      goto L_089D8754;
    }
L_089D8754:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D8830;
      }
      goto L_089D875C;
    }
L_089D875C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D8830;
      }
      goto L_089D8764;
    }
L_089D8764:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D8830;
      }
      goto L_089D876C;
    }
L_089D876C:
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(6, 0u & 1u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[7] & ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[6]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(5, ctx.gpr[5] | 2u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[5]);
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D8824;
      }
      goto L_089D879C;
    }
L_089D879C:
    ctx.set_gpr(8, ctx.gpr[5] << 2u);
    ctx.set_gpr(6, ctx.gpr[8] + ctx.gpr[4]);
    ctx.set_gpr(7, ctx.gpr[6] + static_cast<std::uint32_t>(444));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(444)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089D8820;
      }
      goto L_089D87B4;
    }
L_089D87B4:
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(464)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(464), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-28472));
    ctx.set_gpr(7, ctx.gpr[3] + ctx.gpr[8]);
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(4, 0u & 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(6, ctx.gpr[5] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(4, ctx.gpr[6] & 31u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[3] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(3, ctx.gpr[6] >> 5u);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-27448));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D8830;
      }
      goto L_089D8820;
    }
L_089D8820:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_089D8824;
L_089D8824:
    ctx.set_gpr(6, ctx.gpr[5] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D879C;
      }
      goto L_089D8830;
    }
L_089D8830:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D8838:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(420)));
    ctx.set_gpr(2, ctx.gpr[5] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D8864:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(420)));
    ctx.set_gpr(2, ctx.gpr[5] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(2, ctx.gpr[2] << 27u);
    ctx.set_gpr(2, ctx.gpr[2] >> 30u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D8890:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(420)));
    ctx.set_gpr(3, ctx.gpr[5] << 4u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 2u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D88DC:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(420)));
    ctx.set_gpr(3, ctx.gpr[5] << 4u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D891C:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(420)));
    ctx.set_gpr(3, ctx.gpr[5] << 4u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 2u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D8968:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(420)));
    ctx.set_gpr(3, ctx.gpr[5] << 4u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D89A8:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(420)));
    ctx.set_gpr(3, ctx.gpr[5] << 4u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, ctx.gpr[3] + ctx.gpr[5]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[1] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) && ctx.fpr[1] == ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089D8A20;
      }
      goto L_089D89F8;
    }
L_089D89F8:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) && ctx.fpr[1] == ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089D8A20;
      }
      goto L_089D8A0C;
    }
L_089D8A0C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) && ctx.fpr[1] == ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089D8A40;
      }
      goto L_089D8A20;
    }
L_089D8A20:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-7));
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D8A5C;
      }
      goto L_089D8A40;
    }
L_089D8A40:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(3, 0u & 3u);
    ctx.set_gpr(5, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-7));
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_089D8A5C;
L_089D8A5C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 2u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D8A70:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(420)));
    ctx.set_gpr(3, ctx.gpr[5] << 4u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D8AB0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(420)));
    ctx.set_gpr(3, ctx.gpr[5] << 4u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(3, ctx.gpr[3] << 27u);
    ctx.set_gpr(3, ctx.gpr[3] >> 30u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D8B48;
      }
      goto L_089D8B10;
    }
L_089D8B10:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(804)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 6u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089D8B34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x089D8B34u) goto L_089D8B34;
    return;
L_089D8B34:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089D8B48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x089D8B48u) goto L_089D8B48;
    return;
L_089D8B48:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 2u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D8B70:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(420)));
    ctx.set_gpr(3, ctx.gpr[5] << 4u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D8BA8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(420)));
    ctx.set_gpr(3, ctx.gpr[5] << 4u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(3, ctx.gpr[3] << 27u);
    ctx.set_gpr(4, ctx.gpr[3] >> 30u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089D8C48;
      }
      goto L_089D8BEC;
    }
L_089D8BEC:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_fpr_bits(0, ctx.fpr_bits(0) ^ 0x80000000u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_fpr_bits(0, ctx.fpr_bits(0) ^ 0x80000000u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.set_fpr_bits(0, ctx.fpr_bits(0) ^ 0x80000000u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(804)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 6u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089D8C34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x089D8C34u) goto L_089D8C34;
    return;
L_089D8C34:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089D8C48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 270u, 0x08A031C4u>(ctx, &aot_mem) && ctx.pc == 0x089D8C48u) goto L_089D8C48;
    return;
L_089D8C48:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 2u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D8C6C:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(420)));
    ctx.set_gpr(3, ctx.gpr[5] << 4u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(80)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(84)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(88)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D8CA4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(420)));
    ctx.set_gpr(2, ctx.gpr[5] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32440)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 17204u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(31, 0x089D8CECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 361u, 0x0880DE00u>(ctx, &aot_mem) && ctx.pc == 0x089D8CECu) goto L_089D8CEC;
    return;
L_089D8CEC:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 2u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
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
L_089D8D14:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(420)));
    ctx.set_gpr(2, ctx.gpr[5] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D8D38:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(420)));
    ctx.set_gpr(3, ctx.gpr[5] << 4u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, 17152u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 2u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D8D74:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(420)));
    ctx.set_gpr(2, ctx.gpr[5] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D8D98:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(420)));
    ctx.set_gpr(3, ctx.gpr[5] << 4u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 2u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D8DDC:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(420)));
    ctx.set_gpr(3, ctx.gpr[5] << 4u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(112)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(108)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(104)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D8E14:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(468)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 64u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D8E30:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(468)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D8E40:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(468)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 64u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D8E78:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(468)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D8EA4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(468)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 64u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D8EDC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(468)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D8F08:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(468)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 64u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D8F40:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(468)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D8F6C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(468)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 64u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D8FA4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(468)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(64)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D8FD0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(468)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 64u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D8FEC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(468)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D8FFC:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(588), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 2u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D9014:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(468)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(468)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(468)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(468)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(468)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 64u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D90C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(572), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(576), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(580), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(584), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(572));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089D9100u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x089D9100u) goto L_089D9100;
    return;
L_089D9100:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-28104)));
    ctx.set_gpr(3, ctx.gpr[2] << 8u);
    ctx.set_gpr(3, ctx.gpr[3] >> 8u);
    ctx.set_gpr(2, 65280u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28104), ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27440)));
    ctx.set_gpr(2, 4096u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-27440), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(572));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089D914Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x089D914Cu) goto L_089D914C;
    return;
L_089D914C:
    ctx.set_gpr(4, ctx.gpr[2] >> 24u);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-28100), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27440)));
    ctx.set_gpr(3, 8192u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27440), ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 64u);
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
L_089D9190:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(572)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(576)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(580)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(584)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D91B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(296)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089D91D8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089D91D8u) goto L_089D91D8;
    return;
L_089D91D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D93C0;
      }
      goto L_089D91E0;
    }
L_089D91E0:
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D9208;
      }
      goto L_089D91F0;
    }
L_089D91F0:
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    // nop
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D91F0;
      }
      goto L_089D9208;
    }
L_089D9208:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089D921Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x089D921Cu) goto L_089D921C;
    return;
L_089D921C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089D9234u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x089D9234u) goto L_089D9234;
    return;
L_089D9234:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089D924Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x089D924Cu) goto L_089D924C;
    return;
L_089D924C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089D9264u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x089D9264u) goto L_089D9264;
    return;
L_089D9264:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(468)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-28136)));
    ctx.set_gpr(7, ctx.gpr[2] << 8u);
    ctx.set_gpr(7, ctx.gpr[7] >> 8u);
    ctx.set_gpr(3, 65280u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(7, ctx.gpr[6] | ctx.gpr[7]);
    ctx.set_gpr(6, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-28136), ctx.gpr[7]);
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-27440)));
    ctx.set_gpr(6, 16u << 16u);
    ctx.set_gpr(8, ctx.gpr[7] | ctx.gpr[6]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-28124)));
    ctx.set_gpr(7, ctx.gpr[7] << 8u);
    ctx.set_gpr(7, ctx.gpr[7] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(7, ctx.gpr[6] | ctx.gpr[7]);
    ctx.set_gpr(6, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-28124), ctx.gpr[7]);
    ctx.set_gpr(6, 128u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] | ctx.gpr[6]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-28128)));
    ctx.set_gpr(7, ctx.gpr[9] << 8u);
    ctx.set_gpr(7, ctx.gpr[7] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(7, ctx.gpr[6] | ctx.gpr[7]);
    ctx.set_gpr(6, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-28128), ctx.gpr[7]);
    ctx.set_gpr(6, 64u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] | ctx.gpr[6]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-28132)));
    ctx.set_gpr(7, ctx.gpr[7] << 8u);
    ctx.set_gpr(7, ctx.gpr[7] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(7, ctx.gpr[6] | ctx.gpr[7]);
    ctx.set_gpr(6, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-28132), ctx.gpr[7]);
    ctx.set_gpr(6, 32u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] | ctx.gpr[6]);
    ctx.set_gpr(7, ctx.gpr[9] >> 24u);
    ctx.set_gpr(6, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(-28120), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.set_gpr(6, 256u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] | ctx.gpr[6]);
    ctx.set_gpr(6, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-27440), ctx.gpr[8]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28108)));
    ctx.set_gpr(5, (ctx.gpr[7] >> 8u) & 0x00FFFFFFu);
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[3] | ctx.gpr[5]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-28108), ctx.gpr[5]);
    ctx.set_gpr(3, 2048u << 16u);
    ctx.set_gpr(6, ctx.gpr[8] | ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-28896));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-28140)));
    ctx.set_gpr(4, ctx.gpr[4] & 7u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-28140), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 8u << 16u);
    ctx.set_gpr(4, ctx.gpr[6] | ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27440), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D9444;
      }
      goto L_089D93C0;
    }
L_089D93C0:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-28132)));
    ctx.set_gpr(4, ctx.gpr[6] << 8u);
    ctx.set_gpr(4, ctx.gpr[4] >> 8u);
    ctx.set_gpr(3, 65280u << 16u);
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-28132), ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27440)));
    ctx.set_gpr(3, 32u << 16u);
    ctx.set_gpr(5, ctx.gpr[4] | ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[6] >> 24u);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-28120), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 256u << 16u);
    ctx.set_gpr(6, ctx.gpr[5] | ctx.gpr[3]);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-28896)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-28140)));
    ctx.set_gpr(4, ctx.gpr[4] & 7u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-28140), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 8u << 16u);
    ctx.set_gpr(4, ctx.gpr[6] | ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27440), ctx.gpr[4]);
    goto L_089D9444;
L_089D9444:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D9458:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D99C8;
      }
      goto L_089D9488;
    }
L_089D9488:
    ctx.set_gpr(8, ctx.gpr[18] << 2u);
    ctx.set_gpr(3, ctx.gpr[8] + ctx.gpr[20]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(444)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D99B8;
      }
      goto L_089D949C;
    }
L_089D949C:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(2, ctx.gpr[2] << 27u);
    ctx.set_gpr(3, ctx.gpr[2] >> 30u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D94F0;
      }
      goto L_089D94BC;
    }
L_089D94BC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D94E4;
      }
      goto L_089D94C8;
    }
L_089D94C8:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D94D8;
      }
      goto L_089D94D0;
    }
L_089D94D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D9674;
      }
      goto L_089D94D8;
    }
L_089D94D8:
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(92));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D9674;
      }
      goto L_089D94E4;
    }
L_089D94E4:
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(60));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D9674;
      }
      goto L_089D94F0;
    }
L_089D94F0:
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(60));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, ctx.gpr[18] << 1u);
    ctx.set_gpr(7, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[7] << 2u);
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-28472));
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(444)));
    ctx.set_gpr(4, (ctx.gpr[4] >> 8u) & 0x00FFFFFFu);
    ctx.set_gpr(5, 65280u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(444), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(448)));
    ctx.set_gpr(4, (ctx.gpr[4] >> 8u) & 0x00FFFFFFu);
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(448), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(452)));
    ctx.set_gpr(4, (ctx.gpr[4] >> 8u) & 0x00FFFFFFu);
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(452), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[7] + static_cast<std::uint32_t>(111));
    ctx.set_gpr(2, ctx.gpr[3] & 31u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(10, ctx.gpr[4] << (ctx.gpr[2] & 31u));
    ctx.set_gpr(2, ctx.gpr[3] >> 5u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-27448));
    ctx.set_gpr(9, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(9, ctx.gpr[7] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(2, ctx.gpr[9] & 31u);
    ctx.set_gpr(10, ctx.gpr[4] << (ctx.gpr[2] & 31u));
    ctx.set_gpr(2, ctx.gpr[9] >> 5u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(9, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(113));
    ctx.set_gpr(2, ctx.gpr[7] & 31u);
    ctx.set_gpr(9, ctx.gpr[4] << (ctx.gpr[2] & 31u));
    ctx.set_gpr(2, ctx.gpr[7] >> 5u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(7, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[8]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(540)));
    ctx.set_gpr(7, (ctx.gpr[7] >> 8u) & 0x00FFFFFFu);
    ctx.set_gpr(6, ctx.gpr[6] & ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(540), ctx.gpr[6]);
    ctx.set_gpr(7, ctx.gpr[18] + static_cast<std::uint32_t>(135));
    ctx.set_gpr(6, ctx.gpr[7] & 31u);
    ctx.set_gpr(8, ctx.gpr[4] << (ctx.gpr[6] & 31u));
    ctx.set_gpr(6, ctx.gpr[7] >> 5u);
    ctx.set_gpr(6, ctx.gpr[6] << 2u);
    ctx.set_gpr(7, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(556)));
    ctx.set_gpr(6, (ctx.gpr[6] >> 8u) & 0x00FFFFFFu);
    ctx.set_gpr(5, ctx.gpr[7] & ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(556), ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(139));
    ctx.set_gpr(2, ctx.gpr[5] & 31u);
    ctx.set_gpr(4, ctx.gpr[4] << (ctx.gpr[2] & 31u));
    ctx.set_gpr(2, ctx.gpr[5] >> 5u);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_089D9674;
L_089D9674:
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D969C;
      }
      goto L_089D9684;
    }
L_089D9684:
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    // nop
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D9684;
      }
      goto L_089D969C;
    }
L_089D969C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089D96ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x089D96ACu) goto L_089D96AC;
    return;
L_089D96AC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089D96C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x089D96C0u) goto L_089D96C0;
    return;
L_089D96C0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089D96D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x089D96D4u) goto L_089D96D4;
    return;
L_089D96D4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(8, ctx.gpr[5] << 27u);
    ctx.set_gpr(4, ctx.gpr[18] << 2u);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-28472));
    ctx.set_gpr(7, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[5] << 29u);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(380)));
    ctx.set_gpr(5, (ctx.gpr[5] >> 30u) & 0x00000003u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[6]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(380), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(381)));
    ctx.set_gpr(5, (ctx.gpr[8] >> 30u) & 0x00000003u);
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[6]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(381), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(95));
    ctx.set_gpr(4, ctx.gpr[5] & 31u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(8, ctx.gpr[7] << (ctx.gpr[4] & 31u));
    ctx.set_gpr(4, ctx.gpr[5] >> 5u);
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-27448));
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(4, ctx.gpr[18] << 1u);
    ctx.set_gpr(5, ctx.gpr[4] + ctx.gpr[18]);
    ctx.set_gpr(4, ctx.gpr[5] << 2u);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(396)));
    ctx.set_gpr(9, (ctx.gpr[3] >> 8u) & 0x00FFFFFFu);
    ctx.set_gpr(3, 65280u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] & ctx.gpr[3]);
    ctx.set_gpr(8, ctx.gpr[8] | ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(396), ctx.gpr[8]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(400)));
    ctx.set_gpr(9, (ctx.gpr[9] >> 8u) & 0x00FFFFFFu);
    ctx.set_gpr(8, ctx.gpr[8] & ctx.gpr[3]);
    ctx.set_gpr(8, ctx.gpr[8] | ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(400), ctx.gpr[8]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(404)));
    ctx.set_gpr(9, (ctx.gpr[9] >> 8u) & 0x00FFFFFFu);
    ctx.set_gpr(8, ctx.gpr[8] & ctx.gpr[3]);
    ctx.set_gpr(8, ctx.gpr[8] | ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(404), ctx.gpr[8]);
    ctx.set_gpr(9, ctx.gpr[5] + static_cast<std::uint32_t>(99));
    ctx.set_gpr(8, ctx.gpr[9] & 31u);
    ctx.set_gpr(10, ctx.gpr[7] << (ctx.gpr[8] & 31u));
    ctx.set_gpr(8, ctx.gpr[9] >> 5u);
    ctx.set_gpr(8, ctx.gpr[8] << 2u);
    ctx.set_gpr(9, ctx.gpr[6] + ctx.gpr[8]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, ctx.gpr[8] | ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.set_gpr(9, ctx.gpr[5] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(8, ctx.gpr[9] & 31u);
    ctx.set_gpr(10, ctx.gpr[7] << (ctx.gpr[8] & 31u));
    ctx.set_gpr(8, ctx.gpr[9] >> 5u);
    ctx.set_gpr(8, ctx.gpr[8] << 2u);
    ctx.set_gpr(9, ctx.gpr[6] + ctx.gpr[8]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, ctx.gpr[8] | ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.set_gpr(9, ctx.gpr[5] + static_cast<std::uint32_t>(101));
    ctx.set_gpr(8, ctx.gpr[9] & 31u);
    ctx.set_gpr(10, ctx.gpr[7] << (ctx.gpr[8] & 31u));
    ctx.set_gpr(8, ctx.gpr[9] >> 5u);
    ctx.set_gpr(8, ctx.gpr[8] << 2u);
    ctx.set_gpr(9, ctx.gpr[6] + ctx.gpr[8]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, ctx.gpr[8] | ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(492)));
    ctx.set_gpr(9, (ctx.gpr[9] >> 8u) & 0x00FFFFFFu);
    ctx.set_gpr(8, ctx.gpr[8] & ctx.gpr[3]);
    ctx.set_gpr(8, ctx.gpr[8] | ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(492), ctx.gpr[8]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(496)));
    ctx.set_gpr(9, (ctx.gpr[9] >> 8u) & 0x00FFFFFFu);
    ctx.set_gpr(8, ctx.gpr[8] & ctx.gpr[3]);
    ctx.set_gpr(8, ctx.gpr[8] | ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(496), ctx.gpr[8]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(500)));
    ctx.set_gpr(9, (ctx.gpr[9] >> 8u) & 0x00FFFFFFu);
    ctx.set_gpr(8, ctx.gpr[8] & ctx.gpr[3]);
    ctx.set_gpr(8, ctx.gpr[8] | ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(500), ctx.gpr[8]);
    ctx.set_gpr(9, ctx.gpr[5] + static_cast<std::uint32_t>(123));
    ctx.set_gpr(8, ctx.gpr[9] & 31u);
    ctx.set_gpr(10, ctx.gpr[7] << (ctx.gpr[8] & 31u));
    ctx.set_gpr(8, ctx.gpr[9] >> 5u);
    ctx.set_gpr(8, ctx.gpr[8] << 2u);
    ctx.set_gpr(9, ctx.gpr[6] + ctx.gpr[8]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, ctx.gpr[8] | ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.set_gpr(9, ctx.gpr[5] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(8, ctx.gpr[9] & 31u);
    ctx.set_gpr(10, ctx.gpr[7] << (ctx.gpr[8] & 31u));
    ctx.set_gpr(8, ctx.gpr[9] >> 5u);
    ctx.set_gpr(8, ctx.gpr[8] << 2u);
    ctx.set_gpr(9, ctx.gpr[6] + ctx.gpr[8]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, ctx.gpr[8] | ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.set_gpr(9, ctx.gpr[5] + static_cast<std::uint32_t>(125));
    ctx.set_gpr(8, ctx.gpr[9] & 31u);
    ctx.set_gpr(10, ctx.gpr[7] << (ctx.gpr[8] & 31u));
    ctx.set_gpr(8, ctx.gpr[9] >> 5u);
    ctx.set_gpr(8, ctx.gpr[8] << 2u);
    ctx.set_gpr(9, ctx.gpr[6] + ctx.gpr[8]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, ctx.gpr[8] | ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(572)));
    ctx.set_gpr(9, ctx.gpr[9] << 8u);
    ctx.set_gpr(9, ctx.gpr[9] >> 8u);
    ctx.set_gpr(8, ctx.gpr[8] & ctx.gpr[3]);
    ctx.set_gpr(8, ctx.gpr[8] | ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(572), ctx.gpr[8]);
    ctx.set_gpr(9, ctx.gpr[5] + static_cast<std::uint32_t>(143));
    ctx.set_gpr(8, ctx.gpr[9] & 31u);
    ctx.set_gpr(10, ctx.gpr[7] << (ctx.gpr[8] & 31u));
    ctx.set_gpr(8, ctx.gpr[9] >> 5u);
    ctx.set_gpr(8, ctx.gpr[8] << 2u);
    ctx.set_gpr(9, ctx.gpr[6] + ctx.gpr[8]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, ctx.gpr[8] | ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(576)));
    ctx.set_gpr(9, ctx.gpr[9] << 8u);
    ctx.set_gpr(9, ctx.gpr[9] >> 8u);
    ctx.set_gpr(8, ctx.gpr[8] & ctx.gpr[3]);
    ctx.set_gpr(8, ctx.gpr[8] | ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(576), ctx.gpr[8]);
    ctx.set_gpr(9, ctx.gpr[5] + static_cast<std::uint32_t>(144));
    ctx.set_gpr(8, ctx.gpr[9] & 31u);
    ctx.set_gpr(10, ctx.gpr[7] << (ctx.gpr[8] & 31u));
    ctx.set_gpr(8, ctx.gpr[9] >> 5u);
    ctx.set_gpr(8, ctx.gpr[8] << 2u);
    ctx.set_gpr(9, ctx.gpr[6] + ctx.gpr[8]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, ctx.gpr[8] | ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(580)));
    ctx.set_gpr(8, ctx.gpr[2] << 8u);
    ctx.set_gpr(8, ctx.gpr[8] >> 8u);
    ctx.set_gpr(3, ctx.gpr[9] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(580), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(145));
    ctx.set_gpr(3, ctx.gpr[4] & 31u);
    ctx.set_gpr(5, ctx.gpr[7] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(3, ctx.gpr[4] >> 5u);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(4, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_089D99B8;
L_089D99B8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(464)));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089D99D4;
      }
      goto L_089D99C4;
    }
L_089D99C4:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_089D99C8;
L_089D99C8:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D9488;
      }
      goto L_089D99D4;
    }
L_089D99D4:
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
L_089D99F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089D9A80;
      }
      goto L_089D9A0C;
    }
L_089D9A0C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089D9A54;
      }
      goto L_089D9A18;
    }
L_089D9A18:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D9A28;
      }
      goto L_089D9A20;
    }
L_089D9A20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D9AA4;
      }
      goto L_089D9A28;
    }
L_089D9A28:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(800)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D9AA4;
      }
      goto L_089D9A3C;
    }
L_089D9A3C:
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x089D9A4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x089D9A4Cu) goto L_089D9A4C;
    return;
L_089D9A4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D9AA4;
      }
      goto L_089D9A54;
    }
L_089D9A54:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(804)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D9AA4;
      }
      goto L_089D9A68;
    }
L_089D9A68:
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x089D9A78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x089D9A78u) goto L_089D9A78;
    return;
L_089D9A78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D9AA4;
      }
      goto L_089D9A80;
    }
L_089D9A80:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(808)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D9AA4;
      }
      goto L_089D9A94;
    }
L_089D9A94:
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x089D9AA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x089D9AA4u) goto L_089D9AA4;
    return;
L_089D9AA4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D9AB4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D9AFC;
      }
      goto L_089D9AC0;
    }
L_089D9AC0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089D9AEC;
      }
      goto L_089D9ACC;
    }
L_089D9ACC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D9ADC;
      }
      goto L_089D9AD4;
    }
L_089D9AD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D9B0C;
      }
      goto L_089D9ADC;
    }
L_089D9ADC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(800)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D9B10;
      }
      goto L_089D9AEC;
    }
L_089D9AEC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(804)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D9B10;
      }
      goto L_089D9AFC;
    }
L_089D9AFC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(808)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D9B10;
      }
      goto L_089D9B0C;
    }
L_089D9B0C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089D9B10;
L_089D9B10:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D9B18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089D9D28;
      }
      goto L_089D9B3C;
    }
L_089D9B3C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089D9C0C;
      }
      goto L_089D9B48;
    }
L_089D9B48:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D9B58;
      }
      goto L_089D9B50;
    }
L_089D9B50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D9DD0;
      }
      goto L_089D9B58;
    }
L_089D9B58:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(800)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D9BC0;
      }
      goto L_089D9B68;
    }
L_089D9B68:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D9B8C;
      }
      goto L_089D9B7C;
    }
L_089D9B7C:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D9BA0;
      }
      goto L_089D9B8C;
    }
L_089D9B8C:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x089D9BA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089D9BA0u) goto L_089D9BA0;
    return;
L_089D9BA0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[17] << 6u);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[2] << 6u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x089D9BC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x089D9BC0u) goto L_089D9BC0;
    return;
L_089D9BC0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 512u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-28224)));
    ctx.set_gpr(4, 0u & 15u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-28224), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27444)));
    ctx.set_gpr(3, 16384u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27444), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D9DD0;
      }
      goto L_089D9C0C;
    }
L_089D9C0C:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(804)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D9C74;
      }
      goto L_089D9C1C;
    }
L_089D9C1C:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D9C40;
      }
      goto L_089D9C30;
    }
L_089D9C30:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D9C54;
      }
      goto L_089D9C40;
    }
L_089D9C40:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x089D9C54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089D9C54u) goto L_089D9C54;
    return;
L_089D9C54:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[17] << 6u);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[2] << 6u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x089D9C74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x089D9C74u) goto L_089D9C74;
    return;
L_089D9C74:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 256u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-28240)));
    ctx.set_gpr(4, 0u & 15u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-28240), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27444)));
    ctx.set_gpr(3, 1024u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27444), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(732)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089D9CE0;
      }
      goto L_089D9CC8;
    }
L_089D9CC8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089D9CE0;
      }
      goto L_089D9CD4;
    }
L_089D9CD4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089D9DD0;
      }
      goto L_089D9CE0;
    }
L_089D9CE0:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-28216)));
    ctx.set_gpr(4, 0u & 15u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-28216), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27440)));
    ctx.set_gpr(4, ctx.gpr[3] | 1u);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27440), ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 512u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D9DD0;
      }
      goto L_089D9D28;
    }
L_089D9D28:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(808)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D9D90;
      }
      goto L_089D9D38;
    }
L_089D9D38:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D9D5C;
      }
      goto L_089D9D4C;
    }
L_089D9D4C:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D9D70;
      }
      goto L_089D9D5C;
    }
L_089D9D5C:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x089D9D70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089D9D70u) goto L_089D9D70;
    return;
L_089D9D70:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[17] << 6u);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[2] << 6u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x089D9D90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x089D9D90u) goto L_089D9D90;
    return;
L_089D9D90:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 512u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-28216)));
    ctx.set_gpr(4, 0u & 15u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-28216), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27440)));
    ctx.set_gpr(4, ctx.gpr[3] | 1u);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27440), ctx.gpr[4]);
    goto L_089D9DD0;
L_089D9DD0:
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
L_089D9DEC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089D9F74;
      }
      goto L_089D9E08;
    }
L_089D9E08:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089D9E98;
      }
      goto L_089D9E14;
    }
L_089D9E14:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D9E24;
      }
      goto L_089D9E1C;
    }
L_089D9E1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D9FDC;
      }
      goto L_089D9E24;
    }
L_089D9E24:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(800)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] << 6u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.set_gpr(31, 0x089D9E4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x089D9E4Cu) goto L_089D9E4C;
    return;
L_089D9E4C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 512u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-28224)));
    ctx.set_gpr(4, 0u & 15u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-28224), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27444)));
    ctx.set_gpr(3, 16384u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27444), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D9FDC;
      }
      goto L_089D9E98;
    }
L_089D9E98:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(804)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] << 6u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x089D9EC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x089D9EC0u) goto L_089D9EC0;
    return;
L_089D9EC0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 256u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-28240)));
    ctx.set_gpr(4, 0u & 15u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-28240), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27444)));
    ctx.set_gpr(3, 1024u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27444), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(732)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089D9F2C;
      }
      goto L_089D9F14;
    }
L_089D9F14:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089D9F2C;
      }
      goto L_089D9F20;
    }
L_089D9F20:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089D9FDC;
      }
      goto L_089D9F2C;
    }
L_089D9F2C:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-28216)));
    ctx.set_gpr(4, 0u & 15u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-28216), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27440)));
    ctx.set_gpr(4, ctx.gpr[3] | 1u);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27440), ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 512u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D9FDC;
      }
      goto L_089D9F74;
    }
L_089D9F74:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(808)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] << 6u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089D9F9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x089D9F9Cu) goto L_089D9F9C;
    return;
L_089D9F9C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 512u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-28216)));
    ctx.set_gpr(4, 0u & 15u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-28216), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27440)));
    ctx.set_gpr(4, ctx.gpr[3] | 1u);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27440), ctx.gpr[4]);
    goto L_089D9FDC;
L_089D9FDC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(208));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D9FF0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089DA134;
      }
      goto L_089DA014;
    }
L_089DA014:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089DA080;
      }
      goto L_089DA020;
    }
L_089DA020:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DA030;
      }
      goto L_089DA028;
    }
L_089DA028:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DA180;
      }
      goto L_089DA030;
    }
L_089DA030:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(800)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(2, ctx.gpr[2] | 512u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[2]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-28224)));
    ctx.set_gpr(3, 0u & 15u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(-28224), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27444)));
    ctx.set_gpr(2, 16384u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-27444), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DA188;
      }
      goto L_089DA080;
    }
L_089DA080:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(804)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(2, ctx.gpr[2] | 256u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[2]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-28240)));
    ctx.set_gpr(3, 0u & 15u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(-28240), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27444)));
    ctx.set_gpr(2, 1024u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-27444), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(732)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089DA0EC;
      }
      goto L_089DA0D4;
    }
L_089DA0D4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089DA0EC;
      }
      goto L_089DA0E0;
    }
L_089DA0E0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089DA188;
      }
      goto L_089DA0EC;
    }
L_089DA0EC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-28216)));
    ctx.set_gpr(3, 0u & 15u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(-28216), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27440)));
    ctx.set_gpr(3, ctx.gpr[2] | 1u);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-27440), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(2, ctx.gpr[2] | 512u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DA188;
      }
      goto L_089DA134;
    }
L_089DA134:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(808)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(2, ctx.gpr[2] | 512u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[2]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-28216)));
    ctx.set_gpr(3, 0u & 15u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(-28216), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27440)));
    ctx.set_gpr(3, ctx.gpr[2] | 1u);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-27440), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DA188;
      }
      goto L_089DA180;
    }
L_089DA180:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DA20C;
      }
      goto L_089DA188;
    }
L_089DA188:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DA1EC;
      }
      goto L_089DA194;
    }
L_089DA194:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DA1B8;
      }
      goto L_089DA1A4;
    }
L_089DA1A4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DA1CC;
      }
      goto L_089DA1B8;
    }
L_089DA1B8:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x089DA1CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089DA1CCu) goto L_089DA1CC;
    return;
L_089DA1CC:
    ctx.set_gpr(3, ctx.gpr[18] << 6u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089DA1E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x089DA1E4u) goto L_089DA1E4;
    return;
L_089DA1E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DA20C;
      }
      goto L_089DA1EC;
    }
L_089DA1EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 6u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089DA20Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x089DA20Cu) goto L_089DA20C;
    return;
L_089DA20C:
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
L_089DA228:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089DA380;
      }
      goto L_089DA244;
    }
L_089DA244:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089DA2BC;
      }
      goto L_089DA250;
    }
L_089DA250:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DA260;
      }
      goto L_089DA258;
    }
L_089DA258:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DA3D0;
      }
      goto L_089DA260;
    }
L_089DA260:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(800)));
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x089DA270u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 357u, 0x08A7A070u>(ctx, &aot_mem) && ctx.pc == 0x089DA270u) goto L_089DA270;
    return;
L_089DA270:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 512u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-28224)));
    ctx.set_gpr(4, 0u & 15u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-28224), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27444)));
    ctx.set_gpr(3, 16384u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27444), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DA3D0;
      }
      goto L_089DA2BC;
    }
L_089DA2BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(804)));
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x089DA2CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 357u, 0x08A7A070u>(ctx, &aot_mem) && ctx.pc == 0x089DA2CCu) goto L_089DA2CC;
    return;
L_089DA2CC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 256u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-28240)));
    ctx.set_gpr(4, 0u & 15u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-28240), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27444)));
    ctx.set_gpr(3, 1024u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27444), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(732)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089DA338;
      }
      goto L_089DA320;
    }
L_089DA320:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089DA338;
      }
      goto L_089DA32C;
    }
L_089DA32C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089DA3D0;
      }
      goto L_089DA338;
    }
L_089DA338:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-28216)));
    ctx.set_gpr(4, 0u & 15u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-28216), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27440)));
    ctx.set_gpr(4, ctx.gpr[3] | 1u);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27440), ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 512u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DA3D0;
      }
      goto L_089DA380;
    }
L_089DA380:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(808)));
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x089DA390u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 357u, 0x08A7A070u>(ctx, &aot_mem) && ctx.pc == 0x089DA390u) goto L_089DA390;
    return;
L_089DA390:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 512u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-28216)));
    ctx.set_gpr(4, 0u & 15u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-28216), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27440)));
    ctx.set_gpr(4, ctx.gpr[3] | 1u);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27440), ctx.gpr[4]);
    goto L_089DA3D0;
L_089DA3D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DA3E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089DA53C;
      }
      goto L_089DA400;
    }
L_089DA400:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089DA478;
      }
      goto L_089DA40C;
    }
L_089DA40C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DA41C;
      }
      goto L_089DA414;
    }
L_089DA414:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DA58C;
      }
      goto L_089DA41C;
    }
L_089DA41C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(800)));
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x089DA42Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 372u, 0x08A7A198u>(ctx, &aot_mem) && ctx.pc == 0x089DA42Cu) goto L_089DA42C;
    return;
L_089DA42C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 512u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-28224)));
    ctx.set_gpr(4, 0u & 15u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-28224), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27444)));
    ctx.set_gpr(3, 16384u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27444), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DA58C;
      }
      goto L_089DA478;
    }
L_089DA478:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(804)));
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x089DA488u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 372u, 0x08A7A198u>(ctx, &aot_mem) && ctx.pc == 0x089DA488u) goto L_089DA488;
    return;
L_089DA488:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 256u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-28240)));
    ctx.set_gpr(4, 0u & 15u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-28240), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27444)));
    ctx.set_gpr(3, 1024u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27444), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(732)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089DA4F4;
      }
      goto L_089DA4DC;
    }
L_089DA4DC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089DA4F4;
      }
      goto L_089DA4E8;
    }
L_089DA4E8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089DA58C;
      }
      goto L_089DA4F4;
    }
L_089DA4F4:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-28216)));
    ctx.set_gpr(4, 0u & 15u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-28216), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27440)));
    ctx.set_gpr(4, ctx.gpr[3] | 1u);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27440), ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 512u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DA58C;
      }
      goto L_089DA53C;
    }
L_089DA53C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(808)));
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x089DA54Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 372u, 0x08A7A198u>(ctx, &aot_mem) && ctx.pc == 0x089DA54Cu) goto L_089DA54C;
    return;
L_089DA54C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 512u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-28216)));
    ctx.set_gpr(4, 0u & 15u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-28216), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27440)));
    ctx.set_gpr(4, ctx.gpr[3] | 1u);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27440), ctx.gpr[4]);
    goto L_089DA58C;
L_089DA58C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DA5A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089DA6F8;
      }
      goto L_089DA5BC;
    }
L_089DA5BC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089DA634;
      }
      goto L_089DA5C8;
    }
L_089DA5C8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DA5D8;
      }
      goto L_089DA5D0;
    }
L_089DA5D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DA748;
      }
      goto L_089DA5D8;
    }
L_089DA5D8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(800)));
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x089DA5E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 387u, 0x08A7A2C4u>(ctx, &aot_mem) && ctx.pc == 0x089DA5E8u) goto L_089DA5E8;
    return;
L_089DA5E8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 512u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-28224)));
    ctx.set_gpr(4, 0u & 15u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-28224), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27444)));
    ctx.set_gpr(3, 16384u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27444), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DA748;
      }
      goto L_089DA634;
    }
L_089DA634:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(804)));
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x089DA644u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 387u, 0x08A7A2C4u>(ctx, &aot_mem) && ctx.pc == 0x089DA644u) goto L_089DA644;
    return;
L_089DA644:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 256u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-28240)));
    ctx.set_gpr(4, 0u & 15u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-28240), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27444)));
    ctx.set_gpr(3, 1024u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27444), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(732)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089DA6B0;
      }
      goto L_089DA698;
    }
L_089DA698:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089DA6B0;
      }
      goto L_089DA6A4;
    }
L_089DA6A4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089DA748;
      }
      goto L_089DA6B0;
    }
L_089DA6B0:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-28216)));
    ctx.set_gpr(4, 0u & 15u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-28216), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27440)));
    ctx.set_gpr(4, ctx.gpr[3] | 1u);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27440), ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 512u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DA748;
      }
      goto L_089DA6F8;
    }
L_089DA6F8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(808)));
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x089DA708u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 387u, 0x08A7A2C4u>(ctx, &aot_mem) && ctx.pc == 0x089DA708u) goto L_089DA708;
    return;
L_089DA708:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 512u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-28216)));
    ctx.set_gpr(4, 0u & 15u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-28216), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27440)));
    ctx.set_gpr(4, ctx.gpr[3] | 1u);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27440), ctx.gpr[4]);
    goto L_089DA748;
L_089DA748:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DA75C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089DA8B4;
      }
      goto L_089DA778;
    }
L_089DA778:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089DA7F0;
      }
      goto L_089DA784;
    }
L_089DA784:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DA794;
      }
      goto L_089DA78C;
    }
L_089DA78C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DA904;
      }
      goto L_089DA794;
    }
L_089DA794:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(800)));
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x089DA7A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 389u, 0x08A7A2F8u>(ctx, &aot_mem) && ctx.pc == 0x089DA7A4u) goto L_089DA7A4;
    return;
L_089DA7A4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 512u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-28224)));
    ctx.set_gpr(4, 0u & 15u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-28224), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27444)));
    ctx.set_gpr(3, 16384u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27444), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DA904;
      }
      goto L_089DA7F0;
    }
L_089DA7F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(804)));
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x089DA800u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 389u, 0x08A7A2F8u>(ctx, &aot_mem) && ctx.pc == 0x089DA800u) goto L_089DA800;
    return;
L_089DA800:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 256u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-28240)));
    ctx.set_gpr(4, 0u & 15u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-28240), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27444)));
    ctx.set_gpr(3, 1024u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27444), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(732)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089DA86C;
      }
      goto L_089DA854;
    }
L_089DA854:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089DA86C;
      }
      goto L_089DA860;
    }
L_089DA860:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089DA904;
      }
      goto L_089DA86C;
    }
L_089DA86C:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-28216)));
    ctx.set_gpr(4, 0u & 15u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-28216), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27440)));
    ctx.set_gpr(4, ctx.gpr[3] | 1u);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27440), ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 512u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DA904;
      }
      goto L_089DA8B4;
    }
L_089DA8B4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(808)));
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x089DA8C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 389u, 0x08A7A2F8u>(ctx, &aot_mem) && ctx.pc == 0x089DA8C4u) goto L_089DA8C4;
    return;
L_089DA8C4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 512u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-28216)));
    ctx.set_gpr(4, 0u & 15u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-28216), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27440)));
    ctx.set_gpr(4, ctx.gpr[3] | 1u);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27440), ctx.gpr[4]);
    goto L_089DA904;
L_089DA904:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DA918:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089DA9A0;
      }
      goto L_089DA92C;
    }
L_089DA92C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089DA974;
      }
      goto L_089DA938;
    }
L_089DA938:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DA948;
      }
      goto L_089DA940;
    }
L_089DA940:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DA9C4;
      }
      goto L_089DA948;
    }
L_089DA948:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(800)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 6u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x089DA96Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x089DA96Cu) goto L_089DA96C;
    return;
L_089DA96C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DA9C4;
      }
      goto L_089DA974;
    }
L_089DA974:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(804)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 6u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x089DA998u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x089DA998u) goto L_089DA998;
    return;
L_089DA998:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DA9C4;
      }
      goto L_089DA9A0;
    }
L_089DA9A0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(808)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 6u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x089DA9C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x089DA9C4u) goto L_089DA9C4;
    return;
L_089DA9C4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DA9D4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089DAA3C;
      }
      goto L_089DA9E0;
    }
L_089DA9E0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089DAA1C;
      }
      goto L_089DA9EC;
    }
L_089DA9EC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DA9FC;
      }
      goto L_089DA9F4;
    }
L_089DA9F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DAA5C;
      }
      goto L_089DA9FC;
    }
L_089DA9FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(800)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 6u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DAA60;
      }
      goto L_089DAA1C;
    }
L_089DAA1C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(804)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 6u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DAA60;
      }
      goto L_089DAA3C;
    }
L_089DAA3C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(808)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 6u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DAA60;
      }
      goto L_089DAA5C;
    }
L_089DAA5C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089DAA60;
L_089DAA60:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DAA68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(14));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089DAA9C;
      }
      goto L_089DAA94;
    }
L_089DAA94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DAB70;
      }
      goto L_089DAA9C;
    }
L_089DAA9C:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(812)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DAB04;
      }
      goto L_089DAAAC;
    }
L_089DAAAC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DAAD0;
      }
      goto L_089DAABC;
    }
L_089DAABC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DAAE4;
      }
      goto L_089DAAD0;
    }
L_089DAAD0:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x089DAAE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089DAAE4u) goto L_089DAAE4;
    return;
L_089DAAE4:
    ctx.set_gpr(3, ctx.gpr[16] << 6u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089DAAFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x089DAAFCu) goto L_089DAAFC;
    return;
L_089DAAFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DAB24;
      }
      goto L_089DAB04;
    }
L_089DAB04:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 6u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089DAB24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x089DAB24u) goto L_089DAB24;
    return;
L_089DAB24:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 512u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-28232)));
    ctx.set_gpr(4, 0u & 15u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-28232), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27444)));
    ctx.set_gpr(3, 4096u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27444), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DAB80;
      }
      goto L_089DAB70;
    }
L_089DAB70:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(828)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089DAB80u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DAB80u) goto L_089DAB80;
    return;
L_089DAB80:
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
L_089DABA0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x089DABC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 194u, 0x089BD234u>(ctx, &aot_mem) && ctx.pc == 0x089DABC8u) goto L_089DABC8;
    return;
L_089DABC8:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(384)));
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32508)));
    ctx.set_gpr(31, 0x089DABF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 603u, 0x089FAF0Cu>(ctx, &aot_mem) && ctx.pc == 0x089DABF0u) goto L_089DABF0;
    return;
L_089DABF0:
    ctx.set_gpr(2, 49024u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32508)));
    ctx.set_gpr(31, 0x089DAC14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 603u, 0x089FAF0Cu>(ctx, &aot_mem) && ctx.pc == 0x089DAC14u) goto L_089DAC14;
    return;
L_089DAC14:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), 0u);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32508)));
    ctx.set_gpr(31, 0x089DAC38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 603u, 0x089FAF0Cu>(ctx, &aot_mem) && ctx.pc == 0x089DAC38u) goto L_089DAC38;
    return;
L_089DAC38:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.set_gpr(2, 49024u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32508)));
    ctx.set_gpr(31, 0x089DAC5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 603u, 0x089FAF0Cu>(ctx, &aot_mem) && ctx.pc == 0x089DAC5Cu) goto L_089DAC5C;
    return;
L_089DAC5C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32508)));
    ctx.set_gpr(31, 0x089DAC80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 603u, 0x089FAF0Cu>(ctx, &aot_mem) && ctx.pc == 0x089DAC80u) goto L_089DAC80;
    return;
L_089DAC80:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.set_gpr(2, 49024u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32508)));
    ctx.set_gpr(31, 0x089DACA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 603u, 0x089FAF0Cu>(ctx, &aot_mem) && ctx.pc == 0x089DACA4u) goto L_089DACA4;
    return;
L_089DACA4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(852)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089DACBCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DACBCu) goto L_089DACBC;
    return;
L_089DACBC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(10, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(772)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089DACECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DACECu) goto L_089DACEC;
    return;
L_089DACEC:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32452)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32448)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = ctx.fpr[2] / ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.fpr[21] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    ctx.set_gpr(31, 0x089DAD18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 621u, 0x0880EEC0u>(ctx, &aot_mem) && ctx.pc == 0x089DAD18u) goto L_089DAD18;
    return;
L_089DAD18:
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(12, ctx.fpr_bits(22));
    ctx.set_gpr(31, 0x089DAD30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 621u, 0x0880EEC0u>(ctx, &aot_mem) && ctx.pc == 0x089DAD30u) goto L_089DAD30;
    return;
L_089DAD30:
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089DAD5C;
      }
      goto L_089DAD40;
    }
L_089DAD40:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(12, ctx.fpr_bits(22));
    ctx.set_gpr(31, 0x089DAD54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 621u, 0x0880EEC0u>(ctx, &aot_mem) && ctx.pc == 0x089DAD54u) goto L_089DAD54;
    return;
L_089DAD54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DAD70;
      }
      goto L_089DAD5C;
    }
L_089DAD5C:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    ctx.set_gpr(31, 0x089DAD70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 621u, 0x0880EEC0u>(ctx, &aot_mem) && ctx.pc == 0x089DAD70u) goto L_089DAD70;
    return;
L_089DAD70:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(388)));
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[1];
    ctx.set_gpr(31, 0x089DAD80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 431u, 0x0880E21Cu>(ctx, &aot_mem) && ctx.pc == 0x089DAD80u) goto L_089DAD80;
    return;
L_089DAD80:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[4] = ctx.fpr[1] / ctx.fpr[0];
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[3] = std::sqrt(ctx.fpr[0]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(384)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[2] = ctx.fpr[4] / ctx.fpr[3];
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), 0u);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[3];
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(384)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_fpr_bits(0, ctx.fpr_bits(4) ^ 0x80000000u);
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[3];
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(384)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(384)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(384)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(384)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(384)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(384)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(384)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, 0x089DAE40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 769u, 0x08947830u>(ctx, &aot_mem) && ctx.pc == 0x089DAE40u) goto L_089DAE40;
    return;
L_089DAE40:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(384)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x089DAE58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 769u, 0x08947830u>(ctx, &aot_mem) && ctx.pc == 0x089DAE58u) goto L_089DAE58;
    return;
L_089DAE58:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DAE7C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x089DAE94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 255u, 0x089BD800u>(ctx, &aot_mem) && ctx.pc == 0x089DAE94u) goto L_089DAE94;
    return;
L_089DAE94:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(14));
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-28120));
    ctx.set_gpr(31, 0x089DAEACu);
    // nop
    goto L_089DAA68;
L_089DAEAC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-28324)));
    ctx.set_gpr(2, 0u & 1u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-28324), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27444)));
    ctx.set_gpr(6, ctx.gpr[3] | 32u);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-28320)));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-28320), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(6, ctx.gpr[6] | 64u);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-28316)));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-28316), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(6, ctx.gpr[6] | 128u);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-28312)));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-28312), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(3, ctx.gpr[6] | 256u);
    ctx.set_gpr(5, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27444), ctx.gpr[3]);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-28148)));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[2]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(-28148), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27440)));
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[5] | ctx.gpr[2]);
    ctx.set_gpr(5, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-27440), ctx.gpr[2]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(268)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(264)));
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-28256)));
    ctx.set_gpr(6, ctx.gpr[6] & 127u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-128));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[7]);
    ctx.set_gpr(6, ctx.gpr[5] | ctx.gpr[6]);
    ctx.set_gpr(5, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-28256), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-28255)));
    ctx.set_gpr(6, ctx.gpr[8] & 127u);
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[7]);
    ctx.set_gpr(6, ctx.gpr[5] | ctx.gpr[6]);
    ctx.set_gpr(5, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-28255), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(5, 64u << 16u);
    ctx.set_gpr(7, ctx.gpr[3] | ctx.gpr[5]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-28252)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[3] | ctx.gpr[5]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-28252), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(3, 128u << 16u);
    ctx.set_gpr(5, ctx.gpr[7] | ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27444), ctx.gpr[5]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-28096)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[5]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-28096), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 16384u << 16u);
    ctx.set_gpr(3, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-27440), ctx.gpr[3]);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x089DB02Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 542u, 0x089E340Cu>(ctx, &aot_mem) && ctx.pc == 0x089DB02Cu) goto L_089DB02C;
    return;
L_089DB02C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x089DB048u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 541u, 0x089E336Cu>(ctx, &aot_mem) && ctx.pc == 0x089DB048u) goto L_089DB048;
    return;
L_089DB048:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 9783u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] | 16465u);
    ctx.set_gpr(2, 14118u << 16u);
    ctx.set_gpr(7, ctx.gpr[2] | 20800u);
    ctx.set_gpr(31, 0x089DB064u);
    // nop
    goto L_089DBFB8;
L_089DB064:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(856), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(880)));
    ctx.set_gpr(31, 0x089DB078u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 540u, 0x089E3308u>(ctx, &aot_mem) && ctx.pc == 0x089DB078u) goto L_089DB078;
    return;
L_089DB078:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(904)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(908)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(556)));
    ctx.set_gpr(8, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-27128));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089DB09Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 154u, 0x089CCE54u>(ctx, &aot_mem) && ctx.pc == 0x089DB09Cu) goto L_089DB09C;
    return;
L_089DB09C:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(900)));
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-27404));
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-27364));
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-27128));
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089DB0C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 183u, 0x089CD1DCu>(ctx, &aot_mem) && ctx.pc == 0x089DB0C4u) goto L_089DB0C4;
    return;
L_089DB0C4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-27404));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(256)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089DB0E8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DB0E8u) goto L_089DB0E8;
    return;
L_089DB0E8:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(380), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(452)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089DB118u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DB118u) goto L_089DB118;
    return;
L_089DB118:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DB12C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089DB14Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x089DB14Cu) goto L_089DB14C;
    return;
L_089DB14C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(416), ctx.gpr[2]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-28132)));
    ctx.set_gpr(4, ctx.gpr[2] << 8u);
    ctx.set_gpr(4, ctx.gpr[4] >> 8u);
    ctx.set_gpr(3, 65280u << 16u);
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-28132), ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27440)));
    ctx.set_gpr(3, 32u << 16u);
    ctx.set_gpr(5, ctx.gpr[4] | ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] >> 24u);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-28120), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 256u << 16u);
    ctx.set_gpr(4, ctx.gpr[5] | ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27440), ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 64u);
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
L_089DB1C0:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(416), ctx.gpr[5]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-28132)));
    ctx.set_gpr(6, ctx.gpr[5] << 8u);
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(3, 65280u << 16u);
    ctx.set_gpr(3, ctx.gpr[7] & ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[3] | ctx.gpr[6]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-28132), ctx.gpr[6]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27440)));
    ctx.set_gpr(3, 32u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[5] >> 24u);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-28120), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(3, 256u << 16u);
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27440), ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 64u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DB228:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(416)));
    ctx.set_gpr(31, 0x089DB248u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 308u, 0x08A037E4u>(ctx, &aot_mem) && ctx.pc == 0x089DB248u) goto L_089DB248;
    return;
L_089DB248:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DB258:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(416)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DB264:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DB26C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DB27C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32167)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DB28C;
      }
      goto L_089DB288;
    }
L_089DB288:
    ctx.set_gpr(5, 0u + 0u);
    goto L_089DB28C;
L_089DB28C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 1024u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-28340)));
    ctx.set_gpr(4, ctx.gpr[5] & 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-28340), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27444)));
    ctx.set_gpr(4, ctx.gpr[3] | 2u);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27444), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DB2D4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-28340)));
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
L_089DB2F8:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(792), ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DB310:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(792)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DB31C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(796), ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DB334:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(796)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DB340:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(792), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(796), ctx.gpr[6]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DB35C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(832), ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DB374:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32161)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DB384;
      }
      goto L_089DB380;
    }
L_089DB380:
    ctx.set_gpr(5, 0u + 0u);
    goto L_089DB384;
L_089DB384:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 1024u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-28328)));
    ctx.set_gpr(4, ctx.gpr[5] & 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-28328), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27444)));
    ctx.set_gpr(4, ctx.gpr[3] | 16u);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27444), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DB3CC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-28328)));
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
L_089DB3F0:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(604), ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 128u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DB408:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(604)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DB414:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(612), ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 128u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DB42C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(612)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DB438:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(616), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(620), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(624), ctx.gpr[6]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 128u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DB458:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DB468;
      }
      goto L_089DB460;
    }
L_089DB460:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(616)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_089DB468;
L_089DB468:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DB478;
      }
      goto L_089DB470;
    }
L_089DB470:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(620)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_089DB478;
L_089DB478:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DB488;
      }
      goto L_089DB480;
    }
L_089DB480:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(624)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_089DB488;
L_089DB488:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DB490:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(608), ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 128u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DB4A8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(608)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DB4B4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(512), ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 16832u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089DB4F0;
      }
      goto L_089DB4D8;
    }
L_089DB4D8:
    ctx.set_gpr(2, 16888u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) || ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089DB500;
      }
      goto L_089DB4F0;
    }
L_089DB4F0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089DB508;
      }
      goto L_089DB500;
    }
L_089DB500:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(512), ctx.gpr[2]);
    goto L_089DB508;
L_089DB508:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DB514:
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(512)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(60));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[3]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(3, ctx.lo);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(512)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DB554:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089DB574u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x089DB574u) goto L_089DB574;
    return;
L_089DB574:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(628), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089DB584u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 93u, 0x089C893Cu>(ctx, &aot_mem) && ctx.pc == 0x089DB584u) goto L_089DB584;
    return;
L_089DB584:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DB598:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(628), ctx.gpr[5]);
    ctx.set_gpr(31, 0x089DB5ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 93u, 0x089C893Cu>(ctx, &aot_mem) && ctx.pc == 0x089DB5ACu) goto L_089DB5AC;
    return;
L_089DB5AC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DB5BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(628)));
    ctx.set_gpr(31, 0x089DB5DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 308u, 0x08A037E4u>(ctx, &aot_mem) && ctx.pc == 0x089DB5DCu) goto L_089DB5DC;
    return;
L_089DB5DC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DB5EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(628)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DB5F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(636), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(31, 0x089DB60Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 93u, 0x089C893Cu>(ctx, &aot_mem) && ctx.pc == 0x089DB60Cu) goto L_089DB60C;
    return;
L_089DB60C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DB61C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(636)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DB628:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(632), ctx.gpr[5]);
    ctx.set_gpr(31, 0x089DB63Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 93u, 0x089C893Cu>(ctx, &aot_mem) && ctx.pc == 0x089DB63Cu) goto L_089DB63C;
    return;
L_089DB63C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DB64C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(632)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DB658:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(396)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(400)));
    ctx.set_gpr(3, ctx.gpr[5] << 3u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DBB28;
      }
      goto L_089DB67C;
    }
L_089DB67C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DB918;
      }
      goto L_089DB688;
    }
L_089DB688:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(660)));
    ctx.set_gpr(1, ctx.gpr[11] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DB6A8;
      }
      goto L_089DB69C;
    }
L_089DB69C:
    ctx.set_gpr(3, ctx.gpr[11] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DB6AC;
      }
      goto L_089DB6A8;
    }
L_089DB6A8:
    ctx.set_gpr(3, ctx.gpr[6] + 0u);
    goto L_089DB6AC;
L_089DB6AC:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DB6D8;
      }
      goto L_089DB6B4;
    }
L_089DB6B4:
    ctx.set_gpr(1, ctx.gpr[11] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DB6CC;
      }
      goto L_089DB6C0;
    }
L_089DB6C0:
    ctx.set_gpr(7, ctx.gpr[11] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DB6D0;
      }
      goto L_089DB6CC;
    }
L_089DB6CC:
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    goto L_089DB6D0;
L_089DB6D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DB6DC;
      }
      goto L_089DB6D8;
    }
L_089DB6D8:
    ctx.set_gpr(7, 0u + 0u);
    goto L_089DB6DC;
L_089DB6DC:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(664)));
    ctx.set_gpr(1, ctx.gpr[10] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DB6FC;
      }
      goto L_089DB6F0;
    }
L_089DB6F0:
    ctx.set_gpr(3, ctx.gpr[10] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DB700;
      }
      goto L_089DB6FC;
    }
L_089DB6FC:
    ctx.set_gpr(3, ctx.gpr[8] + 0u);
    goto L_089DB700;
L_089DB700:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DB72C;
      }
      goto L_089DB708;
    }
L_089DB708:
    ctx.set_gpr(1, ctx.gpr[10] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DB720;
      }
      goto L_089DB714;
    }
L_089DB714:
    ctx.set_gpr(9, ctx.gpr[10] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DB724;
      }
      goto L_089DB720;
    }
L_089DB720:
    ctx.set_gpr(9, ctx.gpr[8] + 0u);
    goto L_089DB724;
L_089DB724:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DB730;
      }
      goto L_089DB72C;
    }
L_089DB72C:
    ctx.set_gpr(9, 0u + 0u);
    goto L_089DB730;
L_089DB730:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(668)));
    ctx.set_gpr(1, ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DB74C;
      }
      goto L_089DB740;
    }
L_089DB740:
    ctx.set_gpr(3, ctx.gpr[5] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DB750;
      }
      goto L_089DB74C;
    }
L_089DB74C:
    ctx.set_gpr(3, ctx.gpr[6] + 0u);
    goto L_089DB750;
L_089DB750:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(1, ctx.gpr[3] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DB784;
      }
      goto L_089DB760;
    }
L_089DB760:
    ctx.set_gpr(1, ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DB774;
      }
      goto L_089DB76C;
    }
L_089DB76C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DB778;
      }
      goto L_089DB774;
    }
L_089DB774:
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    goto L_089DB778;
L_089DB778:
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DB788;
      }
      goto L_089DB784;
    }
L_089DB784:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    goto L_089DB788;
L_089DB788:
    ctx.set_gpr(5, ctx.gpr[11] + ctx.gpr[3]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(672)));
    ctx.set_gpr(1, ctx.gpr[6] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DB7A8;
      }
      goto L_089DB79C;
    }
L_089DB79C:
    ctx.set_gpr(3, ctx.gpr[6] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DB7AC;
      }
      goto L_089DB7A8;
    }
L_089DB7A8:
    ctx.set_gpr(3, ctx.gpr[8] + 0u);
    goto L_089DB7AC;
L_089DB7AC:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(1, ctx.gpr[3] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DB7E0;
      }
      goto L_089DB7BC;
    }
L_089DB7BC:
    ctx.set_gpr(1, ctx.gpr[6] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DB7D0;
      }
      goto L_089DB7C8;
    }
L_089DB7C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DB7D4;
      }
      goto L_089DB7D0;
    }
L_089DB7D0:
    ctx.set_gpr(6, ctx.gpr[8] + 0u);
    goto L_089DB7D4;
L_089DB7D4:
    ctx.set_gpr(3, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DB7E4;
      }
      goto L_089DB7E0;
    }
L_089DB7E0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    goto L_089DB7E4;
L_089DB7E4:
    ctx.set_gpr(3, ctx.gpr[10] + ctx.gpr[3]);
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(-27624)));
    ctx.set_gpr(8, ctx.gpr[7] & 1023u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-1024));
    ctx.set_gpr(6, ctx.gpr[6] & ctx.gpr[7]);
    ctx.set_gpr(8, ctx.gpr[6] | ctx.gpr[8]);
    ctx.set_gpr(6, 2246u << 16u);
    rt.memory().aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(-27624), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-27624)));
    ctx.set_gpr(6, ctx.gpr[9] & 1023u);
    ctx.set_gpr(9, ctx.gpr[6] << 10u);
    ctx.set_gpr(6, 65520u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] | 1023u);
    ctx.set_gpr(8, ctx.gpr[8] & ctx.gpr[6]);
    ctx.set_gpr(9, ctx.gpr[8] | ctx.gpr[9]);
    ctx.set_gpr(8, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-27624), ctx.gpr[9]);
    ctx.set_gpr(8, 2246u << 16u);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-27424)));
    ctx.set_gpr(8, 16u << 16u);
    ctx.set_gpr(10, ctx.gpr[9] | ctx.gpr[8]);
    ctx.set_gpr(8, 2246u << 16u);
    ctx.set_gpr(8, rt.memory().aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(-27620)));
    ctx.set_gpr(5, ctx.gpr[5] & 1023u);
    ctx.set_gpr(8, ctx.gpr[8] & ctx.gpr[7]);
    ctx.set_gpr(9, ctx.gpr[8] | ctx.gpr[5]);
    ctx.set_gpr(8, 2246u << 16u);
    rt.memory().aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(-27620), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(8, 2246u << 16u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-27620)));
    ctx.set_gpr(3, ctx.gpr[3] & 1023u);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(8, ctx.gpr[8] & ctx.gpr[6]);
    ctx.set_gpr(9, ctx.gpr[8] | ctx.gpr[3]);
    ctx.set_gpr(8, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-27620), ctx.gpr[9]);
    ctx.set_gpr(11, 32u << 16u);
    ctx.set_gpr(9, ctx.gpr[10] | ctx.gpr[11]);
    ctx.set_gpr(8, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-27424), ctx.gpr[9]);
    ctx.set_gpr(8, 2246u << 16u);
    ctx.set_gpr(8, rt.memory().aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(-28388)));
    ctx.set_gpr(10, 0u & 1023u);
    ctx.set_gpr(8, ctx.gpr[8] & ctx.gpr[7]);
    ctx.set_gpr(9, ctx.gpr[8] | ctx.gpr[10]);
    ctx.set_gpr(8, 2246u << 16u);
    rt.memory().aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(-28388), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(8, 2246u << 16u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-28388)));
    ctx.set_gpr(9, ctx.gpr[10] << 10u);
    ctx.set_gpr(8, ctx.gpr[8] & ctx.gpr[6]);
    ctx.set_gpr(9, ctx.gpr[8] | ctx.gpr[9]);
    ctx.set_gpr(8, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-28388), ctx.gpr[9]);
    ctx.set_gpr(8, 2246u << 16u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-27448)));
    ctx.set_gpr(9, ctx.gpr[8] | ctx.gpr[11]);
    ctx.set_gpr(8, 2246u << 16u);
    ctx.set_gpr(8, rt.memory().aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(-28384)));
    ctx.set_gpr(7, ctx.gpr[8] & ctx.gpr[7]);
    ctx.set_gpr(7, ctx.gpr[7] | ctx.gpr[5]);
    ctx.set_gpr(5, 2246u << 16u);
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-28384), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28384)));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[6]);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-28384), ctx.gpr[5]);
    ctx.set_gpr(3, 64u << 16u);
    ctx.set_gpr(5, ctx.gpr[9] | ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27448), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DBB1C;
      }
      goto L_089DB918;
    }
L_089DB918:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(704)));
    ctx.set_gpr(1, ctx.gpr[11] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DB938;
      }
      goto L_089DB92C;
    }
L_089DB92C:
    ctx.set_gpr(3, ctx.gpr[11] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DB93C;
      }
      goto L_089DB938;
    }
L_089DB938:
    ctx.set_gpr(3, ctx.gpr[6] + 0u);
    goto L_089DB93C;
L_089DB93C:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DB968;
      }
      goto L_089DB944;
    }
L_089DB944:
    ctx.set_gpr(1, ctx.gpr[11] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DB95C;
      }
      goto L_089DB950;
    }
L_089DB950:
    ctx.set_gpr(7, ctx.gpr[11] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DB960;
      }
      goto L_089DB95C;
    }
L_089DB95C:
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    goto L_089DB960;
L_089DB960:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DB96C;
      }
      goto L_089DB968;
    }
L_089DB968:
    ctx.set_gpr(7, 0u + 0u);
    goto L_089DB96C;
L_089DB96C:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(708)));
    ctx.set_gpr(1, ctx.gpr[10] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DB98C;
      }
      goto L_089DB980;
    }
L_089DB980:
    ctx.set_gpr(3, ctx.gpr[10] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DB990;
      }
      goto L_089DB98C;
    }
L_089DB98C:
    ctx.set_gpr(3, ctx.gpr[8] + 0u);
    goto L_089DB990;
L_089DB990:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DB9BC;
      }
      goto L_089DB998;
    }
L_089DB998:
    ctx.set_gpr(1, ctx.gpr[10] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DB9B0;
      }
      goto L_089DB9A4;
    }
L_089DB9A4:
    ctx.set_gpr(9, ctx.gpr[10] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DB9B4;
      }
      goto L_089DB9B0;
    }
L_089DB9B0:
    ctx.set_gpr(9, ctx.gpr[8] + 0u);
    goto L_089DB9B4;
L_089DB9B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DB9C0;
      }
      goto L_089DB9BC;
    }
L_089DB9BC:
    ctx.set_gpr(9, 0u + 0u);
    goto L_089DB9C0;
L_089DB9C0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(712)));
    ctx.set_gpr(1, ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DB9DC;
      }
      goto L_089DB9D0;
    }
L_089DB9D0:
    ctx.set_gpr(3, ctx.gpr[5] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DB9E0;
      }
      goto L_089DB9DC;
    }
L_089DB9DC:
    ctx.set_gpr(3, ctx.gpr[6] + 0u);
    goto L_089DB9E0;
L_089DB9E0:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(1, ctx.gpr[3] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DBA14;
      }
      goto L_089DB9F0;
    }
L_089DB9F0:
    ctx.set_gpr(1, ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DBA04;
      }
      goto L_089DB9FC;
    }
L_089DB9FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DBA08;
      }
      goto L_089DBA04;
    }
L_089DBA04:
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    goto L_089DBA08;
L_089DBA08:
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DBA18;
      }
      goto L_089DBA14;
    }
L_089DBA14:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    goto L_089DBA18;
L_089DBA18:
    ctx.set_gpr(5, ctx.gpr[11] + ctx.gpr[3]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(716)));
    ctx.set_gpr(1, ctx.gpr[6] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DBA38;
      }
      goto L_089DBA2C;
    }
L_089DBA2C:
    ctx.set_gpr(3, ctx.gpr[6] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DBA3C;
      }
      goto L_089DBA38;
    }
L_089DBA38:
    ctx.set_gpr(3, ctx.gpr[8] + 0u);
    goto L_089DBA3C;
L_089DBA3C:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(1, ctx.gpr[3] < static_cast<std::uint32_t>(2) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DBA70;
      }
      goto L_089DBA4C;
    }
L_089DBA4C:
    ctx.set_gpr(1, ctx.gpr[6] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DBA60;
      }
      goto L_089DBA58;
    }
L_089DBA58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DBA64;
      }
      goto L_089DBA60;
    }
L_089DBA60:
    ctx.set_gpr(6, ctx.gpr[8] + 0u);
    goto L_089DBA64;
L_089DBA64:
    ctx.set_gpr(3, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DBA74;
      }
      goto L_089DBA70;
    }
L_089DBA70:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    goto L_089DBA74;
L_089DBA74:
    ctx.set_gpr(3, ctx.gpr[10] + ctx.gpr[3]);
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(-27624)));
    ctx.set_gpr(7, ctx.gpr[7] & 1023u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(-1024));
    ctx.set_gpr(6, ctx.gpr[6] & ctx.gpr[10]);
    ctx.set_gpr(7, ctx.gpr[6] | ctx.gpr[7]);
    ctx.set_gpr(6, 2246u << 16u);
    rt.memory().aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(-27624), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-27624)));
    ctx.set_gpr(6, ctx.gpr[9] & 1023u);
    ctx.set_gpr(7, ctx.gpr[6] << 10u);
    ctx.set_gpr(6, 65520u << 16u);
    ctx.set_gpr(9, ctx.gpr[6] | 1023u);
    ctx.set_gpr(6, ctx.gpr[8] & ctx.gpr[9]);
    ctx.set_gpr(7, ctx.gpr[6] | ctx.gpr[7]);
    ctx.set_gpr(6, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-27624), ctx.gpr[7]);
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-27424)));
    ctx.set_gpr(6, 16u << 16u);
    ctx.set_gpr(8, ctx.gpr[7] | ctx.gpr[6]);
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(-27620)));
    ctx.set_gpr(6, ctx.gpr[5] & 1023u);
    ctx.set_gpr(5, ctx.gpr[7] & ctx.gpr[10]);
    ctx.set_gpr(6, ctx.gpr[5] | ctx.gpr[6]);
    ctx.set_gpr(5, 2246u << 16u);
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-27620), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-27620)));
    ctx.set_gpr(3, ctx.gpr[3] & 1023u);
    ctx.set_gpr(5, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[9]);
    ctx.set_gpr(5, ctx.gpr[3] | ctx.gpr[5]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27620), ctx.gpr[5]);
    ctx.set_gpr(3, 32u << 16u);
    ctx.set_gpr(5, ctx.gpr[8] | ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27424), ctx.gpr[5]);
    goto L_089DBB1C;
L_089DBB1C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 1024u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    goto L_089DBB28;
L_089DBB28:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DBB30:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(700), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(660)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(664)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(668)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(672)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(692)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(696)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(764)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089DBB64u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DBB64u) goto L_089DBB64;
    return;
L_089DBB64:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DBB74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(660), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(664), ctx.gpr[6]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[7]) < 480 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DBBA0;
      }
      goto L_089DBB98;
    }
L_089DBB98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DBBA4;
      }
      goto L_089DBBA0;
    }
L_089DBBA0:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(480));
    goto L_089DBBA4;
L_089DBBA4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(668), ctx.gpr[7]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[8]) < 272 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DBBBC;
      }
      goto L_089DBBB4;
    }
L_089DBBB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DBBC0;
      }
      goto L_089DBBBC;
    }
L_089DBBBC:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(272));
    goto L_089DBBC0;
L_089DBBC0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(672), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(692), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(696), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(668)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089DBBE8;
      }
      goto L_089DBBD8;
    }
L_089DBBD8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DBC00;
      }
      goto L_089DBBE8;
    }
L_089DBBE8:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_089DBC00;
L_089DBC00:
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(5, 0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(672)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089DBC28;
      }
      goto L_089DBC18;
    }
L_089DBC18:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DBC40;
      }
      goto L_089DBC28;
    }
L_089DBC28:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_089DBC40;
L_089DBC40:
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(4, 0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[5]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28208)));
    ctx.set_gpr(3, (ctx.gpr[3] >> 8u) & 0x00FFFFFFu);
    ctx.set_gpr(7, 65280u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[7]);
    ctx.set_gpr(3, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28208), ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27440)));
    ctx.set_gpr(4, ctx.gpr[2] | 4u);
    ctx.set_fpr_bits(0, ctx.fpr_bits(4) ^ 0x80000000u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28204)));
    ctx.set_gpr(3, (ctx.gpr[3] >> 8u) & 0x00FFFFFFu);
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[7]);
    ctx.set_gpr(3, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28204), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[4] | 8u);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-27440), ctx.gpr[3]);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-12592)));
    ctx.set_gpr(2, 2229u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-12588)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(400)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 0 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DBD0C;
      }
      goto L_089DBCDC;
    }
L_089DBCDC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(396)));
    ctx.set_gpr(2, ctx.gpr[3] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089DBD0C;
L_089DBD0C:
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[3] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17792u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[0] = ctx.fpr[2] - ctx.fpr[0];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[0] = ctx.fpr[5] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28196)));
    ctx.set_gpr(4, (ctx.gpr[4] >> 8u) & 0x00FFFFFFu);
    ctx.set_gpr(2, 65280u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-28196), ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27440)));
    ctx.set_gpr(5, ctx.gpr[3] | 32u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[0] = ctx.fpr[2] - ctx.fpr[0];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[0] = ctx.fpr[4] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-28192)));
    ctx.set_gpr(4, (ctx.gpr[4] >> 8u) & 0x00FFFFFFu);
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-28192), ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[5] | 64u);
    ctx.set_gpr(3, 0u | 65535u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[12] - ctx.fpr[13];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-28200)));
    ctx.set_gpr(4, (ctx.gpr[4] >> 8u) & 0x00FFFFFFu);
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-28200), ctx.gpr[4]);
    ctx.set_gpr(6, ctx.gpr[5] | 16u);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27440), ctx.gpr[6]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(700)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32444)));
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = ctx.fpr[13] + ctx.fpr[12];
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-28188)));
    ctx.set_gpr(3, (ctx.gpr[5] >> 8u) & 0x00FFFFFFu);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28188), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[6] | 128u);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-27440), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(2, ctx.gpr[2] | 1024u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(872), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DBE60;
      }
      goto L_089DBE54;
    }
L_089DBE54:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089DBE60u);
    // nop
    goto L_089DB658;
L_089DBE60:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089DBE6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 93u, 0x089C893Cu>(ctx, &aot_mem) && ctx.pc == 0x089DBE6Cu) goto L_089DBE6C;
    return;
L_089DBE6C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DBE80:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(672)));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(668)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(660)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(664)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DBEA8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(672)));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(668)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(660)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(664)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(692)));
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(696)));
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DBEE0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(704), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(708), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(712), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(716), ctx.gpr[8]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089DBF10;
      }
      goto L_089DBF08;
    }
L_089DBF08:
    ctx.set_gpr(31, 0x089DBF10u);
    // nop
    goto L_089DB658;
L_089DBF10:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DBF20:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(704)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(708)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(712)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(716)));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DBF48:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(128), ctx.gpr[5]);
    ctx.set_gpr(31, 0x089DBF5Cu);
    // nop
    goto L_089DB658;
L_089DBF5C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DBF6C:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(344), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 1024u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(-28344)));
    ctx.set_gpr(4, ctx.gpr[5] & 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-28344), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27444)));
    ctx.set_gpr(4, ctx.gpr[3] | 1u);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27444), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DBFB8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(864), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(868), ctx.gpr[7]);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(-27568), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27420)));
    ctx.set_gpr(6, ctx.gpr[3] | 4u);
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(-27564), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.set_gpr(6, ctx.gpr[6] | 8u);
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.pc = 0x089DC000u; return;
}

void recomp_unit_0117(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0117_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_117(Runtime &runtime) {
    runtime.register_generated_unit(117u, 0x089D8000u, 16384u, &recomp_unit_0117, &recomp_unit_0117_entry);
    runtime.register_function(0x089D8000u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D800Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8018u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8024u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8028u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D803Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8044u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8048u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8050u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8058u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8060u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D806Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8078u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8080u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D808Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8090u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8098u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D80ACu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D80B4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D80C0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D80CCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D80D8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D80E8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D80F4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D80FCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8108u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8110u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8120u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D812Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8138u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8144u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8150u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D815Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8168u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8174u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D817Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8188u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8190u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D81A0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D81A8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D81BCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D81D0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D81E0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D81E8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D81FCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8210u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8220u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8228u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D822Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8230u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8250u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8258u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8264u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8294u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D82A0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D82A4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D82F0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8314u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8344u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8368u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8390u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D83A0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D83ACu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D83C8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D83D4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D83E0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D83FCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8408u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D841Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8464u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D84C4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D84D0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D84F4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8514u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D852Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8550u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8588u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8598u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D85ACu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D85C0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D85C8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D85DCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D85E8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8614u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8618u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8638u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8650u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8688u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8690u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D86C0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D86D8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8744u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8748u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8754u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D875Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8764u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D876Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D879Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D87B4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8820u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8824u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8830u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8838u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8864u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8890u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D88DCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D891Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8968u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D89A8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D89F8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8A0Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8A20u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8A40u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8A5Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8A70u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8AB0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8B10u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8B34u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8B48u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8B70u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8BA8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8BECu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8C34u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8C48u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8C6Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8CA4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8CECu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8D14u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8D38u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8D74u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8D98u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8DDCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8E14u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8E30u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8E40u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8E78u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8EA4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8EDCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8F08u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8F40u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8F6Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8FA4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8FD0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8FECu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D8FFCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9014u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D90C0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9100u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D914Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9190u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D91B8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D91D8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D91E0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D91F0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9208u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D921Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9234u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D924Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9264u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D93C0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9444u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9458u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9488u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D949Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D94BCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D94C8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D94D0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D94D8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D94E4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D94F0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9674u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9684u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D969Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D96ACu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D96C0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D96D4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D99B8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D99C4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D99C8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D99D4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D99F8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9A0Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9A18u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9A20u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9A28u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9A3Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9A4Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9A54u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9A68u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9A78u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9A80u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9A94u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9AA4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9AB4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9AC0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9ACCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9AD4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9ADCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9AECu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9AFCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9B0Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9B10u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9B18u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9B3Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9B48u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9B50u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9B58u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9B68u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9B7Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9B8Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9BA0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9BC0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9C0Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9C1Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9C30u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9C40u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9C54u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9C74u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9CC8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9CD4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9CE0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9D28u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9D38u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9D4Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9D5Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9D70u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9D90u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9DD0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9DECu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9E08u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9E14u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9E1Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9E24u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9E4Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9E98u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9EC0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9F14u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9F20u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9F2Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9F74u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9F9Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9FDCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089D9FF0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA014u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA020u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA028u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA030u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA080u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA0D4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA0E0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA0ECu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA134u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA180u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA188u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA194u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA1A4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA1B8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA1CCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA1E4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA1ECu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA20Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA228u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA244u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA250u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA258u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA260u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA270u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA2BCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA2CCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA320u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA32Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA338u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA380u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA390u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA3D0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA3E4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA400u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA40Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA414u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA41Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA42Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA478u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA488u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA4DCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA4E8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA4F4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA53Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA54Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA58Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA5A0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA5BCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA5C8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA5D0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA5D8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA5E8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA634u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA644u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA698u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA6A4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA6B0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA6F8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA708u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA748u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA75Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA778u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA784u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA78Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA794u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA7A4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA7F0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA800u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA854u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA860u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA86Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA8B4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA8C4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA904u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA918u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA92Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA938u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA940u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA948u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA96Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA974u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA998u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA9A0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA9C4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA9D4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA9E0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA9ECu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA9F4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DA9FCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAA1Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAA3Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAA5Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAA60u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAA68u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAA94u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAA9Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAAACu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAABCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAAD0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAAE4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAAFCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAB04u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAB24u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAB70u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAB80u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DABA0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DABC8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DABF0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAC14u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAC38u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAC5Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAC80u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DACA4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DACBCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DACECu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAD18u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAD30u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAD40u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAD54u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAD5Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAD70u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAD80u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAE40u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAE58u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAE7Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAE94u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DAEACu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB02Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB048u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB064u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB078u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB09Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB0C4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB0E8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB118u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB12Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB14Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB1C0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB228u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB248u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB258u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB264u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB26Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB27Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB288u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB28Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB2D4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB2F8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB310u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB31Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB334u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB340u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB35Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB374u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB380u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB384u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB3CCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB3F0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB408u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB414u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB42Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB438u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB458u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB460u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB468u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB470u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB478u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB480u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB488u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB490u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB4A8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB4B4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB4D8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB4F0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB500u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB508u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB514u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB554u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB574u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB584u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB598u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB5ACu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB5BCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB5DCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB5ECu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB5F8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB60Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB61Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB628u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB63Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB64Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB658u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB67Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB688u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB69Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB6A8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB6ACu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB6B4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB6C0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB6CCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB6D0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB6D8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB6DCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB6F0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB6FCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB700u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB708u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB714u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB720u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB724u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB72Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB730u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB740u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB74Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB750u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB760u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB76Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB774u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB778u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB784u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB788u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB79Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB7A8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB7ACu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB7BCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB7C8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB7D0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB7D4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB7E0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB7E4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB918u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB92Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB938u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB93Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB944u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB950u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB95Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB960u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB968u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB96Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB980u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB98Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB990u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB998u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB9A4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB9B0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB9B4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB9BCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB9C0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB9D0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB9DCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB9E0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB9F0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DB9FCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBA04u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBA08u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBA14u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBA18u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBA2Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBA38u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBA3Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBA4Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBA58u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBA60u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBA64u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBA70u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBA74u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBB1Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBB28u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBB30u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBB64u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBB74u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBB98u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBBA0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBBA4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBBB4u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBBBCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBBC0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBBD8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBBE8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBC00u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBC18u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBC28u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBC40u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBCDCu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBD0Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBE54u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBE60u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBE6Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBE80u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBEA8u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBEE0u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBF08u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBF10u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBF20u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBF48u, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBF5Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBF6Cu, &recomp_unit_0117, "recomp_unit_0117");
    runtime.register_function(0x089DBFB8u, &recomp_unit_0117, "recomp_unit_0117");
}
} // namespace psprecomp
