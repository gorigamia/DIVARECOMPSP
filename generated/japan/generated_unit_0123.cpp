#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0123[4080] = {
    1, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0,
    5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0,
    0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 18, 0, 0, 0, 19, 0, 0, 0, 20, 0, 21, 0, 0, 22, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0,
    32, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 34, 35, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40,
    0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 0,
    0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 59, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70,
    0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0,
    0, 0, 75, 76, 0, 0, 0, 77, 0, 0, 0, 78, 0, 79, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0,
    82, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0,
    0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 96, 97, 0, 0, 0, 98, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0,
    0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0,
    0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0,
    109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0,
    0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0,
    0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 139, 140, 0, 0, 0, 141, 0, 0, 0, 142, 0, 143,
    0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 156, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0,
    161, 0, 0, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 0, 166, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 0, 0,
    0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0,
    174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0,
    0, 0, 180, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 0,
    188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0,
    0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 199, 200, 0, 0, 0, 201, 0,
    0, 0, 202, 0, 203, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 210, 0, 0,
    0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 213, 0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0,
    0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 222, 223, 0, 0, 0,
    224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 228, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0,
    0, 231, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234,
    0, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 0, 0, 0, 241, 0, 0, 0, 0, 0, 242,
    0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0,
    245, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 251,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0,
    0, 0, 254, 0, 0, 255, 0, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0,
    260, 0, 261, 0, 0, 262, 0, 0, 263, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 266, 0, 0,
    267, 0, 268, 0, 0, 269, 0, 0, 270, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 273, 0, 0, 0, 0, 0,
    0, 274, 0, 275, 0, 0, 276, 0, 0, 277, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 280, 0,
    0, 281, 0, 282, 0, 283, 0, 0, 0, 0, 0, 284, 0, 0, 285, 0, 286, 0, 0, 287, 0, 0, 288, 0, 289, 0, 290, 0, 0, 0, 0, 0,
    291, 0, 292, 0, 0, 293, 0, 0, 294, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0,
    298, 0, 299, 0, 0, 300, 0, 0, 301, 0, 302, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 0, 305, 0, 306, 0, 307, 0, 308, 0, 0, 0,
    309, 0, 0, 310, 0, 0, 311, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 316, 0, 317,
    0, 0, 318, 0, 0, 319, 320, 0, 0, 321, 0, 0, 322, 0, 0, 323, 0, 324, 0, 0, 0, 0, 325, 0, 0, 0, 326, 0, 327, 0, 328, 0,
    0, 0, 0, 329, 0, 0, 0, 330, 0, 331, 0, 332, 0, 0, 0, 333, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0,
    336, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 340, 0, 0, 0, 0, 0, 341, 0, 0,
    0, 0, 0, 342, 0, 0, 0, 0, 343, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 346, 0, 0, 347, 0, 0, 348, 0, 349, 0, 0,
    0, 0, 0, 350, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 352, 0, 353, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 355, 0, 0, 0, 0,
    356, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 0, 364, 0, 0, 0, 0, 0, 365, 0, 366, 0,
    0, 367, 0, 0, 368, 0, 369, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 372, 0, 373, 0, 0, 0, 0, 0, 374,
    0, 0, 0, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 381, 0, 0, 0, 0, 0, 382, 0, 0, 0, 383, 0, 0, 0, 384, 0, 0,
    0, 385, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 390, 0, 391, 0, 0, 0, 0, 0,
    392, 0, 0, 0, 0, 393, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 396, 0, 0, 0, 397, 0, 0, 0, 398,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 0,
    402, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 406, 0, 407, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0,
    409, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 412, 0, 0, 0, 413, 0, 0, 0, 414, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 416, 0, 0, 0, 417, 0, 0, 0, 418, 0, 0, 0, 419,
    0, 0, 0, 420, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 422, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 424, 0, 425, 0, 0, 426, 0,
    0, 427, 0, 428, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 431, 0, 432, 0, 0, 0, 0, 0, 433, 0, 0, 0,
    0, 434, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 437, 0, 0, 0, 438, 0, 0, 0, 439, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 441, 0, 0, 0, 442, 0, 0, 0, 443, 0,
    0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 448, 0, 0,
    0, 449, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 452, 0, 0, 0, 453, 0, 0, 0, 454, 0,
    0, 0, 0, 0, 455, 0, 456, 0, 0, 457, 0, 0, 458, 0, 459, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 462,
    0, 463, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 465, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 468, 0,
    0, 0, 469, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 472,
    0, 0, 0, 473, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 477, 0, 0, 0, 0,
    0, 0, 478, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 482, 0,
    0, 0, 0, 0, 483, 0, 484, 0, 0, 485, 0, 0, 486, 0, 487, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 490,
    0, 491, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 493, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 496, 0,
    0, 0, 497, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 500,
    0, 0, 0, 501, 0, 0, 0, 502, 0, 0, 0, 0, 0, 503, 0, 504, 0, 0, 505, 0, 0, 506, 0, 507, 0, 0, 0, 0, 0, 508, 0, 0,
    0, 0, 0, 509, 0, 0, 0, 0, 510, 0, 511, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 513, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0,
    0, 515, 0, 0, 0, 0, 0, 516, 0, 0, 0, 517, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 520, 0, 0, 0, 521, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0,
    0, 0, 524, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 527, 0, 0, 0, 528, 0, 0,
    0, 529, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 531, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 534, 0, 535, 0,
    0, 0, 0, 0, 536, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 540, 0,
    0, 0, 0, 0, 541, 0, 0, 0, 542, 0, 0, 0, 543, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 544, 0, 0, 0, 545, 0, 0, 0, 546, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 548, 0, 549, 0, 0, 550, 0, 0, 0, 0, 551, 0,
    0, 0, 0, 552, 0, 553, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 0, 555, 0, 556, 0, 557, 0, 0, 0, 0, 0, 0, 0, 0, 558,
    0, 0, 0, 0, 559, 0, 0, 0, 0, 0, 560, 0, 561, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 563, 0, 0, 0, 0, 564, 0, 0,
    0, 0, 565, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 567, 0, 568, 0, 0, 0, 0, 0, 569, 0, 0, 0, 0, 0, 570, 0, 0, 0, 0,
    571, 0, 0, 0, 0, 0, 0, 0, 0, 0, 572, 0, 0, 0, 0, 0, 573, 0, 0, 0, 0, 0, 574, 0, 0, 0, 575, 0, 0, 0, 576, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 577, 0, 0, 0, 578, 0, 0, 0, 579, 0, 0,
    0, 580, 0, 0, 0, 581, 0, 0, 0, 0, 0, 0, 0, 0, 582, 0, 0, 0, 0, 0, 0, 583, 0, 0, 0, 584, 0, 0, 0, 585, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 586, 0, 0, 0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 588, 0, 589, 0, 0, 590, 0, 0, 0, 0, 591, 0,
    0, 0, 0, 592, 0, 593, 0, 0, 0, 594, 0, 0, 0, 0, 0, 0, 0, 0, 595, 0, 596, 0, 597, 0, 0, 0, 0, 0, 0, 0, 0, 598,
    0, 0, 0, 0, 599, 0, 0, 0, 0, 0, 600, 0, 0, 0, 0, 601, 0, 0, 0, 0, 602, 0, 0, 0, 0, 0, 603, 0, 0, 0, 0, 604,
    0, 605, 0, 0, 0, 0, 0, 606, 0, 0, 0, 0, 0, 607, 0, 0, 0, 0, 608, 0, 0, 0, 0, 0, 0, 0, 0, 609, 0, 0, 0, 0,
    0, 610, 0, 0, 0, 0, 0, 611, 0, 0, 0, 612, 0, 0, 0, 613,
};
void recomp_unit_0123_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089F0000u;
        entry_id = (entry_delta < 16320u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0123[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089F0000;
    case 2u: goto L_089F0004;
    case 3u: goto L_089F0064;
    case 4u: goto L_089F0074;
    case 5u: goto L_089F0080;
    case 6u: goto L_089F00AC;
    case 7u: goto L_089F00C0;
    case 8u: goto L_089F00D4;
    case 9u: goto L_089F0108;
    case 10u: goto L_089F0144;
    case 11u: goto L_089F0158;
    case 12u: goto L_089F016C;
    case 13u: goto L_089F01AC;
    case 14u: goto L_089F01F8;
    case 15u: goto L_089F0208;
    case 16u: goto L_089F0224;
    case 17u: goto L_089F0240;
    case 18u: goto L_089F0244;
    case 19u: goto L_089F0254;
    case 20u: goto L_089F0264;
    case 21u: goto L_089F026C;
    case 22u: goto L_089F0278;
    case 23u: goto L_089F02A4;
    case 24u: goto L_089F02B8;
    case 25u: goto L_089F02CC;
    case 26u: goto L_089F0300;
    case 27u: goto L_089F033C;
    case 28u: goto L_089F0350;
    case 29u: goto L_089F0364;
    case 30u: goto L_089F03A4;
    case 31u: goto L_089F03F0;
    case 32u: goto L_089F0400;
    case 33u: goto L_089F041C;
    case 34u: goto L_089F0438;
    case 35u: goto L_089F043C;
    case 36u: goto L_089F044C;
    case 37u: goto L_089F048C;
    case 38u: goto L_089F054C;
    case 39u: goto L_089F0564;
    case 40u: goto L_089F057C;
    case 41u: goto L_089F0588;
    case 42u: goto L_089F05B4;
    case 43u: goto L_089F05C8;
    case 44u: goto L_089F05DC;
    case 45u: goto L_089F0610;
    case 46u: goto L_089F0640;
    case 47u: goto L_089F0654;
    case 48u: goto L_089F0668;
    case 49u: goto L_089F06A8;
    case 50u: goto L_089F071C;
    case 51u: goto L_089F0748;
    case 52u: goto L_089F0758;
    case 53u: goto L_089F0770;
    case 54u: goto L_089F0788;
    case 55u: goto L_089F07A0;
    case 56u: goto L_089F07EC;
    case 57u: goto L_089F0850;
    case 58u: goto L_089F0860;
    case 59u: goto L_089F086C;
    case 60u: goto L_089F0898;
    case 61u: goto L_089F08AC;
    case 62u: goto L_089F08C0;
    case 63u: goto L_089F08F4;
    case 64u: goto L_089F0930;
    case 65u: goto L_089F0944;
    case 66u: goto L_089F0958;
    case 67u: goto L_089F0998;
    case 68u: goto L_089F09D4;
    case 69u: goto L_089F09E4;
    case 70u: goto L_089F09FC;
    case 71u: goto L_089F0A14;
    case 72u: goto L_089F0A38;
    case 73u: goto L_089F0A48;
    case 74u: goto L_089F0A64;
    case 75u: goto L_089F0A88;
    case 76u: goto L_089F0A8C;
    case 77u: goto L_089F0A9C;
    case 78u: goto L_089F0AAC;
    case 79u: goto L_089F0AB4;
    case 80u: goto L_089F0AC0;
    case 81u: goto L_089F0AEC;
    case 82u: goto L_089F0B00;
    case 83u: goto L_089F0B14;
    case 84u: goto L_089F0B48;
    case 85u: goto L_089F0B84;
    case 86u: goto L_089F0B98;
    case 87u: goto L_089F0BAC;
    case 88u: goto L_089F0BEC;
    case 89u: goto L_089F0C28;
    case 90u: goto L_089F0C38;
    case 91u: goto L_089F0C50;
    case 92u: goto L_089F0C68;
    case 93u: goto L_089F0C8C;
    case 94u: goto L_089F0C9C;
    case 95u: goto L_089F0CB8;
    case 96u: goto L_089F0CDC;
    case 97u: goto L_089F0CE0;
    case 98u: goto L_089F0CF0;
    case 99u: goto L_089F0D34;
    case 100u: goto L_089F0DF8;
    case 101u: goto L_089F0E10;
    case 102u: goto L_089F0E28;
    case 103u: goto L_089F0E34;
    case 104u: goto L_089F0E60;
    case 105u: goto L_089F0E74;
    case 106u: goto L_089F0E88;
    case 107u: goto L_089F0EBC;
    case 108u: goto L_089F0EEC;
    case 109u: goto L_089F0F00;
    case 110u: goto L_089F0F14;
    case 111u: goto L_089F0F54;
    case 112u: goto L_089F0F90;
    case 113u: goto L_089F0FA0;
    case 114u: goto L_089F0FB8;
    case 115u: goto L_089F0FD0;
    case 116u: goto L_089F101C;
    case 117u: goto L_089F103C;
    case 118u: goto L_089F104C;
    case 119u: goto L_089F1060;
    case 120u: goto L_089F1070;
    case 121u: goto L_089F1088;
    case 122u: goto L_089F10A0;
    case 123u: goto L_089F10B8;
    case 124u: goto L_089F1108;
    case 125u: goto L_089F1168;
    case 126u: goto L_089F1178;
    case 127u: goto L_089F1184;
    case 128u: goto L_089F11B0;
    case 129u: goto L_089F11C4;
    case 130u: goto L_089F11D8;
    case 131u: goto L_089F120C;
    case 132u: goto L_089F1248;
    case 133u: goto L_089F125C;
    case 134u: goto L_089F1270;
    case 135u: goto L_089F12B0;
    case 136u: goto L_089F1308;
    case 137u: goto L_089F1318;
    case 138u: goto L_089F1334;
    case 139u: goto L_089F1350;
    case 140u: goto L_089F1354;
    case 141u: goto L_089F1364;
    case 142u: goto L_089F1374;
    case 143u: goto L_089F137C;
    case 144u: goto L_089F1388;
    case 145u: goto L_089F13B4;
    case 146u: goto L_089F13C8;
    case 147u: goto L_089F13DC;
    case 148u: goto L_089F1410;
    case 149u: goto L_089F144C;
    case 150u: goto L_089F1460;
    case 151u: goto L_089F1474;
    case 152u: goto L_089F14B4;
    case 153u: goto L_089F150C;
    case 154u: goto L_089F151C;
    case 155u: goto L_089F1538;
    case 156u: goto L_089F1554;
    case 157u: goto L_089F1558;
    case 158u: goto L_089F1568;
    case 159u: goto L_089F15A8;
    case 160u: goto L_089F1668;
    case 161u: goto L_089F1680;
    case 162u: goto L_089F1698;
    case 163u: goto L_089F16A4;
    case 164u: goto L_089F16D0;
    case 165u: goto L_089F16E4;
    case 166u: goto L_089F16F8;
    case 167u: goto L_089F172C;
    case 168u: goto L_089F175C;
    case 169u: goto L_089F1770;
    case 170u: goto L_089F1784;
    case 171u: goto L_089F17C4;
    case 172u: goto L_089F1844;
    case 173u: goto L_089F1870;
    case 174u: goto L_089F1880;
    case 175u: goto L_089F1898;
    case 176u: goto L_089F18B0;
    case 177u: goto L_089F18C8;
    case 178u: goto L_089F1914;
    case 179u: goto L_089F1978;
    case 180u: goto L_089F1988;
    case 181u: goto L_089F1994;
    case 182u: goto L_089F19C0;
    case 183u: goto L_089F19D4;
    case 184u: goto L_089F19E8;
    case 185u: goto L_089F1A1C;
    case 186u: goto L_089F1A58;
    case 187u: goto L_089F1A6C;
    case 188u: goto L_089F1A80;
    case 189u: goto L_089F1AC0;
    case 190u: goto L_089F1B04;
    case 191u: goto L_089F1B18;
    case 192u: goto L_089F1B2C;
    case 193u: goto L_089F1B40;
    case 194u: goto L_089F1B58;
    case 195u: goto L_089F1B70;
    case 196u: goto L_089F1B94;
    case 197u: goto L_089F1BA4;
    case 198u: goto L_089F1BC0;
    case 199u: goto L_089F1BE4;
    case 200u: goto L_089F1BE8;
    case 201u: goto L_089F1BF8;
    case 202u: goto L_089F1C08;
    case 203u: goto L_089F1C10;
    case 204u: goto L_089F1C1C;
    case 205u: goto L_089F1C48;
    case 206u: goto L_089F1C5C;
    case 207u: goto L_089F1C70;
    case 208u: goto L_089F1CA4;
    case 209u: goto L_089F1CE0;
    case 210u: goto L_089F1CF4;
    case 211u: goto L_089F1D08;
    case 212u: goto L_089F1D48;
    case 213u: goto L_089F1D8C;
    case 214u: goto L_089F1DA0;
    case 215u: goto L_089F1DB4;
    case 216u: goto L_089F1DC8;
    case 217u: goto L_089F1DE0;
    case 218u: goto L_089F1DF8;
    case 219u: goto L_089F1E1C;
    case 220u: goto L_089F1E2C;
    case 221u: goto L_089F1E48;
    case 222u: goto L_089F1E6C;
    case 223u: goto L_089F1E70;
    case 224u: goto L_089F1E80;
    case 225u: goto L_089F1EC4;
    case 226u: goto L_089F1F88;
    case 227u: goto L_089F1FA0;
    case 228u: goto L_089F1FB8;
    case 229u: goto L_089F1FC4;
    case 230u: goto L_089F1FF0;
    case 231u: goto L_089F2004;
    case 232u: goto L_089F2018;
    case 233u: goto L_089F204C;
    case 234u: goto L_089F207C;
    case 235u: goto L_089F2090;
    case 236u: goto L_089F20A4;
    case 237u: goto L_089F20E4;
    case 238u: goto L_089F2128;
    case 239u: goto L_089F213C;
    case 240u: goto L_089F2150;
    case 241u: goto L_089F2164;
    case 242u: goto L_089F217C;
    case 243u: goto L_089F2194;
    case 244u: goto L_089F21E0;
    case 245u: goto L_089F2200;
    case 246u: goto L_089F2210;
    case 247u: goto L_089F2224;
    case 248u: goto L_089F2234;
    case 249u: goto L_089F224C;
    case 250u: goto L_089F2264;
    case 251u: goto L_089F227C;
    case 252u: goto L_089F22CC;
    case 253u: goto L_089F22EC;
    case 254u: goto L_089F2308;
    case 255u: goto L_089F2314;
    case 256u: goto L_089F2320;
    case 257u: goto L_089F233C;
    case 258u: goto L_089F235C;
    case 259u: goto L_089F2374;
    case 260u: goto L_089F2380;
    case 261u: goto L_089F2388;
    case 262u: goto L_089F2394;
    case 263u: goto L_089F23A0;
    case 264u: goto L_089F23BC;
    case 265u: goto L_089F23DC;
    case 266u: goto L_089F23F4;
    case 267u: goto L_089F2400;
    case 268u: goto L_089F2408;
    case 269u: goto L_089F2414;
    case 270u: goto L_089F2420;
    case 271u: goto L_089F243C;
    case 272u: goto L_089F245C;
    case 273u: goto L_089F2468;
    case 274u: goto L_089F2484;
    case 275u: goto L_089F248C;
    case 276u: goto L_089F2498;
    case 277u: goto L_089F24A4;
    case 278u: goto L_089F24C0;
    case 279u: goto L_089F24E0;
    case 280u: goto L_089F24F8;
    case 281u: goto L_089F2504;
    case 282u: goto L_089F250C;
    case 283u: goto L_089F2514;
    case 284u: goto L_089F252C;
    case 285u: goto L_089F2538;
    case 286u: goto L_089F2540;
    case 287u: goto L_089F254C;
    case 288u: goto L_089F2558;
    case 289u: goto L_089F2560;
    case 290u: goto L_089F2568;
    case 291u: goto L_089F2580;
    case 292u: goto L_089F2588;
    case 293u: goto L_089F2594;
    case 294u: goto L_089F25A0;
    case 295u: goto L_089F25BC;
    case 296u: goto L_089F25DC;
    case 297u: goto L_089F25F4;
    case 298u: goto L_089F2600;
    case 299u: goto L_089F2608;
    case 300u: goto L_089F2614;
    case 301u: goto L_089F2620;
    case 302u: goto L_089F2628;
    case 303u: goto L_089F2630;
    case 304u: goto L_089F2648;
    case 305u: goto L_089F2658;
    case 306u: goto L_089F2660;
    case 307u: goto L_089F2668;
    case 308u: goto L_089F2670;
    case 309u: goto L_089F2680;
    case 310u: goto L_089F268C;
    case 311u: goto L_089F2698;
    case 312u: goto L_089F26B4;
    case 313u: goto L_089F26C8;
    case 314u: goto L_089F26D8;
    case 315u: goto L_089F26E8;
    case 316u: goto L_089F26F4;
    case 317u: goto L_089F26FC;
    case 318u: goto L_089F2708;
    case 319u: goto L_089F2714;
    case 320u: goto L_089F2718;
    case 321u: goto L_089F2724;
    case 322u: goto L_089F2730;
    case 323u: goto L_089F273C;
    case 324u: goto L_089F2744;
    case 325u: goto L_089F2758;
    case 326u: goto L_089F2768;
    case 327u: goto L_089F2770;
    case 328u: goto L_089F2778;
    case 329u: goto L_089F278C;
    case 330u: goto L_089F279C;
    case 331u: goto L_089F27A4;
    case 332u: goto L_089F27AC;
    case 333u: goto L_089F27BC;
    case 334u: goto L_089F27D4;
    case 335u: goto L_089F27F8;
    case 336u: goto L_089F2800;
    case 337u: goto L_089F2818;
    case 338u: goto L_089F2830;
    case 339u: goto L_089F2854;
    case 340u: goto L_089F285C;
    case 341u: goto L_089F2874;
    case 342u: goto L_089F288C;
    case 343u: goto L_089F28A0;
    case 344u: goto L_089F28B4;
    case 345u: goto L_089F28CC;
    case 346u: goto L_089F28D4;
    case 347u: goto L_089F28E0;
    case 348u: goto L_089F28EC;
    case 349u: goto L_089F28F4;
    case 350u: goto L_089F290C;
    case 351u: goto L_089F2924;
    case 352u: goto L_089F2938;
    case 353u: goto L_089F2940;
    case 354u: goto L_089F2958;
    case 355u: goto L_089F296C;
    case 356u: goto L_089F2980;
    case 357u: goto L_089F299C;
    case 358u: goto L_089F29B4;
    case 359u: goto L_089F29C4;
    case 360u: goto L_089F29D4;
    case 361u: goto L_089F2A28;
    case 362u: goto L_089F2A38;
    case 363u: goto L_089F2A48;
    case 364u: goto L_089F2A58;
    case 365u: goto L_089F2A70;
    case 366u: goto L_089F2A78;
    case 367u: goto L_089F2A84;
    case 368u: goto L_089F2A90;
    case 369u: goto L_089F2A98;
    case 370u: goto L_089F2AB0;
    case 371u: goto L_089F2AC8;
    case 372u: goto L_089F2ADC;
    case 373u: goto L_089F2AE4;
    case 374u: goto L_089F2AFC;
    case 375u: goto L_089F2B14;
    case 376u: goto L_089F2B24;
    case 377u: goto L_089F2B34;
    case 378u: goto L_089F2B8C;
    case 379u: goto L_089F2B9C;
    case 380u: goto L_089F2BAC;
    case 381u: goto L_089F2BBC;
    case 382u: goto L_089F2BD4;
    case 383u: goto L_089F2BE4;
    case 384u: goto L_089F2BF4;
    case 385u: goto L_089F2C04;
    case 386u: goto L_089F2C14;
    case 387u: goto L_089F2C24;
    case 388u: goto L_089F2C34;
    case 389u: goto L_089F2C4C;
    case 390u: goto L_089F2C60;
    case 391u: goto L_089F2C68;
    case 392u: goto L_089F2C80;
    case 393u: goto L_089F2C94;
    case 394u: goto L_089F2CA8;
    case 395u: goto L_089F2CC4;
    case 396u: goto L_089F2CDC;
    case 397u: goto L_089F2CEC;
    case 398u: goto L_089F2CFC;
    case 399u: goto L_089F2D50;
    case 400u: goto L_089F2D60;
    case 401u: goto L_089F2D70;
    case 402u: goto L_089F2D80;
    case 403u: goto L_089F2D90;
    case 404u: goto L_089F2DA0;
    case 405u: goto L_089F2DB8;
    case 406u: goto L_089F2DCC;
    case 407u: goto L_089F2DD4;
    case 408u: goto L_089F2DEC;
    case 409u: goto L_089F2E00;
    case 410u: goto L_089F2E14;
    case 411u: goto L_089F2E30;
    case 412u: goto L_089F2E48;
    case 413u: goto L_089F2E58;
    case 414u: goto L_089F2E68;
    case 415u: goto L_089F2EBC;
    case 416u: goto L_089F2ECC;
    case 417u: goto L_089F2EDC;
    case 418u: goto L_089F2EEC;
    case 419u: goto L_089F2EFC;
    case 420u: goto L_089F2F0C;
    case 421u: goto L_089F2F24;
    case 422u: goto L_089F2F38;
    case 423u: goto L_089F2F4C;
    case 424u: goto L_089F2F64;
    case 425u: goto L_089F2F6C;
    case 426u: goto L_089F2F78;
    case 427u: goto L_089F2F84;
    case 428u: goto L_089F2F8C;
    case 429u: goto L_089F2FA4;
    case 430u: goto L_089F2FBC;
    case 431u: goto L_089F2FD0;
    case 432u: goto L_089F2FD8;
    case 433u: goto L_089F2FF0;
    case 434u: goto L_089F3004;
    case 435u: goto L_089F3018;
    case 436u: goto L_089F3034;
    case 437u: goto L_089F304C;
    case 438u: goto L_089F305C;
    case 439u: goto L_089F306C;
    case 440u: goto L_089F30C8;
    case 441u: goto L_089F30D8;
    case 442u: goto L_089F30E8;
    case 443u: goto L_089F30F8;
    case 444u: goto L_089F3108;
    case 445u: goto L_089F312C;
    case 446u: goto L_089F3148;
    case 447u: goto L_089F3158;
    case 448u: goto L_089F3174;
    case 449u: goto L_089F3184;
    case 450u: goto L_089F3198;
    case 451u: goto L_089F31C0;
    case 452u: goto L_089F31D8;
    case 453u: goto L_089F31E8;
    case 454u: goto L_089F31F8;
    case 455u: goto L_089F3210;
    case 456u: goto L_089F3218;
    case 457u: goto L_089F3224;
    case 458u: goto L_089F3230;
    case 459u: goto L_089F3238;
    case 460u: goto L_089F3250;
    case 461u: goto L_089F3268;
    case 462u: goto L_089F327C;
    case 463u: goto L_089F3284;
    case 464u: goto L_089F329C;
    case 465u: goto L_089F32B0;
    case 466u: goto L_089F32C4;
    case 467u: goto L_089F32E0;
    case 468u: goto L_089F32F8;
    case 469u: goto L_089F3308;
    case 470u: goto L_089F3318;
    case 471u: goto L_089F336C;
    case 472u: goto L_089F337C;
    case 473u: goto L_089F338C;
    case 474u: goto L_089F339C;
    case 475u: goto L_089F33C0;
    case 476u: goto L_089F33DC;
    case 477u: goto L_089F33EC;
    case 478u: goto L_089F3408;
    case 479u: goto L_089F3418;
    case 480u: goto L_089F3438;
    case 481u: goto L_089F3460;
    case 482u: goto L_089F3478;
    case 483u: goto L_089F3490;
    case 484u: goto L_089F3498;
    case 485u: goto L_089F34A4;
    case 486u: goto L_089F34B0;
    case 487u: goto L_089F34B8;
    case 488u: goto L_089F34D0;
    case 489u: goto L_089F34E8;
    case 490u: goto L_089F34FC;
    case 491u: goto L_089F3504;
    case 492u: goto L_089F351C;
    case 493u: goto L_089F3530;
    case 494u: goto L_089F3544;
    case 495u: goto L_089F3560;
    case 496u: goto L_089F3578;
    case 497u: goto L_089F3588;
    case 498u: goto L_089F3598;
    case 499u: goto L_089F35EC;
    case 500u: goto L_089F35FC;
    case 501u: goto L_089F360C;
    case 502u: goto L_089F361C;
    case 503u: goto L_089F3634;
    case 504u: goto L_089F363C;
    case 505u: goto L_089F3648;
    case 506u: goto L_089F3654;
    case 507u: goto L_089F365C;
    case 508u: goto L_089F3674;
    case 509u: goto L_089F368C;
    case 510u: goto L_089F36A0;
    case 511u: goto L_089F36A8;
    case 512u: goto L_089F36C0;
    case 513u: goto L_089F36D4;
    case 514u: goto L_089F36E8;
    case 515u: goto L_089F3704;
    case 516u: goto L_089F371C;
    case 517u: goto L_089F372C;
    case 518u: goto L_089F373C;
    case 519u: goto L_089F3798;
    case 520u: goto L_089F37A8;
    case 521u: goto L_089F37B8;
    case 522u: goto L_089F37C8;
    case 523u: goto L_089F37EC;
    case 524u: goto L_089F3808;
    case 525u: goto L_089F3818;
    case 526u: goto L_089F384C;
    case 527u: goto L_089F3864;
    case 528u: goto L_089F3874;
    case 529u: goto L_089F3884;
    case 530u: goto L_089F389C;
    case 531u: goto L_089F38B0;
    case 532u: goto L_089F38C4;
    case 533u: goto L_089F38DC;
    case 534u: goto L_089F38F0;
    case 535u: goto L_089F38F8;
    case 536u: goto L_089F3910;
    case 537u: goto L_089F3928;
    case 538u: goto L_089F393C;
    case 539u: goto L_089F3960;
    case 540u: goto L_089F3978;
    case 541u: goto L_089F3990;
    case 542u: goto L_089F39A0;
    case 543u: goto L_089F39B0;
    case 544u: goto L_089F3A04;
    case 545u: goto L_089F3A14;
    case 546u: goto L_089F3A24;
    case 547u: goto L_089F3A34;
    case 548u: goto L_089F3A50;
    case 549u: goto L_089F3A58;
    case 550u: goto L_089F3A64;
    case 551u: goto L_089F3A78;
    case 552u: goto L_089F3A8C;
    case 553u: goto L_089F3A94;
    case 554u: goto L_089F3AA4;
    case 555u: goto L_089F3AC8;
    case 556u: goto L_089F3AD0;
    case 557u: goto L_089F3AD8;
    case 558u: goto L_089F3AFC;
    case 559u: goto L_089F3B10;
    case 560u: goto L_089F3B28;
    case 561u: goto L_089F3B30;
    case 562u: goto L_089F3B48;
    case 563u: goto L_089F3B60;
    case 564u: goto L_089F3B74;
    case 565u: goto L_089F3B88;
    case 566u: goto L_089F3BA0;
    case 567u: goto L_089F3BB4;
    case 568u: goto L_089F3BBC;
    case 569u: goto L_089F3BD4;
    case 570u: goto L_089F3BEC;
    case 571u: goto L_089F3C00;
    case 572u: goto L_089F3C28;
    case 573u: goto L_089F3C40;
    case 574u: goto L_089F3C58;
    case 575u: goto L_089F3C68;
    case 576u: goto L_089F3C78;
    case 577u: goto L_089F3CD4;
    case 578u: goto L_089F3CE4;
    case 579u: goto L_089F3CF4;
    case 580u: goto L_089F3D04;
    case 581u: goto L_089F3D14;
    case 582u: goto L_089F3D38;
    case 583u: goto L_089F3D54;
    case 584u: goto L_089F3D64;
    case 585u: goto L_089F3D74;
    case 586u: goto L_089F3D9C;
    case 587u: goto L_089F3DB4;
    case 588u: goto L_089F3DD0;
    case 589u: goto L_089F3DD8;
    case 590u: goto L_089F3DE4;
    case 591u: goto L_089F3DF8;
    case 592u: goto L_089F3E0C;
    case 593u: goto L_089F3E14;
    case 594u: goto L_089F3E24;
    case 595u: goto L_089F3E48;
    case 596u: goto L_089F3E50;
    case 597u: goto L_089F3E58;
    case 598u: goto L_089F3E7C;
    case 599u: goto L_089F3E90;
    case 600u: goto L_089F3EA8;
    case 601u: goto L_089F3EBC;
    case 602u: goto L_089F3ED0;
    case 603u: goto L_089F3EE8;
    case 604u: goto L_089F3EFC;
    case 605u: goto L_089F3F04;
    case 606u: goto L_089F3F1C;
    case 607u: goto L_089F3F34;
    case 608u: goto L_089F3F48;
    case 609u: goto L_089F3F6C;
    case 610u: goto L_089F3F84;
    case 611u: goto L_089F3F9C;
    case 612u: goto L_089F3FAC;
    case 613u: goto L_089F3FBC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089F0000:
    // nop
    goto L_089F0004;
L_089F0004:
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
          goto L_089F026C;
      }
      goto L_089F0064;
    }
L_089F0064:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089F0074u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089F0074u) goto L_089F0074;
    return;
L_089F0074:
    ctx.set_gpr(16, ctx.gpr[20] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F0244;
      }
      goto L_089F0080;
    }
L_089F0080:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(18, ctx.gpr[19] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(23, ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(268));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(316));
    ctx.set_gpr(31, 0x089F00ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 249u, 0x089E4F64u>(ctx, &aot_mem) && ctx.pc == 0x089F00ACu) goto L_089F00AC;
    return;
L_089F00AC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(280));
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(320));
    ctx.set_gpr(31, 0x089F00C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 249u, 0x089E4F64u>(ctx, &aot_mem) && ctx.pc == 0x089F00C0u) goto L_089F00C0;
    return;
L_089F00C0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(292));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(280));
    ctx.set_gpr(31, 0x089F00D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 380u, 0x089EB620u>(ctx, &aot_mem) && ctx.pc == 0x089F00D4u) goto L_089F00D4;
    return;
L_089F00D4:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(292));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(304));
    ctx.set_gpr(31, 0x089F0108u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x089F0108u) goto L_089F0108;
    return;
L_089F0108:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(23, ctx.gpr[18] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(30, ctx.gpr[18] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(196));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(260));
    ctx.set_gpr(31, 0x089F0144u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 449u, 0x089E6A8Cu>(ctx, &aot_mem) && ctx.pc == 0x089F0144u) goto L_089F0144;
    return;
L_089F0144:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(212));
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(264));
    ctx.set_gpr(31, 0x089F0158u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 449u, 0x089E6A8Cu>(ctx, &aot_mem) && ctx.pc == 0x089F0158u) goto L_089F0158;
    return;
L_089F0158:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(228));
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(212));
    ctx.set_gpr(31, 0x089F016Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 496u, 0x089E7188u>(ctx, &aot_mem) && ctx.pc == 0x089F016Cu) goto L_089F016C;
    return;
L_089F016C:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(228));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[15] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(244));
    ctx.set_gpr(31, 0x089F01ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x089F01ACu) goto L_089F01AC;
    return;
L_089F01AC:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.fpr[22] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(340));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089F01F8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F01F8u) goto L_089F01F8;
    return;
L_089F01F8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(324));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089F0208u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x089F0208u) goto L_089F0208;
    return;
L_089F0208:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089F0224u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F0224u) goto L_089F0224;
    return;
L_089F0224:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(22));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(180)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089F0240u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F0240u) goto L_089F0240;
    return;
L_089F0240:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089F0244;
L_089F0244:
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[21]);
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F0080;
      }
      goto L_089F0254;
    }
L_089F0254:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089F0264u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089F0264u) goto L_089F0264;
    return;
L_089F0264:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F044C;
      }
      goto L_089F026C;
    }
L_089F026C:
    ctx.set_gpr(16, ctx.gpr[20] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F043C;
      }
      goto L_089F0278;
    }
L_089F0278:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(17, ctx.gpr[19] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(23, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(140));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(188));
    ctx.set_gpr(31, 0x089F02A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 249u, 0x089E4F64u>(ctx, &aot_mem) && ctx.pc == 0x089F02A4u) goto L_089F02A4;
    return;
L_089F02A4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(152));
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(31, 0x089F02B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 249u, 0x089E4F64u>(ctx, &aot_mem) && ctx.pc == 0x089F02B8u) goto L_089F02B8;
    return;
L_089F02B8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(164));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(152));
    ctx.set_gpr(31, 0x089F02CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 380u, 0x089EB620u>(ctx, &aot_mem) && ctx.pc == 0x089F02CCu) goto L_089F02CC;
    return;
L_089F02CC:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(164));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.set_gpr(31, 0x089F0300u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x089F0300u) goto L_089F0300;
    return;
L_089F0300:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(23, ctx.gpr[17] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(30, ctx.gpr[17] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(31, 0x089F033Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 449u, 0x089E6A8Cu>(ctx, &aot_mem) && ctx.pc == 0x089F033Cu) goto L_089F033C;
    return;
L_089F033C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(31, 0x089F0350u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 449u, 0x089E6A8Cu>(ctx, &aot_mem) && ctx.pc == 0x089F0350u) goto L_089F0350;
    return;
L_089F0350:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x089F0364u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 496u, 0x089E7188u>(ctx, &aot_mem) && ctx.pc == 0x089F0364u) goto L_089F0364;
    return;
L_089F0364:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[15] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.set_gpr(31, 0x089F03A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x089F03A4u) goto L_089F03A4;
    return;
L_089F03A4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    ctx.fpr[22] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(340));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089F03F0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F03F0u) goto L_089F03F0;
    return;
L_089F03F0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(324));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089F0400u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x089F0400u) goto L_089F0400;
    return;
L_089F0400:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089F041Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F041Cu) goto L_089F041C;
    return;
L_089F041C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(22));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(208)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089F0438u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F0438u) goto L_089F0438;
    return;
L_089F0438:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089F043C;
L_089F043C:
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[21]);
    ctx.set_gpr(3, ctx.gpr[16] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F0278;
      }
      goto L_089F044C;
    }
L_089F044C:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(352));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F048C:
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
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[25]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_fpr_bits(24, ctx.fpr_bits(12));
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(23, ctx.gpr[6] + 0u);
    ctx.set_gpr(30, ctx.gpr[7] + 0u);
    ctx.set_gpr(19, ctx.gpr[8] + 0u);
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
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(360));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089F054Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F054Cu) goto L_089F054C;
    return;
L_089F054C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089F0564u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F0564u) goto L_089F0564;
    return;
L_089F0564:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(216));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089F057Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F057Cu) goto L_089F057C;
    return;
L_089F057C:
    ctx.set_gpr(18, ctx.gpr[20] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F0748;
      }
      goto L_089F0588;
    }
L_089F0588:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[30])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(17, ctx.gpr[23] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.set_gpr(31, 0x089F05B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 249u, 0x089E4F64u>(ctx, &aot_mem) && ctx.pc == 0x089F05B4u) goto L_089F05B4;
    return;
L_089F05B4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(172));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(212));
    ctx.set_gpr(31, 0x089F05C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 249u, 0x089E4F64u>(ctx, &aot_mem) && ctx.pc == 0x089F05C8u) goto L_089F05C8;
    return;
L_089F05C8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(184));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(172));
    ctx.set_gpr(31, 0x089F05DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 380u, 0x089EB620u>(ctx, &aot_mem) && ctx.pc == 0x089F05DCu) goto L_089F05DC;
    return;
L_089F05DC:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(184));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(196));
    ctx.set_gpr(31, 0x089F0610u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x089F0610u) goto L_089F0610;
    return;
L_089F0610:
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(22, ctx.gpr[17] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(152));
    ctx.set_gpr(31, 0x089F0640u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 449u, 0x089E6A8Cu>(ctx, &aot_mem) && ctx.pc == 0x089F0640u) goto L_089F0640;
    return;
L_089F0640:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(156));
    ctx.set_gpr(31, 0x089F0654u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 449u, 0x089E6A8Cu>(ctx, &aot_mem) && ctx.pc == 0x089F0654u) goto L_089F0654;
    return;
L_089F0654:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(31, 0x089F0668u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 496u, 0x089E7188u>(ctx, &aot_mem) && ctx.pc == 0x089F0668u) goto L_089F0668;
    return;
L_089F0668:
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
    ctx.set_gpr(31, 0x089F06A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x089F06A8u) goto L_089F06A8;
    return;
L_089F06A8:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(444), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    ctx.fpr[25] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(380)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(432));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089F071Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x089F071Cu) goto L_089F071C;
    return;
L_089F071C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[25]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_089F0748;
L_089F0748:
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[21]);
    ctx.set_gpr(2, ctx.gpr[18] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F0588;
      }
      goto L_089F0758;
    }
L_089F0758:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(360));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089F0770u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F0770u) goto L_089F0770;
    return;
L_089F0770:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089F0788u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F0788u) goto L_089F0788;
    return;
L_089F0788:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(216));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089F07A0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F07A0u) goto L_089F07A0;
    return;
L_089F07A0:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(448));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F07EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-416));
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
          goto L_089F0AB4;
      }
      goto L_089F0850;
    }
L_089F0850:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089F0860u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089F0860u) goto L_089F0860;
    return;
L_089F0860:
    ctx.set_gpr(16, ctx.gpr[20] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F0A8C;
      }
      goto L_089F086C;
    }
L_089F086C:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(18, ctx.gpr[19] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(23, ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(316));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(364));
    ctx.set_gpr(31, 0x089F0898u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 249u, 0x089E4F64u>(ctx, &aot_mem) && ctx.pc == 0x089F0898u) goto L_089F0898;
    return;
L_089F0898:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(328));
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(368));
    ctx.set_gpr(31, 0x089F08ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 249u, 0x089E4F64u>(ctx, &aot_mem) && ctx.pc == 0x089F08ACu) goto L_089F08AC;
    return;
L_089F08AC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(340));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(328));
    ctx.set_gpr(31, 0x089F08C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 380u, 0x089EB620u>(ctx, &aot_mem) && ctx.pc == 0x089F08C0u) goto L_089F08C0;
    return;
L_089F08C0:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(340));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(352));
    ctx.set_gpr(31, 0x089F08F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x089F08F4u) goto L_089F08F4;
    return;
L_089F08F4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(412), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(23, ctx.gpr[18] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(30, ctx.gpr[18] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(244));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(308));
    ctx.set_gpr(31, 0x089F0930u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 449u, 0x089E6A8Cu>(ctx, &aot_mem) && ctx.pc == 0x089F0930u) goto L_089F0930;
    return;
L_089F0930:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(260));
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(312));
    ctx.set_gpr(31, 0x089F0944u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 449u, 0x089E6A8Cu>(ctx, &aot_mem) && ctx.pc == 0x089F0944u) goto L_089F0944;
    return;
L_089F0944:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(276));
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(260));
    ctx.set_gpr(31, 0x089F0958u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 496u, 0x089E7188u>(ctx, &aot_mem) && ctx.pc == 0x089F0958u) goto L_089F0958;
    return;
L_089F0958:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(276));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.fpr[15] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(292));
    ctx.set_gpr(31, 0x089F0998u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x089F0998u) goto L_089F0998;
    return;
L_089F0998:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.set_gpr(31, 0x089F09D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 321u, 0x089E5914u>(ctx, &aot_mem) && ctx.pc == 0x089F09D4u) goto L_089F09D4;
    return;
L_089F09D4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089F09E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 320u, 0x089E5900u>(ctx, &aot_mem) && ctx.pc == 0x089F09E4u) goto L_089F09E4;
    return;
L_089F09E4:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089F09FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 320u, 0x089E5900u>(ctx, &aot_mem) && ctx.pc == 0x089F09FCu) goto L_089F09FC;
    return;
L_089F09FC:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(232));
    ctx.set_fpr_bits(12, ctx.fpr_bits(22));
    ctx.set_gpr(31, 0x089F0A14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 595u, 0x0883E9F0u>(ctx, &aot_mem) && ctx.pc == 0x089F0A14u) goto L_089F0A14;
    return;
L_089F0A14:
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(404));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089F0A38u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F0A38u) goto L_089F0A38;
    return;
L_089F0A38:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(388));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089F0A48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x089F0A48u) goto L_089F0A48;
    return;
L_089F0A48:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089F0A64u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F0A64u) goto L_089F0A64;
    return;
L_089F0A64:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(380), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(380));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(188)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089F0A88u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F0A88u) goto L_089F0A88;
    return;
L_089F0A88:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089F0A8C;
L_089F0A8C:
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[21]);
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F086C;
      }
      goto L_089F0A9C;
    }
L_089F0A9C:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089F0AACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089F0AACu) goto L_089F0AAC;
    return;
L_089F0AAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F0CF0;
      }
      goto L_089F0AB4;
    }
L_089F0AB4:
    ctx.set_gpr(16, ctx.gpr[20] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F0CE0;
      }
      goto L_089F0AC0;
    }
L_089F0AC0:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(17, ctx.gpr[19] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(23, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(168));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(216));
    ctx.set_gpr(31, 0x089F0AECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 249u, 0x089E4F64u>(ctx, &aot_mem) && ctx.pc == 0x089F0AECu) goto L_089F0AEC;
    return;
L_089F0AEC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(180));
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(31, 0x089F0B00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 249u, 0x089E4F64u>(ctx, &aot_mem) && ctx.pc == 0x089F0B00u) goto L_089F0B00;
    return;
L_089F0B00:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(180));
    ctx.set_gpr(31, 0x089F0B14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 380u, 0x089EB620u>(ctx, &aot_mem) && ctx.pc == 0x089F0B14u) goto L_089F0B14;
    return;
L_089F0B14:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(204));
    ctx.set_gpr(31, 0x089F0B48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x089F0B48u) goto L_089F0B48;
    return;
L_089F0B48:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(412), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(23, ctx.gpr[17] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(30, ctx.gpr[17] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.set_gpr(31, 0x089F0B84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 449u, 0x089E6A8Cu>(ctx, &aot_mem) && ctx.pc == 0x089F0B84u) goto L_089F0B84;
    return;
L_089F0B84:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(164));
    ctx.set_gpr(31, 0x089F0B98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 449u, 0x089E6A8Cu>(ctx, &aot_mem) && ctx.pc == 0x089F0B98u) goto L_089F0B98;
    return;
L_089F0B98:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(31, 0x089F0BACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 496u, 0x089E7188u>(ctx, &aot_mem) && ctx.pc == 0x089F0BACu) goto L_089F0BAC;
    return;
L_089F0BAC:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.fpr[15] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.set_gpr(31, 0x089F0BECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x089F0BECu) goto L_089F0BEC;
    return;
L_089F0BEC:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(31, 0x089F0C28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 321u, 0x089E5914u>(ctx, &aot_mem) && ctx.pc == 0x089F0C28u) goto L_089F0C28;
    return;
L_089F0C28:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089F0C38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 320u, 0x089E5900u>(ctx, &aot_mem) && ctx.pc == 0x089F0C38u) goto L_089F0C38;
    return;
L_089F0C38:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089F0C50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 320u, 0x089E5900u>(ctx, &aot_mem) && ctx.pc == 0x089F0C50u) goto L_089F0C50;
    return;
L_089F0C50:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_fpr_bits(12, ctx.fpr_bits(22));
    ctx.set_gpr(31, 0x089F0C68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 595u, 0x0883E9F0u>(ctx, &aot_mem) && ctx.pc == 0x089F0C68u) goto L_089F0C68;
    return;
L_089F0C68:
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(404));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089F0C8Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F0C8Cu) goto L_089F0C8C;
    return;
L_089F0C8C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(388));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089F0C9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x089F0C9Cu) goto L_089F0C9C;
    return;
L_089F0C9C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089F0CB8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F0CB8u) goto L_089F0CB8;
    return;
L_089F0CB8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(372));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(216)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089F0CDCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F0CDCu) goto L_089F0CDC;
    return;
L_089F0CDC:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089F0CE0;
L_089F0CE0:
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[21]);
    ctx.set_gpr(3, ctx.gpr[16] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F0AC0;
      }
      goto L_089F0CF0;
    }
L_089F0CF0:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(416));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F0D34:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-480));
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
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(9));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(392));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089F0DF8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F0DF8u) goto L_089F0DF8;
    return;
L_089F0DF8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(320));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089F0E10u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F0E10u) goto L_089F0E10;
    return;
L_089F0E10:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(248));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089F0E28u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F0E28u) goto L_089F0E28;
    return;
L_089F0E28:
    ctx.set_gpr(18, ctx.gpr[20] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F1060;
      }
      goto L_089F0E34;
    }
L_089F0E34:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[30])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(17, ctx.gpr[23] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.set_gpr(31, 0x089F0E60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 249u, 0x089E4F64u>(ctx, &aot_mem) && ctx.pc == 0x089F0E60u) goto L_089F0E60;
    return;
L_089F0E60:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(204));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(244));
    ctx.set_gpr(31, 0x089F0E74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 249u, 0x089E4F64u>(ctx, &aot_mem) && ctx.pc == 0x089F0E74u) goto L_089F0E74;
    return;
L_089F0E74:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(216));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(204));
    ctx.set_gpr(31, 0x089F0E88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 380u, 0x089EB620u>(ctx, &aot_mem) && ctx.pc == 0x089F0E88u) goto L_089F0E88;
    return;
L_089F0E88:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(216));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(228));
    ctx.set_gpr(31, 0x089F0EBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x089F0EBCu) goto L_089F0EBC;
    return;
L_089F0EBC:
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(22, ctx.gpr[17] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(184));
    ctx.set_gpr(31, 0x089F0EECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 449u, 0x089E6A8Cu>(ctx, &aot_mem) && ctx.pc == 0x089F0EECu) goto L_089F0EEC;
    return;
L_089F0EEC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(188));
    ctx.set_gpr(31, 0x089F0F00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 449u, 0x089E6A8Cu>(ctx, &aot_mem) && ctx.pc == 0x089F0F00u) goto L_089F0F00;
    return;
L_089F0F00:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(152));
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(31, 0x089F0F14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 496u, 0x089E7188u>(ctx, &aot_mem) && ctx.pc == 0x089F0F14u) goto L_089F0F14;
    return;
L_089F0F14:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(152));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[15] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(168));
    ctx.set_gpr(31, 0x089F0F54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x089F0F54u) goto L_089F0F54;
    return;
L_089F0F54:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(468), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(476), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.set_gpr(31, 0x089F0F90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 321u, 0x089E5914u>(ctx, &aot_mem) && ctx.pc == 0x089F0F90u) goto L_089F0F90;
    return;
L_089F0F90:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089F0FA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 320u, 0x089E5900u>(ctx, &aot_mem) && ctx.pc == 0x089F0FA0u) goto L_089F0FA0;
    return;
L_089F0FA0:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[25] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089F0FB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 320u, 0x089E5900u>(ctx, &aot_mem) && ctx.pc == 0x089F0FB8u) goto L_089F0FB8;
    return;
L_089F0FB8:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.set_fpr_bits(12, ctx.fpr_bits(25));
    ctx.set_gpr(31, 0x089F0FD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 595u, 0x0883E9F0u>(ctx, &aot_mem) && ctx.pc == 0x089F0FD0u) goto L_089F0FD0;
    return;
L_089F0FD0:
    ctx.fpr[26] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.fpr[25] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(412)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(464));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089F101Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x089F101Cu) goto L_089F101C;
    return;
L_089F101C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-14216)));
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[25]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(31, 0x089F103Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 595u, 0x0883E9F0u>(ctx, &aot_mem) && ctx.pc == 0x089F103Cu) goto L_089F103C;
    return;
L_089F103C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(248));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089F104Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 340u, 0x089E5BE0u>(ctx, &aot_mem) && ctx.pc == 0x089F104Cu) goto L_089F104C;
    return;
L_089F104C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_089F1060;
L_089F1060:
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[21]);
    ctx.set_gpr(2, ctx.gpr[18] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F0E34;
      }
      goto L_089F1070;
    }
L_089F1070:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(392));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089F1088u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F1088u) goto L_089F1088;
    return;
L_089F1088:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(320));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089F10A0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F10A0u) goto L_089F10A0;
    return;
L_089F10A0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(248));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089F10B8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F10B8u) goto L_089F10B8;
    return;
L_089F10B8:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(480));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F1108:
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
          goto L_089F137C;
      }
      goto L_089F1168;
    }
L_089F1168:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089F1178u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089F1178u) goto L_089F1178;
    return;
L_089F1178:
    ctx.set_gpr(16, ctx.gpr[20] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F1354;
      }
      goto L_089F1184;
    }
L_089F1184:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(18, ctx.gpr[19] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(23, ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(268));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(316));
    ctx.set_gpr(31, 0x089F11B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 249u, 0x089E4F64u>(ctx, &aot_mem) && ctx.pc == 0x089F11B0u) goto L_089F11B0;
    return;
L_089F11B0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(280));
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(320));
    ctx.set_gpr(31, 0x089F11C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 249u, 0x089E4F64u>(ctx, &aot_mem) && ctx.pc == 0x089F11C4u) goto L_089F11C4;
    return;
L_089F11C4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(292));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(280));
    ctx.set_gpr(31, 0x089F11D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 380u, 0x089EB620u>(ctx, &aot_mem) && ctx.pc == 0x089F11D8u) goto L_089F11D8;
    return;
L_089F11D8:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(292));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(304));
    ctx.set_gpr(31, 0x089F120Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x089F120Cu) goto L_089F120C;
    return;
L_089F120C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(23, ctx.gpr[18] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(30, ctx.gpr[18] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(196));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(260));
    ctx.set_gpr(31, 0x089F1248u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 449u, 0x089E6A8Cu>(ctx, &aot_mem) && ctx.pc == 0x089F1248u) goto L_089F1248;
    return;
L_089F1248:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(212));
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(264));
    ctx.set_gpr(31, 0x089F125Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 449u, 0x089E6A8Cu>(ctx, &aot_mem) && ctx.pc == 0x089F125Cu) goto L_089F125C;
    return;
L_089F125C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(228));
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(212));
    ctx.set_gpr(31, 0x089F1270u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 496u, 0x089E7188u>(ctx, &aot_mem) && ctx.pc == 0x089F1270u) goto L_089F1270;
    return;
L_089F1270:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(228));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[15] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(244));
    ctx.set_gpr(31, 0x089F12B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x089F12B0u) goto L_089F12B0;
    return;
L_089F12B0:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[22] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(340));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089F1308u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F1308u) goto L_089F1308;
    return;
L_089F1308:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(324));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089F1318u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x089F1318u) goto L_089F1318;
    return;
L_089F1318:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089F1334u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F1334u) goto L_089F1334;
    return;
L_089F1334:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(22));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(180)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089F1350u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F1350u) goto L_089F1350;
    return;
L_089F1350:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089F1354;
L_089F1354:
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[21]);
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F1184;
      }
      goto L_089F1364;
    }
L_089F1364:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089F1374u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089F1374u) goto L_089F1374;
    return;
L_089F1374:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F1568;
      }
      goto L_089F137C;
    }
L_089F137C:
    ctx.set_gpr(16, ctx.gpr[20] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F1558;
      }
      goto L_089F1388;
    }
L_089F1388:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(17, ctx.gpr[19] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(23, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(140));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(188));
    ctx.set_gpr(31, 0x089F13B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 249u, 0x089E4F64u>(ctx, &aot_mem) && ctx.pc == 0x089F13B4u) goto L_089F13B4;
    return;
L_089F13B4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(152));
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(31, 0x089F13C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 249u, 0x089E4F64u>(ctx, &aot_mem) && ctx.pc == 0x089F13C8u) goto L_089F13C8;
    return;
L_089F13C8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(164));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(152));
    ctx.set_gpr(31, 0x089F13DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 380u, 0x089EB620u>(ctx, &aot_mem) && ctx.pc == 0x089F13DCu) goto L_089F13DC;
    return;
L_089F13DC:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(164));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.set_gpr(31, 0x089F1410u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x089F1410u) goto L_089F1410;
    return;
L_089F1410:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(23, ctx.gpr[17] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(30, ctx.gpr[17] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(31, 0x089F144Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 449u, 0x089E6A8Cu>(ctx, &aot_mem) && ctx.pc == 0x089F144Cu) goto L_089F144C;
    return;
L_089F144C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(31, 0x089F1460u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 449u, 0x089E6A8Cu>(ctx, &aot_mem) && ctx.pc == 0x089F1460u) goto L_089F1460;
    return;
L_089F1460:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x089F1474u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 496u, 0x089E7188u>(ctx, &aot_mem) && ctx.pc == 0x089F1474u) goto L_089F1474;
    return;
L_089F1474:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[15] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.set_gpr(31, 0x089F14B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x089F14B4u) goto L_089F14B4;
    return;
L_089F14B4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[21]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[22] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(340));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089F150Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F150Cu) goto L_089F150C;
    return;
L_089F150C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(324));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089F151Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x089F151Cu) goto L_089F151C;
    return;
L_089F151C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089F1538u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F1538u) goto L_089F1538;
    return;
L_089F1538:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(22));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(208)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089F1554u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F1554u) goto L_089F1554;
    return;
L_089F1554:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089F1558;
L_089F1558:
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[21]);
    ctx.set_gpr(3, ctx.gpr[16] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F1388;
      }
      goto L_089F1568;
    }
L_089F1568:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(352));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F15A8:
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
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[25]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_fpr_bits(24, ctx.fpr_bits(12));
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(23, ctx.gpr[6] + 0u);
    ctx.set_gpr(30, ctx.gpr[7] + 0u);
    ctx.set_gpr(19, ctx.gpr[8] + 0u);
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
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(360));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089F1668u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F1668u) goto L_089F1668;
    return;
L_089F1668:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089F1680u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F1680u) goto L_089F1680;
    return;
L_089F1680:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(216));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089F1698u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F1698u) goto L_089F1698;
    return;
L_089F1698:
    ctx.set_gpr(18, ctx.gpr[20] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F1870;
      }
      goto L_089F16A4;
    }
L_089F16A4:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[30])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(17, ctx.gpr[23] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.set_gpr(31, 0x089F16D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 249u, 0x089E4F64u>(ctx, &aot_mem) && ctx.pc == 0x089F16D0u) goto L_089F16D0;
    return;
L_089F16D0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(172));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(212));
    ctx.set_gpr(31, 0x089F16E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 249u, 0x089E4F64u>(ctx, &aot_mem) && ctx.pc == 0x089F16E4u) goto L_089F16E4;
    return;
L_089F16E4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(184));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(172));
    ctx.set_gpr(31, 0x089F16F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 380u, 0x089EB620u>(ctx, &aot_mem) && ctx.pc == 0x089F16F8u) goto L_089F16F8;
    return;
L_089F16F8:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(184));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(196));
    ctx.set_gpr(31, 0x089F172Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x089F172Cu) goto L_089F172C;
    return;
L_089F172C:
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(22, ctx.gpr[17] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(152));
    ctx.set_gpr(31, 0x089F175Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 449u, 0x089E6A8Cu>(ctx, &aot_mem) && ctx.pc == 0x089F175Cu) goto L_089F175C;
    return;
L_089F175C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(156));
    ctx.set_gpr(31, 0x089F1770u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 449u, 0x089E6A8Cu>(ctx, &aot_mem) && ctx.pc == 0x089F1770u) goto L_089F1770;
    return;
L_089F1770:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(31, 0x089F1784u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 496u, 0x089E7188u>(ctx, &aot_mem) && ctx.pc == 0x089F1784u) goto L_089F1784;
    return;
L_089F1784:
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
    ctx.set_gpr(31, 0x089F17C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x089F17C4u) goto L_089F17C4;
    return;
L_089F17C4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(444), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[23]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[25] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(380)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(432));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089F1844u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x089F1844u) goto L_089F1844;
    return;
L_089F1844:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[25]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_089F1870;
L_089F1870:
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[21]);
    ctx.set_gpr(2, ctx.gpr[18] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F16A4;
      }
      goto L_089F1880;
    }
L_089F1880:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(360));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089F1898u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F1898u) goto L_089F1898;
    return;
L_089F1898:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089F18B0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F18B0u) goto L_089F18B0;
    return;
L_089F18B0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(216));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089F18C8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F18C8u) goto L_089F18C8;
    return;
L_089F18C8:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(448));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F1914:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-448));
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
          goto L_089F1C10;
      }
      goto L_089F1978;
    }
L_089F1978:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089F1988u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089F1988u) goto L_089F1988;
    return;
L_089F1988:
    ctx.set_gpr(16, ctx.gpr[20] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F1BE8;
      }
      goto L_089F1994;
    }
L_089F1994:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(18, ctx.gpr[19] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(23, ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(348));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(396));
    ctx.set_gpr(31, 0x089F19C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 249u, 0x089E4F64u>(ctx, &aot_mem) && ctx.pc == 0x089F19C0u) goto L_089F19C0;
    return;
L_089F19C0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(360));
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(400));
    ctx.set_gpr(31, 0x089F19D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 249u, 0x089E4F64u>(ctx, &aot_mem) && ctx.pc == 0x089F19D4u) goto L_089F19D4;
    return;
L_089F19D4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(372));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(360));
    ctx.set_gpr(31, 0x089F19E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 380u, 0x089EB620u>(ctx, &aot_mem) && ctx.pc == 0x089F19E8u) goto L_089F19E8;
    return;
L_089F19E8:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(372));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(384));
    ctx.set_gpr(31, 0x089F1A1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x089F1A1Cu) goto L_089F1A1C;
    return;
L_089F1A1C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(444), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(23, ctx.gpr[18] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(30, ctx.gpr[18] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(276));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(340));
    ctx.set_gpr(31, 0x089F1A58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 449u, 0x089E6A8Cu>(ctx, &aot_mem) && ctx.pc == 0x089F1A58u) goto L_089F1A58;
    return;
L_089F1A58:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(292));
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(344));
    ctx.set_gpr(31, 0x089F1A6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 449u, 0x089E6A8Cu>(ctx, &aot_mem) && ctx.pc == 0x089F1A6Cu) goto L_089F1A6C;
    return;
L_089F1A6C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(308));
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(292));
    ctx.set_gpr(31, 0x089F1A80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 496u, 0x089E7188u>(ctx, &aot_mem) && ctx.pc == 0x089F1A80u) goto L_089F1A80;
    return;
L_089F1A80:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(308));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.fpr[15] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(324));
    ctx.set_gpr(31, 0x089F1AC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x089F1AC0u) goto L_089F1AC0;
    return;
L_089F1AC0:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(23, ctx.gpr[18] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(236));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(268));
    ctx.set_gpr(31, 0x089F1B04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 321u, 0x089E5914u>(ctx, &aot_mem) && ctx.pc == 0x089F1B04u) goto L_089F1B04;
    return;
L_089F1B04:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(244));
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.set_gpr(31, 0x089F1B18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 321u, 0x089E5914u>(ctx, &aot_mem) && ctx.pc == 0x089F1B18u) goto L_089F1B18;
    return;
L_089F1B18:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(252));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(244));
    ctx.set_gpr(31, 0x089F1B2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 403u, 0x089E6438u>(ctx, &aot_mem) && ctx.pc == 0x089F1B2Cu) goto L_089F1B2C;
    return;
L_089F1B2C:
    ctx.set_gpr(18, ctx.gpr[29] + static_cast<std::uint32_t>(252));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(236));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089F1B40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 320u, 0x089E5900u>(ctx, &aot_mem) && ctx.pc == 0x089F1B40u) goto L_089F1B40;
    return;
L_089F1B40:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(236));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089F1B58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 320u, 0x089E5900u>(ctx, &aot_mem) && ctx.pc == 0x089F1B58u) goto L_089F1B58;
    return;
L_089F1B58:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(260));
    ctx.set_fpr_bits(12, ctx.fpr_bits(22));
    ctx.set_gpr(31, 0x089F1B70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 595u, 0x0883E9F0u>(ctx, &aot_mem) && ctx.pc == 0x089F1B70u) goto L_089F1B70;
    return;
L_089F1B70:
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(436));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089F1B94u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F1B94u) goto L_089F1B94;
    return;
L_089F1B94:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(420));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089F1BA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x089F1BA4u) goto L_089F1BA4;
    return;
L_089F1BA4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089F1BC0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F1BC0u) goto L_089F1BC0;
    return;
L_089F1BC0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(412), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(412));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(188)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089F1BE4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F1BE4u) goto L_089F1BE4;
    return;
L_089F1BE4:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089F1BE8;
L_089F1BE8:
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[21]);
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F1994;
      }
      goto L_089F1BF8;
    }
L_089F1BF8:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089F1C08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089F1C08u) goto L_089F1C08;
    return;
L_089F1C08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F1E80;
      }
      goto L_089F1C10;
    }
L_089F1C10:
    ctx.set_gpr(16, ctx.gpr[20] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F1E70;
      }
      goto L_089F1C1C;
    }
L_089F1C1C:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(17, ctx.gpr[19] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(23, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(180));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(228));
    ctx.set_gpr(31, 0x089F1C48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 249u, 0x089E4F64u>(ctx, &aot_mem) && ctx.pc == 0x089F1C48u) goto L_089F1C48;
    return;
L_089F1C48:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(232));
    ctx.set_gpr(31, 0x089F1C5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 249u, 0x089E4F64u>(ctx, &aot_mem) && ctx.pc == 0x089F1C5Cu) goto L_089F1C5C;
    return;
L_089F1C5C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(204));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(31, 0x089F1C70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 380u, 0x089EB620u>(ctx, &aot_mem) && ctx.pc == 0x089F1C70u) goto L_089F1C70;
    return;
L_089F1C70:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(204));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(216));
    ctx.set_gpr(31, 0x089F1CA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x089F1CA4u) goto L_089F1CA4;
    return;
L_089F1CA4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(444), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(23, ctx.gpr[17] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(30, ctx.gpr[17] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(172));
    ctx.set_gpr(31, 0x089F1CE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 449u, 0x089E6A8Cu>(ctx, &aot_mem) && ctx.pc == 0x089F1CE0u) goto L_089F1CE0;
    return;
L_089F1CE0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.set_gpr(31, 0x089F1CF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 449u, 0x089E6A8Cu>(ctx, &aot_mem) && ctx.pc == 0x089F1CF4u) goto L_089F1CF4;
    return;
L_089F1CF4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(140));
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(31, 0x089F1D08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 496u, 0x089E7188u>(ctx, &aot_mem) && ctx.pc == 0x089F1D08u) goto L_089F1D08;
    return;
L_089F1D08:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(140));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[15] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(156));
    ctx.set_gpr(31, 0x089F1D48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x089F1D48u) goto L_089F1D48;
    return;
L_089F1D48:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(23, ctx.gpr[17] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(31, 0x089F1D8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 321u, 0x089E5914u>(ctx, &aot_mem) && ctx.pc == 0x089F1D8Cu) goto L_089F1D8C;
    return;
L_089F1D8C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(31, 0x089F1DA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 321u, 0x089E5914u>(ctx, &aot_mem) && ctx.pc == 0x089F1DA0u) goto L_089F1DA0;
    return;
L_089F1DA0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(31, 0x089F1DB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 403u, 0x089E6438u>(ctx, &aot_mem) && ctx.pc == 0x089F1DB4u) goto L_089F1DB4;
    return;
L_089F1DB4:
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089F1DC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 320u, 0x089E5900u>(ctx, &aot_mem) && ctx.pc == 0x089F1DC8u) goto L_089F1DC8;
    return;
L_089F1DC8:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089F1DE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 320u, 0x089E5900u>(ctx, &aot_mem) && ctx.pc == 0x089F1DE0u) goto L_089F1DE0;
    return;
L_089F1DE0:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.set_fpr_bits(12, ctx.fpr_bits(22));
    ctx.set_gpr(31, 0x089F1DF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 595u, 0x0883E9F0u>(ctx, &aot_mem) && ctx.pc == 0x089F1DF8u) goto L_089F1DF8;
    return;
L_089F1DF8:
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(436));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089F1E1Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F1E1Cu) goto L_089F1E1C;
    return;
L_089F1E1C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(420));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089F1E2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x089F1E2Cu) goto L_089F1E2C;
    return;
L_089F1E2C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089F1E48u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F1E48u) goto L_089F1E48;
    return;
L_089F1E48:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(404));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(216)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089F1E6Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F1E6Cu) goto L_089F1E6C;
    return;
L_089F1E6C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089F1E70;
L_089F1E70:
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[21]);
    ctx.set_gpr(3, ctx.gpr[16] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F1C1C;
      }
      goto L_089F1E80;
    }
L_089F1E80:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(448));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F1EC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-496));
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
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(412), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(9));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(408));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089F1F88u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F1F88u) goto L_089F1F88;
    return;
L_089F1F88:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(336));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089F1FA0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F1FA0u) goto L_089F1FA0;
    return;
L_089F1FA0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(264));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089F1FB8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F1FB8u) goto L_089F1FB8;
    return;
L_089F1FB8:
    ctx.set_gpr(18, ctx.gpr[20] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F2224;
      }
      goto L_089F1FC4;
    }
L_089F1FC4:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[30])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(17, ctx.gpr[23] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.set_gpr(31, 0x089F1FF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 249u, 0x089E4F64u>(ctx, &aot_mem) && ctx.pc == 0x089F1FF0u) goto L_089F1FF0;
    return;
L_089F1FF0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(260));
    ctx.set_gpr(31, 0x089F2004u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 249u, 0x089E4F64u>(ctx, &aot_mem) && ctx.pc == 0x089F2004u) goto L_089F2004;
    return;
L_089F2004:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(232));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(31, 0x089F2018u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 380u, 0x089EB620u>(ctx, &aot_mem) && ctx.pc == 0x089F2018u) goto L_089F2018;
    return;
L_089F2018:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(232));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(244));
    ctx.set_gpr(31, 0x089F204Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x089F204Cu) goto L_089F204C;
    return;
L_089F204C:
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(22, ctx.gpr[17] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(200));
    ctx.set_gpr(31, 0x089F207Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 449u, 0x089E6A8Cu>(ctx, &aot_mem) && ctx.pc == 0x089F207Cu) goto L_089F207C;
    return;
L_089F207C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(152));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(204));
    ctx.set_gpr(31, 0x089F2090u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 449u, 0x089E6A8Cu>(ctx, &aot_mem) && ctx.pc == 0x089F2090u) goto L_089F2090;
    return;
L_089F2090:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(168));
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(152));
    ctx.set_gpr(31, 0x089F20A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 496u, 0x089E7188u>(ctx, &aot_mem) && ctx.pc == 0x089F20A4u) goto L_089F20A4;
    return;
L_089F20A4:
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(168));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[14] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[15] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(184));
    ctx.set_gpr(31, 0x089F20E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x089F20E4u) goto L_089F20E4;
    return;
L_089F20E4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(488), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(492), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x089F2128u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 321u, 0x089E5914u>(ctx, &aot_mem) && ctx.pc == 0x089F2128u) goto L_089F2128;
    return;
L_089F2128:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(31, 0x089F213Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 321u, 0x089E5914u>(ctx, &aot_mem) && ctx.pc == 0x089F213Cu) goto L_089F213C;
    return;
L_089F213C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(31, 0x089F2150u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 403u, 0x089E6438u>(ctx, &aot_mem) && ctx.pc == 0x089F2150u) goto L_089F2150;
    return;
L_089F2150:
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089F2164u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 320u, 0x089E5900u>(ctx, &aot_mem) && ctx.pc == 0x089F2164u) goto L_089F2164;
    return;
L_089F2164:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[25] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089F217Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 320u, 0x089E5900u>(ctx, &aot_mem) && ctx.pc == 0x089F217Cu) goto L_089F217C;
    return;
L_089F217C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.set_fpr_bits(12, ctx.fpr_bits(25));
    ctx.set_gpr(31, 0x089F2194u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 595u, 0x0883E9F0u>(ctx, &aot_mem) && ctx.pc == 0x089F2194u) goto L_089F2194;
    return;
L_089F2194:
    ctx.fpr[26] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[25] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(428)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(480));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089F21E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x089F21E0u) goto L_089F21E0;
    return;
L_089F21E0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-14216)));
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[25]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(31, 0x089F2200u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 595u, 0x0883E9F0u>(ctx, &aot_mem) && ctx.pc == 0x089F2200u) goto L_089F2200;
    return;
L_089F2200:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(264));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089F2210u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0120_entry, 120u, 340u, 0x089E5BE0u>(ctx, &aot_mem) && ctx.pc == 0x089F2210u) goto L_089F2210;
    return;
L_089F2210:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_089F2224;
L_089F2224:
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[21]);
    ctx.set_gpr(2, ctx.gpr[18] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F1FC4;
      }
      goto L_089F2234;
    }
L_089F2234:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(408));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089F224Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F224Cu) goto L_089F224C;
    return;
L_089F224C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(336));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089F2264u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F2264u) goto L_089F2264;
    return;
L_089F2264:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(264));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089F227Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F227Cu) goto L_089F227C;
    return;
L_089F227C:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(496));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F22CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F2320;
      }
      goto L_089F22EC;
    }
L_089F22EC:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(24540));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089F2308u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089F2308u) goto L_089F2308;
    return;
L_089F2308:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089F2320;
      }
      goto L_089F2314;
    }
L_089F2314:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089F2320u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x089F2320u) goto L_089F2320;
    return;
L_089F2320:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
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
L_089F233C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F23A0;
      }
      goto L_089F235C;
    }
L_089F235C:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(24560));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(220), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(40));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F2388;
      }
      goto L_089F2374;
    }
L_089F2374:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F2388;
      }
      goto L_089F2380;
    }
L_089F2380:
    ctx.set_gpr(31, 0x089F2388u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089F2388u) goto L_089F2388;
    return;
L_089F2388:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089F23A0;
      }
      goto L_089F2394;
    }
L_089F2394:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089F23A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x089F23A0u) goto L_089F23A0;
    return;
L_089F23A0:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
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
L_089F23BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F2420;
      }
      goto L_089F23DC;
    }
L_089F23DC:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(24516));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(20));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F2408;
      }
      goto L_089F23F4;
    }
L_089F23F4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F2408;
      }
      goto L_089F2400;
    }
L_089F2400:
    ctx.set_gpr(31, 0x089F2408u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089F2408u) goto L_089F2408;
    return;
L_089F2408:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089F2420;
      }
      goto L_089F2414;
    }
L_089F2414:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089F2420u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x089F2420u) goto L_089F2420;
    return;
L_089F2420:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
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
L_089F243C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F24A4;
      }
      goto L_089F245C;
    }
L_089F245C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F248C;
      }
      goto L_089F2468;
    }
L_089F2468:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F248C;
      }
      goto L_089F2484;
    }
L_089F2484:
    ctx.set_gpr(31, 0x089F248Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x089F248Cu) goto L_089F248C;
    return;
L_089F248C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089F24A4;
      }
      goto L_089F2498;
    }
L_089F2498:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089F24A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x089F24A4u) goto L_089F24A4;
    return;
L_089F24A4:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
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
L_089F24C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F25A0;
      }
      goto L_089F24E0;
    }
L_089F24E0:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-16128));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(28));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F250C;
      }
      goto L_089F24F8;
    }
L_089F24F8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F250C;
      }
      goto L_089F2504;
    }
L_089F2504:
    ctx.set_gpr(31, 0x089F250Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089F250Cu) goto L_089F250C;
    return;
L_089F250C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F2588;
      }
      goto L_089F2514;
    }
L_089F2514:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18596));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F2540;
      }
      goto L_089F252C;
    }
L_089F252C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F2540;
      }
      goto L_089F2538;
    }
L_089F2538:
    ctx.set_gpr(31, 0x089F2540u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089F2540u) goto L_089F2540;
    return;
L_089F2540:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F2560;
      }
      goto L_089F254C;
    }
L_089F254C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F2560;
      }
      goto L_089F2558;
    }
L_089F2558:
    ctx.set_gpr(31, 0x089F2560u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089F2560u) goto L_089F2560;
    return;
L_089F2560:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F2588;
      }
      goto L_089F2568;
    }
L_089F2568:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15576));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F2588;
      }
      goto L_089F2580;
    }
L_089F2580:
    ctx.set_gpr(31, 0x089F2588u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 764u, 0x08853094u>(ctx, &aot_mem) && ctx.pc == 0x089F2588u) goto L_089F2588;
    return;
L_089F2588:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089F25A0;
      }
      goto L_089F2594;
    }
L_089F2594:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089F25A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 554u, 0x089467A8u>(ctx, &aot_mem) && ctx.pc == 0x089F25A0u) goto L_089F25A0;
    return;
L_089F25A0:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
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
L_089F25BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F2698;
      }
      goto L_089F25DC;
    }
L_089F25DC:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18596));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F2608;
      }
      goto L_089F25F4;
    }
L_089F25F4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F2608;
      }
      goto L_089F2600;
    }
L_089F2600:
    ctx.set_gpr(31, 0x089F2608u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089F2608u) goto L_089F2608;
    return;
L_089F2608:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F2628;
      }
      goto L_089F2614;
    }
L_089F2614:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F2628;
      }
      goto L_089F2620;
    }
L_089F2620:
    ctx.set_gpr(31, 0x089F2628u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089F2628u) goto L_089F2628;
    return;
L_089F2628:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F2680;
      }
      goto L_089F2630;
    }
L_089F2630:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15576));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F2680;
      }
      goto L_089F2648;
    }
L_089F2648:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F2668;
      }
      goto L_089F2658;
    }
L_089F2658:
    ctx.set_gpr(31, 0x089F2660u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x089F2660u) goto L_089F2660;
    return;
L_089F2660:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_089F2668;
L_089F2668:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F2680;
      }
      goto L_089F2670;
    }
L_089F2670:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x089F2680u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x089F2680u) goto L_089F2680;
    return;
L_089F2680:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089F2698;
      }
      goto L_089F268C;
    }
L_089F268C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089F2698u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 554u, 0x089467A8u>(ctx, &aot_mem) && ctx.pc == 0x089F2698u) goto L_089F2698;
    return;
L_089F2698:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
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
L_089F26B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x089F26C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x089F26C8u) goto L_089F26C8;
    return;
L_089F26C8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F26D8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F26F4;
      }
      goto L_089F26E8;
    }
L_089F26E8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_089F26F4;
L_089F26F4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F26FC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F2714;
      }
      goto L_089F2708;
    }
L_089F2708:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F2718;
      }
      goto L_089F2714;
    }
L_089F2714:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089F2718;
L_089F2718:
    ctx.set_gpr(2, static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F2724:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F2730:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F273C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F2758;
      }
      goto L_089F2744;
    }
L_089F2744:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089F2768;
      }
      goto L_089F2758;
    }
L_089F2758:
    ctx.set_gpr(5, ~(ctx.gpr[5] | 0u));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    goto L_089F2768;
L_089F2768:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F2770:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F2778:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32157)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F27AC;
      }
      goto L_089F278C;
    }
L_089F278C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-32157), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(31, 0x089F279Cu);
    // nop
    goto L_089F2E30;
L_089F279C:
    ctx.set_gpr(31, 0x089F27A4u);
    // nop
    goto L_089F2CC4;
L_089F27A4:
    ctx.set_gpr(31, 0x089F27ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 421u, 0x089FA17Cu>(ctx, &aot_mem) && ctx.pc == 0x089F27ACu) goto L_089F27AC;
    return;
L_089F27AC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F27BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26916)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F2800;
      }
      goto L_089F27D4;
    }
L_089F27D4:
    ctx.set_gpr(4, 2229u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-11888));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11952));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-11920));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x089F27F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x089F27F8u) goto L_089F27F8;
    return;
L_089F27F8:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26916), ctx.gpr[2]);
    goto L_089F2800;
L_089F2800:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26916)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F2818:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26912)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F285C;
      }
      goto L_089F2830;
    }
L_089F2830:
    ctx.set_gpr(4, 2229u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-11712));
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11744));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-11728));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089F2854u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x089F2854u) goto L_089F2854;
    return;
L_089F2854:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26912), ctx.gpr[2]);
    goto L_089F285C;
L_089F285C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26912)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F2874:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x089F288Cu);
    // nop
    goto L_089F299C;
L_089F288C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26908)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089F28A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x089F28A0u) goto L_089F28A0;
    return;
L_089F28A0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F28B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26908)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F28F4;
      }
      goto L_089F28CC;
    }
L_089F28CC:
    ctx.set_gpr(31, 0x089F28D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x089F28D4u) goto L_089F28D4;
    return;
L_089F28D4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089F28E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089F28E0u) goto L_089F28E0;
    return;
L_089F28E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089F28ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x089F28ECu) goto L_089F28EC;
    return;
L_089F28EC:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26908), ctx.gpr[2]);
    goto L_089F28F4;
L_089F28F4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26908)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F290C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26908)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F2938;
      }
      goto L_089F2924;
    }
L_089F2924:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F2940;
      }
      goto L_089F2938;
    }
L_089F2938:
    ctx.set_gpr(31, 0x089F2940u);
    // nop
    goto L_089F299C;
L_089F2940:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26908)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F2958:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x089F296Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x089F296Cu) goto L_089F296C;
    return;
L_089F296C:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-23648));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x089F2980u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089F2980u) goto L_089F2980;
    return;
L_089F2980:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F299C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2207u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(10692));
    ctx.set_gpr(31, 0x089F29B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x089F29B4u) goto L_089F29B4;
    return;
L_089F29B4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F29C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089F29D4u);
    // nop
    goto L_089F2778;
L_089F29D4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-11688));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26908));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2207u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(10808));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-11680));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2207u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(10584));
    ctx.set_gpr(31, 0x089F2A28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x089F2A28u) goto L_089F2A28;
    return;
L_089F2A28:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F2A38:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089F2A48u);
    // nop
    goto L_089F290C;
L_089F2A48:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F2A58:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26904)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F2A98;
      }
      goto L_089F2A70;
    }
L_089F2A70:
    ctx.set_gpr(31, 0x089F2A78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x089F2A78u) goto L_089F2A78;
    return;
L_089F2A78:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089F2A84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089F2A84u) goto L_089F2A84;
    return;
L_089F2A84:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089F2A90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x089F2A90u) goto L_089F2A90;
    return;
L_089F2A90:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26904), ctx.gpr[2]);
    goto L_089F2A98;
L_089F2A98:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26904)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F2AB0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26904)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F2ADC;
      }
      goto L_089F2AC8;
    }
L_089F2AC8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F2AE4;
      }
      goto L_089F2ADC;
    }
L_089F2ADC:
    ctx.set_gpr(31, 0x089F2AE4u);
    // nop
    goto L_089F2AFC;
L_089F2AE4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26904)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F2AFC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2207u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(11044));
    ctx.set_gpr(31, 0x089F2B14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x089F2B14u) goto L_089F2B14;
    return;
L_089F2B14:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F2B24:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089F2B34u);
    // nop
    goto L_089F2778;
L_089F2B34:
    ctx.set_gpr(2, 2207u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(11196));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2207u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(11236));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26904));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2207u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(11164));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-11664));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x089F2B8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x089F2B8Cu) goto L_089F2B8C;
    return;
L_089F2B8C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F2B9C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089F2BACu);
    // nop
    goto L_089F2AB0;
L_089F2BAC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F2BBC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2207u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(11284));
    ctx.set_gpr(31, 0x089F2BD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 237u, 0x089451B8u>(ctx, &aot_mem) && ctx.pc == 0x089F2BD4u) goto L_089F2BD4;
    return;
L_089F2BD4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F2BE4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089F2BF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 366u, 0x089FE09Cu>(ctx, &aot_mem) && ctx.pc == 0x089F2BF4u) goto L_089F2BF4;
    return;
L_089F2BF4:
    ctx.set_gpr(4, 2208u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-7532));
    ctx.set_gpr(31, 0x089F2C04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 240u, 0x089451F4u>(ctx, &aot_mem) && ctx.pc == 0x089F2C04u) goto L_089F2C04;
    return;
L_089F2C04:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F2C14:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089F2C24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 527u, 0x089FE9D4u>(ctx, &aot_mem) && ctx.pc == 0x089F2C24u) goto L_089F2C24;
    return;
L_089F2C24:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F2C34:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26900)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F2C60;
      }
      goto L_089F2C4C;
    }
L_089F2C4C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F2C68;
      }
      goto L_089F2C60;
    }
L_089F2C60:
    ctx.set_gpr(31, 0x089F2C68u);
    // nop
    goto L_089F2CC4;
L_089F2C68:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26900)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F2C80:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x089F2C94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x089F2C94u) goto L_089F2C94;
    return;
L_089F2C94:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-23740));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x089F2CA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089F2CA8u) goto L_089F2CA8;
    return;
L_089F2CA8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F2CC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2207u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(11500));
    ctx.set_gpr(31, 0x089F2CDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x089F2CDCu) goto L_089F2CDC;
    return;
L_089F2CDC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F2CEC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089F2CFCu);
    // nop
    goto L_089F2778;
L_089F2CFC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(2, 2207u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(11648));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26900));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2207u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(11616));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-11652));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(11, 2207u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(11392));
    ctx.set_gpr(31, 0x089F2D50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x089F2D50u) goto L_089F2D50;
    return;
L_089F2D50:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F2D60:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089F2D70u);
    // nop
    goto L_089F2C34;
L_089F2D70:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F2D80:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089F2D90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 365u, 0x089FE07Cu>(ctx, &aot_mem) && ctx.pc == 0x089F2D90u) goto L_089F2D90;
    return;
L_089F2D90:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F2DA0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26896)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F2DCC;
      }
      goto L_089F2DB8;
    }
L_089F2DB8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F2DD4;
      }
      goto L_089F2DCC;
    }
L_089F2DCC:
    ctx.set_gpr(31, 0x089F2DD4u);
    // nop
    goto L_089F2E30;
L_089F2DD4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26896)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F2DEC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x089F2E00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x089F2E00u) goto L_089F2E00;
    return;
L_089F2E00:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-23832));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x089F2E14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089F2E14u) goto L_089F2E14;
    return;
L_089F2E14:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F2E30:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2207u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(11864));
    ctx.set_gpr(31, 0x089F2E48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x089F2E48u) goto L_089F2E48;
    return;
L_089F2E48:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F2E58:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089F2E68u);
    // nop
    goto L_089F2778;
L_089F2E68:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(2, 2207u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(12012));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26896));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2207u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(11980));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-11632));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(11, 2207u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(11756));
    ctx.set_gpr(31, 0x089F2EBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x089F2EBCu) goto L_089F2EBC;
    return;
L_089F2EBC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F2ECC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089F2EDCu);
    // nop
    goto L_089F2DA0;
L_089F2EDC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F2EEC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089F2EFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 317u, 0x089FDC30u>(ctx, &aot_mem) && ctx.pc == 0x089F2EFCu) goto L_089F2EFC;
    return;
L_089F2EFC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F2F0C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x089F2F24u);
    // nop
    goto L_089F3034;
L_089F2F24:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26892)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089F2F38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x089F2F38u) goto L_089F2F38;
    return;
L_089F2F38:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F2F4C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26892)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F2F8C;
      }
      goto L_089F2F64;
    }
L_089F2F64:
    ctx.set_gpr(31, 0x089F2F6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x089F2F6Cu) goto L_089F2F6C;
    return;
L_089F2F6C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089F2F78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089F2F78u) goto L_089F2F78;
    return;
L_089F2F78:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089F2F84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x089F2F84u) goto L_089F2F84;
    return;
L_089F2F84:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26892), ctx.gpr[2]);
    goto L_089F2F8C;
L_089F2F8C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26892)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F2FA4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26892)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F2FD0;
      }
      goto L_089F2FBC;
    }
L_089F2FBC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F2FD8;
      }
      goto L_089F2FD0;
    }
L_089F2FD0:
    ctx.set_gpr(31, 0x089F2FD8u);
    // nop
    goto L_089F3034;
L_089F2FD8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26892)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F2FF0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x089F3004u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x089F3004u) goto L_089F3004;
    return;
L_089F3004:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-23924));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x089F3018u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089F3018u) goto L_089F3018;
    return;
L_089F3018:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F3034:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2207u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12380));
    ctx.set_gpr(31, 0x089F304Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x089F304Cu) goto L_089F304C;
    return;
L_089F304C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F305C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089F306Cu);
    // nop
    goto L_089F2778;
L_089F306C:
    ctx.set_gpr(2, 2207u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(12552));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2207u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(12760));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26892));
    ctx.set_gpr(6, 2207u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(11044));
    ctx.set_gpr(7, 2207u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(12536));
    ctx.set_gpr(8, 2207u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(12504));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-11612));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(11, 2207u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(12272));
    ctx.set_gpr(31, 0x089F30C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x089F30C8u) goto L_089F30C8;
    return;
L_089F30C8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F30D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089F30E8u);
    // nop
    goto L_089F2FA4;
L_089F30E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F30F8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26904)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F3108:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26892)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089F312Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x089F312Cu) goto L_089F312C;
    return;
L_089F312C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11600));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x089F3148u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x089F3148u) goto L_089F3148;
    return;
L_089F3148:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089F3158u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x089F3158u) goto L_089F3158;
    return;
L_089F3158:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x089F3174u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 223u, 0x089FD39Cu>(ctx, &aot_mem) && ctx.pc == 0x089F3174u) goto L_089F3174;
    return;
L_089F3174:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089F3184u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x089F3184u) goto L_089F3184;
    return;
L_089F3184:
    ctx.set_gpr(3, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089F3198u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 643u, 0x0891EEE0u>(ctx, &aot_mem) && ctx.pc == 0x089F3198u) goto L_089F3198;
    return;
L_089F3198:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11576));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-11568));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-11560));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089F31C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089F31C0u) goto L_089F31C0;
    return;
L_089F31C0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F31D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089F31E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 783u, 0x089FBF18u>(ctx, &aot_mem) && ctx.pc == 0x089F31E8u) goto L_089F31E8;
    return;
L_089F31E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F31F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26880)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F3238;
      }
      goto L_089F3210;
    }
L_089F3210:
    ctx.set_gpr(31, 0x089F3218u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x089F3218u) goto L_089F3218;
    return;
L_089F3218:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089F3224u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089F3224u) goto L_089F3224;
    return;
L_089F3224:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089F3230u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x089F3230u) goto L_089F3230;
    return;
L_089F3230:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26880), ctx.gpr[2]);
    goto L_089F3238;
L_089F3238:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26880)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F3250:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26880)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F327C;
      }
      goto L_089F3268;
    }
L_089F3268:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F3284;
      }
      goto L_089F327C;
    }
L_089F327C:
    ctx.set_gpr(31, 0x089F3284u);
    // nop
    goto L_089F32E0;
L_089F3284:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26880)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F329C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x089F32B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x089F32B0u) goto L_089F32B0;
    return;
L_089F32B0:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-24016));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x089F32C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089F32C4u) goto L_089F32C4;
    return;
L_089F32C4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F32E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2207u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(13064));
    ctx.set_gpr(31, 0x089F32F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x089F32F8u) goto L_089F32F8;
    return;
L_089F32F8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F3308:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089F3318u);
    // nop
    goto L_089F2778;
L_089F3318:
    ctx.set_gpr(2, 2207u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(13212));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26880));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2207u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(13180));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-11552));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(36));
    ctx.set_gpr(11, 2207u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(12956));
    ctx.set_gpr(31, 0x089F336Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x089F336Cu) goto L_089F336C;
    return;
L_089F336C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F337C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089F338Cu);
    // nop
    goto L_089F3250;
L_089F338C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F339C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26880)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089F33C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x089F33C0u) goto L_089F33C0;
    return;
L_089F33C0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11544));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x089F33DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x089F33DCu) goto L_089F33DC;
    return;
L_089F33DC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089F33ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x089F33ECu) goto L_089F33EC;
    return;
L_089F33EC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x089F3408u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 223u, 0x089FD39Cu>(ctx, &aot_mem) && ctx.pc == 0x089F3408u) goto L_089F3408;
    return;
L_089F3408:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089F3418u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x089F3418u) goto L_089F3418;
    return;
L_089F3418:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(3, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x089F3438u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 223u, 0x089FD39Cu>(ctx, &aot_mem) && ctx.pc == 0x089F3438u) goto L_089F3438;
    return;
L_089F3438:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11508));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-11496));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-11484));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089F3460u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089F3460u) goto L_089F3460;
    return;
L_089F3460:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F3478:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26864)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F34B8;
      }
      goto L_089F3490;
    }
L_089F3490:
    ctx.set_gpr(31, 0x089F3498u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x089F3498u) goto L_089F3498;
    return;
L_089F3498:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089F34A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089F34A4u) goto L_089F34A4;
    return;
L_089F34A4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089F34B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x089F34B0u) goto L_089F34B0;
    return;
L_089F34B0:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26864), ctx.gpr[2]);
    goto L_089F34B8;
L_089F34B8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26864)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F34D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26864)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F34FC;
      }
      goto L_089F34E8;
    }
L_089F34E8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F3504;
      }
      goto L_089F34FC;
    }
L_089F34FC:
    ctx.set_gpr(31, 0x089F3504u);
    // nop
    goto L_089F3560;
L_089F3504:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26864)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F351C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x089F3530u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x089F3530u) goto L_089F3530;
    return;
L_089F3530:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-24120));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x089F3544u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089F3544u) goto L_089F3544;
    return;
L_089F3544:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F3560:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2207u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(13704));
    ctx.set_gpr(31, 0x089F3578u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x089F3578u) goto L_089F3578;
    return;
L_089F3578:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F3588:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089F3598u);
    // nop
    goto L_089F2778;
L_089F3598:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-11472));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26864));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2207u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(13820));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-11464));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2207u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(13596));
    ctx.set_gpr(31, 0x089F35ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x089F35ECu) goto L_089F35EC;
    return;
L_089F35EC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F35FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089F360Cu);
    // nop
    goto L_089F34D0;
L_089F360C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F361C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26860)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F365C;
      }
      goto L_089F3634;
    }
L_089F3634:
    ctx.set_gpr(31, 0x089F363Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x089F363Cu) goto L_089F363C;
    return;
L_089F363C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089F3648u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089F3648u) goto L_089F3648;
    return;
L_089F3648:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089F3654u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x089F3654u) goto L_089F3654;
    return;
L_089F3654:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26860), ctx.gpr[2]);
    goto L_089F365C;
L_089F365C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26860)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F3674:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26860)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F36A0;
      }
      goto L_089F368C;
    }
L_089F368C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F36A8;
      }
      goto L_089F36A0;
    }
L_089F36A0:
    ctx.set_gpr(31, 0x089F36A8u);
    // nop
    goto L_089F3704;
L_089F36A8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26860)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F36C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x089F36D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x089F36D4u) goto L_089F36D4;
    return;
L_089F36D4:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-24212));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(31, 0x089F36E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089F36E8u) goto L_089F36E8;
    return;
L_089F36E8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F3704:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2207u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(14124));
    ctx.set_gpr(31, 0x089F371Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x089F371Cu) goto L_089F371C;
    return;
L_089F371C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F372C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089F373Cu);
    // nop
    goto L_089F2778;
L_089F373C:
    ctx.set_gpr(2, 2207u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(14280));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2207u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(14436));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26860));
    ctx.set_gpr(6, 2207u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(11044));
    ctx.set_gpr(7, 2207u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(12536));
    ctx.set_gpr(8, 2207u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(14248));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-11452));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(28));
    ctx.set_gpr(11, 2207u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(14016));
    ctx.set_gpr(31, 0x089F3798u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x089F3798u) goto L_089F3798;
    return;
L_089F3798:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F37A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089F37B8u);
    // nop
    goto L_089F3674;
L_089F37B8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F37C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26860)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089F37ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x089F37ECu) goto L_089F37EC;
    return;
L_089F37EC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11444));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x089F3808u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x089F3808u) goto L_089F3808;
    return;
L_089F3808:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089F3818u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x089F3818u) goto L_089F3818;
    return;
L_089F3818:
    ctx.set_gpr(3, 2207u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(10172));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11408));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-11396));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-11384));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089F384Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089F384Cu) goto L_089F384C;
    return;
L_089F384C:
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
L_089F3864:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089F3874u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 578u, 0x089FAB38u>(ctx, &aot_mem) && ctx.pc == 0x089F3874u) goto L_089F3874;
    return;
L_089F3874:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F3884:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x089F389Cu);
    // nop
    goto L_089F3978;
L_089F389C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26844)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089F38B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x089F38B0u) goto L_089F38B0;
    return;
L_089F38B0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F38C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26844)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F38F0;
      }
      goto L_089F38DC;
    }
L_089F38DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F38F8;
      }
      goto L_089F38F0;
    }
L_089F38F0:
    ctx.set_gpr(31, 0x089F38F8u);
    // nop
    goto L_089F3978;
L_089F38F8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26844)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F3910:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089F3928u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 505u, 0x089422D0u>(ctx, &aot_mem) && ctx.pc == 0x089F3928u) goto L_089F3928;
    return;
L_089F3928:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-26556));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, 0x089F393Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089F393Cu) goto L_089F393C;
    return;
L_089F393C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5492));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x089F3960u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 764u, 0x08853094u>(ctx, &aot_mem) && ctx.pc == 0x089F3960u) goto L_089F3960;
    return;
L_089F3960:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F3978:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2207u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(14752));
    ctx.set_gpr(31, 0x089F3990u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x089F3990u) goto L_089F3990;
    return;
L_089F3990:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F39A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089F39B0u);
    // nop
    goto L_089F2778;
L_089F39B0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-11364));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26844));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-19704));
    ctx.set_gpr(7, 2189u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(31824));
    ctx.set_gpr(8, 2207u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(14868));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-11356));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(48));
    ctx.set_gpr(11, 2207u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(14608));
    ctx.set_gpr(31, 0x089F3A04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x089F3A04u) goto L_089F3A04;
    return;
L_089F3A04:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F3A14:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089F3A24u);
    // nop
    goto L_089F38C4;
L_089F3A24:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F3A34:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26840)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F3AFC;
      }
      goto L_089F3A50;
    }
L_089F3A50:
    ctx.set_gpr(31, 0x089F3A58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x089F3A58u) goto L_089F3A58;
    return;
L_089F3A58:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089F3A64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089F3A64u) goto L_089F3A64;
    return;
L_089F3A64:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26844)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089F3A78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x089F3A78u) goto L_089F3A78;
    return;
L_089F3A78:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26840), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F3AFC;
      }
      goto L_089F3A8C;
    }
L_089F3A8C:
    ctx.set_gpr(31, 0x089F3A94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x089F3A94u) goto L_089F3A94;
    return;
L_089F3A94:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089F3AA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 751u, 0x08927514u>(ctx, &aot_mem) && ctx.pc == 0x089F3AA4u) goto L_089F3AA4;
    return;
L_089F3AA4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26840)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F3AD0;
      }
      goto L_089F3AC8;
    }
L_089F3AC8:
    ctx.set_gpr(31, 0x089F3AD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x089F3AD0u) goto L_089F3AD0;
    return;
L_089F3AD0:
    ctx.set_gpr(31, 0x089F3AD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x089F3AD8u) goto L_089F3AD8;
    return;
L_089F3AD8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26840)));
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26840)));
    ctx.set_gpr(31, 0x089F3AFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x089F3AFCu) goto L_089F3AFC;
    return;
L_089F3AFC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F3B10:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26840)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F3B30;
      }
      goto L_089F3B28;
    }
L_089F3B28:
    ctx.set_gpr(31, 0x089F3B30u);
    // nop
    goto L_089F3978;
L_089F3B30:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26840)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F3B48:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x089F3B60u);
    // nop
    goto L_089F3C40;
L_089F3B60:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26836)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089F3B74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x089F3B74u) goto L_089F3B74;
    return;
L_089F3B74:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F3B88:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26836)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F3BB4;
      }
      goto L_089F3BA0;
    }
L_089F3BA0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F3BBC;
      }
      goto L_089F3BB4;
    }
L_089F3BB4:
    ctx.set_gpr(31, 0x089F3BBCu);
    // nop
    goto L_089F3C40;
L_089F3BBC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26836)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F3BD4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x089F3BECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 505u, 0x089422D0u>(ctx, &aot_mem) && ctx.pc == 0x089F3BECu) goto L_089F3BEC;
    return;
L_089F3BEC:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-26812));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x089F3C00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089F3C00u) goto L_089F3C00;
    return;
L_089F3C00:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5492));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x089F3C28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 288u, 0x088555D0u>(ctx, &aot_mem) && ctx.pc == 0x089F3C28u) goto L_089F3C28;
    return;
L_089F3C28:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F3C40:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2207u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(15464));
    ctx.set_gpr(31, 0x089F3C58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x089F3C58u) goto L_089F3C58;
    return;
L_089F3C58:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F3C68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089F3C78u);
    // nop
    goto L_089F2778;
L_089F3C78:
    ctx.set_gpr(2, 2207u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(15636));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-11332));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26836));
    ctx.set_gpr(6, 2207u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(16300));
    ctx.set_gpr(7, 2207u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(15620));
    ctx.set_gpr(8, 2207u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(15588));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-11324));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(11, 2207u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(15316));
    ctx.set_gpr(31, 0x089F3CD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x089F3CD4u) goto L_089F3CD4;
    return;
L_089F3CD4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F3CE4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089F3CF4u);
    // nop
    goto L_089F3B88;
L_089F3CF4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F3D04:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26824)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F3D14:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26836)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089F3D38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x089F3D38u) goto L_089F3D38;
    return;
L_089F3D38:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11300));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089F3D54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x089F3D54u) goto L_089F3D54;
    return;
L_089F3D54:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089F3D64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x089F3D64u) goto L_089F3D64;
    return;
L_089F3D64:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089F3D74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x089F3D74u) goto L_089F3D74;
    return;
L_089F3D74:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-11296));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-11292));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-11288));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089F3D9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089F3D9Cu) goto L_089F3D9C;
    return;
L_089F3D9C:
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
L_089F3DB4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26832)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F3E7C;
      }
      goto L_089F3DD0;
    }
L_089F3DD0:
    ctx.set_gpr(31, 0x089F3DD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x089F3DD8u) goto L_089F3DD8;
    return;
L_089F3DD8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089F3DE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089F3DE4u) goto L_089F3DE4;
    return;
L_089F3DE4:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26836)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089F3DF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x089F3DF8u) goto L_089F3DF8;
    return;
L_089F3DF8:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26832), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F3E7C;
      }
      goto L_089F3E0C;
    }
L_089F3E0C:
    ctx.set_gpr(31, 0x089F3E14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x089F3E14u) goto L_089F3E14;
    return;
L_089F3E14:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089F3E24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 751u, 0x08927514u>(ctx, &aot_mem) && ctx.pc == 0x089F3E24u) goto L_089F3E24;
    return;
L_089F3E24:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26832)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F3E50;
      }
      goto L_089F3E48;
    }
L_089F3E48:
    ctx.set_gpr(31, 0x089F3E50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x089F3E50u) goto L_089F3E50;
    return;
L_089F3E50:
    ctx.set_gpr(31, 0x089F3E58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x089F3E58u) goto L_089F3E58;
    return;
L_089F3E58:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26832)));
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26832)));
    ctx.set_gpr(31, 0x089F3E7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x089F3E7Cu) goto L_089F3E7C;
    return;
L_089F3E7C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F3E90:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x089F3EA8u);
    // nop
    goto L_089F3F84;
L_089F3EA8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26824)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089F3EBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x089F3EBCu) goto L_089F3EBC;
    return;
L_089F3EBC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F3ED0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26824)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089F3EFC;
      }
      goto L_089F3EE8;
    }
L_089F3EE8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089F3F04;
      }
      goto L_089F3EFC;
    }
L_089F3EFC:
    ctx.set_gpr(31, 0x089F3F04u);
    // nop
    goto L_089F3F84;
L_089F3F04:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26824)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F3F1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089F3F34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 505u, 0x089422D0u>(ctx, &aot_mem) && ctx.pc == 0x089F3F34u) goto L_089F3F34;
    return;
L_089F3F34:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-27068));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, 0x089F3F48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x089F3F48u) goto L_089F3F48;
    return;
L_089F3F48:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5492));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x089F3F6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 764u, 0x08853094u>(ctx, &aot_mem) && ctx.pc == 0x089F3F6Cu) goto L_089F3F6C;
    return;
L_089F3F6C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F3F84:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2207u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(16300));
    ctx.set_gpr(31, 0x089F3F9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x089F3F9Cu) goto L_089F3F9C;
    return;
L_089F3F9C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089F3FAC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089F3FBCu);
    // nop
    goto L_089F2778;
L_089F3FBC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-11284));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-26824));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-19704));
    ctx.set_gpr(7, 2189u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(31824));
    ctx.set_gpr(8, 2207u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(16416));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-11276));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(48));
    ctx.pc = 0x089F4000u; return;
}

void recomp_unit_0123(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0123_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_123(Runtime &runtime) {
    runtime.register_generated_unit(123u, 0x089F0000u, 16384u, &recomp_unit_0123, &recomp_unit_0123_entry);
    runtime.register_function(0x089F0000u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0004u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0064u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0074u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0080u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F00ACu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F00C0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F00D4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0108u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0144u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0158u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F016Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F01ACu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F01F8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0208u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0224u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0240u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0244u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0254u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0264u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F026Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0278u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F02A4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F02B8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F02CCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0300u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F033Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0350u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0364u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F03A4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F03F0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0400u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F041Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0438u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F043Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F044Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F048Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F054Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0564u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F057Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0588u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F05B4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F05C8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F05DCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0610u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0640u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0654u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0668u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F06A8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F071Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0748u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0758u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0770u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0788u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F07A0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F07ECu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0850u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0860u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F086Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0898u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F08ACu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F08C0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F08F4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0930u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0944u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0958u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0998u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F09D4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F09E4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F09FCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0A14u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0A38u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0A48u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0A64u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0A88u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0A8Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0A9Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0AACu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0AB4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0AC0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0AECu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0B00u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0B14u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0B48u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0B84u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0B98u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0BACu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0BECu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0C28u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0C38u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0C50u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0C68u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0C8Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0C9Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0CB8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0CDCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0CE0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0CF0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0D34u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0DF8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0E10u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0E28u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0E34u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0E60u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0E74u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0E88u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0EBCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0EECu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0F00u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0F14u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0F54u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0F90u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0FA0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0FB8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F0FD0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F101Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F103Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F104Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1060u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1070u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1088u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F10A0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F10B8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1108u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1168u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1178u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1184u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F11B0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F11C4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F11D8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F120Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1248u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F125Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1270u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F12B0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1308u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1318u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1334u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1350u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1354u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1364u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1374u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F137Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1388u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F13B4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F13C8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F13DCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1410u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F144Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1460u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1474u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F14B4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F150Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F151Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1538u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1554u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1558u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1568u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F15A8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1668u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1680u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1698u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F16A4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F16D0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F16E4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F16F8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F172Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F175Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1770u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1784u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F17C4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1844u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1870u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1880u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1898u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F18B0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F18C8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1914u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1978u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1988u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1994u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F19C0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F19D4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F19E8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1A1Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1A58u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1A6Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1A80u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1AC0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1B04u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1B18u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1B2Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1B40u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1B58u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1B70u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1B94u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1BA4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1BC0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1BE4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1BE8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1BF8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1C08u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1C10u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1C1Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1C48u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1C5Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1C70u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1CA4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1CE0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1CF4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1D08u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1D48u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1D8Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1DA0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1DB4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1DC8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1DE0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1DF8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1E1Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1E2Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1E48u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1E6Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1E70u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1E80u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1EC4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1F88u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1FA0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1FB8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1FC4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F1FF0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2004u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2018u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F204Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F207Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2090u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F20A4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F20E4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2128u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F213Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2150u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2164u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F217Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2194u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F21E0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2200u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2210u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2224u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2234u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F224Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2264u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F227Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F22CCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F22ECu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2308u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2314u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2320u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F233Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F235Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2374u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2380u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2388u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2394u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F23A0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F23BCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F23DCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F23F4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2400u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2408u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2414u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2420u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F243Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F245Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2468u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2484u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F248Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2498u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F24A4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F24C0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F24E0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F24F8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2504u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F250Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2514u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F252Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2538u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2540u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F254Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2558u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2560u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2568u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2580u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2588u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2594u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F25A0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F25BCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F25DCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F25F4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2600u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2608u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2614u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2620u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2628u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2630u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2648u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2658u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2660u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2668u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2670u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2680u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F268Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2698u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F26B4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F26C8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F26D8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F26E8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F26F4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F26FCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2708u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2714u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2718u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2724u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2730u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F273Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2744u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2758u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2768u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2770u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2778u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F278Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F279Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F27A4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F27ACu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F27BCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F27D4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F27F8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2800u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2818u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2830u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2854u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F285Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2874u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F288Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F28A0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F28B4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F28CCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F28D4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F28E0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F28ECu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F28F4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F290Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2924u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2938u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2940u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2958u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F296Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2980u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F299Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F29B4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F29C4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F29D4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2A28u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2A38u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2A48u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2A58u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2A70u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2A78u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2A84u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2A90u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2A98u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2AB0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2AC8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2ADCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2AE4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2AFCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2B14u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2B24u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2B34u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2B8Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2B9Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2BACu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2BBCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2BD4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2BE4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2BF4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2C04u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2C14u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2C24u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2C34u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2C4Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2C60u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2C68u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2C80u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2C94u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2CA8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2CC4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2CDCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2CECu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2CFCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2D50u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2D60u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2D70u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2D80u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2D90u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2DA0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2DB8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2DCCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2DD4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2DECu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2E00u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2E14u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2E30u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2E48u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2E58u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2E68u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2EBCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2ECCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2EDCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2EECu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2EFCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2F0Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2F24u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2F38u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2F4Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2F64u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2F6Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2F78u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2F84u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2F8Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2FA4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2FBCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2FD0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2FD8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F2FF0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3004u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3018u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3034u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F304Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F305Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F306Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F30C8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F30D8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F30E8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F30F8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3108u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F312Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3148u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3158u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3174u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3184u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3198u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F31C0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F31D8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F31E8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F31F8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3210u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3218u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3224u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3230u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3238u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3250u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3268u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F327Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3284u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F329Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F32B0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F32C4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F32E0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F32F8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3308u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3318u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F336Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F337Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F338Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F339Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F33C0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F33DCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F33ECu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3408u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3418u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3438u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3460u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3478u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3490u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3498u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F34A4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F34B0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F34B8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F34D0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F34E8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F34FCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3504u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F351Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3530u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3544u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3560u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3578u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3588u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3598u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F35ECu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F35FCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F360Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F361Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3634u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F363Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3648u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3654u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F365Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3674u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F368Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F36A0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F36A8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F36C0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F36D4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F36E8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3704u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F371Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F372Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F373Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3798u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F37A8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F37B8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F37C8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F37ECu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3808u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3818u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F384Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3864u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3874u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3884u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F389Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F38B0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F38C4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F38DCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F38F0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F38F8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3910u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3928u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F393Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3960u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3978u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3990u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F39A0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F39B0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3A04u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3A14u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3A24u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3A34u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3A50u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3A58u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3A64u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3A78u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3A8Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3A94u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3AA4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3AC8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3AD0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3AD8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3AFCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3B10u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3B28u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3B30u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3B48u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3B60u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3B74u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3B88u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3BA0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3BB4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3BBCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3BD4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3BECu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3C00u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3C28u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3C40u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3C58u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3C68u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3C78u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3CD4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3CE4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3CF4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3D04u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3D14u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3D38u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3D54u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3D64u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3D74u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3D9Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3DB4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3DD0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3DD8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3DE4u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3DF8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3E0Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3E14u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3E24u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3E48u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3E50u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3E58u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3E7Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3E90u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3EA8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3EBCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3ED0u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3EE8u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3EFCu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3F04u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3F1Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3F34u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3F48u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3F6Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3F84u, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3F9Cu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3FACu, &recomp_unit_0123, "recomp_unit_0123");
    runtime.register_function(0x089F3FBCu, &recomp_unit_0123, "recomp_unit_0123");
}
} // namespace psprecomp
