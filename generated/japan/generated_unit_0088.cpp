#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0088[4058] = {
    1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 3, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 9, 0, 0, 0, 0, 0,
    0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 13, 0, 0, 0, 0, 14, 0,
    0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21,
    0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 28, 29, 0, 0, 30, 0, 0, 0, 31,
    32, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37,
    0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 40, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44,
    0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 50, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0,
    0, 0, 0, 52, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 57, 0, 0, 0, 0, 0, 0, 0, 0,
    58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 61, 0, 0, 0, 0, 62, 0, 0, 63, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 65, 0, 0, 0, 66, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0,
    0, 0, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 75, 0, 76, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0,
    78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 91, 92, 0, 0, 0, 93, 0, 0, 94, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 98, 99, 0, 0, 100, 0, 0, 0, 101, 102, 103, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0,
    0, 107, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0,
    110, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 112, 0, 113, 114, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0,
    0, 0, 118, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 123, 0, 0, 0, 0, 0, 0, 0, 0, 124,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 127, 0, 0, 128,
    129, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 132, 0, 0, 133,
    0, 0, 0, 0, 134, 0, 0, 135, 0, 0, 136, 0, 0, 137, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0,
    142, 0, 0, 143, 0, 144, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0,
    0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 151, 0, 152, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0,
    0, 154, 0, 0, 0, 0, 155, 0, 0, 156, 0, 0, 157, 0, 0, 0, 0, 158, 0, 159, 160, 0, 0, 0, 0, 161, 0, 0, 0, 0, 162, 163,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 168, 0, 0, 169, 0, 0, 0, 0, 0,
    170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 172, 0, 0, 173, 0, 0, 174, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0,
    0, 0, 177, 0, 0, 178, 0, 0, 179, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 0, 184,
    0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 188, 0, 189, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0,
    0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 197, 0, 0, 0,
    0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 203, 0, 0, 204, 0, 0, 0, 205,
    0, 0, 206, 0, 0, 207, 0, 0, 208, 0, 0, 0, 209, 0, 0, 210, 0, 211, 0, 212, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 219, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0,
    222, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 231, 232, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 238, 0, 0, 239, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242,
    0, 0, 243, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0, 0, 248, 249, 0,
    0, 0, 250, 0, 0, 251, 0, 0, 252, 0, 0, 0, 0, 0, 253, 0, 0, 254, 255, 0, 0, 0, 256, 0, 0, 257, 258, 0, 0, 0, 0, 0,
    0, 259, 0, 0, 260, 261, 0, 0, 0, 0, 0, 0, 262, 0, 0, 263, 264, 0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0, 267, 268, 0, 269,
    0, 270, 0, 271, 0, 0, 272, 0, 0, 273, 0, 0, 274, 0, 0, 275, 276, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 0, 279, 0, 0,
    280, 281, 0, 0, 0, 282, 0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 285, 286, 0, 0, 0, 287, 0, 0, 288, 289, 0, 0, 0, 0, 0, 0,
    290, 0, 0, 291, 292, 0, 0, 0, 0, 0, 0, 293, 0, 0, 294, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 297, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 301, 302, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 304, 0, 0, 0, 0, 305, 0, 0, 306, 307, 0, 308, 0, 309, 0, 310, 0, 0, 311, 312, 0, 313, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0,
    0, 318, 0, 319, 0, 0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 322, 0, 0, 323, 324, 0, 0, 0, 0, 0, 0, 325, 326, 0, 0, 0, 0,
    327, 0, 0, 0, 328, 0, 329, 0, 0, 330, 0, 331, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 334, 0, 0, 335, 336,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 337, 0, 338, 0, 0, 0, 0, 339, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 351, 0, 0, 0, 0, 352,
    0, 0, 353, 354, 0, 0, 355, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 358, 359, 0, 0, 0, 360, 0, 0, 0,
    0, 0, 361, 0, 0, 362, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 365, 366, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 368, 0, 0, 0, 0, 369,
    0, 0, 370, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 374, 0, 0, 375, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    377, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 383, 384, 0, 0,
    0, 0, 0, 0, 385, 0, 0, 386, 387, 0, 0, 0, 0, 388, 0, 0, 0, 0, 389, 0, 0, 0, 0, 390, 0, 0, 391, 392, 0, 0, 393, 0,
    0, 0, 0, 394, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 396, 0, 0, 397, 0, 0, 398, 0, 399, 0, 0, 0, 0, 0, 400, 0, 0, 401, 402, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 404,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 406, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 410, 0, 0, 0, 0,
    411, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 415, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0,
    0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 423, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 428,
    0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430,
    0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 433, 434, 0, 0, 0, 0, 0, 0, 435, 0,
    0, 436, 437, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 439, 440, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 442, 443, 0, 0, 0, 0,
    444, 0, 0, 0, 0, 445, 0, 0, 0, 0, 446, 0, 0, 447, 448, 0, 0, 449, 0, 450, 0, 0, 451, 452, 0, 0, 0, 0, 0, 0, 0, 453,
    0, 0, 454, 455, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 458, 459,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460,
    0, 461, 0, 0, 0, 0, 462, 0, 0, 463, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 467, 0, 0, 468, 0, 469,
};
void recomp_unit_0088_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08964004u;
        entry_id = (entry_delta < 16232u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0088[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08964004;
    case 2u: goto L_08964010;
    case 3u: goto L_08964088;
    case 4u: goto L_0896409C;
    case 5u: goto L_089640A8;
    case 6u: goto L_08964178;
    case 7u: goto L_089641B8;
    case 8u: goto L_08964268;
    case 9u: goto L_0896426C;
    case 10u: goto L_08964290;
    case 11u: goto L_089642E8;
    case 12u: goto L_08964360;
    case 13u: goto L_08964368;
    case 14u: goto L_0896437C;
    case 15u: goto L_08964388;
    case 16u: goto L_08964458;
    case 17u: goto L_08964498;
    case 18u: goto L_089644A8;
    case 19u: goto L_089644B4;
    case 20u: goto L_08964568;
    case 21u: goto L_08964580;
    case 22u: goto L_089645A4;
    case 23u: goto L_089645B4;
    case 24u: goto L_089645E8;
    case 25u: goto L_0896462C;
    case 26u: goto L_08964640;
    case 27u: goto L_08964654;
    case 28u: goto L_08964660;
    case 29u: goto L_08964664;
    case 30u: goto L_08964670;
    case 31u: goto L_08964680;
    case 32u: goto L_08964684;
    case 33u: goto L_089646A8;
    case 34u: goto L_089646B8;
    case 35u: goto L_089646C4;
    case 36u: goto L_089646D8;
    case 37u: goto L_08964700;
    case 38u: goto L_0896470C;
    case 39u: goto L_08964720;
    case 40u: goto L_0896472C;
    case 41u: goto L_08964734;
    case 42u: goto L_0896474C;
    case 43u: goto L_08964768;
    case 44u: goto L_08964780;
    case 45u: goto L_089647A4;
    case 46u: goto L_089647AC;
    case 47u: goto L_089647C8;
    case 48u: goto L_089647D4;
    case 49u: goto L_089647EC;
    case 50u: goto L_089647FC;
    case 51u: goto L_0896487C;
    case 52u: goto L_08964890;
    case 53u: goto L_0896489C;
    case 54u: goto L_0896496C;
    case 55u: goto L_089649AC;
    case 56u: goto L_08964A5C;
    case 57u: goto L_08964A60;
    case 58u: goto L_08964A84;
    case 59u: goto L_08964ADC;
    case 60u: goto L_08964B54;
    case 61u: goto L_08964B5C;
    case 62u: goto L_08964B70;
    case 63u: goto L_08964B7C;
    case 64u: goto L_08964C4C;
    case 65u: goto L_08964C8C;
    case 66u: goto L_08964C9C;
    case 67u: goto L_08964CA8;
    case 68u: goto L_08964D5C;
    case 69u: goto L_08964D74;
    case 70u: goto L_08964D98;
    case 71u: goto L_08964DA8;
    case 72u: goto L_08964DDC;
    case 73u: goto L_08964E20;
    case 74u: goto L_08964E34;
    case 75u: goto L_08964E40;
    case 76u: goto L_08964E48;
    case 77u: goto L_08964E68;
    case 78u: goto L_08964E84;
    case 79u: goto L_08964E98;
    case 80u: goto L_08964EAC;
    case 81u: goto L_08964EBC;
    case 82u: goto L_08964ECC;
    case 83u: goto L_08964F3C;
    case 84u: goto L_08964F98;
    case 85u: goto L_08964FAC;
    case 86u: goto L_089650A0;
    case 87u: goto L_089650D4;
    case 88u: goto L_0896510C;
    case 89u: goto L_08965128;
    case 90u: goto L_089652A4;
    case 91u: goto L_089652B0;
    case 92u: goto L_089652B4;
    case 93u: goto L_089652C4;
    case 94u: goto L_089652D0;
    case 95u: goto L_089652D8;
    case 96u: goto L_08965424;
    case 97u: goto L_08965438;
    case 98u: goto L_08965444;
    case 99u: goto L_08965448;
    case 100u: goto L_08965454;
    case 101u: goto L_08965464;
    case 102u: goto L_08965468;
    case 103u: goto L_0896546C;
    case 104u: goto L_089654A0;
    case 105u: goto L_089654D8;
    case 106u: goto L_089654E4;
    case 107u: goto L_08965508;
    case 108u: goto L_08965518;
    case 109u: goto L_0896557C;
    case 110u: goto L_08965584;
    case 111u: goto L_08965598;
    case 112u: goto L_089655B4;
    case 113u: goto L_089655BC;
    case 114u: goto L_089655C0;
    case 115u: goto L_089655C8;
    case 116u: goto L_089655F0;
    case 117u: goto L_08965678;
    case 118u: goto L_0896568C;
    case 119u: goto L_08965698;
    case 120u: goto L_08965768;
    case 121u: goto L_089657A8;
    case 122u: goto L_08965858;
    case 123u: goto L_0896585C;
    case 124u: goto L_08965880;
    case 125u: goto L_089658D8;
    case 126u: goto L_089658E8;
    case 127u: goto L_089658F4;
    case 128u: goto L_08965900;
    case 129u: goto L_08965904;
    case 130u: goto L_08965928;
    case 131u: goto L_08965968;
    case 132u: goto L_08965974;
    case 133u: goto L_08965980;
    case 134u: goto L_08965994;
    case 135u: goto L_089659A0;
    case 136u: goto L_089659AC;
    case 137u: goto L_089659B8;
    case 138u: goto L_089659C4;
    case 139u: goto L_089659D4;
    case 140u: goto L_089659E4;
    case 141u: goto L_089659F8;
    case 142u: goto L_08965A04;
    case 143u: goto L_08965A10;
    case 144u: goto L_08965A18;
    case 145u: goto L_08965A2C;
    case 146u: goto L_08965A54;
    case 147u: goto L_08965A5C;
    case 148u: goto L_08965A70;
    case 149u: goto L_08965A94;
    case 150u: goto L_08965ACC;
    case 151u: goto L_08965AD0;
    case 152u: goto L_08965AD8;
    case 153u: goto L_08965AE4;
    case 154u: goto L_08965B08;
    case 155u: goto L_08965B1C;
    case 156u: goto L_08965B28;
    case 157u: goto L_08965B34;
    case 158u: goto L_08965B48;
    case 159u: goto L_08965B50;
    case 160u: goto L_08965B54;
    case 161u: goto L_08965B68;
    case 162u: goto L_08965B7C;
    case 163u: goto L_08965B80;
    case 164u: goto L_08965BA8;
    case 165u: goto L_08965C20;
    case 166u: goto L_08965C44;
    case 167u: goto L_08965C54;
    case 168u: goto L_08965C60;
    case 169u: goto L_08965C6C;
    case 170u: goto L_08965C84;
    case 171u: goto L_08965CA4;
    case 172u: goto L_08965CB0;
    case 173u: goto L_08965CBC;
    case 174u: goto L_08965CC8;
    case 175u: goto L_08965CD4;
    case 176u: goto L_08965CEC;
    case 177u: goto L_08965D0C;
    case 178u: goto L_08965D18;
    case 179u: goto L_08965D24;
    case 180u: goto L_08965D30;
    case 181u: goto L_08965D48;
    case 182u: goto L_08965D64;
    case 183u: goto L_08965D70;
    case 184u: goto L_08965D80;
    case 185u: goto L_08965D8C;
    case 186u: goto L_08965DA4;
    case 187u: goto L_08965DB8;
    case 188u: goto L_08965DC4;
    case 189u: goto L_08965DCC;
    case 190u: goto L_08965DD4;
    case 191u: goto L_08965DFC;
    case 192u: goto L_08965E0C;
    case 193u: goto L_08965E3C;
    case 194u: goto L_08965E48;
    case 195u: goto L_08965E58;
    case 196u: goto L_08965E68;
    case 197u: goto L_08965E74;
    case 198u: goto L_08965E88;
    case 199u: goto L_08965E9C;
    case 200u: goto L_08965EB8;
    case 201u: goto L_08965EC4;
    case 202u: goto L_08965ED8;
    case 203u: goto L_08965EE4;
    case 204u: goto L_08965EF0;
    case 205u: goto L_08965F00;
    case 206u: goto L_08965F0C;
    case 207u: goto L_08965F18;
    case 208u: goto L_08965F24;
    case 209u: goto L_08965F34;
    case 210u: goto L_08965F40;
    case 211u: goto L_08965F48;
    case 212u: goto L_08965F50;
    case 213u: goto L_08965F5C;
    case 214u: goto L_08965F74;
    case 215u: goto L_08965F9C;
    case 216u: goto L_08965FA8;
    case 217u: goto L_08965FB4;
    case 218u: goto L_08965FC8;
    case 219u: goto L_08965FD4;
    case 220u: goto L_08965FE0;
    case 221u: goto L_08965FF8;
    case 222u: goto L_08966004;
    case 223u: goto L_08966010;
    case 224u: goto L_08966028;
    case 225u: goto L_08966034;
    case 226u: goto L_089660B8;
    case 227u: goto L_089660CC;
    case 228u: goto L_089660D8;
    case 229u: goto L_089661A8;
    case 230u: goto L_089661E8;
    case 231u: goto L_08966298;
    case 232u: goto L_0896629C;
    case 233u: goto L_089662C0;
    case 234u: goto L_0896631C;
    case 235u: goto L_0896632C;
    case 236u: goto L_08966370;
    case 237u: goto L_089663A8;
    case 238u: goto L_089663B4;
    case 239u: goto L_089663C0;
    case 240u: goto L_089663CC;
    case 241u: goto L_089663D8;
    case 242u: goto L_08966400;
    case 243u: goto L_0896640C;
    case 244u: goto L_08966410;
    case 245u: goto L_08966444;
    case 246u: goto L_08966458;
    case 247u: goto L_0896646C;
    case 248u: goto L_08966478;
    case 249u: goto L_0896647C;
    case 250u: goto L_0896648C;
    case 251u: goto L_08966498;
    case 252u: goto L_089664A4;
    case 253u: goto L_089664BC;
    case 254u: goto L_089664C8;
    case 255u: goto L_089664CC;
    case 256u: goto L_089664DC;
    case 257u: goto L_089664E8;
    case 258u: goto L_089664EC;
    case 259u: goto L_08966508;
    case 260u: goto L_08966514;
    case 261u: goto L_08966518;
    case 262u: goto L_08966534;
    case 263u: goto L_08966540;
    case 264u: goto L_08966544;
    case 265u: goto L_08966554;
    case 266u: goto L_08966568;
    case 267u: goto L_08966574;
    case 268u: goto L_08966578;
    case 269u: goto L_08966580;
    case 270u: goto L_08966588;
    case 271u: goto L_08966590;
    case 272u: goto L_0896659C;
    case 273u: goto L_089665A8;
    case 274u: goto L_089665B4;
    case 275u: goto L_089665C0;
    case 276u: goto L_089665C4;
    case 277u: goto L_089665D0;
    case 278u: goto L_089665E4;
    case 279u: goto L_089665F8;
    case 280u: goto L_08966604;
    case 281u: goto L_08966608;
    case 282u: goto L_08966618;
    case 283u: goto L_08966620;
    case 284u: goto L_08966638;
    case 285u: goto L_08966644;
    case 286u: goto L_08966648;
    case 287u: goto L_08966658;
    case 288u: goto L_08966664;
    case 289u: goto L_08966668;
    case 290u: goto L_08966684;
    case 291u: goto L_08966690;
    case 292u: goto L_08966694;
    case 293u: goto L_089666B0;
    case 294u: goto L_089666BC;
    case 295u: goto L_089666C0;
    case 296u: goto L_08966740;
    case 297u: goto L_08966754;
    case 298u: goto L_08966760;
    case 299u: goto L_08966830;
    case 300u: goto L_08966870;
    case 301u: goto L_08966920;
    case 302u: goto L_08966924;
    case 303u: goto L_08966948;
    case 304u: goto L_08966990;
    case 305u: goto L_089669A4;
    case 306u: goto L_089669B0;
    case 307u: goto L_089669B4;
    case 308u: goto L_089669BC;
    case 309u: goto L_089669C4;
    case 310u: goto L_089669CC;
    case 311u: goto L_089669D8;
    case 312u: goto L_089669DC;
    case 313u: goto L_089669E4;
    case 314u: goto L_08966A28;
    case 315u: goto L_08966A3C;
    case 316u: goto L_08966A50;
    case 317u: goto L_08966A68;
    case 318u: goto L_08966A88;
    case 319u: goto L_08966A90;
    case 320u: goto L_08966A9C;
    case 321u: goto L_08966AB4;
    case 322u: goto L_08966AC0;
    case 323u: goto L_08966ACC;
    case 324u: goto L_08966AD0;
    case 325u: goto L_08966AEC;
    case 326u: goto L_08966AF0;
    case 327u: goto L_08966B04;
    case 328u: goto L_08966B14;
    case 329u: goto L_08966B1C;
    case 330u: goto L_08966B28;
    case 331u: goto L_08966B30;
    case 332u: goto L_08966B3C;
    case 333u: goto L_08966B5C;
    case 334u: goto L_08966B70;
    case 335u: goto L_08966B7C;
    case 336u: goto L_08966B80;
    case 337u: goto L_08966C0C;
    case 338u: goto L_08966C14;
    case 339u: goto L_08966C28;
    case 340u: goto L_08966C34;
    case 341u: goto L_08966D04;
    case 342u: goto L_08966D44;
    case 343u: goto L_08966D54;
    case 344u: goto L_08966D60;
    case 345u: goto L_08966E14;
    case 346u: goto L_08966E2C;
    case 347u: goto L_08966E50;
    case 348u: goto L_08966E60;
    case 349u: goto L_08966E94;
    case 350u: goto L_08966ED8;
    case 351u: goto L_08966EEC;
    case 352u: goto L_08966F00;
    case 353u: goto L_08966F0C;
    case 354u: goto L_08966F10;
    case 355u: goto L_08966F1C;
    case 356u: goto L_08966F28;
    case 357u: goto L_08966F54;
    case 358u: goto L_08966F60;
    case 359u: goto L_08966F64;
    case 360u: goto L_08966F74;
    case 361u: goto L_08966F8C;
    case 362u: goto L_08966F98;
    case 363u: goto L_08966F9C;
    case 364u: goto L_08966FCC;
    case 365u: goto L_08966FDC;
    case 366u: goto L_08966FE0;
    case 367u: goto L_08967064;
    case 368u: goto L_0896706C;
    case 369u: goto L_08967080;
    case 370u: goto L_0896708C;
    case 371u: goto L_08967094;
    case 372u: goto L_08967168;
    case 373u: goto L_089671A8;
    case 374u: goto L_089671B8;
    case 375u: goto L_089671C4;
    case 376u: goto L_089671CC;
    case 377u: goto L_08967284;
    case 378u: goto L_0896729C;
    case 379u: goto L_089672C0;
    case 380u: goto L_089672D0;
    case 381u: goto L_08967304;
    case 382u: goto L_08967368;
    case 383u: goto L_08967374;
    case 384u: goto L_08967378;
    case 385u: goto L_08967394;
    case 386u: goto L_089673A0;
    case 387u: goto L_089673A4;
    case 388u: goto L_089673B8;
    case 389u: goto L_089673CC;
    case 390u: goto L_089673E0;
    case 391u: goto L_089673EC;
    case 392u: goto L_089673F0;
    case 393u: goto L_089673FC;
    case 394u: goto L_08967410;
    case 395u: goto L_0896741C;
    case 396u: goto L_08967488;
    case 397u: goto L_08967494;
    case 398u: goto L_089674A0;
    case 399u: goto L_089674A8;
    case 400u: goto L_089674C0;
    case 401u: goto L_089674CC;
    case 402u: goto L_089674D0;
    case 403u: goto L_089674F0;
    case 404u: goto L_08967500;
    case 405u: goto L_08967530;
    case 406u: goto L_0896753C;
    case 407u: goto L_08967548;
    case 408u: goto L_08967568;
    case 409u: goto L_089675E8;
    case 410u: goto L_089675F0;
    case 411u: goto L_08967604;
    case 412u: goto L_08967610;
    case 413u: goto L_089676E0;
    case 414u: goto L_08967720;
    case 415u: goto L_08967730;
    case 416u: goto L_0896773C;
    case 417u: goto L_089677F0;
    case 418u: goto L_08967808;
    case 419u: goto L_0896782C;
    case 420u: goto L_0896783C;
    case 421u: goto L_08967870;
    case 422u: goto L_0896791C;
    case 423u: goto L_08967930;
    case 424u: goto L_0896793C;
    case 425u: goto L_08967A0C;
    case 426u: goto L_08967A4C;
    case 427u: goto L_08967AFC;
    case 428u: goto L_08967B00;
    case 429u: goto L_08967B24;
    case 430u: goto L_08967B80;
    case 431u: goto L_08967B90;
    case 432u: goto L_08967BD0;
    case 433u: goto L_08967BDC;
    case 434u: goto L_08967BE0;
    case 435u: goto L_08967BFC;
    case 436u: goto L_08967C08;
    case 437u: goto L_08967C0C;
    case 438u: goto L_08967C30;
    case 439u: goto L_08967C3C;
    case 440u: goto L_08967C40;
    case 441u: goto L_08967C60;
    case 442u: goto L_08967C6C;
    case 443u: goto L_08967C70;
    case 444u: goto L_08967C84;
    case 445u: goto L_08967C98;
    case 446u: goto L_08967CAC;
    case 447u: goto L_08967CB8;
    case 448u: goto L_08967CBC;
    case 449u: goto L_08967CC8;
    case 450u: goto L_08967CD0;
    case 451u: goto L_08967CDC;
    case 452u: goto L_08967CE0;
    case 453u: goto L_08967D00;
    case 454u: goto L_08967D0C;
    case 455u: goto L_08967D10;
    case 456u: goto L_08967D20;
    case 457u: goto L_08967D6C;
    case 458u: goto L_08967D7C;
    case 459u: goto L_08967D80;
    case 460u: goto L_08967E00;
    case 461u: goto L_08967E08;
    case 462u: goto L_08967E1C;
    case 463u: goto L_08967E28;
    case 464u: goto L_08967E30;
    case 465u: goto L_08967F04;
    case 466u: goto L_08967F44;
    case 467u: goto L_08967F54;
    case 468u: goto L_08967F60;
    case 469u: goto L_08967F68;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08964004:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08964670;
      }
      goto L_08964010;
    }
L_08964010:
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.set_gpr(5, ctx.gpr[30] - ctx.gpr[19]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(7, rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(2, ctx.gpr[4] & 255u);
    ctx.set_gpr(3, ctx.gpr[2] << 5u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-8161));
    ctx.set_gpr(2, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, 0u & 1u);
    ctx.set_gpr(7, ctx.gpr[3] << 6u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-65));
    ctx.set_gpr(2, ctx.gpr[8] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[7]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(7, ctx.gpr[3] << 5u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-33));
    ctx.set_gpr(2, ctx.gpr[8] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[7]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(7, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089641B8;
      }
      goto L_08964088;
    }
L_08964088:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 4u);
    ctx.set_gpr(1, ctx.gpr[5] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089640A8;
      }
      goto L_0896409C;
    }
L_0896409C:
    ctx.set_gpr(2, ctx.gpr[4] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08964178;
      }
      goto L_089640A8;
    }
L_089640A8:
    ctx.set_gpr(6, ctx.gpr[5] + static_cast<std::uint32_t>(-12));
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, (ctx.gpr[6] >> 16u) & 0x00007FFFu);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, (ctx.gpr[4] >> 8u) & 0x000001FFu);
    ctx.set_gpr(3, ctx.gpr[2] << 15u);
    ctx.set_gpr(2, 65280u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32767u);
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
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
          goto L_08964290;
      }
      goto L_08964178;
    }
L_08964178:
    ctx.set_gpr(6, ctx.gpr[5] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 7u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
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
          goto L_08964290;
      }
      goto L_089641B8;
    }
L_089641B8:
    ctx.set_gpr(7, 0u | 65535u);
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(8, ctx.gpr[7] & 32767u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(7, ctx.gpr[9] & ctx.gpr[7]);
    ctx.set_gpr(7, ctx.gpr[7] | ctx.gpr[8]);
    rt.memory().aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, (ctx.gpr[4] >> 8u) & 0x000001FFu);
    ctx.set_gpr(7, ctx.gpr[4] << 15u);
    ctx.set_gpr(4, 65280u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | 32767u);
    ctx.set_gpr(4, ctx.gpr[8] & ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[7]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[8]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[7]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[8]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11)));
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
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896426C;
      }
      goto L_08964268;
    }
L_08964268:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(12));
    goto L_0896426C;
L_0896426C:
    ctx.set_gpr(2, ctx.gpr[5] >> 2u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 15u);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08964290;
L_08964290:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[6] & 65535u);
    ctx.set_gpr(3, ctx.gpr[2] << 5u);
    ctx.set_gpr(2, 65504u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 31u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(532)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089642E8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089642E8u) goto L_089642E8;
    return;
L_089642E8:
    ctx.set_gpr(3, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(4, ctx.gpr[2] & 255u);
    ctx.set_gpr(5, ctx.gpr[4] << 5u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-8161));
    ctx.set_gpr(4, ctx.gpr[6] & ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[5]);
    rt.memory().aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(7, 0u & 1u);
    ctx.set_gpr(5, ctx.gpr[7] << 6u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-65));
    ctx.set_gpr(4, ctx.gpr[6] & ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(5, ctx.gpr[7] << 5u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-33));
    ctx.set_gpr(4, ctx.gpr[6] & ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[5] & ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[7]);
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08964498;
      }
      goto L_08964360;
    }
L_08964360:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964498;
      }
      goto L_08964368;
    }
L_08964368:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 4u);
    ctx.set_gpr(1, ctx.gpr[17] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964388;
      }
      goto L_0896437C;
    }
L_0896437C:
    ctx.set_gpr(3, ctx.gpr[2] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08964458;
      }
      goto L_08964388;
    }
L_08964388:
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(-12));
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, (ctx.gpr[16] >> 16u) & 0x00007FFFu);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, (ctx.gpr[2] >> 8u) & 0x000001FFu);
    ctx.set_gpr(3, ctx.gpr[2] << 15u);
    ctx.set_gpr(2, 65280u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32767u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, 0u & 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, 0u & 31u);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-125));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089645E8;
      }
      goto L_08964458;
    }
L_08964458:
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[7] << 7u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u & 15u);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089645E8;
      }
      goto L_08964498;
    }
L_08964498:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[16] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089644B4;
      }
      goto L_089644A8;
    }
L_089644A8:
    ctx.set_gpr(4, ctx.gpr[2] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08964580;
      }
      goto L_089644B4;
    }
L_089644B4:
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, (ctx.gpr[16] >> 16u) & 0x00007FFFu);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(4, ctx.gpr[6] & ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[5]);
    rt.memory().aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, (ctx.gpr[2] >> 8u) & 0x000001FFu);
    ctx.set_gpr(4, ctx.gpr[2] << 15u);
    ctx.set_gpr(2, 65280u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32767u);
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(4, 0u & 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(4, ctx.gpr[4] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, 0u & 31u);
    ctx.set_gpr(4, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-125));
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089645B4;
      }
      goto L_08964568;
    }
L_08964568:
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089645B4;
      }
      goto L_08964580;
    }
L_08964580:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, 0u & 1u);
    ctx.set_gpr(4, ctx.gpr[2] << 7u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089645B4;
      }
      goto L_089645A4;
    }
L_089645A4:
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    goto L_089645B4;
L_089645B4:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] >> 2u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 15u);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_089645E8;
L_089645E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[16] & 65535u);
    ctx.set_gpr(3, ctx.gpr[2] << 5u);
    ctx.set_gpr(2, 65504u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 31u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08964640;
      }
      goto L_0896462C;
    }
L_0896462C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08964640u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 326u, 0x08961AC4u>(ctx, &aot_mem) && ctx.pc == 0x08964640u) goto L_08964640;
    return;
L_08964640:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08964660;
      }
      goto L_08964654;
    }
L_08964654:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08964664;
      }
      goto L_08964660;
    }
L_08964660:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_08964664;
L_08964664:
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896546C;
      }
      goto L_08964670;
    }
L_08964670:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08964684;
      }
      goto L_08964680;
    }
L_08964680:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(116), 0u);
    goto L_08964684;
L_08964684:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(20, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(1, ctx.gpr[20] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089646B8;
      }
      goto L_089646A8;
    }
L_089646A8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(20, ctx.gpr[2] & ctx.gpr[3]);
    goto L_089646B8;
L_089646B8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089647AC;
      }
      goto L_089646C4;
    }
L_089646C4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964700;
      }
      goto L_089646D8;
    }
L_089646D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(180)));
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(20, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(116), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089647AC;
      }
      goto L_08964700;
    }
L_08964700:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(116)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089647AC;
      }
      goto L_0896470C;
    }
L_0896470C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, ctx.gpr[2] & 128u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089647AC;
      }
      goto L_08964720;
    }
L_08964720:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089647A4;
      }
      goto L_0896472C;
    }
L_0896472C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089647A4;
      }
      goto L_08964734;
    }
L_08964734:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0896474Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896474Cu) goto L_0896474C;
    return;
L_0896474C:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(180)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08964768u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08964768u) goto L_08964768;
    return;
L_08964768:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(320)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08964780u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08964780u) goto L_08964780;
    return;
L_08964780:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2204));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(7, ctx.gpr[30] + 0u);
    ctx.set_gpr(8, ctx.gpr[19] + 0u);
    ctx.set_gpr(9, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089647A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x089647A4u) goto L_089647A4;
    return;
L_089647A4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(116), ctx.gpr[2]);
    goto L_089647AC;
L_089647AC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(232)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089647C8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089647C8u) goto L_089647C8;
    return;
L_089647C8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08965454;
      }
      goto L_089647D4;
    }
L_089647D4:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(4, ctx.gpr[2] & 7u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089647FC;
      }
      goto L_089647EC;
    }
L_089647EC:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(3, ctx.gpr[2] | 4u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(19, ctx.gpr[3] & ctx.gpr[2]);
    goto L_089647FC;
L_089647FC:
    ctx.set_gpr(5, ctx.gpr[19] + ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.set_gpr(7, ctx.gpr[6] - ctx.gpr[5]);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(2, ctx.gpr[4] & 255u);
    ctx.set_gpr(3, ctx.gpr[2] << 5u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-8161));
    ctx.set_gpr(2, ctx.gpr[9] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, 0u & 1u);
    ctx.set_gpr(9, ctx.gpr[3] << 6u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-65));
    ctx.set_gpr(2, ctx.gpr[10] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[9]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(9, ctx.gpr[3] << 5u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-33));
    ctx.set_gpr(2, ctx.gpr[10] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[9]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(9, ctx.gpr[9] & ctx.gpr[2]);
    ctx.set_gpr(9, ctx.gpr[9] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089649AC;
      }
      goto L_0896487C;
    }
L_0896487C:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 4u);
    ctx.set_gpr(1, ctx.gpr[7] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896489C;
      }
      goto L_08964890;
    }
L_08964890:
    ctx.set_gpr(2, ctx.gpr[4] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896496C;
      }
      goto L_0896489C;
    }
L_0896489C:
    ctx.set_gpr(8, ctx.gpr[7] + static_cast<std::uint32_t>(-12));
    ctx.set_gpr(7, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, (ctx.gpr[8] >> 16u) & 0x00007FFFu);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, (ctx.gpr[4] >> 8u) & 0x000001FFu);
    ctx.set_gpr(3, ctx.gpr[2] << 15u);
    ctx.set_gpr(2, 65280u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32767u);
    ctx.set_gpr(2, ctx.gpr[7] & ctx.gpr[2]);
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
          goto L_08964A84;
      }
      goto L_0896496C;
    }
L_0896496C:
    ctx.set_gpr(8, ctx.gpr[7] + static_cast<std::uint32_t>(-4));
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
          goto L_08964A84;
      }
      goto L_089649AC;
    }
L_089649AC:
    ctx.set_gpr(9, 0u | 65535u);
    ctx.set_gpr(11, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(10, ctx.gpr[9] & 32767u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(9, ctx.gpr[11] & ctx.gpr[9]);
    ctx.set_gpr(9, ctx.gpr[9] | ctx.gpr[10]);
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, (ctx.gpr[4] >> 8u) & 0x000001FFu);
    ctx.set_gpr(9, ctx.gpr[4] << 15u);
    ctx.set_gpr(4, 65280u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | 32767u);
    ctx.set_gpr(4, ctx.gpr[10] & ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[9]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[10]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[9]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[10]);
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
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08964A60;
      }
      goto L_08964A5C;
    }
L_08964A5C:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(12));
    goto L_08964A60;
L_08964A60:
    ctx.set_gpr(2, ctx.gpr[7] >> 2u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 15u);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08964A84;
L_08964A84:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[8] & 65535u);
    ctx.set_gpr(3, ctx.gpr[2] << 5u);
    ctx.set_gpr(2, 65504u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 31u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(6, ctx.gpr[6] - ctx.gpr[19]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(532)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08964ADCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08964ADCu) goto L_08964ADC;
    return;
L_08964ADC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(2, ctx.gpr[3] & 255u);
    ctx.set_gpr(5, ctx.gpr[2] << 5u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-8161));
    ctx.set_gpr(2, ctx.gpr[6] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[5]);
    rt.memory().aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, 0u & 1u);
    ctx.set_gpr(6, ctx.gpr[2] << 6u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-65));
    ctx.set_gpr(5, ctx.gpr[7] & ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[6]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(6, ctx.gpr[2] << 5u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-33));
    ctx.set_gpr(5, ctx.gpr[7] & ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[6]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[6] & ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08964C8C;
      }
      goto L_08964B54;
    }
L_08964B54:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964C8C;
      }
      goto L_08964B5C;
    }
L_08964B5C:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 4u);
    ctx.set_gpr(1, ctx.gpr[17] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964B7C;
      }
      goto L_08964B70;
    }
L_08964B70:
    ctx.set_gpr(4, ctx.gpr[3] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08964C4C;
      }
      goto L_08964B7C;
    }
L_08964B7C:
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(-12));
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, (ctx.gpr[16] >> 16u) & 0x00007FFFu);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, (ctx.gpr[3] >> 8u) & 0x000001FFu);
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
          goto L_08964DDC;
      }
      goto L_08964C4C;
    }
L_08964C4C:
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[2] << 7u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
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
          goto L_08964DDC;
      }
      goto L_08964C8C;
    }
L_08964C8C:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[16] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964CA8;
      }
      goto L_08964C9C;
    }
L_08964C9C:
    ctx.set_gpr(2, ctx.gpr[3] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08964D74;
      }
      goto L_08964CA8;
    }
L_08964CA8:
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, (ctx.gpr[16] >> 16u) & 0x00007FFFu);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[6] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[5]);
    rt.memory().aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, (ctx.gpr[3] >> 8u) & 0x000001FFu);
    ctx.set_gpr(3, ctx.gpr[2] << 15u);
    ctx.set_gpr(2, 65280u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32767u);
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, 0u & 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, 0u & 31u);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-125));
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08964DA8;
      }
      goto L_08964D5C;
    }
L_08964D5C:
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08964DA8;
      }
      goto L_08964D74;
    }
L_08964D74:
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, 0u & 1u);
    ctx.set_gpr(3, ctx.gpr[2] << 7u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08964DA8;
      }
      goto L_08964D98;
    }
L_08964D98:
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    goto L_08964DA8;
L_08964DA8:
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[4] - ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] >> 2u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 15u);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08964DDC;
L_08964DDC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[16] & 65535u);
    ctx.set_gpr(3, ctx.gpr[2] << 5u);
    ctx.set_gpr(2, 65504u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 31u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08964E34;
      }
      goto L_08964E20;
    }
L_08964E20:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08964E34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 326u, 0x08961AC4u>(ctx, &aot_mem) && ctx.pc == 0x08964E34u) goto L_08964E34;
    return;
L_08964E34:
    ctx.set_gpr(2, ctx.gpr[22] & 7u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964E48;
      }
      goto L_08964E40;
    }
L_08964E40:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(22, ctx.gpr[22] & ctx.gpr[2]);
    goto L_08964E48;
L_08964E48:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(2, ctx.gpr[22] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089652D0;
      }
      goto L_08964E68;
    }
L_08964E68:
    ctx.set_gpr(6, ctx.gpr[22] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(3, ctx.gpr[2] >> 31u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08964F98;
      }
      goto L_08964E84;
    }
L_08964E84:
    ctx.set_gpr(5, ctx.gpr[6] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[5] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08964F3C;
      }
      goto L_08964E98;
    }
L_08964E98:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] << 8u);
    ctx.set_gpr(2, ctx.gpr[2] >> 23u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08964F3C;
      }
      goto L_08964EAC;
    }
L_08964EAC:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08964F3C;
      }
      goto L_08964EBC;
    }
L_08964EBC:
    ctx.set_gpr(2, ctx.gpr[3] << 30u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08964F3C;
      }
      goto L_08964ECC;
    }
L_08964ECC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[5] & 65535u);
    ctx.set_gpr(3, ctx.gpr[2] << 5u);
    ctx.set_gpr(2, 65504u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 31u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u & 15u);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, 0u & 1u);
    ctx.set_gpr(4, ctx.gpr[2] << 7u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08965128;
      }
      goto L_08964F3C;
    }
L_08964F3C:
    ctx.set_gpr(5, ctx.gpr[6] + static_cast<std::uint32_t>(-12));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[5] & 65535u);
    ctx.set_gpr(3, ctx.gpr[2] << 5u);
    ctx.set_gpr(2, 65504u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 31u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, (ctx.gpr[5] >> 16u) & 0x00007FFFu);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08965128;
      }
      goto L_08964F98;
    }
L_08964F98:
    ctx.set_gpr(4, ctx.gpr[6] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089650A0;
      }
      goto L_08964FAC;
    }
L_08964FAC:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-12));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[6] & 65535u);
    ctx.set_gpr(4, ctx.gpr[3] << 5u);
    ctx.set_gpr(3, 65504u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 31u);
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, (ctx.gpr[6] >> 16u) & 0x00007FFFu);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(4, ctx.gpr[2] << 7u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, 0u & 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, 0u & 31u);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-125));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u & 511u);
    ctx.set_gpr(3, ctx.gpr[2] << 15u);
    ctx.set_gpr(2, 65280u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32767u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08965128;
      }
      goto L_089650A0;
    }
L_089650A0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[4] & 65535u);
    ctx.set_gpr(4, ctx.gpr[3] << 5u);
    ctx.set_gpr(3, 65504u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 31u);
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(3, ctx.gpr[3] >> 31u);
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0896510C;
      }
      goto L_089650D4;
    }
L_089650D4:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, 0u & 32767u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08965128;
      }
      goto L_0896510C;
    }
L_0896510C:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u & 15u);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08965128;
L_08965128:
    ctx.set_gpr(2, ctx.gpr[22] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, 0u & 255u);
    ctx.set_gpr(17, ctx.gpr[3] << 5u);
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(-8161));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[17]);
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(15, 0u & 1u);
    ctx.set_gpr(14, ctx.gpr[15] << 6u);
    ctx.set_gpr(13, 0u + static_cast<std::uint32_t>(-65));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[13]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[14]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(12, ctx.gpr[15] << 5u);
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(-33));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[11]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[12]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[10]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[15]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(9, ctx.gpr[15] << 7u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[8]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[9]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u & 15u);
    ctx.set_gpr(7, ctx.gpr[3] << 1u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[6]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[7]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u & 65535u);
    ctx.set_gpr(5, ctx.gpr[3] << 5u);
    ctx.set_gpr(3, 65504u << 16u);
    ctx.set_gpr(4, ctx.gpr[3] | 31u);
    ctx.set_gpr(3, ctx.gpr[20] & ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(20, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(20, ctx.gpr[20] & ctx.gpr[10]);
    ctx.set_gpr(20, ctx.gpr[20] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.set_gpr(2, ctx.gpr[22] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(20, rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(16, ctx.gpr[20] & ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[16] | ctx.gpr[17]);
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[16]));
    ctx.set_gpr(16, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(13, ctx.gpr[16] & ctx.gpr[13]);
    ctx.set_gpr(13, ctx.gpr[13] | ctx.gpr[14]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[13]));
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(11, ctx.gpr[13] & ctx.gpr[11]);
    ctx.set_gpr(11, ctx.gpr[11] | ctx.gpr[12]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(11, ctx.gpr[11] & ctx.gpr[10]);
    ctx.set_gpr(11, ctx.gpr[11] | ctx.gpr[15]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(8, ctx.gpr[11] & ctx.gpr[8]);
    ctx.set_gpr(8, ctx.gpr[8] | ctx.gpr[9]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[8] & ctx.gpr[6]);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[7]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[6] & ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[10]);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(1988)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1988), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089652B0;
      }
      goto L_089652A4;
    }
L_089652A4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089652B4;
      }
      goto L_089652B0;
    }
L_089652B0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_089652B4;
L_089652B4:
    ctx.set_gpr(5, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089652C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 373u, 0x0896A9DCu>(ctx, &aot_mem) && ctx.pc == 0x089652C4u) goto L_089652C4;
    return;
L_089652C4:
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1988), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08965424;
      }
      goto L_089652D0;
    }
L_089652D0:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08965424;
      }
      goto L_089652D8;
    }
L_089652D8:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(2, 0u & 255u);
    ctx.set_gpr(16, ctx.gpr[2] << 5u);
    ctx.set_gpr(15, 0u + static_cast<std::uint32_t>(-8161));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[15]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[16]);
    rt.memory().aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(14, 0u & 1u);
    ctx.set_gpr(13, ctx.gpr[14] << 6u);
    ctx.set_gpr(12, 0u + static_cast<std::uint32_t>(-65));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[12]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[13]);
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(11, ctx.gpr[14] << 5u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(-33));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[10]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[11]);
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[9]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[14]);
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(8, ctx.gpr[14] << 7u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[7]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[8]);
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u & 15u);
    ctx.set_gpr(6, ctx.gpr[2] << 1u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[6]);
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u & 65535u);
    ctx.set_gpr(4, ctx.gpr[2] << 5u);
    ctx.set_gpr(2, 65504u << 16u);
    ctx.set_gpr(3, ctx.gpr[2] | 31u);
    ctx.set_gpr(2, ctx.gpr[17] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(17, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, ctx.gpr[17] & ctx.gpr[9]);
    ctx.set_gpr(17, ctx.gpr[17] | ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.set_gpr(17, rt.memory().aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(6)));
    ctx.set_gpr(15, ctx.gpr[17] & ctx.gpr[15]);
    ctx.set_gpr(15, ctx.gpr[15] | ctx.gpr[16]);
    rt.memory().aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[15]));
    ctx.set_gpr(15, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(7)));
    ctx.set_gpr(12, ctx.gpr[15] & ctx.gpr[12]);
    ctx.set_gpr(12, ctx.gpr[12] | ctx.gpr[13]);
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(7)));
    ctx.set_gpr(10, ctx.gpr[12] & ctx.gpr[10]);
    ctx.set_gpr(10, ctx.gpr[10] | ctx.gpr[11]);
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(10, ctx.gpr[10] & ctx.gpr[9]);
    ctx.set_gpr(10, ctx.gpr[10] | ctx.gpr[14]);
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(7)));
    ctx.set_gpr(7, ctx.gpr[10] & ctx.gpr[7]);
    ctx.set_gpr(7, ctx.gpr[7] | ctx.gpr[8]);
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, ctx.gpr[7] & ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[6]);
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[9]);
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08965424;
L_08965424:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08965444;
      }
      goto L_08965438;
    }
L_08965438:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08965448;
      }
      goto L_08965444;
    }
L_08965444:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_08965448;
L_08965448:
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896546C;
      }
      goto L_08965454;
    }
L_08965454:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08965468;
      }
      goto L_08965464;
    }
L_08965464:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(116), 0u);
    goto L_08965468;
L_08965468:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0896546C;
L_0896546C:
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
L_089654A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2012)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(72));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08965900;
      }
      goto L_089654D8;
    }
L_089654D8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08965900;
      }
      goto L_089654E4;
    }
L_089654E4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 11u);
    ctx.set_gpr(8, ctx.gpr[3] >> 16u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(4, ctx.gpr[3] >> 31u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08965518;
      }
      goto L_08965508;
    }
L_08965508:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] & 32767u);
    ctx.set_gpr(3, ctx.gpr[3] << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + ctx.gpr[3]);
    goto L_08965518;
L_08965518:
    ctx.set_gpr(4, ctx.gpr[8] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 27u);
    ctx.set_gpr(3, ctx.gpr[3] >> 28u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(20, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[20] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[7] + ctx.gpr[3]);
    { const std::uint32_t dividend = ctx.gpr[3]; const std::uint32_t divisor = ctx.gpr[2]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(18, ctx.lo);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089655B4;
      }
      goto L_0896557C;
    }
L_0896557C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_089655B4;
      }
      goto L_08965584;
    }
L_08965584:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(3, ctx.gpr[4] - ctx.gpr[18]);
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089655B4;
      }
      goto L_08965598;
    }
L_08965598:
    ctx.set_gpr(3, ctx.gpr[4] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[7]);
    { const std::uint32_t dividend = ctx.gpr[3]; const std::uint32_t divisor = ctx.gpr[2]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(18, ctx.lo);
    goto L_089655B4;
L_089655B4:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089655C0;
      }
      goto L_089655BC;
    }
L_089655BC:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(116), 0u);
    goto L_089655C0;
L_089655C0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08965900;
      }
      goto L_089655C8;
    }
L_089655C8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(17, ctx.gpr[2] - ctx.gpr[18]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(236)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089655F0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089655F0u) goto L_089655F0;
    return;
L_089655F0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2044)));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2044), ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[20] - ctx.gpr[18]);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(8, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(2, ctx.gpr[5] & 255u);
    ctx.set_gpr(3, ctx.gpr[2] << 5u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-8161));
    ctx.set_gpr(2, ctx.gpr[8] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, 0u & 1u);
    ctx.set_gpr(8, ctx.gpr[3] << 6u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-65));
    ctx.set_gpr(2, ctx.gpr[9] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[8]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(8, ctx.gpr[3] << 5u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-33));
    ctx.set_gpr(2, ctx.gpr[9] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[8]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(8, ctx.gpr[8] & ctx.gpr[2]);
    ctx.set_gpr(8, ctx.gpr[8] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089657A8;
      }
      goto L_08965678;
    }
L_08965678:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 4u);
    ctx.set_gpr(1, ctx.gpr[6] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08965698;
      }
      goto L_0896568C;
    }
L_0896568C:
    ctx.set_gpr(2, ctx.gpr[5] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08965768;
      }
      goto L_08965698;
    }
L_08965698:
    ctx.set_gpr(7, ctx.gpr[6] + static_cast<std::uint32_t>(-12));
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, (ctx.gpr[7] >> 16u) & 0x00007FFFu);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[6] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, (ctx.gpr[5] >> 8u) & 0x000001FFu);
    ctx.set_gpr(3, ctx.gpr[2] << 15u);
    ctx.set_gpr(2, 65280u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32767u);
    ctx.set_gpr(2, ctx.gpr[6] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, 0u & 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, 0u & 31u);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-125));
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08965880;
      }
      goto L_08965768;
    }
L_08965768:
    ctx.set_gpr(7, ctx.gpr[6] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 7u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u & 15u);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08965880;
      }
      goto L_089657A8;
    }
L_089657A8:
    ctx.set_gpr(8, 0u | 65535u);
    ctx.set_gpr(10, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(9, ctx.gpr[8] & 32767u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(8, ctx.gpr[10] & ctx.gpr[8]);
    ctx.set_gpr(8, ctx.gpr[8] | ctx.gpr[9]);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, (ctx.gpr[5] >> 8u) & 0x000001FFu);
    ctx.set_gpr(8, ctx.gpr[5] << 15u);
    ctx.set_gpr(5, 65280u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] | 32767u);
    ctx.set_gpr(5, ctx.gpr[9] & ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[8]);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[9]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[8]);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[9]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, 0u & 31u);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-125));
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896585C;
      }
      goto L_08965858;
    }
L_08965858:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    goto L_0896585C;
L_0896585C:
    ctx.set_gpr(2, ctx.gpr[6] >> 2u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 15u);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08965880;
L_08965880:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[7] & 65535u);
    ctx.set_gpr(3, ctx.gpr[2] << 5u);
    ctx.set_gpr(2, 65504u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 31u);
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(6, 0u - ctx.gpr[18]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(532)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089658D8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089658D8u) goto L_089658D8;
    return;
L_089658D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089658F4;
      }
      goto L_089658E8;
    }
L_089658E8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089658F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 336u, 0x08961BA4u>(ctx, &aot_mem) && ctx.pc == 0x089658F4u) goto L_089658F4;
    return;
L_089658F4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08965904;
      }
      goto L_08965900;
    }
L_08965900:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08965904;
L_08965904:
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
L_08965928:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(280)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08965968u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08965968u) goto L_08965968;
    return;
L_08965968:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08965974u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 473u, 0x0896B574u>(ctx, &aot_mem) && ctx.pc == 0x08965974u) goto L_08965974;
    return;
L_08965974:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089659A0;
      }
      goto L_08965980;
    }
L_08965980:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(288)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08965994u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08965994u) goto L_08965994;
    return;
L_08965994:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08965B80;
      }
      goto L_089659A0;
    }
L_089659A0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2028)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_089659C4;
      }
      goto L_089659AC;
    }
L_089659AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2024)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089659C4;
      }
      goto L_089659B8;
    }
L_089659B8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08965A04;
      }
      goto L_089659C4;
    }
L_089659C4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089659E4;
      }
      goto L_089659D4;
    }
L_089659D4:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2356));
    ctx.set_gpr(31, 0x089659E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 441u, 0x08955DC4u>(ctx, &aot_mem) && ctx.pc == 0x089659E4u) goto L_089659E4;
    return;
L_089659E4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(288)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089659F8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089659F8u) goto L_089659F8;
    return;
L_089659F8:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08965B80;
      }
      goto L_08965A04;
    }
L_08965A04:
    ctx.set_gpr(21, ctx.gpr[3] + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08965AD0;
      }
      goto L_08965A10;
    }
L_08965A10:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08965A2C;
      }
      goto L_08965A18;
    }
L_08965A18:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08965AD8;
      }
      goto L_08965A2C;
    }
L_08965A2C:
    ctx.set_gpr(18, ctx.gpr[21] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2020)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(8, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08965A54u);
    // nop
    goto L_08965BA8;
L_08965A54:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08965ACC;
      }
      goto L_08965A5C;
    }
L_08965A5C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2028)));
    ctx.set_gpr(2, ctx.gpr[6] + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08965A94;
      }
      goto L_08965A70;
    }
L_08965A70:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2020)));
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[18]);
    ctx.set_gpr(3, ctx.gpr[21] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[6] - ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[2] << 2u);
    ctx.set_gpr(31, 0x08965A94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08965A94u) goto L_08965A94;
    return;
L_08965A94:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2020)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2028)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-4), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2020)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2028)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-8), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2028)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(2028), ctx.gpr[2]);
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(1));
    goto L_08965ACC;
L_08965ACC:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(-2));
    goto L_08965AD0;
L_08965AD0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08965A10;
      }
      goto L_08965AD8;
    }
L_08965AD8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2028)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08965B50;
      }
      goto L_08965AE4;
    }
L_08965AE4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2020)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(18, ctx.gpr[2] - ctx.gpr[21]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(72));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08965B54;
      }
      goto L_08965B08;
    }
L_08965B08:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(352)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08965B1Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08965B1Cu) goto L_08965B1C;
    return;
L_08965B1C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08965B54;
      }
      goto L_08965B28;
    }
L_08965B28:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08965B54;
      }
      goto L_08965B34;
    }
L_08965B34:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08965B48u);
    // nop
    goto L_089665D0;
L_08965B48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08965B54;
      }
      goto L_08965B50;
    }
L_08965B50:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(116), 0u);
    goto L_08965B54;
L_08965B54:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1992)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08965B68u);
    // nop
    goto L_089654A0;
L_08965B68:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(288)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08965B7Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08965B7Cu) goto L_08965B7C;
    return;
L_08965B7C:
    ctx.set_gpr(2, ctx.gpr[20] + 0u);
    goto L_08965B80;
L_08965B80:
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
L_08965BA8:
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
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(63), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(17, ctx.gpr[19] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, ctx.gpr[18] - ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(16, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31440)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08965C20u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08965C20u) goto L_08965C20;
    return;
L_08965C20:
    ctx.set_gpr(23, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ~(ctx.gpr[23] | 0u));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[23]);
    ctx.set_gpr(30, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(3, 0u + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(132)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08965D18;
      }
      goto L_08965C44;
    }
L_08965C44:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(2, ctx.gpr[19] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08965C60;
      }
      goto L_08965C54;
    }
L_08965C54:
    ctx.set_gpr(1, ctx.gpr[5] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08965CB0;
      }
      goto L_08965C60;
    }
L_08965C60:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08965CA4;
      }
      goto L_08965C6C;
    }
L_08965C6C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08965C84u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08965C84u) goto L_08965C84;
    return;
L_08965C84:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2420));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(31, 0x08965CA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08965CA4u) goto L_08965CA4;
    return;
L_08965CA4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08966410;
      }
      goto L_08965CB0;
    }
L_08965CB0:
    ctx.set_gpr(2, ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08965CC8;
      }
      goto L_08965CBC;
    }
L_08965CBC:
    ctx.set_gpr(1, ctx.gpr[5] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08965D18;
      }
      goto L_08965CC8;
    }
L_08965CC8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08965D0C;
      }
      goto L_08965CD4;
    }
L_08965CD4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08965CECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08965CECu) goto L_08965CEC;
    return;
L_08965CEC:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2524));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(31, 0x08965D0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08965D0Cu) goto L_08965D0C;
    return;
L_08965D0C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08966410;
      }
      goto L_08965D18;
    }
L_08965D18:
    ctx.set_gpr(1, ctx.gpr[18] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08965D70;
      }
      goto L_08965D24;
    }
L_08965D24:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08965D64;
      }
      goto L_08965D30;
    }
L_08965D30:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08965D48u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08965D48u) goto L_08965D48;
    return;
L_08965D48:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2632));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08965D64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08965D64u) goto L_08965D64;
    return;
L_08965D64:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08966410;
      }
      goto L_08965D70;
    }
L_08965D70:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08965DC4;
      }
      goto L_08965D80;
    }
L_08965D80:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08965DB8;
      }
      goto L_08965D8C;
    }
L_08965D8C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08965DA4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08965DA4u) goto L_08965DA4;
    return;
L_08965DA4:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2744));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08965DB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08965DB8u) goto L_08965DB8;
    return;
L_08965DB8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08966410;
      }
      goto L_08965DC4;
    }
L_08965DC4:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08965F34;
      }
      goto L_08965DCC;
    }
L_08965DCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08965FC8;
      }
      goto L_08965DD4;
    }
L_08965DD4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 11u);
    ctx.set_gpr(5, ctx.gpr[2] >> 16u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    ctx.set_gpr(4, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08965E0C;
      }
      goto L_08965DFC;
    }
L_08965DFC:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] & 32767u);
    ctx.set_gpr(2, ctx.gpr[2] << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[2]);
    goto L_08965E0C;
L_08965E0C:
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 27u);
    ctx.set_gpr(2, ctx.gpr[2] >> 28u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(16, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08965E48;
      }
      goto L_08965E3C;
    }
L_08965E3C:
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08965F40;
      }
      goto L_08965E48;
    }
L_08965E48:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(1, ctx.gpr[16] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08965EE4;
      }
      goto L_08965E58;
    }
L_08965E58:
    ctx.set_gpr(3, ctx.gpr[18] - ctx.gpr[17]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08965E74;
      }
      goto L_08965E68;
    }
L_08965E68:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08965F40;
      }
      goto L_08965E74;
    }
L_08965E74:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(3, ctx.gpr[3] >> 31u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08965E9C;
      }
      goto L_08965E88;
    }
L_08965E88:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 11u);
    ctx.set_gpr(3, ctx.gpr[3] >> 16u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08965EB8;
      }
      goto L_08965E9C;
    }
L_08965E9C:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] & 32767u);
    ctx.set_gpr(5, ctx.gpr[3] << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 11u);
    ctx.set_gpr(3, ctx.gpr[3] >> 16u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    goto L_08965EB8;
L_08965EB8:
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08965F50;
      }
      goto L_08965EC4;
    }
L_08965EC4:
    ctx.set_gpr(3, ctx.gpr[18] - ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08965F50;
      }
      goto L_08965ED8;
    }
L_08965ED8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08965F40;
      }
      goto L_08965EE4;
    }
L_08965EE4:
    ctx.set_gpr(1, ctx.gpr[4] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08965F0C;
      }
      goto L_08965EF0;
    }
L_08965EF0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08965F0C;
      }
      goto L_08965F00;
    }
L_08965F00:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    goto L_08965F0C;
L_08965F0C:
    ctx.set_gpr(1, ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08965F50;
      }
      goto L_08965F18;
    }
L_08965F18:
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08965F50;
      }
      goto L_08965F24;
    }
L_08965F24:
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    goto L_08965F34;
L_08965F34:
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08965DD4;
      }
      goto L_08965F40;
    }
L_08965F40:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08965FA8;
      }
      goto L_08965F48;
    }
L_08965F48:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08965FA8;
      }
      goto L_08965F50;
    }
L_08965F50:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08965F9C;
      }
      goto L_08965F5C;
    }
L_08965F5C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08965F74u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08965F74u) goto L_08965F74;
    return;
L_08965F74:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2864));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(8, ctx.gpr[16] + 0u);
    ctx.set_gpr(9, ctx.gpr[19] + 0u);
    ctx.set_gpr(10, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08965F9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08965F9Cu) goto L_08965F9C;
    return;
L_08965F9C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08966410;
      }
      goto L_08965FA8;
    }
L_08965FA8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896640C;
      }
      goto L_08965FB4;
    }
L_08965FB4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08965FC8u);
    // nop
    goto L_08966444;
L_08965FC8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(63)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089663B4;
      }
      goto L_08965FD4;
    }
L_08965FD4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089663B4;
      }
      goto L_08965FE0;
    }
L_08965FE0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(4, ctx.gpr[5] - ctx.gpr[2]);
    ctx.set_gpr(1, ctx.gpr[30] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089663B4;
      }
      goto L_08965FF8;
    }
L_08965FF8:
    ctx.set_gpr(1, ctx.gpr[30] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08966010;
      }
      goto L_08966004;
    }
L_08966004:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08966410;
      }
      goto L_08966010;
    }
L_08966010:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, ctx.gpr[5] - ctx.gpr[30]);
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08966034;
      }
      goto L_08966028;
    }
L_08966028:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08966410;
      }
      goto L_08966034;
    }
L_08966034:
    ctx.set_gpr(2, ctx.gpr[30] - ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(16, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(8, rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(2, ctx.gpr[4] & 255u);
    ctx.set_gpr(3, ctx.gpr[2] << 5u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-8161));
    ctx.set_gpr(2, ctx.gpr[8] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, 0u & 1u);
    ctx.set_gpr(8, ctx.gpr[3] << 6u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-65));
    ctx.set_gpr(2, ctx.gpr[9] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[8]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(8, ctx.gpr[3] << 5u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-33));
    ctx.set_gpr(2, ctx.gpr[9] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[8]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(8, ctx.gpr[8] & ctx.gpr[2]);
    ctx.set_gpr(8, ctx.gpr[8] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089661E8;
      }
      goto L_089660B8;
    }
L_089660B8:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 4u);
    ctx.set_gpr(1, ctx.gpr[5] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089660D8;
      }
      goto L_089660CC;
    }
L_089660CC:
    ctx.set_gpr(2, ctx.gpr[4] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089661A8;
      }
      goto L_089660D8;
    }
L_089660D8:
    ctx.set_gpr(7, ctx.gpr[5] + static_cast<std::uint32_t>(-12));
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, (ctx.gpr[7] >> 16u) & 0x00007FFFu);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[6] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, (ctx.gpr[4] >> 8u) & 0x000001FFu);
    ctx.set_gpr(3, ctx.gpr[2] << 15u);
    ctx.set_gpr(2, 65280u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32767u);
    ctx.set_gpr(2, ctx.gpr[6] & ctx.gpr[2]);
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
          goto L_089662C0;
      }
      goto L_089661A8;
    }
L_089661A8:
    ctx.set_gpr(7, ctx.gpr[5] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 7u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
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
          goto L_089662C0;
      }
      goto L_089661E8;
    }
L_089661E8:
    ctx.set_gpr(8, 0u | 65535u);
    ctx.set_gpr(10, rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(9, ctx.gpr[8] & 32767u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(8, ctx.gpr[10] & ctx.gpr[8]);
    ctx.set_gpr(8, ctx.gpr[8] | ctx.gpr[9]);
    rt.memory().aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, (ctx.gpr[4] >> 8u) & 0x000001FFu);
    ctx.set_gpr(8, ctx.gpr[4] << 15u);
    ctx.set_gpr(4, 65280u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | 32767u);
    ctx.set_gpr(4, ctx.gpr[9] & ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[8]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[9]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[8]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[9]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11)));
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
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896629C;
      }
      goto L_08966298;
    }
L_08966298:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    goto L_0896629C;
L_0896629C:
    ctx.set_gpr(2, ctx.gpr[6] >> 2u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 15u);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_089662C0;
L_089662C0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[7] & 65535u);
    ctx.set_gpr(3, ctx.gpr[2] << 5u);
    ctx.set_gpr(2, 65504u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 31u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 11u);
    ctx.set_gpr(3, ctx.gpr[2] >> 16u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0896632C;
      }
      goto L_0896631C;
    }
L_0896631C:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] & 32767u);
    ctx.set_gpr(2, ctx.gpr[2] << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    goto L_0896632C;
L_0896632C:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 27u);
    ctx.set_gpr(2, ctx.gpr[2] >> 28u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-4), ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[19] + ctx.gpr[5]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(6, ctx.gpr[2] << 1u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08966370u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08966370u) goto L_08966370;
    return;
L_08966370:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(212)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2020)));
    ctx.set_gpr(2, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(6, ctx.gpr[18] - ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(236)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089663A8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089663A8u) goto L_089663A8;
    return;
L_089663A8:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08966410;
      }
      goto L_089663B4;
    }
L_089663B4:
    ctx.set_gpr(2, ctx.gpr[22] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089663D8;
      }
      goto L_089663C0;
    }
L_089663C0:
    ctx.set_gpr(1, ctx.gpr[22] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089663D8;
      }
      goto L_089663CC;
    }
L_089663CC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(72));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    goto L_089663D8;
L_089663D8:
    ctx.set_gpr(3, ~(ctx.gpr[23] | 0u));
    ctx.set_gpr(5, ctx.gpr[19] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[23]);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[2] - ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(236)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08966400u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08966400u) goto L_08966400;
    return;
L_08966400:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08966410;
      }
      goto L_0896640C;
    }
L_0896640C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08966410;
L_08966410:
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
L_08966444:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08966590;
      }
      goto L_08966458;
    }
L_08966458:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(3, ctx.gpr[3] >> 31u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08966478;
      }
      goto L_0896646C;
    }
L_0896646C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896647C;
      }
      goto L_08966478;
    }
L_08966478:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(12));
    goto L_0896647C;
L_0896647C:
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08966580;
      }
      goto L_0896648C;
    }
L_0896648C:
    ctx.set_gpr(8, ctx.gpr[3] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08966554;
      }
      goto L_08966498;
    }
L_08966498:
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08966554;
      }
      goto L_089664A4;
    }
L_089664A4:
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(8, ctx.gpr[8] << 24u);
    ctx.set_gpr(8, ctx.gpr[8] >> 31u);
    ctx.set_gpr(10, ctx.gpr[8] & 255u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_089664C8;
      }
      goto L_089664BC;
    }
L_089664BC:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089664CC;
      }
      goto L_089664C8;
    }
L_089664C8:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(12));
    goto L_089664CC;
L_089664CC:
    ctx.set_gpr(8, ctx.gpr[3] + ctx.gpr[8]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_089664E8;
      }
      goto L_089664DC;
    }
L_089664DC:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089664EC;
      }
      goto L_089664E8;
    }
L_089664E8:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(12));
    goto L_089664EC;
L_089664EC:
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[8]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(8, ctx.gpr[8] << 24u);
    ctx.set_gpr(8, ctx.gpr[8] >> 31u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08966514;
      }
      goto L_08966508;
    }
L_08966508:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08966518;
      }
      goto L_08966514;
    }
L_08966514:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(12));
    goto L_08966518;
L_08966518:
    ctx.set_gpr(8, ctx.gpr[9] + ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(8, ctx.gpr[8] << 24u);
    ctx.set_gpr(8, ctx.gpr[8] >> 31u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08966540;
      }
      goto L_08966534;
    }
L_08966534:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08966544;
      }
      goto L_08966540;
    }
L_08966540:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(12));
    goto L_08966544;
L_08966544:
    ctx.set_gpr(8, ctx.gpr[3] + ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08966580;
      }
      goto L_08966554;
    }
L_08966554:
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(8, ctx.gpr[8] << 24u);
    ctx.set_gpr(8, ctx.gpr[8] >> 31u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08966574;
      }
      goto L_08966568;
    }
L_08966568:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08966578;
      }
      goto L_08966574;
    }
L_08966574:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(12));
    goto L_08966578;
L_08966578:
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[8]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    goto L_08966580;
L_08966580:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0896648C;
      }
      goto L_08966588;
    }
L_08966588:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(20));
    goto L_08966590;
L_08966590:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[7]) < 96 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08966458;
      }
      goto L_0896659C;
    }
L_0896659C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089665C4;
      }
      goto L_089665A8;
    }
L_089665A8:
    ctx.set_gpr(3, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089665C4;
      }
      goto L_089665B4;
    }
L_089665B4:
    ctx.set_gpr(1, ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089665C4;
      }
      goto L_089665C0;
    }
L_089665C0:
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(48), 0u);
    goto L_089665C4;
L_089665C4:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089665D0:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(3, ctx.gpr[7] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089669CC;
      }
      goto L_089665E4;
    }
L_089665E4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08966604;
      }
      goto L_089665F8;
    }
L_089665F8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08966608;
      }
      goto L_08966604;
    }
L_08966604:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_08966608;
L_08966608:
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089669BC;
      }
      goto L_08966618;
    }
L_08966618:
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08966990;
      }
      goto L_08966620;
    }
L_08966620:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08966644;
      }
      goto L_08966638;
    }
L_08966638:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08966648;
      }
      goto L_08966644;
    }
L_08966644:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_08966648;
L_08966648:
    ctx.set_gpr(2, ctx.gpr[9] + ctx.gpr[2]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08966664;
      }
      goto L_08966658;
    }
L_08966658:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08966668;
      }
      goto L_08966664;
    }
L_08966664:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_08966668;
L_08966668:
    ctx.set_gpr(2, ctx.gpr[9] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08966690;
      }
      goto L_08966684;
    }
L_08966684:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08966694;
      }
      goto L_08966690;
    }
L_08966690:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_08966694;
L_08966694:
    ctx.set_gpr(2, ctx.gpr[8] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089666BC;
      }
      goto L_089666B0;
    }
L_089666B0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089666C0;
      }
      goto L_089666BC;
    }
L_089666BC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_089666C0;
L_089666C0:
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(2, ctx.gpr[4] & 255u);
    ctx.set_gpr(3, ctx.gpr[2] << 5u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-8161));
    ctx.set_gpr(2, ctx.gpr[9] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, 0u & 1u);
    ctx.set_gpr(9, ctx.gpr[3] << 6u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-65));
    ctx.set_gpr(2, ctx.gpr[10] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[9]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(9, ctx.gpr[3] << 5u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-33));
    ctx.set_gpr(2, ctx.gpr[10] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[9]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(9, ctx.gpr[9] & ctx.gpr[2]);
    ctx.set_gpr(9, ctx.gpr[9] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08966870;
      }
      goto L_08966740;
    }
L_08966740:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 4u);
    ctx.set_gpr(1, ctx.gpr[6] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08966760;
      }
      goto L_08966754;
    }
L_08966754:
    ctx.set_gpr(2, ctx.gpr[4] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08966830;
      }
      goto L_08966760;
    }
L_08966760:
    ctx.set_gpr(8, ctx.gpr[6] + static_cast<std::uint32_t>(-12));
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, (ctx.gpr[8] >> 16u) & 0x00007FFFu);
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
          goto L_08966948;
      }
      goto L_08966830;
    }
L_08966830:
    ctx.set_gpr(8, ctx.gpr[6] + static_cast<std::uint32_t>(-4));
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
          goto L_08966948;
      }
      goto L_08966870;
    }
L_08966870:
    ctx.set_gpr(9, 0u | 65535u);
    ctx.set_gpr(11, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(10, ctx.gpr[9] & 32767u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(9, ctx.gpr[11] & ctx.gpr[9]);
    ctx.set_gpr(9, ctx.gpr[9] | ctx.gpr[10]);
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, (ctx.gpr[4] >> 8u) & 0x000001FFu);
    ctx.set_gpr(9, ctx.gpr[4] << 15u);
    ctx.set_gpr(4, 65280u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | 32767u);
    ctx.set_gpr(4, ctx.gpr[10] & ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[9]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[10]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[9]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[10]);
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
          goto L_08966924;
      }
      goto L_08966920;
    }
L_08966920:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    goto L_08966924;
L_08966924:
    ctx.set_gpr(2, ctx.gpr[6] >> 2u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 15u);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08966948;
L_08966948:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[8] & 65535u);
    ctx.set_gpr(3, ctx.gpr[2] << 5u);
    ctx.set_gpr(2, 65504u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 31u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089669DC;
      }
      goto L_08966990;
    }
L_08966990:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089669B0;
      }
      goto L_089669A4;
    }
L_089669A4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089669B4;
      }
      goto L_089669B0;
    }
L_089669B0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_089669B4;
L_089669B4:
    ctx.set_gpr(2, ctx.gpr[9] + ctx.gpr[2]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    goto L_089669BC;
L_089669BC:
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08966618;
      }
      goto L_089669C4;
    }
L_089669C4:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(20));
    goto L_089669CC;
L_089669CC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[8]) < 96 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089665E4;
      }
      goto L_089669D8;
    }
L_089669D8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_089669DC;
L_089669DC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089669E4:
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
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08966A50;
      }
      goto L_08966A28;
    }
L_08966A28:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(516)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08966A3Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08966A3Cu) goto L_08966A3C;
    return;
L_08966A3C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(516)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08966A50u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08966A50u) goto L_08966A50;
    return;
L_08966A50:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(19, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.set_gpr(2, ctx.gpr[20] < static_cast<std::uint32_t>(-32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08966A9C;
      }
      goto L_08966A68;
    }
L_08966A68:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(500)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08966A88u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08966A88u) goto L_08966A88;
    return;
L_08966A88:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08966AF0;
      }
      goto L_08966A90;
    }
L_08966A90:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 372u, 0x0896A9A8u>(ctx, &aot_mem); return;
      }
      goto L_08966A9C;
    }
L_08966A9C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[20] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08966AC0;
      }
      goto L_08966AB4;
    }
L_08966AB4:
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08966ACC;
      }
      goto L_08966AC0;
    }
L_08966AC0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08966AD0;
      }
      goto L_08966ACC;
    }
L_08966ACC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    goto L_08966AD0;
L_08966AD0:
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(19, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(1, ctx.gpr[19] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08966AF0;
      }
      goto L_08966AEC;
    }
L_08966AEC:
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    goto L_08966AF0;
L_08966AF0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, ctx.gpr[2] & 32u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 236u, 0x08969BDCu>(ctx, &aot_mem); return;
      }
      goto L_08966B04;
    }
L_08966B04:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08966B30;
      }
      goto L_08966B14;
    }
L_08966B14:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 236u, 0x08969BDCu>(ctx, &aot_mem); return;
      }
      goto L_08966B1C;
    }
L_08966B1C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08966B28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 473u, 0x0896B574u>(ctx, &aot_mem) && ctx.pc == 0x08966B28u) goto L_08966B28;
    return;
L_08966B28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 236u, 0x08969BDCu>(ctx, &aot_mem); return;
      }
      goto L_08966B30;
    }
L_08966B30:
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08966F1C;
      }
      goto L_08966B3C;
    }
L_08966B3C:
    ctx.set_gpr(3, ctx.gpr[19] >> 3u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(4, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08966F1C;
      }
      goto L_08966B5C;
    }
L_08966B5C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08966B7C;
      }
      goto L_08966B70;
    }
L_08966B70:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08966B80;
      }
      goto L_08966B7C;
    }
L_08966B7C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_08966B80;
L_08966B80:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] & 1u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(7, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(2, ctx.gpr[3] & 255u);
    ctx.set_gpr(6, ctx.gpr[2] << 5u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-8161));
    ctx.set_gpr(2, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[6]);
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, 0u & 1u);
    ctx.set_gpr(7, ctx.gpr[2] << 6u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-65));
    ctx.set_gpr(6, ctx.gpr[8] & ctx.gpr[6]);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[7]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(7, ctx.gpr[2] << 5u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-33));
    ctx.set_gpr(6, ctx.gpr[8] & ctx.gpr[6]);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[7]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(6, ctx.gpr[7] & ctx.gpr[6]);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08966D44;
      }
      goto L_08966C0C;
    }
L_08966C0C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08966D44;
      }
      goto L_08966C14;
    }
L_08966C14:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 4u);
    ctx.set_gpr(1, ctx.gpr[19] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08966C34;
      }
      goto L_08966C28;
    }
L_08966C28:
    ctx.set_gpr(5, ctx.gpr[3] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08966D04;
      }
      goto L_08966C34;
    }
L_08966C34:
    ctx.set_gpr(20, ctx.gpr[19] + static_cast<std::uint32_t>(-12));
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
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08966E94;
      }
      goto L_08966D04;
    }
L_08966D04:
    ctx.set_gpr(20, ctx.gpr[19] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[2] << 7u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u & 15u);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08966E94;
      }
      goto L_08966D44;
    }
L_08966D44:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[20] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08966D60;
      }
      goto L_08966D54;
    }
L_08966D54:
    ctx.set_gpr(2, ctx.gpr[3] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08966E2C;
      }
      goto L_08966D60;
    }
L_08966D60:
    ctx.set_gpr(7, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, (ctx.gpr[20] >> 16u) & 0x00007FFFu);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(2, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[6]);
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, (ctx.gpr[3] >> 8u) & 0x000001FFu);
    ctx.set_gpr(3, ctx.gpr[2] << 15u);
    ctx.set_gpr(2, 65280u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32767u);
    ctx.set_gpr(2, ctx.gpr[6] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[6]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[6]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, 0u & 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[6] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(2, ctx.gpr[6] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, 0u & 31u);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-125));
    ctx.set_gpr(2, ctx.gpr[6] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08966E60;
      }
      goto L_08966E14;
    }
L_08966E14:
    ctx.set_gpr(3, ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08966E60;
      }
      goto L_08966E2C;
    }
L_08966E2C:
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, 0u & 1u);
    ctx.set_gpr(3, ctx.gpr[2] << 7u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[6] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08966E60;
      }
      goto L_08966E50;
    }
L_08966E50:
    ctx.set_gpr(3, ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    goto L_08966E60;
L_08966E60:
    ctx.set_gpr(3, ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[5] - ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] >> 2u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 15u);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08966E94;
L_08966E94:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[20] & 65535u);
    ctx.set_gpr(3, ctx.gpr[2] << 5u);
    ctx.set_gpr(2, 65504u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 31u);
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[4] & 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08966EEC;
      }
      goto L_08966ED8;
    }
L_08966ED8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08966EECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 236u, 0x089613C4u>(ctx, &aot_mem) && ctx.pc == 0x08966EECu) goto L_08966EEC;
    return;
L_08966EEC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08966F0C;
      }
      goto L_08966F00;
    }
L_08966F00:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08966F10;
      }
      goto L_08966F0C;
    }
L_08966F0C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_08966F10;
L_08966F10:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 372u, 0x0896A9A8u>(ctx, &aot_mem); return;
      }
      goto L_08966F1C;
    }
L_08966F1C:
    ctx.set_gpr(1, ctx.gpr[19] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089673FC;
      }
      goto L_08966F28;
    }
L_08966F28:
    ctx.set_gpr(18, ctx.gpr[19] >> 3u);
    ctx.set_gpr(2, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(55)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08966F60;
      }
      goto L_08966F54;
    }
L_08966F54:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08966F64;
      }
      goto L_08966F60;
    }
L_08966F60:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_08966F64;
L_08966F64:
    ctx.set_gpr(2, ctx.gpr[7] + ctx.gpr[2]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 60u, 0x0896849Cu>(ctx, &aot_mem); return;
      }
      goto L_08966F74;
    }
L_08966F74:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    ctx.set_gpr(8, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08966F98;
      }
      goto L_08966F8C;
    }
L_08966F8C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08966F9C;
      }
      goto L_08966F98;
    }
L_08966F98:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_08966F9C;
L_08966F9C:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[3] << 25u);
    ctx.set_gpr(12, ctx.gpr[2] >> 31u);
    ctx.set_gpr(2, ctx.gpr[3] << 26u);
    ctx.set_gpr(4, ctx.gpr[2] >> 31u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08966FDC;
      }
      goto L_08966FCC;
    }
L_08966FCC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, ctx.gpr[2] & 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08966FE0;
      }
      goto L_08966FDC;
    }
L_08966FDC:
    ctx.set_gpr(3, 0u + 0u);
    goto L_08966FE0;
L_08966FE0:
    ctx.set_gpr(8, ctx.gpr[19] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(11, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(9, ctx.gpr[2] & 255u);
    ctx.set_gpr(10, ctx.gpr[9] << 5u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(-8161));
    ctx.set_gpr(9, ctx.gpr[11] & ctx.gpr[9]);
    ctx.set_gpr(9, ctx.gpr[9] | ctx.gpr[10]);
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(9, 0u < ctx.gpr[12] ? 1u : 0u);
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(9, ctx.gpr[9] & 1u);
    ctx.set_gpr(10, ctx.gpr[9] << 6u);
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(-65));
    ctx.set_gpr(9, ctx.gpr[11] & ctx.gpr[9]);
    ctx.set_gpr(9, ctx.gpr[9] | ctx.gpr[10]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, ctx.gpr[4] & 1u);
    ctx.set_gpr(9, ctx.gpr[4] << 5u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-33));
    ctx.set_gpr(4, ctx.gpr[10] & ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[9]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, 0u & 1u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[10] & ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[9]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089671A8;
      }
      goto L_08967064;
    }
L_08967064:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089671A8;
      }
      goto L_0896706C;
    }
L_0896706C:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 4u);
    ctx.set_gpr(1, ctx.gpr[19] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08967094;
      }
      goto L_08967080;
    }
L_08967080:
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08967094;
      }
      goto L_0896708C;
    }
L_0896708C:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08967168;
      }
      goto L_08967094;
    }
L_08967094:
    ctx.set_gpr(20, ctx.gpr[19] + static_cast<std::uint32_t>(-12));
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(8, (ctx.gpr[20] >> 16u) & 0x00007FFFu);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(4, ctx.gpr[9] & ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[8]);
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, (ctx.gpr[2] >> 8u) & 0x000001FFu);
    ctx.set_gpr(4, ctx.gpr[2] << 15u);
    ctx.set_gpr(2, 65280u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32767u);
    ctx.set_gpr(2, ctx.gpr[8] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[8]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[8]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, 0u & 1u);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
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
          goto L_08967304;
      }
      goto L_08967168;
    }
L_08967168:
    ctx.set_gpr(20, ctx.gpr[19] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[9] << 7u);
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
          goto L_08967304;
      }
      goto L_089671A8;
    }
L_089671A8:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[20] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089671CC;
      }
      goto L_089671B8;
    }
L_089671B8:
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089671CC;
      }
      goto L_089671C4;
    }
L_089671C4:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896729C;
      }
      goto L_089671CC;
    }
L_089671CC:
    ctx.set_gpr(10, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(9, (ctx.gpr[20] >> 16u) & 0x00007FFFu);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(4, ctx.gpr[10] & ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[9]);
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, (ctx.gpr[2] >> 8u) & 0x000001FFu);
    ctx.set_gpr(4, ctx.gpr[2] << 15u);
    ctx.set_gpr(2, 65280u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32767u);
    ctx.set_gpr(2, ctx.gpr[9] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[9]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[9]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, 0u & 1u);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
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
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_089672D0;
      }
      goto L_08967284;
    }
L_08967284:
    ctx.set_gpr(3, ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(8, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089672D0;
      }
      goto L_0896729C;
    }
L_0896729C:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, 0u & 1u);
    ctx.set_gpr(3, ctx.gpr[2] << 7u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_089672D0;
      }
      goto L_089672C0;
    }
L_089672C0:
    ctx.set_gpr(3, ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(8, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    goto L_089672D0;
L_089672D0:
    ctx.set_gpr(3, ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[8] - ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] >> 2u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 15u);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08967304;
L_08967304:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[20] & 65535u);
    ctx.set_gpr(3, ctx.gpr[2] << 5u);
    ctx.set_gpr(2, 65504u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 31u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[5] & 1u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[17] + ctx.gpr[19]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08967374;
      }
      goto L_08967368;
    }
L_08967368:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08967378;
      }
      goto L_08967374;
    }
L_08967374:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_08967378;
L_08967378:
    ctx.set_gpr(2, ctx.gpr[7] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089673A0;
      }
      goto L_08967394;
    }
L_08967394:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089673A4;
      }
      goto L_089673A0;
    }
L_089673A0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_089673A4;
L_089673A4:
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089673CC;
      }
      goto L_089673B8;
    }
L_089673B8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089673CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 326u, 0x08961AC4u>(ctx, &aot_mem) && ctx.pc == 0x089673CCu) goto L_089673CC;
    return;
L_089673CC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089673EC;
      }
      goto L_089673E0;
    }
L_089673E0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089673F0;
      }
      goto L_089673EC;
    }
L_089673EC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_089673F0;
L_089673F0:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 372u, 0x0896A9A8u>(ctx, &aot_mem); return;
      }
      goto L_089673FC;
    }
L_089673FC:
    ctx.set_gpr(4, ctx.gpr[19] >> 8u);
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896741C;
      }
      goto L_08967410;
    }
L_08967410:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(95));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08967488;
      }
      goto L_0896741C;
    }
L_0896741C:
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(-256));
    ctx.set_gpr(3, ctx.gpr[3] >> 16u);
    ctx.set_gpr(5, ctx.gpr[3] & 8u);
    ctx.set_gpr(4, ctx.gpr[4] << (ctx.gpr[5] & 31u));
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(-4096));
    ctx.set_gpr(3, ctx.gpr[3] >> 16u);
    ctx.set_gpr(3, ctx.gpr[3] & 4u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[4] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(-16384));
    ctx.set_gpr(3, ctx.gpr[3] >> 16u);
    ctx.set_gpr(3, ctx.gpr[3] & 2u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[4] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(4, ctx.gpr[3] >> 14u);
    ctx.set_gpr(3, ctx.gpr[4] >> 1u);
    ctx.set_gpr(3, ~(ctx.gpr[3] | 0u));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(13));
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(3, ctx.gpr[19] >> (ctx.gpr[3] & 31u));
    ctx.set_gpr(3, ctx.gpr[3] & 3u);
    ctx.set_gpr(18, ctx.gpr[4] + ctx.gpr[3]);
    goto L_08967488;
L_08967488:
    ctx.set_gpr(2, ctx.gpr[2] & 2u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 60u, 0x0896849Cu>(ctx, &aot_mem); return;
      }
      goto L_08967494;
    }
L_08967494:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089674A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 473u, 0x0896B574u>(ctx, &aot_mem) && ctx.pc == 0x089674A0u) goto L_089674A0;
    return;
L_089674A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 60u, 0x0896849Cu>(ctx, &aot_mem); return;
      }
      goto L_089674A8;
    }
L_089674A8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    ctx.set_gpr(5, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089674CC;
      }
      goto L_089674C0;
    }
L_089674C0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089674D0;
      }
      goto L_089674CC;
    }
L_089674CC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_089674D0;
L_089674D0:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] << 11u);
    ctx.set_gpr(6, ctx.gpr[4] >> 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08967500;
      }
      goto L_089674F0;
    }
L_089674F0:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[4] & 32767u);
    ctx.set_gpr(4, ctx.gpr[4] << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[4]);
    goto L_08967500;
L_08967500:
    ctx.set_gpr(5, ctx.gpr[6] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] << 27u);
    ctx.set_gpr(4, ctx.gpr[4] >> 28u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(6, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(1, ctx.gpr[19] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08967CC8;
      }
      goto L_08967530;
    }
L_08967530:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(72));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08967CC8;
      }
      goto L_0896753C;
    }
L_0896753C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08967CC8;
      }
      goto L_08967548;
    }
L_08967548:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(4, ctx.gpr[5] & ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[19] + ctx.gpr[4]);
    ctx.set_gpr(1, ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08967CC8;
      }
      goto L_08967568;
    }
L_08967568:
    ctx.set_gpr(2, ctx.gpr[6] - ctx.gpr[19]);
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
          goto L_08967720;
      }
      goto L_089675E8;
    }
L_089675E8:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08967720;
      }
      goto L_089675F0;
    }
L_089675F0:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 4u);
    ctx.set_gpr(1, ctx.gpr[19] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08967610;
      }
      goto L_08967604;
    }
L_08967604:
    ctx.set_gpr(5, ctx.gpr[4] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089676E0;
      }
      goto L_08967610;
    }
L_08967610:
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
          goto L_08967870;
      }
      goto L_089676E0;
    }
L_089676E0:
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
          goto L_08967870;
      }
      goto L_08967720;
    }
L_08967720:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[20] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896773C;
      }
      goto L_08967730;
    }
L_08967730:
    ctx.set_gpr(3, ctx.gpr[4] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08967808;
      }
      goto L_0896773C;
    }
L_0896773C:
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
          goto L_0896783C;
      }
      goto L_089677F0;
    }
L_089677F0:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896783C;
      }
      goto L_08967808;
    }
L_08967808:
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
          goto L_0896783C;
      }
      goto L_0896782C;
    }
L_0896782C:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(4));
    goto L_0896783C;
L_0896783C:
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
    goto L_08967870;
L_08967870:
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
          goto L_08967A4C;
      }
      goto L_0896791C;
    }
L_0896791C:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 4u);
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896793C;
      }
      goto L_08967930;
    }
L_08967930:
    ctx.set_gpr(5, ctx.gpr[4] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08967A0C;
      }
      goto L_0896793C;
    }
L_0896793C:
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
          goto L_08967B24;
      }
      goto L_08967A0C;
    }
L_08967A0C:
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
          goto L_08967B24;
      }
      goto L_08967A4C;
    }
L_08967A4C:
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
          goto L_08967B00;
      }
      goto L_08967AFC;
    }
L_08967AFC:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(12));
    goto L_08967B00;
L_08967B00:
    ctx.set_gpr(3, ctx.gpr[8] >> 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & 15u);
    ctx.set_gpr(4, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08967B24;
L_08967B24:
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
          goto L_08967B90;
      }
      goto L_08967B80;
    }
L_08967B80:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] & 32767u);
    ctx.set_gpr(3, ctx.gpr[3] << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[3]);
    goto L_08967B90;
L_08967B90:
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
          goto L_08967BDC;
      }
      goto L_08967BD0;
    }
L_08967BD0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08967BE0;
      }
      goto L_08967BDC;
    }
L_08967BDC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_08967BE0;
L_08967BE0:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(76), ctx.gpr[7]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(75)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08967C08;
      }
      goto L_08967BFC;
    }
L_08967BFC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08967C0C;
      }
      goto L_08967C08;
    }
L_08967C08:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_08967C0C;
L_08967C0C:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(72), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[7]);
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08967C3C;
      }
      goto L_08967C30;
    }
L_08967C30:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08967C40;
      }
      goto L_08967C3C;
    }
L_08967C3C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_08967C40;
L_08967C40:
    ctx.set_gpr(2, ctx.gpr[7] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08967C6C;
      }
      goto L_08967C60;
    }
L_08967C60:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08967C70;
      }
      goto L_08967C6C;
    }
L_08967C6C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_08967C70;
L_08967C70:
    ctx.set_gpr(2, ctx.gpr[7] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(148)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08967C98;
      }
      goto L_08967C84;
    }
L_08967C84:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08967C98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 326u, 0x08961AC4u>(ctx, &aot_mem) && ctx.pc == 0x08967C98u) goto L_08967C98;
    return;
L_08967C98:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08967CB8;
      }
      goto L_08967CAC;
    }
L_08967CAC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08967CBC;
      }
      goto L_08967CB8;
    }
L_08967CB8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_08967CBC;
L_08967CBC:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 372u, 0x0896A9A8u>(ctx, &aot_mem); return;
      }
      goto L_08967CC8;
    }
L_08967CC8:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08967CDC;
      }
      goto L_08967CD0;
    }
L_08967CD0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08967CE0;
      }
      goto L_08967CDC;
    }
L_08967CDC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(12));
    goto L_08967CE0;
L_08967CE0:
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(3, ctx.gpr[3] >> 31u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08967D0C;
      }
      goto L_08967D00;
    }
L_08967D00:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08967D10;
      }
      goto L_08967D0C;
    }
L_08967D0C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(12));
    goto L_08967D10;
L_08967D10:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 12u, 0x08968128u>(ctx, &aot_mem); return;
      }
      goto L_08967D20;
    }
L_08967D20:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[17] + ctx.gpr[6]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[3] << 25u);
    ctx.set_gpr(10, ctx.gpr[2] >> 31u);
    ctx.set_gpr(2, ctx.gpr[3] << 26u);
    ctx.set_gpr(4, ctx.gpr[2] >> 31u);
    ctx.set_gpr(2, ctx.gpr[3] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08967D7C;
      }
      goto L_08967D6C;
    }
L_08967D6C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, ctx.gpr[2] & 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08967D80;
      }
      goto L_08967D7C;
    }
L_08967D7C:
    ctx.set_gpr(3, 0u + 0u);
    goto L_08967D80;
L_08967D80:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(7, ctx.gpr[2] & 255u);
    ctx.set_gpr(8, ctx.gpr[7] << 5u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-8161));
    ctx.set_gpr(7, ctx.gpr[9] & ctx.gpr[7]);
    ctx.set_gpr(7, ctx.gpr[7] | ctx.gpr[8]);
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.set_gpr(7, 0u < ctx.gpr[10] ? 1u : 0u);
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(7, ctx.gpr[7] & 1u);
    ctx.set_gpr(8, ctx.gpr[7] << 6u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-65));
    ctx.set_gpr(7, ctx.gpr[9] & ctx.gpr[7]);
    ctx.set_gpr(7, ctx.gpr[7] | ctx.gpr[8]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, ctx.gpr[4] & 1u);
    ctx.set_gpr(7, ctx.gpr[4] << 5u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-33));
    ctx.set_gpr(4, ctx.gpr[8] & ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[7]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, 0u & 1u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[8] & ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[7]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08967F44;
      }
      goto L_08967E00;
    }
L_08967E00:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08967F44;
      }
      goto L_08967E08;
    }
L_08967E08:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 4u);
    ctx.set_gpr(1, ctx.gpr[6] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08967E30;
      }
      goto L_08967E1C;
    }
L_08967E1C:
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08967E30;
      }
      goto L_08967E28;
    }
L_08967E28:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08967F04;
      }
      goto L_08967E30;
    }
L_08967E30:
    ctx.set_gpr(20, ctx.gpr[6] + static_cast<std::uint32_t>(-12));
    ctx.set_gpr(7, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, (ctx.gpr[20] >> 16u) & 0x00007FFFu);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(4, ctx.gpr[7] & ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[6]);
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, (ctx.gpr[2] >> 8u) & 0x000001FFu);
    ctx.set_gpr(4, ctx.gpr[2] << 15u);
    ctx.set_gpr(2, 65280u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32767u);
    ctx.set_gpr(2, ctx.gpr[6] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[6]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[6]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, 0u & 1u);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
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
          (void)rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 6u, 0x089680A0u>(ctx, &aot_mem); return;
      }
      goto L_08967F04;
    }
L_08967F04:
    ctx.set_gpr(20, ctx.gpr[6] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[7] << 7u);
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
          (void)rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 6u, 0x089680A0u>(ctx, &aot_mem); return;
      }
      goto L_08967F44;
    }
L_08967F44:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[20] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08967F68;
      }
      goto L_08967F54;
    }
L_08967F54:
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08967F68;
      }
      goto L_08967F60;
    }
L_08967F60:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 3u, 0x08968038u>(ctx, &aot_mem); return;
      }
      goto L_08967F68;
    }
L_08967F68:
    ctx.set_gpr(8, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, (ctx.gpr[20] >> 16u) & 0x00007FFFu);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(4, ctx.gpr[8] & ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[7]);
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, (ctx.gpr[2] >> 8u) & 0x000001FFu);
    ctx.set_gpr(4, ctx.gpr[2] << 15u);
    ctx.set_gpr(2, 65280u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32767u);
    ctx.set_gpr(2, ctx.gpr[7] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[7]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[7]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, 0u & 1u);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11)));
    ctx.pc = 0x08968000u; return;
}

void recomp_unit_0088(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0088_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_88(Runtime &runtime) {
    runtime.register_generated_unit(88u, 0x08964000u, 16384u, &recomp_unit_0088, &recomp_unit_0088_entry);
    runtime.register_function(0x08964004u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964010u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964088u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896409Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089640A8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964178u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089641B8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964268u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896426Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964290u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089642E8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964360u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964368u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896437Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964388u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964458u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964498u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089644A8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089644B4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964568u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964580u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089645A4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089645B4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089645E8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896462Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964640u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964654u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964660u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964664u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964670u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964680u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964684u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089646A8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089646B8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089646C4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089646D8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964700u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896470Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964720u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896472Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964734u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896474Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964768u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964780u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089647A4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089647ACu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089647C8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089647D4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089647ECu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089647FCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896487Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964890u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896489Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896496Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089649ACu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964A5Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964A60u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964A84u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964ADCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964B54u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964B5Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964B70u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964B7Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964C4Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964C8Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964C9Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964CA8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964D5Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964D74u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964D98u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964DA8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964DDCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964E20u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964E34u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964E40u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964E48u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964E68u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964E84u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964E98u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964EACu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964EBCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964ECCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964F3Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964F98u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08964FACu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089650A0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089650D4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896510Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965128u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089652A4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089652B0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089652B4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089652C4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089652D0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089652D8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965424u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965438u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965444u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965448u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965454u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965464u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965468u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896546Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089654A0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089654D8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089654E4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965508u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965518u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896557Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965584u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965598u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089655B4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089655BCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089655C0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089655C8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089655F0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965678u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896568Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965698u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965768u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089657A8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965858u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896585Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965880u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089658D8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089658E8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089658F4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965900u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965904u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965928u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965968u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965974u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965980u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965994u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089659A0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089659ACu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089659B8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089659C4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089659D4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089659E4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089659F8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965A04u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965A10u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965A18u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965A2Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965A54u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965A5Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965A70u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965A94u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965ACCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965AD0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965AD8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965AE4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965B08u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965B1Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965B28u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965B34u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965B48u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965B50u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965B54u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965B68u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965B7Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965B80u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965BA8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965C20u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965C44u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965C54u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965C60u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965C6Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965C84u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965CA4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965CB0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965CBCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965CC8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965CD4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965CECu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965D0Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965D18u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965D24u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965D30u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965D48u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965D64u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965D70u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965D80u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965D8Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965DA4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965DB8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965DC4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965DCCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965DD4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965DFCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965E0Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965E3Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965E48u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965E58u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965E68u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965E74u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965E88u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965E9Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965EB8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965EC4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965ED8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965EE4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965EF0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965F00u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965F0Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965F18u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965F24u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965F34u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965F40u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965F48u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965F50u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965F5Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965F74u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965F9Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965FA8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965FB4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965FC8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965FD4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965FE0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08965FF8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966004u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966010u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966028u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966034u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089660B8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089660CCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089660D8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089661A8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089661E8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966298u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896629Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089662C0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896631Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896632Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966370u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089663A8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089663B4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089663C0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089663CCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089663D8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966400u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896640Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966410u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966444u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966458u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896646Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966478u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896647Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896648Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966498u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089664A4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089664BCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089664C8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089664CCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089664DCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089664E8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089664ECu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966508u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966514u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966518u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966534u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966540u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966544u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966554u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966568u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966574u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966578u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966580u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966588u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966590u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896659Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089665A8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089665B4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089665C0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089665C4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089665D0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089665E4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089665F8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966604u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966608u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966618u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966620u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966638u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966644u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966648u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966658u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966664u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966668u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966684u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966690u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966694u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089666B0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089666BCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089666C0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966740u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966754u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966760u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966830u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966870u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966920u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966924u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966948u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966990u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089669A4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089669B0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089669B4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089669BCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089669C4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089669CCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089669D8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089669DCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089669E4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966A28u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966A3Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966A50u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966A68u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966A88u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966A90u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966A9Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966AB4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966AC0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966ACCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966AD0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966AECu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966AF0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966B04u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966B14u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966B1Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966B28u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966B30u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966B3Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966B5Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966B70u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966B7Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966B80u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966C0Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966C14u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966C28u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966C34u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966D04u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966D44u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966D54u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966D60u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966E14u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966E2Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966E50u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966E60u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966E94u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966ED8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966EECu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966F00u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966F0Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966F10u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966F1Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966F28u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966F54u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966F60u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966F64u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966F74u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966F8Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966F98u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966F9Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966FCCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966FDCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08966FE0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967064u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896706Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967080u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896708Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967094u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967168u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089671A8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089671B8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089671C4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089671CCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967284u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896729Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089672C0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089672D0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967304u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967368u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967374u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967378u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967394u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089673A0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089673A4u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089673B8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089673CCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089673E0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089673ECu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089673F0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089673FCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967410u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896741Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967488u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967494u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089674A0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089674A8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089674C0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089674CCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089674D0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089674F0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967500u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967530u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896753Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967548u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967568u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089675E8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089675F0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967604u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967610u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089676E0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967720u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967730u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896773Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x089677F0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967808u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896782Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896783Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967870u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896791Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967930u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x0896793Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967A0Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967A4Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967AFCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967B00u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967B24u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967B80u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967B90u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967BD0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967BDCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967BE0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967BFCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967C08u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967C0Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967C30u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967C3Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967C40u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967C60u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967C6Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967C70u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967C84u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967C98u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967CACu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967CB8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967CBCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967CC8u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967CD0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967CDCu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967CE0u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967D00u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967D0Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967D10u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967D20u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967D6Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967D7Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967D80u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967E00u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967E08u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967E1Cu, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967E28u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967E30u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967F04u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967F44u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967F54u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967F60u, &recomp_unit_0088, "recomp_unit_0088");
    runtime.register_function(0x08967F68u, &recomp_unit_0088, "recomp_unit_0088");
}
} // namespace psprecomp
