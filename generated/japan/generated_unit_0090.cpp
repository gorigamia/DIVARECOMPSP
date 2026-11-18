#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0090[4096] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0,
    0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 8, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 10, 0, 11,
    0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 14, 0, 0, 15, 16, 0, 0, 0, 0, 0, 0, 17, 18, 0, 0, 0, 0, 0, 0, 19, 20,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0,
    25, 0, 0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 28, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 32, 0,
    0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 36, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40,
    0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 42, 0, 43, 0, 0, 0, 0, 44, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 56, 57, 0, 0,
    58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0,
    0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 65, 66,
    0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 76,
    0, 77, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 86, 0, 0,
    0, 0, 87, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0,
    0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 104, 105, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 107, 0, 0, 108, 109, 0, 0, 110, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 118, 0, 0, 119, 120, 0,
    0, 0, 121, 0, 0, 122, 123, 0, 0, 0, 0, 0, 0, 124, 0, 0, 125, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0, 128, 129, 0, 0, 0,
    130, 0, 0, 0, 131, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 135, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0,
    143, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 147, 0, 0, 0, 0, 148, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 150,
    0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0,
    0, 157, 0, 0, 158, 159, 0, 0, 160, 0, 0, 161, 0, 0, 162, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 166, 0, 0,
    0, 167, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 181, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185,
    0, 0, 0, 186, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0,
    0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 198, 199, 0, 0, 200, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 211, 0, 0, 0, 0, 212, 0,
    0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 219,
    0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 230,
    0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    232, 0, 0, 233, 234, 0, 0, 0, 235, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 238, 0, 0, 239, 240, 0, 0, 241, 0, 0, 0, 242,
    0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 249, 0, 250,
    0, 0, 0, 0, 0, 251, 0, 0, 252, 0, 0, 0, 253, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 256, 257, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 260,
    0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 263, 0, 264, 0, 0, 0, 0, 0, 0, 265, 266, 0, 0, 0, 267, 0, 0, 268, 269, 0,
    0, 270, 271, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 273, 0, 274, 0, 0, 275, 0, 0, 0, 0, 276, 0, 0, 277, 0, 0, 278, 279, 0,
    0, 0, 0, 0, 0, 280, 281, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 283, 0, 0, 284, 0, 0, 0, 0, 0, 0, 285, 286, 0, 0, 0,
    0, 0, 0, 287, 0, 0, 0, 288, 289, 0, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292,
    0, 0, 0, 0, 293, 0, 0, 294, 0, 0, 295, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 298, 0, 0, 0, 0, 0, 299,
    0, 0, 300, 301, 0, 0, 0, 302, 0, 0, 0, 303, 304, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 309, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 312, 313, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 316, 0, 0, 0, 0, 317, 0, 0, 318, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0,
    0, 321, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0,
    325, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 329, 0, 0, 0, 0, 330, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 335, 0, 0, 0, 0,
    0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 339, 0, 0, 340, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 344, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 347, 348, 0, 0, 0, 349, 0, 350, 0, 0, 0, 0, 351, 0, 0, 352, 353, 0,
    0, 0, 354, 0, 355, 0, 0, 0, 356, 0, 357, 0, 0, 0, 358, 0, 0, 359, 0, 0, 0, 0, 360, 0, 0, 361, 362, 0, 0, 0, 0, 363,
    0, 364, 0, 0, 0, 0, 0, 365, 0, 0, 366, 0, 0, 0, 367, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0,
    370, 0, 0, 371, 0, 0, 0, 372, 373, 0, 374, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 377, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 381, 382, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0,
    387, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 390, 391, 0, 0, 0,
    392, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396,
    0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 400, 0, 0, 0, 401,
    0, 0, 0, 0, 402, 0, 0, 403, 404, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 407, 0, 0, 0, 408, 0,
    0, 0, 409, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 412, 0, 0, 413, 0, 0, 0, 0, 0, 414, 0, 0, 0, 415, 0,
    0, 0, 0, 0, 0, 416, 0, 0, 0, 417, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 420, 0, 0, 0, 0,
    421, 0, 0, 0, 0, 422, 0, 0, 0, 0, 423, 0, 0, 424, 0, 0, 0, 425, 0, 0, 426, 0, 0, 427, 0, 0, 428, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 429, 430, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 433, 0, 0,
    0, 0, 434, 0, 0, 0, 0, 435, 0, 0, 0, 0, 436, 0, 0, 437, 0, 0, 0, 0, 438, 0, 0, 439, 0, 0, 440, 0, 0, 0, 0, 0,
    441, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 446, 0, 0, 0, 0, 447,
    0, 0, 0, 448, 0, 0, 0, 449, 0, 0, 450, 0, 451, 0, 0, 0, 0, 0, 452, 0, 0, 453, 0, 0, 0, 454, 0, 455, 0, 0, 0, 0,
    456, 0, 0, 0, 0, 0, 0, 457, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0,
    0, 0, 0, 0, 461, 0, 0, 462, 0, 0, 0, 0, 463, 0, 0, 0, 0, 464, 0, 0, 0, 0, 465, 0, 0, 466, 0, 467, 0, 0, 0, 0,
    468, 0, 0, 469, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 472, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0,
    0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 476, 0, 0, 477, 0, 0, 0, 0, 478, 0, 0, 0, 0, 479, 0, 0, 0, 0, 480, 0, 0, 481,
};
void recomp_unit_0090_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0896C000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0090[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0896C000;
    case 2u: goto L_0896C028;
    case 3u: goto L_0896C070;
    case 4u: goto L_0896C084;
    case 5u: goto L_0896C098;
    case 6u: goto L_0896C0B0;
    case 7u: goto L_0896C0C0;
    case 8u: goto L_0896C0C8;
    case 9u: goto L_0896C0D4;
    case 10u: goto L_0896C0F4;
    case 11u: goto L_0896C0FC;
    case 12u: goto L_0896C108;
    case 13u: goto L_0896C120;
    case 14u: goto L_0896C12C;
    case 15u: goto L_0896C138;
    case 16u: goto L_0896C13C;
    case 17u: goto L_0896C158;
    case 18u: goto L_0896C15C;
    case 19u: goto L_0896C178;
    case 20u: goto L_0896C17C;
    case 21u: goto L_0896C1A4;
    case 22u: goto L_0896C1B4;
    case 23u: goto L_0896C1E8;
    case 24u: goto L_0896C1F8;
    case 25u: goto L_0896C200;
    case 26u: goto L_0896C214;
    case 27u: goto L_0896C220;
    case 28u: goto L_0896C230;
    case 29u: goto L_0896C238;
    case 30u: goto L_0896C24C;
    case 31u: goto L_0896C26C;
    case 32u: goto L_0896C278;
    case 33u: goto L_0896C288;
    case 34u: goto L_0896C2A4;
    case 35u: goto L_0896C2B4;
    case 36u: goto L_0896C2B8;
    case 37u: goto L_0896C2C0;
    case 38u: goto L_0896C2CC;
    case 39u: goto L_0896C2EC;
    case 40u: goto L_0896C2FC;
    case 41u: goto L_0896C318;
    case 42u: goto L_0896C38C;
    case 43u: goto L_0896C394;
    case 44u: goto L_0896C3A8;
    case 45u: goto L_0896C3B4;
    case 46u: goto L_0896C484;
    case 47u: goto L_0896C4C4;
    case 48u: goto L_0896C4D4;
    case 49u: goto L_0896C4E0;
    case 50u: goto L_0896C594;
    case 51u: goto L_0896C5AC;
    case 52u: goto L_0896C5D0;
    case 53u: goto L_0896C5E0;
    case 54u: goto L_0896C614;
    case 55u: goto L_0896C664;
    case 56u: goto L_0896C670;
    case 57u: goto L_0896C674;
    case 58u: goto L_0896C680;
    case 59u: goto L_0896C6B0;
    case 60u: goto L_0896C6DC;
    case 61u: goto L_0896C774;
    case 62u: goto L_0896C78C;
    case 63u: goto L_0896C7A4;
    case 64u: goto L_0896C7EC;
    case 65u: goto L_0896C7F8;
    case 66u: goto L_0896C7FC;
    case 67u: goto L_0896C808;
    case 68u: goto L_0896C818;
    case 69u: goto L_0896C828;
    case 70u: goto L_0896C84C;
    case 71u: goto L_0896C85C;
    case 72u: goto L_0896C8A4;
    case 73u: goto L_0896C8B4;
    case 74u: goto L_0896C8CC;
    case 75u: goto L_0896C8E0;
    case 76u: goto L_0896C8FC;
    case 77u: goto L_0896C904;
    case 78u: goto L_0896C910;
    case 79u: goto L_0896C940;
    case 80u: goto L_0896C96C;
    case 81u: goto L_0896CA04;
    case 82u: goto L_0896CA1C;
    case 83u: goto L_0896CA34;
    case 84u: goto L_0896CA74;
    case 85u: goto L_0896CAEC;
    case 86u: goto L_0896CAF4;
    case 87u: goto L_0896CB08;
    case 88u: goto L_0896CB14;
    case 89u: goto L_0896CBE4;
    case 90u: goto L_0896CC24;
    case 91u: goto L_0896CC34;
    case 92u: goto L_0896CC40;
    case 93u: goto L_0896CCF4;
    case 94u: goto L_0896CD0C;
    case 95u: goto L_0896CD30;
    case 96u: goto L_0896CD40;
    case 97u: goto L_0896CD74;
    case 98u: goto L_0896CDB0;
    case 99u: goto L_0896CE2C;
    case 100u: goto L_0896CE40;
    case 101u: goto L_0896CE4C;
    case 102u: goto L_0896CF1C;
    case 103u: goto L_0896CF5C;
    case 104u: goto L_0896D00C;
    case 105u: goto L_0896D010;
    case 106u: goto L_0896D034;
    case 107u: goto L_0896D084;
    case 108u: goto L_0896D090;
    case 109u: goto L_0896D094;
    case 110u: goto L_0896D0A0;
    case 111u: goto L_0896D0A8;
    case 112u: goto L_0896D0D4;
    case 113u: goto L_0896D0E4;
    case 114u: goto L_0896D120;
    case 115u: goto L_0896D12C;
    case 116u: goto L_0896D13C;
    case 117u: goto L_0896D15C;
    case 118u: goto L_0896D168;
    case 119u: goto L_0896D174;
    case 120u: goto L_0896D178;
    case 121u: goto L_0896D188;
    case 122u: goto L_0896D194;
    case 123u: goto L_0896D198;
    case 124u: goto L_0896D1B4;
    case 125u: goto L_0896D1C0;
    case 126u: goto L_0896D1C4;
    case 127u: goto L_0896D1E0;
    case 128u: goto L_0896D1EC;
    case 129u: goto L_0896D1F0;
    case 130u: goto L_0896D200;
    case 131u: goto L_0896D210;
    case 132u: goto L_0896D218;
    case 133u: goto L_0896D224;
    case 134u: goto L_0896D240;
    case 135u: goto L_0896D244;
    case 136u: goto L_0896D268;
    case 137u: goto L_0896D278;
    case 138u: goto L_0896D2B0;
    case 139u: goto L_0896D2C0;
    case 140u: goto L_0896D2CC;
    case 141u: goto L_0896D2DC;
    case 142u: goto L_0896D2F4;
    case 143u: goto L_0896D300;
    case 144u: goto L_0896D308;
    case 145u: goto L_0896D320;
    case 146u: goto L_0896D330;
    case 147u: goto L_0896D33C;
    case 148u: goto L_0896D350;
    case 149u: goto L_0896D358;
    case 150u: goto L_0896D37C;
    case 151u: goto L_0896D398;
    case 152u: goto L_0896D3B4;
    case 153u: goto L_0896D3C4;
    case 154u: goto L_0896D3D4;
    case 155u: goto L_0896D3E0;
    case 156u: goto L_0896D3F0;
    case 157u: goto L_0896D404;
    case 158u: goto L_0896D410;
    case 159u: goto L_0896D414;
    case 160u: goto L_0896D420;
    case 161u: goto L_0896D42C;
    case 162u: goto L_0896D438;
    case 163u: goto L_0896D440;
    case 164u: goto L_0896D458;
    case 165u: goto L_0896D468;
    case 166u: goto L_0896D474;
    case 167u: goto L_0896D484;
    case 168u: goto L_0896D4A0;
    case 169u: goto L_0896D4D0;
    case 170u: goto L_0896D4FC;
    case 171u: goto L_0896D594;
    case 172u: goto L_0896D5AC;
    case 173u: goto L_0896D5C4;
    case 174u: goto L_0896D61C;
    case 175u: goto L_0896D62C;
    case 176u: goto L_0896D688;
    case 177u: goto L_0896D6A4;
    case 178u: goto L_0896D6B4;
    case 179u: goto L_0896D6D0;
    case 180u: goto L_0896D744;
    case 181u: goto L_0896D74C;
    case 182u: goto L_0896D760;
    case 183u: goto L_0896D76C;
    case 184u: goto L_0896D83C;
    case 185u: goto L_0896D87C;
    case 186u: goto L_0896D88C;
    case 187u: goto L_0896D898;
    case 188u: goto L_0896D94C;
    case 189u: goto L_0896D964;
    case 190u: goto L_0896D988;
    case 191u: goto L_0896D998;
    case 192u: goto L_0896D9CC;
    case 193u: goto L_0896DA2C;
    case 194u: goto L_0896DA3C;
    case 195u: goto L_0896DA88;
    case 196u: goto L_0896DA98;
    case 197u: goto L_0896DAAC;
    case 198u: goto L_0896DAB8;
    case 199u: goto L_0896DABC;
    case 200u: goto L_0896DAC8;
    case 201u: goto L_0896DAD4;
    case 202u: goto L_0896DB04;
    case 203u: goto L_0896DB30;
    case 204u: goto L_0896DBC8;
    case 205u: goto L_0896DBE0;
    case 206u: goto L_0896DBF8;
    case 207u: goto L_0896DC38;
    case 208u: goto L_0896DC48;
    case 209u: goto L_0896DC64;
    case 210u: goto L_0896DCDC;
    case 211u: goto L_0896DCE4;
    case 212u: goto L_0896DCF8;
    case 213u: goto L_0896DD04;
    case 214u: goto L_0896DDD4;
    case 215u: goto L_0896DE14;
    case 216u: goto L_0896DE24;
    case 217u: goto L_0896DE30;
    case 218u: goto L_0896DEE4;
    case 219u: goto L_0896DEFC;
    case 220u: goto L_0896DF20;
    case 221u: goto L_0896DF30;
    case 222u: goto L_0896DF64;
    case 223u: goto L_0896DFA0;
    case 224u: goto L_0896E018;
    case 225u: goto L_0896E02C;
    case 226u: goto L_0896E038;
    case 227u: goto L_0896E108;
    case 228u: goto L_0896E148;
    case 229u: goto L_0896E1F8;
    case 230u: goto L_0896E1FC;
    case 231u: goto L_0896E220;
    case 232u: goto L_0896E280;
    case 233u: goto L_0896E28C;
    case 234u: goto L_0896E290;
    case 235u: goto L_0896E2A0;
    case 236u: goto L_0896E2AC;
    case 237u: goto L_0896E2BC;
    case 238u: goto L_0896E2D0;
    case 239u: goto L_0896E2DC;
    case 240u: goto L_0896E2E0;
    case 241u: goto L_0896E2EC;
    case 242u: goto L_0896E2FC;
    case 243u: goto L_0896E308;
    case 244u: goto L_0896E32C;
    case 245u: goto L_0896E334;
    case 246u: goto L_0896E348;
    case 247u: goto L_0896E358;
    case 248u: goto L_0896E368;
    case 249u: goto L_0896E374;
    case 250u: goto L_0896E37C;
    case 251u: goto L_0896E394;
    case 252u: goto L_0896E3A0;
    case 253u: goto L_0896E3B0;
    case 254u: goto L_0896E3B8;
    case 255u: goto L_0896E3CC;
    case 256u: goto L_0896E3E8;
    case 257u: goto L_0896E3EC;
    case 258u: goto L_0896E420;
    case 259u: goto L_0896E468;
    case 260u: goto L_0896E47C;
    case 261u: goto L_0896E490;
    case 262u: goto L_0896E4A0;
    case 263u: goto L_0896E4B0;
    case 264u: goto L_0896E4B8;
    case 265u: goto L_0896E4D4;
    case 266u: goto L_0896E4D8;
    case 267u: goto L_0896E4E8;
    case 268u: goto L_0896E4F4;
    case 269u: goto L_0896E4F8;
    case 270u: goto L_0896E504;
    case 271u: goto L_0896E508;
    case 272u: goto L_0896E514;
    case 273u: goto L_0896E534;
    case 274u: goto L_0896E53C;
    case 275u: goto L_0896E548;
    case 276u: goto L_0896E55C;
    case 277u: goto L_0896E568;
    case 278u: goto L_0896E574;
    case 279u: goto L_0896E578;
    case 280u: goto L_0896E594;
    case 281u: goto L_0896E598;
    case 282u: goto L_0896E5BC;
    case 283u: goto L_0896E5C4;
    case 284u: goto L_0896E5D0;
    case 285u: goto L_0896E5EC;
    case 286u: goto L_0896E5F0;
    case 287u: goto L_0896E60C;
    case 288u: goto L_0896E61C;
    case 289u: goto L_0896E620;
    case 290u: goto L_0896E638;
    case 291u: goto L_0896E648;
    case 292u: goto L_0896E67C;
    case 293u: goto L_0896E690;
    case 294u: goto L_0896E69C;
    case 295u: goto L_0896E6A8;
    case 296u: goto L_0896E6AC;
    case 297u: goto L_0896E6E0;
    case 298u: goto L_0896E6E4;
    case 299u: goto L_0896E6FC;
    case 300u: goto L_0896E708;
    case 301u: goto L_0896E70C;
    case 302u: goto L_0896E71C;
    case 303u: goto L_0896E72C;
    case 304u: goto L_0896E730;
    case 305u: goto L_0896E738;
    case 306u: goto L_0896E7B8;
    case 307u: goto L_0896E884;
    case 308u: goto L_0896E938;
    case 309u: goto L_0896E93C;
    case 310u: goto L_0896E960;
    case 311u: goto L_0896E9AC;
    case 312u: goto L_0896E9B8;
    case 313u: goto L_0896E9BC;
    case 314u: goto L_0896E9C8;
    case 315u: goto L_0896EA3C;
    case 316u: goto L_0896EA44;
    case 317u: goto L_0896EA58;
    case 318u: goto L_0896EA64;
    case 319u: goto L_0896EB34;
    case 320u: goto L_0896EB74;
    case 321u: goto L_0896EB84;
    case 322u: goto L_0896EB90;
    case 323u: goto L_0896EC44;
    case 324u: goto L_0896EC5C;
    case 325u: goto L_0896EC80;
    case 326u: goto L_0896EC90;
    case 327u: goto L_0896ECC4;
    case 328u: goto L_0896ED14;
    case 329u: goto L_0896ED88;
    case 330u: goto L_0896ED9C;
    case 331u: goto L_0896EDA8;
    case 332u: goto L_0896EE78;
    case 333u: goto L_0896EEB8;
    case 334u: goto L_0896EF68;
    case 335u: goto L_0896EF6C;
    case 336u: goto L_0896EF90;
    case 337u: goto L_0896EFDC;
    case 338u: goto L_0896F058;
    case 339u: goto L_0896F06C;
    case 340u: goto L_0896F078;
    case 341u: goto L_0896F148;
    case 342u: goto L_0896F188;
    case 343u: goto L_0896F238;
    case 344u: goto L_0896F23C;
    case 345u: goto L_0896F260;
    case 346u: goto L_0896F2AC;
    case 347u: goto L_0896F2B8;
    case 348u: goto L_0896F2BC;
    case 349u: goto L_0896F2CC;
    case 350u: goto L_0896F2D4;
    case 351u: goto L_0896F2E8;
    case 352u: goto L_0896F2F4;
    case 353u: goto L_0896F2F8;
    case 354u: goto L_0896F308;
    case 355u: goto L_0896F310;
    case 356u: goto L_0896F320;
    case 357u: goto L_0896F328;
    case 358u: goto L_0896F338;
    case 359u: goto L_0896F344;
    case 360u: goto L_0896F358;
    case 361u: goto L_0896F364;
    case 362u: goto L_0896F368;
    case 363u: goto L_0896F37C;
    case 364u: goto L_0896F384;
    case 365u: goto L_0896F39C;
    case 366u: goto L_0896F3A8;
    case 367u: goto L_0896F3B8;
    case 368u: goto L_0896F3D0;
    case 369u: goto L_0896F3F8;
    case 370u: goto L_0896F400;
    case 371u: goto L_0896F40C;
    case 372u: goto L_0896F41C;
    case 373u: goto L_0896F420;
    case 374u: goto L_0896F428;
    case 375u: goto L_0896F43C;
    case 376u: goto L_0896F4BC;
    case 377u: goto L_0896F4D0;
    case 378u: goto L_0896F4DC;
    case 379u: goto L_0896F5AC;
    case 380u: goto L_0896F5EC;
    case 381u: goto L_0896F69C;
    case 382u: goto L_0896F6A0;
    case 383u: goto L_0896F6C4;
    case 384u: goto L_0896F72C;
    case 385u: goto L_0896F758;
    case 386u: goto L_0896F7EC;
    case 387u: goto L_0896F800;
    case 388u: goto L_0896F818;
    case 389u: goto L_0896F860;
    case 390u: goto L_0896F86C;
    case 391u: goto L_0896F870;
    case 392u: goto L_0896F880;
    case 393u: goto L_0896F888;
    case 394u: goto L_0896F8B8;
    case 395u: goto L_0896F8E4;
    case 396u: goto L_0896F97C;
    case 397u: goto L_0896F994;
    case 398u: goto L_0896F9AC;
    case 399u: goto L_0896F9E0;
    case 400u: goto L_0896F9EC;
    case 401u: goto L_0896F9FC;
    case 402u: goto L_0896FA10;
    case 403u: goto L_0896FA1C;
    case 404u: goto L_0896FA20;
    case 405u: goto L_0896FA24;
    case 406u: goto L_0896FA58;
    case 407u: goto L_0896FA68;
    case 408u: goto L_0896FA78;
    case 409u: goto L_0896FA88;
    case 410u: goto L_0896FA98;
    case 411u: goto L_0896FAB8;
    case 412u: goto L_0896FAC4;
    case 413u: goto L_0896FAD0;
    case 414u: goto L_0896FAE8;
    case 415u: goto L_0896FAF8;
    case 416u: goto L_0896FB14;
    case 417u: goto L_0896FB24;
    case 418u: goto L_0896FB34;
    case 419u: goto L_0896FB60;
    case 420u: goto L_0896FB6C;
    case 421u: goto L_0896FB80;
    case 422u: goto L_0896FB94;
    case 423u: goto L_0896FBA8;
    case 424u: goto L_0896FBB4;
    case 425u: goto L_0896FBC4;
    case 426u: goto L_0896FBD0;
    case 427u: goto L_0896FBDC;
    case 428u: goto L_0896FBE8;
    case 429u: goto L_0896FC1C;
    case 430u: goto L_0896FC20;
    case 431u: goto L_0896FC3C;
    case 432u: goto L_0896FC68;
    case 433u: goto L_0896FC74;
    case 434u: goto L_0896FC88;
    case 435u: goto L_0896FC9C;
    case 436u: goto L_0896FCB0;
    case 437u: goto L_0896FCBC;
    case 438u: goto L_0896FCD0;
    case 439u: goto L_0896FCDC;
    case 440u: goto L_0896FCE8;
    case 441u: goto L_0896FD00;
    case 442u: goto L_0896FD10;
    case 443u: goto L_0896FD30;
    case 444u: goto L_0896FD3C;
    case 445u: goto L_0896FD60;
    case 446u: goto L_0896FD68;
    case 447u: goto L_0896FD7C;
    case 448u: goto L_0896FD8C;
    case 449u: goto L_0896FD9C;
    case 450u: goto L_0896FDA8;
    case 451u: goto L_0896FDB0;
    case 452u: goto L_0896FDC8;
    case 453u: goto L_0896FDD4;
    case 454u: goto L_0896FDE4;
    case 455u: goto L_0896FDEC;
    case 456u: goto L_0896FE00;
    case 457u: goto L_0896FE1C;
    case 458u: goto L_0896FE28;
    case 459u: goto L_0896FE50;
    case 460u: goto L_0896FE6C;
    case 461u: goto L_0896FE90;
    case 462u: goto L_0896FE9C;
    case 463u: goto L_0896FEB0;
    case 464u: goto L_0896FEC4;
    case 465u: goto L_0896FED8;
    case 466u: goto L_0896FEE4;
    case 467u: goto L_0896FEEC;
    case 468u: goto L_0896FF00;
    case 469u: goto L_0896FF0C;
    case 470u: goto L_0896FF18;
    case 471u: goto L_0896FF3C;
    case 472u: goto L_0896FF44;
    case 473u: goto L_0896FF50;
    case 474u: goto L_0896FF74;
    case 475u: goto L_0896FF8C;
    case 476u: goto L_0896FFA8;
    case 477u: goto L_0896FFB4;
    case 478u: goto L_0896FFC8;
    case 479u: goto L_0896FFDC;
    case 480u: goto L_0896FFF0;
    case 481u: goto L_0896FFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0896C000:
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896C028:
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
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(22, ctx.gpr[5] + 0u);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896C098;
      }
      goto L_0896C070;
    }
L_0896C070:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(516)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896C084u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896C084u) goto L_0896C084;
    return;
L_0896C084:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(516)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896C098u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896C098u) goto L_0896C098;
    return;
L_0896C098:
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(19, 0u + 0u);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896C0C8;
      }
      goto L_0896C0B0;
    }
L_0896C0B0:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0896C0C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 313u, 0x089669E4u>(ctx, &aot_mem) && ctx.pc == 0x0896C0C0u) goto L_0896C0C0;
    return;
L_0896C0C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E3EC;
      }
      goto L_0896C0C8;
    }
L_0896C0C8:
    ctx.set_gpr(2, ctx.gpr[20] < static_cast<std::uint32_t>(-32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896C108;
      }
      goto L_0896C0D4;
    }
L_0896C0D4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(500)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896C0F4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896C0F4u) goto L_0896C0F4;
    return;
L_0896C0F4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896C15C;
      }
      goto L_0896C0FC;
    }
L_0896C0FC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E3EC;
      }
      goto L_0896C108;
    }
L_0896C108:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[20] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C12C;
      }
      goto L_0896C120;
    }
L_0896C120:
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896C138;
      }
      goto L_0896C12C;
    }
L_0896C12C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C13C;
      }
      goto L_0896C138;
    }
L_0896C138:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    goto L_0896C13C;
L_0896C13C:
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(19, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(1, ctx.gpr[19] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C15C;
      }
      goto L_0896C158;
    }
L_0896C158:
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    goto L_0896C15C;
L_0896C15C:
    ctx.set_gpr(18, ctx.gpr[22] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(-1)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(3, ctx.gpr[2] >> 31u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0896C17C;
      }
      goto L_0896C178;
    }
L_0896C178:
    ctx.set_gpr(18, ctx.gpr[22] + static_cast<std::uint32_t>(-12));
    goto L_0896C17C;
L_0896C17C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 11u);
    ctx.set_gpr(3, ctx.gpr[2] >> 16u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    ctx.set_gpr(5, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0896C1B4;
      }
      goto L_0896C1A4;
    }
L_0896C1A4:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] & 32767u);
    ctx.set_gpr(2, ctx.gpr[2] << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    goto L_0896C1B4;
L_0896C1B4:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] << 27u);
    ctx.set_gpr(2, ctx.gpr[2] >> 28u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(16, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896C1F8;
      }
      goto L_0896C1E8;
    }
L_0896C1E8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C200;
      }
      goto L_0896C1F8;
    }
L_0896C1F8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    goto L_0896C200;
L_0896C200:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[20] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C220;
      }
      goto L_0896C214;
    }
L_0896C214:
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896C230;
      }
      goto L_0896C220;
    }
L_0896C220:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C238;
      }
      goto L_0896C230;
    }
L_0896C230:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    goto L_0896C238;
L_0896C238:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C26C;
      }
      goto L_0896C24C;
    }
L_0896C24C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(19, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    goto L_0896C26C;
L_0896C26C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0896C288;
      }
      goto L_0896C278;
    }
L_0896C278:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0896C288u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 180u, 0x08960E58u>(ctx, &aot_mem) && ctx.pc == 0x0896C288u) goto L_0896C288;
    return;
L_0896C288:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0896C2B4;
      }
      goto L_0896C2A4;
    }
L_0896C2A4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C2B8;
      }
      goto L_0896C2B4;
    }
L_0896C2B4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0896C2B8;
L_0896C2B8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896E2EC;
      }
      goto L_0896C2C0;
    }
L_0896C2C0:
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896C818;
      }
      goto L_0896C2CC;
    }
L_0896C2CC:
    ctx.set_gpr(4, ctx.gpr[16] - ctx.gpr[19]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(1, ctx.gpr[4] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C808;
      }
      goto L_0896C2EC;
    }
L_0896C2EC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0896C680;
      }
      goto L_0896C2FC;
    }
L_0896C2FC:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0896C318u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 679u, 0x08812C2Cu>(ctx, &aot_mem) && ctx.pc == 0x0896C318u) goto L_0896C318;
    return;
L_0896C318:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, ctx.gpr[3] << 5u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-8161));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(6, 0u & 1u);
    ctx.set_gpr(4, ctx.gpr[6] << 6u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-65));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, ctx.gpr[6] << 5u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-33));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[6]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0896C4C4;
      }
      goto L_0896C38C;
    }
L_0896C38C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C4C4;
      }
      goto L_0896C394;
    }
L_0896C394:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 4u);
    ctx.set_gpr(1, ctx.gpr[16] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C3B4;
      }
      goto L_0896C3A8;
    }
L_0896C3A8:
    ctx.set_gpr(3, ctx.gpr[2] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896C484;
      }
      goto L_0896C3B4;
    }
L_0896C3B4:
    ctx.set_gpr(20, ctx.gpr[16] + static_cast<std::uint32_t>(-12));
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, (ctx.gpr[20] >> 16u) & 0x00007FFFu);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, (ctx.gpr[2] >> 8u) & 0x000001FFu);
    ctx.set_gpr(3, ctx.gpr[2] << 15u);
    ctx.set_gpr(2, 65280u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32767u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, 0u & 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, 0u & 31u);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-125));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C614;
      }
      goto L_0896C484;
    }
L_0896C484:
    ctx.set_gpr(20, ctx.gpr[16] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[6] << 7u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u & 15u);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C614;
      }
      goto L_0896C4C4;
    }
L_0896C4C4:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[20] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C4E0;
      }
      goto L_0896C4D4;
    }
L_0896C4D4:
    ctx.set_gpr(3, ctx.gpr[2] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896C5AC;
      }
      goto L_0896C4E0;
    }
L_0896C4E0:
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, (ctx.gpr[20] >> 16u) & 0x00007FFFu);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, (ctx.gpr[2] >> 8u) & 0x000001FFu);
    ctx.set_gpr(3, ctx.gpr[2] << 15u);
    ctx.set_gpr(2, 65280u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32767u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, 0u & 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, 0u & 31u);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-125));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896C5E0;
      }
      goto L_0896C594;
    }
L_0896C594:
    ctx.set_gpr(3, ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C5E0;
      }
      goto L_0896C5AC;
    }
L_0896C5AC:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, 0u & 1u);
    ctx.set_gpr(3, ctx.gpr[2] << 7u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896C5E0;
      }
      goto L_0896C5D0;
    }
L_0896C5D0:
    ctx.set_gpr(3, ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    goto L_0896C5E0;
L_0896C5E0:
    ctx.set_gpr(3, ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[16] - ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] >> 2u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 15u);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_0896C614;
L_0896C614:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[20] & 65535u);
    ctx.set_gpr(3, ctx.gpr[2] << 5u);
    ctx.set_gpr(2, 65504u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 31u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, ctx.gpr[2] & 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896C670;
      }
      goto L_0896C664;
    }
L_0896C664:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C674;
      }
      goto L_0896C670;
    }
L_0896C670:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_0896C674;
L_0896C674:
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E3EC;
      }
      goto L_0896C680;
    }
L_0896C680:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[20] & 65535u);
    ctx.set_gpr(3, ctx.gpr[2] << 5u);
    ctx.set_gpr(2, 65504u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 31u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896C774;
      }
      goto L_0896C6B0;
    }
L_0896C6B0:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, (ctx.gpr[20] >> 16u) & 0x00007FFFu);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[5] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896C7A4;
      }
      goto L_0896C6DC;
    }
L_0896C6DC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, 0u & 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, 0u & 31u);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-125));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u & 511u);
    ctx.set_gpr(3, ctx.gpr[2] << 15u);
    ctx.set_gpr(2, 65280u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32767u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C7A4;
      }
      goto L_0896C774;
    }
L_0896C774:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(3, ctx.gpr[2] >> 31u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0896C7A4;
      }
      goto L_0896C78C;
    }
L_0896C78C:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, 0u & 32767u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[2]));
    goto L_0896C7A4;
L_0896C7A4:
    ctx.set_gpr(3, ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[16] - ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] >> 2u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 15u);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896C7F8;
      }
      goto L_0896C7EC;
    }
L_0896C7EC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C7FC;
      }
      goto L_0896C7F8;
    }
L_0896C7F8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_0896C7FC;
L_0896C7FC:
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E3EC;
      }
      goto L_0896C808;
    }
L_0896C808:
    ctx.set_gpr(17, ctx.gpr[18] + 0u);
    ctx.set_gpr(30, ctx.gpr[16] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D420;
      }
      goto L_0896C818;
    }
L_0896C818:
    ctx.set_gpr(23, ctx.gpr[18] + ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0896D0A0;
      }
      goto L_0896C828;
    }
L_0896C828:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] << 11u);
    ctx.set_gpr(6, ctx.gpr[4] >> 16u);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, ctx.gpr[4] << 24u);
    ctx.set_gpr(5, ctx.gpr[4] >> 31u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0896C85C;
      }
      goto L_0896C84C;
    }
L_0896C84C:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[4] & 32767u);
    ctx.set_gpr(4, ctx.gpr[4] << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[4]);
    goto L_0896C85C;
L_0896C85C:
    ctx.set_gpr(5, ctx.gpr[6] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] << 27u);
    ctx.set_gpr(4, ctx.gpr[4] >> 28u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(17, ctx.gpr[16] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(4, ctx.gpr[5] & ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[19] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896D0A0;
      }
      goto L_0896C8A4;
    }
L_0896C8A4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0896C904;
      }
      goto L_0896C8B4;
    }
L_0896C8B4:
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, ctx.gpr[18] + ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896C8E0;
      }
      goto L_0896C8CC;
    }
L_0896C8CC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 11u);
    ctx.set_gpr(6, ctx.gpr[2] >> 16u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896C8FC;
      }
      goto L_0896C8E0;
    }
L_0896C8E0:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] & 32767u);
    ctx.set_gpr(3, ctx.gpr[2] << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 11u);
    ctx.set_gpr(2, ctx.gpr[2] >> 16u);
    ctx.set_gpr(6, ctx.gpr[2] + ctx.gpr[3]);
    goto L_0896C8FC;
L_0896C8FC:
    ctx.set_gpr(31, 0x0896C904u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 679u, 0x08812C2Cu>(ctx, &aot_mem) && ctx.pc == 0x0896C904u) goto L_0896C904;
    return;
L_0896C904:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896CA74;
      }
      goto L_0896C910;
    }
L_0896C910:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[20] & 65535u);
    ctx.set_gpr(3, ctx.gpr[2] << 5u);
    ctx.set_gpr(2, 65504u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 31u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896CA04;
      }
      goto L_0896C940;
    }
L_0896C940:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, (ctx.gpr[20] >> 16u) & 0x00007FFFu);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[5] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896CA34;
      }
      goto L_0896C96C;
    }
L_0896C96C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, 0u & 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, 0u & 31u);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-125));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u & 511u);
    ctx.set_gpr(3, ctx.gpr[2] << 15u);
    ctx.set_gpr(2, 65280u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32767u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896CA34;
      }
      goto L_0896CA04;
    }
L_0896CA04:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(3, ctx.gpr[2] >> 31u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0896CA34;
      }
      goto L_0896CA1C;
    }
L_0896CA1C:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, 0u & 32767u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[2]));
    goto L_0896CA34;
L_0896CA34:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[19] - ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] >> 2u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 15u);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896CDB0;
      }
      goto L_0896CA74;
    }
L_0896CA74:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(2, ctx.gpr[3] & 255u);
    ctx.set_gpr(5, ctx.gpr[2] << 5u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-8161));
    ctx.set_gpr(2, ctx.gpr[6] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[5]);
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, 0u & 1u);
    ctx.set_gpr(6, ctx.gpr[2] << 6u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-65));
    ctx.set_gpr(5, ctx.gpr[7] & ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[6]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(6, ctx.gpr[2] << 5u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-33));
    ctx.set_gpr(5, ctx.gpr[7] & ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[6]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[6] & ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0896CC24;
      }
      goto L_0896CAEC;
    }
L_0896CAEC:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896CC24;
      }
      goto L_0896CAF4;
    }
L_0896CAF4:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 4u);
    ctx.set_gpr(1, ctx.gpr[19] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896CB14;
      }
      goto L_0896CB08;
    }
L_0896CB08:
    ctx.set_gpr(4, ctx.gpr[3] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896CBE4;
      }
      goto L_0896CB14;
    }
L_0896CB14:
    ctx.set_gpr(20, ctx.gpr[19] + static_cast<std::uint32_t>(-12));
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, (ctx.gpr[20] >> 16u) & 0x00007FFFu);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, (ctx.gpr[3] >> 8u) & 0x000001FFu);
    ctx.set_gpr(3, ctx.gpr[2] << 15u);
    ctx.set_gpr(2, 65280u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32767u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, 0u & 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, 0u & 31u);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-125));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896CD74;
      }
      goto L_0896CBE4;
    }
L_0896CBE4:
    ctx.set_gpr(20, ctx.gpr[19] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[2] << 7u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u & 15u);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896CD74;
      }
      goto L_0896CC24;
    }
L_0896CC24:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[20] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896CC40;
      }
      goto L_0896CC34;
    }
L_0896CC34:
    ctx.set_gpr(2, ctx.gpr[3] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896CD0C;
      }
      goto L_0896CC40;
    }
L_0896CC40:
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, (ctx.gpr[20] >> 16u) & 0x00007FFFu);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[6] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[5]);
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, (ctx.gpr[3] >> 8u) & 0x000001FFu);
    ctx.set_gpr(3, ctx.gpr[2] << 15u);
    ctx.set_gpr(2, 65280u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32767u);
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, 0u & 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, 0u & 31u);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-125));
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896CD40;
      }
      goto L_0896CCF4;
    }
L_0896CCF4:
    ctx.set_gpr(3, ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896CD40;
      }
      goto L_0896CD0C;
    }
L_0896CD0C:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, 0u & 1u);
    ctx.set_gpr(3, ctx.gpr[2] << 7u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896CD40;
      }
      goto L_0896CD30;
    }
L_0896CD30:
    ctx.set_gpr(3, ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    goto L_0896CD40;
L_0896CD40:
    ctx.set_gpr(3, ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[4] - ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] >> 2u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 15u);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_0896CD74;
L_0896CD74:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[20] & 65535u);
    ctx.set_gpr(3, ctx.gpr[2] << 5u);
    ctx.set_gpr(2, 65504u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 31u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, ctx.gpr[2] & 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_0896CDB0;
L_0896CDB0:
    ctx.set_gpr(5, ctx.gpr[18] + ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.set_gpr(6, ctx.gpr[17] - ctx.gpr[19]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(8, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(2, ctx.gpr[4] & 255u);
    ctx.set_gpr(3, ctx.gpr[2] << 5u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-8161));
    ctx.set_gpr(2, ctx.gpr[8] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, 0u & 1u);
    ctx.set_gpr(8, ctx.gpr[3] << 6u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-65));
    ctx.set_gpr(2, ctx.gpr[9] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[8]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(8, ctx.gpr[3] << 5u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-33));
    ctx.set_gpr(2, ctx.gpr[9] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[8]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(8, ctx.gpr[8] & ctx.gpr[2]);
    ctx.set_gpr(8, ctx.gpr[8] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896CF5C;
      }
      goto L_0896CE2C;
    }
L_0896CE2C:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 4u);
    ctx.set_gpr(1, ctx.gpr[6] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896CE4C;
      }
      goto L_0896CE40;
    }
L_0896CE40:
    ctx.set_gpr(2, ctx.gpr[4] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896CF1C;
      }
      goto L_0896CE4C;
    }
L_0896CE4C:
    ctx.set_gpr(7, ctx.gpr[6] + static_cast<std::uint32_t>(-12));
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, (ctx.gpr[7] >> 16u) & 0x00007FFFu);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[6] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, (ctx.gpr[4] >> 8u) & 0x000001FFu);
    ctx.set_gpr(3, ctx.gpr[2] << 15u);
    ctx.set_gpr(2, 65280u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32767u);
    ctx.set_gpr(2, ctx.gpr[6] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, 0u & 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, 0u & 31u);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-125));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D034;
      }
      goto L_0896CF1C;
    }
L_0896CF1C:
    ctx.set_gpr(7, ctx.gpr[6] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 7u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u & 15u);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D034;
      }
      goto L_0896CF5C;
    }
L_0896CF5C:
    ctx.set_gpr(8, 0u | 65535u);
    ctx.set_gpr(10, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(9, ctx.gpr[8] & 32767u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(8, ctx.gpr[10] & ctx.gpr[8]);
    ctx.set_gpr(8, ctx.gpr[8] | ctx.gpr[9]);
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, (ctx.gpr[4] >> 8u) & 0x000001FFu);
    ctx.set_gpr(8, ctx.gpr[4] << 15u);
    ctx.set_gpr(4, 65280u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | 32767u);
    ctx.set_gpr(4, ctx.gpr[9] & ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[8]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[9]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[8]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[9]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, 0u & 31u);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-125));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896D010;
      }
      goto L_0896D00C;
    }
L_0896D00C:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    goto L_0896D010;
L_0896D010:
    ctx.set_gpr(2, ctx.gpr[6] >> 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[7]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 15u);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_0896D034;
L_0896D034:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[7] & 65535u);
    ctx.set_gpr(3, ctx.gpr[2] << 5u);
    ctx.set_gpr(2, 65504u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 31u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896D090;
      }
      goto L_0896D084;
    }
L_0896D084:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D094;
      }
      goto L_0896D090;
    }
L_0896D090:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_0896D094;
L_0896D094:
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E3EC;
      }
      goto L_0896D0A0;
    }
L_0896D0A0:
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0896D200;
      }
      goto L_0896D0A8;
    }
L_0896D0A8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 11u);
    ctx.set_gpr(3, ctx.gpr[2] >> 16u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0896D0E4;
      }
      goto L_0896D0D4;
    }
L_0896D0D4:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[4] & 32767u);
    ctx.set_gpr(4, ctx.gpr[4] << 16u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[4]);
    goto L_0896D0E4;
L_0896D0E4:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(6, ctx.gpr[5] & ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] << 27u);
    ctx.set_gpr(4, ctx.gpr[4] >> 28u);
    ctx.set_gpr(4, ctx.gpr[4] & 255u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[4] << 2u);
    ctx.set_gpr(4, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[23] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896D200;
      }
      goto L_0896D120;
    }
L_0896D120:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0896D13C;
      }
      goto L_0896D12C;
    }
L_0896D12C:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[4] & 32767u);
    ctx.set_gpr(4, ctx.gpr[4] << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    goto L_0896D13C;
L_0896D13C:
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(30, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[30] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896D200;
      }
      goto L_0896D15C;
    }
L_0896D15C:
    ctx.set_gpr(17, ctx.gpr[18] + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896D174;
      }
      goto L_0896D168;
    }
L_0896D168:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D178;
      }
      goto L_0896D174;
    }
L_0896D174:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(12));
    goto L_0896D178;
L_0896D178:
    ctx.set_gpr(3, ctx.gpr[23] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896D194;
      }
      goto L_0896D188;
    }
L_0896D188:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D198;
      }
      goto L_0896D194;
    }
L_0896D194:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_0896D198;
L_0896D198:
    ctx.set_gpr(2, ctx.gpr[23] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896D1C0;
      }
      goto L_0896D1B4;
    }
L_0896D1B4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D1C4;
      }
      goto L_0896D1C0;
    }
L_0896D1C0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_0896D1C4;
L_0896D1C4:
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896D1EC;
      }
      goto L_0896D1E0;
    }
L_0896D1E0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D1F0;
      }
      goto L_0896D1EC;
    }
L_0896D1EC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_0896D1F0;
L_0896D1F0:
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D420;
      }
      goto L_0896D200;
    }
L_0896D200:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0896D210u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 313u, 0x089669E4u>(ctx, &aot_mem) && ctx.pc == 0x0896D210u) goto L_0896D210;
    return;
L_0896D210:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896D224;
      }
      goto L_0896D218;
    }
L_0896D218:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E3EC;
      }
      goto L_0896D224;
    }
L_0896D224:
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-1)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(4, ctx.gpr[3] >> 31u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0896D244;
      }
      goto L_0896D240;
    }
L_0896D240:
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(-12));
    goto L_0896D244;
L_0896D244:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 11u);
    ctx.set_gpr(5, ctx.gpr[3] >> 16u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(4, ctx.gpr[3] >> 31u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0896D278;
      }
      goto L_0896D268;
    }
L_0896D268:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] & 32767u);
    ctx.set_gpr(3, ctx.gpr[3] << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[3]);
    goto L_0896D278;
L_0896D278:
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 27u);
    ctx.set_gpr(3, ctx.gpr[3] >> 28u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(30, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_0896D2DC;
      }
      goto L_0896D2B0;
    }
L_0896D2B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896D2CC;
      }
      goto L_0896D2C0;
    }
L_0896D2C0:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0896D2CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 336u, 0x08961BA4u>(ctx, &aot_mem) && ctx.pc == 0x0896D2CCu) goto L_0896D2CC;
    return;
L_0896D2CC:
    ctx.set_gpr(30, ctx.gpr[30] + ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[18] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D420;
      }
      goto L_0896D2DC;
    }
L_0896D2DC:
    ctx.set_gpr(19, ctx.gpr[16] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, ctx.gpr[19] >> 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0896D330;
      }
      goto L_0896D2F4;
    }
L_0896D2F4:
    ctx.set_gpr(1, ctx.gpr[16] < static_cast<std::uint32_t>(3) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D330;
      }
      goto L_0896D300;
    }
L_0896D300:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0896D330;
      }
      goto L_0896D308;
    }
L_0896D308:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896D320u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896D320u) goto L_0896D320;
    return;
L_0896D320:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(3700));
    ctx.set_gpr(31, 0x0896D330u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x0896D330u) goto L_0896D330;
    return;
L_0896D330:
    ctx.set_gpr(1, ctx.gpr[16] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896D358;
      }
      goto L_0896D33C;
    }
L_0896D33C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0896D350u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x0896D350u) goto L_0896D350;
    return;
L_0896D350:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D3C4;
      }
      goto L_0896D358;
    }
L_0896D358:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(1, ctx.gpr[16] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896D3C4;
      }
      goto L_0896D37C;
    }
L_0896D37C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(1, ctx.gpr[16] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896D3C4;
      }
      goto L_0896D398;
    }
L_0896D398:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(1, ctx.gpr[16] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896D3C4;
      }
      goto L_0896D3B4;
    }
L_0896D3B4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    goto L_0896D3C4;
L_0896D3C4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x0896D3D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 373u, 0x0896A9DCu>(ctx, &aot_mem) && ctx.pc == 0x0896D3D4u) goto L_0896D3D4;
    return;
L_0896D3D4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0896D3F0;
      }
      goto L_0896D3E0;
    }
L_0896D3E0:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0896D3F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 180u, 0x08960E58u>(ctx, &aot_mem) && ctx.pc == 0x0896D3F0u) goto L_0896D3F0;
    return;
L_0896D3F0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896D410;
      }
      goto L_0896D404;
    }
L_0896D404:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D414;
      }
      goto L_0896D410;
    }
L_0896D410:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_0896D414;
L_0896D414:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E3EC;
      }
      goto L_0896D420;
    }
L_0896D420:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0896D468;
      }
      goto L_0896D42C;
    }
L_0896D42C:
    ctx.set_gpr(1, ctx.gpr[30] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D468;
      }
      goto L_0896D438;
    }
L_0896D438:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0896D468;
      }
      goto L_0896D440;
    }
L_0896D440:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896D458u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896D458u) goto L_0896D458;
    return;
L_0896D458:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(3716));
    ctx.set_gpr(31, 0x0896D468u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x0896D468u) goto L_0896D468;
    return;
L_0896D468:
    ctx.set_gpr(16, ctx.gpr[30] - ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896D688;
      }
      goto L_0896D474;
    }
L_0896D474:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0896D4A0;
      }
      goto L_0896D484;
    }
L_0896D484:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0896D4A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 679u, 0x08812C2Cu>(ctx, &aot_mem) && ctx.pc == 0x0896D4A0u) goto L_0896D4A0;
    return;
L_0896D4A0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[20] & 65535u);
    ctx.set_gpr(3, ctx.gpr[2] << 5u);
    ctx.set_gpr(2, 65504u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 31u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896D594;
      }
      goto L_0896D4D0;
    }
L_0896D4D0:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, (ctx.gpr[20] >> 16u) & 0x00007FFFu);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[5] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896D5C4;
      }
      goto L_0896D4FC;
    }
L_0896D4FC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, 0u & 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
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
          goto L_0896D5C4;
      }
      goto L_0896D594;
    }
L_0896D594:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(3, ctx.gpr[2] >> 31u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0896D5C4;
      }
      goto L_0896D5AC;
    }
L_0896D5AC:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, 0u & 32767u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[2]));
    goto L_0896D5C4;
L_0896D5C4:
    ctx.set_gpr(3, ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[19] - ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] >> 2u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 15u);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
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
          goto L_0896D62C;
      }
      goto L_0896D61C;
    }
L_0896D61C:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] & 32767u);
    ctx.set_gpr(2, ctx.gpr[2] << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[2]);
    goto L_0896D62C;
L_0896D62C:
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 27u);
    ctx.set_gpr(2, ctx.gpr[2] >> 28u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[19]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E2A0;
      }
      goto L_0896D688;
    }
L_0896D688:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(1, ctx.gpr[16] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896DAC8;
      }
      goto L_0896D6A4;
    }
L_0896D6A4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0896D6D0;
      }
      goto L_0896D6B4;
    }
L_0896D6B4:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0896D6D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 679u, 0x08812C2Cu>(ctx, &aot_mem) && ctx.pc == 0x0896D6D0u) goto L_0896D6D0;
    return;
L_0896D6D0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, ctx.gpr[3] << 5u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-8161));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(6, 0u & 1u);
    ctx.set_gpr(4, ctx.gpr[6] << 6u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-65));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, ctx.gpr[6] << 5u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-33));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[6]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0896D87C;
      }
      goto L_0896D744;
    }
L_0896D744:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D87C;
      }
      goto L_0896D74C;
    }
L_0896D74C:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 4u);
    ctx.set_gpr(1, ctx.gpr[30] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D76C;
      }
      goto L_0896D760;
    }
L_0896D760:
    ctx.set_gpr(3, ctx.gpr[2] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896D83C;
      }
      goto L_0896D76C;
    }
L_0896D76C:
    ctx.set_gpr(20, ctx.gpr[30] + static_cast<std::uint32_t>(-12));
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, (ctx.gpr[20] >> 16u) & 0x00007FFFu);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, (ctx.gpr[2] >> 8u) & 0x000001FFu);
    ctx.set_gpr(3, ctx.gpr[2] << 15u);
    ctx.set_gpr(2, 65280u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32767u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, 0u & 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
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
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D9CC;
      }
      goto L_0896D83C;
    }
L_0896D83C:
    ctx.set_gpr(20, ctx.gpr[30] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[6] << 7u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u & 15u);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D9CC;
      }
      goto L_0896D87C;
    }
L_0896D87C:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[20] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D898;
      }
      goto L_0896D88C;
    }
L_0896D88C:
    ctx.set_gpr(3, ctx.gpr[2] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896D964;
      }
      goto L_0896D898;
    }
L_0896D898:
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, (ctx.gpr[20] >> 16u) & 0x00007FFFu);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, (ctx.gpr[2] >> 8u) & 0x000001FFu);
    ctx.set_gpr(3, ctx.gpr[2] << 15u);
    ctx.set_gpr(2, 65280u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32767u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, 0u & 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
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
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896D998;
      }
      goto L_0896D94C;
    }
L_0896D94C:
    ctx.set_gpr(3, ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(30, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896D998;
      }
      goto L_0896D964;
    }
L_0896D964:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, 0u & 1u);
    ctx.set_gpr(3, ctx.gpr[2] << 7u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896D998;
      }
      goto L_0896D988;
    }
L_0896D988:
    ctx.set_gpr(3, ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(30, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    goto L_0896D998;
L_0896D998:
    ctx.set_gpr(3, ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[30] - ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] >> 2u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 15u);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_0896D9CC;
L_0896D9CC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[20] & 65535u);
    ctx.set_gpr(3, ctx.gpr[2] << 5u);
    ctx.set_gpr(2, 65504u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 31u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, ctx.gpr[2] & 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
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
          goto L_0896DA3C;
      }
      goto L_0896DA2C;
    }
L_0896DA2C:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] & 32767u);
    ctx.set_gpr(2, ctx.gpr[2] << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[2]);
    goto L_0896DA3C;
L_0896DA3C:
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 27u);
    ctx.set_gpr(2, ctx.gpr[2] >> 28u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0896DA98;
      }
      goto L_0896DA88;
    }
L_0896DA88:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0896DA98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 180u, 0x08960E58u>(ctx, &aot_mem) && ctx.pc == 0x0896DA98u) goto L_0896DA98;
    return;
L_0896DA98:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896DAB8;
      }
      goto L_0896DAAC;
    }
L_0896DAAC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896DABC;
      }
      goto L_0896DAB8;
    }
L_0896DAB8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_0896DABC;
L_0896DABC:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E3EC;
      }
      goto L_0896DAC8;
    }
L_0896DAC8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896DC38;
      }
      goto L_0896DAD4;
    }
L_0896DAD4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[20] & 65535u);
    ctx.set_gpr(3, ctx.gpr[2] << 5u);
    ctx.set_gpr(2, 65504u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 31u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896DBC8;
      }
      goto L_0896DB04;
    }
L_0896DB04:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, (ctx.gpr[20] >> 16u) & 0x00007FFFu);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[5] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896DBF8;
      }
      goto L_0896DB30;
    }
L_0896DB30:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, 0u & 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
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
          goto L_0896DBF8;
      }
      goto L_0896DBC8;
    }
L_0896DBC8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(3, ctx.gpr[2] >> 31u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0896DBF8;
      }
      goto L_0896DBE0;
    }
L_0896DBE0:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, 0u & 32767u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[2]));
    goto L_0896DBF8;
L_0896DBF8:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[19] - ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] >> 2u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 15u);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896DFA0;
      }
      goto L_0896DC38;
    }
L_0896DC38:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0896DC64;
      }
      goto L_0896DC48;
    }
L_0896DC48:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0896DC64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 679u, 0x08812C2Cu>(ctx, &aot_mem) && ctx.pc == 0x0896DC64u) goto L_0896DC64;
    return;
L_0896DC64:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(2, ctx.gpr[3] & 255u);
    ctx.set_gpr(5, ctx.gpr[2] << 5u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-8161));
    ctx.set_gpr(2, ctx.gpr[6] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[5]);
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, 0u & 1u);
    ctx.set_gpr(6, ctx.gpr[2] << 6u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-65));
    ctx.set_gpr(5, ctx.gpr[7] & ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[6]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(6, ctx.gpr[2] << 5u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-33));
    ctx.set_gpr(5, ctx.gpr[7] & ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[6]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[6] & ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0896DE14;
      }
      goto L_0896DCDC;
    }
L_0896DCDC:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896DE14;
      }
      goto L_0896DCE4;
    }
L_0896DCE4:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 4u);
    ctx.set_gpr(1, ctx.gpr[19] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896DD04;
      }
      goto L_0896DCF8;
    }
L_0896DCF8:
    ctx.set_gpr(4, ctx.gpr[3] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896DDD4;
      }
      goto L_0896DD04;
    }
L_0896DD04:
    ctx.set_gpr(20, ctx.gpr[19] + static_cast<std::uint32_t>(-12));
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, (ctx.gpr[20] >> 16u) & 0x00007FFFu);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, (ctx.gpr[3] >> 8u) & 0x000001FFu);
    ctx.set_gpr(3, ctx.gpr[2] << 15u);
    ctx.set_gpr(2, 65280u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32767u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, 0u & 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
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
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896DF64;
      }
      goto L_0896DDD4;
    }
L_0896DDD4:
    ctx.set_gpr(20, ctx.gpr[19] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[2] << 7u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u & 15u);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896DF64;
      }
      goto L_0896DE14;
    }
L_0896DE14:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[20] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896DE30;
      }
      goto L_0896DE24;
    }
L_0896DE24:
    ctx.set_gpr(2, ctx.gpr[3] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896DEFC;
      }
      goto L_0896DE30;
    }
L_0896DE30:
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, (ctx.gpr[20] >> 16u) & 0x00007FFFu);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[6] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[5]);
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, (ctx.gpr[3] >> 8u) & 0x000001FFu);
    ctx.set_gpr(3, ctx.gpr[2] << 15u);
    ctx.set_gpr(2, 65280u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32767u);
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, 0u & 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, 0u & 31u);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-125));
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896DF30;
      }
      goto L_0896DEE4;
    }
L_0896DEE4:
    ctx.set_gpr(3, ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896DF30;
      }
      goto L_0896DEFC;
    }
L_0896DEFC:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, 0u & 1u);
    ctx.set_gpr(3, ctx.gpr[2] << 7u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896DF30;
      }
      goto L_0896DF20;
    }
L_0896DF20:
    ctx.set_gpr(3, ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    goto L_0896DF30;
L_0896DF30:
    ctx.set_gpr(3, ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[4] - ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] >> 2u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 15u);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_0896DF64;
L_0896DF64:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[20] & 65535u);
    ctx.set_gpr(3, ctx.gpr[2] << 5u);
    ctx.set_gpr(2, 65504u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 31u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, ctx.gpr[2] & 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_0896DFA0;
L_0896DFA0:
    ctx.set_gpr(5, ctx.gpr[17] + ctx.gpr[19]);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(8, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(2, ctx.gpr[4] & 255u);
    ctx.set_gpr(3, ctx.gpr[2] << 5u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-8161));
    ctx.set_gpr(2, ctx.gpr[8] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, 0u & 1u);
    ctx.set_gpr(8, ctx.gpr[3] << 6u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-65));
    ctx.set_gpr(2, ctx.gpr[9] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[8]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(8, ctx.gpr[3] << 5u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-33));
    ctx.set_gpr(2, ctx.gpr[9] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[8]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(8, ctx.gpr[8] & ctx.gpr[2]);
    ctx.set_gpr(8, ctx.gpr[8] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E148;
      }
      goto L_0896E018;
    }
L_0896E018:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 4u);
    ctx.set_gpr(1, ctx.gpr[16] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E038;
      }
      goto L_0896E02C;
    }
L_0896E02C:
    ctx.set_gpr(2, ctx.gpr[4] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896E108;
      }
      goto L_0896E038;
    }
L_0896E038:
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(-12));
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, (ctx.gpr[7] >> 16u) & 0x00007FFFu);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[6] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, (ctx.gpr[4] >> 8u) & 0x000001FFu);
    ctx.set_gpr(3, ctx.gpr[2] << 15u);
    ctx.set_gpr(2, 65280u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32767u);
    ctx.set_gpr(2, ctx.gpr[6] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, 0u & 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, 0u & 31u);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-125));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E220;
      }
      goto L_0896E108;
    }
L_0896E108:
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 7u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u & 15u);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E220;
      }
      goto L_0896E148;
    }
L_0896E148:
    ctx.set_gpr(8, 0u | 65535u);
    ctx.set_gpr(10, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(9, ctx.gpr[8] & 32767u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(8, ctx.gpr[10] & ctx.gpr[8]);
    ctx.set_gpr(8, ctx.gpr[8] | ctx.gpr[9]);
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, (ctx.gpr[4] >> 8u) & 0x000001FFu);
    ctx.set_gpr(8, ctx.gpr[4] << 15u);
    ctx.set_gpr(4, 65280u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | 32767u);
    ctx.set_gpr(4, ctx.gpr[9] & ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[8]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[9]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[8]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[9]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, 0u & 31u);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-125));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896E1FC;
      }
      goto L_0896E1F8;
    }
L_0896E1F8:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    goto L_0896E1FC;
L_0896E1FC:
    ctx.set_gpr(2, ctx.gpr[6] >> 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[7]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 15u);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_0896E220;
L_0896E220:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[7] & 65535u);
    ctx.set_gpr(3, ctx.gpr[2] << 5u);
    ctx.set_gpr(2, 65504u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 31u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[6]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[6]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896E28C;
      }
      goto L_0896E280;
    }
L_0896E280:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E290;
      }
      goto L_0896E28C;
    }
L_0896E28C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_0896E290;
L_0896E290:
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0896E2A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 373u, 0x0896A9DCu>(ctx, &aot_mem) && ctx.pc == 0x0896E2A0u) goto L_0896E2A0;
    return;
L_0896E2A0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0896E2BC;
      }
      goto L_0896E2AC;
    }
L_0896E2AC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0896E2BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 180u, 0x08960E58u>(ctx, &aot_mem) && ctx.pc == 0x0896E2BCu) goto L_0896E2BC;
    return;
L_0896E2BC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896E2DC;
      }
      goto L_0896E2D0;
    }
L_0896E2D0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E2E0;
      }
      goto L_0896E2DC;
    }
L_0896E2DC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_0896E2E0;
L_0896E2E0:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E3EC;
      }
      goto L_0896E2EC;
    }
L_0896E2EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896E308;
      }
      goto L_0896E2FC;
    }
L_0896E2FC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0896E308u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 336u, 0x08961BA4u>(ctx, &aot_mem) && ctx.pc == 0x0896E308u) goto L_0896E308;
    return;
L_0896E308:
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(500)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896E32Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896E32Cu) goto L_0896E32C;
    return;
L_0896E32C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896C15C;
      }
      goto L_0896E334;
    }
L_0896E334:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, ctx.gpr[2] & 256u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E3E8;
      }
      goto L_0896E348;
    }
L_0896E348:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896E368;
      }
      goto L_0896E358;
    }
L_0896E358:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0896E368u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 173u, 0x0893CAD8u>(ctx, &aot_mem) && ctx.pc == 0x0896E368u) goto L_0896E368;
    return;
L_0896E368:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0896E3E8;
      }
      goto L_0896E374;
    }
L_0896E374:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0896E3E8;
      }
      goto L_0896E37C;
    }
L_0896E37C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896E394u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896E394u) goto L_0896E394;
    return;
L_0896E394:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E3B0;
      }
      goto L_0896E3A0;
    }
L_0896E3A0:
    ctx.set_gpr(16, 2228u << 16u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-5868));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E3B8;
      }
      goto L_0896E3B0;
    }
L_0896E3B0:
    ctx.set_gpr(16, 2228u << 16u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-7432));
    goto L_0896E3B8;
L_0896E3B8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896E3CCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896E3CCu) goto L_0896E3CC;
    return;
L_0896E3CC:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(3764));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(31, 0x0896E3E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x0896E3E8u) goto L_0896E3E8;
    return;
L_0896E3E8:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0896E3EC;
L_0896E3EC:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896E420:
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
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(22, ctx.gpr[5] + 0u);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896E490;
      }
      goto L_0896E468;
    }
L_0896E468:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(516)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896E47Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896E47Cu) goto L_0896E47C;
    return;
L_0896E47C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(516)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896E490u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896E490u) goto L_0896E490;
    return;
L_0896E490:
    ctx.set_gpr(23, 0u + 0u);
    ctx.set_gpr(1, ctx.gpr[22] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E4B8;
      }
      goto L_0896E4A0;
    }
L_0896E4A0:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0896E4B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 313u, 0x089669E4u>(ctx, &aot_mem) && ctx.pc == 0x0896E4B0u) goto L_0896E4B0;
    return;
L_0896E4B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FA24;
      }
      goto L_0896E4B8;
    }
L_0896E4B8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(1, ctx.gpr[22] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E4D8;
      }
      goto L_0896E4D4;
    }
L_0896E4D4:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    goto L_0896E4D8;
L_0896E4D8:
    ctx.set_gpr(2, ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[22] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E508;
      }
      goto L_0896E4E8;
    }
L_0896E4E8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E4F8;
      }
      goto L_0896E4F4;
    }
L_0896E4F4:
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    goto L_0896E4F8;
L_0896E4F8:
    ctx.set_gpr(2, ctx.gpr[3] < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896E4F4;
      }
      goto L_0896E504;
    }
L_0896E504:
    ctx.set_gpr(22, ctx.gpr[3] + 0u);
    goto L_0896E508;
L_0896E508:
    ctx.set_gpr(2, ctx.gpr[20] < static_cast<std::uint32_t>(-32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896E548;
      }
      goto L_0896E514;
    }
L_0896E514:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(500)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896E534u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896E534u) goto L_0896E534;
    return;
L_0896E534:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896E598;
      }
      goto L_0896E53C;
    }
L_0896E53C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FA24;
      }
      goto L_0896E548;
    }
L_0896E548:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[20] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E568;
      }
      goto L_0896E55C;
    }
L_0896E55C:
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896E574;
      }
      goto L_0896E568;
    }
L_0896E568:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E578;
      }
      goto L_0896E574;
    }
L_0896E574:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    goto L_0896E578;
L_0896E578:
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(23, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(1, ctx.gpr[23] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E598;
      }
      goto L_0896E594;
    }
L_0896E594:
    ctx.set_gpr(23, ctx.gpr[4] + 0u);
    goto L_0896E598;
L_0896E598:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[23] + ctx.gpr[22]);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0896E5BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 313u, 0x089669E4u>(ctx, &aot_mem) && ctx.pc == 0x0896E5BCu) goto L_0896E5BC;
    return;
L_0896E5BC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896E5D0;
      }
      goto L_0896E5C4;
    }
L_0896E5C4:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FA24;
      }
      goto L_0896E5D0;
    }
L_0896E5D0:
    ctx.set_gpr(19, ctx.gpr[2] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-1)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(4, ctx.gpr[3] >> 31u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0896E5F0;
      }
      goto L_0896E5EC;
    }
L_0896E5EC:
    ctx.set_gpr(19, ctx.gpr[2] + static_cast<std::uint32_t>(-12));
    goto L_0896E5F0;
L_0896E5F0:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(3, ctx.gpr[3] >> 31u);
    ctx.set_gpr(3, ctx.gpr[3] & 255u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0896E620;
      }
      goto L_0896E60C;
    }
L_0896E60C:
    ctx.set_gpr(4, ctx.gpr[23] - ctx.gpr[20]);
    ctx.set_gpr(1, ctx.gpr[4] < static_cast<std::uint32_t>(12) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E620;
      }
      goto L_0896E61C;
    }
L_0896E61C:
    ctx.set_gpr(23, ctx.gpr[23] + static_cast<std::uint32_t>(8));
    goto L_0896E620;
L_0896E620:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] << 11u);
    ctx.set_gpr(5, ctx.gpr[4] >> 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0896E648;
      }
      goto L_0896E638;
    }
L_0896E638:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[4] & 32767u);
    ctx.set_gpr(4, ctx.gpr[4] << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[4]);
    goto L_0896E648;
L_0896E648:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] << 27u);
    ctx.set_gpr(4, ctx.gpr[4] >> 28u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(7, ctx.gpr[5] + ctx.gpr[4]);
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[22]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(4, ctx.hi);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F400;
      }
      goto L_0896E67C;
    }
L_0896E67C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[20] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E69C;
      }
      goto L_0896E690;
    }
L_0896E690:
    ctx.set_gpr(5, ctx.gpr[4] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896E6A8;
      }
      goto L_0896E69C;
    }
L_0896E69C:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E6AC;
      }
      goto L_0896E6A8;
    }
L_0896E6A8:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    goto L_0896E6AC;
L_0896E6AC:
    ctx.set_gpr(5, 0u - ctx.gpr[22]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[22]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(18, ctx.gpr[2] - ctx.gpr[6]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(6, ctx.gpr[18] - ctx.gpr[19]);
    ctx.set_gpr(5, ctx.gpr[8] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(1, ctx.gpr[6] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E6E4;
      }
      goto L_0896E6E0;
    }
L_0896E6E0:
    ctx.set_gpr(18, ctx.gpr[18] + ctx.gpr[22]);
    goto L_0896E6E4;
L_0896E6E4:
    ctx.set_gpr(2, ctx.gpr[18] - ctx.gpr[19]);
    ctx.set_gpr(17, ctx.gpr[7] - ctx.gpr[2]);
    ctx.set_gpr(30, ctx.gpr[17] - ctx.gpr[23]);
    ctx.set_gpr(5, ctx.gpr[30] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896E708;
      }
      goto L_0896E6FC;
    }
L_0896E6FC:
    ctx.set_gpr(17, ctx.gpr[17] - ctx.gpr[30]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E70C;
      }
      goto L_0896E708;
    }
L_0896E708:
    ctx.set_gpr(30, 0u + 0u);
    goto L_0896E70C;
L_0896E70C:
    ctx.set_gpr(16, ctx.gpr[18] + ctx.gpr[17]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896E72C;
      }
      goto L_0896E71C;
    }
L_0896E71C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E730;
      }
      goto L_0896E72C;
    }
L_0896E72C:
    ctx.set_gpr(3, 0u + 0u);
    goto L_0896E730;
L_0896E730:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E9C8;
      }
      goto L_0896E738;
    }
L_0896E738:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(2, ctx.gpr[4] & 255u);
    ctx.set_gpr(3, ctx.gpr[2] << 5u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-8161));
    ctx.set_gpr(2, ctx.gpr[6] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, 0u & 1u);
    ctx.set_gpr(6, ctx.gpr[3] << 6u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-65));
    ctx.set_gpr(2, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[6]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(6, ctx.gpr[3] << 5u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-33));
    ctx.set_gpr(2, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[6]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(6, ctx.gpr[6] & ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E884;
      }
      goto L_0896E7B8;
    }
L_0896E7B8:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(-12));
    ctx.set_gpr(8, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, (ctx.gpr[5] >> 16u) & 0x00007FFFu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(6, ctx.gpr[8] & ctx.gpr[6]);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[7]);
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, (ctx.gpr[4] >> 8u) & 0x000001FFu);
    ctx.set_gpr(6, ctx.gpr[4] << 15u);
    ctx.set_gpr(4, 65280u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | 32767u);
    ctx.set_gpr(4, ctx.gpr[7] & ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[6]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[7]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[6]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[7]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[8]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, 0u & 31u);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-125));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E960;
      }
      goto L_0896E884;
    }
L_0896E884:
    ctx.set_gpr(6, 0u | 65535u);
    ctx.set_gpr(8, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, ctx.gpr[6] & 32767u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(6, ctx.gpr[8] & ctx.gpr[6]);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[7]);
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, (ctx.gpr[4] >> 8u) & 0x000001FFu);
    ctx.set_gpr(6, ctx.gpr[4] << 15u);
    ctx.set_gpr(4, 65280u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | 32767u);
    ctx.set_gpr(4, ctx.gpr[7] & ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[6]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[7]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[6]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[7]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[8]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, 0u & 31u);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-125));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896E93C;
      }
      goto L_0896E938;
    }
L_0896E938:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(12));
    goto L_0896E93C;
L_0896E93C:
    ctx.set_gpr(2, ctx.gpr[17] >> 2u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 15u);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_0896E960;
L_0896E960:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[5] & 65535u);
    ctx.set_gpr(3, ctx.gpr[2] << 5u);
    ctx.set_gpr(2, 65504u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 31u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u & 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896E9B8;
      }
      goto L_0896E9AC;
    }
L_0896E9AC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896E9BC;
      }
      goto L_0896E9B8;
    }
L_0896E9B8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_0896E9BC;
L_0896E9BC:
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FA24;
      }
      goto L_0896E9C8;
    }
L_0896E9C8:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, ctx.gpr[4] & 255u);
    ctx.set_gpr(6, ctx.gpr[3] << 5u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-8161));
    ctx.set_gpr(3, ctx.gpr[7] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[6]);
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, 0u & 1u);
    ctx.set_gpr(7, ctx.gpr[3] << 6u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-65));
    ctx.set_gpr(6, ctx.gpr[8] & ctx.gpr[6]);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[7]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(7, ctx.gpr[3] << 5u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-33));
    ctx.set_gpr(6, ctx.gpr[8] & ctx.gpr[6]);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[7]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(6, ctx.gpr[7] & ctx.gpr[6]);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0896EB74;
      }
      goto L_0896EA3C;
    }
L_0896EA3C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896EB74;
      }
      goto L_0896EA44;
    }
L_0896EA44:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 4u);
    ctx.set_gpr(1, ctx.gpr[17] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896EA64;
      }
      goto L_0896EA58;
    }
L_0896EA58:
    ctx.set_gpr(5, ctx.gpr[4] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896EB34;
      }
      goto L_0896EA64;
    }
L_0896EA64:
    ctx.set_gpr(20, ctx.gpr[17] + static_cast<std::uint32_t>(-12));
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
          goto L_0896ECC4;
      }
      goto L_0896EB34;
    }
L_0896EB34:
    ctx.set_gpr(20, ctx.gpr[17] + static_cast<std::uint32_t>(-4));
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
          goto L_0896ECC4;
      }
      goto L_0896EB74;
    }
L_0896EB74:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[20] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896EB90;
      }
      goto L_0896EB84;
    }
L_0896EB84:
    ctx.set_gpr(3, ctx.gpr[4] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896EC5C;
      }
      goto L_0896EB90;
    }
L_0896EB90:
    ctx.set_gpr(7, rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, (ctx.gpr[20] >> 16u) & 0x00007FFFu);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[7] & ctx.gpr[3]);
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
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896EC90;
      }
      goto L_0896EC44;
    }
L_0896EC44:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896EC90;
      }
      goto L_0896EC5C;
    }
L_0896EC5C:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, 0u & 1u);
    ctx.set_gpr(4, ctx.gpr[3] << 7u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896EC90;
      }
      goto L_0896EC80;
    }
L_0896EC80:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(4));
    goto L_0896EC90;
L_0896EC90:
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
    goto L_0896ECC4;
L_0896ECC4:
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
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[6]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896EFDC;
      }
      goto L_0896ED14;
    }
L_0896ED14:
    ctx.set_gpr(7, ctx.gpr[30] + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(10, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, ctx.gpr[4] & 255u);
    ctx.set_gpr(9, ctx.gpr[3] << 5u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-8161));
    ctx.set_gpr(3, ctx.gpr[10] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[9]);
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, 0u & 1u);
    ctx.set_gpr(10, ctx.gpr[3] << 6u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(-65));
    ctx.set_gpr(9, ctx.gpr[11] & ctx.gpr[9]);
    ctx.set_gpr(9, ctx.gpr[9] | ctx.gpr[10]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(10, ctx.gpr[3] << 5u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(-33));
    ctx.set_gpr(9, ctx.gpr[11] & ctx.gpr[9]);
    ctx.set_gpr(9, ctx.gpr[9] | ctx.gpr[10]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, ctx.gpr[9] & ctx.gpr[5]);
    ctx.set_gpr(9, ctx.gpr[9] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896EEB8;
      }
      goto L_0896ED88;
    }
L_0896ED88:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 4u);
    ctx.set_gpr(1, ctx.gpr[30] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896EDA8;
      }
      goto L_0896ED9C;
    }
L_0896ED9C:
    ctx.set_gpr(5, ctx.gpr[4] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896EE78;
      }
      goto L_0896EDA8;
    }
L_0896EDA8:
    ctx.set_gpr(8, ctx.gpr[30] + static_cast<std::uint32_t>(-12));
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, (ctx.gpr[8] >> 16u) & 0x00007FFFu);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[5]);
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, (ctx.gpr[4] >> 8u) & 0x000001FFu);
    ctx.set_gpr(4, ctx.gpr[3] << 15u);
    ctx.set_gpr(3, 65280u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 32767u);
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(4, 0u & 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(4, ctx.gpr[4] << 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, 0u & 31u);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-125));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896EF90;
      }
      goto L_0896EE78;
    }
L_0896EE78:
    ctx.set_gpr(8, ctx.gpr[30] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, ctx.gpr[3] << 7u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u & 15u);
    ctx.set_gpr(4, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896EF90;
      }
      goto L_0896EEB8;
    }
L_0896EEB8:
    ctx.set_gpr(9, 0u | 65535u);
    ctx.set_gpr(11, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(10, ctx.gpr[9] & 32767u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(9, ctx.gpr[11] & ctx.gpr[9]);
    ctx.set_gpr(9, ctx.gpr[9] | ctx.gpr[10]);
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, (ctx.gpr[4] >> 8u) & 0x000001FFu);
    ctx.set_gpr(9, ctx.gpr[4] << 15u);
    ctx.set_gpr(4, 65280u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | 32767u);
    ctx.set_gpr(4, ctx.gpr[10] & ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(9, ctx.gpr[6] << 7u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[6]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[9]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[6]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[9]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(4, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, 0u & 31u);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-125));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896EF6C;
      }
      goto L_0896EF68;
    }
L_0896EF68:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(12));
    goto L_0896EF6C;
L_0896EF6C:
    ctx.set_gpr(3, ctx.gpr[7] >> 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & 15u);
    ctx.set_gpr(4, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_0896EF90;
L_0896EF90:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[8] & 65535u);
    ctx.set_gpr(4, ctx.gpr[3] << 5u);
    ctx.set_gpr(3, 65504u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 31u);
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[6]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(4, ctx.gpr[16] + ctx.gpr[30]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[6]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_0896EFDC;
L_0896EFDC:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[3] & 1u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(8, rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, ctx.gpr[5] & 255u);
    ctx.set_gpr(4, ctx.gpr[3] << 5u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-8161));
    ctx.set_gpr(3, ctx.gpr[8] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, 0u & 1u);
    ctx.set_gpr(8, ctx.gpr[4] << 6u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-65));
    ctx.set_gpr(3, ctx.gpr[9] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[8]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(8, ctx.gpr[4] << 5u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-33));
    ctx.set_gpr(3, ctx.gpr[9] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[8]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(8, ctx.gpr[8] & ctx.gpr[3]);
    ctx.set_gpr(8, ctx.gpr[8] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F188;
      }
      goto L_0896F058;
    }
L_0896F058:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 4u);
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F078;
      }
      goto L_0896F06C;
    }
L_0896F06C:
    ctx.set_gpr(3, ctx.gpr[5] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896F148;
      }
      goto L_0896F078;
    }
L_0896F078:
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(-12));
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, (ctx.gpr[7] >> 16u) & 0x00007FFFu);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, (ctx.gpr[5] >> 8u) & 0x000001FFu);
    ctx.set_gpr(3, ctx.gpr[2] << 15u);
    ctx.set_gpr(2, 65280u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32767u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
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
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F260;
      }
      goto L_0896F148;
    }
L_0896F148:
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[4] << 7u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u & 15u);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F260;
      }
      goto L_0896F188;
    }
L_0896F188:
    ctx.set_gpr(8, 0u | 65535u);
    ctx.set_gpr(10, rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(9, ctx.gpr[8] & 32767u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(8, ctx.gpr[10] & ctx.gpr[8]);
    ctx.set_gpr(8, ctx.gpr[8] | ctx.gpr[9]);
    rt.memory().aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, (ctx.gpr[5] >> 8u) & 0x000001FFu);
    ctx.set_gpr(8, ctx.gpr[5] << 15u);
    ctx.set_gpr(5, 65280u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] | 32767u);
    ctx.set_gpr(5, ctx.gpr[9] & ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[8]);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[9]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[8]);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[9]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(4, ctx.gpr[4] << 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, 0u & 31u);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-125));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896F23C;
      }
      goto L_0896F238;
    }
L_0896F238:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_0896F23C;
L_0896F23C:
    ctx.set_gpr(2, ctx.gpr[2] >> 2u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 15u);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_0896F260;
L_0896F260:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[7] & 65535u);
    ctx.set_gpr(3, ctx.gpr[2] << 5u);
    ctx.set_gpr(2, 65504u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 31u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[6] & 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896F2B8;
      }
      goto L_0896F2AC;
    }
L_0896F2AC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F2BC;
      }
      goto L_0896F2B8;
    }
L_0896F2B8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_0896F2BC;
L_0896F2BC:
    ctx.set_gpr(5, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0896F2CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 373u, 0x0896A9DCu>(ctx, &aot_mem) && ctx.pc == 0x0896F2CCu) goto L_0896F2CC;
    return;
L_0896F2CC:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F310;
      }
      goto L_0896F2D4;
    }
L_0896F2D4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896F2F4;
      }
      goto L_0896F2E8;
    }
L_0896F2E8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F2F8;
      }
      goto L_0896F2F4;
    }
L_0896F2F4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_0896F2F8;
L_0896F2F8:
    ctx.set_gpr(5, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0896F308u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 373u, 0x0896A9DCu>(ctx, &aot_mem) && ctx.pc == 0x0896F308u) goto L_0896F308;
    return;
L_0896F308:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F328;
      }
      goto L_0896F310;
    }
L_0896F310:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(3832));
    ctx.set_gpr(31, 0x0896F320u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 869u, 0x0894BF18u>(ctx, &aot_mem) && ctx.pc == 0x0896F320u) goto L_0896F320;
    return;
L_0896F320:
    ctx.set_gpr(31, 0x0896F328u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 28u, 0x0894C1E0u>(ctx, &aot_mem) && ctx.pc == 0x0896F328u) goto L_0896F328;
    return;
L_0896F328:
    ctx.set_gpr(19, ctx.gpr[18] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0896F9E0;
      }
      goto L_0896F338;
    }
L_0896F338:
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[23] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896F37C;
      }
      goto L_0896F344;
    }
L_0896F344:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896F364;
      }
      goto L_0896F358;
    }
L_0896F358:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F368;
      }
      goto L_0896F364;
    }
L_0896F364:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_0896F368;
L_0896F368:
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[22]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(2, ctx.hi);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F9E0;
      }
      goto L_0896F37C;
    }
L_0896F37C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0896F9E0;
      }
      goto L_0896F384;
    }
L_0896F384:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896F39Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896F39Cu) goto L_0896F39C;
    return;
L_0896F39C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0896F3A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x0896F3A8u) goto L_0896F3A8;
    return;
L_0896F3A8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0896F3B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x0896F3B8u) goto L_0896F3B8;
    return;
L_0896F3B8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896F3D0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896F3D0u) goto L_0896F3D0;
    return;
L_0896F3D0:
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11152)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(3856));
    ctx.set_gpr(31, 0x0896F3F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x0896F3F8u) goto L_0896F3F8;
    return;
L_0896F3F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F9E0;
      }
      goto L_0896F400;
    }
L_0896F400:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0896F41C;
      }
      goto L_0896F40C;
    }
L_0896F40C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F420;
      }
      goto L_0896F41C;
    }
L_0896F41C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0896F420;
L_0896F420:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896F9E0;
      }
      goto L_0896F428;
    }
L_0896F428:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(2, ctx.gpr[23] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[7] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896F888;
      }
      goto L_0896F43C;
    }
L_0896F43C:
    ctx.set_gpr(6, ctx.gpr[7] - ctx.gpr[23]);
    ctx.set_gpr(5, ctx.gpr[19] + ctx.gpr[23]);
    ctx.set_gpr(8, ctx.gpr[6] + 0u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(10, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(2, ctx.gpr[4] & 255u);
    ctx.set_gpr(3, ctx.gpr[2] << 5u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-8161));
    ctx.set_gpr(2, ctx.gpr[10] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, 0u & 1u);
    ctx.set_gpr(10, ctx.gpr[3] << 6u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-65));
    ctx.set_gpr(2, ctx.gpr[11] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[10]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(10, ctx.gpr[3] << 5u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-33));
    ctx.set_gpr(2, ctx.gpr[11] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[10]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(10, ctx.gpr[10] & ctx.gpr[2]);
    ctx.set_gpr(10, ctx.gpr[10] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F5EC;
      }
      goto L_0896F4BC;
    }
L_0896F4BC:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 4u);
    ctx.set_gpr(1, ctx.gpr[6] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F4DC;
      }
      goto L_0896F4D0;
    }
L_0896F4D0:
    ctx.set_gpr(2, ctx.gpr[4] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896F5AC;
      }
      goto L_0896F4DC;
    }
L_0896F4DC:
    ctx.set_gpr(9, ctx.gpr[6] + static_cast<std::uint32_t>(-12));
    ctx.set_gpr(8, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, (ctx.gpr[9] >> 16u) & 0x00007FFFu);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[8] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, (ctx.gpr[4] >> 8u) & 0x000001FFu);
    ctx.set_gpr(3, ctx.gpr[2] << 15u);
    ctx.set_gpr(2, 65280u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32767u);
    ctx.set_gpr(2, ctx.gpr[8] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, 0u & 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, 0u & 31u);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-125));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F6C4;
      }
      goto L_0896F5AC;
    }
L_0896F5AC:
    ctx.set_gpr(9, ctx.gpr[6] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 7u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u & 15u);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F6C4;
      }
      goto L_0896F5EC;
    }
L_0896F5EC:
    ctx.set_gpr(10, 0u | 65535u);
    ctx.set_gpr(12, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(11, ctx.gpr[10] & 32767u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(10, ctx.gpr[12] & ctx.gpr[10]);
    ctx.set_gpr(10, ctx.gpr[10] | ctx.gpr[11]);
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, (ctx.gpr[4] >> 8u) & 0x000001FFu);
    ctx.set_gpr(10, ctx.gpr[4] << 15u);
    ctx.set_gpr(4, 65280u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | 32767u);
    ctx.set_gpr(4, ctx.gpr[11] & ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[10]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[11]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[10]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[11]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, 0u & 31u);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-125));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896F6A0;
      }
      goto L_0896F69C;
    }
L_0896F69C:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(12));
    goto L_0896F6A0;
L_0896F6A0:
    ctx.set_gpr(2, ctx.gpr[8] >> 2u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 15u);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_0896F6C4;
L_0896F6C4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[9] & 65535u);
    ctx.set_gpr(3, ctx.gpr[2] << 5u);
    ctx.set_gpr(2, 65504u << 16u);
    ctx.set_gpr(10, ctx.gpr[2] | 31u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[10]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, ctx.gpr[7] - ctx.gpr[6]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[20] & 65535u);
    ctx.set_gpr(7, ctx.gpr[6] << 5u);
    ctx.set_gpr(6, ctx.gpr[8] & ctx.gpr[10]);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.set_gpr(6, 1u << 16u);
    ctx.set_gpr(6, ctx.gpr[20] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896F7EC;
      }
      goto L_0896F72C;
    }
L_0896F72C:
    ctx.set_gpr(8, rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, (ctx.gpr[20] >> 16u) & 0x00007FFFu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(6, ctx.gpr[8] & ctx.gpr[6]);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[7]);
    rt.memory().aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(6, ctx.gpr[8] << 24u);
    ctx.set_gpr(6, ctx.gpr[6] >> 31u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896F818;
      }
      goto L_0896F758;
    }
L_0896F758:
    ctx.set_gpr(7, ctx.gpr[4] << 7u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(4, ctx.gpr[8] & ctx.gpr[6]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[7]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[6]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[7]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(4, 0u & 1u);
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(4, ctx.gpr[4] << 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, 0u & 31u);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-125));
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, 0u & 511u);
    ctx.set_gpr(4, ctx.gpr[3] << 15u);
    ctx.set_gpr(3, 65280u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 32767u);
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F818;
      }
      goto L_0896F7EC;
    }
L_0896F7EC:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(3, ctx.gpr[3] >> 31u);
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_0896F818;
      }
      goto L_0896F800;
    }
L_0896F800:
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, 0u & 32767u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[3]));
    goto L_0896F818;
L_0896F818:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] >> 2u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 15u);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896F86C;
      }
      goto L_0896F860;
    }
L_0896F860:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F870;
      }
      goto L_0896F86C;
    }
L_0896F86C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_0896F870;
L_0896F870:
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0896F880u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 373u, 0x0896A9DCu>(ctx, &aot_mem) && ctx.pc == 0x0896F880u) goto L_0896F880;
    return;
L_0896F880:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F9E0;
      }
      goto L_0896F888;
    }
L_0896F888:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[20] & 65535u);
    ctx.set_gpr(3, ctx.gpr[2] << 5u);
    ctx.set_gpr(2, 65504u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 31u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896F97C;
      }
      goto L_0896F8B8;
    }
L_0896F8B8:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, (ctx.gpr[20] >> 16u) & 0x00007FFFu);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[5] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896F9AC;
      }
      goto L_0896F8E4;
    }
L_0896F8E4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[3]);
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896F9AC;
      }
      goto L_0896F97C;
    }
L_0896F97C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(3, ctx.gpr[2] >> 31u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0896F9AC;
      }
      goto L_0896F994;
    }
L_0896F994:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, 0u & 32767u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[2]));
    goto L_0896F9AC;
L_0896F9AC:
    ctx.set_gpr(3, ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[7] - ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] >> 2u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 15u);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_0896F9E0;
L_0896F9E0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0896F9FC;
      }
      goto L_0896F9EC;
    }
L_0896F9EC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0896F9FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 180u, 0x08960E58u>(ctx, &aot_mem) && ctx.pc == 0x0896F9FCu) goto L_0896F9FC;
    return;
L_0896F9FC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896FA1C;
      }
      goto L_0896FA10;
    }
L_0896FA10:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FA20;
      }
      goto L_0896FA1C;
    }
L_0896FA1C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_0896FA20;
L_0896FA20:
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    goto L_0896FA24;
L_0896FA24:
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
L_0896FA58:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0896FA68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 745u, 0x0892F23Cu>(ctx, &aot_mem) && ctx.pc == 0x0896FA68u) goto L_0896FA68;
    return;
L_0896FA68:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896FA78:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0896FA88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 566u, 0x0892E720u>(ctx, &aot_mem) && ctx.pc == 0x0896FA88u) goto L_0896FA88;
    return;
L_0896FA88:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896FA98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0896FAB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 575u, 0x0892E7DCu>(ctx, &aot_mem) && ctx.pc == 0x0896FAB8u) goto L_0896FAB8;
    return;
L_0896FAB8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FAF8;
      }
      goto L_0896FAC4;
    }
L_0896FAC4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(212)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FAF8;
      }
      goto L_0896FAD0;
    }
L_0896FAD0:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2020)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2024)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2060));
    ctx.set_gpr(31, 0x0896FAE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0896FAE8u) goto L_0896FAE8;
    return;
L_0896FAE8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(212)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(2024), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(212)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(2020), ctx.gpr[17]);
    goto L_0896FAF8;
L_0896FAF8:
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
L_0896FB14:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0896FB24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 581u, 0x0892E848u>(ctx, &aot_mem) && ctx.pc == 0x0896FB24u) goto L_0896FB24;
    return;
L_0896FB24:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896FB34:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FBB4;
      }
      goto L_0896FB60;
    }
L_0896FB60:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0896FBA8;
      }
      goto L_0896FB6C;
    }
L_0896FB6C:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896FB80u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896FB80u) goto L_0896FB80;
    return;
L_0896FB80:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896FB94u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896FB94u) goto L_0896FB94;
    return;
L_0896FB94:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-11068));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0896FBA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x0896FBA8u) goto L_0896FBA8;
    return;
L_0896FBA8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FC20;
      }
      goto L_0896FBB4;
    }
L_0896FBB4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(6, ctx.gpr[16] & ctx.gpr[2]);
    ctx.set_gpr(31, 0x0896FBC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 297u, 0x0892D488u>(ctx, &aot_mem) && ctx.pc == 0x0896FBC4u) goto L_0896FBC4;
    return;
L_0896FBC4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0896FBDC;
      }
      goto L_0896FBD0;
    }
L_0896FBD0:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FC20;
      }
      goto L_0896FBDC;
    }
L_0896FBDC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896FC1C;
      }
      goto L_0896FBE8;
    }
L_0896FBE8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(212)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(2036), ctx.gpr[17]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(3, ctx.gpr[16] & ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(212)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(2044), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(212)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(2048), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(212)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(2056), ctx.gpr[3]);
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FC20;
      }
      goto L_0896FC1C;
    }
L_0896FC1C:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    goto L_0896FC20;
L_0896FC20:
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
L_0896FC3C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FCBC;
      }
      goto L_0896FC68;
    }
L_0896FC68:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0896FCB0;
      }
      goto L_0896FC74;
    }
L_0896FC74:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896FC88u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896FC88u) goto L_0896FC88;
    return;
L_0896FC88:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896FC9Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896FC9Cu) goto L_0896FC9C;
    return;
L_0896FC9C:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-10960));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0896FCB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x0896FCB0u) goto L_0896FCB0;
    return;
L_0896FCB0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FE50;
      }
      goto L_0896FCBC;
    }
L_0896FCBC:
    ctx.set_gpr(1, 28672u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 1u);
    ctx.set_gpr(1, ctx.gpr[17] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FCDC;
      }
      goto L_0896FCD0;
    }
L_0896FCD0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FCE8;
      }
      goto L_0896FCDC;
    }
L_0896FCDC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FE50;
      }
      goto L_0896FCE8;
    }
L_0896FCE8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31440)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896FD00u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896FD00u) goto L_0896FD00;
    return;
L_0896FD00:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ~(ctx.gpr[2] | 0u));
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[3] & ctx.gpr[2]);
    goto L_0896FD10;
L_0896FD10:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31440)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896FD30u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896FD30u) goto L_0896FD30;
    return;
L_0896FD30:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0896FE28;
      }
      goto L_0896FD3C;
    }
L_0896FD3C:
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(500)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896FD60u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896FD60u) goto L_0896FD60;
    return;
L_0896FD60:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896FD10;
      }
      goto L_0896FD68;
    }
L_0896FD68:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, ctx.gpr[2] & 256u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FE1C;
      }
      goto L_0896FD7C;
    }
L_0896FD7C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896FD9C;
      }
      goto L_0896FD8C;
    }
L_0896FD8C:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0896FD9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 173u, 0x0893CAD8u>(ctx, &aot_mem) && ctx.pc == 0x0896FD9Cu) goto L_0896FD9C;
    return;
L_0896FD9C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0896FE1C;
      }
      goto L_0896FDA8;
    }
L_0896FDA8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0896FE1C;
      }
      goto L_0896FDB0;
    }
L_0896FDB0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896FDC8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896FDC8u) goto L_0896FDC8;
    return;
L_0896FDC8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FDE4;
      }
      goto L_0896FDD4;
    }
L_0896FDD4:
    ctx.set_gpr(16, 2228u << 16u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-5868));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FDEC;
      }
      goto L_0896FDE4;
    }
L_0896FDE4:
    ctx.set_gpr(16, 2228u << 16u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-7432));
    goto L_0896FDEC;
L_0896FDEC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896FE00u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896FE00u) goto L_0896FE00;
    return;
L_0896FE00:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(3880));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(31, 0x0896FE1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x0896FE1Cu) goto L_0896FE1C;
    return;
L_0896FE1C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FE50;
      }
      goto L_0896FE28;
    }
L_0896FE28:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(137), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(216)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896FE50u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896FE50u) goto L_0896FE50;
    return;
L_0896FE50:
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
L_0896FE6C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FEE4;
      }
      goto L_0896FE90;
    }
L_0896FE90:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0896FED8;
      }
      goto L_0896FE9C;
    }
L_0896FE9C:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896FEB0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896FEB0u) goto L_0896FEB0;
    return;
L_0896FEB0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896FEC4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896FEC4u) goto L_0896FEC4;
    return;
L_0896FEC4:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-10840));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0896FED8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x0896FED8u) goto L_0896FED8;
    return;
L_0896FED8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FF74;
      }
      goto L_0896FEE4;
    }
L_0896FEE4:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FF0C;
      }
      goto L_0896FEEC;
    }
L_0896FEEC:
    ctx.set_gpr(1, 28672u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 1u);
    ctx.set_gpr(1, ctx.gpr[17] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FF0C;
      }
      goto L_0896FF00;
    }
L_0896FF00:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FF18;
      }
      goto L_0896FF0C;
    }
L_0896FF0C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FF74;
      }
      goto L_0896FF18;
    }
L_0896FF18:
    ctx.set_gpr(3, ctx.gpr[17] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(17, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[6] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896FF3Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896FF3Cu) goto L_0896FF3C;
    return;
L_0896FF3C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896FF50;
      }
      goto L_0896FF44;
    }
L_0896FF44:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FF74;
      }
      goto L_0896FF50;
    }
L_0896FF50:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(137), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(216)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896FF74u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896FF74u) goto L_0896FF74;
    return;
L_0896FF74:
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
L_0896FF8C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896FFFC;
      }
      goto L_0896FFA8;
    }
L_0896FFA8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0896FFF0;
      }
      goto L_0896FFB4;
    }
L_0896FFB4:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896FFC8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896FFC8u) goto L_0896FFC8;
    return;
L_0896FFC8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896FFDCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896FFDCu) goto L_0896FFDC;
    return;
L_0896FFDC:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-10720));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0896FFF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x0896FFF0u) goto L_0896FFF0;
    return;
L_0896FFF0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 11u, 0x0897008Cu>(ctx, &aot_mem); return;
      }
      goto L_0896FFFC;
    }
L_0896FFFC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    ctx.pc = 0x08970000u; return;
}

void recomp_unit_0090(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0090_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_90(Runtime &runtime) {
    runtime.register_generated_unit(90u, 0x0896C000u, 16384u, &recomp_unit_0090, &recomp_unit_0090_entry);
    runtime.register_function(0x0896C000u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C028u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C070u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C084u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C098u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C0B0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C0C0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C0C8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C0D4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C0F4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C0FCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C108u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C120u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C12Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C138u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C13Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C158u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C15Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C178u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C17Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C1A4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C1B4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C1E8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C1F8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C200u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C214u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C220u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C230u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C238u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C24Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C26Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C278u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C288u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C2A4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C2B4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C2B8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C2C0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C2CCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C2ECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C2FCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C318u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C38Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C394u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C3A8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C3B4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C484u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C4C4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C4D4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C4E0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C594u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C5ACu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C5D0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C5E0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C614u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C664u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C670u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C674u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C680u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C6B0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C6DCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C774u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C78Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C7A4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C7ECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C7F8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C7FCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C808u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C818u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C828u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C84Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C85Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C8A4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C8B4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C8CCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C8E0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C8FCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C904u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C910u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C940u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896C96Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CA04u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CA1Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CA34u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CA74u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CAECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CAF4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CB08u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CB14u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CBE4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CC24u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CC34u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CC40u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CCF4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CD0Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CD30u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CD40u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CD74u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CDB0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CE2Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CE40u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CE4Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CF1Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896CF5Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D00Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D010u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D034u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D084u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D090u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D094u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D0A0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D0A8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D0D4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D0E4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D120u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D12Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D13Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D15Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D168u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D174u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D178u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D188u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D194u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D198u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D1B4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D1C0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D1C4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D1E0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D1ECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D1F0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D200u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D210u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D218u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D224u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D240u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D244u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D268u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D278u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D2B0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D2C0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D2CCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D2DCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D2F4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D300u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D308u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D320u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D330u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D33Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D350u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D358u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D37Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D398u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D3B4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D3C4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D3D4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D3E0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D3F0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D404u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D410u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D414u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D420u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D42Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D438u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D440u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D458u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D468u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D474u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D484u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D4A0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D4D0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D4FCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D594u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D5ACu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D5C4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D61Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D62Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D688u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D6A4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D6B4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D6D0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D744u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D74Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D760u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D76Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D83Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D87Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D88Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D898u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D94Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D964u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D988u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D998u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896D9CCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DA2Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DA3Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DA88u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DA98u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DAACu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DAB8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DABCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DAC8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DAD4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DB04u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DB30u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DBC8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DBE0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DBF8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DC38u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DC48u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DC64u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DCDCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DCE4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DCF8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DD04u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DDD4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DE14u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DE24u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DE30u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DEE4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DEFCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DF20u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DF30u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DF64u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896DFA0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E018u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E02Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E038u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E108u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E148u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E1F8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E1FCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E220u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E280u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E28Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E290u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E2A0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E2ACu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E2BCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E2D0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E2DCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E2E0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E2ECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E2FCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E308u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E32Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E334u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E348u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E358u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E368u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E374u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E37Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E394u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E3A0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E3B0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E3B8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E3CCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E3E8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E3ECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E420u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E468u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E47Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E490u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E4A0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E4B0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E4B8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E4D4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E4D8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E4E8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E4F4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E4F8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E504u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E508u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E514u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E534u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E53Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E548u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E55Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E568u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E574u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E578u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E594u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E598u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E5BCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E5C4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E5D0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E5ECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E5F0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E60Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E61Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E620u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E638u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E648u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E67Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E690u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E69Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E6A8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E6ACu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E6E0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E6E4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E6FCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E708u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E70Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E71Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E72Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E730u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E738u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E7B8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E884u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E938u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E93Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E960u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E9ACu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E9B8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E9BCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896E9C8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EA3Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EA44u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EA58u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EA64u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EB34u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EB74u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EB84u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EB90u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EC44u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EC5Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EC80u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EC90u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ECC4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ED14u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ED88u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896ED9Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EDA8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EE78u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EEB8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EF68u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EF6Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EF90u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896EFDCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F058u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F06Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F078u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F148u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F188u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F238u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F23Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F260u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F2ACu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F2B8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F2BCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F2CCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F2D4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F2E8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F2F4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F2F8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F308u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F310u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F320u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F328u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F338u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F344u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F358u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F364u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F368u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F37Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F384u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F39Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F3A8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F3B8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F3D0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F3F8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F400u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F40Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F41Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F420u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F428u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F43Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F4BCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F4D0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F4DCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F5ACu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F5ECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F69Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F6A0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F6C4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F72Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F758u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F7ECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F800u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F818u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F860u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F86Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F870u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F880u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F888u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F8B8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F8E4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F97Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F994u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F9ACu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F9E0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F9ECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896F9FCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FA10u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FA1Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FA20u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FA24u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FA58u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FA68u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FA78u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FA88u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FA98u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FAB8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FAC4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FAD0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FAE8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FAF8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FB14u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FB24u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FB34u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FB60u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FB6Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FB80u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FB94u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FBA8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FBB4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FBC4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FBD0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FBDCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FBE8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FC1Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FC20u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FC3Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FC68u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FC74u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FC88u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FC9Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FCB0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FCBCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FCD0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FCDCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FCE8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FD00u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FD10u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FD30u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FD3Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FD60u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FD68u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FD7Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FD8Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FD9Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FDA8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FDB0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FDC8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FDD4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FDE4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FDECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FE00u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FE1Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FE28u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FE50u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FE6Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FE90u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FE9Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FEB0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FEC4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FED8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FEE4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FEECu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FF00u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FF0Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FF18u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FF3Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FF44u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FF50u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FF74u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FF8Cu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FFA8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FFB4u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FFC8u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FFDCu, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FFF0u, &recomp_unit_0090, "recomp_unit_0090");
    runtime.register_function(0x0896FFFCu, &recomp_unit_0090, "recomp_unit_0090");
}
} // namespace psprecomp
