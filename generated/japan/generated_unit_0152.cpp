#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0152[4091] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0,
    0, 0, 7, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 12, 13, 0, 0,
    0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 17, 0, 18, 0, 19, 20, 0, 0, 0, 0,
    0, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 25, 26, 0, 27, 0, 0, 0, 0, 0,
    0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0,
    0, 31, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0,
    36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 38, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 41, 0, 0, 42, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    45, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0,
    0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 56, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0,
    59, 0, 0, 0, 0, 0, 0, 60, 0, 0, 61, 0, 0, 0, 0, 62, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 0, 0,
    70, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 74, 0,
    75, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 79, 0, 80, 0, 81, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 86, 0, 87, 0, 88, 0, 0, 0,
    0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 93, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 96, 0,
    97, 98, 0, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0,
    0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0,
    0, 0, 0, 0, 111, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0,
    116, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 0, 126, 0, 0, 127, 0, 0, 0, 128, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0,
    133, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 137, 0, 0, 138, 0, 0, 139, 0, 0, 140, 0, 0,
    0, 141, 0, 142, 0, 143, 0, 0, 0, 0, 144, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 147, 0, 0, 148, 0, 0, 0, 149,
    0, 150, 0, 0, 0, 0, 0, 151, 0, 152, 0, 153, 0, 0, 0, 154, 0, 155, 0, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158,
    0, 0, 159, 0, 0, 0, 0, 160, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162,
    0, 0, 0, 0, 0, 163, 0, 0, 164, 0, 0, 0, 0, 0, 0, 165, 166, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 171, 0, 0, 0, 0, 0, 0, 172, 173, 0, 0, 0,
    0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 0,
    0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 0,
    0, 0, 0, 184, 185, 0, 0, 0, 0, 186, 0, 187, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 191,
    0, 0, 192, 0, 0, 193, 0, 194, 0, 0, 195, 196, 0, 0, 0, 197, 0, 198, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 202, 0, 0, 203, 0, 0, 0, 0, 0,
    0, 204, 205, 0, 0, 0, 206, 0, 0, 207, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 209, 0, 210, 0, 211, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 214, 0,
    0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 218, 0,
    0, 0, 0, 219, 0, 220, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 222, 0, 223, 0, 0, 224, 0, 0, 0, 0, 0, 225, 0, 226, 0, 0,
    227, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 233, 0, 234, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 237, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0, 242, 243, 0, 0, 0, 244, 0, 0, 245, 0, 0, 246, 0, 0, 247, 0, 0, 248, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 252,
    0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 255, 0, 256, 0, 0, 0, 0,
    257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 259, 0, 260, 0, 0, 261, 0, 262, 0, 0,
    263, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 268, 0, 0, 269, 0, 0, 0, 0, 270, 271, 0, 0, 272, 0, 0, 273, 0, 0, 0, 0, 0, 274, 0, 275, 0, 0, 0,
    0, 276, 0, 277, 0, 0, 278, 0, 0, 279, 0, 0, 0, 0, 280, 0, 281, 0, 0, 282, 0, 283, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0,
    285, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 288, 0, 0, 0, 289, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 292,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 294, 0, 295, 0, 0, 0, 296, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 298, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0,
    0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 302, 0, 303, 0, 0, 304, 0, 0, 305, 0, 306, 0, 0, 307, 308, 0,
    0, 0, 309, 0, 310, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 314, 0, 0, 315, 0, 0, 0, 0, 0, 0, 316, 317, 0, 0, 0, 318, 0, 0, 319, 0, 0, 0,
    320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 322, 0, 323, 0, 0, 324, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 326, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 329, 0, 0, 330, 0, 0, 0, 331, 0, 0, 332, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0,
    0, 0, 341, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 346, 347, 0, 348, 0, 0, 0, 0, 0, 0, 349, 350, 0, 351, 0, 0, 0, 0, 0,
    0, 352, 353, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 357, 0, 0, 0, 0, 0, 0, 358,
    0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0,
    363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 365, 0, 0, 0, 0, 0, 366, 0, 367, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0,
    0, 0, 374, 0, 0, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 381, 0, 0, 0, 382, 0, 0, 0,
    0, 0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 385, 0, 0, 0, 386, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0,
    0, 389, 0, 0, 390, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 392, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0,
    0, 0, 395, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 398, 399, 0, 0, 0, 0, 0, 0, 0, 400, 0, 401, 0, 0,
    0, 402, 0, 0, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 406, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0,
    0, 410, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0,
    414, 0, 0, 0, 415, 0, 0, 416, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 419, 0, 420, 0, 0, 0, 421, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 423, 0, 424, 0, 0, 425, 0, 0, 0, 0, 0,
    0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428,
    0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 431,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 436, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 441, 0, 0, 442, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 450, 0, 0, 451, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 453, 454, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 457, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 460, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 463, 0, 0,
    0, 464, 0, 0, 465, 0, 0, 0, 0, 466, 0, 0, 0, 0, 467, 0, 0, 0, 0, 468, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0,
    470, 0, 0, 471, 0, 0, 472, 0, 0, 473, 0, 0, 474, 0, 475, 0, 476, 0, 477, 0, 478, 0, 0, 0, 479, 0, 0, 480, 0, 0, 481, 0,
    0, 0, 0, 482, 0, 0, 483, 0, 484, 0, 0, 0, 0, 0, 485, 0, 0, 0, 486, 0, 0, 487, 0, 0, 488, 0, 489, 0, 0, 0, 490, 0,
    491, 0, 492, 0, 0, 493, 0, 0, 494, 0, 0, 0, 0, 495, 0, 496, 0, 497, 0, 0, 498, 0, 0, 499, 0, 0, 0, 500, 0, 0, 501, 0,
    0, 502, 0, 0, 0, 0, 503, 0, 0, 504, 0, 505, 0, 0, 0, 0, 0, 506, 0, 0, 0, 507, 0, 0, 508, 0, 0, 509, 0, 510, 0, 0,
    0, 511, 0, 512, 0, 513, 0, 0, 514, 0, 0, 515, 0, 0, 0, 516, 0, 0, 517, 0, 0, 518, 0, 0, 0, 0, 519, 0, 0, 520, 0, 521,
    0, 0, 0, 0, 0, 522, 0, 0, 0, 523, 0, 0, 524, 0, 0, 525, 0, 526, 0, 0, 0, 527, 0, 0, 0, 0, 528, 0, 0, 0, 529, 0,
    0, 530, 0, 0, 531, 0, 0, 532, 0, 0, 533, 0, 0, 534, 0, 535, 0, 0, 536, 0, 0, 537, 0, 0, 538, 539, 0, 540, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 541, 0, 0, 542, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 544, 0, 0, 545, 0, 0, 546, 0, 0, 0, 0, 547,
    0, 0, 548, 0, 549, 0, 0, 0, 0, 550, 0, 0, 0, 551, 0, 0, 552, 0, 0, 553, 0, 0, 0, 554, 0, 555, 0, 0, 0, 556, 0, 0,
    0, 557, 0, 558, 0, 0, 559, 0, 0, 0, 560, 0, 0, 561, 0, 0, 562, 0, 0, 563, 0, 0, 0, 0, 564, 0, 0, 565, 0, 566, 0, 0,
    0, 0, 567, 0, 0, 0, 568, 0, 0, 569, 0, 0, 570, 0, 571, 0, 0, 0, 572, 0, 0, 0, 573, 0, 0, 0, 574, 0, 0, 0, 575, 0,
    0, 576, 0, 0, 0, 577, 0, 0, 578, 0, 0, 579, 0, 0, 0, 0, 580, 0, 0, 581, 0, 582, 0, 0, 0, 0, 583, 0, 0, 0, 584, 0,
    0, 585, 0, 0, 586, 0, 0, 0, 587, 0, 0, 0, 588, 0, 0, 0, 589, 0, 0, 0, 0, 0, 0, 0, 590, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 591, 0, 0, 0, 592, 0, 0, 593, 0, 0, 594, 0, 0, 595, 0, 0, 596, 0, 0, 597, 598, 0, 0, 599, 0, 0, 0,
    0, 600, 0, 0, 0, 601, 0, 0, 602, 0, 0, 0, 603, 0, 0, 604, 0, 0, 605, 0, 0, 606, 0, 0, 0, 0, 0, 0, 0, 0, 0, 607,
    0, 0, 608, 0, 0, 0, 609, 0, 0, 610, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 611, 0, 0, 0, 0, 0, 0, 0, 612, 0, 0, 0,
    613, 0, 0, 614, 0, 0, 0, 615, 0, 616, 0, 0, 0, 0, 617, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 618, 0, 0, 619,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 620, 0, 621, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 622, 0, 0, 0, 623, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 624, 0, 0, 0, 625, 0,
    0, 0, 0, 0, 0, 626, 0, 0, 0, 627, 0, 628, 0, 0, 629, 0, 0, 630, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 631, 0, 0,
    632, 0, 0, 0, 0, 0, 0, 0, 0, 0, 633, 0, 634, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 635, 0, 0, 0, 0, 0, 0, 0, 0, 0, 636, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 637, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 638, 0, 0, 0, 639, 0, 0, 0, 0, 0, 0, 640, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 641, 0, 0, 0,
    642, 0, 0, 643, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 644, 0, 0, 645, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 646, 0, 647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 648, 0, 0, 0, 649,
    0, 0, 0, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 651, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 652, 0, 0, 653, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 654, 0, 655, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 656, 0, 0, 0, 657,
};
void recomp_unit_0152_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A64000u;
        entry_id = (entry_delta < 16364u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0152[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A64000;
    case 2u: goto L_08A6401C;
    case 3u: goto L_08A6402C;
    case 4u: goto L_08A6403C;
    case 5u: goto L_08A6404C;
    case 6u: goto L_08A64078;
    case 7u: goto L_08A64088;
    case 8u: goto L_08A64094;
    case 9u: goto L_08A640B8;
    case 10u: goto L_08A640C8;
    case 11u: goto L_08A640E0;
    case 12u: goto L_08A640F0;
    case 13u: goto L_08A640F4;
    case 14u: goto L_08A64114;
    case 15u: goto L_08A64124;
    case 16u: goto L_08A64144;
    case 17u: goto L_08A64158;
    case 18u: goto L_08A64160;
    case 19u: goto L_08A64168;
    case 20u: goto L_08A6416C;
    case 21u: goto L_08A64188;
    case 22u: goto L_08A641A0;
    case 23u: goto L_08A641BC;
    case 24u: goto L_08A641D0;
    case 25u: goto L_08A641DC;
    case 26u: goto L_08A641E0;
    case 27u: goto L_08A641E8;
    case 28u: goto L_08A64204;
    case 29u: goto L_08A64228;
    case 30u: goto L_08A64260;
    case 31u: goto L_08A64284;
    case 32u: goto L_08A64290;
    case 33u: goto L_08A642B4;
    case 34u: goto L_08A642D4;
    case 35u: goto L_08A642E8;
    case 36u: goto L_08A64300;
    case 37u: goto L_08A64358;
    case 38u: goto L_08A64364;
    case 39u: goto L_08A64398;
    case 40u: goto L_08A643C4;
    case 41u: goto L_08A64418;
    case 42u: goto L_08A64424;
    case 43u: goto L_08A64430;
    case 44u: goto L_08A64458;
    case 45u: goto L_08A64480;
    case 46u: goto L_08A64494;
    case 47u: goto L_08A644AC;
    case 48u: goto L_08A644BC;
    case 49u: goto L_08A644C0;
    case 50u: goto L_08A644D8;
    case 51u: goto L_08A644F0;
    case 52u: goto L_08A6450C;
    case 53u: goto L_08A64520;
    case 54u: goto L_08A64538;
    case 55u: goto L_08A64548;
    case 56u: goto L_08A64554;
    case 57u: goto L_08A64560;
    case 58u: goto L_08A6456C;
    case 59u: goto L_08A64580;
    case 60u: goto L_08A6459C;
    case 61u: goto L_08A645A8;
    case 62u: goto L_08A645BC;
    case 63u: goto L_08A645C8;
    case 64u: goto L_08A6461C;
    case 65u: goto L_08A6464C;
    case 66u: goto L_08A64698;
    case 67u: goto L_08A646B0;
    case 68u: goto L_08A646D8;
    case 69u: goto L_08A646F0;
    case 70u: goto L_08A64700;
    case 71u: goto L_08A64724;
    case 72u: goto L_08A6472C;
    case 73u: goto L_08A64770;
    case 74u: goto L_08A64778;
    case 75u: goto L_08A64780;
    case 76u: goto L_08A64790;
    case 77u: goto L_08A6479C;
    case 78u: goto L_08A647B4;
    case 79u: goto L_08A647D4;
    case 80u: goto L_08A647DC;
    case 81u: goto L_08A647E4;
    case 82u: goto L_08A6481C;
    case 83u: goto L_08A64834;
    case 84u: goto L_08A64844;
    case 85u: goto L_08A64854;
    case 86u: goto L_08A64860;
    case 87u: goto L_08A64868;
    case 88u: goto L_08A64870;
    case 89u: goto L_08A64884;
    case 90u: goto L_08A6489C;
    case 91u: goto L_08A648B4;
    case 92u: goto L_08A648C4;
    case 93u: goto L_08A648CC;
    case 94u: goto L_08A648DC;
    case 95u: goto L_08A648EC;
    case 96u: goto L_08A648F8;
    case 97u: goto L_08A64900;
    case 98u: goto L_08A64904;
    case 99u: goto L_08A6490C;
    case 100u: goto L_08A64920;
    case 101u: goto L_08A64938;
    case 102u: goto L_08A64950;
    case 103u: goto L_08A64968;
    case 104u: goto L_08A64978;
    case 105u: goto L_08A6498C;
    case 106u: goto L_08A649A4;
    case 107u: goto L_08A649BC;
    case 108u: goto L_08A649CC;
    case 109u: goto L_08A649E0;
    case 110u: goto L_08A649F8;
    case 111u: goto L_08A64A10;
    case 112u: goto L_08A64A18;
    case 113u: goto L_08A64A28;
    case 114u: goto L_08A64A3C;
    case 115u: goto L_08A64A60;
    case 116u: goto L_08A64A80;
    case 117u: goto L_08A64A90;
    case 118u: goto L_08A64AA4;
    case 119u: goto L_08A64ABC;
    case 120u: goto L_08A64ACC;
    case 121u: goto L_08A64AD4;
    case 122u: goto L_08A64AE8;
    case 123u: goto L_08A64B20;
    case 124u: goto L_08A64B34;
    case 125u: goto L_08A64B44;
    case 126u: goto L_08A64B5C;
    case 127u: goto L_08A64B68;
    case 128u: goto L_08A64B78;
    case 129u: goto L_08A64BA4;
    case 130u: goto L_08A64BC4;
    case 131u: goto L_08A64BCC;
    case 132u: goto L_08A64BE8;
    case 133u: goto L_08A64C00;
    case 134u: goto L_08A64C24;
    case 135u: goto L_08A64C30;
    case 136u: goto L_08A64C44;
    case 137u: goto L_08A64C50;
    case 138u: goto L_08A64C5C;
    case 139u: goto L_08A64C68;
    case 140u: goto L_08A64C74;
    case 141u: goto L_08A64C84;
    case 142u: goto L_08A64C8C;
    case 143u: goto L_08A64C94;
    case 144u: goto L_08A64CA8;
    case 145u: goto L_08A64CB4;
    case 146u: goto L_08A64CD4;
    case 147u: goto L_08A64CE0;
    case 148u: goto L_08A64CEC;
    case 149u: goto L_08A64CFC;
    case 150u: goto L_08A64D04;
    case 151u: goto L_08A64D1C;
    case 152u: goto L_08A64D24;
    case 153u: goto L_08A64D2C;
    case 154u: goto L_08A64D3C;
    case 155u: goto L_08A64D44;
    case 156u: goto L_08A64D50;
    case 157u: goto L_08A64D6C;
    case 158u: goto L_08A64D7C;
    case 159u: goto L_08A64D88;
    case 160u: goto L_08A64D9C;
    case 161u: goto L_08A64DA4;
    case 162u: goto L_08A64DFC;
    case 163u: goto L_08A64E14;
    case 164u: goto L_08A64E20;
    case 165u: goto L_08A64E3C;
    case 166u: goto L_08A64E40;
    case 167u: goto L_08A64E54;
    case 168u: goto L_08A64E6C;
    case 169u: goto L_08A64EAC;
    case 170u: goto L_08A64EC4;
    case 171u: goto L_08A64ED0;
    case 172u: goto L_08A64EEC;
    case 173u: goto L_08A64EF0;
    case 174u: goto L_08A64F08;
    case 175u: goto L_08A64F20;
    case 176u: goto L_08A64F34;
    case 177u: goto L_08A64F44;
    case 178u: goto L_08A64F58;
    case 179u: goto L_08A64F68;
    case 180u: goto L_08A64F8C;
    case 181u: goto L_08A64FCC;
    case 182u: goto L_08A64FE4;
    case 183u: goto L_08A64FF0;
    case 184u: goto L_08A6500C;
    case 185u: goto L_08A65010;
    case 186u: goto L_08A65024;
    case 187u: goto L_08A6502C;
    case 188u: goto L_08A65038;
    case 189u: goto L_08A65064;
    case 190u: goto L_08A65074;
    case 191u: goto L_08A6507C;
    case 192u: goto L_08A65088;
    case 193u: goto L_08A65094;
    case 194u: goto L_08A6509C;
    case 195u: goto L_08A650A8;
    case 196u: goto L_08A650AC;
    case 197u: goto L_08A650BC;
    case 198u: goto L_08A650C4;
    case 199u: goto L_08A650D0;
    case 200u: goto L_08A650F0;
    case 201u: goto L_08A65144;
    case 202u: goto L_08A6515C;
    case 203u: goto L_08A65168;
    case 204u: goto L_08A65184;
    case 205u: goto L_08A65188;
    case 206u: goto L_08A65198;
    case 207u: goto L_08A651A4;
    case 208u: goto L_08A651B4;
    case 209u: goto L_08A65284;
    case 210u: goto L_08A6528C;
    case 211u: goto L_08A65294;
    case 212u: goto L_08A652A0;
    case 213u: goto L_08A65370;
    case 214u: goto L_08A65378;
    case 215u: goto L_08A65390;
    case 216u: goto L_08A653D8;
    case 217u: goto L_08A653EC;
    case 218u: goto L_08A653F8;
    case 219u: goto L_08A6540C;
    case 220u: goto L_08A65414;
    case 221u: goto L_08A65420;
    case 222u: goto L_08A65440;
    case 223u: goto L_08A65448;
    case 224u: goto L_08A65454;
    case 225u: goto L_08A6546C;
    case 226u: goto L_08A65474;
    case 227u: goto L_08A65480;
    case 228u: goto L_08A654A0;
    case 229u: goto L_08A654D0;
    case 230u: goto L_08A654DC;
    case 231u: goto L_08A654EC;
    case 232u: goto L_08A655BC;
    case 233u: goto L_08A655C4;
    case 234u: goto L_08A655CC;
    case 235u: goto L_08A655D8;
    case 236u: goto L_08A656A8;
    case 237u: goto L_08A656B0;
    case 238u: goto L_08A656BC;
    case 239u: goto L_08A656D8;
    case 240u: goto L_08A65710;
    case 241u: goto L_08A6571C;
    case 242u: goto L_08A65730;
    case 243u: goto L_08A65734;
    case 244u: goto L_08A65744;
    case 245u: goto L_08A65750;
    case 246u: goto L_08A6575C;
    case 247u: goto L_08A65768;
    case 248u: goto L_08A65774;
    case 249u: goto L_08A6579C;
    case 250u: goto L_08A657C8;
    case 251u: goto L_08A657E8;
    case 252u: goto L_08A657FC;
    case 253u: goto L_08A6580C;
    case 254u: goto L_08A658DC;
    case 255u: goto L_08A658E4;
    case 256u: goto L_08A658EC;
    case 257u: goto L_08A65900;
    case 258u: goto L_08A659D0;
    case 259u: goto L_08A659D8;
    case 260u: goto L_08A659E0;
    case 261u: goto L_08A659EC;
    case 262u: goto L_08A659F4;
    case 263u: goto L_08A65A00;
    case 264u: goto L_08A65A24;
    case 265u: goto L_08A65A2C;
    case 266u: goto L_08A65A40;
    case 267u: goto L_08A65A68;
    case 268u: goto L_08A65A94;
    case 269u: goto L_08A65AA0;
    case 270u: goto L_08A65AB4;
    case 271u: goto L_08A65AB8;
    case 272u: goto L_08A65AC4;
    case 273u: goto L_08A65AD0;
    case 274u: goto L_08A65AE8;
    case 275u: goto L_08A65AF0;
    case 276u: goto L_08A65B04;
    case 277u: goto L_08A65B0C;
    case 278u: goto L_08A65B18;
    case 279u: goto L_08A65B24;
    case 280u: goto L_08A65B38;
    case 281u: goto L_08A65B40;
    case 282u: goto L_08A65B4C;
    case 283u: goto L_08A65B54;
    case 284u: goto L_08A65B60;
    case 285u: goto L_08A65B80;
    case 286u: goto L_08A65BA0;
    case 287u: goto L_08A65BB8;
    case 288u: goto L_08A65BC0;
    case 289u: goto L_08A65BD0;
    case 290u: goto L_08A65BDC;
    case 291u: goto L_08A65BEC;
    case 292u: goto L_08A65BFC;
    case 293u: goto L_08A65CCC;
    case 294u: goto L_08A65CD4;
    case 295u: goto L_08A65CDC;
    case 296u: goto L_08A65CEC;
    case 297u: goto L_08A65DBC;
    case 298u: goto L_08A65DC4;
    case 299u: goto L_08A65DE0;
    case 300u: goto L_08A65E04;
    case 301u: goto L_08A65E30;
    case 302u: goto L_08A65E40;
    case 303u: goto L_08A65E48;
    case 304u: goto L_08A65E54;
    case 305u: goto L_08A65E60;
    case 306u: goto L_08A65E68;
    case 307u: goto L_08A65E74;
    case 308u: goto L_08A65E78;
    case 309u: goto L_08A65E88;
    case 310u: goto L_08A65E90;
    case 311u: goto L_08A65E9C;
    case 312u: goto L_08A65EBC;
    case 313u: goto L_08A65F10;
    case 314u: goto L_08A65F28;
    case 315u: goto L_08A65F34;
    case 316u: goto L_08A65F50;
    case 317u: goto L_08A65F54;
    case 318u: goto L_08A65F64;
    case 319u: goto L_08A65F70;
    case 320u: goto L_08A65F80;
    case 321u: goto L_08A66050;
    case 322u: goto L_08A66058;
    case 323u: goto L_08A66060;
    case 324u: goto L_08A6606C;
    case 325u: goto L_08A6613C;
    case 326u: goto L_08A66144;
    case 327u: goto L_08A6615C;
    case 328u: goto L_08A661C8;
    case 329u: goto L_08A66204;
    case 330u: goto L_08A66210;
    case 331u: goto L_08A66220;
    case 332u: goto L_08A6622C;
    case 333u: goto L_08A66240;
    case 334u: goto L_08A66264;
    case 335u: goto L_08A662A0;
    case 336u: goto L_08A662BC;
    case 337u: goto L_08A662DC;
    case 338u: goto L_08A66324;
    case 339u: goto L_08A66360;
    case 340u: goto L_08A66374;
    case 341u: goto L_08A66388;
    case 342u: goto L_08A6639C;
    case 343u: goto L_08A663CC;
    case 344u: goto L_08A663F0;
    case 345u: goto L_08A66418;
    case 346u: goto L_08A66434;
    case 347u: goto L_08A66438;
    case 348u: goto L_08A66440;
    case 349u: goto L_08A6645C;
    case 350u: goto L_08A66460;
    case 351u: goto L_08A66468;
    case 352u: goto L_08A66484;
    case 353u: goto L_08A66488;
    case 354u: goto L_08A66494;
    case 355u: goto L_08A664C4;
    case 356u: goto L_08A664D4;
    case 357u: goto L_08A664E0;
    case 358u: goto L_08A664FC;
    case 359u: goto L_08A66510;
    case 360u: goto L_08A6652C;
    case 361u: goto L_08A66554;
    case 362u: goto L_08A66560;
    case 363u: goto L_08A66580;
    case 364u: goto L_08A665CC;
    case 365u: goto L_08A665D4;
    case 366u: goto L_08A665EC;
    case 367u: goto L_08A665F4;
    case 368u: goto L_08A6661C;
    case 369u: goto L_08A66654;
    case 370u: goto L_08A66670;
    case 371u: goto L_08A666A4;
    case 372u: goto L_08A666CC;
    case 373u: goto L_08A666F8;
    case 374u: goto L_08A66708;
    case 375u: goto L_08A6671C;
    case 376u: goto L_08A6672C;
    case 377u: goto L_08A66744;
    case 378u: goto L_08A66760;
    case 379u: goto L_08A667B0;
    case 380u: goto L_08A667DC;
    case 381u: goto L_08A667E0;
    case 382u: goto L_08A667F0;
    case 383u: goto L_08A66810;
    case 384u: goto L_08A66820;
    case 385u: goto L_08A6682C;
    case 386u: goto L_08A6683C;
    case 387u: goto L_08A66844;
    case 388u: goto L_08A66878;
    case 389u: goto L_08A66884;
    case 390u: goto L_08A66890;
    case 391u: goto L_08A668AC;
    case 392u: goto L_08A668C4;
    case 393u: goto L_08A668D4;
    case 394u: goto L_08A668F4;
    case 395u: goto L_08A66908;
    case 396u: goto L_08A6691C;
    case 397u: goto L_08A66934;
    case 398u: goto L_08A66948;
    case 399u: goto L_08A6694C;
    case 400u: goto L_08A6696C;
    case 401u: goto L_08A66974;
    case 402u: goto L_08A66984;
    case 403u: goto L_08A6699C;
    case 404u: goto L_08A669AC;
    case 405u: goto L_08A669C8;
    case 406u: goto L_08A66A04;
    case 407u: goto L_08A66A14;
    case 408u: goto L_08A66A48;
    case 409u: goto L_08A66A78;
    case 410u: goto L_08A66A84;
    case 411u: goto L_08A66A94;
    case 412u: goto L_08A66AB8;
    case 413u: goto L_08A66AF4;
    case 414u: goto L_08A66B00;
    case 415u: goto L_08A66B10;
    case 416u: goto L_08A66B1C;
    case 417u: goto L_08A66B30;
    case 418u: goto L_08A66B54;
    case 419u: goto L_08A66B90;
    case 420u: goto L_08A66B98;
    case 421u: goto L_08A66BA8;
    case 422u: goto L_08A66BB8;
    case 423u: goto L_08A66BD4;
    case 424u: goto L_08A66BDC;
    case 425u: goto L_08A66BE8;
    case 426u: goto L_08A66C04;
    case 427u: goto L_08A66C2C;
    case 428u: goto L_08A66C7C;
    case 429u: goto L_08A66C9C;
    case 430u: goto L_08A66CEC;
    case 431u: goto L_08A66CFC;
    case 432u: goto L_08A66D44;
    case 433u: goto L_08A66D50;
    case 434u: goto L_08A66DC0;
    case 435u: goto L_08A66DDC;
    case 436u: goto L_08A66DEC;
    case 437u: goto L_08A66E34;
    case 438u: goto L_08A66E40;
    case 439u: goto L_08A66EB0;
    case 440u: goto L_08A66ECC;
    case 441u: goto L_08A66EDC;
    case 442u: goto L_08A66EE8;
    case 443u: goto L_08A66F30;
    case 444u: goto L_08A66F3C;
    case 445u: goto L_08A66FAC;
    case 446u: goto L_08A66FC8;
    case 447u: goto L_08A66FE4;
    case 448u: goto L_08A67018;
    case 449u: goto L_08A67028;
    case 450u: goto L_08A67044;
    case 451u: goto L_08A67050;
    case 452u: goto L_08A6705C;
    case 453u: goto L_08A67094;
    case 454u: goto L_08A67098;
    case 455u: goto L_08A670A0;
    case 456u: goto L_08A670CC;
    case 457u: goto L_08A67110;
    case 458u: goto L_08A67120;
    case 459u: goto L_08A67168;
    case 460u: goto L_08A67178;
    case 461u: goto L_08A671B8;
    case 462u: goto L_08A671D8;
    case 463u: goto L_08A671F4;
    case 464u: goto L_08A67204;
    case 465u: goto L_08A67210;
    case 466u: goto L_08A67224;
    case 467u: goto L_08A67238;
    case 468u: goto L_08A6724C;
    case 469u: goto L_08A67260;
    case 470u: goto L_08A67280;
    case 471u: goto L_08A6728C;
    case 472u: goto L_08A67298;
    case 473u: goto L_08A672A4;
    case 474u: goto L_08A672B0;
    case 475u: goto L_08A672B8;
    case 476u: goto L_08A672C0;
    case 477u: goto L_08A672C8;
    case 478u: goto L_08A672D0;
    case 479u: goto L_08A672E0;
    case 480u: goto L_08A672EC;
    case 481u: goto L_08A672F8;
    case 482u: goto L_08A6730C;
    case 483u: goto L_08A67318;
    case 484u: goto L_08A67320;
    case 485u: goto L_08A67338;
    case 486u: goto L_08A67348;
    case 487u: goto L_08A67354;
    case 488u: goto L_08A67360;
    case 489u: goto L_08A67368;
    case 490u: goto L_08A67378;
    case 491u: goto L_08A67380;
    case 492u: goto L_08A67388;
    case 493u: goto L_08A67394;
    case 494u: goto L_08A673A0;
    case 495u: goto L_08A673B4;
    case 496u: goto L_08A673BC;
    case 497u: goto L_08A673C4;
    case 498u: goto L_08A673D0;
    case 499u: goto L_08A673DC;
    case 500u: goto L_08A673EC;
    case 501u: goto L_08A673F8;
    case 502u: goto L_08A67404;
    case 503u: goto L_08A67418;
    case 504u: goto L_08A67424;
    case 505u: goto L_08A6742C;
    case 506u: goto L_08A67444;
    case 507u: goto L_08A67454;
    case 508u: goto L_08A67460;
    case 509u: goto L_08A6746C;
    case 510u: goto L_08A67474;
    case 511u: goto L_08A67484;
    case 512u: goto L_08A6748C;
    case 513u: goto L_08A67494;
    case 514u: goto L_08A674A0;
    case 515u: goto L_08A674AC;
    case 516u: goto L_08A674BC;
    case 517u: goto L_08A674C8;
    case 518u: goto L_08A674D4;
    case 519u: goto L_08A674E8;
    case 520u: goto L_08A674F4;
    case 521u: goto L_08A674FC;
    case 522u: goto L_08A67514;
    case 523u: goto L_08A67524;
    case 524u: goto L_08A67530;
    case 525u: goto L_08A6753C;
    case 526u: goto L_08A67544;
    case 527u: goto L_08A67554;
    case 528u: goto L_08A67568;
    case 529u: goto L_08A67578;
    case 530u: goto L_08A67584;
    case 531u: goto L_08A67590;
    case 532u: goto L_08A6759C;
    case 533u: goto L_08A675A8;
    case 534u: goto L_08A675B4;
    case 535u: goto L_08A675BC;
    case 536u: goto L_08A675C8;
    case 537u: goto L_08A675D4;
    case 538u: goto L_08A675E0;
    case 539u: goto L_08A675E4;
    case 540u: goto L_08A675EC;
    case 541u: goto L_08A67618;
    case 542u: goto L_08A67624;
    case 543u: goto L_08A67638;
    case 544u: goto L_08A67650;
    case 545u: goto L_08A6765C;
    case 546u: goto L_08A67668;
    case 547u: goto L_08A6767C;
    case 548u: goto L_08A67688;
    case 549u: goto L_08A67690;
    case 550u: goto L_08A676A4;
    case 551u: goto L_08A676B4;
    case 552u: goto L_08A676C0;
    case 553u: goto L_08A676CC;
    case 554u: goto L_08A676DC;
    case 555u: goto L_08A676E4;
    case 556u: goto L_08A676F4;
    case 557u: goto L_08A67704;
    case 558u: goto L_08A6770C;
    case 559u: goto L_08A67718;
    case 560u: goto L_08A67728;
    case 561u: goto L_08A67734;
    case 562u: goto L_08A67740;
    case 563u: goto L_08A6774C;
    case 564u: goto L_08A67760;
    case 565u: goto L_08A6776C;
    case 566u: goto L_08A67774;
    case 567u: goto L_08A67788;
    case 568u: goto L_08A67798;
    case 569u: goto L_08A677A4;
    case 570u: goto L_08A677B0;
    case 571u: goto L_08A677B8;
    case 572u: goto L_08A677C8;
    case 573u: goto L_08A677D8;
    case 574u: goto L_08A677E8;
    case 575u: goto L_08A677F8;
    case 576u: goto L_08A67804;
    case 577u: goto L_08A67814;
    case 578u: goto L_08A67820;
    case 579u: goto L_08A6782C;
    case 580u: goto L_08A67840;
    case 581u: goto L_08A6784C;
    case 582u: goto L_08A67854;
    case 583u: goto L_08A67868;
    case 584u: goto L_08A67878;
    case 585u: goto L_08A67884;
    case 586u: goto L_08A67890;
    case 587u: goto L_08A678A0;
    case 588u: goto L_08A678B0;
    case 589u: goto L_08A678C0;
    case 590u: goto L_08A678E0;
    case 591u: goto L_08A67914;
    case 592u: goto L_08A67924;
    case 593u: goto L_08A67930;
    case 594u: goto L_08A6793C;
    case 595u: goto L_08A67948;
    case 596u: goto L_08A67954;
    case 597u: goto L_08A67960;
    case 598u: goto L_08A67964;
    case 599u: goto L_08A67970;
    case 600u: goto L_08A67984;
    case 601u: goto L_08A67994;
    case 602u: goto L_08A679A0;
    case 603u: goto L_08A679B0;
    case 604u: goto L_08A679BC;
    case 605u: goto L_08A679C8;
    case 606u: goto L_08A679D4;
    case 607u: goto L_08A679FC;
    case 608u: goto L_08A67A08;
    case 609u: goto L_08A67A18;
    case 610u: goto L_08A67A24;
    case 611u: goto L_08A67A50;
    case 612u: goto L_08A67A70;
    case 613u: goto L_08A67A80;
    case 614u: goto L_08A67A8C;
    case 615u: goto L_08A67A9C;
    case 616u: goto L_08A67AA4;
    case 617u: goto L_08A67AB8;
    case 618u: goto L_08A67AF0;
    case 619u: goto L_08A67AFC;
    case 620u: goto L_08A67B38;
    case 621u: goto L_08A67B40;
    case 622u: goto L_08A67B9C;
    case 623u: goto L_08A67BAC;
    case 624u: goto L_08A67BE8;
    case 625u: goto L_08A67BF8;
    case 626u: goto L_08A67C14;
    case 627u: goto L_08A67C24;
    case 628u: goto L_08A67C2C;
    case 629u: goto L_08A67C38;
    case 630u: goto L_08A67C44;
    case 631u: goto L_08A67C74;
    case 632u: goto L_08A67C80;
    case 633u: goto L_08A67CA8;
    case 634u: goto L_08A67CB0;
    case 635u: goto L_08A67D04;
    case 636u: goto L_08A67D2C;
    case 637u: goto L_08A67D64;
    case 638u: goto L_08A67D94;
    case 639u: goto L_08A67DA4;
    case 640u: goto L_08A67DC0;
    case 641u: goto L_08A67DF0;
    case 642u: goto L_08A67E00;
    case 643u: goto L_08A67E0C;
    case 644u: goto L_08A67E44;
    case 645u: goto L_08A67E50;
    case 646u: goto L_08A67E88;
    case 647u: goto L_08A67E90;
    case 648u: goto L_08A67EEC;
    case 649u: goto L_08A67EFC;
    case 650u: goto L_08A67F20;
    case 651u: goto L_08A67F34;
    case 652u: goto L_08A67F6C;
    case 653u: goto L_08A67F78;
    case 654u: goto L_08A67FA4;
    case 655u: goto L_08A67FAC;
    case 656u: goto L_08A67FD8;
    case 657u: goto L_08A67FE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A64000:
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
L_08A6401C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A6402Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 217u, 0x08A590A8u>(ctx, &aot_mem) && ctx.pc == 0x08A6402Cu) goto L_08A6402C;
    return;
L_08A6402C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6403C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A6404Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A6404Cu) goto L_08A6404C;
    return;
L_08A6404C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(22900));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(22884));
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(22884)));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A64078u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 663u, 0x08952DD8u>(ctx, &aot_mem) && ctx.pc == 0x08A64078u) goto L_08A64078;
    return;
L_08A64078:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A64088:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A64094:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A640F4;
      }
      goto L_08A640B8;
    }
L_08A640B8:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A640C8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A640C8u) goto L_08A640C8;
    return;
L_08A640C8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A640E0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A640E0u) goto L_08A640E0;
    return;
L_08A640E0:
    ctx.set_gpr(2, ctx.gpr[16] ^ ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A640F4;
      }
      goto L_08A640F0;
    }
L_08A640F0:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    goto L_08A640F4;
L_08A640F4:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
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
L_08A64114:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26164)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A64124:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A64168;
      }
      goto L_08A64144;
    }
L_08A64144:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26164)));
    ctx.set_gpr(31, 0x08A64158u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A64158u) goto L_08A64158;
    return;
L_08A64158:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A64168;
      }
      goto L_08A64160;
    }
L_08A64160:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6416C;
      }
      goto L_08A64168;
    }
L_08A64168:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08A6416C;
L_08A6416C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(31, 0x08A64188u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x08A64188u) goto L_08A64188;
    return;
L_08A64188:
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
L_08A641A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A641BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 215u, 0x08A490E0u>(ctx, &aot_mem) && ctx.pc == 0x08A641BCu) goto L_08A641BC;
    return;
L_08A641BC:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A641DC;
      }
      goto L_08A641D0;
    }
L_08A641D0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A641E0;
      }
      goto L_08A641DC;
    }
L_08A641DC:
    ctx.set_gpr(5, 0u + 0u);
    goto L_08A641E0;
L_08A641E0:
    ctx.set_gpr(31, 0x08A641E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890AF0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A641E8u) goto L_08A641E8;
    return;
L_08A641E8:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
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
L_08A64204:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[6] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A64228u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A64228u) goto L_08A64228;
    return;
L_08A64228:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A64260u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A64260u) goto L_08A64260;
    return;
L_08A64260:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23820)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x08A64284u);
    // nop
    goto L_08A6461C;
L_08A64284:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A642D4;
      }
      goto L_08A64290;
    }
L_08A64290:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23820)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(31, 0x08A642B4u);
    // nop
    goto L_08A6461C;
L_08A642B4:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    goto L_08A642D4;
L_08A642D4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A642E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A64300u);
    // nop
    goto L_08A646D8;
L_08A64300:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[1] / ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23820)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x08A64358u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 752u, 0x089FFE94u>(ctx, &aot_mem) && ctx.pc == 0x08A64358u) goto L_08A64358;
    return;
L_08A64358:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A64398;
      }
      goto L_08A64364;
    }
L_08A64364:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23820)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08A64398u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 752u, 0x089FFE94u>(ctx, &aot_mem) && ctx.pc == 0x08A64398u) goto L_08A64398;
    return;
L_08A64398:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A643C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    ctx.set_gpr(16, ctx.gpr[8] + 0u);
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(0u) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A644C0;
      }
      goto L_08A64418;
    }
L_08A64418:
    ctx.set_gpr(1, static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A64430;
      }
      goto L_08A64424;
    }
L_08A64424:
    ctx.set_gpr(1, 0u < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A644C0;
      }
      goto L_08A64430;
    }
L_08A64430:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[4] < ctx.gpr[9] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[4] - ctx.gpr[9]);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[8]);
    ctx.set_gpr(5, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(6, 4u << 16u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08A64458u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 187u, 0x0881CF34u>(ctx, &aot_mem) && ctx.pc == 0x08A64458u) goto L_08A64458;
    return;
L_08A64458:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32504)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 18560u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[0];
    ctx.set_gpr(31, 0x08A64480u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08A64480u) goto L_08A64480;
    return;
L_08A64480:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(22, ctx.gpr[3] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x08A64494u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08A64494u) goto L_08A64494;
    return;
L_08A64494:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08A644ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 438u, 0x0880E29Cu>(ctx, &aot_mem) && ctx.pc == 0x08A644ACu) goto L_08A644AC;
    return;
L_08A644AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08A644BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x08A644BCu) goto L_08A644BC;
    return;
L_08A644BC:
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    goto L_08A644C0;
L_08A644C0:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) && ctx.fpr[0] == ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A644F0;
      }
      goto L_08A644D8;
    }
L_08A644D8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(76)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A64554;
      }
      goto L_08A644F0;
    }
L_08A644F0:
    ctx.fpr[0] = ctx.fpr[20] / ctx.fpr[1];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08A6450Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08A6450Cu) goto L_08A6450C;
    return;
L_08A6450C:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(22, ctx.gpr[3] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(31, 0x08A64520u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08A64520u) goto L_08A64520;
    return;
L_08A64520:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08A64538u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 438u, 0x0880E29Cu>(ctx, &aot_mem) && ctx.pc == 0x08A64538u) goto L_08A64538;
    return;
L_08A64538:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08A64548u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x08A64548u) goto L_08A64548;
    return;
L_08A64548:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A64554;
L_08A64554:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A6456C;
      }
      goto L_08A64560;
    }
L_08A64560:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_08A6456C;
L_08A6456C:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[0])) || ctx.fpr[20] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A645A8;
      }
      goto L_08A64580;
    }
L_08A64580:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A645C8;
      }
      goto L_08A6459C;
    }
L_08A6459C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A645C8;
      }
      goto L_08A645A8;
    }
L_08A645A8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A645C8;
      }
      goto L_08A645BC;
    }
L_08A645BC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_08A645C8;
L_08A645C8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(68), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(72), ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6461C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08A6464Cu);
    // nop
    goto L_08A646B0;
L_08A6464C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A64698u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 749u, 0x089FFD2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A64698u) goto L_08A64698;
    return;
L_08A64698:
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
L_08A646B0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[3]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(3, ctx.hi);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[3]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(3, ctx.lo);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A646D8:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) && ctx.fpr[0] == ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A64700;
      }
      goto L_08A646F0;
    }
L_08A646F0:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A64724;
      }
      goto L_08A64700;
    }
L_08A64700:
    ctx.set_gpr(3, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A64724;
L_08A64724:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6472C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08A64770u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 102u, 0x0883CC10u>(ctx, &aot_mem) && ctx.pc == 0x08A64770u) goto L_08A64770;
    return;
L_08A64770:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A64780;
      }
      goto L_08A64778;
    }
L_08A64778:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    goto L_08A64780;
L_08A64780:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6479C;
      }
      goto L_08A64790;
    }
L_08A64790:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A64A3C;
      }
      goto L_08A6479C;
    }
L_08A6479C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A647B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08A647B4u) goto L_08A647B4;
    return;
L_08A647B4:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(18, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08A647D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 102u, 0x0883CC10u>(ctx, &aot_mem) && ctx.pc == 0x08A647D4u) goto L_08A647D4;
    return;
L_08A647D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A647E4;
      }
      goto L_08A647DC;
    }
L_08A647DC:
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(18, 0u + 0u);
    goto L_08A647E4;
L_08A647E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A6481Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08A6481Cu) goto L_08A6481C;
    return;
L_08A6481C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08A64834u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 221u, 0x0880D238u>(ctx, &aot_mem) && ctx.pc == 0x08A64834u) goto L_08A64834;
    return;
L_08A64834:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08A64844u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 2u, 0x08820004u>(ctx, &aot_mem) && ctx.pc == 0x08A64844u) goto L_08A64844;
    return;
L_08A64844:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A648EC;
      }
      goto L_08A64854;
    }
L_08A64854:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A648C4;
      }
      goto L_08A64860;
    }
L_08A64860:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A64870;
      }
      goto L_08A64868;
    }
L_08A64868:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A649CC;
      }
      goto L_08A64870;
    }
L_08A64870:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A64884u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A64884u) goto L_08A64884;
    return;
L_08A64884:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08A6489Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08A6489Cu) goto L_08A6489C;
    return;
L_08A6489C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08A648B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08A648B4u) goto L_08A648B4;
    return;
L_08A648B4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A64A18;
      }
      goto L_08A648C4;
    }
L_08A648C4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A648DC;
      }
      goto L_08A648CC;
    }
L_08A648CC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A64A18;
      }
      goto L_08A648DC;
    }
L_08A648DC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A64A18;
      }
      goto L_08A648EC;
    }
L_08A648EC:
    ctx.set_gpr(3, ctx.gpr[2] & 1u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A64904;
      }
      goto L_08A648F8;
    }
L_08A648F8:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A64904;
      }
      goto L_08A64900;
    }
L_08A64900:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-2));
    goto L_08A64904;
L_08A64904:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A64978;
      }
      goto L_08A6490C;
    }
L_08A6490C:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A64920u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A64920u) goto L_08A64920;
    return;
L_08A64920:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08A64938u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08A64938u) goto L_08A64938;
    return;
L_08A64938:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08A64950u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08A64950u) goto L_08A64950;
    return;
L_08A64950:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08A64968u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08A64968u) goto L_08A64968;
    return;
L_08A64968:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A64A18;
      }
      goto L_08A64978;
    }
L_08A64978:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A6498Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6498Cu) goto L_08A6498C;
    return;
L_08A6498C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08A649A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08A649A4u) goto L_08A649A4;
    return;
L_08A649A4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08A649BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08A649BCu) goto L_08A649BC;
    return;
L_08A649BC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A64A18;
      }
      goto L_08A649CC;
    }
L_08A649CC:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A649E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A649E0u) goto L_08A649E0;
    return;
L_08A649E0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08A649F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08A649F8u) goto L_08A649F8;
    return;
L_08A649F8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08A64A10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08A64A10u) goto L_08A64A10;
    return;
L_08A64A10:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    goto L_08A64A18;
L_08A64A18:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08A64A28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 784u, 0x08A6F2D8u>(ctx, &aot_mem) && ctx.pc == 0x08A64A28u) goto L_08A64A28;
    return;
L_08A64A28:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_08A64A3C;
L_08A64A3C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A64A60:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26280)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A64AD4;
      }
      goto L_08A64A80;
    }
L_08A64A80:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(31, 0x08A64A90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x08A64A90u) goto L_08A64A90;
    return;
L_08A64A90:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 15258u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] | 51712u);
    ctx.set_gpr(31, 0x08A64AA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A64AA4u) goto L_08A64AA4;
    return;
L_08A64AA4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08A64ABCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08A64ABCu) goto L_08A64ABC;
    return;
L_08A64ABC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08A64ACCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 164u, 0x0881CD1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A64ACCu) goto L_08A64ACC;
    return;
L_08A64ACC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), ctx.gpr[3]);
    goto L_08A64AD4;
L_08A64AD4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A64AE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(2, ctx.fpr_bits(0) & 0x7FFFFFFFu);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32416)));
    ctx.set_fpu_condition((ctx.fpr[2] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A64B78;
      }
      goto L_08A64B20;
    }
L_08A64B20:
    ctx.set_gpr(3, ctx.gpr[6] >> 18u);
    ctx.set_gpr(2, ctx.gpr[7] << 14u);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A64B44;
      }
      goto L_08A64B34;
    }
L_08A64B34:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A64B5C;
      }
      goto L_08A64B44;
    }
L_08A64B44:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_08A64B5C;
L_08A64B5C:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_gpr(31, 0x08A64B68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 183u, 0x0881CEECu>(ctx, &aot_mem) && ctx.pc == 0x08A64B68u) goto L_08A64B68;
    return;
L_08A64B68:
    ctx.set_gpr(3, ctx.gpr[3] << 18u);
    ctx.set_gpr(6, ctx.gpr[2] << 18u);
    ctx.set_gpr(2, ctx.gpr[2] >> 14u);
    ctx.set_gpr(7, ctx.gpr[3] | ctx.gpr[2]);
    goto L_08A64B78;
L_08A64B78:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[7]);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A64BA4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08A64BC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 217u, 0x08A590A8u>(ctx, &aot_mem) && ctx.pc == 0x08A64BC4u) goto L_08A64BC4;
    return;
L_08A64BC4:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A64BE8;
      }
      goto L_08A64BCC;
    }
L_08A64BCC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A64BE8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A64BE8u) goto L_08A64BE8;
    return;
L_08A64BE8:
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
L_08A64C00:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(22932)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A64C30;
      }
      goto L_08A64C24;
    }
L_08A64C24:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A64C8C;
      }
      goto L_08A64C30;
    }
L_08A64C30:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A64C44u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A64C44u) goto L_08A64C44;
    return;
L_08A64C44:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A64C5C;
      }
      goto L_08A64C50;
    }
L_08A64C50:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A64C94;
      }
      goto L_08A64C5C;
    }
L_08A64C5C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A64C74;
      }
      goto L_08A64C68;
    }
L_08A64C68:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A64C94;
      }
      goto L_08A64C74;
    }
L_08A64C74:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A64C84u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A64C84u) goto L_08A64C84;
    return;
L_08A64C84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A64C94;
      }
      goto L_08A64C8C;
    }
L_08A64C8C:
    ctx.set_gpr(31, 0x08A64C94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 285u, 0x08A495C0u>(ctx, &aot_mem) && ctx.pc == 0x08A64C94u) goto L_08A64C94;
    return;
L_08A64C94:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A64CA8:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A64CB4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(22932)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A64CE0;
      }
      goto L_08A64CD4;
    }
L_08A64CD4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A64D24;
      }
      goto L_08A64CE0;
    }
L_08A64CE0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A64D04;
      }
      goto L_08A64CEC;
    }
L_08A64CEC:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A64CFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08A64CFCu) goto L_08A64CFC;
    return;
L_08A64CFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A64D2C;
      }
      goto L_08A64D04;
    }
L_08A64D04:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A64D1Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A64D1Cu) goto L_08A64D1C;
    return;
L_08A64D1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A64D2C;
      }
      goto L_08A64D24;
    }
L_08A64D24:
    ctx.set_gpr(31, 0x08A64D2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 301u, 0x08A496BCu>(ctx, &aot_mem) && ctx.pc == 0x08A64D2Cu) goto L_08A64D2C;
    return;
L_08A64D2C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A64D3C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A64D44:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A64D50:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A64D88;
      }
      goto L_08A64D6C;
    }
L_08A64D6C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A64D7Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A64D7Cu) goto L_08A64D7C;
    return;
L_08A64D7C:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08A64D88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A64D88u) goto L_08A64D88;
    return;
L_08A64D88:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A64D9C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A64DA4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24744)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A64E14;
      }
      goto L_08A64DFC;
    }
L_08A64DFC:
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A64E40;
      }
      goto L_08A64E14;
    }
L_08A64E14:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A64E3C;
      }
      goto L_08A64E20;
    }
L_08A64E20:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A64E40;
      }
      goto L_08A64E3C;
    }
L_08A64E3C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_08A64E40;
L_08A64E40:
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(164));
    ctx.set_gpr(31, 0x08A64E54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08A64E54u) goto L_08A64E54;
    return;
L_08A64E54:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A64E6Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A64E6Cu) goto L_08A64E6C;
    return;
L_08A64E6C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24744)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A64EC4;
      }
      goto L_08A64EAC;
    }
L_08A64EAC:
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A64EF0;
      }
      goto L_08A64EC4;
    }
L_08A64EC4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A64EEC;
      }
      goto L_08A64ED0;
    }
L_08A64ED0:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A64EF0;
      }
      goto L_08A64EEC;
    }
L_08A64EEC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_08A64EF0;
L_08A64EF0:
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A64F08u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A64F08u) goto L_08A64F08;
    return;
L_08A64F08:
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
L_08A64F20:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(31, 0x08A64F34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A64F34u) goto L_08A64F34;
    return;
L_08A64F34:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A64F44:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08A64F58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A64F58u) goto L_08A64F58;
    return;
L_08A64F58:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A64F68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6502C;
      }
      goto L_08A64F8C;
    }
L_08A64F8C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24744)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A64FE4;
      }
      goto L_08A64FCC;
    }
L_08A64FCC:
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A65010;
      }
      goto L_08A64FE4;
    }
L_08A64FE4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6500C;
      }
      goto L_08A64FF0;
    }
L_08A64FF0:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A65010;
      }
      goto L_08A6500C;
    }
L_08A6500C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    goto L_08A65010;
L_08A65010:
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A65024u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A65024u) goto L_08A65024;
    return;
L_08A65024:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A65378;
      }
      goto L_08A6502C;
    }
L_08A6502C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A650C4;
      }
      goto L_08A65038;
    }
L_08A65038:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24744)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x08A65064u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A65064u) goto L_08A65064;
    return;
L_08A65064:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A65088;
      }
      goto L_08A65074;
    }
L_08A65074:
    ctx.set_gpr(31, 0x08A6507Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0141_entry, 141u, 146u, 0x08A38C0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6507Cu) goto L_08A6507C;
    return;
L_08A6507C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A650AC;
      }
      goto L_08A65088;
    }
L_08A65088:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A650A8;
      }
      goto L_08A65094;
    }
L_08A65094:
    ctx.set_gpr(31, 0x08A6509Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 114u, 0x08A28A8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6509Cu) goto L_08A6509C;
    return;
L_08A6509C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A650AC;
      }
      goto L_08A650A8;
    }
L_08A650A8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_08A650AC;
L_08A650AC:
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x08A650BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A650BCu) goto L_08A650BC;
    return;
L_08A650BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A65378;
      }
      goto L_08A650C4;
    }
L_08A650C4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A65378;
      }
      goto L_08A650D0;
    }
L_08A650D0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(31, 0x08A650F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 453u, 0x089DF30Cu>(ctx, &aot_mem) && ctx.pc == 0x08A650F0u) goto L_08A650F0;
    return;
L_08A650F0:
    ctx.set_gpr(3, ctx.gpr[2] << 4u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(16, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24744)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A6515C;
      }
      goto L_08A65144;
    }
L_08A65144:
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A65188;
      }
      goto L_08A6515C;
    }
L_08A6515C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A65184;
      }
      goto L_08A65168;
    }
L_08A65168:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A65188;
      }
      goto L_08A65184;
    }
L_08A65184:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    goto L_08A65188;
L_08A65188:
    ctx.set_gpr(6, ctx.gpr[3] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A65294;
      }
      goto L_08A65198;
    }
L_08A65198:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A651A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08A651A4u) goto L_08A651A4;
    return;
L_08A651A4:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A65284;
      }
      goto L_08A651B4;
    }
L_08A651B4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[3] >> 8u);
    ctx.set_gpr(3, 15104u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(3, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08A65284;
L_08A65284:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A651B4;
      }
      goto L_08A6528C;
    }
L_08A6528C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A65378;
      }
      goto L_08A65294;
    }
L_08A65294:
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A65370;
      }
      goto L_08A652A0;
    }
L_08A652A0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[3] >> 8u);
    ctx.set_gpr(3, 15104u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    ctx.set_gpr(3, ctx.gpr[5] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08A65370;
L_08A65370:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A652A0;
      }
      goto L_08A65378;
    }
L_08A65378:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A65390:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23816)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x08A653D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A653D8u) goto L_08A653D8;
    return;
L_08A653D8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[4] ^ 0u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A653F8;
      }
      goto L_08A653EC;
    }
L_08A653EC:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6540C;
      }
      goto L_08A653F8;
    }
L_08A653F8:
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    goto L_08A6540C;
L_08A6540C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A656BC;
      }
      goto L_08A65414;
    }
L_08A65414:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A65448;
      }
      goto L_08A65420;
    }
L_08A65420:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23820)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A65440u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A65440u) goto L_08A65440;
    return;
L_08A65440:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A656BC;
      }
      goto L_08A65448;
    }
L_08A65448:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A65474;
      }
      goto L_08A65454;
    }
L_08A65454:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(23820)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A6546Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6546Cu) goto L_08A6546C;
    return;
L_08A6546C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A656BC;
      }
      goto L_08A65474;
    }
L_08A65474:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A656BC;
      }
      goto L_08A65480;
    }
L_08A65480:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(31, 0x08A654A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 459u, 0x089DF38Cu>(ctx, &aot_mem) && ctx.pc == 0x08A654A0u) goto L_08A654A0;
    return;
L_08A654A0:
    ctx.set_gpr(3, ctx.gpr[2] << 4u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(16, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(23820)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[17] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A655CC;
      }
      goto L_08A654D0;
    }
L_08A654D0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A654DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08A654DCu) goto L_08A654DC;
    return;
L_08A654DC:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A655BC;
      }
      goto L_08A654EC;
    }
L_08A654EC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[3] >> 8u);
    ctx.set_gpr(3, 16640u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(3, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08A655BC;
L_08A655BC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A654EC;
      }
      goto L_08A655C4;
    }
L_08A655C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A656B0;
      }
      goto L_08A655CC;
    }
L_08A655CC:
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A656A8;
      }
      goto L_08A655D8;
    }
L_08A655D8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[3] >> 8u);
    ctx.set_gpr(3, 16640u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    ctx.set_gpr(3, ctx.gpr[5] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08A656A8;
L_08A656A8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A655D8;
      }
      goto L_08A656B0;
    }
L_08A656B0:
    ctx.set_gpr(3, 16703u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 32768u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4), ctx.gpr[3]);
    goto L_08A656BC;
L_08A656BC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A656D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(252)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A65730;
      }
      goto L_08A65710;
    }
L_08A65710:
    ctx.set_gpr(17, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08A6571Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0141_entry, 141u, 145u, 0x08A38C00u>(ctx, &aot_mem) && ctx.pc == 0x08A6571Cu) goto L_08A6571C;
    return;
L_08A6571C:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A65734;
      }
      goto L_08A65730;
    }
L_08A65730:
    ctx.set_gpr(17, 0u + 0u);
    goto L_08A65734;
L_08A65734:
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A65750;
      }
      goto L_08A65744;
    }
L_08A65744:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A659F4;
      }
      goto L_08A65750;
    }
L_08A65750:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A65768;
      }
      goto L_08A6575C;
    }
L_08A6575C:
    ctx.set_gpr(20, ctx.gpr[3] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A659F4;
      }
      goto L_08A65768;
    }
L_08A65768:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A659F4;
      }
      goto L_08A65774;
    }
L_08A65774:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(31, 0x08A6579Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 453u, 0x089DF30Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6579Cu) goto L_08A6579C;
    return;
L_08A6579C:
    ctx.set_gpr(3, ctx.gpr[16] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[3] << 4u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(12));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(19, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A659E0;
      }
      goto L_08A657C8;
    }
L_08A657C8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(4, ctx.gpr[18] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A658EC;
      }
      goto L_08A657E8;
    }
L_08A657E8:
    ctx.set_gpr(2, ctx.gpr[3] << 6u);
    ctx.set_gpr(6, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08A657FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08A657FCu) goto L_08A657FC;
    return;
L_08A657FC:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A658DC;
      }
      goto L_08A6580C;
    }
L_08A6580C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[3] >> 8u);
    ctx.set_gpr(3, 11008u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(3, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08A658DC;
L_08A658DC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A6580C;
      }
      goto L_08A658E4;
    }
L_08A658E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A659D8;
      }
      goto L_08A658EC;
    }
L_08A658EC:
    ctx.set_gpr(3, ctx.gpr[3] << 6u);
    ctx.set_gpr(5, ctx.gpr[17] + ctx.gpr[3]);
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A659D0;
      }
      goto L_08A65900;
    }
L_08A65900:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[3] >> 8u);
    ctx.set_gpr(3, 11008u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(3, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08A659D0;
L_08A659D0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A65900;
      }
      goto L_08A659D8;
    }
L_08A659D8:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(64));
    goto L_08A659E0;
L_08A659E0:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A657C8;
      }
      goto L_08A659EC;
    }
L_08A659EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A65A40;
      }
      goto L_08A659F4;
    }
L_08A659F4:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A65A2C;
      }
      goto L_08A65A00;
    }
L_08A65A00:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 6u);
    ctx.set_gpr(5, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A65A24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A65A24u) goto L_08A65A24;
    return;
L_08A65A24:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(64));
    goto L_08A65A2C;
L_08A65A2C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A65A00;
      }
      goto L_08A65A40;
    }
L_08A65A40:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A65A68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(248)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A65AB4;
      }
      goto L_08A65A94;
    }
L_08A65A94:
    ctx.set_gpr(17, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08A65AA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0141_entry, 141u, 145u, 0x08A38C00u>(ctx, &aot_mem) && ctx.pc == 0x08A65AA0u) goto L_08A65AA0;
    return;
L_08A65AA0:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A65AB8;
      }
      goto L_08A65AB4;
    }
L_08A65AB4:
    ctx.set_gpr(17, 0u + 0u);
    goto L_08A65AB8;
L_08A65AB8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A65B0C;
      }
      goto L_08A65AC4;
    }
L_08A65AC4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A65AF0;
      }
      goto L_08A65AD0;
    }
L_08A65AD0:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(2, ctx.gpr[2] << 6u);
    ctx.set_gpr(5, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A65AE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08A65AE8u) goto L_08A65AE8;
    return;
L_08A65AE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A65DC4;
      }
      goto L_08A65AF0;
    }
L_08A65AF0:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A65B04u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A65B04u) goto L_08A65B04;
    return;
L_08A65B04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A65DC4;
      }
      goto L_08A65B0C;
    }
L_08A65B0C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A65B54;
      }
      goto L_08A65B18;
    }
L_08A65B18:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A65B40;
      }
      goto L_08A65B24;
    }
L_08A65B24:
    ctx.set_gpr(2, ctx.gpr[2] << 6u);
    ctx.set_gpr(5, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A65B38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08A65B38u) goto L_08A65B38;
    return;
L_08A65B38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A65DC4;
      }
      goto L_08A65B40;
    }
L_08A65B40:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A65B4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A65B4Cu) goto L_08A65B4C;
    return;
L_08A65B4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A65DC4;
      }
      goto L_08A65B54;
    }
L_08A65B54:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A65DC4;
      }
      goto L_08A65B60;
    }
L_08A65B60:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(156));
    ctx.set_gpr(31, 0x08A65B80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 453u, 0x089DF30Cu>(ctx, &aot_mem) && ctx.pc == 0x08A65B80u) goto L_08A65B80;
    return;
L_08A65B80:
    ctx.set_gpr(3, ctx.gpr[2] << 4u);
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A65BC0;
      }
      goto L_08A65BA0;
    }
L_08A65BA0:
    ctx.set_gpr(2, ctx.gpr[2] << 6u);
    ctx.set_gpr(5, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A65BB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08A65BB8u) goto L_08A65BB8;
    return;
L_08A65BB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A65BD0;
      }
      goto L_08A65BC0;
    }
L_08A65BC0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A65BD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A65BD0u) goto L_08A65BD0;
    return;
L_08A65BD0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A65CDC;
      }
      goto L_08A65BDC;
    }
L_08A65BDC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(31, 0x08A65BECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08A65BECu) goto L_08A65BEC;
    return;
L_08A65BEC:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A65CCC;
      }
      goto L_08A65BFC;
    }
L_08A65BFC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[3] >> 8u);
    ctx.set_gpr(3, 15104u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(3, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08A65CCC;
L_08A65CCC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A65BFC;
      }
      goto L_08A65CD4;
    }
L_08A65CD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A65DC4;
      }
      goto L_08A65CDC;
    }
L_08A65CDC:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A65DBC;
      }
      goto L_08A65CEC;
    }
L_08A65CEC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[3] >> 8u);
    ctx.set_gpr(3, 15104u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(3, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08A65DBC;
L_08A65DBC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A65CEC;
      }
      goto L_08A65DC4;
    }
L_08A65DC4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A65DE0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A65E90;
      }
      goto L_08A65E04;
    }
L_08A65E04:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24744)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x08A65E30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A65E30u) goto L_08A65E30;
    return;
L_08A65E30:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A65E54;
      }
      goto L_08A65E40;
    }
L_08A65E40:
    ctx.set_gpr(31, 0x08A65E48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0141_entry, 141u, 146u, 0x08A38C0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A65E48u) goto L_08A65E48;
    return;
L_08A65E48:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A65E78;
      }
      goto L_08A65E54;
    }
L_08A65E54:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A65E74;
      }
      goto L_08A65E60;
    }
L_08A65E60:
    ctx.set_gpr(31, 0x08A65E68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 114u, 0x08A28A8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A65E68u) goto L_08A65E68;
    return;
L_08A65E68:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A65E78;
      }
      goto L_08A65E74;
    }
L_08A65E74:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_08A65E78;
L_08A65E78:
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x08A65E88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A65E88u) goto L_08A65E88;
    return;
L_08A65E88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A66144;
      }
      goto L_08A65E90;
    }
L_08A65E90:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A66144;
      }
      goto L_08A65E9C;
    }
L_08A65E9C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.set_gpr(31, 0x08A65EBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0118_entry, 118u, 453u, 0x089DF30Cu>(ctx, &aot_mem) && ctx.pc == 0x08A65EBCu) goto L_08A65EBC;
    return;
L_08A65EBC:
    ctx.set_gpr(3, ctx.gpr[2] << 4u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(16, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24744)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A65F28;
      }
      goto L_08A65F10;
    }
L_08A65F10:
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A65F54;
      }
      goto L_08A65F28;
    }
L_08A65F28:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A65F50;
      }
      goto L_08A65F34;
    }
L_08A65F34:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A65F54;
      }
      goto L_08A65F50;
    }
L_08A65F50:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    goto L_08A65F54;
L_08A65F54:
    ctx.set_gpr(6, ctx.gpr[3] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A66060;
      }
      goto L_08A65F64;
    }
L_08A65F64:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A65F70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08A65F70u) goto L_08A65F70;
    return;
L_08A65F70:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A66050;
      }
      goto L_08A65F80;
    }
L_08A65F80:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[3] >> 8u);
    ctx.set_gpr(3, 15104u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(3, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08A66050;
L_08A66050:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A65F80;
      }
      goto L_08A66058;
    }
L_08A66058:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A66144;
      }
      goto L_08A66060;
    }
L_08A66060:
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6613C;
      }
      goto L_08A6606C;
    }
L_08A6606C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[3] >> 8u);
    ctx.set_gpr(3, 15104u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(5, ctx.gpr[5] >> 8u);
    ctx.set_gpr(3, ctx.gpr[5] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08A6613C;
L_08A6613C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A6606C;
      }
      goto L_08A66144;
    }
L_08A66144:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6615C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[18] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A66204;
      }
      goto L_08A661C8;
    }
L_08A661C8:
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::sqrt(ctx.fpr[0]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    goto L_08A66204;
L_08A66204:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A661C8;
      }
      goto L_08A66210;
    }
L_08A66210:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A66220u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A66220u) goto L_08A66220;
    return;
L_08A66220:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A6622Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 137u, 0x08A01D64u>(ctx, &aot_mem) && ctx.pc == 0x08A6622Cu) goto L_08A6622C;
    return;
L_08A6622C:
    ctx.fpr[1] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A66264;
      }
      goto L_08A66240;
    }
L_08A66240:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_fpr_bits(0, ctx.fpr_bits(0) ^ 0x80000000u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_fpr_bits(0, ctx.fpr_bits(0) ^ 0x80000000u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_fpr_bits(0, ctx.fpr_bits(0) ^ 0x80000000u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A66264;
L_08A66264:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[3] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[2] = ctx.fpr[3] / ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[1] = ctx.fpr[3] / ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[3] / ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x08A662A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 755u, 0x089FFF04u>(ctx, &aot_mem) && ctx.pc == 0x08A662A0u) goto L_08A662A0;
    return;
L_08A662A0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[18] << 4u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08A662BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 161u, 0x08A0226Cu>(ctx, &aot_mem) && ctx.pc == 0x08A662BCu) goto L_08A662BC;
    return;
L_08A662BC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A662DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[16] << 4u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A66324u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 175u, 0x08A024A4u>(ctx, &aot_mem) && ctx.pc == 0x08A66324u) goto L_08A66324;
    return;
L_08A66324:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[16] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.fpr[1] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) && ctx.fpr[1] == ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A66388;
      }
      goto L_08A66360;
    }
L_08A66360:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) && ctx.fpr[1] == ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A66388;
      }
      goto L_08A66374;
    }
L_08A66374:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) && ctx.fpr[1] == ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A663CC;
      }
      goto L_08A66388;
    }
L_08A66388:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A6639Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 270u, 0x08A031C4u>(ctx, &aot_mem) && ctx.pc == 0x08A6639Cu) goto L_08A6639C;
    return;
L_08A6639C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[3] = ctx.fpr[22] - ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[2] = ctx.fpr[21] - ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[1] = ctx.fpr[20] - ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.fpr[22] = ctx.fpr[3] + ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.fpr[21] = ctx.fpr[2] + ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.fpr[20] = ctx.fpr[1] + ctx.fpr[0];
    goto L_08A663CC;
L_08A663CC:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A663F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 755u, 0x089FFF04u>(ctx, &aot_mem) && ctx.pc == 0x08A663F0u) goto L_08A663F0;
    return;
L_08A663F0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A66418:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27776)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) && ctx.fpr[1] == ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A66438;
      }
      goto L_08A66434;
    }
L_08A66434:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A66438;
L_08A66438:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A66460;
      }
      goto L_08A66440;
    }
L_08A66440:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27772)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) && ctx.fpr[1] == ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A66460;
      }
      goto L_08A6645C;
    }
L_08A6645C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A66460;
L_08A66460:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A66488;
      }
      goto L_08A66468;
    }
L_08A66468:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27768)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) && ctx.fpr[1] == ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A66488;
      }
      goto L_08A66484;
    }
L_08A66484:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A66488;
L_08A66488:
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A66494:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A664C4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A664C4u) goto L_08A664C4;
    return;
L_08A664C4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A66554;
      }
      goto L_08A664D4;
    }
L_08A664D4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08A664E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A664E0u) goto L_08A664E0;
    return;
L_08A664E0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(240)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A664FCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A664FCu) goto L_08A664FC;
    return;
L_08A664FC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A66510u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08A66510u) goto L_08A66510;
    return;
L_08A66510:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(236)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A6652Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A6652Cu) goto L_08A6652C;
    return;
L_08A6652C:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27776)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27772)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27768)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A66554;
L_08A66554:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A664D4;
      }
      goto L_08A66560;
    }
L_08A66560:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A66580:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21056)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21052)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08A6661C;
      }
      goto L_08A665CC;
    }
L_08A665CC:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08A6661C;
      }
      goto L_08A665D4;
    }
L_08A665D4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21048)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21044)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A6661C;
      }
      goto L_08A665EC;
    }
L_08A665EC:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A6661C;
      }
      goto L_08A665F4;
    }
L_08A665F4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21032)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21028)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21040)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A666A4;
      }
      goto L_08A6661C;
    }
L_08A6661C:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21056), ctx.gpr[21]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21052), ctx.gpr[20]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21048), ctx.gpr[19]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21044), ctx.gpr[18]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A66654u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 417u, 0x0881DCD0u>(ctx, &aot_mem) && ctx.pc == 0x08A66654u) goto L_08A66654;
    return;
L_08A66654:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A66670u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 110u, 0x0881C82Cu>(ctx, &aot_mem) && ctx.pc == 0x08A66670u) goto L_08A66670;
    return;
L_08A66670:
    ctx.set_gpr(5, ctx.gpr[21] < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[21] - ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[20] - ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] - ctx.gpr[5]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21032), ctx.gpr[4]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21028), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21040), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08A666A4;
L_08A666A4:
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
L_08A666CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(212)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A666F8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A666F8u) goto L_08A666F8;
    return;
L_08A666F8:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, ctx.gpr[3] & 2u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A667F0;
      }
      goto L_08A66708;
    }
L_08A66708:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A6671Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A6671Cu) goto L_08A6671C;
    return;
L_08A6671C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A667E0;
      }
      goto L_08A6672C;
    }
L_08A6672C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(172)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A66744u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A66744u) goto L_08A66744;
    return;
L_08A66744:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(172)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A66760u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A66760u) goto L_08A66760;
    return;
L_08A66760:
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[0] + ctx.fpr[2];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[2];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32224)));
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A667DC;
      }
      goto L_08A667B0;
    }
L_08A667B0:
    ctx.set_fpr_bits(0, ctx.fpr_bits(3) ^ 0x80000000u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_fpr_bits(0, ctx.fpr_bits(0) ^ 0x80000000u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_fpr_bits(0, ctx.fpr_bits(0) ^ 0x80000000u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_fpr_bits(0, ctx.fpr_bits(0) ^ 0x80000000u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A667DC;
L_08A667DC:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A667E0;
L_08A667E0:
    ctx.set_gpr(3, ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6672C;
      }
      goto L_08A667F0;
    }
L_08A667F0:
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
L_08A66810:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, ctx.gpr[2] & 2u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6682C;
      }
      goto L_08A66820;
    }
L_08A66820:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6683C;
      }
      goto L_08A6682C;
    }
L_08A6682C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[5] << 4u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    goto L_08A6683C;
L_08A6683C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A66844:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26476)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A669C8;
      }
      goto L_08A66878;
    }
L_08A66878:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6694C;
      }
      goto L_08A66884;
    }
L_08A66884:
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A66934;
      }
      goto L_08A66890;
    }
L_08A66890:
    ctx.set_gpr(3, ctx.gpr[20] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 15258u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] | 51712u);
    ctx.set_gpr(31, 0x08A668ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A668ACu) goto L_08A668AC;
    return;
L_08A668AC:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08A668C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08A668C4u) goto L_08A668C4;
    return;
L_08A668C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08A668D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 164u, 0x0881CD1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A668D4u) goto L_08A668D4;
    return;
L_08A668D4:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(18, ctx.gpr[3] + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A66908;
      }
      goto L_08A668F4;
    }
L_08A668F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6691C;
      }
      goto L_08A66908;
    }
L_08A66908:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08A6691Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6691Cu) goto L_08A6691C;
    return;
L_08A6691C:
    ctx.set_gpr(3, ctx.gpr[16] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08A66934;
L_08A66934:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A66890;
      }
      goto L_08A66948;
    }
L_08A66948:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    goto L_08A6694C;
L_08A6694C:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08A6696Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 108u, 0x0883CC74u>(ctx, &aot_mem) && ctx.pc == 0x08A6696Cu) goto L_08A6696C;
    return;
L_08A6696C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A669C8;
      }
      goto L_08A66974;
    }
L_08A66974:
    ctx.set_gpr(2, 15258u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] | 51712u);
    ctx.set_gpr(31, 0x08A66984u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A66984u) goto L_08A66984;
    return;
L_08A66984:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A6699Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6699Cu) goto L_08A6699C;
    return;
L_08A6699C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08A669ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 164u, 0x0881CD1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A669ACu) goto L_08A669AC;
    return;
L_08A669AC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A669C8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A669C8u) goto L_08A669C8;
    return;
L_08A669C8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(74), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(75), static_cast<std::uint8_t>(ctx.gpr[4]));
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
L_08A66A04:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), ctx.gpr[7]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A66A14:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A66A78;
      }
      goto L_08A66A48;
    }
L_08A66A48:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[19] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A66A78;
L_08A66A78:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08A66A84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A66A84u) goto L_08A66A84;
    return;
L_08A66A84:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, ctx.gpr[2] & 8u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A66B98;
      }
      goto L_08A66A94;
    }
L_08A66A94:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[19] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A66AF4;
      }
      goto L_08A66AB8;
    }
L_08A66AB8:
    ctx.set_gpr(2, ctx.gpr[3] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::sqrt(ctx.fpr[0]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    goto L_08A66AF4;
L_08A66AF4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A66AB8;
      }
      goto L_08A66B00;
    }
L_08A66B00:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A66B10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A66B10u) goto L_08A66B10;
    return;
L_08A66B10:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A66B1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 137u, 0x08A01D64u>(ctx, &aot_mem) && ctx.pc == 0x08A66B1Cu) goto L_08A66B1C;
    return;
L_08A66B1C:
    ctx.fpr[1] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A66B54;
      }
      goto L_08A66B30;
    }
L_08A66B30:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_fpr_bits(0, ctx.fpr_bits(0) ^ 0x80000000u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_fpr_bits(0, ctx.fpr_bits(0) ^ 0x80000000u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_fpr_bits(0, ctx.fpr_bits(0) ^ 0x80000000u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A66B54;
L_08A66B54:
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[3] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[2] = ctx.fpr[3] / ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[1] = ctx.fpr[3] / ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[3] / ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08A66B90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 755u, 0x089FFF04u>(ctx, &aot_mem) && ctx.pc == 0x08A66B90u) goto L_08A66B90;
    return;
L_08A66B90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A66BA8;
      }
      goto L_08A66B98;
    }
L_08A66B98:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A66BA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A66BA8u) goto L_08A66BA8;
    return;
L_08A66BA8:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A66BDC;
      }
      goto L_08A66BB8;
    }
L_08A66BB8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[19] << 4u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08A66BD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 161u, 0x08A0226Cu>(ctx, &aot_mem) && ctx.pc == 0x08A66BD4u) goto L_08A66BD4;
    return;
L_08A66BD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A66C7C;
      }
      goto L_08A66BDC;
    }
L_08A66BDC:
    ctx.set_gpr(3, ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A66C7C;
      }
      goto L_08A66BE8;
    }
L_08A66BE8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(19, ctx.gpr[19] << 4u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[19]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08A66C04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 161u, 0x08A0226Cu>(ctx, &aot_mem) && ctx.pc == 0x08A66C04u) goto L_08A66C04;
    return;
L_08A66C04:
    ctx.set_gpr(18, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(17, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[19]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A66C2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 177u, 0x08A02618u>(ctx, &aot_mem) && ctx.pc == 0x08A66C2Cu) goto L_08A66C2C;
    return;
L_08A66C2C:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32228)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[19]);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(12), 0u);
    goto L_08A66C7C;
L_08A66C7C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A66C9C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, ctx.gpr[17] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x08A66CECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 813u, 0x0890FC68u>(ctx, &aot_mem) && ctx.pc == 0x08A66CECu) goto L_08A66CEC;
    return;
L_08A66CEC:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A66DDC;
      }
      goto L_08A66CFC;
    }
L_08A66CFC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[17] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08A66D44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 813u, 0x0890FC68u>(ctx, &aot_mem) && ctx.pc == 0x08A66D44u) goto L_08A66D44;
    return;
L_08A66D44:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A66DDC;
      }
      goto L_08A66D50;
    }
L_08A66D50:
    ctx.set_gpr(16, ctx.gpr[17] << 1u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08A66DC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 813u, 0x0890FC68u>(ctx, &aot_mem) && ctx.pc == 0x08A66DC0u) goto L_08A66DC0;
    return;
L_08A66DC0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08A66DDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 813u, 0x0890FC68u>(ctx, &aot_mem) && ctx.pc == 0x08A66DDCu) goto L_08A66DDC;
    return;
L_08A66DDC:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, ctx.gpr[3] & 8u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A66ECC;
      }
      goto L_08A66DEC;
    }
L_08A66DEC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[17] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08A66E34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 813u, 0x0890FC68u>(ctx, &aot_mem) && ctx.pc == 0x08A66E34u) goto L_08A66E34;
    return;
L_08A66E34:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A66ECC;
      }
      goto L_08A66E40;
    }
L_08A66E40:
    ctx.set_gpr(16, ctx.gpr[17] << 1u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08A66EB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 813u, 0x0890FC68u>(ctx, &aot_mem) && ctx.pc == 0x08A66EB0u) goto L_08A66EB0;
    return;
L_08A66EB0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08A66ECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 813u, 0x0890FC68u>(ctx, &aot_mem) && ctx.pc == 0x08A66ECCu) goto L_08A66ECC;
    return;
L_08A66ECC:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A66EE8;
      }
      goto L_08A66EDC;
    }
L_08A66EDC:
    ctx.set_gpr(3, ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A66FC8;
      }
      goto L_08A66EE8;
    }
L_08A66EE8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[17] << 4u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A66F30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 813u, 0x0890FC68u>(ctx, &aot_mem) && ctx.pc == 0x08A66F30u) goto L_08A66F30;
    return;
L_08A66F30:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A66FC8;
      }
      goto L_08A66F3C;
    }
L_08A66F3C:
    ctx.set_gpr(16, ctx.gpr[17] << 1u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08A66FACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 813u, 0x0890FC68u>(ctx, &aot_mem) && ctx.pc == 0x08A66FACu) goto L_08A66FAC;
    return;
L_08A66FAC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08A66FC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 813u, 0x0890FC68u>(ctx, &aot_mem) && ctx.pc == 0x08A66FC8u) goto L_08A66FC8;
    return;
L_08A66FC8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A66FE4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A67018u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A67018u) goto L_08A67018;
    return;
L_08A67018:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A67050;
      }
      goto L_08A67028;
    }
L_08A67028:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[18] << 4u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A67044u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 175u, 0x08A024A4u>(ctx, &aot_mem) && ctx.pc == 0x08A67044u) goto L_08A67044;
    return;
L_08A67044:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A67098;
      }
      goto L_08A67050;
    }
L_08A67050:
    ctx.set_gpr(3, ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A67098;
      }
      goto L_08A6705C;
    }
L_08A6705C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[18] << 4u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32268)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A67094u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 28u, 0x08A005D4u>(ctx, &aot_mem) && ctx.pc == 0x08A67094u) goto L_08A67094;
    return;
L_08A67094:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    goto L_08A67098;
L_08A67098:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A67110;
      }
      goto L_08A670A0;
    }
L_08A670A0:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A670CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 270u, 0x08A031C4u>(ctx, &aot_mem) && ctx.pc == 0x08A670CCu) goto L_08A670CC;
    return;
L_08A670CC:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[2] = ctx.fpr[1] - ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A67110;
L_08A67110:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A67168;
      }
      goto L_08A67120;
    }
L_08A67120:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[18] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[3];
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[2];
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A67168;
L_08A67168:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, ctx.gpr[3] & 8u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A671B8;
      }
      goto L_08A67178;
    }
L_08A67178:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[18] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08A671B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 755u, 0x089FFF04u>(ctx, &aot_mem) && ctx.pc == 0x08A671B8u) goto L_08A671B8;
    return;
L_08A671B8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A671D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26520)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6724C;
      }
      goto L_08A671F4;
    }
L_08A671F4:
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-9816));
    ctx.set_gpr(31, 0x08A67204u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x08A67204u) goto L_08A67204;
    return;
L_08A67204:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6724C;
      }
      goto L_08A67210;
    }
L_08A67210:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A67224u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 138u, 0x0890C798u>(ctx, &aot_mem) && ctx.pc == 0x08A67224u) goto L_08A67224;
    return;
L_08A67224:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A67238u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 138u, 0x0890C798u>(ctx, &aot_mem) && ctx.pc == 0x08A67238u) goto L_08A67238;
    return;
L_08A67238:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A6724Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 138u, 0x0890C798u>(ctx, &aot_mem) && ctx.pc == 0x08A6724Cu) goto L_08A6724C;
    return;
L_08A6724C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A67260:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A67554;
      }
      goto L_08A67280;
    }
L_08A67280:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A6748C;
      }
      goto L_08A6728C;
    }
L_08A6728C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A673BC;
      }
      goto L_08A67298;
    }
L_08A67298:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A67380;
      }
      goto L_08A672A4;
    }
L_08A672A4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A672B8;
      }
      goto L_08A672B0;
    }
L_08A672B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A67554;
      }
      goto L_08A672B8;
    }
L_08A672B8:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A672D0;
      }
      goto L_08A672C0;
    }
L_08A672C0:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A672D0;
      }
      goto L_08A672C8;
    }
L_08A672C8:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A67554;
      }
      goto L_08A672D0;
    }
L_08A672D0:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A67368;
      }
      goto L_08A672E0;
    }
L_08A672E0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A672ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A672ECu) goto L_08A672EC;
    return;
L_08A672EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A672F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 201u, 0x089F50D4u>(ctx, &aot_mem) && ctx.pc == 0x08A672F8u) goto L_08A672F8;
    return;
L_08A672F8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A6730Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A6730Cu) goto L_08A6730C;
    return;
L_08A6730C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A67320;
      }
      goto L_08A67318;
    }
L_08A67318:
    ctx.set_gpr(31, 0x08A67320u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A67320u) goto L_08A67320;
    return;
L_08A67320:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[3] << 1u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A67554;
      }
      goto L_08A67338;
    }
L_08A67338:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A67354;
      }
      goto L_08A67348;
    }
L_08A67348:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A67554;
      }
      goto L_08A67354;
    }
L_08A67354:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08A67360u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A67360u) goto L_08A67360;
    return;
L_08A67360:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A67554;
      }
      goto L_08A67368;
    }
L_08A67368:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A67378u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A67378u) goto L_08A67378;
    return;
L_08A67378:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A67554;
      }
      goto L_08A67380;
    }
L_08A67380:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A673A0;
      }
      goto L_08A67388;
    }
L_08A67388:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A673A0;
      }
      goto L_08A67394;
    }
L_08A67394:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A67554;
      }
      goto L_08A673A0;
    }
L_08A673A0:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(74), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A673B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A673B4u) goto L_08A673B4;
    return;
L_08A673B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A67554;
      }
      goto L_08A673BC;
    }
L_08A673BC:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A673DC;
      }
      goto L_08A673C4;
    }
L_08A673C4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A673DC;
      }
      goto L_08A673D0;
    }
L_08A673D0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A67554;
      }
      goto L_08A673DC;
    }
L_08A673DC:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(74), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A67474;
      }
      goto L_08A673EC;
    }
L_08A673EC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A673F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A673F8u) goto L_08A673F8;
    return;
L_08A673F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A67404u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 201u, 0x089F50D4u>(ctx, &aot_mem) && ctx.pc == 0x08A67404u) goto L_08A67404;
    return;
L_08A67404:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A67418u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A67418u) goto L_08A67418;
    return;
L_08A67418:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6742C;
      }
      goto L_08A67424;
    }
L_08A67424:
    ctx.set_gpr(31, 0x08A6742Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A6742Cu) goto L_08A6742C;
    return;
L_08A6742C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[3] << 1u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A67554;
      }
      goto L_08A67444;
    }
L_08A67444:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A67460;
      }
      goto L_08A67454;
    }
L_08A67454:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A67554;
      }
      goto L_08A67460;
    }
L_08A67460:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08A6746Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6746Cu) goto L_08A6746C;
    return;
L_08A6746C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A67554;
      }
      goto L_08A67474;
    }
L_08A67474:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A67484u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A67484u) goto L_08A67484;
    return;
L_08A67484:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A67554;
      }
      goto L_08A6748C;
    }
L_08A6748C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A674AC;
      }
      goto L_08A67494;
    }
L_08A67494:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A674AC;
      }
      goto L_08A674A0;
    }
L_08A674A0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A67554;
      }
      goto L_08A674AC;
    }
L_08A674AC:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(75), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A67544;
      }
      goto L_08A674BC;
    }
L_08A674BC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A674C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A674C8u) goto L_08A674C8;
    return;
L_08A674C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A674D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 201u, 0x089F50D4u>(ctx, &aot_mem) && ctx.pc == 0x08A674D4u) goto L_08A674D4;
    return;
L_08A674D4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A674E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A674E8u) goto L_08A674E8;
    return;
L_08A674E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A674FC;
      }
      goto L_08A674F4;
    }
L_08A674F4:
    ctx.set_gpr(31, 0x08A674FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A674FCu) goto L_08A674FC;
    return;
L_08A674FC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[3] << 1u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A67554;
      }
      goto L_08A67514;
    }
L_08A67514:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A67530;
      }
      goto L_08A67524;
    }
L_08A67524:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A67554;
      }
      goto L_08A67530;
    }
L_08A67530:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08A6753Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6753Cu) goto L_08A6753C;
    return;
L_08A6753C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A67554;
      }
      goto L_08A67544;
    }
L_08A67544:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A67554u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A67554u) goto L_08A67554;
    return;
L_08A67554:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A67568:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A67584;
      }
      goto L_08A67578;
    }
L_08A67578:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A675E4;
      }
      goto L_08A67584;
    }
L_08A67584:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A675D4;
      }
      goto L_08A67590;
    }
L_08A67590:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A675C8;
      }
      goto L_08A6759C;
    }
L_08A6759C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A675C8;
      }
      goto L_08A675A8;
    }
L_08A675A8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A675BC;
      }
      goto L_08A675B4;
    }
L_08A675B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A675E0;
      }
      goto L_08A675BC;
    }
L_08A675BC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(73)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A675E4;
      }
      goto L_08A675C8;
    }
L_08A675C8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(74)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A675E4;
      }
      goto L_08A675D4;
    }
L_08A675D4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(75)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A675E4;
      }
      goto L_08A675E0;
    }
L_08A675E0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08A675E4;
L_08A675E4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A675EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] & 255u);
    ctx.set_gpr(17, ctx.gpr[18] & 2u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A67624;
      }
      goto L_08A67618;
    }
L_08A67618:
    ctx.set_gpr(3, ctx.gpr[18] & 4u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A678C0;
      }
      goto L_08A67624;
    }
L_08A67624:
    ctx.set_gpr(16, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(2, ctx.gpr[18] & 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A676E4;
      }
      goto L_08A67638;
    }
L_08A67638:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(73), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, ctx.gpr[16] & 255u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A676F4;
      }
      goto L_08A67650;
    }
L_08A67650:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A6765Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6765Cu) goto L_08A6765C;
    return;
L_08A6765C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A67668u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 201u, 0x089F50D4u>(ctx, &aot_mem) && ctx.pc == 0x08A67668u) goto L_08A67668;
    return;
L_08A67668:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A6767Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A6767Cu) goto L_08A6767C;
    return;
L_08A6767C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A67690;
      }
      goto L_08A67688;
    }
L_08A67688:
    ctx.set_gpr(31, 0x08A67690u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A67690u) goto L_08A67690;
    return;
L_08A67690:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A676CC;
      }
      goto L_08A676A4;
    }
L_08A676A4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A676C0;
      }
      goto L_08A676B4;
    }
L_08A676B4:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A676CC;
      }
      goto L_08A676C0;
    }
L_08A676C0:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08A676CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A676CCu) goto L_08A676CC;
    return;
L_08A676CC:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A676DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A676DCu) goto L_08A676DC;
    return;
L_08A676DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A676F4;
      }
      goto L_08A676E4;
    }
L_08A676E4:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A676F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A676F4u) goto L_08A676F4;
    return;
L_08A676F4:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A67704u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A67704u) goto L_08A67704;
    return;
L_08A67704:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A67718;
      }
      goto L_08A6770C;
    }
L_08A6770C:
    ctx.set_gpr(2, ctx.gpr[18] & 4u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A677D8;
      }
      goto L_08A67718;
    }
L_08A67718:
    ctx.set_gpr(3, ctx.gpr[16] & 255u);
    ctx.set_gpr(2, ctx.gpr[3] & 2u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A677B0;
      }
      goto L_08A67728;
    }
L_08A67728:
    ctx.set_gpr(2, ctx.gpr[3] & 4u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A677B0;
      }
      goto L_08A67734;
    }
L_08A67734:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A67740u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A67740u) goto L_08A67740;
    return;
L_08A67740:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A6774Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 324u, 0x089F5BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A6774Cu) goto L_08A6774C;
    return;
L_08A6774C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A67760u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A67760u) goto L_08A67760;
    return;
L_08A67760:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A67774;
      }
      goto L_08A6776C;
    }
L_08A6776C:
    ctx.set_gpr(31, 0x08A67774u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A67774u) goto L_08A67774;
    return;
L_08A67774:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A677B0;
      }
      goto L_08A67788;
    }
L_08A67788:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A677A4;
      }
      goto L_08A67798;
    }
L_08A67798:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A677B0;
      }
      goto L_08A677A4;
    }
L_08A677A4:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A677B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A677B0u) goto L_08A677B0;
    return;
L_08A677B0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A677C8;
      }
      goto L_08A677B8;
    }
L_08A677B8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(74), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A677E8;
      }
      goto L_08A677C8;
    }
L_08A677C8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(74), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A677E8;
      }
      goto L_08A677D8;
    }
L_08A677D8:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A677E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A677E8u) goto L_08A677E8;
    return;
L_08A677E8:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A677F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A677F8u) goto L_08A677F8;
    return;
L_08A677F8:
    ctx.set_gpr(2, ctx.gpr[18] & 8u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A678A0;
      }
      goto L_08A67804;
    }
L_08A67804:
    ctx.set_gpr(2, ctx.gpr[16] & 255u);
    ctx.set_gpr(2, ctx.gpr[2] & 8u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A67890;
      }
      goto L_08A67814;
    }
L_08A67814:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A67820u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x08A67820u) goto L_08A67820;
    return;
L_08A67820:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A6782Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 201u, 0x089F50D4u>(ctx, &aot_mem) && ctx.pc == 0x08A6782Cu) goto L_08A6782C;
    return;
L_08A6782C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A67840u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A67840u) goto L_08A67840;
    return;
L_08A67840:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A67854;
      }
      goto L_08A6784C;
    }
L_08A6784C:
    ctx.set_gpr(31, 0x08A67854u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A67854u) goto L_08A67854;
    return;
L_08A67854:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A67890;
      }
      goto L_08A67868;
    }
L_08A67868:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A67884;
      }
      goto L_08A67878;
    }
L_08A67878:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A67890;
      }
      goto L_08A67884;
    }
L_08A67884:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08A67890u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A67890u) goto L_08A67890;
    return;
L_08A67890:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(75), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A678B0;
      }
      goto L_08A678A0;
    }
L_08A678A0:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A678B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A678B0u) goto L_08A678B0;
    return;
L_08A678B0:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A678C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A678C0u) goto L_08A678C0;
    return;
L_08A678C0:
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
L_08A678E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A67A50;
      }
      goto L_08A67914;
    }
L_08A67914:
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(3, ctx.gpr[6] & 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A67930;
      }
      goto L_08A67924;
    }
L_08A67924:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A67964;
      }
      goto L_08A67930;
    }
L_08A67930:
    ctx.set_gpr(3, ctx.gpr[6] & 2u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A67948;
      }
      goto L_08A6793C;
    }
L_08A6793C:
    ctx.set_gpr(3, ctx.gpr[6] & 4u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A67954;
      }
      goto L_08A67948;
    }
L_08A67948:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A67964;
      }
      goto L_08A67954;
    }
L_08A67954:
    ctx.set_gpr(3, ctx.gpr[6] & 8u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A67964;
      }
      goto L_08A67960;
    }
L_08A67960:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    goto L_08A67964;
L_08A67964:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A679B0;
      }
      goto L_08A67970;
    }
L_08A67970:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[3] << 1u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A679B0;
      }
      goto L_08A67984;
    }
L_08A67984:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A679A0;
      }
      goto L_08A67994;
    }
L_08A67994:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A679B0;
      }
      goto L_08A679A0;
    }
L_08A679A0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x08A679B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A679B0u) goto L_08A679B0;
    return;
L_08A679B0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A679FC;
      }
      goto L_08A679BC;
    }
L_08A679BC:
    ctx.set_gpr(3, ctx.gpr[19] << 1u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A679FC;
      }
      goto L_08A679C8;
    }
L_08A679C8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A679FC;
      }
      goto L_08A679D4;
    }
L_08A679D4:
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[19]);
    ctx.set_gpr(4, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A679FC;
L_08A679FC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A67A50;
      }
      goto L_08A67A08;
    }
L_08A67A08:
    ctx.set_gpr(3, ctx.gpr[19] << 1u);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A67A50;
      }
      goto L_08A67A18;
    }
L_08A67A18:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A67A50;
      }
      goto L_08A67A24;
    }
L_08A67A24:
    ctx.set_gpr(3, ctx.gpr[4] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A67A50;
L_08A67A50:
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
L_08A67A70:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A67A8C;
      }
      goto L_08A67A80;
    }
L_08A67A80:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A67A9C;
      }
      goto L_08A67A8C;
    }
L_08A67A8C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[5] << 4u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    goto L_08A67A9C;
L_08A67A9C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A67AA4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(73)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A67AF0;
      }
      goto L_08A67AB8;
    }
L_08A67AB8:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[6] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A67B9C;
      }
      goto L_08A67AF0;
    }
L_08A67AF0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A67B40;
      }
      goto L_08A67AFC;
    }
L_08A67AFC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[7] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[7]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[6] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08A67B38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 269u, 0x08A03174u>(ctx, &aot_mem) && ctx.pc == 0x08A67B38u) goto L_08A67B38;
    return;
L_08A67B38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A67B9C;
      }
      goto L_08A67B40;
    }
L_08A67B40:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[7] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[7]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(8, ctx.gpr[10] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(9, ctx.gpr[6] << 1u);
    ctx.set_gpr(3, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[9] + ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[3] << 3u);
    ctx.set_gpr(6, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[10] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A67B9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 276u, 0x08A03368u>(ctx, &aot_mem) && ctx.pc == 0x08A67B9Cu) goto L_08A67B9C;
    return;
L_08A67B9C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A67BAC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A67BE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A67BE8u) goto L_08A67BE8;
    return;
L_08A67BE8:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A67C2C;
      }
      goto L_08A67BF8;
    }
L_08A67BF8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08A67C14u);
    // nop
    goto L_08A67F20;
L_08A67C14:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A67C24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 175u, 0x08A024A4u>(ctx, &aot_mem) && ctx.pc == 0x08A67C24u) goto L_08A67C24;
    return;
L_08A67C24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A67D2C;
      }
      goto L_08A67C2C;
    }
L_08A67C2C:
    ctx.set_gpr(3, ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A67D94;
      }
      goto L_08A67C38;
    }
L_08A67C38:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(74)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A67C74;
      }
      goto L_08A67C44;
    }
L_08A67C44:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[17] << 4u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A67D04;
      }
      goto L_08A67C74;
    }
L_08A67C74:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A67CB0;
      }
      goto L_08A67C80;
    }
L_08A67C80:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[16] << 4u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[17] << 4u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08A67CA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 269u, 0x08A03174u>(ctx, &aot_mem) && ctx.pc == 0x08A67CA8u) goto L_08A67CA8;
    return;
L_08A67CA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A67D04;
      }
      goto L_08A67CB0;
    }
L_08A67CB0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[16] << 4u);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(8, ctx.gpr[9] + ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(4, ctx.gpr[17] << 1u);
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[17] << 4u);
    ctx.set_gpr(5, ctx.gpr[9] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08A67D04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 276u, 0x08A03368u>(ctx, &aot_mem) && ctx.pc == 0x08A67D04u) goto L_08A67D04;
    return;
L_08A67D04:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32268)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A67D2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 28u, 0x08A005D4u>(ctx, &aot_mem) && ctx.pc == 0x08A67D2Cu) goto L_08A67D2C;
    return;
L_08A67D2C:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A67D64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 270u, 0x08A031C4u>(ctx, &aot_mem) && ctx.pc == 0x08A67D64u) goto L_08A67D64;
    return;
L_08A67D64:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[3] = ctx.fpr[1] - ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[2] = ctx.fpr[1] - ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    goto L_08A67D94;
L_08A67D94:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A67DF0;
      }
      goto L_08A67DA4;
    }
L_08A67DA4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08A67DC0u);
    // nop
    goto L_08A67AA4;
L_08A67DC0:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A67DF0;
L_08A67DF0:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, ctx.gpr[3] & 8u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A67EFC;
      }
      goto L_08A67E00;
    }
L_08A67E00:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(75)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A67E44;
      }
      goto L_08A67E0C;
    }
L_08A67E0C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[17] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A67EEC;
      }
      goto L_08A67E44;
    }
L_08A67E44:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A67E90;
      }
      goto L_08A67E50;
    }
L_08A67E50:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[16] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[17] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08A67E88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 269u, 0x08A03174u>(ctx, &aot_mem) && ctx.pc == 0x08A67E88u) goto L_08A67E88;
    return;
L_08A67E88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A67EEC;
      }
      goto L_08A67E90;
    }
L_08A67E90:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[16] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(8, ctx.gpr[9] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(5, ctx.gpr[17] << 1u);
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[3] << 3u);
    ctx.set_gpr(6, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(5, ctx.gpr[9] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08A67EECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 276u, 0x08A03368u>(ctx, &aot_mem) && ctx.pc == 0x08A67EECu) goto L_08A67EEC;
    return;
L_08A67EEC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(31, 0x08A67EFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 755u, 0x089FFF04u>(ctx, &aot_mem) && ctx.pc == 0x08A67EFCu) goto L_08A67EFC;
    return;
L_08A67EFC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A67F20:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(74)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A67F6C;
      }
      goto L_08A67F34;
    }
L_08A67F34:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[6] << 4u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A67FD8;
      }
      goto L_08A67F6C;
    }
L_08A67F6C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A67FAC;
      }
      goto L_08A67F78;
    }
L_08A67F78:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[7] << 4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[6] << 4u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08A67FA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 196u, 0x08A0275Cu>(ctx, &aot_mem) && ctx.pc == 0x08A67FA4u) goto L_08A67FA4;
    return;
L_08A67FA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A67FD8;
      }
      goto L_08A67FAC;
    }
L_08A67FAC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[7] << 4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[6] << 4u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08A67FD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 202u, 0x08A02A60u>(ctx, &aot_mem) && ctx.pc == 0x08A67FD8u) goto L_08A67FD8;
    return;
L_08A67FD8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A67FE8:
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, ctx.gpr[3] << 3u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[12]);
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x08A68000u; return;
}

void recomp_unit_0152(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0152_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_152(Runtime &runtime) {
    runtime.register_generated_unit(152u, 0x08A64000u, 16384u, &recomp_unit_0152, &recomp_unit_0152_entry);
    runtime.register_function(0x08A64000u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6401Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6402Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6403Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6404Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64078u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64088u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64094u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A640B8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A640C8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A640E0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A640F0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A640F4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64114u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64124u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64144u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64158u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64160u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64168u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6416Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64188u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A641A0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A641BCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A641D0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A641DCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A641E0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A641E8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64204u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64228u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64260u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64284u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64290u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A642B4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A642D4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A642E8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64300u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64358u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64364u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64398u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A643C4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64418u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64424u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64430u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64458u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64480u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64494u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A644ACu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A644BCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A644C0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A644D8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A644F0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6450Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64520u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64538u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64548u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64554u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64560u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6456Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64580u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6459Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A645A8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A645BCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A645C8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6461Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6464Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64698u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A646B0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A646D8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A646F0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64700u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64724u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6472Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64770u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64778u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64780u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64790u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6479Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A647B4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A647D4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A647DCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A647E4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6481Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64834u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64844u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64854u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64860u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64868u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64870u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64884u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6489Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A648B4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A648C4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A648CCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A648DCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A648ECu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A648F8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64900u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64904u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6490Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64920u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64938u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64950u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64968u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64978u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6498Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A649A4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A649BCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A649CCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A649E0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A649F8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64A10u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64A18u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64A28u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64A3Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64A60u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64A80u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64A90u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64AA4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64ABCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64ACCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64AD4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64AE8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64B20u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64B34u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64B44u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64B5Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64B68u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64B78u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64BA4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64BC4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64BCCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64BE8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64C00u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64C24u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64C30u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64C44u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64C50u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64C5Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64C68u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64C74u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64C84u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64C8Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64C94u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64CA8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64CB4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64CD4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64CE0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64CECu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64CFCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64D04u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64D1Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64D24u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64D2Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64D3Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64D44u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64D50u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64D6Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64D7Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64D88u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64D9Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64DA4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64DFCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64E14u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64E20u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64E3Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64E40u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64E54u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64E6Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64EACu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64EC4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64ED0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64EECu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64EF0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64F08u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64F20u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64F34u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64F44u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64F58u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64F68u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64F8Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64FCCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64FE4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A64FF0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6500Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65010u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65024u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6502Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65038u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65064u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65074u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6507Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65088u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65094u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6509Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A650A8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A650ACu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A650BCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A650C4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A650D0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A650F0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65144u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6515Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65168u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65184u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65188u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65198u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A651A4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A651B4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65284u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6528Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65294u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A652A0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65370u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65378u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65390u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A653D8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A653ECu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A653F8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6540Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65414u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65420u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65440u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65448u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65454u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6546Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65474u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65480u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A654A0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A654D0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A654DCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A654ECu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A655BCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A655C4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A655CCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A655D8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A656A8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A656B0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A656BCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A656D8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65710u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6571Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65730u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65734u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65744u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65750u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6575Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65768u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65774u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6579Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A657C8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A657E8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A657FCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6580Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A658DCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A658E4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A658ECu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65900u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A659D0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A659D8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A659E0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A659ECu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A659F4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65A00u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65A24u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65A2Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65A40u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65A68u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65A94u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65AA0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65AB4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65AB8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65AC4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65AD0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65AE8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65AF0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65B04u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65B0Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65B18u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65B24u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65B38u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65B40u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65B4Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65B54u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65B60u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65B80u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65BA0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65BB8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65BC0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65BD0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65BDCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65BECu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65BFCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65CCCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65CD4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65CDCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65CECu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65DBCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65DC4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65DE0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65E04u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65E30u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65E40u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65E48u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65E54u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65E60u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65E68u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65E74u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65E78u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65E88u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65E90u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65E9Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65EBCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65F10u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65F28u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65F34u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65F50u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65F54u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65F64u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65F70u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A65F80u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66050u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66058u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66060u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6606Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6613Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66144u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6615Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A661C8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66204u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66210u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66220u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6622Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66240u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66264u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A662A0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A662BCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A662DCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66324u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66360u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66374u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66388u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6639Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A663CCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A663F0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66418u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66434u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66438u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66440u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6645Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66460u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66468u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66484u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66488u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66494u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A664C4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A664D4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A664E0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A664FCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66510u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6652Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66554u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66560u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66580u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A665CCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A665D4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A665ECu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A665F4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6661Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66654u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66670u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A666A4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A666CCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A666F8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66708u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6671Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6672Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66744u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66760u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A667B0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A667DCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A667E0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A667F0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66810u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66820u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6682Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6683Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66844u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66878u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66884u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66890u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A668ACu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A668C4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A668D4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A668F4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66908u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6691Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66934u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66948u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6694Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6696Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66974u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66984u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6699Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A669ACu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A669C8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66A04u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66A14u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66A48u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66A78u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66A84u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66A94u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66AB8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66AF4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66B00u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66B10u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66B1Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66B30u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66B54u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66B90u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66B98u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66BA8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66BB8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66BD4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66BDCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66BE8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66C04u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66C2Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66C7Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66C9Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66CECu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66CFCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66D44u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66D50u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66DC0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66DDCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66DECu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66E34u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66E40u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66EB0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66ECCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66EDCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66EE8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66F30u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66F3Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66FACu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66FC8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A66FE4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67018u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67028u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67044u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67050u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6705Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67094u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67098u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A670A0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A670CCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67110u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67120u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67168u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67178u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A671B8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A671D8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A671F4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67204u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67210u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67224u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67238u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6724Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67260u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67280u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6728Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67298u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A672A4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A672B0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A672B8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A672C0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A672C8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A672D0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A672E0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A672ECu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A672F8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6730Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67318u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67320u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67338u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67348u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67354u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67360u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67368u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67378u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67380u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67388u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67394u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A673A0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A673B4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A673BCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A673C4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A673D0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A673DCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A673ECu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A673F8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67404u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67418u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67424u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6742Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67444u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67454u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67460u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6746Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67474u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67484u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6748Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67494u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A674A0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A674ACu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A674BCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A674C8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A674D4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A674E8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A674F4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A674FCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67514u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67524u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67530u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6753Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67544u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67554u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67568u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67578u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67584u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67590u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6759Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A675A8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A675B4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A675BCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A675C8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A675D4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A675E0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A675E4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A675ECu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67618u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67624u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67638u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67650u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6765Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67668u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6767Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67688u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67690u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A676A4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A676B4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A676C0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A676CCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A676DCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A676E4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A676F4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67704u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6770Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67718u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67728u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67734u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67740u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6774Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67760u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6776Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67774u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67788u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67798u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A677A4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A677B0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A677B8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A677C8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A677D8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A677E8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A677F8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67804u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67814u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67820u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6782Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67840u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6784Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67854u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67868u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67878u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67884u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67890u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A678A0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A678B0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A678C0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A678E0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67914u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67924u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67930u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A6793Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67948u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67954u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67960u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67964u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67970u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67984u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67994u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A679A0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A679B0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A679BCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A679C8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A679D4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A679FCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67A08u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67A18u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67A24u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67A50u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67A70u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67A80u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67A8Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67A9Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67AA4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67AB8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67AF0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67AFCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67B38u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67B40u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67B9Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67BACu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67BE8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67BF8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67C14u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67C24u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67C2Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67C38u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67C44u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67C74u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67C80u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67CA8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67CB0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67D04u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67D2Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67D64u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67D94u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67DA4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67DC0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67DF0u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67E00u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67E0Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67E44u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67E50u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67E88u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67E90u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67EECu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67EFCu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67F20u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67F34u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67F6Cu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67F78u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67FA4u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67FACu, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67FD8u, &recomp_unit_0152, "recomp_unit_0152");
    runtime.register_function(0x08A67FE8u, &recomp_unit_0152, "recomp_unit_0152");
}
} // namespace psprecomp
