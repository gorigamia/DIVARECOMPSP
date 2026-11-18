#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0035[3623] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0,
    5, 6, 7, 0, 0, 0, 0, 0, 0, 8, 0, 0, 9, 0, 10, 0, 11, 0, 12, 0, 13, 0, 0, 14, 0, 0, 15, 0, 16, 0, 17, 0,
    18, 19, 0, 20, 0, 0, 21, 0, 0, 0, 0, 22, 0, 23, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 27, 0, 28, 0, 29,
    0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
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
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 33, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 37,
    0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 40, 0, 0, 0, 0, 0, 0, 41, 42, 0, 0, 0, 0, 43, 0, 44, 0, 0, 0, 0, 0,
    0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0,
    0, 0, 0, 0, 0, 48, 0, 49, 0, 50, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 53, 0, 0, 0, 54, 0, 0, 55, 0, 0, 0, 0,
    56, 0, 57, 0, 0, 0, 58, 0, 59, 0, 0, 0, 60, 0, 61, 0, 0, 0, 62, 0, 63, 0, 0, 0, 64, 0, 65, 0, 0, 0, 66, 0,
    67, 0, 0, 0, 0, 68, 0, 69, 0, 70, 0, 71, 72, 0, 0, 73, 0, 0, 74, 0, 0, 0, 75, 0, 76, 0, 77, 0, 0, 0, 0, 78,
    0, 79, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 86,
    87, 0, 0, 88, 0, 89, 0, 90, 0, 91, 0, 92, 0, 93, 0, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0,
    0, 97, 98, 0, 0, 0, 99, 0, 0, 100, 0, 101, 0, 102, 0, 103, 0, 0, 0, 0, 0, 104, 0, 105, 0, 0, 106, 0, 107, 0, 0, 0,
    108, 0, 0, 0, 109, 0, 0, 0, 0, 0, 110, 111, 0, 0, 0, 112, 0, 0, 113, 0, 114, 0, 115, 0, 116, 0, 0, 0, 0, 0, 117, 0,
    118, 0, 0, 119, 0, 120, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 124, 0, 0, 0, 125, 0, 0, 126, 0, 127, 0, 128,
    0, 129, 0, 0, 0, 0, 0, 130, 0, 131, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0,
    0, 135, 0, 0, 136, 137, 138, 0, 139, 0, 0, 140, 141, 142, 0, 143, 0, 0, 144, 145, 146, 0, 147, 0, 0, 148, 149, 150, 0, 151, 0, 0,
    152, 153, 154, 0, 155, 0, 0, 156, 157, 158, 0, 159, 0, 0, 160, 161, 162, 0, 163, 0, 0, 164, 165, 166, 0, 167, 0, 0, 0, 0, 168, 0,
    169, 0, 170, 0, 171, 0, 172, 0, 173, 0, 174, 0, 175, 0, 176, 0, 177, 0, 178, 0, 179, 0, 180, 0, 181, 0, 182, 0, 183, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 187, 188, 0, 0, 0, 189, 0, 0, 190, 0, 191, 0, 192, 0, 193, 0,
    0, 0, 0, 0, 194, 0, 195, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 198, 0, 0, 0, 199, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200,
    0, 0, 0, 201, 0, 0, 0, 0, 0, 202, 203, 0, 0, 204, 0, 205, 0, 206, 0, 0, 0, 0, 0, 207, 0, 208, 0, 0, 209, 0, 210, 0,
    0, 0, 0, 0, 211, 0, 0, 212, 213, 0, 214, 215, 0, 216, 0, 0, 0, 217, 218, 0, 0, 219, 0, 220, 0, 221, 0, 222, 0, 223, 0, 0,
    224, 0, 225, 0, 226, 0, 227, 0, 0, 228, 0, 229, 0, 230, 0, 231, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 234, 0,
    235, 0, 236, 0, 237, 0, 0, 238, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 241, 242, 0, 0, 243, 0, 0, 0, 244, 0, 245, 0, 0, 246,
    0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 250, 0, 251, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 254, 0, 0,
    255, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 260, 0,
    0, 261, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 264, 0, 0, 0, 0, 0, 265, 0, 266, 0, 0, 267, 0, 268, 0, 269, 0, 0, 0, 0,
    0, 0, 270, 0, 271, 0, 272, 0, 0, 0, 273, 0, 274, 0, 0, 0, 275, 0, 276, 0, 277, 0, 278, 0, 0, 279, 0, 0, 0, 0, 0, 0,
    280, 0, 281, 0, 282, 0, 0, 0, 283, 0, 284, 0, 0, 0, 285, 0, 286, 0, 287, 0, 288, 0, 0, 289, 0, 0, 0, 0, 0, 0, 290, 0,
    291, 0, 292, 0, 0, 0, 293, 0, 294, 0, 0, 0, 295, 0, 296, 0, 297, 0, 298, 0, 0, 299, 0, 0, 0, 0, 0, 0, 300, 0, 301, 0,
    302, 0, 0, 0, 303, 0, 304, 0, 0, 0, 305, 0, 306, 0, 307, 0, 308, 0, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 310, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0,
    0, 316, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 325, 0,
    0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 328, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 332, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 335, 0, 0, 336, 0, 337, 0, 338, 0, 0, 339, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 343, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 345, 0, 0,
    0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 348, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0,
    0, 0, 359, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 362, 0,
    0, 0, 0, 0, 0, 363, 0, 364, 365, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0,
    0, 0, 0, 369, 0, 370, 371, 0, 0, 372, 0, 0, 0, 0, 0, 373, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 375, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0,
    0, 380, 0, 381, 0, 382, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0,
    0, 385, 0, 0, 0, 0, 0, 386, 0, 387, 0, 0, 388, 0, 389, 390, 0, 391, 0, 392, 0, 393, 0, 394, 0, 0, 0, 0, 0, 0, 395, 0,
    396, 0, 0, 0, 0, 0, 397,
};
void recomp_unit_0035_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08890000u;
        entry_id = (entry_delta < 14492u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0035[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08890000;
    case 2u: goto L_088902B0;
    case 3u: goto L_088902E4;
    case 4u: goto L_088902F0;
    case 5u: goto L_08890300;
    case 6u: goto L_08890304;
    case 7u: goto L_08890308;
    case 8u: goto L_08890324;
    case 9u: goto L_08890330;
    case 10u: goto L_08890338;
    case 11u: goto L_08890340;
    case 12u: goto L_08890348;
    case 13u: goto L_08890350;
    case 14u: goto L_0889035C;
    case 15u: goto L_08890368;
    case 16u: goto L_08890370;
    case 17u: goto L_08890378;
    case 18u: goto L_08890380;
    case 19u: goto L_08890384;
    case 20u: goto L_0889038C;
    case 21u: goto L_08890398;
    case 22u: goto L_088903AC;
    case 23u: goto L_088903B4;
    case 24u: goto L_088903BC;
    case 25u: goto L_088903CC;
    case 26u: goto L_088903E4;
    case 27u: goto L_088903EC;
    case 28u: goto L_088903F4;
    case 29u: goto L_088903FC;
    case 30u: goto L_08890408;
    case 31u: goto L_08890418;
    case 32u: goto L_08890FB4;
    case 33u: goto L_08890FC4;
    case 34u: goto L_08890FCC;
    case 35u: goto L_08890FE4;
    case 36u: goto L_08890FF4;
    case 37u: goto L_08890FFC;
    case 38u: goto L_08891004;
    case 39u: goto L_08891024;
    case 40u: goto L_0889102C;
    case 41u: goto L_08891048;
    case 42u: goto L_0889104C;
    case 43u: goto L_08891060;
    case 44u: goto L_08891068;
    case 45u: goto L_08891084;
    case 46u: goto L_0889108C;
    case 47u: goto L_08891474;
    case 48u: goto L_08891494;
    case 49u: goto L_0889149C;
    case 50u: goto L_088914A4;
    case 51u: goto L_088914B0;
    case 52u: goto L_088914C8;
    case 53u: goto L_088914D0;
    case 54u: goto L_088914E0;
    case 55u: goto L_088914EC;
    case 56u: goto L_08891500;
    case 57u: goto L_08891508;
    case 58u: goto L_08891518;
    case 59u: goto L_08891520;
    case 60u: goto L_08891530;
    case 61u: goto L_08891538;
    case 62u: goto L_08891548;
    case 63u: goto L_08891550;
    case 64u: goto L_08891560;
    case 65u: goto L_08891568;
    case 66u: goto L_08891578;
    case 67u: goto L_08891580;
    case 68u: goto L_08891594;
    case 69u: goto L_0889159C;
    case 70u: goto L_088915A4;
    case 71u: goto L_088915AC;
    case 72u: goto L_088915B0;
    case 73u: goto L_088915BC;
    case 74u: goto L_088915C8;
    case 75u: goto L_088915D8;
    case 76u: goto L_088915E0;
    case 77u: goto L_088915E8;
    case 78u: goto L_088915FC;
    case 79u: goto L_08891604;
    case 80u: goto L_0889160C;
    case 81u: goto L_0889161C;
    case 82u: goto L_0889163C;
    case 83u: goto L_08891650;
    case 84u: goto L_08891660;
    case 85u: goto L_08891674;
    case 86u: goto L_0889167C;
    case 87u: goto L_08891680;
    case 88u: goto L_0889168C;
    case 89u: goto L_08891694;
    case 90u: goto L_0889169C;
    case 91u: goto L_088916A4;
    case 92u: goto L_088916AC;
    case 93u: goto L_088916B4;
    case 94u: goto L_088916CC;
    case 95u: goto L_088916DC;
    case 96u: goto L_088916EC;
    case 97u: goto L_08891704;
    case 98u: goto L_08891708;
    case 99u: goto L_08891718;
    case 100u: goto L_08891724;
    case 101u: goto L_0889172C;
    case 102u: goto L_08891734;
    case 103u: goto L_0889173C;
    case 104u: goto L_08891754;
    case 105u: goto L_0889175C;
    case 106u: goto L_08891768;
    case 107u: goto L_08891770;
    case 108u: goto L_08891780;
    case 109u: goto L_08891790;
    case 110u: goto L_088917A8;
    case 111u: goto L_088917AC;
    case 112u: goto L_088917BC;
    case 113u: goto L_088917C8;
    case 114u: goto L_088917D0;
    case 115u: goto L_088917D8;
    case 116u: goto L_088917E0;
    case 117u: goto L_088917F8;
    case 118u: goto L_08891800;
    case 119u: goto L_0889180C;
    case 120u: goto L_08891814;
    case 121u: goto L_08891824;
    case 122u: goto L_08891834;
    case 123u: goto L_0889184C;
    case 124u: goto L_08891850;
    case 125u: goto L_08891860;
    case 126u: goto L_0889186C;
    case 127u: goto L_08891874;
    case 128u: goto L_0889187C;
    case 129u: goto L_08891884;
    case 130u: goto L_0889189C;
    case 131u: goto L_088918A4;
    case 132u: goto L_088918B0;
    case 133u: goto L_088919DC;
    case 134u: goto L_088919F8;
    case 135u: goto L_08891A04;
    case 136u: goto L_08891A10;
    case 137u: goto L_08891A14;
    case 138u: goto L_08891A18;
    case 139u: goto L_08891A20;
    case 140u: goto L_08891A2C;
    case 141u: goto L_08891A30;
    case 142u: goto L_08891A34;
    case 143u: goto L_08891A3C;
    case 144u: goto L_08891A48;
    case 145u: goto L_08891A4C;
    case 146u: goto L_08891A50;
    case 147u: goto L_08891A58;
    case 148u: goto L_08891A64;
    case 149u: goto L_08891A68;
    case 150u: goto L_08891A6C;
    case 151u: goto L_08891A74;
    case 152u: goto L_08891A80;
    case 153u: goto L_08891A84;
    case 154u: goto L_08891A88;
    case 155u: goto L_08891A90;
    case 156u: goto L_08891A9C;
    case 157u: goto L_08891AA0;
    case 158u: goto L_08891AA4;
    case 159u: goto L_08891AAC;
    case 160u: goto L_08891AB8;
    case 161u: goto L_08891ABC;
    case 162u: goto L_08891AC0;
    case 163u: goto L_08891AC8;
    case 164u: goto L_08891AD4;
    case 165u: goto L_08891AD8;
    case 166u: goto L_08891ADC;
    case 167u: goto L_08891AE4;
    case 168u: goto L_08891AF8;
    case 169u: goto L_08891B00;
    case 170u: goto L_08891B08;
    case 171u: goto L_08891B10;
    case 172u: goto L_08891B18;
    case 173u: goto L_08891B20;
    case 174u: goto L_08891B28;
    case 175u: goto L_08891B30;
    case 176u: goto L_08891B38;
    case 177u: goto L_08891B40;
    case 178u: goto L_08891B48;
    case 179u: goto L_08891B50;
    case 180u: goto L_08891B58;
    case 181u: goto L_08891B60;
    case 182u: goto L_08891B68;
    case 183u: goto L_08891B70;
    case 184u: goto L_08891C84;
    case 185u: goto L_08891C98;
    case 186u: goto L_08891CA8;
    case 187u: goto L_08891CC0;
    case 188u: goto L_08891CC4;
    case 189u: goto L_08891CD4;
    case 190u: goto L_08891CE0;
    case 191u: goto L_08891CE8;
    case 192u: goto L_08891CF0;
    case 193u: goto L_08891CF8;
    case 194u: goto L_08891D10;
    case 195u: goto L_08891D18;
    case 196u: goto L_08891D24;
    case 197u: goto L_088921DC;
    case 198u: goto L_088921E4;
    case 199u: goto L_088921F4;
    case 200u: goto L_088923FC;
    case 201u: goto L_0889240C;
    case 202u: goto L_08892424;
    case 203u: goto L_08892428;
    case 204u: goto L_08892434;
    case 205u: goto L_0889243C;
    case 206u: goto L_08892444;
    case 207u: goto L_0889245C;
    case 208u: goto L_08892464;
    case 209u: goto L_08892470;
    case 210u: goto L_08892478;
    case 211u: goto L_08892490;
    case 212u: goto L_0889249C;
    case 213u: goto L_088924A0;
    case 214u: goto L_088924A8;
    case 215u: goto L_088924AC;
    case 216u: goto L_088924B4;
    case 217u: goto L_088924C4;
    case 218u: goto L_088924C8;
    case 219u: goto L_088924D4;
    case 220u: goto L_088924DC;
    case 221u: goto L_088924E4;
    case 222u: goto L_088924EC;
    case 223u: goto L_088924F4;
    case 224u: goto L_08892500;
    case 225u: goto L_08892508;
    case 226u: goto L_08892510;
    case 227u: goto L_08892518;
    case 228u: goto L_08892524;
    case 229u: goto L_0889252C;
    case 230u: goto L_08892534;
    case 231u: goto L_0889253C;
    case 232u: goto L_08892548;
    case 233u: goto L_0889256C;
    case 234u: goto L_08892578;
    case 235u: goto L_08892580;
    case 236u: goto L_08892588;
    case 237u: goto L_08892590;
    case 238u: goto L_0889259C;
    case 239u: goto L_088925A8;
    case 240u: goto L_088925BC;
    case 241u: goto L_088925C8;
    case 242u: goto L_088925CC;
    case 243u: goto L_088925D8;
    case 244u: goto L_088925E8;
    case 245u: goto L_088925F0;
    case 246u: goto L_088925FC;
    case 247u: goto L_08892608;
    case 248u: goto L_08892618;
    case 249u: goto L_08892628;
    case 250u: goto L_08892634;
    case 251u: goto L_0889263C;
    case 252u: goto L_08892658;
    case 253u: goto L_08892668;
    case 254u: goto L_08892674;
    case 255u: goto L_08892680;
    case 256u: goto L_08892688;
    case 257u: goto L_0889269C;
    case 258u: goto L_088926B0;
    case 259u: goto L_088926D8;
    case 260u: goto L_088926F8;
    case 261u: goto L_08892704;
    case 262u: goto L_08892710;
    case 263u: goto L_08892728;
    case 264u: goto L_08892730;
    case 265u: goto L_08892748;
    case 266u: goto L_08892750;
    case 267u: goto L_0889275C;
    case 268u: goto L_08892764;
    case 269u: goto L_0889276C;
    case 270u: goto L_08892788;
    case 271u: goto L_08892790;
    case 272u: goto L_08892798;
    case 273u: goto L_088927A8;
    case 274u: goto L_088927B0;
    case 275u: goto L_088927C0;
    case 276u: goto L_088927C8;
    case 277u: goto L_088927D0;
    case 278u: goto L_088927D8;
    case 279u: goto L_088927E4;
    case 280u: goto L_08892800;
    case 281u: goto L_08892808;
    case 282u: goto L_08892810;
    case 283u: goto L_08892820;
    case 284u: goto L_08892828;
    case 285u: goto L_08892838;
    case 286u: goto L_08892840;
    case 287u: goto L_08892848;
    case 288u: goto L_08892850;
    case 289u: goto L_0889285C;
    case 290u: goto L_08892878;
    case 291u: goto L_08892880;
    case 292u: goto L_08892888;
    case 293u: goto L_08892898;
    case 294u: goto L_088928A0;
    case 295u: goto L_088928B0;
    case 296u: goto L_088928B8;
    case 297u: goto L_088928C0;
    case 298u: goto L_088928C8;
    case 299u: goto L_088928D4;
    case 300u: goto L_088928F0;
    case 301u: goto L_088928F8;
    case 302u: goto L_08892900;
    case 303u: goto L_08892910;
    case 304u: goto L_08892918;
    case 305u: goto L_08892928;
    case 306u: goto L_08892930;
    case 307u: goto L_08892938;
    case 308u: goto L_08892940;
    case 309u: goto L_0889294C;
    case 310u: goto L_08892988;
    case 311u: goto L_08892994;
    case 312u: goto L_088929A8;
    case 313u: goto L_088929B4;
    case 314u: goto L_088929C8;
    case 315u: goto L_088929E8;
    case 316u: goto L_08892A04;
    case 317u: goto L_08892A18;
    case 318u: goto L_08892A30;
    case 319u: goto L_08892A44;
    case 320u: goto L_08892A64;
    case 321u: goto L_08892A98;
    case 322u: goto L_08892AB0;
    case 323u: goto L_08892AC8;
    case 324u: goto L_08892AE0;
    case 325u: goto L_08892AF8;
    case 326u: goto L_08892B10;
    case 327u: goto L_08892B28;
    case 328u: goto L_08892B3C;
    case 329u: goto L_08892B40;
    case 330u: goto L_08892EF0;
    case 331u: goto L_08892F20;
    case 332u: goto L_08892F30;
    case 333u: goto L_08892F3C;
    case 334u: goto L_088931C4;
    case 335u: goto L_088931CC;
    case 336u: goto L_088931D8;
    case 337u: goto L_088931E0;
    case 338u: goto L_088931E8;
    case 339u: goto L_088931F4;
    case 340u: goto L_08893220;
    case 341u: goto L_08893244;
    case 342u: goto L_08893270;
    case 343u: goto L_08893274;
    case 344u: goto L_088932E8;
    case 345u: goto L_088932F4;
    case 346u: goto L_08893318;
    case 347u: goto L_08893340;
    case 348u: goto L_08893388;
    case 349u: goto L_0889338C;
    case 350u: goto L_088933B4;
    case 351u: goto L_088933BC;
    case 352u: goto L_088933E0;
    case 353u: goto L_08893450;
    case 354u: goto L_08893464;
    case 355u: goto L_08893494;
    case 356u: goto L_088934A4;
    case 357u: goto L_088934B8;
    case 358u: goto L_088934F0;
    case 359u: goto L_08893508;
    case 360u: goto L_08893514;
    case 361u: goto L_08893568;
    case 362u: goto L_08893578;
    case 363u: goto L_08893594;
    case 364u: goto L_0889359C;
    case 365u: goto L_088935A0;
    case 366u: goto L_088935B8;
    case 367u: goto L_088935D4;
    case 368u: goto L_088935F0;
    case 369u: goto L_0889360C;
    case 370u: goto L_08893614;
    case 371u: goto L_08893618;
    case 372u: goto L_08893624;
    case 373u: goto L_0889363C;
    case 374u: goto L_08893640;
    case 375u: goto L_088936A0;
    case 376u: goto L_088936A4;
    case 377u: goto L_08893740;
    case 378u: goto L_08893748;
    case 379u: goto L_08893770;
    case 380u: goto L_08893784;
    case 381u: goto L_0889378C;
    case 382u: goto L_08893794;
    case 383u: goto L_088937A8;
    case 384u: goto L_088937EC;
    case 385u: goto L_08893804;
    case 386u: goto L_0889381C;
    case 387u: goto L_08893824;
    case 388u: goto L_08893830;
    case 389u: goto L_08893838;
    case 390u: goto L_0889383C;
    case 391u: goto L_08893844;
    case 392u: goto L_0889384C;
    case 393u: goto L_08893854;
    case 394u: goto L_0889385C;
    case 395u: goto L_08893878;
    case 396u: goto L_08893880;
    case 397u: goto L_08893898;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08890000:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(352));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088902B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-640));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(620), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[29] + static_cast<std::uint32_t>(304));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(616), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(628), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(624), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(612), ctx.gpr[17]);
    ctx.set_gpr(31, 0x088902E4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(608), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 777u, 0x0888F9E0u>(ctx, &aot_mem) && ctx.pc == 0x088902E4u) goto L_088902E4;
    return;
L_088902E4:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(304))))));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08890340;
      }
      goto L_088902F0;
    }
L_088902F0:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26016)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(5, 2245u << 16u);
      if (branch_taken) {
          goto L_08890324;
      }
      goto L_08890300;
    }
L_08890300:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08890304;
L_08890304:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(628)));
    goto L_08890308;
L_08890308:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(624)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(620)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(616)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(612)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(608)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(640));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08890324:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26012)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(21208));
    goto L_08890330;
L_08890330:
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x08890338u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08890338u) goto L_08890338;
    return;
L_08890338:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08890304;
L_08890340:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(17, ctx.gpr[29] + 0u);
      if (branch_taken) {
          goto L_0889035C;
      }
      goto L_08890348;
    }
L_08890348:
    ctx.set_gpr(31, 0x08890350u);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 809u, 0x0888FC18u>(ctx, &aot_mem) && ctx.pc == 0x08890350u) goto L_08890350;
    return;
L_08890350:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(20, 0u + 0u);
      if (branch_taken) {
          goto L_088903BC;
      }
      goto L_0889035C;
    }
L_0889035C:
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08890368u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08891004;
L_08890368:
    ctx.set_gpr(31, 0x08890370u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 679u, 0x0888F47Cu>(ctx, &aot_mem) && ctx.pc == 0x08890370u) goto L_08890370;
    return;
L_08890370:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_088903EC;
      }
      goto L_08890378;
    }
L_08890378:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(20, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_088903BC;
      }
      goto L_08890380;
    }
L_08890380:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(64)));
    goto L_08890384;
L_08890384:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(10, 2245u << 16u);
      if (branch_taken) {
          goto L_088903AC;
      }
      goto L_0889038C;
    }
L_0889038C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-26016)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08890304;
    }
    goto L_08890398;
L_08890398:
    ctx.set_gpr(12, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(-26012)));
    ctx.set_gpr(11, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[11] + static_cast<std::uint32_t>(21248));
    goto L_08890330;
L_088903AC:
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088903B4u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088903B4u) goto L_088903B4;
    return;
L_088903B4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(628)));
    goto L_08890308;
L_088903BC:
    ctx.set_gpr(7, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-26016)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(64)));
        goto L_08890384;
    }
    goto L_088903CC;
L_088903CC:
    ctx.set_gpr(9, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-26012)));
    ctx.set_gpr(8, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[8] + static_cast<std::uint32_t>(21280));
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x088903E4u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088903E4u) goto L_088903E4;
    return;
L_088903E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(64)));
    goto L_08890384;
L_088903EC:
    ctx.set_gpr(31, 0x088903F4u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 809u, 0x0888FC18u>(ctx, &aot_mem) && ctx.pc == 0x088903F4u) goto L_088903F4;
    return;
L_088903F4:
    ctx.set_gpr(31, 0x088903FCu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 679u, 0x0888F47Cu>(ctx, &aot_mem) && ctx.pc == 0x088903FCu) goto L_088903FC;
    return;
L_088903FC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(20, 0u + 0u);
      if (branch_taken) {
          goto L_088903BC;
      }
      goto L_08890408;
    }
L_08890408:
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08890418u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(297));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 637u, 0x0888F234u>(ctx, &aot_mem) && ctx.pc == 0x08890418u) goto L_08890418;
    return;
L_08890418:
    // nop
    goto L_08890378;
L_08890FB4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08890FC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 679u, 0x0888F47Cu>(ctx, &aot_mem) && ctx.pc == 0x08890FC4u) goto L_08890FC4;
    return;
L_08890FC4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_08890FE4;
      }
      goto L_08890FCC;
    }
L_08890FCC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(100));
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(7, 0u + 0u);
      if (branch_taken) {
          goto L_08890FF4;
      }
      goto L_08890FE4;
    }
L_08890FE4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08890FF4:
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08890FFCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08890FFCu) goto L_08890FFC;
    return;
L_08890FFC:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    goto L_08890FE4;
L_08891004:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
      if (branch_taken) {
          goto L_0889108C;
      }
      goto L_08891024;
    }
L_08891024:
    ctx.set_gpr(31, 0x0889102Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_08890FB4;
L_0889102C:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(18, ctx.gpr[4] + static_cast<std::uint32_t>(-25160));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(297));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[7];
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
      if (branch_taken) {
          goto L_08891060;
      }
      goto L_08891048;
    }
L_08891048:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_0889104C;
L_0889104C:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08891060:
    ctx.set_gpr(31, 0x08891068u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 637u, 0x0888F234u>(ctx, &aot_mem) && ctx.pc == 0x08891068u) goto L_08891068;
    return;
L_08891068:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(22304));
    ctx.set_gpr(31, 0x08891084u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(297));
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 634u, 0x0888F1B8u>(ctx, &aot_mem) && ctx.pc == 0x08891084u) goto L_08891084;
    return;
L_08891084:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_0889104C;
L_0889108C:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(16, ctx.gpr[3] + static_cast<std::uint32_t>(-25172));
    goto L_08891024;
L_08891474:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
      if (branch_taken) {
          goto L_0889160C;
      }
      goto L_08891494;
    }
L_08891494:
    ctx.set_gpr(31, 0x0889149Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x0889149Cu) goto L_0889149C;
    return;
L_0889149C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_088914C8;
      }
      goto L_088914A4;
    }
L_088914A4:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-25172), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_088914B0;
L_088914B0:
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
L_088914C8:
    ctx.set_gpr(31, 0x088914D0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 696u, 0x0888F580u>(ctx, &aot_mem) && ctx.pc == 0x088914D0u) goto L_088914D0;
    return;
L_088914D0:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(18, ctx.gpr[4] + static_cast<std::uint32_t>(-25680));
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    goto L_088914E0;
L_088914E0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088914ECu);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 543u, 0x088169A8u>(ctx, &aot_mem) && ctx.pc == 0x088914ECu) goto L_088914EC;
    return;
L_088914EC:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
      if (branch_taken) {
          goto L_08891604;
      }
      goto L_08891500;
    }
L_08891500:
    ctx.set_gpr(31, 0x08891508u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 543u, 0x088169A8u>(ctx, &aot_mem) && ctx.pc == 0x08891508u) goto L_08891508;
    return;
L_08891508:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
      if (branch_taken) {
          goto L_08891604;
      }
      goto L_08891518;
    }
L_08891518:
    ctx.set_gpr(31, 0x08891520u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 543u, 0x088169A8u>(ctx, &aot_mem) && ctx.pc == 0x08891520u) goto L_08891520;
    return;
L_08891520:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
      if (branch_taken) {
          goto L_08891604;
      }
      goto L_08891530;
    }
L_08891530:
    ctx.set_gpr(31, 0x08891538u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 543u, 0x088169A8u>(ctx, &aot_mem) && ctx.pc == 0x08891538u) goto L_08891538;
    return;
L_08891538:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
      if (branch_taken) {
          goto L_08891604;
      }
      goto L_08891548;
    }
L_08891548:
    ctx.set_gpr(31, 0x08891550u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 543u, 0x088169A8u>(ctx, &aot_mem) && ctx.pc == 0x08891550u) goto L_08891550;
    return;
L_08891550:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
      if (branch_taken) {
          goto L_08891604;
      }
      goto L_08891560;
    }
L_08891560:
    ctx.set_gpr(31, 0x08891568u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 543u, 0x088169A8u>(ctx, &aot_mem) && ctx.pc == 0x08891568u) goto L_08891568;
    return;
L_08891568:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
      if (branch_taken) {
          goto L_08891604;
      }
      goto L_08891578;
    }
L_08891578:
    ctx.set_gpr(31, 0x08891580u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 543u, 0x088169A8u>(ctx, &aot_mem) && ctx.pc == 0x08891580u) goto L_08891580;
    return;
L_08891580:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(128));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
      if (branch_taken) {
          goto L_08891604;
      }
      goto L_08891594;
    }
L_08891594:
    ctx.set_gpr(31, 0x0889159Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 543u, 0x088169A8u>(ctx, &aot_mem) && ctx.pc == 0x0889159Cu) goto L_0889159C;
    return;
L_0889159C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < 32 ? 1u : 0u);
      if (branch_taken) {
          goto L_08891604;
      }
      goto L_088915A4;
    }
L_088915A4:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
      if (branch_taken) {
          goto L_088914E0;
      }
      goto L_088915AC;
    }
L_088915AC:
    ctx.set_gpr(3, 0u + 0u);
    goto L_088915B0;
L_088915B0:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[6];
    ctx.set_gpr(8, 2245u << 16u);
      if (branch_taken) {
          goto L_088915E8;
      }
      goto L_088915BC;
    }
L_088915BC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-26016)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
        goto L_088914B0;
    }
    goto L_088915C8;
L_088915C8:
    ctx.set_gpr(10, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-26012)));
    ctx.set_gpr(9, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[9] + static_cast<std::uint32_t>(22348));
    goto L_088915D8;
L_088915D8:
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x088915E0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088915E0u) goto L_088915E0;
    return;
L_088915E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_088914B0;
L_088915E8:
    ctx.set_gpr(7, 2245u << 16u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[7] + static_cast<std::uint32_t>(-25172));
    ctx.set_gpr(31, 0x088915FCu);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x088915FCu) goto L_088915FC;
    return;
L_088915FC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_088914B0;
L_08891604:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    goto L_088915B0;
L_0889160C:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26016)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
        goto L_088914B0;
    }
    goto L_0889161C;
L_0889161C:
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26012)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(22388));
    goto L_088915D8;
L_0889163C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
      if (branch_taken) {
          goto L_088916B4;
      }
      goto L_08891650;
    }
L_08891650:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0889169C;
      }
      goto L_08891660;
    }
L_08891660:
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26016)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(22428));
    goto L_08891674;
L_08891674:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(7, 2245u << 16u);
      if (branch_taken) {
          goto L_0889168C;
      }
      goto L_0889167C;
    }
L_0889167C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08891680;
L_08891680:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889168C:
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x08891694u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-26012)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08891694u) goto L_08891694;
    return;
L_08891694:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08891680;
L_0889169C:
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088916A4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088916A4u) goto L_088916A4;
    return;
L_088916A4:
    ctx.set_gpr(31, 0x088916ACu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 776u, 0x0888F9D4u>(ctx, &aot_mem) && ctx.pc == 0x088916ACu) goto L_088916AC;
    return;
L_088916AC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_08891680;
L_088916B4:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26016)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(22452));
    goto L_08891674;
L_088916CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_0889173C;
      }
      goto L_088916DC;
    }
L_088916DC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_0889172C;
      }
      goto L_088916EC;
    }
L_088916EC:
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26016)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(22480));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(6, 0u + 0u);
      if (branch_taken) {
          goto L_08891718;
      }
      goto L_08891704;
    }
L_08891704:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08891708;
L_08891708:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08891718:
    ctx.set_gpr(8, 2245u << 16u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x08891724u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-26012)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08891724u) goto L_08891724;
    return;
L_08891724:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08891708;
L_0889172C:
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08891734u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08891734u) goto L_08891734;
    return;
L_08891734:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_08891704;
L_0889173C:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26016)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(22504));
      if (branch_taken) {
          goto L_0889175C;
      }
      goto L_08891754;
    }
L_08891754:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08891708;
L_0889175C:
    ctx.set_gpr(7, 2245u << 16u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x08891768u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-26012)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08891768u) goto L_08891768;
    return;
L_08891768:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08891708;
L_08891770:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_088917E0;
      }
      goto L_08891780;
    }
L_08891780:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_088917D0;
      }
      goto L_08891790;
    }
L_08891790:
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26016)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(22532));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(6, 0u + 0u);
      if (branch_taken) {
          goto L_088917BC;
      }
      goto L_088917A8;
    }
L_088917A8:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_088917AC;
L_088917AC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088917BC:
    ctx.set_gpr(8, 2245u << 16u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x088917C8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-26012)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088917C8u) goto L_088917C8;
    return;
L_088917C8:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_088917AC;
L_088917D0:
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x088917D8u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088917D8u) goto L_088917D8;
    return;
L_088917D8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_088917A8;
L_088917E0:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26016)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(22556));
      if (branch_taken) {
          goto L_08891800;
      }
      goto L_088917F8;
    }
L_088917F8:
    ctx.set_gpr(2, 0u + 0u);
    goto L_088917AC;
L_08891800:
    ctx.set_gpr(7, 2245u << 16u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x0889180Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-26012)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889180Cu) goto L_0889180C;
    return;
L_0889180C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_088917AC;
L_08891814:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08891884;
      }
      goto L_08891824;
    }
L_08891824:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_08891874;
      }
      goto L_08891834;
    }
L_08891834:
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26016)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(22584));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(6, 0u + 0u);
      if (branch_taken) {
          goto L_08891860;
      }
      goto L_0889184C;
    }
L_0889184C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08891850;
L_08891850:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08891860:
    ctx.set_gpr(8, 2245u << 16u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x0889186Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-26012)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889186Cu) goto L_0889186C;
    return;
L_0889186C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08891850;
L_08891874:
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x0889187Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889187Cu) goto L_0889187C;
    return;
L_0889187C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_0889184C;
L_08891884:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26016)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(22608));
      if (branch_taken) {
          goto L_088918A4;
      }
      goto L_0889189C;
    }
L_0889189C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08891850;
L_088918A4:
    ctx.set_gpr(7, 2245u << 16u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x088918B0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-26012)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088918B0u) goto L_088918B0;
    return;
L_088918B0:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08891850;
L_088919DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[3] + static_cast<std::uint32_t>(-25684));
    goto L_088919F8;
L_088919F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(16));
        goto L_08891A14;
    }
    goto L_08891A04;
L_08891A04:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08891B68;
      }
      goto L_08891A10;
    }
L_08891A10:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    goto L_08891A14;
L_08891A14:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08891A18;
L_08891A18:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(16));
        goto L_08891A30;
    }
    goto L_08891A20;
L_08891A20:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08891B58;
      }
      goto L_08891A2C;
    }
L_08891A2C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    goto L_08891A30;
L_08891A30:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08891A34;
L_08891A34:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(16));
        goto L_08891A4C;
    }
    goto L_08891A3C;
L_08891A3C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08891B48;
      }
      goto L_08891A48;
    }
L_08891A48:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    goto L_08891A4C;
L_08891A4C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08891A50;
L_08891A50:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(16));
        goto L_08891A68;
    }
    goto L_08891A58;
L_08891A58:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08891B38;
      }
      goto L_08891A64;
    }
L_08891A64:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    goto L_08891A68;
L_08891A68:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08891A6C;
L_08891A6C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(16));
        goto L_08891A84;
    }
    goto L_08891A74;
L_08891A74:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08891B28;
      }
      goto L_08891A80;
    }
L_08891A80:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    goto L_08891A84;
L_08891A84:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08891A88;
L_08891A88:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(16));
        goto L_08891AA0;
    }
    goto L_08891A90;
L_08891A90:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08891B18;
      }
      goto L_08891A9C;
    }
L_08891A9C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    goto L_08891AA0;
L_08891AA0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08891AA4;
L_08891AA4:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(16));
        goto L_08891ABC;
    }
    goto L_08891AAC;
L_08891AAC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08891B08;
      }
      goto L_08891AB8;
    }
L_08891AB8:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    goto L_08891ABC;
L_08891ABC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08891AC0;
L_08891AC0:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(8));
        goto L_08891AD8;
    }
    goto L_08891AC8;
L_08891AC8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08891AF8;
      }
      goto L_08891AD4;
    }
L_08891AD4:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    goto L_08891AD8;
L_08891AD8:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < 32 ? 1u : 0u);
    goto L_08891ADC;
L_08891ADC:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088919F8;
      }
      goto L_08891AE4;
    }
L_08891AE4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08891AF8:
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08891B00u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08891B00u) goto L_08891B00;
    return;
L_08891B00:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < 32 ? 1u : 0u);
    goto L_08891ADC;
L_08891B08:
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08891B10u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08891B10u) goto L_08891B10;
    return;
L_08891B10:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08891AC0;
L_08891B18:
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08891B20u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08891B20u) goto L_08891B20;
    return;
L_08891B20:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08891AA4;
L_08891B28:
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08891B30u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08891B30u) goto L_08891B30;
    return;
L_08891B30:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08891A88;
L_08891B38:
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08891B40u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08891B40u) goto L_08891B40;
    return;
L_08891B40:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08891A6C;
L_08891B48:
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08891B50u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08891B50u) goto L_08891B50;
    return;
L_08891B50:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08891A50;
L_08891B58:
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08891B60u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08891B60u) goto L_08891B60;
    return;
L_08891B60:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08891A34;
L_08891B68:
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08891B70u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08891B70u) goto L_08891B70;
    return;
L_08891B70:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08891A18;
L_08891C84:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
      if (branch_taken) {
          goto L_08891CF8;
      }
      goto L_08891C98;
    }
L_08891C98:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08891CE8;
      }
      goto L_08891CA8;
    }
L_08891CA8:
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26016)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(22744));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(6, 0u + 0u);
      if (branch_taken) {
          goto L_08891CD4;
      }
      goto L_08891CC0;
    }
L_08891CC0:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08891CC4;
L_08891CC4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08891CD4:
    ctx.set_gpr(8, 2245u << 16u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x08891CE0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-26012)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08891CE0u) goto L_08891CE0;
    return;
L_08891CE0:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08891CC4;
L_08891CE8:
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08891CF0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08891CF0u) goto L_08891CF0;
    return;
L_08891CF0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_08891CC0;
L_08891CF8:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26016)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(22772));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(6, 0u + 0u);
      if (branch_taken) {
          goto L_08891D18;
      }
      goto L_08891D10;
    }
L_08891D10:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    goto L_08891CC4;
L_08891D18:
    ctx.set_gpr(7, 2245u << 16u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x08891D24u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-26012)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08891D24u) goto L_08891D24;
    return;
L_08891D24:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    goto L_08891CC4;
L_088921DC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(6, 2245u << 16u);
      if (branch_taken) {
          goto L_088921F4;
      }
      goto L_088921E4;
    }
L_088921E4:
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-26016), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-26012), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088921F4:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26016), 0u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-26012), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088923FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08892444;
      }
      goto L_0889240C;
    }
L_0889240C:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(400));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(7, 0u + 0u);
      if (branch_taken) {
          goto L_08892434;
      }
      goto L_08892424;
    }
L_08892424:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    goto L_08892428;
L_08892428:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08892434:
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x0889243Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0889243Cu) goto L_0889243C;
    return;
L_0889243C:
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    goto L_08892424;
L_08892444:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26016)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(23320));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(6, 0u + 0u);
      if (branch_taken) {
          goto L_08892464;
      }
      goto L_0889245C;
    }
L_0889245C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08892428;
L_08892464:
    ctx.set_gpr(7, 2245u << 16u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x08892470u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-26012)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08892470u) goto L_08892470;
    return;
L_08892470:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08892428;
L_08892478:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08892518;
      }
      goto L_08892490;
    }
L_08892490:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08892508;
      }
      goto L_0889249C;
    }
L_0889249C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    goto L_088924A0;
L_088924A0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    ctx.set_gpr(2, 32767u << 16u);
      if (branch_taken) {
          goto L_088924F4;
      }
      goto L_088924A8;
    }
L_088924A8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_088924AC;
L_088924AC:
    if (static_cast<std::int32_t>(ctx.gpr[4]) < 0) {
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
        goto L_088924E4;
    }
    goto L_088924B4;
L_088924B4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(7, 2225u << 16u);
      if (branch_taken) {
          goto L_088924D4;
      }
      goto L_088924C4;
    }
L_088924C4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_088924C8;
L_088924C8:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088924D4:
    ctx.set_gpr(31, 0x088924DCu);
    ctx.set_gpr(4, ctx.gpr[7] + static_cast<std::uint32_t>(23440));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 477u, 0x0889E8F4u>(ctx, &aot_mem) && ctx.pc == 0x088924DCu) goto L_088924DC;
    return;
L_088924DC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_088924C8;
L_088924E4:
    ctx.set_gpr(31, 0x088924ECu);
    ctx.set_gpr(5, 0u + 0u);
    goto L_088928D4;
L_088924EC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_088924B4;
L_088924F4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08892500u);
    ctx.set_gpr(5, ctx.gpr[2] | 65535u);
    goto L_0889285C;
L_08892500:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    goto L_088924AC;
L_08892508:
    ctx.set_gpr(31, 0x08892510u);
    // nop
    goto L_088927E4;
L_08892510:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    goto L_088924A0;
L_08892518:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08892534;
      }
      goto L_08892524;
    }
L_08892524:
    ctx.set_gpr(31, 0x0889252Cu);
    // nop
    goto L_0889276C;
L_0889252C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    goto L_088924A0;
L_08892534:
    ctx.set_gpr(31, 0x0889253Cu);
    ctx.set_gpr(5, 0u | 44100u);
    goto L_0889276C;
L_0889253C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u | 44100u);
    goto L_08892508;
L_08892548:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
      if (branch_taken) {
          goto L_088926D8;
      }
      goto L_0889256C;
    }
L_0889256C:
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(6, ctx.gpr[2] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_088926B0;
      }
      goto L_08892578;
    }
L_08892578:
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[6];
    ctx.set_gpr(10, ctx.gpr[5] << 2u);
      if (branch_taken) {
          goto L_0889269C;
      }
      goto L_08892580;
    }
L_08892580:
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[10];
    ctx.set_gpr(13, ctx.gpr[3] << 1u);
      if (branch_taken) {
          goto L_08892688;
      }
      goto L_08892588;
    }
L_08892588:
    { const bool branch_taken = ctx.gpr[13] == ctx.gpr[6];
    ctx.set_gpr(15, 2185u << 16u);
      if (branch_taken) {
          goto L_08892668;
      }
      goto L_08892590;
    }
L_08892590:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[3]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    if (ctx.gpr[3] == 0u) {
    ctx.pc = 0x08892598u; rt.stop("Allegrex BREAK code 7 at 0x08892598"); return;
        goto L_0889259C;
    }
    goto L_0889259C;
L_0889259C:
    ctx.set_gpr(24, ctx.hi);
    { const bool branch_taken = ctx.gpr[24] != 0u;
    // nop
      if (branch_taken) {
          goto L_088925E8;
      }
      goto L_088925A8;
    }
L_088925A8:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    ctx.set_gpr(2, ctx.lo);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    if (ctx.gpr[3] == 0u) {
    ctx.pc = 0x088925B8u; rt.stop("Allegrex BREAK code 7 at 0x088925B8"); return;
        goto L_088925BC;
    }
    goto L_088925BC;
L_088925BC:
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[11] != 0u;
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088925CC;
      }
      goto L_088925C8;
    }
L_088925C8:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    goto L_088925CC;
L_088925CC:
    ctx.set_gpr(13, 2185u << 16u);
    ctx.set_gpr(12, ctx.gpr[13] + static_cast<std::uint32_t>(18484));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[12]);
    goto L_088925D8;
L_088925D8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088925E8:
    ctx.set_gpr(31, 0x088925F0u);
    // nop
    goto L_088926F8;
L_088925F0:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    if (ctx.gpr[25] != 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
        goto L_08892608;
    }
    goto L_088925FC;
L_088925FC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    goto L_08892608;
L_08892608:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[3] == 0u) {
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
        goto L_0889263C;
    }
    goto L_08892618;
L_08892618:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(5, 2185u << 16u);
    if (ctx.gpr[4] == 0u) {
    ctx.pc = 0x08892624u; rt.stop("Allegrex BREAK code 7 at 0x08892624"); return;
        goto L_08892628;
    }
    goto L_08892628;
L_08892628:
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(15676));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.set_gpr(3, ctx.lo);
    goto L_08892634;
L_08892634:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), ctx.gpr[3]);
    goto L_088925D8;
L_0889263C:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(8, 2185u << 16u);
    ctx.set_gpr(7, ctx.gpr[8] + static_cast<std::uint32_t>(16408));
    ctx.set_gpr(9, ctx.gpr[10] + static_cast<std::uint32_t>(-32768));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[9]);
    if (ctx.gpr[5] == 0u) {
    ctx.pc = 0x08892654u; rt.stop("Allegrex BREAK code 7 at 0x08892654"); return;
        goto L_08892658;
    }
    goto L_08892658;
L_08892658:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[7]);
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08892634;
L_08892668:
    ctx.set_gpr(14, ctx.gpr[15] + static_cast<std::uint32_t>(14496));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), ctx.gpr[14]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    goto L_08892674;
L_08892674:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    goto L_08892680;
L_08892680:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    goto L_088925D8;
L_08892688:
    ctx.set_gpr(12, 2185u << 16u);
    ctx.set_gpr(11, ctx.gpr[12] + static_cast<std::uint32_t>(13588));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), ctx.gpr[11]);
    goto L_08892674;
L_0889269C:
    ctx.set_gpr(9, 2185u << 16u);
    ctx.set_gpr(8, ctx.gpr[9] + static_cast<std::uint32_t>(13120));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), ctx.gpr[8]);
    goto L_08892674;
L_088926B0:
    ctx.set_gpr(7, 2185u << 16u);
    ctx.set_gpr(6, ctx.gpr[7] + static_cast<std::uint32_t>(12016));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    goto L_088925D8;
L_088926D8:
    ctx.set_gpr(4, 2185u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(18372));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    goto L_08892680;
L_088926F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08892764;
      }
      goto L_08892704;
    }
L_08892704:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_08892764;
      }
      goto L_08892710;
    }
L_08892710:
    ctx.set_gpr(3, 0u | 32768u);
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    ctx.set_gpr(7, ctx.gpr[8] | ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_08892748;
      }
      goto L_08892728;
    }
L_08892728:
    ctx.set_gpr(7, 0u | 32768u);
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    goto L_08892730;
L_08892730:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.set_gpr(11, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.set_gpr(10, ctx.gpr[11] | ctx.gpr[2]);
    if (ctx.gpr[10] != 0u) {
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
        goto L_08892730;
    }
    goto L_08892748;
L_08892748:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.set_gpr(7, ctx.gpr[6] << 15u);
      if (branch_taken) {
          goto L_08892764;
      }
      goto L_08892750;
    }
L_08892750:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[7]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    if (ctx.gpr[5] == 0u) {
    ctx.pc = 0x08892758u; rt.stop("Allegrex BREAK code 7 at 0x08892758"); return;
        goto L_0889275C;
    }
    goto L_0889275C;
L_0889275C:
    ctx.set_gpr(6, ctx.lo);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    goto L_08892764;
L_08892764:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0889276C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
      if (branch_taken) {
          goto L_088927D8;
      }
      goto L_08892788;
    }
L_08892788:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_088927D0;
      }
      goto L_08892790;
    }
L_08892790:
    ctx.set_gpr(31, 0x08892798u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 26u, 0x0889420Cu>(ctx, &aot_mem) && ctx.pc == 0x08892798u) goto L_08892798;
    return;
L_08892798:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[5];
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(23556));
      if (branch_taken) {
          goto L_088927C0;
      }
      goto L_088927A8;
    }
L_088927A8:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_088927B0;
L_088927B0:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088927C0:
    ctx.set_gpr(31, 0x088927C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 477u, 0x0889E8F4u>(ctx, &aot_mem) && ctx.pc == 0x088927C8u) goto L_088927C8;
    return;
L_088927C8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_088927B0;
L_088927D0:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(23500));
    goto L_088927C0;
L_088927D8:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(23632));
    goto L_088927C0;
L_088927E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
      if (branch_taken) {
          goto L_08892850;
      }
      goto L_08892800;
    }
L_08892800:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_08892848;
      }
      goto L_08892808;
    }
L_08892808:
    ctx.set_gpr(31, 0x08892810u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 26u, 0x0889420Cu>(ctx, &aot_mem) && ctx.pc == 0x08892810u) goto L_08892810;
    return;
L_08892810:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[5];
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(23732));
      if (branch_taken) {
          goto L_08892838;
      }
      goto L_08892820;
    }
L_08892820:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_08892828;
L_08892828:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08892838:
    ctx.set_gpr(31, 0x08892840u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 477u, 0x0889E8F4u>(ctx, &aot_mem) && ctx.pc == 0x08892840u) goto L_08892840;
    return;
L_08892840:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_08892828;
L_08892848:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(23676));
    goto L_08892838;
L_08892850:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(23808));
    goto L_08892838;
L_0889285C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
      if (branch_taken) {
          goto L_088928C8;
      }
      goto L_08892878;
    }
L_08892878:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_088928C0;
      }
      goto L_08892880;
    }
L_08892880:
    ctx.set_gpr(31, 0x08892888u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 26u, 0x0889420Cu>(ctx, &aot_mem) && ctx.pc == 0x08892888u) goto L_08892888;
    return;
L_08892888:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[5];
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(23908));
      if (branch_taken) {
          goto L_088928B0;
      }
      goto L_08892898;
    }
L_08892898:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_088928A0;
L_088928A0:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088928B0:
    ctx.set_gpr(31, 0x088928B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 477u, 0x0889E8F4u>(ctx, &aot_mem) && ctx.pc == 0x088928B8u) goto L_088928B8;
    return;
L_088928B8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_088928A0;
L_088928C0:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(23852));
    goto L_088928B0;
L_088928C8:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(23984));
    goto L_088928B0;
L_088928D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
      if (branch_taken) {
          goto L_08892940;
      }
      goto L_088928F0;
    }
L_088928F0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_08892938;
      }
      goto L_088928F8;
    }
L_088928F8:
    ctx.set_gpr(31, 0x08892900u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 26u, 0x0889420Cu>(ctx, &aot_mem) && ctx.pc == 0x08892900u) goto L_08892900;
    return;
L_08892900:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[5];
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(24088));
      if (branch_taken) {
          goto L_08892928;
      }
      goto L_08892910;
    }
L_08892910:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_08892918;
L_08892918:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08892928:
    ctx.set_gpr(31, 0x08892930u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 477u, 0x0889E8F4u>(ctx, &aot_mem) && ctx.pc == 0x08892930u) goto L_08892930;
    return;
L_08892930:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    goto L_08892918;
L_08892938:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(24032));
    goto L_08892928;
L_08892940:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(24164));
    goto L_08892928;
L_0889294C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[17];
    ctx.set_gpr(31, 0x08892988u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08892988u) goto L_08892988;
    return;
L_08892988:
    ctx.set_gpr(17, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 1u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) <= 0;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
      if (branch_taken) {
          goto L_08892B40;
      }
      goto L_08892994;
    }
L_08892994:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[18];
    ctx.set_gpr(31, 0x088929A8u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088929A8u) goto L_088929A8;
    return;
L_088929A8:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 1u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
      if (branch_taken) {
          goto L_08892B40;
      }
      goto L_088929B4;
    }
L_088929B4:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    if (ctx.gpr[7] == 0u) {
    ctx.pc = 0x088929C4u; rt.stop("Allegrex BREAK code 7 at 0x088929C4"); return;
        goto L_088929C8;
    }
    goto L_088929C8;
L_088929C8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(8, ctx.lo);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[8]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(17, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? ctx.gpr[6] : ctx.gpr[4]);
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
      if (branch_taken) {
          goto L_08892B40;
      }
      goto L_088929E8;
    }
L_088929E8:
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(21, 0u + 0u);
    ctx.set_gpr(17, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[12]) ? ctx.gpr[17] : ctx.gpr[12]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[17]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[11]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    if (ctx.gpr[11] == 0u) {
    ctx.pc = 0x08892A00u; rt.stop("Allegrex BREAK code 7 at 0x08892A00"); return;
        goto L_08892A04;
    }
    goto L_08892A04;
L_08892A04:
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(20, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(18, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(10, ctx.lo);
    ctx.set_gpr(22, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    goto L_08892A18;
L_08892A18:
    ctx.set_gpr(14, ctx.gpr[22] - ctx.gpr[21]);
    ctx.set_gpr(13, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    ctx.set_gpr(6, ctx.gpr[14] << 1u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.set_gpr(7, ctx.gpr[29] + 0u);
      if (branch_taken) {
          goto L_08892B3C;
      }
      goto L_08892A30;
    }
L_08892A30:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[8];
    ctx.set_gpr(31, 0x08892A44u);
    ctx.set_gpr(4, ctx.gpr[10] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08892A44u) goto L_08892A44;
    return;
L_08892A44:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[17] - ctx.gpr[19]);
    ctx.set_gpr(6, ctx.gpr[2] << 1u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08892A64u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08892A64u) goto L_08892A64;
    return;
L_08892A64:
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[24]) >> 1u));
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[15]) >> 1u));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[14]);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    jump_target = ctx.gpr[13];
    ctx.set_gpr(31, 0x08892A98u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08892A98u) goto L_08892A98;
    return;
L_08892A98:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] << 1u);
    ctx.set_gpr(31, 0x08892AB0u);
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 412u, 0x088A1D1Cu>(ctx, &aot_mem) && ctx.pc == 0x08892AB0u) goto L_08892AB0;
    return;
L_08892AB0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[11];
    ctx.set_gpr(31, 0x08892AC8u);
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08892AC8u) goto L_08892AC8;
    return;
L_08892AC8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[9];
    ctx.set_gpr(31, 0x08892AE0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08892AE0u) goto L_08892AE0;
    return;
L_08892AE0:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[6] << 1u);
    ctx.set_gpr(31, 0x08892AF8u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 412u, 0x088A1D1Cu>(ctx, &aot_mem) && ctx.pc == 0x08892AF8u) goto L_08892AF8;
    return;
L_08892AF8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[7];
    ctx.set_gpr(31, 0x08892B10u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08892B10u) goto L_08892B10;
    return;
L_08892B10:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08892B28u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08892B28u) goto L_08892B28;
    return;
L_08892B28:
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(21, ctx.gpr[21] + ctx.gpr[24]);
    ctx.set_gpr(19, ctx.gpr[19] + ctx.gpr[15]);
    goto L_08892A18;
L_08892B3C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    goto L_08892B40;
L_08892B40:
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08892EF0:
    ctx.set_gpr(11, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(15, ctx.gpr[2] - ctx.gpr[4]);
    ctx.set_gpr(9, ctx.gpr[10] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[15]) >> 1u));
    ctx.set_gpr(13, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[9]) ? ctx.gpr[3] : ctx.gpr[9]);
    ctx.set_gpr(14, ctx.gpr[13] << 1u);
    ctx.set_gpr(2, ctx.gpr[14] + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08892F30;
      }
      goto L_08892F20;
    }
L_08892F20:
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(14, ctx.gpr[14] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, 0u + 0u);
    goto L_08892F30;
L_08892F30:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[13]) >> 4u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    ctx.set_gpr(12, ctx.gpr[5] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_088931C4;
      }
      goto L_08892F3C;
    }
L_08892F3C:
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(24, ctx.gpr[9] + ctx.gpr[10]);
    ctx.set_gpr(25, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[24]) >> 1u));
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[25]));
    ctx.set_gpr(24, ctx.gpr[7] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(25, ctx.gpr[5] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(5, ctx.gpr[25] + static_cast<std::uint32_t>(2));
    rt.memory().aot_store16(ctx.gpr[24] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.set_gpr(9, ctx.gpr[10] + 0u);
    ctx.set_gpr(10, ctx.gpr[24] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[25] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(24, ctx.gpr[9] + ctx.gpr[2]);
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[24]) >> 1u));
    rt.memory().aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(24, ctx.gpr[10] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[25] + static_cast<std::uint32_t>(0))))));
    rt.memory().aot_store16(ctx.gpr[24] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.set_gpr(9, ctx.gpr[10] + 0u);
    ctx.set_gpr(10, ctx.gpr[24] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(25, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(24, ctx.gpr[9] + ctx.gpr[25]);
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[24]) >> 1u));
    rt.memory().aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(24, ctx.gpr[10] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(10, ctx.gpr[5] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(25, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(5, ctx.gpr[10] + static_cast<std::uint32_t>(2));
    rt.memory().aot_store16(ctx.gpr[24] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[25]));
    ctx.set_gpr(9, ctx.gpr[25] + 0u);
    ctx.set_gpr(25, ctx.gpr[24] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(24, ctx.gpr[9] + ctx.gpr[2]);
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[24]) >> 1u));
    rt.memory().aot_store16(ctx.gpr[25] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(24, ctx.gpr[25] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(25, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    rt.memory().aot_store16(ctx.gpr[24] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[25]));
    ctx.set_gpr(9, ctx.gpr[25] + 0u);
    ctx.set_gpr(25, ctx.gpr[24] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(24, ctx.gpr[9] + ctx.gpr[10]);
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[24]) >> 1u));
    rt.memory().aot_store16(ctx.gpr[25] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(24, ctx.gpr[25] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(25, ctx.gpr[5] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(5, ctx.gpr[25] + static_cast<std::uint32_t>(2));
    rt.memory().aot_store16(ctx.gpr[24] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.set_gpr(9, ctx.gpr[10] + 0u);
    ctx.set_gpr(10, ctx.gpr[24] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[25] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(24, ctx.gpr[9] + ctx.gpr[2]);
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[24]) >> 1u));
    rt.memory().aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(24, ctx.gpr[10] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[25] + static_cast<std::uint32_t>(0))))));
    rt.memory().aot_store16(ctx.gpr[24] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.set_gpr(9, ctx.gpr[10] + 0u);
    ctx.set_gpr(10, ctx.gpr[24] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(25, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(24, ctx.gpr[9] + ctx.gpr[25]);
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[24]) >> 1u));
    rt.memory().aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(24, ctx.gpr[10] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(10, ctx.gpr[5] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(25, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(5, ctx.gpr[10] + static_cast<std::uint32_t>(2));
    rt.memory().aot_store16(ctx.gpr[24] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[25]));
    ctx.set_gpr(9, ctx.gpr[25] + 0u);
    ctx.set_gpr(25, ctx.gpr[24] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(24, ctx.gpr[9] + ctx.gpr[2]);
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[24]) >> 1u));
    rt.memory().aot_store16(ctx.gpr[25] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(24, ctx.gpr[25] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(25, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    rt.memory().aot_store16(ctx.gpr[24] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[25]));
    ctx.set_gpr(9, ctx.gpr[25] + 0u);
    ctx.set_gpr(25, ctx.gpr[24] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(24, ctx.gpr[9] + ctx.gpr[10]);
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[24]) >> 1u));
    rt.memory().aot_store16(ctx.gpr[25] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(24, ctx.gpr[25] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(25, ctx.gpr[5] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(5, ctx.gpr[25] + static_cast<std::uint32_t>(2));
    rt.memory().aot_store16(ctx.gpr[24] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.set_gpr(9, ctx.gpr[10] + 0u);
    ctx.set_gpr(10, ctx.gpr[24] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[25] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(24, ctx.gpr[9] + ctx.gpr[2]);
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[24]) >> 1u));
    rt.memory().aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(24, ctx.gpr[10] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[25] + static_cast<std::uint32_t>(0))))));
    rt.memory().aot_store16(ctx.gpr[24] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.set_gpr(9, ctx.gpr[10] + 0u);
    ctx.set_gpr(10, ctx.gpr[24] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(25, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(24, ctx.gpr[9] + ctx.gpr[25]);
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[24]) >> 1u));
    rt.memory().aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(24, ctx.gpr[10] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(10, ctx.gpr[5] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(25, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(5, ctx.gpr[10] + static_cast<std::uint32_t>(2));
    rt.memory().aot_store16(ctx.gpr[24] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[25]));
    ctx.set_gpr(9, ctx.gpr[25] + 0u);
    ctx.set_gpr(25, ctx.gpr[24] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(24, ctx.gpr[9] + ctx.gpr[2]);
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[24]) >> 1u));
    rt.memory().aot_store16(ctx.gpr[25] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(24, ctx.gpr[25] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(25, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    rt.memory().aot_store16(ctx.gpr[24] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[25]));
    ctx.set_gpr(9, ctx.gpr[25] + 0u);
    ctx.set_gpr(25, ctx.gpr[24] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(24, ctx.gpr[9] + ctx.gpr[10]);
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[24]) >> 1u));
    rt.memory().aot_store16(ctx.gpr[25] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(24, ctx.gpr[25] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(25, ctx.gpr[5] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(5, ctx.gpr[25] + static_cast<std::uint32_t>(2));
    rt.memory().aot_store16(ctx.gpr[24] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.set_gpr(9, ctx.gpr[10] + 0u);
    ctx.set_gpr(10, ctx.gpr[24] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[25] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(24, ctx.gpr[9] + ctx.gpr[2]);
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[24]) >> 1u));
    rt.memory().aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(24, ctx.gpr[10] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[25] + static_cast<std::uint32_t>(0))))));
    rt.memory().aot_store16(ctx.gpr[24] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.set_gpr(9, ctx.gpr[10] + 0u);
    ctx.set_gpr(10, ctx.gpr[24] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(25, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(24, ctx.gpr[9] + ctx.gpr[25]);
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[24]) >> 1u));
    rt.memory().aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(24, ctx.gpr[10] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(10, ctx.gpr[5] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(25, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(5, ctx.gpr[10] + static_cast<std::uint32_t>(2));
    rt.memory().aot_store16(ctx.gpr[24] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[25]));
    ctx.set_gpr(9, ctx.gpr[25] + 0u);
    ctx.set_gpr(25, ctx.gpr[24] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(24, ctx.gpr[9] + ctx.gpr[2]);
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[24]) >> 1u));
    rt.memory().aot_store16(ctx.gpr[25] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(24, ctx.gpr[25] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, ctx.gpr[24] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(25, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    rt.memory().aot_store16(ctx.gpr[24] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[25]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) > 0;
    ctx.set_gpr(9, ctx.gpr[25] + 0u);
      if (branch_taken) {
          goto L_08892F3C;
      }
      goto L_088931C4;
    }
L_088931C4:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[12];
    ctx.set_gpr(25, ctx.gpr[12] - ctx.gpr[5]);
      if (branch_taken) {
          goto L_088932E8;
      }
      goto L_088931CC;
    }
L_088931CC:
    ctx.set_gpr(3, ctx.gpr[25] & 7u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(24, static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08893270;
      }
      goto L_088931D8;
    }
L_088931D8:
    { const bool branch_taken = ctx.gpr[24] != 0u;
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[3]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08893244;
      }
      goto L_088931E0;
    }
L_088931E0:
    if (ctx.gpr[10] != 0u) {
    ctx.set_gpr(25, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
        goto L_08893220;
    }
    goto L_088931E8;
L_088931E8:
    ctx.set_gpr(25, static_cast<std::int32_t>(ctx.gpr[3]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[25] == 0u;
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
      if (branch_taken) {
          goto L_08893274;
      }
      goto L_088931F4;
    }
L_088931F4:
    ctx.set_gpr(25, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[7] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(10, ctx.gpr[9] + ctx.gpr[25]);
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 1u));
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(7, ctx.gpr[3] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(24, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2));
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[24]));
    ctx.set_gpr(9, ctx.gpr[24] + 0u);
    ctx.set_gpr(25, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    goto L_08893220;
L_08893220:
    ctx.set_gpr(3, ctx.gpr[7] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(10, ctx.gpr[9] + ctx.gpr[25]);
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 1u));
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(7, ctx.gpr[3] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(24, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2));
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[24]));
    ctx.set_gpr(9, ctx.gpr[24] + 0u);
    goto L_08893244;
L_08893244:
    ctx.set_gpr(25, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, ctx.gpr[7] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(10, ctx.gpr[9] + ctx.gpr[25]);
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 1u));
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(7, ctx.gpr[3] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(24, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2));
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[24]));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[12];
    ctx.set_gpr(9, ctx.gpr[24] + 0u);
      if (branch_taken) {
          goto L_088932E8;
      }
      goto L_08893270;
    }
L_08893270:
    ctx.set_gpr(10, ctx.gpr[7] + 0u);
    goto L_08893274;
L_08893274:
    ctx.set_gpr(25, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(24, ctx.gpr[9] + ctx.gpr[25]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[24]) >> 1u));
    rt.memory().aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    rt.memory().aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(25, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(24, ctx.gpr[9] + ctx.gpr[25]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[24]) >> 1u));
    rt.memory().aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2))))));
    rt.memory().aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(25, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4))))));
    ctx.set_gpr(24, ctx.gpr[9] + ctx.gpr[25]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[24]) >> 1u));
    rt.memory().aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4))))));
    rt.memory().aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(25, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(6))))));
    ctx.set_gpr(24, ctx.gpr[9] + ctx.gpr[25]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[24]) >> 1u));
    rt.memory().aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(6))))));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(9, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[12];
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08893274;
      }
      goto L_088932E8;
    }
L_088932E8:
    ctx.set_gpr(12, ctx.gpr[15] & 1u);
    if (ctx.gpr[12] == 0u) {
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(44)));
        goto L_08893318;
    }
    goto L_088932F4;
L_088932F4:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(14, ctx.gpr[14] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(10, ctx.gpr[9] + ctx.gpr[3]);
    ctx.set_gpr(15, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 1u));
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[15]));
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(44)));
    goto L_08893318;
L_08893318:
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(24), ctx.gpr[9]);
    ctx.set_gpr(7, ctx.gpr[25] + ctx.gpr[13]);
    ctx.set_gpr(5, ctx.gpr[24] + ctx.gpr[14]);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[13]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[14]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08893340:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(25, ctx.gpr[4] + 0u);
    ctx.set_gpr(13, ctx.gpr[25] + static_cast<std::uint32_t>(28));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[11]) ? 1u : 0u);
    ctx.set_gpr(4, static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[15]) ? 1u : 0u);
    ctx.set_gpr(9, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(8, ctx.gpr[13] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.set_gpr(24, 0u + 0u);
      if (branch_taken) {
          goto L_088933BC;
      }
      goto L_08893388;
    }
L_08893388:
    ctx.set_gpr(12, rt.memory().aot_load16(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    goto L_0889338C;
L_0889338C:
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(15, ctx.gpr[15] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(10, static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[11]) ? 1u : 0u);
    ctx.set_gpr(9, static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[15]) ? 1u : 0u);
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[12]));
    ctx.set_gpr(2, ctx.gpr[9] & ctx.gpr[10]);
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.set_gpr(24, ctx.gpr[24] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08893508;
      }
      goto L_088933B4;
    }
L_088933B4:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(12, rt.memory().aot_load16(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
        goto L_0889338C;
    }
    goto L_088933BC;
L_088933BC:
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[11]) < 3 ? 1u : 0u);
    ctx.set_gpr(12, static_cast<std::int32_t>(ctx.gpr[14]) < 1 ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[9] ^ 1u);
    ctx.set_gpr(10, ctx.gpr[12] ^ 1u);
    ctx.set_gpr(9, ctx.gpr[4] << 1u);
    ctx.set_gpr(13, ctx.gpr[10] & ctx.gpr[3]);
    ctx.set_gpr(10, ctx.gpr[4] + ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[13] == 0u;
    ctx.set_gpr(9, ctx.gpr[10] + ctx.gpr[9]);
      if (branch_taken) {
          goto L_08893450;
      }
      goto L_088933E0;
    }
L_088933E0:
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(12, ctx.gpr[10] + 0u);
    ctx.set_gpr(3, ctx.gpr[9] + 0u);
    ctx.set_gpr(4, ctx.gpr[13] << 1u);
    ctx.set_gpr(10, ctx.gpr[13] + ctx.gpr[4]);
    ctx.set_gpr(9, ctx.gpr[10] + ctx.gpr[4]);
    ctx.set_gpr(13, ctx.gpr[3] + ctx.gpr[10]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[13]) >> 3u));
    ctx.set_gpr(13, ctx.gpr[12] + ctx.gpr[9]);
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[13]) >> 3u));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2));
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.set_gpr(14, ctx.gpr[14] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[11]) < 3 ? 1u : 0u);
    ctx.set_gpr(12, static_cast<std::int32_t>(ctx.gpr[14]) < 1 ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[12] ^ 1u);
    ctx.set_gpr(13, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[7] + static_cast<std::uint32_t>(2));
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[13] != 0u;
    ctx.set_gpr(24, ctx.gpr[24] + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_088933E0;
      }
      goto L_08893450;
    }
L_08893450:
    ctx.set_gpr(13, ctx.gpr[12] ^ 1u);
    ctx.set_gpr(12, static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[11]) ? 1u : 0u);
    ctx.set_gpr(14, ctx.gpr[13] & ctx.gpr[12]);
    { const bool branch_taken = ctx.gpr[14] == 0u;
    ctx.set_gpr(13, ctx.gpr[8] + 0u);
      if (branch_taken) {
          goto L_088934B8;
      }
      goto L_08893464;
    }
L_08893464:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(12, ctx.gpr[10] + 0u);
    ctx.set_gpr(8, ctx.gpr[11] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(14, ctx.gpr[4] << 1u);
    ctx.set_gpr(10, ctx.gpr[4] + ctx.gpr[14]);
    ctx.set_gpr(3, ctx.gpr[9] + ctx.gpr[10]);
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 3u));
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(24, ctx.gpr[24] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, ctx.gpr[10] + ctx.gpr[14]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) <= 0;
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088934F0;
      }
      goto L_08893494;
    }
L_08893494:
    ctx.set_gpr(10, ctx.gpr[12] + ctx.gpr[9]);
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 3u));
    ctx.set_gpr(24, ctx.gpr[24] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[11]));
    goto L_088934A4;
L_088934A4:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(15, ctx.gpr[15] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store16(ctx.gpr[13] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.set_gpr(4, ctx.gpr[8] + 0u);
    goto L_088934B8;
L_088934B8:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.set_gpr(13, ctx.gpr[9] + ctx.gpr[6]);
    ctx.set_gpr(5, ctx.gpr[14] + ctx.gpr[24]);
    rt.memory().aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(44), ctx.gpr[13]);
    rt.memory().aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(20), ctx.gpr[15]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[24]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088934F0:
    ctx.set_gpr(15, ctx.gpr[12] + ctx.gpr[9]);
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[15]) >> 3u));
    rt.memory().aot_store16(ctx.gpr[25] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.set_gpr(13, ctx.gpr[25] + static_cast<std::uint32_t>(30));
    ctx.set_gpr(15, 0u + static_cast<std::uint32_t>(1));
    goto L_088934A4;
L_08893508:
    ctx.set_gpr(12, rt.memory().aot_load16(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store16(ctx.gpr[13] + static_cast<std::uint32_t>(-2), static_cast<std::uint16_t>(ctx.gpr[12]));
    goto L_088933BC;
L_08893514:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.set_gpr(25, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[8] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(17, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[8]) ? ctx.gpr[4] : ctx.gpr[8]);
    ctx.set_gpr(9, ctx.gpr[6] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(20, ctx.gpr[9] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[15]) <= 0;
    ctx.set_gpr(11, ctx.gpr[17] + 0u);
      if (branch_taken) {
          goto L_08893614;
      }
      goto L_08893568;
    }
L_08893568:
    ctx.set_gpr(10, 0u - ctx.gpr[15]);
    ctx.set_gpr(4, ctx.gpr[15] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.set_gpr(3, ctx.gpr[10] & 3u);
      if (branch_taken) {
          goto L_08893844;
      }
      goto L_08893578;
    }
L_08893578:
    ctx.set_gpr(14, rt.memory().aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(2));
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[14]));
    ctx.set_gpr(15, ctx.gpr[15] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[11]) <= 0;
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08893838;
      }
      goto L_08893594;
    }
L_08893594:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[15]) <= 0;
    ctx.set_gpr(12, ctx.gpr[5] << 1u);
      if (branch_taken) {
          goto L_08893618;
      }
      goto L_0889359C;
    }
L_0889359C:
    ctx.set_gpr(16, rt.memory().aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    goto L_088935A0;
L_088935A0:
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(2));
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[16]));
    ctx.set_gpr(15, ctx.gpr[15] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[11]) <= 0;
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08893838;
      }
      goto L_088935B8;
    }
L_088935B8:
    ctx.set_gpr(24, rt.memory().aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(15, ctx.gpr[15] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[24]));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[11]) <= 0;
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08893838;
      }
      goto L_088935D4;
    }
L_088935D4:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(15, ctx.gpr[15] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[11]) <= 0;
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08893838;
      }
      goto L_088935F0;
    }
L_088935F0:
    ctx.set_gpr(10, rt.memory().aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(15, ctx.gpr[15] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[11]) <= 0;
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08893838;
      }
      goto L_0889360C;
    }
L_0889360C:
    if (static_cast<std::int32_t>(ctx.gpr[15]) > 0) {
    ctx.set_gpr(16, rt.memory().aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
        goto L_088935A0;
    }
    goto L_08893614;
L_08893614:
    ctx.set_gpr(12, ctx.gpr[5] << 1u);
    goto L_08893618;
L_08893618:
    ctx.set_gpr(13, static_cast<std::int32_t>(ctx.gpr[11]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[13] != 0u;
    ctx.set_gpr(14, ctx.gpr[5] + ctx.gpr[12]);
      if (branch_taken) {
          goto L_08893740;
      }
      goto L_08893624;
    }
L_08893624:
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(16, ctx.gpr[11] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(4, ctx.gpr[9] - ctx.gpr[11]);
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.set_gpr(2, ctx.gpr[4] & 7u);
      if (branch_taken) {
          goto L_0889381C;
      }
      goto L_0889363C;
    }
L_0889363C:
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[25] + static_cast<std::uint32_t>(0))))));
    goto L_08893640;
L_08893640:
    ctx.set_gpr(2, ctx.gpr[14] + 0u);
    ctx.set_gpr(14, ctx.gpr[12] + 0u);
    ctx.set_gpr(12, ctx.gpr[11] << 1u);
    ctx.set_gpr(10, ctx.gpr[14] + ctx.gpr[12]);
    ctx.set_gpr(14, ctx.gpr[11] + ctx.gpr[12]);
    ctx.set_gpr(13, ctx.gpr[2] + ctx.gpr[11]);
    ctx.set_gpr(24, ctx.gpr[5] + ctx.gpr[14]);
    ctx.set_gpr(11, ctx.gpr[7] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, ctx.gpr[11] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[13]) >> 2u));
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 2u));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[24]) >> 2u));
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(10, ctx.gpr[2] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, ctx.gpr[10] + static_cast<std::uint32_t>(2));
    rt.memory().aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(11, ctx.gpr[16] + 0u);
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[25] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(25, ctx.gpr[25] + static_cast<std::uint32_t>(2));
    rt.memory().aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[13]));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.set_gpr(5, ctx.gpr[13] + 0u);
      if (branch_taken) {
          goto L_08893740;
      }
      goto L_088936A0;
    }
L_088936A0:
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
    goto L_088936A4;
L_088936A4:
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[25] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, ctx.gpr[14] + 0u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(14, ctx.gpr[13] << 1u);
    ctx.set_gpr(24, ctx.gpr[13] + ctx.gpr[14]);
    ctx.set_gpr(4, ctx.gpr[12] + ctx.gpr[14]);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[13]);
    ctx.set_gpr(12, ctx.gpr[5] + ctx.gpr[24]);
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 2u));
    ctx.set_gpr(16, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 2u));
    rt.memory().aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[13]));
    ctx.set_gpr(13, ctx.gpr[14] + 0u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[16]));
    ctx.set_gpr(16, static_cast<std::int32_t>(ctx.gpr[11]) < 4 ? 1u : 0u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(2));
    rt.memory().aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[25] + static_cast<std::uint32_t>(0))))));
    rt.memory().aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[12]));
    ctx.set_gpr(4, ctx.gpr[12] + 0u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[25] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(12, ctx.gpr[5] << 1u);
    ctx.set_gpr(14, ctx.gpr[5] + ctx.gpr[12]);
    ctx.set_gpr(3, ctx.gpr[24] + ctx.gpr[5]);
    ctx.set_gpr(24, ctx.gpr[4] + ctx.gpr[14]);
    ctx.set_gpr(4, ctx.gpr[13] + ctx.gpr[12]);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[24]) >> 2u));
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 2u));
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    rt.memory().aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[5]));
    rt.memory().aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[13]));
    rt.memory().aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.set_gpr(24, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[25] + static_cast<std::uint32_t>(2))))));
    ctx.set_gpr(25, ctx.gpr[25] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[24]));
    ctx.set_gpr(5, ctx.gpr[24] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088936A4;
      }
      goto L_08893740;
    }
L_08893740:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[11]) <= 0;
    ctx.set_gpr(9, ctx.gpr[20] + 0u);
      if (branch_taken) {
          goto L_088937A8;
      }
      goto L_08893748;
    }
L_08893748:
    ctx.set_gpr(20, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[25] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(13, ctx.gpr[12] + 0u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(24, ctx.gpr[14] + ctx.gpr[20]);
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[24]) >> 2u));
    ctx.set_gpr(12, ctx.gpr[20] << 1u);
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.set_gpr(14, ctx.gpr[20] + ctx.gpr[12]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[11]) <= 0;
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08893804;
      }
      goto L_08893770;
    }
L_08893770:
    ctx.set_gpr(3, ctx.gpr[13] + ctx.gpr[12]);
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 2u));
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[12]));
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2));
    goto L_08893784;
L_08893784:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[11]) <= 0;
    ctx.set_gpr(16, ctx.gpr[5] + ctx.gpr[14]);
      if (branch_taken) {
          goto L_088937EC;
      }
      goto L_0889378C;
    }
L_0889378C:
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 2u));
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[11]));
    goto L_08893794;
L_08893794:
    ctx.set_gpr(20, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[25] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(15, ctx.gpr[15] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[20]));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    goto L_088937A8;
L_088937A8:
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[24] + ctx.gpr[8]);
    ctx.set_gpr(25, ctx.gpr[10] + ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(48), ctx.gpr[25]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), ctx.gpr[15]);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088937EC:
    ctx.set_gpr(13, ctx.gpr[5] + ctx.gpr[14]);
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[13]) >> 2u));
    rt.memory().aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.set_gpr(15, ctx.gpr[15] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(2));
    goto L_08893794;
L_08893804:
    ctx.set_gpr(9, ctx.gpr[13] + ctx.gpr[12]);
    ctx.set_gpr(15, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 2u));
    rt.memory().aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[15]));
    ctx.set_gpr(9, ctx.gpr[6] + static_cast<std::uint32_t>(30));
    ctx.set_gpr(15, 0u + static_cast<std::uint32_t>(1));
    goto L_08893784;
L_0889381C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
        goto L_088936A4;
    }
    goto L_08893824;
L_08893824:
    ctx.set_gpr(24, static_cast<std::int32_t>(ctx.gpr[2]) < 4 ? 1u : 0u);
    if (ctx.gpr[24] != 0u) {
    ctx.set_gpr(9, ctx.gpr[7] + 0u);
        goto L_088936A4;
    }
    goto L_08893830;
L_08893830:
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[25] + static_cast<std::uint32_t>(0))))));
    goto L_08893640;
L_08893838:
    ctx.set_gpr(14, rt.memory().aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    goto L_0889383C;
L_0889383C:
    rt.memory().aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(-2), static_cast<std::uint16_t>(ctx.gpr[14]));
    goto L_08893614;
L_08893844:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(12, static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0889359C;
      }
      goto L_0889384C;
    }
L_0889384C:
    { const bool branch_taken = ctx.gpr[12] == 0u;
    ctx.set_gpr(13, static_cast<std::int32_t>(ctx.gpr[3]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08893578;
      }
      goto L_08893854;
    }
L_08893854:
    if (ctx.gpr[13] != 0u) {
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
        goto L_08893880;
    }
    goto L_0889385C;
L_0889385C:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(2));
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.set_gpr(15, ctx.gpr[15] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[11]) > 0;
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08893578;
      }
      goto L_08893878;
    }
L_08893878:
    ctx.set_gpr(14, rt.memory().aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    goto L_0889383C;
L_08893880:
    ctx.set_gpr(11, ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(15, ctx.gpr[4] + 0u);
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(9, ctx.gpr[6] + static_cast<std::uint32_t>(30));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[11]) > 0;
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0889385C;
      }
      goto L_08893898;
    }
L_08893898:
    ctx.set_gpr(14, rt.memory().aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    goto L_0889383C;
}

void recomp_unit_0035(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0035_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_35(Runtime &runtime) {
    runtime.register_generated_unit(35u, 0x08890000u, 16384u, &recomp_unit_0035, &recomp_unit_0035_entry);
    runtime.register_function(0x08890000u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088902B0u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088902E4u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088902F0u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08890300u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08890304u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08890308u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08890324u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08890330u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08890338u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08890340u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08890348u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08890350u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x0889035Cu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08890368u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08890370u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08890378u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08890380u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08890384u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x0889038Cu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08890398u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088903ACu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088903B4u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088903BCu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088903CCu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088903E4u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088903ECu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088903F4u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088903FCu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08890408u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08890418u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08890FB4u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08890FC4u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08890FCCu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08890FE4u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08890FF4u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08890FFCu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891004u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891024u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x0889102Cu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891048u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x0889104Cu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891060u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891068u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891084u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x0889108Cu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891474u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891494u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x0889149Cu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088914A4u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088914B0u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088914C8u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088914D0u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088914E0u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088914ECu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891500u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891508u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891518u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891520u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891530u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891538u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891548u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891550u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891560u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891568u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891578u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891580u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891594u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x0889159Cu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088915A4u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088915ACu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088915B0u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088915BCu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088915C8u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088915D8u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088915E0u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088915E8u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088915FCu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891604u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x0889160Cu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x0889161Cu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x0889163Cu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891650u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891660u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891674u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x0889167Cu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891680u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x0889168Cu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891694u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x0889169Cu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088916A4u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088916ACu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088916B4u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088916CCu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088916DCu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088916ECu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891704u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891708u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891718u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891724u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x0889172Cu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891734u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x0889173Cu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891754u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x0889175Cu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891768u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891770u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891780u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891790u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088917A8u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088917ACu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088917BCu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088917C8u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088917D0u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088917D8u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088917E0u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088917F8u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891800u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x0889180Cu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891814u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891824u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891834u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x0889184Cu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891850u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891860u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x0889186Cu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891874u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x0889187Cu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891884u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x0889189Cu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088918A4u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088918B0u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088919DCu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088919F8u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891A04u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891A10u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891A14u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891A18u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891A20u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891A2Cu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891A30u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891A34u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891A3Cu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891A48u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891A4Cu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891A50u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891A58u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891A64u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891A68u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891A6Cu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891A74u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891A80u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891A84u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891A88u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891A90u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891A9Cu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891AA0u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891AA4u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891AACu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891AB8u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891ABCu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891AC0u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891AC8u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891AD4u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891AD8u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891ADCu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891AE4u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891AF8u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891B00u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891B08u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891B10u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891B18u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891B20u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891B28u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891B30u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891B38u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891B40u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891B48u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891B50u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891B58u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891B60u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891B68u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891B70u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891C84u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891C98u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891CA8u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891CC0u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891CC4u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891CD4u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891CE0u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891CE8u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891CF0u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891CF8u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891D10u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891D18u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08891D24u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088921DCu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088921E4u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088921F4u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088923FCu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x0889240Cu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892424u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892428u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892434u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x0889243Cu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892444u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x0889245Cu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892464u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892470u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892478u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892490u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x0889249Cu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088924A0u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088924A8u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088924ACu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088924B4u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088924C4u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088924C8u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088924D4u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088924DCu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088924E4u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088924ECu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088924F4u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892500u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892508u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892510u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892518u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892524u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x0889252Cu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892534u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x0889253Cu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892548u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x0889256Cu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892578u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892580u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892588u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892590u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x0889259Cu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088925A8u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088925BCu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088925C8u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088925CCu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088925D8u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088925E8u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088925F0u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088925FCu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892608u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892618u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892628u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892634u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x0889263Cu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892658u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892668u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892674u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892680u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892688u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x0889269Cu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088926B0u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088926D8u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088926F8u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892704u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892710u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892728u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892730u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892748u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892750u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x0889275Cu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892764u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x0889276Cu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892788u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892790u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892798u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088927A8u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088927B0u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088927C0u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088927C8u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088927D0u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088927D8u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088927E4u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892800u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892808u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892810u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892820u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892828u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892838u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892840u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892848u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892850u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x0889285Cu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892878u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892880u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892888u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892898u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088928A0u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088928B0u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088928B8u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088928C0u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088928C8u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088928D4u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088928F0u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088928F8u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892900u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892910u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892918u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892928u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892930u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892938u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892940u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x0889294Cu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892988u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892994u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088929A8u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088929B4u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088929C8u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088929E8u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892A04u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892A18u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892A30u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892A44u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892A64u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892A98u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892AB0u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892AC8u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892AE0u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892AF8u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892B10u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892B28u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892B3Cu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892B40u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892EF0u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892F20u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892F30u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08892F3Cu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088931C4u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088931CCu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088931D8u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088931E0u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088931E8u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088931F4u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08893220u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08893244u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08893270u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08893274u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088932E8u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088932F4u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08893318u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08893340u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08893388u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x0889338Cu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088933B4u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088933BCu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088933E0u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08893450u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08893464u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08893494u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088934A4u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088934B8u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088934F0u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08893508u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08893514u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08893568u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08893578u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08893594u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x0889359Cu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088935A0u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088935B8u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088935D4u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088935F0u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x0889360Cu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08893614u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08893618u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08893624u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x0889363Cu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08893640u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088936A0u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088936A4u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08893740u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08893748u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08893770u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08893784u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x0889378Cu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08893794u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088937A8u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x088937ECu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08893804u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x0889381Cu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08893824u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08893830u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08893838u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x0889383Cu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08893844u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x0889384Cu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08893854u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x0889385Cu, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08893878u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08893880u, &recomp_unit_0035, "recomp_unit_0035");
    runtime.register_function(0x08893898u, &recomp_unit_0035, "recomp_unit_0035");
}
} // namespace psprecomp
