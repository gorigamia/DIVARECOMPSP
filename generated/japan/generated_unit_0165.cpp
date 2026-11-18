#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0165[4092] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 4, 0, 0, 0, 0, 0, 0, 0, 5, 0,
    0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 9, 0, 0, 10, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0,
    0, 0, 16, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 19, 20, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 22, 23,
    0, 24, 0, 0, 25, 26, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 30, 0, 31, 32, 0, 33, 0, 0, 0, 0,
    0, 0, 0, 0, 34, 0, 0, 0, 35, 36, 0, 37, 38, 0, 39, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 41, 42, 0, 43, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0,
    0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0,
    0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 53, 0, 54, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0,
    0, 65, 0, 0, 66, 0, 67, 0, 0, 0, 0, 0, 68, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 71, 0, 0, 72,
    0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 76, 0, 77, 0, 0, 0, 0, 0,
    78, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 81, 0, 0, 82, 0, 83, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0,
    86, 0, 0, 87, 88, 89, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 92, 0, 93, 0, 0, 0, 94, 0, 0, 0,
    0, 95, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101,
    102, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 104, 105, 0, 106, 0, 0, 107, 108, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0,
    0, 0, 111, 112, 0, 113, 114, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117, 118, 0, 119, 120, 0, 121, 122, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 124, 0, 125, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 128,
    0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0,
    134, 0, 0, 135, 0, 136, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 141,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0,
    147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 149, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 0, 0, 0, 153,
    0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 157, 0, 158, 0, 0, 0, 0, 0, 159,
    160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 162, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 167, 0, 168, 0, 0, 169, 0, 0, 170, 171, 0, 172, 0, 173, 0, 0, 0, 174, 0, 0, 0, 175,
    0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0,
    0, 0, 179, 0, 0, 180, 0, 0, 0, 181, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 186,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 189, 0, 0, 190, 0, 191, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 196, 0, 0,
    0, 0, 197, 0, 198, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 201, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 0, 206, 0, 207, 0, 208, 0, 209, 210, 0, 211, 0, 0, 0, 0,
    0, 212, 0, 213, 0, 0, 214, 0, 215, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 0, 0, 219, 220, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 221, 0, 222, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 224, 225, 0, 0, 0, 0, 226, 0, 0, 0, 0,
    0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 229, 0, 230, 0, 231, 0, 0, 0, 0, 0, 0, 232, 0, 233, 0, 234,
    0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238,
    239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 241, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0,
    244, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 247,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 249, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 254, 0, 0, 0,
    255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 258, 0, 259, 0, 0, 0, 260, 261, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 266, 0, 0,
    0, 267, 268, 269, 0, 0, 270, 0, 271, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 274, 0, 0, 0, 275, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 276, 277, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0,
    0, 288, 289, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 292, 0, 0, 293, 0, 0, 0, 0, 0, 294, 295, 0, 0, 0, 0, 296,
    297, 0, 0, 0, 0, 0, 298, 0, 299, 0, 0, 0, 300, 0, 0, 301, 0, 0, 302, 0, 303, 304, 0, 0, 0, 0, 305, 0, 0, 306, 0, 0,
    307, 308, 0, 0, 0, 0, 309, 310, 0, 0, 0, 0, 0, 311, 0, 312, 0, 0, 0, 313, 0, 0, 314, 0, 0, 315, 0, 316, 317, 0, 0, 0,
    0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 0, 320, 0, 0, 0, 0, 0, 321, 322, 0, 0, 0, 0, 0, 323, 0,
    324, 0, 0, 0, 325, 0, 0, 326, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 329, 0, 0, 0, 0, 0, 330, 331, 0,
    0, 0, 0, 0, 332, 0, 333, 0, 0, 0, 334, 0, 0, 335, 336, 0, 0, 0, 0, 337, 0, 0, 338, 0, 0, 0, 0, 0, 339, 0, 0, 340,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0,
    0, 344, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 347, 0, 0, 348, 0, 349, 0, 350, 0, 351, 0, 352, 0, 0, 353,
    0, 354, 0, 0, 355, 356, 0, 0, 0, 0, 0, 0, 357, 0, 358, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 360, 0, 0, 0, 361,
    0, 0, 362, 0, 363, 0, 0, 0, 364, 0, 365, 0, 0, 0, 366, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0,
    0, 370, 0, 0, 0, 0, 371, 0, 0, 372, 0, 0, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 376,
    0, 0, 377, 378, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 381, 0, 0, 382, 0, 383, 0, 384, 0, 385, 0, 386, 0,
    0, 387, 0, 388, 0, 0, 389, 390, 0, 0, 0, 0, 0, 0, 391, 0, 392, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 394, 0, 0,
    0, 395, 0, 0, 396, 0, 397, 0, 0, 0, 398, 0, 399, 0, 0, 0, 400, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0, 0,
    405, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 407, 0, 408, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 414, 0, 0, 415, 0, 0, 0, 0, 416, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 419, 0, 0, 420, 421,
    0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 424, 0, 425, 0, 426, 0, 427, 0, 428, 0, 0, 429, 0, 430, 0, 0, 431,
    432, 0, 0, 0, 0, 0, 433, 0, 434, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 436, 0, 0, 0, 437, 0, 0, 438, 0, 439, 0,
    0, 0, 440, 0, 0, 0, 0, 441, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 444, 0, 0, 445, 446, 0, 0, 0,
    0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0,
    451, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 455,
    0, 456, 0, 0, 0, 0, 0, 457, 0, 0, 458, 0, 459, 0, 460, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0,
    463, 0, 464, 0, 465, 0, 0, 0, 0, 466, 0, 0, 0, 0, 467, 0, 0, 0, 468, 0, 0, 0, 469, 0, 470, 0, 0, 0, 0, 471, 0, 0,
    0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 475, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 478, 0, 0, 479, 0, 480, 0, 481, 0, 482, 0,
    483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 485, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 487,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 489, 0, 0, 0, 0, 490, 0, 491, 0, 0, 0, 492, 0,
    0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 494, 495, 0, 496, 0, 0, 497, 0, 0, 0, 0, 0, 498, 0, 0, 499, 0, 0, 500, 0, 501,
    0, 0, 502, 0, 0, 0, 0, 0, 503, 0, 504, 0, 0, 505, 0, 0, 506, 0, 0, 0, 507, 508, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 513, 0, 514, 0, 0,
    0, 0, 0, 0, 515, 516, 0, 0, 517, 0, 0, 0, 0, 518, 519, 0, 520, 0, 0, 0, 0, 0, 0, 0, 0, 521, 522, 0, 0, 523, 0, 0,
    0, 0, 524, 525, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 528, 0, 529, 0, 530, 0, 0, 531, 532, 0, 0,
    533, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 536, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 540, 0, 541, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 544, 0, 0, 545, 0, 0, 0, 546, 0, 547, 0, 548, 0, 0, 549, 0, 0, 550, 551, 0, 552,
    0, 553, 0, 554, 0, 0, 0, 0, 555, 0, 0, 0, 556, 0, 0, 557, 0, 0, 558, 0, 559, 0, 560, 0, 561, 0, 0, 562, 0, 563, 0, 0,
    0, 564, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 567,
    0, 0, 568, 0, 0, 0, 0, 569, 570, 0, 571, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 572, 0, 0, 0, 573, 0, 0, 574, 0, 0, 0, 0, 0, 0, 575, 576, 0, 0, 0, 577, 0, 0, 578, 0, 0,
    0, 579, 580, 0, 581, 0, 0, 582, 0, 583, 0, 584, 0, 0, 585, 0, 0, 586, 0, 0, 587, 0, 0, 588, 0, 589, 0, 0, 0, 590, 0, 0,
    0, 591, 0, 0, 0, 592, 0, 0, 0, 0, 0, 0, 593, 0, 594, 0, 0, 0, 595, 0, 0, 0, 0, 0, 0, 596, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 597, 0, 0, 0, 598, 0, 0, 0, 0, 599, 0, 600, 0, 601, 0, 0, 602, 0, 603, 0, 0, 0, 0, 0, 0,
    0, 0, 604, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 605, 0, 0, 0, 606, 0, 0, 0, 0, 607, 0, 0, 0, 608, 0, 609, 0, 0, 610, 0, 0, 0,
    0, 611, 612, 0, 613, 0, 614, 0, 0, 615, 0, 616, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 617, 0, 0, 0, 618, 0, 0, 0,
    0, 619, 620, 621, 0, 622, 0, 623, 0, 0, 624, 625, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 626, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    627, 0, 628, 0, 0, 629, 0, 630, 0, 0, 0, 0, 631, 0, 632, 0, 633, 0, 0, 634, 0, 635, 0, 0, 0, 636, 0, 637, 0, 0, 0, 638,
    0, 0, 0, 0, 0, 0, 639, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 641, 0, 0, 0, 0, 642, 0, 0, 0, 643, 0,
    0, 644, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 645, 0, 0, 646, 0, 0, 647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 648, 0, 0, 649,
    0, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0, 0, 0, 0, 651, 0, 652, 0, 0, 0, 0, 653, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 654, 0, 0, 0, 0, 0, 655, 0, 0, 0, 0, 656, 0, 0, 0, 0, 0, 0, 0, 0, 657, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 658, 0, 659, 0, 660, 0, 661, 662, 0, 663, 0, 664, 0, 0, 0, 0, 0, 0, 665, 0, 0, 0, 0, 0, 0, 0, 0, 0, 666,
    0, 0, 0, 667, 0, 0, 0, 668, 0, 0, 0, 0, 0, 669, 0, 0, 0, 670, 0, 0, 0, 671, 672, 0, 0, 0, 0, 673,
};
void recomp_unit_0165_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A98004u;
        entry_id = (entry_delta < 16368u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0165[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A98004;
    case 2u: goto L_08A98028;
    case 3u: goto L_08A98058;
    case 4u: goto L_08A9805C;
    case 5u: goto L_08A9807C;
    case 6u: goto L_08A980A0;
    case 7u: goto L_08A980D0;
    case 8u: goto L_08A980EC;
    case 9u: goto L_08A9811C;
    case 10u: goto L_08A98128;
    case 11u: goto L_08A98130;
    case 12u: goto L_08A98140;
    case 13u: goto L_08A98154;
    case 14u: goto L_08A98160;
    case 15u: goto L_08A98170;
    case 16u: goto L_08A9818C;
    case 17u: goto L_08A981A0;
    case 18u: goto L_08A981B8;
    case 19u: goto L_08A981CC;
    case 20u: goto L_08A981D0;
    case 21u: goto L_08A981D8;
    case 22u: goto L_08A981FC;
    case 23u: goto L_08A98200;
    case 24u: goto L_08A98208;
    case 25u: goto L_08A98214;
    case 26u: goto L_08A98218;
    case 27u: goto L_08A98220;
    case 28u: goto L_08A98248;
    case 29u: goto L_08A98258;
    case 30u: goto L_08A9825C;
    case 31u: goto L_08A98264;
    case 32u: goto L_08A98268;
    case 33u: goto L_08A98270;
    case 34u: goto L_08A98294;
    case 35u: goto L_08A982A4;
    case 36u: goto L_08A982A8;
    case 37u: goto L_08A982B0;
    case 38u: goto L_08A982B4;
    case 39u: goto L_08A982BC;
    case 40u: goto L_08A982C0;
    case 41u: goto L_08A98390;
    case 42u: goto L_08A98394;
    case 43u: goto L_08A9839C;
    case 44u: goto L_08A983A0;
    case 45u: goto L_08A983C8;
    case 46u: goto L_08A983CC;
    case 47u: goto L_08A983E8;
    case 48u: goto L_08A9840C;
    case 49u: goto L_08A986E8;
    case 50u: goto L_08A98708;
    case 51u: goto L_08A98744;
    case 52u: goto L_08A98758;
    case 53u: goto L_08A98764;
    case 54u: goto L_08A9876C;
    case 55u: goto L_08A989D4;
    case 56u: goto L_08A989F4;
    case 57u: goto L_08A98A30;
    case 58u: goto L_08A98A44;
    case 59u: goto L_08A98A54;
    case 60u: goto L_08A98CC0;
    case 61u: goto L_08A98CC8;
    case 62u: goto L_08A98F30;
    case 63u: goto L_08A98F50;
    case 64u: goto L_08A98F74;
    case 65u: goto L_08A98F88;
    case 66u: goto L_08A98F94;
    case 67u: goto L_08A98F9C;
    case 68u: goto L_08A98FB4;
    case 69u: goto L_08A98FB8;
    case 70u: goto L_08A98FF0;
    case 71u: goto L_08A98FF4;
    case 72u: goto L_08A99000;
    case 73u: goto L_08A99020;
    case 74u: goto L_08A99034;
    case 75u: goto L_08A9905C;
    case 76u: goto L_08A99064;
    case 77u: goto L_08A9906C;
    case 78u: goto L_08A99084;
    case 79u: goto L_08A990A0;
    case 80u: goto L_08A990B0;
    case 81u: goto L_08A990C4;
    case 82u: goto L_08A990D0;
    case 83u: goto L_08A990D8;
    case 84u: goto L_08A990DC;
    case 85u: goto L_08A990F4;
    case 86u: goto L_08A99104;
    case 87u: goto L_08A99110;
    case 88u: goto L_08A99114;
    case 89u: goto L_08A99118;
    case 90u: goto L_08A99128;
    case 91u: goto L_08A99150;
    case 92u: goto L_08A9915C;
    case 93u: goto L_08A99164;
    case 94u: goto L_08A99174;
    case 95u: goto L_08A99188;
    case 96u: goto L_08A99194;
    case 97u: goto L_08A991A4;
    case 98u: goto L_08A991C0;
    case 99u: goto L_08A991D4;
    case 100u: goto L_08A991EC;
    case 101u: goto L_08A99200;
    case 102u: goto L_08A99204;
    case 103u: goto L_08A9920C;
    case 104u: goto L_08A99230;
    case 105u: goto L_08A99234;
    case 106u: goto L_08A9923C;
    case 107u: goto L_08A99248;
    case 108u: goto L_08A9924C;
    case 109u: goto L_08A99254;
    case 110u: goto L_08A9927C;
    case 111u: goto L_08A9928C;
    case 112u: goto L_08A99290;
    case 113u: goto L_08A99298;
    case 114u: goto L_08A9929C;
    case 115u: goto L_08A992A4;
    case 116u: goto L_08A992C8;
    case 117u: goto L_08A992D8;
    case 118u: goto L_08A992DC;
    case 119u: goto L_08A992E4;
    case 120u: goto L_08A992E8;
    case 121u: goto L_08A992F0;
    case 122u: goto L_08A992F4;
    case 123u: goto L_08A993C4;
    case 124u: goto L_08A993C8;
    case 125u: goto L_08A993D0;
    case 126u: goto L_08A993D4;
    case 127u: goto L_08A993FC;
    case 128u: goto L_08A99400;
    case 129u: goto L_08A9941C;
    case 130u: goto L_08A99440;
    case 131u: goto L_08A994A0;
    case 132u: goto L_08A994BC;
    case 133u: goto L_08A994F0;
    case 134u: goto L_08A99504;
    case 135u: goto L_08A99510;
    case 136u: goto L_08A99518;
    case 137u: goto L_08A99520;
    case 138u: goto L_08A9953C;
    case 139u: goto L_08A99544;
    case 140u: goto L_08A99564;
    case 141u: goto L_08A99580;
    case 142u: goto L_08A995B4;
    case 143u: goto L_08A995C8;
    case 144u: goto L_08A995D8;
    case 145u: goto L_08A995E0;
    case 146u: goto L_08A995FC;
    case 147u: goto L_08A99604;
    case 148u: goto L_08A9962C;
    case 149u: goto L_08A99634;
    case 150u: goto L_08A9963C;
    case 151u: goto L_08A99658;
    case 152u: goto L_08A99660;
    case 153u: goto L_08A99680;
    case 154u: goto L_08A9969C;
    case 155u: goto L_08A996C0;
    case 156u: goto L_08A996D4;
    case 157u: goto L_08A996E0;
    case 158u: goto L_08A996E8;
    case 159u: goto L_08A99700;
    case 160u: goto L_08A99704;
    case 161u: goto L_08A9973C;
    case 162u: goto L_08A99740;
    case 163u: goto L_08A9974C;
    case 164u: goto L_08A9976C;
    case 165u: goto L_08A99780;
    case 166u: goto L_08A997A8;
    case 167u: goto L_08A997AC;
    case 168u: goto L_08A997B4;
    case 169u: goto L_08A997C0;
    case 170u: goto L_08A997CC;
    case 171u: goto L_08A997D0;
    case 172u: goto L_08A997D8;
    case 173u: goto L_08A997E0;
    case 174u: goto L_08A997F0;
    case 175u: goto L_08A99800;
    case 176u: goto L_08A9981C;
    case 177u: goto L_08A99864;
    case 178u: goto L_08A9987C;
    case 179u: goto L_08A9988C;
    case 180u: goto L_08A99898;
    case 181u: goto L_08A998A8;
    case 182u: goto L_08A998B4;
    case 183u: goto L_08A998C4;
    case 184u: goto L_08A998E0;
    case 185u: goto L_08A998F8;
    case 186u: goto L_08A99900;
    case 187u: goto L_08A99938;
    case 188u: goto L_08A99950;
    case 189u: goto L_08A99A0C;
    case 190u: goto L_08A99A18;
    case 191u: goto L_08A99A20;
    case 192u: goto L_08A99A2C;
    case 193u: goto L_08A99A38;
    case 194u: goto L_08A99A5C;
    case 195u: goto L_08A99A70;
    case 196u: goto L_08A99A78;
    case 197u: goto L_08A99A8C;
    case 198u: goto L_08A99A94;
    case 199u: goto L_08A99AA0;
    case 200u: goto L_08A99AC4;
    case 201u: goto L_08A99AD4;
    case 202u: goto L_08A99AD8;
    case 203u: goto L_08A99B14;
    case 204u: goto L_08A99B28;
    case 205u: goto L_08A99B40;
    case 206u: goto L_08A99B4C;
    case 207u: goto L_08A99B54;
    case 208u: goto L_08A99B5C;
    case 209u: goto L_08A99B64;
    case 210u: goto L_08A99B68;
    case 211u: goto L_08A99B70;
    case 212u: goto L_08A99B88;
    case 213u: goto L_08A99B90;
    case 214u: goto L_08A99B9C;
    case 215u: goto L_08A99BA4;
    case 216u: goto L_08A99BAC;
    case 217u: goto L_08A99BD0;
    case 218u: goto L_08A99BE0;
    case 219u: goto L_08A99BF4;
    case 220u: goto L_08A99BF8;
    case 221u: goto L_08A99C20;
    case 222u: goto L_08A99C28;
    case 223u: goto L_08A99C38;
    case 224u: goto L_08A99C58;
    case 225u: goto L_08A99C5C;
    case 226u: goto L_08A99C70;
    case 227u: goto L_08A99C94;
    case 228u: goto L_08A99CB8;
    case 229u: goto L_08A99CC4;
    case 230u: goto L_08A99CCC;
    case 231u: goto L_08A99CD4;
    case 232u: goto L_08A99CF0;
    case 233u: goto L_08A99CF8;
    case 234u: goto L_08A99D00;
    case 235u: goto L_08A99D08;
    case 236u: goto L_08A99D3C;
    case 237u: goto L_08A99D60;
    case 238u: goto L_08A99D80;
    case 239u: goto L_08A99D84;
    case 240u: goto L_08A99DBC;
    case 241u: goto L_08A99DC4;
    case 242u: goto L_08A99DD4;
    case 243u: goto L_08A99DFC;
    case 244u: goto L_08A99E04;
    case 245u: goto L_08A99E0C;
    case 246u: goto L_08A99E60;
    case 247u: goto L_08A99E80;
    case 248u: goto L_08A99EB8;
    case 249u: goto L_08A99EC0;
    case 250u: goto L_08A99ED0;
    case 251u: goto L_08A99F14;
    case 252u: goto L_08A99F34;
    case 253u: goto L_08A99F6C;
    case 254u: goto L_08A99F74;
    case 255u: goto L_08A99F84;
    case 256u: goto L_08A99FC8;
    case 257u: goto L_08A99FE8;
    case 258u: goto L_08A9A020;
    case 259u: goto L_08A9A028;
    case 260u: goto L_08A9A038;
    case 261u: goto L_08A9A03C;
    case 262u: goto L_08A9A044;
    case 263u: goto L_08A9A098;
    case 264u: goto L_08A9A0B8;
    case 265u: goto L_08A9A0F0;
    case 266u: goto L_08A9A0F8;
    case 267u: goto L_08A9A108;
    case 268u: goto L_08A9A10C;
    case 269u: goto L_08A9A110;
    case 270u: goto L_08A9A11C;
    case 271u: goto L_08A9A124;
    case 272u: goto L_08A9A138;
    case 273u: goto L_08A9A158;
    case 274u: goto L_08A9A164;
    case 275u: goto L_08A9A174;
    case 276u: goto L_08A9A19C;
    case 277u: goto L_08A9A1A0;
    case 278u: goto L_08A9A1AC;
    case 279u: goto L_08A9A238;
    case 280u: goto L_08A9A244;
    case 281u: goto L_08A9A254;
    case 282u: goto L_08A9A264;
    case 283u: goto L_08A9A298;
    case 284u: goto L_08A9A2A8;
    case 285u: goto L_08A9A2BC;
    case 286u: goto L_08A9A2E4;
    case 287u: goto L_08A9A2F4;
    case 288u: goto L_08A9A308;
    case 289u: goto L_08A9A30C;
    case 290u: goto L_08A9A318;
    case 291u: goto L_08A9A33C;
    case 292u: goto L_08A9A344;
    case 293u: goto L_08A9A350;
    case 294u: goto L_08A9A368;
    case 295u: goto L_08A9A36C;
    case 296u: goto L_08A9A380;
    case 297u: goto L_08A9A384;
    case 298u: goto L_08A9A39C;
    case 299u: goto L_08A9A3A4;
    case 300u: goto L_08A9A3B4;
    case 301u: goto L_08A9A3C0;
    case 302u: goto L_08A9A3CC;
    case 303u: goto L_08A9A3D4;
    case 304u: goto L_08A9A3D8;
    case 305u: goto L_08A9A3EC;
    case 306u: goto L_08A9A3F8;
    case 307u: goto L_08A9A404;
    case 308u: goto L_08A9A408;
    case 309u: goto L_08A9A41C;
    case 310u: goto L_08A9A420;
    case 311u: goto L_08A9A438;
    case 312u: goto L_08A9A440;
    case 313u: goto L_08A9A450;
    case 314u: goto L_08A9A45C;
    case 315u: goto L_08A9A468;
    case 316u: goto L_08A9A470;
    case 317u: goto L_08A9A474;
    case 318u: goto L_08A9A48C;
    case 319u: goto L_08A9A4BC;
    case 320u: goto L_08A9A4C8;
    case 321u: goto L_08A9A4E0;
    case 322u: goto L_08A9A4E4;
    case 323u: goto L_08A9A4FC;
    case 324u: goto L_08A9A504;
    case 325u: goto L_08A9A514;
    case 326u: goto L_08A9A520;
    case 327u: goto L_08A9A528;
    case 328u: goto L_08A9A554;
    case 329u: goto L_08A9A560;
    case 330u: goto L_08A9A578;
    case 331u: goto L_08A9A57C;
    case 332u: goto L_08A9A594;
    case 333u: goto L_08A9A59C;
    case 334u: goto L_08A9A5AC;
    case 335u: goto L_08A9A5B8;
    case 336u: goto L_08A9A5BC;
    case 337u: goto L_08A9A5D0;
    case 338u: goto L_08A9A5DC;
    case 339u: goto L_08A9A5F4;
    case 340u: goto L_08A9A600;
    case 341u: goto L_08A9A63C;
    case 342u: goto L_08A9A640;
    case 343u: goto L_08A9A678;
    case 344u: goto L_08A9A688;
    case 345u: goto L_08A9A69C;
    case 346u: goto L_08A9A6BC;
    case 347u: goto L_08A9A6C8;
    case 348u: goto L_08A9A6D4;
    case 349u: goto L_08A9A6DC;
    case 350u: goto L_08A9A6E4;
    case 351u: goto L_08A9A6EC;
    case 352u: goto L_08A9A6F4;
    case 353u: goto L_08A9A700;
    case 354u: goto L_08A9A708;
    case 355u: goto L_08A9A714;
    case 356u: goto L_08A9A718;
    case 357u: goto L_08A9A734;
    case 358u: goto L_08A9A73C;
    case 359u: goto L_08A9A75C;
    case 360u: goto L_08A9A770;
    case 361u: goto L_08A9A780;
    case 362u: goto L_08A9A78C;
    case 363u: goto L_08A9A794;
    case 364u: goto L_08A9A7A4;
    case 365u: goto L_08A9A7AC;
    case 366u: goto L_08A9A7BC;
    case 367u: goto L_08A9A7C8;
    case 368u: goto L_08A9A7D8;
    case 369u: goto L_08A9A7E8;
    case 370u: goto L_08A9A808;
    case 371u: goto L_08A9A81C;
    case 372u: goto L_08A9A828;
    case 373u: goto L_08A9A83C;
    case 374u: goto L_08A9A84C;
    case 375u: goto L_08A9A86C;
    case 376u: goto L_08A9A880;
    case 377u: goto L_08A9A88C;
    case 378u: goto L_08A9A890;
    case 379u: goto L_08A9A8A4;
    case 380u: goto L_08A9A8C4;
    case 381u: goto L_08A9A8D0;
    case 382u: goto L_08A9A8DC;
    case 383u: goto L_08A9A8E4;
    case 384u: goto L_08A9A8EC;
    case 385u: goto L_08A9A8F4;
    case 386u: goto L_08A9A8FC;
    case 387u: goto L_08A9A908;
    case 388u: goto L_08A9A910;
    case 389u: goto L_08A9A91C;
    case 390u: goto L_08A9A920;
    case 391u: goto L_08A9A93C;
    case 392u: goto L_08A9A944;
    case 393u: goto L_08A9A964;
    case 394u: goto L_08A9A978;
    case 395u: goto L_08A9A988;
    case 396u: goto L_08A9A994;
    case 397u: goto L_08A9A99C;
    case 398u: goto L_08A9A9AC;
    case 399u: goto L_08A9A9B4;
    case 400u: goto L_08A9A9C4;
    case 401u: goto L_08A9A9D0;
    case 402u: goto L_08A9AAD4;
    case 403u: goto L_08A9AAE4;
    case 404u: goto L_08A9AAF4;
    case 405u: goto L_08A9AB04;
    case 406u: goto L_08A9AB24;
    case 407u: goto L_08A9AB38;
    case 408u: goto L_08A9AB40;
    case 409u: goto L_08A9AB4C;
    case 410u: goto L_08A9AB6C;
    case 411u: goto L_08A9AB9C;
    case 412u: goto L_08A9ABD0;
    case 413u: goto L_08A9ABD8;
    case 414u: goto L_08A9AC0C;
    case 415u: goto L_08A9AC18;
    case 416u: goto L_08A9AC2C;
    case 417u: goto L_08A9AC3C;
    case 418u: goto L_08A9AC5C;
    case 419u: goto L_08A9AC70;
    case 420u: goto L_08A9AC7C;
    case 421u: goto L_08A9AC80;
    case 422u: goto L_08A9AC94;
    case 423u: goto L_08A9ACB4;
    case 424u: goto L_08A9ACC0;
    case 425u: goto L_08A9ACC8;
    case 426u: goto L_08A9ACD0;
    case 427u: goto L_08A9ACD8;
    case 428u: goto L_08A9ACE0;
    case 429u: goto L_08A9ACEC;
    case 430u: goto L_08A9ACF4;
    case 431u: goto L_08A9AD00;
    case 432u: goto L_08A9AD04;
    case 433u: goto L_08A9AD1C;
    case 434u: goto L_08A9AD24;
    case 435u: goto L_08A9AD44;
    case 436u: goto L_08A9AD58;
    case 437u: goto L_08A9AD68;
    case 438u: goto L_08A9AD74;
    case 439u: goto L_08A9AD7C;
    case 440u: goto L_08A9AD8C;
    case 441u: goto L_08A9ADA0;
    case 442u: goto L_08A9ADB0;
    case 443u: goto L_08A9ADD0;
    case 444u: goto L_08A9ADE4;
    case 445u: goto L_08A9ADF0;
    case 446u: goto L_08A9ADF4;
    case 447u: goto L_08A9AE08;
    case 448u: goto L_08A9AE2C;
    case 449u: goto L_08A9AE48;
    case 450u: goto L_08A9AE60;
    case 451u: goto L_08A9AE84;
    case 452u: goto L_08A9AEA8;
    case 453u: goto L_08A9AEC4;
    case 454u: goto L_08A9AEDC;
    case 455u: goto L_08A9AF00;
    case 456u: goto L_08A9AF08;
    case 457u: goto L_08A9AF20;
    case 458u: goto L_08A9AF2C;
    case 459u: goto L_08A9AF34;
    case 460u: goto L_08A9AF3C;
    case 461u: goto L_08A9AF4C;
    case 462u: goto L_08A9AF7C;
    case 463u: goto L_08A9AF84;
    case 464u: goto L_08A9AF8C;
    case 465u: goto L_08A9AF94;
    case 466u: goto L_08A9AFA8;
    case 467u: goto L_08A9AFBC;
    case 468u: goto L_08A9AFCC;
    case 469u: goto L_08A9AFDC;
    case 470u: goto L_08A9AFE4;
    case 471u: goto L_08A9AFF8;
    case 472u: goto L_08A9B018;
    case 473u: goto L_08A9B02C;
    case 474u: goto L_08A9B05C;
    case 475u: goto L_08A9B074;
    case 476u: goto L_08A9B0A0;
    case 477u: goto L_08A9B0D0;
    case 478u: goto L_08A9B0D8;
    case 479u: goto L_08A9B0E4;
    case 480u: goto L_08A9B0EC;
    case 481u: goto L_08A9B0F4;
    case 482u: goto L_08A9B0FC;
    case 483u: goto L_08A9B104;
    case 484u: goto L_08A9B13C;
    case 485u: goto L_08A9B148;
    case 486u: goto L_08A9B164;
    case 487u: goto L_08A9B180;
    case 488u: goto L_08A9B1C4;
    case 489u: goto L_08A9B1D0;
    case 490u: goto L_08A9B1E4;
    case 491u: goto L_08A9B1EC;
    case 492u: goto L_08A9B1FC;
    case 493u: goto L_08A9B210;
    case 494u: goto L_08A9B230;
    case 495u: goto L_08A9B234;
    case 496u: goto L_08A9B23C;
    case 497u: goto L_08A9B248;
    case 498u: goto L_08A9B260;
    case 499u: goto L_08A9B26C;
    case 500u: goto L_08A9B278;
    case 501u: goto L_08A9B280;
    case 502u: goto L_08A9B28C;
    case 503u: goto L_08A9B2A4;
    case 504u: goto L_08A9B2AC;
    case 505u: goto L_08A9B2B8;
    case 506u: goto L_08A9B2C4;
    case 507u: goto L_08A9B2D4;
    case 508u: goto L_08A9B2D8;
    case 509u: goto L_08A9B2F4;
    case 510u: goto L_08A9B320;
    case 511u: goto L_08A9B340;
    case 512u: goto L_08A9B350;
    case 513u: goto L_08A9B370;
    case 514u: goto L_08A9B378;
    case 515u: goto L_08A9B394;
    case 516u: goto L_08A9B398;
    case 517u: goto L_08A9B3A4;
    case 518u: goto L_08A9B3B8;
    case 519u: goto L_08A9B3BC;
    case 520u: goto L_08A9B3C4;
    case 521u: goto L_08A9B3E8;
    case 522u: goto L_08A9B3EC;
    case 523u: goto L_08A9B3F8;
    case 524u: goto L_08A9B40C;
    case 525u: goto L_08A9B410;
    case 526u: goto L_08A9B424;
    case 527u: goto L_08A9B44C;
    case 528u: goto L_08A9B458;
    case 529u: goto L_08A9B460;
    case 530u: goto L_08A9B468;
    case 531u: goto L_08A9B474;
    case 532u: goto L_08A9B478;
    case 533u: goto L_08A9B484;
    case 534u: goto L_08A9B498;
    case 535u: goto L_08A9B4B0;
    case 536u: goto L_08A9B4C4;
    case 537u: goto L_08A9B4D0;
    case 538u: goto L_08A9B4F0;
    case 539u: goto L_08A9B528;
    case 540u: goto L_08A9B534;
    case 541u: goto L_08A9B53C;
    case 542u: goto L_08A9B550;
    case 543u: goto L_08A9B5A8;
    case 544u: goto L_08A9B5B0;
    case 545u: goto L_08A9B5BC;
    case 546u: goto L_08A9B5CC;
    case 547u: goto L_08A9B5D4;
    case 548u: goto L_08A9B5DC;
    case 549u: goto L_08A9B5E8;
    case 550u: goto L_08A9B5F4;
    case 551u: goto L_08A9B5F8;
    case 552u: goto L_08A9B600;
    case 553u: goto L_08A9B608;
    case 554u: goto L_08A9B610;
    case 555u: goto L_08A9B624;
    case 556u: goto L_08A9B634;
    case 557u: goto L_08A9B640;
    case 558u: goto L_08A9B64C;
    case 559u: goto L_08A9B654;
    case 560u: goto L_08A9B65C;
    case 561u: goto L_08A9B664;
    case 562u: goto L_08A9B670;
    case 563u: goto L_08A9B678;
    case 564u: goto L_08A9B688;
    case 565u: goto L_08A9B6BC;
    case 566u: goto L_08A9B6CC;
    case 567u: goto L_08A9B700;
    case 568u: goto L_08A9B70C;
    case 569u: goto L_08A9B720;
    case 570u: goto L_08A9B724;
    case 571u: goto L_08A9B72C;
    case 572u: goto L_08A9B7A0;
    case 573u: goto L_08A9B7B0;
    case 574u: goto L_08A9B7BC;
    case 575u: goto L_08A9B7D8;
    case 576u: goto L_08A9B7DC;
    case 577u: goto L_08A9B7EC;
    case 578u: goto L_08A9B7F8;
    case 579u: goto L_08A9B808;
    case 580u: goto L_08A9B80C;
    case 581u: goto L_08A9B814;
    case 582u: goto L_08A9B820;
    case 583u: goto L_08A9B828;
    case 584u: goto L_08A9B830;
    case 585u: goto L_08A9B83C;
    case 586u: goto L_08A9B848;
    case 587u: goto L_08A9B854;
    case 588u: goto L_08A9B860;
    case 589u: goto L_08A9B868;
    case 590u: goto L_08A9B878;
    case 591u: goto L_08A9B888;
    case 592u: goto L_08A9B898;
    case 593u: goto L_08A9B8B4;
    case 594u: goto L_08A9B8BC;
    case 595u: goto L_08A9B8CC;
    case 596u: goto L_08A9B8E8;
    case 597u: goto L_08A9B9A0;
    case 598u: goto L_08A9B9B0;
    case 599u: goto L_08A9B9C4;
    case 600u: goto L_08A9B9CC;
    case 601u: goto L_08A9B9D4;
    case 602u: goto L_08A9B9E0;
    case 603u: goto L_08A9B9E8;
    case 604u: goto L_08A9BA0C;
    case 605u: goto L_08A9BAAC;
    case 606u: goto L_08A9BABC;
    case 607u: goto L_08A9BAD0;
    case 608u: goto L_08A9BAE0;
    case 609u: goto L_08A9BAE8;
    case 610u: goto L_08A9BAF4;
    case 611u: goto L_08A9BB08;
    case 612u: goto L_08A9BB0C;
    case 613u: goto L_08A9BB14;
    case 614u: goto L_08A9BB1C;
    case 615u: goto L_08A9BB28;
    case 616u: goto L_08A9BB30;
    case 617u: goto L_08A9BBE4;
    case 618u: goto L_08A9BBF4;
    case 619u: goto L_08A9BC08;
    case 620u: goto L_08A9BC0C;
    case 621u: goto L_08A9BC10;
    case 622u: goto L_08A9BC18;
    case 623u: goto L_08A9BC20;
    case 624u: goto L_08A9BC2C;
    case 625u: goto L_08A9BC30;
    case 626u: goto L_08A9BC5C;
    case 627u: goto L_08A9BC84;
    case 628u: goto L_08A9BC8C;
    case 629u: goto L_08A9BC98;
    case 630u: goto L_08A9BCA0;
    case 631u: goto L_08A9BCB4;
    case 632u: goto L_08A9BCBC;
    case 633u: goto L_08A9BCC4;
    case 634u: goto L_08A9BCD0;
    case 635u: goto L_08A9BCD8;
    case 636u: goto L_08A9BCE8;
    case 637u: goto L_08A9BCF0;
    case 638u: goto L_08A9BD00;
    case 639u: goto L_08A9BD1C;
    case 640u: goto L_08A9BD54;
    case 641u: goto L_08A9BD58;
    case 642u: goto L_08A9BD6C;
    case 643u: goto L_08A9BD7C;
    case 644u: goto L_08A9BD88;
    case 645u: goto L_08A9BDB4;
    case 646u: goto L_08A9BDC0;
    case 647u: goto L_08A9BDCC;
    case 648u: goto L_08A9BDF4;
    case 649u: goto L_08A9BE00;
    case 650u: goto L_08A9BE1C;
    case 651u: goto L_08A9BE40;
    case 652u: goto L_08A9BE48;
    case 653u: goto L_08A9BE5C;
    case 654u: goto L_08A9BE98;
    case 655u: goto L_08A9BEB0;
    case 656u: goto L_08A9BEC4;
    case 657u: goto L_08A9BEE8;
    case 658u: goto L_08A9BF10;
    case 659u: goto L_08A9BF18;
    case 660u: goto L_08A9BF20;
    case 661u: goto L_08A9BF28;
    case 662u: goto L_08A9BF2C;
    case 663u: goto L_08A9BF34;
    case 664u: goto L_08A9BF3C;
    case 665u: goto L_08A9BF58;
    case 666u: goto L_08A9BF80;
    case 667u: goto L_08A9BF90;
    case 668u: goto L_08A9BFA0;
    case 669u: goto L_08A9BFB8;
    case 670u: goto L_08A9BFC8;
    case 671u: goto L_08A9BFD8;
    case 672u: goto L_08A9BFDC;
    case 673u: goto L_08A9BFF0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A98004:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A98028:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.set_gpr(3, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_08A980D0;
      }
      goto L_08A98058;
    }
L_08A98058:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08A9805C;
L_08A9805C:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08A9807Cu);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 136u, 0x088548B4u>(ctx, &aot_mem) && ctx.pc == 0x08A9807Cu) goto L_08A9807C;
    return;
L_08A9807C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(31, 0x08A980A0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 136u, 0x088548B4u>(ctx, &aot_mem) && ctx.pc == 0x08A980A0u) goto L_08A980A0;
    return;
L_08A980A0:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(11));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[16]);
    ctx.set_gpr(3, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[3];
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_08A9805C;
      }
      goto L_08A980D0;
    }
L_08A980D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A980EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A9811Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 96u, 0x08A946D4u>(ctx, &aot_mem) && ctx.pc == 0x08A9811Cu) goto L_08A9811C;
    return;
L_08A9811C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 22 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
        goto L_08A98130;
    }
    goto L_08A98128;
L_08A98128:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A986E8;
      }
      goto L_08A98130;
    }
L_08A98130:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A98140u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    goto L_08A9BEE8;
L_08A98140:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A98154u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    goto L_08A9BFF0;
L_08A98154:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_08A983E8;
    }
    goto L_08A98160;
L_08A98160:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A98170u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 11u, 0x08A9C0B0u>(ctx, &aot_mem) && ctx.pc == 0x08A98170u) goto L_08A98170;
    return;
L_08A98170:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_08A983CC;
    }
    goto L_08A9818C;
L_08A9818C:
    ctx.set_gpr(3, ctx.gpr[5] - ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A98390;
      }
      goto L_08A981A0;
    }
L_08A981A0:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(7, 0u + 0u);
      if (branch_taken) {
          goto L_08A981D0;
      }
      goto L_08A981B8;
    }
L_08A981B8:
    ctx.set_gpr(6, 32768u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] | 1u);
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A981D0;
      }
      goto L_08A981CC;
    }
L_08A981CC:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    goto L_08A981D0;
L_08A981D0:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A98200;
      }
      goto L_08A981D8;
    }
L_08A981D8:
    ctx.set_gpr(6, 1u << 16u);
    ctx.set_gpr(6, ctx.gpr[20] + ctx.gpr[6]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(6, 32768u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] | 1u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A98200;
      }
      goto L_08A981FC;
    }
L_08A981FC:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    goto L_08A98200;
L_08A98200:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A98218;
      }
      goto L_08A98208;
    }
L_08A98208:
    ctx.set_gpr(6, 32768u << 16u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A98218;
      }
      goto L_08A98214;
    }
L_08A98214:
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    goto L_08A98218;
L_08A98218:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A98268;
      }
      goto L_08A98220;
    }
L_08A98220:
    ctx.set_gpr(6, 1u << 16u);
    ctx.set_gpr(6, ctx.gpr[20] + ctx.gpr[6]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(8, 32768u << 16u);
    ctx.set_gpr(6, 0u - ctx.gpr[16]);
    ctx.set_gpr(9, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, ctx.gpr[6] & ctx.gpr[8]);
    ctx.set_gpr(7, ctx.gpr[9] & ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A9825C;
      }
      goto L_08A98248;
    }
L_08A98248:
    ctx.set_gpr(6, ctx.gpr[9] - ctx.gpr[16]);
    ctx.set_gpr(6, ctx.gpr[6] & ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A9825C;
      }
      goto L_08A98258;
    }
L_08A98258:
    ctx.set_gpr(10, 0u + 0u);
    goto L_08A9825C;
L_08A9825C:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A98268;
      }
      goto L_08A98264;
    }
L_08A98264:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    goto L_08A98268;
L_08A98268:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A982B4;
      }
      goto L_08A98270;
    }
L_08A98270:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(6, 32768u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(7, ctx.gpr[3] - ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[7] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A982A8;
      }
      goto L_08A98294;
    }
L_08A98294:
    ctx.set_gpr(3, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A982A8;
      }
      goto L_08A982A4;
    }
L_08A982A4:
    ctx.set_gpr(8, 0u + 0u);
    goto L_08A982A8;
L_08A982A8:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A982B4;
      }
      goto L_08A982B0;
    }
L_08A982B0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A982B4;
L_08A982B4:
    if (ctx.gpr[4] == 0u) {
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
        goto L_08A98394;
    }
    goto L_08A982BC;
L_08A982BC:
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    goto L_08A982C0;
L_08A982C0:
    ctx.set_gpr(4, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[20] + ctx.gpr[4]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    ctx.set_gpr(8, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, 1u << 16u);
    ctx.set_gpr(6, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(88), ctx.gpr[7]);
    ctx.set_gpr(4, ctx.gpr[20] + ctx.gpr[4]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(8, 1u << 16u);
    ctx.set_gpr(6, ctx.gpr[20] + ctx.gpr[6]);
    ctx.set_gpr(9, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(4, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[20] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(84), ctx.gpr[7]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(7, 1u << 16u);
    ctx.set_gpr(8, ctx.gpr[20] + ctx.gpr[8]);
    ctx.set_gpr(10, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-8)));
    ctx.set_gpr(6, 1u << 16u);
    ctx.set_gpr(7, ctx.gpr[20] + ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(80), ctx.gpr[9]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(6, ctx.gpr[20] + ctx.gpr[6]);
    ctx.set_gpr(10, ctx.gpr[9] + ctx.gpr[3]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-12)));
    ctx.set_gpr(4, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[20] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(76), ctx.gpr[9]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(9, ctx.gpr[8] + ctx.gpr[3]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-16)));
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(72), ctx.gpr[8]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(8, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-20)));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(68), ctx.gpr[7]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(7, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-24)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(64), ctx.gpr[6]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(6, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-28)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-32));
    { const bool branch_taken = ctx.gpr[1] == 0u;
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A982C0;
      }
      goto L_08A98390;
    }
L_08A98390:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    goto L_08A98394;
L_08A98394:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A983C8;
      }
      goto L_08A9839C;
    }
L_08A9839C:
    ctx.set_gpr(4, ctx.gpr[5] << 2u);
    goto L_08A983A0;
L_08A983A0:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = ctx.gpr[1] == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A983A0;
      }
      goto L_08A983C8;
    }
L_08A983C8:
    ctx.set_gpr(2, 1u << 16u);
    goto L_08A983CC;
L_08A983CC:
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(22));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(112), ctx.gpr[3]);
    ctx.set_gpr(2, 1u << 16u);
    goto L_08A983E8;
L_08A983E8:
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(16, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08A9840Cu);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 150u, 0x08A94B5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9840Cu) goto L_08A9840C;
    return;
L_08A9840C:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(5, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(31));
    ctx.set_gpr(5, 1u << 16u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(88)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(14, 1u << 16u);
    ctx.set_gpr(2, 17530u << 16u);
    ctx.fpr[3] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_fpr_bits(2, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(88)));
    ctx.fpr[5] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 1u << 16u);
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.set_fpr_bits(1, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(5, ctx.gpr[20] + ctx.gpr[5]);
    ctx.set_gpr(4, 1u << 16u);
    ctx.set_gpr(6, ctx.gpr[16] + ctx.gpr[2]);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(7, std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(3, 1u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[16] + ctx.gpr[5]);
    ctx.set_fpr_bits(6, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, 1u << 16u);
    ctx.fpr[11] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[10] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[9] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[8] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[6]));
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(5, 0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.set_gpr(4, ctx.gpr[20] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_fpr_bits(5, ctx.fpu_float_to_word(ctx.fpr[5], 1u));
    ctx.fpr[7] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.fpr[6] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(13, 1u << 16u);
    ctx.set_gpr(12, 1u << 16u);
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(4, 0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[16] + ctx.gpr[4]);
    ctx.set_gpr(11, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[5]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.set_fpr_bits(14, ctx.fpu_float_to_word(ctx.fpr[4], 1u));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(88)));
    ctx.fpr[5] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(10, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(9, 1u << 16u);
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(14, ctx.gpr[20] + ctx.gpr[14]);
    ctx.set_gpr(13, ctx.gpr[20] + ctx.gpr[13]);
    ctx.set_gpr(8, 1u << 16u);
    ctx.set_fpr_bits(2, ctx.fpu_float_to_word(ctx.fpr[2], 1u));
    ctx.set_gpr(12, ctx.gpr[20] + ctx.gpr[12]);
    ctx.set_gpr(11, ctx.gpr[20] + ctx.gpr[11]);
    ctx.set_gpr(10, ctx.gpr[20] + ctx.gpr[10]);
    ctx.set_gpr(7, 1u << 16u);
    ctx.set_gpr(9, ctx.gpr[20] + ctx.gpr[9]);
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(8, ctx.gpr[20] + ctx.gpr[8]);
    ctx.set_gpr(7, ctx.gpr[20] + ctx.gpr[7]);
    ctx.set_gpr(6, 1u << 16u);
    ctx.set_gpr(6, ctx.gpr[20] + ctx.gpr[6]);
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(88)));
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(5, 1u << 16u);
    ctx.set_gpr(15, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[20] + ctx.gpr[5]);
    ctx.set_gpr(4, 1u << 16u);
    ctx.set_gpr(17, std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.set_fpr_bits(1, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(4, ctx.gpr[20] + ctx.gpr[4]);
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(14, ctx.gpr[16] + ctx.gpr[14]);
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[3]);
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_gpr(17, std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(88)));
    ctx.set_fpr_bits(13, ctx.fpu_float_to_word(ctx.fpr[13], 1u));
    ctx.set_gpr(14, ctx.gpr[16] + ctx.gpr[14]);
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_gpr(15, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(44), ctx.gpr[15]);
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(88)));
    ctx.set_fpr_bits(12, ctx.fpu_float_to_word(ctx.fpr[12], 1u));
    ctx.set_gpr(12, ctx.gpr[16] + ctx.gpr[12]);
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[11]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(11, 0x7FC00000u); else ctx.fpr[11] = fs * ft; }
    ctx.set_gpr(13, std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    rt.memory().aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(48), ctx.gpr[13]);
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(88)));
    ctx.set_fpr_bits(11, ctx.fpu_float_to_word(ctx.fpr[11], 1u));
    ctx.set_gpr(11, ctx.gpr[16] + ctx.gpr[11]);
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[10]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(10, 0x7FC00000u); else ctx.fpr[10] = fs * ft; }
    ctx.set_gpr(18, std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(88)));
    ctx.set_fpr_bits(10, ctx.fpu_float_to_word(ctx.fpr[10], 1u));
    ctx.set_gpr(10, ctx.gpr[16] + ctx.gpr[10]);
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[9]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(9, 0x7FC00000u); else ctx.fpr[9] = fs * ft; }
    ctx.set_gpr(15, std::bit_cast<std::uint32_t>(ctx.fpr[11]));
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(56), ctx.gpr[15]);
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(88)));
    ctx.set_fpr_bits(9, ctx.fpu_float_to_word(ctx.fpr[9], 1u));
    ctx.set_gpr(15, ctx.gpr[16] + ctx.gpr[15]);
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[8]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(8, 0x7FC00000u); else ctx.fpr[8] = fs * ft; }
    ctx.set_gpr(17, std::bit_cast<std::uint32_t>(ctx.fpr[10]));
    rt.memory().aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(88)));
    ctx.set_fpr_bits(8, ctx.fpu_float_to_word(ctx.fpr[8], 1u));
    ctx.set_gpr(8, ctx.gpr[16] + ctx.gpr[8]);
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[7]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(7, 0x7FC00000u); else ctx.fpr[7] = fs * ft; }
    ctx.set_gpr(14, std::bit_cast<std::uint32_t>(ctx.fpr[9]));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(64), ctx.gpr[14]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(88)));
    ctx.set_fpr_bits(7, ctx.fpu_float_to_word(ctx.fpr[7], 1u));
    ctx.set_gpr(7, ctx.gpr[16] + ctx.gpr[7]);
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(6, 0x7FC00000u); else ctx.fpr[6] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(5, 0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.set_gpr(13, std::bit_cast<std::uint32_t>(ctx.fpr[8]));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(68), ctx.gpr[13]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(88)));
    ctx.set_fpr_bits(6, ctx.fpu_float_to_word(ctx.fpr[6], 1u));
    ctx.set_gpr(6, ctx.gpr[16] + ctx.gpr[6]);
    ctx.set_gpr(12, std::bit_cast<std::uint32_t>(ctx.fpr[7]));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(72), ctx.gpr[12]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(88)));
    ctx.set_fpr_bits(4, ctx.fpu_float_to_word(ctx.fpr[5], 1u));
    ctx.set_gpr(5, ctx.gpr[16] + ctx.gpr[5]);
    ctx.set_gpr(11, std::bit_cast<std::uint32_t>(ctx.fpr[6]));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(76), ctx.gpr[11]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.set_fpr_bits(3, ctx.fpu_float_to_word(ctx.fpr[3], 1u));
    ctx.set_gpr(4, ctx.gpr[16] + ctx.gpr[4]);
    ctx.set_gpr(10, std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), ctx.gpr[10]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(9, std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(84), ctx.gpr[9]);
    goto L_08A986E8;
L_08A986E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A98708:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A98744u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    goto L_08A9BEE8;
L_08A98744:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A98758u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    goto L_08A9BFF0;
L_08A98758:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_08A9876C;
    }
    goto L_08A98764;
L_08A98764:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A989D4;
      }
      goto L_08A9876C;
    }
L_08A9876C:
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(3, ctx.gpr[20] << 2u);
    ctx.set_gpr(25, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(24, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(4, 14979u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | 4719u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_gpr(4, 1u << 16u);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(18, 1u << 16u);
    ctx.set_gpr(15, 1u << 16u);
    ctx.set_gpr(14, 1u << 16u);
    ctx.set_gpr(13, 1u << 16u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(12, 1u << 16u);
    ctx.set_gpr(11, 1u << 16u);
    ctx.set_gpr(10, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[19] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(9, 1u << 16u);
    ctx.set_gpr(8, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(7, 1u << 16u);
    ctx.set_gpr(6, 1u << 16u);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(5, 1u << 16u);
    ctx.set_gpr(4, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(25, ctx.gpr[19] + ctx.gpr[25]);
    ctx.set_gpr(24, ctx.gpr[19] + ctx.gpr[24]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(18, ctx.gpr[19] + ctx.gpr[18]);
    ctx.set_gpr(15, ctx.gpr[19] + ctx.gpr[15]);
    ctx.set_gpr(14, ctx.gpr[19] + ctx.gpr[14]);
    ctx.set_gpr(13, ctx.gpr[19] + ctx.gpr[13]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(12, ctx.gpr[19] + ctx.gpr[12]);
    ctx.set_gpr(11, ctx.gpr[19] + ctx.gpr[11]);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(10, ctx.gpr[19] + ctx.gpr[10]);
    ctx.set_gpr(9, ctx.gpr[19] + ctx.gpr[9]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(8, ctx.gpr[19] + ctx.gpr[8]);
    ctx.set_gpr(7, ctx.gpr[19] + ctx.gpr[7]);
    ctx.set_gpr(6, ctx.gpr[19] + ctx.gpr[6]);
    ctx.set_gpr(5, ctx.gpr[19] + ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[19] + ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(19, ctx.gpr[3] + ctx.gpr[19]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(19, ctx.gpr[3] + ctx.gpr[19]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(18, ctx.gpr[3] + ctx.gpr[18]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(15, ctx.gpr[3] + ctx.gpr[15]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(40)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(14, ctx.gpr[3] + ctx.gpr[14]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(44)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(13, ctx.gpr[3] + ctx.gpr[13]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(48)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(12, ctx.gpr[3] + ctx.gpr[12]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(52)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(11, ctx.gpr[3] + ctx.gpr[11]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(56)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(10, ctx.gpr[3] + ctx.gpr[10]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(60)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(9, ctx.gpr[3] + ctx.gpr[9]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(64)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(8, ctx.gpr[3] + ctx.gpr[8]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(68)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(7, ctx.gpr[3] + ctx.gpr[7]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(72)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[6]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(76)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(80)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(84)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A989D4;
L_08A989D4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A989F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A98A30u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    goto L_08A9BEE8;
L_08A98A30:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A98A44u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    goto L_08A9BFF0;
L_08A98A44:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A98CC0;
      }
      goto L_08A98A54;
    }
L_08A98A54:
    ctx.set_gpr(4, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[19] + ctx.gpr[4]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(3, ctx.gpr[20] << 2u);
    ctx.set_gpr(25, 1u << 16u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, 1u << 16u);
    ctx.set_gpr(24, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.set_gpr(4, ctx.gpr[19] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(5, 14979u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] | 4719u);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_gpr(5, 1u << 16u);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(4, 1u << 16u);
    ctx.set_gpr(18, 1u << 16u);
    ctx.set_gpr(15, 1u << 16u);
    ctx.set_gpr(14, 1u << 16u);
    ctx.set_gpr(13, 1u << 16u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(12, 1u << 16u);
    ctx.set_gpr(11, 1u << 16u);
    ctx.set_gpr(10, 1u << 16u);
    ctx.set_gpr(5, ctx.gpr[19] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(9, 1u << 16u);
    ctx.set_gpr(8, 1u << 16u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(7, 1u << 16u);
    ctx.set_gpr(6, 1u << 16u);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(5, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[19] + ctx.gpr[4]);
    ctx.set_gpr(25, ctx.gpr[19] + ctx.gpr[25]);
    ctx.set_gpr(24, ctx.gpr[19] + ctx.gpr[24]);
    ctx.set_gpr(18, ctx.gpr[19] + ctx.gpr[18]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(15, ctx.gpr[19] + ctx.gpr[15]);
    ctx.set_gpr(14, ctx.gpr[19] + ctx.gpr[14]);
    ctx.set_gpr(13, ctx.gpr[19] + ctx.gpr[13]);
    ctx.set_gpr(12, ctx.gpr[19] + ctx.gpr[12]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(11, ctx.gpr[19] + ctx.gpr[11]);
    ctx.set_gpr(10, ctx.gpr[19] + ctx.gpr[10]);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(9, ctx.gpr[19] + ctx.gpr[9]);
    ctx.set_gpr(8, ctx.gpr[19] + ctx.gpr[8]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(4, 1u << 16u);
    ctx.set_gpr(7, ctx.gpr[19] + ctx.gpr[7]);
    ctx.set_gpr(6, ctx.gpr[19] + ctx.gpr[6]);
    ctx.set_gpr(5, ctx.gpr[19] + ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[19] + ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(19, ctx.gpr[3] + ctx.gpr[19]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(19, ctx.gpr[3] + ctx.gpr[19]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(18, ctx.gpr[3] + ctx.gpr[18]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(15, ctx.gpr[3] + ctx.gpr[15]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(40)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(14, ctx.gpr[3] + ctx.gpr[14]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(44)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(13, ctx.gpr[3] + ctx.gpr[13]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(48)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(12, ctx.gpr[3] + ctx.gpr[12]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(52)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(11, ctx.gpr[3] + ctx.gpr[11]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(56)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(10, ctx.gpr[3] + ctx.gpr[10]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(60)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(9, ctx.gpr[3] + ctx.gpr[9]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(64)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(8, ctx.gpr[3] + ctx.gpr[8]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(68)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(7, ctx.gpr[3] + ctx.gpr[7]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(72)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[6]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(76)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(80)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(84)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08A98F30;
      }
      goto L_08A98CC0;
    }
L_08A98CC0:
    if (ctx.gpr[20] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08A98F30;
    }
    goto L_08A98CC8;
L_08A98CC8:
    ctx.set_gpr(4, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[19] + ctx.gpr[4]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(3, ctx.gpr[20] << 2u);
    ctx.set_gpr(25, 1u << 16u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-76)));
    ctx.set_gpr(4, 1u << 16u);
    ctx.set_gpr(24, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.set_gpr(4, ctx.gpr[19] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(5, 14979u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] | 4719u);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-72)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_gpr(5, 1u << 16u);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(4, 1u << 16u);
    ctx.set_gpr(18, 1u << 16u);
    ctx.set_gpr(15, 1u << 16u);
    ctx.set_gpr(14, 1u << 16u);
    ctx.set_gpr(13, 1u << 16u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(12, 1u << 16u);
    ctx.set_gpr(11, 1u << 16u);
    ctx.set_gpr(10, 1u << 16u);
    ctx.set_gpr(5, ctx.gpr[19] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(9, 1u << 16u);
    ctx.set_gpr(8, 1u << 16u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-68)));
    ctx.set_gpr(7, 1u << 16u);
    ctx.set_gpr(6, 1u << 16u);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(5, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[19] + ctx.gpr[4]);
    ctx.set_gpr(25, ctx.gpr[19] + ctx.gpr[25]);
    ctx.set_gpr(24, ctx.gpr[19] + ctx.gpr[24]);
    ctx.set_gpr(18, ctx.gpr[19] + ctx.gpr[18]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(15, ctx.gpr[19] + ctx.gpr[15]);
    ctx.set_gpr(14, ctx.gpr[19] + ctx.gpr[14]);
    ctx.set_gpr(13, ctx.gpr[19] + ctx.gpr[13]);
    ctx.set_gpr(12, ctx.gpr[19] + ctx.gpr[12]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(11, ctx.gpr[19] + ctx.gpr[11]);
    ctx.set_gpr(10, ctx.gpr[19] + ctx.gpr[10]);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-64)));
    ctx.set_gpr(9, ctx.gpr[19] + ctx.gpr[9]);
    ctx.set_gpr(8, ctx.gpr[19] + ctx.gpr[8]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(4, 1u << 16u);
    ctx.set_gpr(7, ctx.gpr[19] + ctx.gpr[7]);
    ctx.set_gpr(6, ctx.gpr[19] + ctx.gpr[6]);
    ctx.set_gpr(5, ctx.gpr[19] + ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[19] + ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(19, ctx.gpr[3] + ctx.gpr[19]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-60)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(19, ctx.gpr[3] + ctx.gpr[19]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-56)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(18, ctx.gpr[3] + ctx.gpr[18]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-52)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(15, ctx.gpr[3] + ctx.gpr[15]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(-48)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(14, ctx.gpr[3] + ctx.gpr[14]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(-44)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(13, ctx.gpr[3] + ctx.gpr[13]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(-40)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(12, ctx.gpr[3] + ctx.gpr[12]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(-36)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(11, ctx.gpr[3] + ctx.gpr[11]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-32)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(10, ctx.gpr[3] + ctx.gpr[10]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-28)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(9, ctx.gpr[3] + ctx.gpr[9]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-24)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(8, ctx.gpr[3] + ctx.gpr[8]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-20)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(7, ctx.gpr[3] + ctx.gpr[7]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-16)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[6]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-12)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A98F30;
L_08A98F30:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A98F50:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08A98F74u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    goto L_08A9BEE8;
L_08A98F74:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A98F88u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    goto L_08A9BFF0;
L_08A98F88:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_08A98F9C;
    }
    goto L_08A98F94;
L_08A98F94:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A99020;
      }
      goto L_08A98F9C;
    }
L_08A98F9C:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-22));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        goto L_08A98FF4;
    }
    goto L_08A98FB4;
L_08A98FB4:
    ctx.set_gpr(5, ctx.gpr[16] << 2u);
    goto L_08A98FB8;
L_08A98FB8:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-22));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A98FB8;
      }
      goto L_08A98FF0;
    }
L_08A98FF0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08A98FF4;
L_08A98FF4:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A99000u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 11u, 0x08A9C0B0u>(ctx, &aot_mem) && ctx.pc == 0x08A99000u) goto L_08A99000;
    return;
L_08A99000:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-22));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(112), ctx.gpr[3]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08A99020;
L_08A99020:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A99034:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(2, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08A99064;
      }
      goto L_08A9905C;
    }
L_08A9905C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A99114;
      }
      goto L_08A99064;
    }
L_08A99064:
    ctx.set_gpr(31, 0x08A9906Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 150u, 0x08A94B5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9906Cu) goto L_08A9906C;
    return;
L_08A9906C:
    ctx.set_gpr(4, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    ctx.set_gpr(5, 0u + 0u);
      if (branch_taken) {
          goto L_08A99110;
      }
      goto L_08A99084;
    }
L_08A99084:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(7, 2226u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(16496));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[5] << 2u);
    goto L_08A990A0;
L_08A990A0:
    ctx.set_gpr(10, ctx.gpr[11] + ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[6] != ctx.gpr[2]) {
    ctx.set_gpr(6, ctx.gpr[6] << 2u);
        goto L_08A990F4;
    }
    goto L_08A990B0;
L_08A990B0:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(8, ctx.gpr[9] + ctx.gpr[8]);
      if (branch_taken) {
          goto L_08A990D8;
      }
      goto L_08A990C4;
    }
L_08A990C4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
        goto L_08A990DC;
    }
    goto L_08A990D0;
L_08A990D0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08A99118;
      }
      goto L_08A990D8;
    }
L_08A990D8:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    goto L_08A990DC;
L_08A990DC:
    ctx.set_gpr(6, ctx.gpr[6] << 2u);
    ctx.set_gpr(6, ctx.gpr[7] + ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A99104;
      }
      goto L_08A990F4;
    }
L_08A990F4:
    ctx.set_gpr(6, ctx.gpr[7] + ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08A99104;
L_08A99104:
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.set_gpr(6, ctx.gpr[5] << 2u);
        goto L_08A990A0;
    }
    goto L_08A99110;
L_08A99110:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A99114;
L_08A99114:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08A99118;
L_08A99118:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A99128:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A99150u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 96u, 0x08A946D4u>(ctx, &aot_mem) && ctx.pc == 0x08A99150u) goto L_08A99150;
    return;
L_08A99150:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 5 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
        goto L_08A99164;
    }
    goto L_08A9915C;
L_08A9915C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A994A0;
      }
      goto L_08A99164;
    }
L_08A99164:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A99174u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    goto L_08A9BEE8;
L_08A99174:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A99188u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    goto L_08A9BFF0;
L_08A99188:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_08A9941C;
    }
    goto L_08A99194;
L_08A99194:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A991A4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 11u, 0x08A9C0B0u>(ctx, &aot_mem) && ctx.pc == 0x08A991A4u) goto L_08A991A4;
    return;
L_08A991A4:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_08A99400;
    }
    goto L_08A991C0;
L_08A991C0:
    ctx.set_gpr(3, ctx.gpr[5] - ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A993C4;
      }
      goto L_08A991D4;
    }
L_08A991D4:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(7, 0u + 0u);
      if (branch_taken) {
          goto L_08A99204;
      }
      goto L_08A991EC;
    }
L_08A991EC:
    ctx.set_gpr(6, 32768u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] | 1u);
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99204;
      }
      goto L_08A99200;
    }
L_08A99200:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    goto L_08A99204;
L_08A99204:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A99234;
      }
      goto L_08A9920C;
    }
L_08A9920C:
    ctx.set_gpr(6, 1u << 16u);
    ctx.set_gpr(6, ctx.gpr[19] + ctx.gpr[6]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(6, 32768u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] | 1u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99234;
      }
      goto L_08A99230;
    }
L_08A99230:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    goto L_08A99234;
L_08A99234:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9924C;
      }
      goto L_08A9923C;
    }
L_08A9923C:
    ctx.set_gpr(6, 32768u << 16u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A9924C;
      }
      goto L_08A99248;
    }
L_08A99248:
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    goto L_08A9924C;
L_08A9924C:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9929C;
      }
      goto L_08A99254;
    }
L_08A99254:
    ctx.set_gpr(6, 1u << 16u);
    ctx.set_gpr(6, ctx.gpr[19] + ctx.gpr[6]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(8, 32768u << 16u);
    ctx.set_gpr(6, 0u - ctx.gpr[16]);
    ctx.set_gpr(9, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, ctx.gpr[6] & ctx.gpr[8]);
    ctx.set_gpr(7, ctx.gpr[9] & ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A99290;
      }
      goto L_08A9927C;
    }
L_08A9927C:
    ctx.set_gpr(6, ctx.gpr[9] - ctx.gpr[16]);
    ctx.set_gpr(6, ctx.gpr[6] & ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A99290;
      }
      goto L_08A9928C;
    }
L_08A9928C:
    ctx.set_gpr(10, 0u + 0u);
    goto L_08A99290;
L_08A99290:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9929C;
      }
      goto L_08A99298;
    }
L_08A99298:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    goto L_08A9929C;
L_08A9929C:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A992E8;
      }
      goto L_08A992A4;
    }
L_08A992A4:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(6, 32768u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(7, ctx.gpr[3] - ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[7] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A992DC;
      }
      goto L_08A992C8;
    }
L_08A992C8:
    ctx.set_gpr(3, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A992DC;
      }
      goto L_08A992D8;
    }
L_08A992D8:
    ctx.set_gpr(8, 0u + 0u);
    goto L_08A992DC;
L_08A992DC:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A992E8;
      }
      goto L_08A992E4;
    }
L_08A992E4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_08A992E8;
L_08A992E8:
    if (ctx.gpr[4] == 0u) {
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
        goto L_08A993C8;
    }
    goto L_08A992F0;
L_08A992F0:
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    goto L_08A992F4;
L_08A992F4:
    ctx.set_gpr(4, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[19] + ctx.gpr[4]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    ctx.set_gpr(8, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, 1u << 16u);
    ctx.set_gpr(6, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.set_gpr(4, ctx.gpr[19] + ctx.gpr[4]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(8, 1u << 16u);
    ctx.set_gpr(6, ctx.gpr[19] + ctx.gpr[6]);
    ctx.set_gpr(9, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(4, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[19] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(7, 1u << 16u);
    ctx.set_gpr(8, ctx.gpr[19] + ctx.gpr[8]);
    ctx.set_gpr(10, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-8)));
    ctx.set_gpr(6, 1u << 16u);
    ctx.set_gpr(7, ctx.gpr[19] + ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(12), ctx.gpr[9]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(6, ctx.gpr[19] + ctx.gpr[6]);
    ctx.set_gpr(10, ctx.gpr[9] + ctx.gpr[3]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-12)));
    ctx.set_gpr(4, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[19] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(9, ctx.gpr[8] + ctx.gpr[3]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-16)));
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(8, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-20)));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(7, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-24)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-4), ctx.gpr[6]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(6, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-28)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-32));
    { const bool branch_taken = ctx.gpr[1] == 0u;
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A992F4;
      }
      goto L_08A993C4;
    }
L_08A993C4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    goto L_08A993C8;
L_08A993C8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A993FC;
      }
      goto L_08A993D0;
    }
L_08A993D0:
    ctx.set_gpr(4, ctx.gpr[5] << 2u);
    goto L_08A993D4;
L_08A993D4:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = ctx.gpr[1] == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A993D4;
      }
      goto L_08A993FC;
    }
L_08A993FC:
    ctx.set_gpr(2, 1u << 16u);
    goto L_08A99400;
L_08A99400:
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(5));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(116), ctx.gpr[3]);
    ctx.set_gpr(2, 1u << 16u);
    goto L_08A9941C;
L_08A9941C:
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(16, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x08A99440u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 150u, 0x08A94B5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A99440u) goto L_08A99440;
    return;
L_08A99440:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(5, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(30));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    goto L_08A994A0;
L_08A994A0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A994BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08A994F0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    goto L_08A9BEE8;
L_08A994F0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A99504u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    goto L_08A9BFF0;
L_08A99504:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99518;
      }
      goto L_08A99510;
    }
L_08A99510:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A99564;
      }
      goto L_08A99518;
    }
L_08A99518:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9953C;
      }
      goto L_08A99520;
    }
L_08A99520:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08A9953C;
L_08A9953C:
    if (ctx.gpr[17] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08A99564;
    }
    goto L_08A99544;
L_08A99544:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08A99564;
L_08A99564:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A99580:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08A995B4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    goto L_08A9BEE8;
L_08A995B4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A995C8u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    goto L_08A9BFF0;
L_08A995C8:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A9962C;
      }
      goto L_08A995D8;
    }
L_08A995D8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A995FC;
      }
      goto L_08A995E0;
    }
L_08A995E0:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08A995FC;
L_08A995FC:
    if (ctx.gpr[17] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08A99680;
    }
    goto L_08A99604;
L_08A99604:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A99680;
      }
      goto L_08A9962C;
    }
L_08A9962C:
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08A99680;
    }
    goto L_08A99634;
L_08A99634:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A99658;
      }
      goto L_08A9963C;
    }
L_08A9963C:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-8)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08A99658;
L_08A99658:
    if (ctx.gpr[17] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08A99680;
    }
    goto L_08A99660;
L_08A99660:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-4)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08A99680;
L_08A99680:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9969C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08A996C0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    goto L_08A9BEE8;
L_08A996C0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A996D4u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    goto L_08A9BFF0;
L_08A996D4:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_08A996E8;
    }
    goto L_08A996E0;
L_08A996E0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A9976C;
      }
      goto L_08A996E8;
    }
L_08A996E8:
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        goto L_08A99740;
    }
    goto L_08A99700;
L_08A99700:
    ctx.set_gpr(5, ctx.gpr[16] << 2u);
    goto L_08A99704;
L_08A99704:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A99704;
      }
      goto L_08A9973C;
    }
L_08A9973C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08A99740;
L_08A99740:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A9974Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 11u, 0x08A9C0B0u>(ctx, &aot_mem) && ctx.pc == 0x08A9974Cu) goto L_08A9974C;
    return;
L_08A9974C:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-5));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(116), ctx.gpr[3]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08A9976C;
L_08A9976C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A99780:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 200 ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08A99800;
      }
      goto L_08A997A8;
    }
L_08A997A8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_08A997AC;
L_08A997AC:
    ctx.set_gpr(31, 0x08A997B4u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08A997B4u) goto L_08A997B4;
    return;
L_08A997B4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A997C0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08A997C0u) goto L_08A997C0;
    return;
L_08A997C0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_08A997F0;
      }
      goto L_08A997CC;
    }
L_08A997CC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    goto L_08A997D0;
L_08A997D0:
    ctx.set_gpr(31, 0x08A997D8u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08A997D8u) goto L_08A997D8;
    return;
L_08A997D8:
    ctx.set_gpr(31, 0x08A997E0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 546u, 0x08A96998u>(ctx, &aot_mem) && ctx.pc == 0x08A997E0u) goto L_08A997E0;
    return;
L_08A997E0:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
        goto L_08A997D0;
    }
    goto L_08A997F0;
L_08A997F0:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < 200 ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
        goto L_08A997AC;
    }
    goto L_08A99800;
L_08A99800:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9981C:
    ctx.set_gpr(1, 65534u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 34976u);
    ctx.set_gpr(29, ctx.gpr[29] + ctx.gpr[1]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.set_gpr(2, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3348)));
    ctx.set_gpr(31, 0x08A99864u);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 150u, 0x08A94B5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A99864u) goto L_08A99864;
    return;
L_08A99864:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 30536u);
    ctx.set_gpr(30, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, ctx.gpr[29] + ctx.gpr[1]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08A9988C;
      }
      goto L_08A9987C;
    }
L_08A9987C:
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A9987C;
      }
      goto L_08A9988C;
    }
L_08A9988C:
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(32072));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(32000));
      if (branch_taken) {
          goto L_08A998A8;
      }
      goto L_08A99898;
    }
L_08A99898:
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A99898;
      }
      goto L_08A998A8;
    }
L_08A998A8:
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(32000));
      if (branch_taken) {
          goto L_08A998C4;
      }
      goto L_08A998B4;
    }
L_08A998B4:
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A998B4;
      }
      goto L_08A998C4;
    }
L_08A998C4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(31312));
    ctx.set_gpr(5, ctx.gpr[21] + static_cast<std::uint32_t>(852));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(32000));
    ctx.set_gpr(31, 0x08A998E0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08A998E0u) goto L_08A998E0;
    return;
L_08A998E0:
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(23, 0u + 0u);
    ctx.set_gpr(22, 0u + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[30]) <= 0;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_08A9A1AC;
      }
      goto L_08A998F8;
    }
L_08A998F8:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.set_gpr(20, 0u + 0u);
      if (branch_taken) {
          goto L_08A99A0C;
      }
      goto L_08A99900;
    }
L_08A99900:
    ctx.set_gpr(2, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(32072));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 148u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(28));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + ctx.gpr[1]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A99938u);
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 853u, 0x08A8AE30u>(ctx, &aot_mem) && ctx.pc == 0x08A99938u) goto L_08A99938;
    return;
L_08A99938:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 1748u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + ctx.gpr[1]);
    ctx.set_gpr(31, 0x08A99950u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 853u, 0x08A8AE30u>(ctx, &aot_mem) && ctx.pc == 0x08A99950u) goto L_08A99950;
    return;
L_08A99950:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 17530u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1556)));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(20));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1560)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1564)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1568)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1572)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1576)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    goto L_08A99A0C;
L_08A99A0C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    if (static_cast<std::int32_t>(ctx.gpr[2]) < 0) {
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
        goto L_08A99A70;
    }
    goto L_08A99A18;
L_08A99A18:
    ctx.set_gpr(31, 0x08A99A20u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 27u, 0x08864218u>(ctx, &aot_mem) && ctx.pc == 0x08A99A20u) goto L_08A99A20;
    return;
L_08A99A20:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    if (ctx.gpr[17] != ctx.gpr[2]) {
    ctx.set_gpr(1, 1u << 16u);
        goto L_08A99AD8;
    }
    goto L_08A99A2C;
L_08A99A2C:
    ctx.set_gpr(2, ctx.gpr[20] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, ctx.gpr[19] << 2u);
        goto L_08A99A5C;
    }
    goto L_08A99A38;
L_08A99A38:
    ctx.set_gpr(2, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(32072));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[19] << 2u);
    goto L_08A99A5C;
L_08A99A5C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(25));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(32072), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A99AD4;
      }
      goto L_08A99A70;
    }
L_08A99A70:
    ctx.set_gpr(31, 0x08A99A78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 312u, 0x08855740u>(ctx, &aot_mem) && ctx.pc == 0x08A99A78u) goto L_08A99A78;
    return;
L_08A99A78:
    ctx.fpr[1] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) || ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A99AD4;
      }
      goto L_08A99A8C;
    }
L_08A99A8C:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99AD4;
      }
      goto L_08A99A94;
    }
L_08A99A94:
    ctx.set_gpr(2, ctx.gpr[20] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, ctx.gpr[19] << 2u);
        goto L_08A99AC4;
    }
    goto L_08A99AA0;
L_08A99AA0:
    ctx.set_gpr(2, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(32072));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[19] << 2u);
    goto L_08A99AC4;
L_08A99AC4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(25));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(32072), ctx.gpr[3]);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A99AD4;
L_08A99AD4:
    ctx.set_gpr(1, 1u << 16u);
    goto L_08A99AD8;
L_08A99AD8:
    ctx.set_gpr(1, ctx.gpr[1] | 30536u);
    ctx.set_gpr(11, ctx.gpr[29] + ctx.gpr[1]);
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 100u);
    ctx.set_gpr(10, ctx.gpr[21] + ctx.gpr[1]);
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 76u);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(13, 0u + 0u);
    ctx.set_gpr(9, ctx.gpr[21] + ctx.gpr[1]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(8000));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(16496));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08A99B14;
L_08A99B14:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(1));
        goto L_08A99C5C;
    }
    goto L_08A99B28;
L_08A99B28:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, ctx.gpr[8] << 2u);
    ctx.set_gpr(8, ctx.gpr[2] + ctx.gpr[8]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A99C58;
      }
      goto L_08A99B40;
    }
L_08A99B40:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A99C58;
      }
      goto L_08A99B4C;
    }
L_08A99B4C:
    if (ctx.gpr[17] != 0u) {
    ctx.set_gpr(2, ctx.gpr[20] & 255u);
        goto L_08A99B68;
    }
    goto L_08A99B54;
L_08A99B54:
    { const bool branch_taken = ctx.gpr[13] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A99B64;
      }
      goto L_08A99B5C;
    }
L_08A99B5C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(22, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08A99C58;
      }
      goto L_08A99B64;
    }
L_08A99B64:
    ctx.set_gpr(2, ctx.gpr[20] & 255u);
    goto L_08A99B68;
L_08A99B68:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
        goto L_08A99BAC;
    }
    goto L_08A99B70;
L_08A99B70:
    ctx.set_gpr(2, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(8, ctx.gpr[2] + static_cast<std::uint32_t>(32072));
    ctx.set_gpr(2, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
      if (branch_taken) {
          goto L_08A99B90;
      }
      goto L_08A99B88;
    }
L_08A99B88:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A9A640;
      }
      goto L_08A99B90;
    }
L_08A99B90:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A99BA4;
      }
      goto L_08A99B9C;
    }
L_08A99B9C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A9A640;
      }
      goto L_08A99BA4;
    }
L_08A99BA4:
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    goto L_08A99BAC;
L_08A99BAC:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[8] + ctx.gpr[2]);
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[12]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99C58;
      }
      goto L_08A99BD0;
    }
L_08A99BD0:
    ctx.set_gpr(2, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(8, ctx.gpr[2] + static_cast<std::uint32_t>(32072));
    ctx.set_gpr(2, ctx.gpr[12] << 2u);
    goto L_08A99BE0;
L_08A99BE0:
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(12, 0u + 0u);
      if (branch_taken) {
          goto L_08A99C38;
      }
      goto L_08A99BF4;
    }
L_08A99BF4:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    goto L_08A99BF8;
L_08A99BF8:
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(15, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(0), ctx.gpr[15]);
    ctx.set_gpr(15, ctx.gpr[16] << 2u);
    ctx.set_gpr(14, ctx.gpr[14] + ctx.gpr[15]);
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[14]);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A99C28;
      }
      goto L_08A99C20;
    }
L_08A99C20:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A9A640;
      }
      goto L_08A99C28;
    }
L_08A99C28:
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(14, static_cast<std::int32_t>(ctx.gpr[12]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[14] != 0u) {
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
        goto L_08A99BF8;
    }
    goto L_08A99C38;
L_08A99C38:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[12] + ctx.gpr[2]);
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[12]) < 2 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, ctx.gpr[12] << 2u);
        goto L_08A99BE0;
    }
    goto L_08A99C58;
L_08A99C58:
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(1));
    goto L_08A99C5C;
L_08A99C5C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[13]) < 5 ? 1u : 0u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A99B14;
      }
      goto L_08A99C70;
    }
L_08A99C70:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[29] + ctx.gpr[1]);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(30556)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A99DFC;
      }
      goto L_08A99C94;
    }
L_08A99C94:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A99DFC;
      }
      goto L_08A99CB8;
    }
L_08A99CB8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A99DFC;
      }
      goto L_08A99CC4;
    }
L_08A99CC4:
    if (ctx.gpr[17] != 0u) {
    ctx.set_gpr(2, ctx.gpr[18] << 2u);
        goto L_08A99CD4;
    }
    goto L_08A99CCC;
L_08A99CCC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(23, ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A99DFC;
      }
      goto L_08A99CD4;
    }
L_08A99CD4:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(72));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(8000));
    if (ctx.gpr[2] != ctx.gpr[4]) {
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(2));
        goto L_08A99CF8;
    }
    goto L_08A99CF0;
L_08A99CF0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A9A640;
      }
      goto L_08A99CF8;
    }
L_08A99CF8:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A99D08;
      }
      goto L_08A99D00;
    }
L_08A99D00:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A9A640;
      }
      goto L_08A99D08;
    }
L_08A99D08:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(1, ctx.gpr[29] + ctx.gpr[1]);
    rt.memory().aot_store32(ctx.gpr[1] + static_cast<std::uint32_t>(30556), ctx.gpr[2]);
    ctx.set_gpr(8, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[8]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A99DFC;
      }
      goto L_08A99D3C;
    }
L_08A99D3C:
    ctx.set_gpr(2, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 96u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[21] + ctx.gpr[1]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(16496));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    goto L_08A99D60;
L_08A99D60:
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[8]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[7] << 2u);
    ctx.set_gpr(7, ctx.gpr[2] + ctx.gpr[7]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[10]) <= 0;
    ctx.set_gpr(6, 0u + 0u);
      if (branch_taken) {
          goto L_08A99DD4;
      }
      goto L_08A99D80;
    }
L_08A99D80:
    ctx.set_gpr(1, 1u << 16u);
    goto L_08A99D84;
L_08A99D84:
    ctx.set_gpr(1, ctx.gpr[29] + ctx.gpr[1]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(30556)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(8, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, ctx.gpr[29] + ctx.gpr[1]);
    rt.memory().aot_store32(ctx.gpr[1] + static_cast<std::uint32_t>(30556), ctx.gpr[8]);
    ctx.set_gpr(8, ctx.gpr[9] << 2u);
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[8]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A99DC4;
      }
      goto L_08A99DBC;
    }
L_08A99DBC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A9A640;
      }
      goto L_08A99DC4;
    }
L_08A99DC4:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.set_gpr(1, 1u << 16u);
        goto L_08A99D84;
    }
    goto L_08A99DD4;
L_08A99DD4:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[29] + ctx.gpr[1]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(30556)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, ctx.gpr[7] << 2u);
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[8]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
        goto L_08A99D60;
    }
    goto L_08A99DFC;
L_08A99DFC:
    if (ctx.gpr[17] != 0u) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
        goto L_08A9A110;
    }
    goto L_08A99E04;
L_08A99E04:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A03C;
      }
      goto L_08A99E0C;
    }
L_08A99E0C:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[29] + ctx.gpr[1]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(30544)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(1, ctx.gpr[29] + ctx.gpr[1]);
    rt.memory().aot_store32(ctx.gpr[1] + static_cast<std::uint32_t>(30544), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(16496));
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) <= 0;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A99ED0;
      }
      goto L_08A99E60;
    }
L_08A99E60:
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[29]);
    ctx.set_gpr(1, ctx.gpr[1] | 84u);
    ctx.set_gpr(9, ctx.gpr[3] + static_cast<std::uint32_t>(32072));
    ctx.set_gpr(7, ctx.gpr[21] + ctx.gpr[1]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(8000));
    ctx.set_gpr(1, 1u << 16u);
    goto L_08A99E80;
L_08A99E80:
    ctx.set_gpr(1, ctx.gpr[29] + ctx.gpr[1]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(30544)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(5, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, ctx.gpr[29] + ctx.gpr[1]);
    rt.memory().aot_store32(ctx.gpr[1] + static_cast<std::uint32_t>(30544), ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A99EC0;
      }
      goto L_08A99EB8;
    }
L_08A99EB8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A9A640;
      }
      goto L_08A99EC0;
    }
L_08A99EC0:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(1, 1u << 16u);
        goto L_08A99E80;
    }
    goto L_08A99ED0;
L_08A99ED0:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[29] + ctx.gpr[1]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(30544)));
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(5, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(16496));
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) <= 0;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A99F84;
      }
      goto L_08A99F14;
    }
L_08A99F14:
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[29]);
    ctx.set_gpr(1, ctx.gpr[1] | 84u);
    ctx.set_gpr(9, ctx.gpr[3] + static_cast<std::uint32_t>(32072));
    ctx.set_gpr(7, ctx.gpr[21] + ctx.gpr[1]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(8000));
    ctx.set_gpr(1, 1u << 16u);
    goto L_08A99F34;
L_08A99F34:
    ctx.set_gpr(1, ctx.gpr[29] + ctx.gpr[1]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(30544)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(5, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, ctx.gpr[29] + ctx.gpr[1]);
    rt.memory().aot_store32(ctx.gpr[1] + static_cast<std::uint32_t>(30544), ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A99F74;
      }
      goto L_08A99F6C;
    }
L_08A99F6C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A9A640;
      }
      goto L_08A99F74;
    }
L_08A99F74:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(1, 1u << 16u);
        goto L_08A99F34;
    }
    goto L_08A99F84;
L_08A99F84:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[29] + ctx.gpr[1]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(30544)));
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(5, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(16496));
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) <= 0;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A9A038;
      }
      goto L_08A99FC8;
    }
L_08A99FC8:
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[29]);
    ctx.set_gpr(1, ctx.gpr[1] | 84u);
    ctx.set_gpr(9, ctx.gpr[3] + static_cast<std::uint32_t>(32072));
    ctx.set_gpr(7, ctx.gpr[21] + ctx.gpr[1]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(8000));
    ctx.set_gpr(1, 1u << 16u);
    goto L_08A99FE8;
L_08A99FE8:
    ctx.set_gpr(1, ctx.gpr[29] + ctx.gpr[1]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(30544)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(5, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, ctx.gpr[29] + ctx.gpr[1]);
    rt.memory().aot_store32(ctx.gpr[1] + static_cast<std::uint32_t>(30544), ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A9A028;
      }
      goto L_08A9A020;
    }
L_08A9A020:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A9A640;
      }
      goto L_08A9A028;
    }
L_08A9A028:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(1, 1u << 16u);
        goto L_08A99FE8;
    }
    goto L_08A9A038;
L_08A9A038:
    ctx.set_gpr(22, 0u + 0u);
    goto L_08A9A03C;
L_08A9A03C:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A10C;
      }
      goto L_08A9A044;
    }
L_08A9A044:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[29] + ctx.gpr[1]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(30556)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(1, ctx.gpr[29] + ctx.gpr[1]);
    rt.memory().aot_store32(ctx.gpr[1] + static_cast<std::uint32_t>(30556), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(16496));
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) <= 0;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A9A108;
      }
      goto L_08A9A098;
    }
L_08A9A098:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[29]);
    ctx.set_gpr(1, ctx.gpr[1] | 96u);
    ctx.set_gpr(9, ctx.gpr[3] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(7, ctx.gpr[21] + ctx.gpr[1]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(8000));
    ctx.set_gpr(1, 1u << 16u);
    goto L_08A9A0B8;
L_08A9A0B8:
    ctx.set_gpr(1, ctx.gpr[29] + ctx.gpr[1]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(30556)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(5, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, ctx.gpr[29] + ctx.gpr[1]);
    rt.memory().aot_store32(ctx.gpr[1] + static_cast<std::uint32_t>(30556), ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A9A0F8;
      }
      goto L_08A9A0F0;
    }
L_08A9A0F0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A9A640;
      }
      goto L_08A9A0F8;
    }
L_08A9A0F8:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(1, 1u << 16u);
        goto L_08A9A0B8;
    }
    goto L_08A9A108;
L_08A9A108:
    ctx.set_gpr(23, 0u + 0u);
    goto L_08A9A10C;
L_08A9A10C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    goto L_08A9A110;
L_08A9A110:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08A9A1A0;
    }
    goto L_08A9A11C;
L_08A9A11C:
    ctx.set_gpr(31, 0x08A9A124u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 312u, 0x08855740u>(ctx, &aot_mem) && ctx.pc == 0x08A9A124u) goto L_08A9A124;
    return;
L_08A9A124:
    ctx.fpr[1] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A9A19C;
      }
      goto L_08A9A138;
    }
L_08A9A138:
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08A9A158u);
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 135u, 0x08A949D4u>(ctx, &aot_mem) && ctx.pc == 0x08A9A158u) goto L_08A9A158;
    return;
L_08A9A158:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(31, 0x08A9A164u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 150u, 0x08A94B5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9A164u) goto L_08A9A164;
    return;
L_08A9A164:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A9A19C;
      }
      goto L_08A9A174;
    }
L_08A9A174:
    ctx.set_gpr(2, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(32072));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(25));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(3));
    goto L_08A9A19C;
L_08A9A19C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A9A1A0;
L_08A9A1A0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A998F8;
      }
      goto L_08A9A1AC;
    }
L_08A9A1AC:
    ctx.set_gpr(2, ctx.gpr[19] << 2u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(32072), ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(32072), ctx.gpr[30]);
    ctx.set_gpr(2, ctx.gpr[19] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(32072), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[19] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(32072), 0u);
    ctx.set_gpr(2, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(72), ctx.gpr[30]);
    ctx.set_gpr(2, ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(72), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[18] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(72), 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A9A238u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32072));
    goto L_08A9BD1C;
L_08A9A238:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A9A244u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    goto L_08A9BD1C;
L_08A9A244:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A9A254u);
    ctx.set_gpr(16, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08A9A254u) goto L_08A9A254;
    return;
L_08A9A254:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A9A264u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 117u, 0x08A94820u>(ctx, &aot_mem) && ctx.pc == 0x08A9A264u) goto L_08A9A264;
    return;
L_08A9A264:
    ctx.set_gpr(2, 18371u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 20480u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(32));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    if (ctx.gpr[4] == ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(1612));
        goto L_08A9A30C;
    }
    goto L_08A9A298;
L_08A9A298:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(16496));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] << 2u);
    goto L_08A9A2A8;
L_08A9A2A8:
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[29]);
    ctx.set_gpr(7, ctx.gpr[4] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] != ctx.gpr[6]) {
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
        goto L_08A9A2E4;
    }
    goto L_08A9A2BC;
L_08A9A2BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[4] - ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(16, ctx.gpr[16] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A9A2F4;
      }
      goto L_08A9A2E4;
    }
L_08A9A2E4:
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[16] + ctx.gpr[4]);
    goto L_08A9A2F4;
L_08A9A2F4:
    ctx.set_gpr(4, ctx.gpr[16] << 2u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[29]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    if (ctx.gpr[4] != ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[16] << 2u);
        goto L_08A9A2A8;
    }
    goto L_08A9A308;
L_08A9A308:
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(1612));
    goto L_08A9A30C;
L_08A9A30C:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A9A318u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(32000));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A9A318u) goto L_08A9A318;
    return;
L_08A9A318:
    ctx.set_gpr(4, 2226u << 16u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8000));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(16496));
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A9A5B8;
      }
      goto L_08A9A33C;
    }
L_08A9A33C:
    if (ctx.gpr[14] != ctx.gpr[6]) {
    ctx.set_gpr(2, ctx.gpr[7] << 2u);
        goto L_08A9A3D8;
    }
    goto L_08A9A344;
L_08A9A344:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A9A3D4;
      }
      goto L_08A9A350;
    }
L_08A9A350:
    ctx.set_gpr(2, ctx.gpr[7] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(12, ctx.gpr[2] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(2, ctx.gpr[10] << 2u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(11, ctx.gpr[21] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A9A3B4;
      }
      goto L_08A9A368;
    }
L_08A9A368:
    ctx.set_gpr(2, ctx.gpr[9] << 2u);
    goto L_08A9A36C;
L_08A9A36C:
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[9]) <= 0;
    ctx.set_gpr(13, 0u + 0u);
      if (branch_taken) {
          goto L_08A9A3B4;
      }
      goto L_08A9A380;
    }
L_08A9A380:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    goto L_08A9A384;
L_08A9A384:
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(1612), ctx.gpr[2]);
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[3];
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A9A3A4;
      }
      goto L_08A9A39C;
    }
L_08A9A39C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A9A640;
      }
      goto L_08A9A3A4;
    }
L_08A9A3A4:
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[13]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
        goto L_08A9A384;
    }
    goto L_08A9A3B4;
L_08A9A3B4:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[9] != ctx.gpr[6]) {
    ctx.set_gpr(2, ctx.gpr[9] << 2u);
        goto L_08A9A36C;
    }
    goto L_08A9A3C0;
L_08A9A3C0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A9A368;
      }
      goto L_08A9A3CC;
    }
L_08A9A3CC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[8] << 2u);
      if (branch_taken) {
          goto L_08A9A5BC;
      }
      goto L_08A9A3D4;
    }
L_08A9A3D4:
    ctx.set_gpr(2, ctx.gpr[7] << 2u);
    goto L_08A9A3D8;
L_08A9A3D8:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(11, ctx.gpr[2] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[13] != ctx.gpr[6]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
        goto L_08A9A474;
    }
    goto L_08A9A3EC;
L_08A9A3EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A9A470;
      }
      goto L_08A9A3F8;
    }
L_08A9A3F8:
    ctx.set_gpr(2, ctx.gpr[10] << 2u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(12, ctx.gpr[21] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A9A450;
      }
      goto L_08A9A404;
    }
L_08A9A404:
    ctx.set_gpr(2, ctx.gpr[11] << 2u);
    goto L_08A9A408;
L_08A9A408:
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(11, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[11]) <= 0;
    ctx.set_gpr(13, 0u + 0u);
      if (branch_taken) {
          goto L_08A9A450;
      }
      goto L_08A9A41C;
    }
L_08A9A41C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    goto L_08A9A420;
L_08A9A420:
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(1612), ctx.gpr[2]);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[3];
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A9A440;
      }
      goto L_08A9A438;
    }
L_08A9A438:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A9A640;
      }
      goto L_08A9A440;
    }
L_08A9A440:
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[13]) < static_cast<std::int32_t>(ctx.gpr[11]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
        goto L_08A9A420;
    }
    goto L_08A9A450;
L_08A9A450:
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[11] != ctx.gpr[6]) {
    ctx.set_gpr(2, ctx.gpr[11] << 2u);
        goto L_08A9A408;
    }
    goto L_08A9A45C;
L_08A9A45C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A9A404;
      }
      goto L_08A9A468;
    }
L_08A9A468:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A5B8;
      }
      goto L_08A9A470;
    }
L_08A9A470:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
    goto L_08A9A474;
L_08A9A474:
    ctx.set_gpr(12, ctx.gpr[11] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(11, ctx.gpr[9] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    if (ctx.gpr[1] != 0u) {
    ctx.set_gpr(2, ctx.gpr[10] << 2u);
        goto L_08A9A528;
    }
    goto L_08A9A48C;
L_08A9A48C:
    ctx.set_gpr(2, ctx.gpr[10] << 2u);
    ctx.set_gpr(9, ctx.gpr[21] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(1612), ctx.gpr[14]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(1616), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[8] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(12, ctx.gpr[2] + static_cast<std::uint32_t>(32072));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[6];
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A9A5B8;
      }
      goto L_08A9A4BC;
    }
L_08A9A4BC:
    ctx.set_gpr(2, ctx.gpr[10] << 2u);
    ctx.set_gpr(11, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    goto L_08A9A4C8;
L_08A9A4C8:
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[9]) <= 0;
    ctx.set_gpr(13, 0u + 0u);
      if (branch_taken) {
          goto L_08A9A514;
      }
      goto L_08A9A4E0;
    }
L_08A9A4E0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    goto L_08A9A4E4;
L_08A9A4E4:
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(1612), ctx.gpr[2]);
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[3];
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A9A504;
      }
      goto L_08A9A4FC;
    }
L_08A9A4FC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A9A640;
      }
      goto L_08A9A504;
    }
L_08A9A504:
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[13]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
        goto L_08A9A4E4;
    }
    goto L_08A9A514;
L_08A9A514:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[2] != ctx.gpr[6]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
        goto L_08A9A4C8;
    }
    goto L_08A9A520;
L_08A9A520:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A5B8;
      }
      goto L_08A9A528;
    }
L_08A9A528:
    ctx.set_gpr(9, ctx.gpr[21] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(1612), ctx.gpr[13]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(1616), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[7] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(12, ctx.gpr[2] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[6];
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A9A5B8;
      }
      goto L_08A9A554;
    }
L_08A9A554:
    ctx.set_gpr(2, ctx.gpr[10] << 2u);
    ctx.set_gpr(11, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    goto L_08A9A560;
L_08A9A560:
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[9]) <= 0;
    ctx.set_gpr(13, 0u + 0u);
      if (branch_taken) {
          goto L_08A9A5AC;
      }
      goto L_08A9A578;
    }
L_08A9A578:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    goto L_08A9A57C;
L_08A9A57C:
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(1612), ctx.gpr[2]);
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[3];
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A9A59C;
      }
      goto L_08A9A594;
    }
L_08A9A594:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A9A640;
      }
      goto L_08A9A59C;
    }
L_08A9A59C:
    ctx.set_gpr(13, ctx.gpr[13] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[13]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
        goto L_08A9A57C;
    }
    goto L_08A9A5AC;
L_08A9A5AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[2] != ctx.gpr[6]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
        goto L_08A9A560;
    }
    goto L_08A9A5B8;
L_08A9A5B8:
    ctx.set_gpr(2, ctx.gpr[8] << 2u);
    goto L_08A9A5BC;
L_08A9A5BC:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(9, ctx.gpr[2] + static_cast<std::uint32_t>(32072));
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[14] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A9A33C;
      }
      goto L_08A9A5D0;
    }
L_08A9A5D0:
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[5];
    ctx.set_gpr(13, ctx.gpr[9] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A9A33C;
      }
      goto L_08A9A5DC;
    }
L_08A9A5DC:
    ctx.set_gpr(11, ctx.gpr[7] << 2u);
    ctx.set_gpr(11, ctx.gpr[11] + ctx.gpr[29]);
    ctx.set_gpr(12, ctx.gpr[11] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A9A33C;
      }
      goto L_08A9A5F4;
    }
L_08A9A5F4:
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A9A33C;
      }
      goto L_08A9A600;
    }
L_08A9A600:
    ctx.set_gpr(3, ctx.gpr[10] << 2u);
    ctx.set_gpr(7, ctx.gpr[3] + ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(1612), ctx.gpr[14]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32076)));
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(852));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(31312));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(1616), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32760));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(1620), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32084)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(32000));
    ctx.set_gpr(31, 0x08A9A63Cu);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(1624), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08A9A63Cu) goto L_08A9A63C;
    return;
L_08A9A63C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08A9A640;
L_08A9A640:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(1, ctx.gpr[1] | 30560u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + ctx.gpr[1]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9A678:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A9A688u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 96u, 0x08A946D4u>(ctx, &aot_mem) && ctx.pc == 0x08A9A688u) goto L_08A9A688;
    return;
L_08A9A688:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 10 ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9A69C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08A9A828;
      }
      goto L_08A9A6BC;
    }
L_08A9A6BC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_08A9A7C8;
    }
    goto L_08A9A6C8;
L_08A9A6C8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_08A9A780;
    }
    goto L_08A9A6D4;
L_08A9A6D4:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A6E4;
      }
      goto L_08A9A6DC;
    }
L_08A9A6DC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A9A890;
      }
      goto L_08A9A6E4;
    }
L_08A9A6E4:
    ctx.set_gpr(31, 0x08A9A6ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08A9A6ECu) goto L_08A9A6EC;
    return;
L_08A9A6EC:
    ctx.set_gpr(31, 0x08A9A6F4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 155u, 0x0883CE58u>(ctx, &aot_mem) && ctx.pc == 0x08A9A6F4u) goto L_08A9A6F4;
    return;
L_08A9A6F4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(3060));
    ctx.set_gpr(31, 0x08A9A700u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 648u, 0x088A67D0u>(ctx, &aot_mem) && ctx.pc == 0x08A9A700u) goto L_08A9A700;
    return;
L_08A9A700:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(3, 1u << 16u);
        goto L_08A9A718;
    }
    goto L_08A9A708;
L_08A9A708:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9A714u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 187u, 0x08AA8990u>(ctx, &aot_mem) && ctx.pc == 0x08A9A714u) goto L_08A9A714;
    return;
L_08A9A714:
    ctx.set_gpr(3, 1u << 16u);
    goto L_08A9A718;
L_08A9A718:
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(852));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(11724), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x08A9A734u);
    ctx.set_gpr(6, 0u | 35828u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 230u, 0x08AA8C04u>(ctx, &aot_mem) && ctx.pc == 0x08A9A734u) goto L_08A9A734;
    return;
L_08A9A734:
    ctx.set_gpr(31, 0x08A9A73Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 175u, 0x08848BC4u>(ctx, &aot_mem) && ctx.pc == 0x08A9A73Cu) goto L_08A9A73C;
    return;
L_08A9A73C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08A9A75Cu);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x08A9A75Cu) goto L_08A9A75C;
    return;
L_08A9A75C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(732)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A9A770u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A9A770u) goto L_08A9A770;
    return;
L_08A9A770:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, 1u << 16u);
    goto L_08A9A780;
L_08A9A780:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A9A78Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(11724)));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 243u, 0x08AA8CC4u>(ctx, &aot_mem) && ctx.pc == 0x08A9A78Cu) goto L_08A9A78C;
    return;
L_08A9A78C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A88C;
      }
      goto L_08A9A794;
    }
L_08A9A794:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A9A7A4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(11724)));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 460u, 0x08AA97E8u>(ctx, &aot_mem) && ctx.pc == 0x08A9A7A4u) goto L_08A9A7A4;
    return;
L_08A9A7A4:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08A9A7BC;
    }
    goto L_08A9A7AC;
L_08A9A7AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A9A88C;
      }
      goto L_08A9A7BC;
    }
L_08A9A7BC:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A9A88C;
      }
      goto L_08A9A7C8;
    }
L_08A9A7C8:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(11724)));
    ctx.set_gpr(31, 0x08A9A7D8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 191u, 0x08AA8A1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9A7D8u) goto L_08A9A7D8;
    return;
L_08A9A7D8:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A9A7E8u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(11724), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 175u, 0x08848BC4u>(ctx, &aot_mem) && ctx.pc == 0x08A9A7E8u) goto L_08A9A7E8;
    return;
L_08A9A7E8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08A9A808u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x08A9A808u) goto L_08A9A808;
    return;
L_08A9A808:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(732)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A9A81Cu);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A9A81Cu) goto L_08A9A81C;
    return;
L_08A9A81C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A9A890;
      }
      goto L_08A9A828;
    }
L_08A9A828:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(11724)));
    ctx.set_gpr(31, 0x08A9A83Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 191u, 0x08AA8A1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9A83Cu) goto L_08A9A83C;
    return;
L_08A9A83C:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A9A84Cu);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(11724), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 175u, 0x08848BC4u>(ctx, &aot_mem) && ctx.pc == 0x08A9A84Cu) goto L_08A9A84C;
    return;
L_08A9A84C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08A9A86Cu);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x08A9A86Cu) goto L_08A9A86C;
    return;
L_08A9A86C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(732)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A9A880u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A9A880u) goto L_08A9A880;
    return;
L_08A9A880:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A9A890;
      }
      goto L_08A9A88C;
    }
L_08A9A88C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A9A890;
L_08A9A890:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9A8A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08A9AC18;
      }
      goto L_08A9A8C4;
    }
L_08A9A8C4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_08A9A9D0;
    }
    goto L_08A9A8D0;
L_08A9A8D0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_08A9A988;
    }
    goto L_08A9A8DC;
L_08A9A8DC:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9A8EC;
      }
      goto L_08A9A8E4;
    }
L_08A9A8E4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A9AC80;
      }
      goto L_08A9A8EC;
    }
L_08A9A8EC:
    ctx.set_gpr(31, 0x08A9A8F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08A9A8F4u) goto L_08A9A8F4;
    return;
L_08A9A8F4:
    ctx.set_gpr(31, 0x08A9A8FCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 155u, 0x0883CE58u>(ctx, &aot_mem) && ctx.pc == 0x08A9A8FCu) goto L_08A9A8FC;
    return;
L_08A9A8FC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(3060));
    ctx.set_gpr(31, 0x08A9A908u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 648u, 0x088A67D0u>(ctx, &aot_mem) && ctx.pc == 0x08A9A908u) goto L_08A9A908;
    return;
L_08A9A908:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(3, 1u << 16u);
        goto L_08A9A920;
    }
    goto L_08A9A910;
L_08A9A910:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9A91Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 187u, 0x08AA8990u>(ctx, &aot_mem) && ctx.pc == 0x08A9A91Cu) goto L_08A9A91C;
    return;
L_08A9A91C:
    ctx.set_gpr(3, 1u << 16u);
    goto L_08A9A920;
L_08A9A920:
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(852));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(11724), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32760));
    ctx.set_gpr(31, 0x08A9A93Cu);
    ctx.set_gpr(6, 0u | 35828u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 230u, 0x08AA8C04u>(ctx, &aot_mem) && ctx.pc == 0x08A9A93Cu) goto L_08A9A93C;
    return;
L_08A9A93C:
    ctx.set_gpr(31, 0x08A9A944u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 175u, 0x08848BC4u>(ctx, &aot_mem) && ctx.pc == 0x08A9A944u) goto L_08A9A944;
    return;
L_08A9A944:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08A9A964u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x08A9A964u) goto L_08A9A964;
    return;
L_08A9A964:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(732)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A9A978u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A9A978u) goto L_08A9A978;
    return;
L_08A9A978:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, 1u << 16u);
    goto L_08A9A988;
L_08A9A988:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A9A994u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(11724)));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 243u, 0x08AA8CC4u>(ctx, &aot_mem) && ctx.pc == 0x08A9A994u) goto L_08A9A994;
    return;
L_08A9A994:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9AC7C;
      }
      goto L_08A9A99C;
    }
L_08A9A99C:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A9A9ACu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(11724)));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 460u, 0x08AA97E8u>(ctx, &aot_mem) && ctx.pc == 0x08A9A9ACu) goto L_08A9A9AC;
    return;
L_08A9A9AC:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08A9A9C4;
    }
    goto L_08A9A9B4;
L_08A9A9B4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A9AC7C;
      }
      goto L_08A9A9C4;
    }
L_08A9A9C4:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A9AC7C;
      }
      goto L_08A9A9D0;
    }
L_08A9A9D0:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(852));
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(32760));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(76), ctx.gpr[3]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(852));
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(32760));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(80), ctx.gpr[3]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(852));
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(32760));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(84), ctx.gpr[3]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(852));
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(32760));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(88), ctx.gpr[3]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(852));
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(32760));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(92), ctx.gpr[3]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(852));
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(32760));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(96), ctx.gpr[3]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(3556)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 43 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_08A9AAE4;
    }
    goto L_08A9AAD4;
L_08A9AAD4:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(3556), 0u);
    ctx.set_gpr(2, 1u << 16u);
    goto L_08A9AAE4;
L_08A9AAE4:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(11724)));
    ctx.set_gpr(31, 0x08A9AAF4u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 191u, 0x08AA8A1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9AAF4u) goto L_08A9AAF4;
    return;
L_08A9AAF4:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A9AB04u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(11724), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 175u, 0x08848BC4u>(ctx, &aot_mem) && ctx.pc == 0x08A9AB04u) goto L_08A9AB04;
    return;
L_08A9AB04:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08A9AB24u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x08A9AB24u) goto L_08A9AB24;
    return;
L_08A9AB24:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(732)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A9AB38u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A9AB38u) goto L_08A9AB38;
    return;
L_08A9AB38:
    ctx.set_gpr(31, 0x08A9AB40u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 194u, 0x08A94E38u>(ctx, &aot_mem) && ctx.pc == 0x08A9AB40u) goto L_08A9AB40;
    return;
L_08A9AB40:
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    goto L_08A9AB4C;
L_08A9AB4C:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + ctx.gpr[7]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(1, ctx.gpr[1] | 3924u);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(3904), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[1]);
    goto L_08A9AB6C;
L_08A9AB6C:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[6]) < 84 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A9AB6C;
      }
      goto L_08A9AB9C;
    }
L_08A9AB9C:
    ctx.set_gpr(2, ctx.gpr[6] << 2u);
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(1, ctx.gpr[1] | 3924u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[1]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[7]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(368));
      if (branch_taken) {
          goto L_08A9AB4C;
      }
      goto L_08A9ABD0;
    }
L_08A9ABD0:
    ctx.set_gpr(3, 0u + 0u);
    ctx.set_gpr(1, 1u << 16u);
    goto L_08A9ABD8;
L_08A9ABD8:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(1, ctx.gpr[1] | 11284u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[1]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < 30 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(1, 1u << 16u);
        goto L_08A9ABD8;
    }
    goto L_08A9AC0C;
L_08A9AC0C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A9AC80;
      }
      goto L_08A9AC18;
    }
L_08A9AC18:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(11724)));
    ctx.set_gpr(31, 0x08A9AC2Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 191u, 0x08AA8A1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9AC2Cu) goto L_08A9AC2C;
    return;
L_08A9AC2C:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A9AC3Cu);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(11724), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 175u, 0x08848BC4u>(ctx, &aot_mem) && ctx.pc == 0x08A9AC3Cu) goto L_08A9AC3C;
    return;
L_08A9AC3C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08A9AC5Cu);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x08A9AC5Cu) goto L_08A9AC5C;
    return;
L_08A9AC5C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(732)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A9AC70u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A9AC70u) goto L_08A9AC70;
    return;
L_08A9AC70:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A9AC80;
      }
      goto L_08A9AC7C;
    }
L_08A9AC7C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A9AC80;
L_08A9AC80:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9AC94:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08A9AD8C;
      }
      goto L_08A9ACB4;
    }
L_08A9ACB4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(2, 1u << 16u);
        goto L_08A9AD68;
    }
    goto L_08A9ACC0;
L_08A9ACC0:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9ACD0;
      }
      goto L_08A9ACC8;
    }
L_08A9ACC8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A9ADF4;
      }
      goto L_08A9ACD0;
    }
L_08A9ACD0:
    ctx.set_gpr(31, 0x08A9ACD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 233u, 0x0893CEECu>(ctx, &aot_mem) && ctx.pc == 0x08A9ACD8u) goto L_08A9ACD8;
    return;
L_08A9ACD8:
    ctx.set_gpr(31, 0x08A9ACE0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 155u, 0x0883CE58u>(ctx, &aot_mem) && ctx.pc == 0x08A9ACE0u) goto L_08A9ACE0;
    return;
L_08A9ACE0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(3060));
    ctx.set_gpr(31, 0x08A9ACECu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 648u, 0x088A67D0u>(ctx, &aot_mem) && ctx.pc == 0x08A9ACECu) goto L_08A9ACEC;
    return;
L_08A9ACEC:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(3, 1u << 16u);
        goto L_08A9AD04;
    }
    goto L_08A9ACF4;
L_08A9ACF4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9AD00u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 187u, 0x08AA8990u>(ctx, &aot_mem) && ctx.pc == 0x08A9AD00u) goto L_08A9AD00;
    return;
L_08A9AD00:
    ctx.set_gpr(3, 1u << 16u);
    goto L_08A9AD04;
L_08A9AD04:
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(11724), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A9AD1Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 230u, 0x08AA8C04u>(ctx, &aot_mem) && ctx.pc == 0x08A9AD1Cu) goto L_08A9AD1C;
    return;
L_08A9AD1C:
    ctx.set_gpr(31, 0x08A9AD24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 175u, 0x08848BC4u>(ctx, &aot_mem) && ctx.pc == 0x08A9AD24u) goto L_08A9AD24;
    return;
L_08A9AD24:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08A9AD44u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x08A9AD44u) goto L_08A9AD44;
    return;
L_08A9AD44:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(732)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A9AD58u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A9AD58u) goto L_08A9AD58;
    return;
L_08A9AD58:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, 1u << 16u);
    goto L_08A9AD68;
L_08A9AD68:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A9AD74u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(11724)));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 243u, 0x08AA8CC4u>(ctx, &aot_mem) && ctx.pc == 0x08A9AD74u) goto L_08A9AD74;
    return;
L_08A9AD74:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9ADF0;
      }
      goto L_08A9AD7C;
    }
L_08A9AD7C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A9ADF0;
      }
      goto L_08A9AD8C;
    }
L_08A9AD8C:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(11724)));
    ctx.set_gpr(31, 0x08A9ADA0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0169_entry, 169u, 191u, 0x08AA8A1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9ADA0u) goto L_08A9ADA0;
    return;
L_08A9ADA0:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A9ADB0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(11724), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 175u, 0x08848BC4u>(ctx, &aot_mem) && ctx.pc == 0x08A9ADB0u) goto L_08A9ADB0;
    return;
L_08A9ADB0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x08A9ADD0u);
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x08A9ADD0u) goto L_08A9ADD0;
    return;
L_08A9ADD0:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(732)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A9ADE4u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A9ADE4u) goto L_08A9ADE4;
    return;
L_08A9ADE4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A9ADF4;
      }
      goto L_08A9ADF0;
    }
L_08A9ADF0:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A9ADF4;
L_08A9ADF4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9AE08:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A9AE2Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08A9AE2Cu) goto L_08A9AE2C;
    return;
L_08A9AE2C:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 3564u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + ctx.gpr[1]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A9AE48u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A9AE48u) goto L_08A9AE48;
    return;
L_08A9AE48:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 3564u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + ctx.gpr[1]);
    ctx.set_gpr(31, 0x08A9AE60u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08A9AE60u) goto L_08A9AE60;
    return;
L_08A9AE60:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(3604), ctx.gpr[16]);
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
L_08A9AE84:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A9AEA8u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x08A9AEA8u) goto L_08A9AEA8;
    return;
L_08A9AEA8:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 3608u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + ctx.gpr[1]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A9AEC4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A9AEC4u) goto L_08A9AEC4;
    return;
L_08A9AEC4:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 3608u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + ctx.gpr[1]);
    ctx.set_gpr(31, 0x08A9AEDCu);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08A9AEDCu) goto L_08A9AEDC;
    return;
L_08A9AEDC:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(3648), ctx.gpr[16]);
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
L_08A9AF00:
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1552), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9AF08:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1552)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08A9AF2C;
      }
      goto L_08A9AF20;
    }
L_08A9AF20:
    ctx.set_gpr(2, 49024u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A9AF3C;
      }
      goto L_08A9AF2C;
    }
L_08A9AF2C:
    ctx.set_gpr(31, 0x08A9AF34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 122u, 0x08A948B8u>(ctx, &aot_mem) && ctx.pc == 0x08A9AF34u) goto L_08A9AF34;
    return;
L_08A9AF34:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1552), ctx.gpr[2]);
    goto L_08A9AF3C;
L_08A9AF3C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9AF4C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x08A9AF7Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x08A9AF7Cu) goto L_08A9AF7C;
    return;
L_08A9AF7C:
    ctx.set_gpr(31, 0x08A9AF84u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x08A9AF84u) goto L_08A9AF84;
    return;
L_08A9AF84:
    ctx.set_gpr(31, 0x08A9AF8Cu);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 652u, 0x0884A6E0u>(ctx, &aot_mem) && ctx.pc == 0x08A9AF8Cu) goto L_08A9AF8C;
    return;
L_08A9AF8C:
    ctx.set_gpr(31, 0x08A9AF94u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 652u, 0x0884A6E0u>(ctx, &aot_mem) && ctx.pc == 0x08A9AF94u) goto L_08A9AF94;
    return;
L_08A9AF94:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 11540u);
    ctx.set_gpr(4, ctx.gpr[18] + ctx.gpr[1]);
    ctx.set_gpr(31, 0x08A9AFA8u);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 511u, 0x0884728Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9AFA8u) goto L_08A9AFA8;
    return;
L_08A9AFA8:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 11552u);
    ctx.set_gpr(4, ctx.gpr[18] + ctx.gpr[1]);
    ctx.set_gpr(31, 0x08A9AFBCu);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 511u, 0x0884728Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9AFBCu) goto L_08A9AFBC;
    return;
L_08A9AFBC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A9AFCCu);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 362u, 0x08859960u>(ctx, &aot_mem) && ctx.pc == 0x08A9AFCCu) goto L_08A9AFCC;
    return;
L_08A9AFCC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A9AFDCu);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 362u, 0x08859960u>(ctx, &aot_mem) && ctx.pc == 0x08A9AFDCu) goto L_08A9AFDC;
    return;
L_08A9AFDC:
    ctx.set_gpr(31, 0x08A9AFE4u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 652u, 0x0884A6E0u>(ctx, &aot_mem) && ctx.pc == 0x08A9AFE4u) goto L_08A9AFE4;
    return;
L_08A9AFE4:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(11564), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, 0x08A9AFF8u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 652u, 0x0884A6E0u>(ctx, &aot_mem) && ctx.pc == 0x08A9AFF8u) goto L_08A9AFF8;
    return;
L_08A9AFF8:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(1, ctx.gpr[1] | 11700u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(11568), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[18] + ctx.gpr[1]);
    ctx.set_gpr(31, 0x08A9B018u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 604u, 0x0883EAA8u>(ctx, &aot_mem) && ctx.pc == 0x08A9B018u) goto L_08A9B018;
    return;
L_08A9B018:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 11712u);
    ctx.set_gpr(4, ctx.gpr[18] + ctx.gpr[1]);
    ctx.set_gpr(31, 0x08A9B02Cu);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 604u, 0x0883EAA8u>(ctx, &aot_mem) && ctx.pc == 0x08A9B02Cu) goto L_08A9B02C;
    return;
L_08A9B02C:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(11532), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(1, ctx.gpr[1] | 11572u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(11536), 0u);
    ctx.set_gpr(4, ctx.gpr[18] + ctx.gpr[1]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08A9B05Cu);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 2u, 0x08A00094u>(ctx, &aot_mem) && ctx.pc == 0x08A9B05Cu) goto L_08A9B05C;
    return;
L_08A9B05C:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 11636u);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08A9B074u);
    ctx.set_gpr(4, ctx.gpr[18] + ctx.gpr[1]);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 2u, 0x08A00094u>(ctx, &aot_mem) && ctx.pc == 0x08A9B074u) goto L_08A9B074;
    return;
L_08A9B074:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(11528), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9B0A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-256));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(2, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(11528)));
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08A9B0D8;
      }
      goto L_08A9B0D0;
    }
L_08A9B0D0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A9B2D8;
      }
      goto L_08A9B0D8;
    }
L_08A9B0D8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08A9B0E4u);
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x08A9B0E4u) goto L_08A9B0E4;
    return;
L_08A9B0E4:
    ctx.set_gpr(31, 0x08A9B0ECu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x08A9B0ECu) goto L_08A9B0EC;
    return;
L_08A9B0EC:
    ctx.set_gpr(31, 0x08A9B0F4u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x08A9B0F4u) goto L_08A9B0F4;
    return;
L_08A9B0F4:
    ctx.set_gpr(31, 0x08A9B0FCu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x08A9B0FCu) goto L_08A9B0FC;
    return;
L_08A9B0FC:
    ctx.set_gpr(31, 0x08A9B104u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 512u, 0x088472A8u>(ctx, &aot_mem) && ctx.pc == 0x08A9B104u) goto L_08A9B104;
    return;
L_08A9B104:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(11536)));
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[3]);
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[20];
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(11536), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(11532)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) || ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.set_gpr(1, 1u << 16u);
        goto L_08A9B1EC;
    }
    goto L_08A9B13C;
L_08A9B13C:
    ctx.fpr[20] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(31, 0x08A9B148u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A9B148u) goto L_08A9B148;
    return;
L_08A9B148:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 11572u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(6, ctx.gpr[17] + ctx.gpr[1]);
    ctx.set_gpr(31, 0x08A9B164u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 500u, 0x08B06058u>(ctx, &aot_mem) && ctx.pc == 0x08A9B164u) goto L_08A9B164;
    return;
L_08A9B164:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 11636u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(6, ctx.gpr[17] + ctx.gpr[1]);
    ctx.set_gpr(31, 0x08A9B180u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 500u, 0x08B06058u>(ctx, &aot_mem) && ctx.pc == 0x08A9B180u) goto L_08A9B180;
    return;
L_08A9B180:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(11564)));
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 11552u);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(11568)));
    ctx.set_gpr(5, ctx.gpr[17] + ctx.gpr[1]);
    ctx.set_gpr(1, 1u << 16u);
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    ctx.set_gpr(1, ctx.gpr[1] | 11540u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(6, ctx.gpr[17] + ctx.gpr[1]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(31, 0x08A9B1C4u);
    ctx.fpr[21] = ctx.fpr[1] + ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 362u, 0x08859960u>(ctx, &aot_mem) && ctx.pc == 0x08A9B1C4u) goto L_08A9B1C4;
    return;
L_08A9B1C4:
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08A9B1D0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 651u, 0x0884A6B8u>(ctx, &aot_mem) && ctx.pc == 0x08A9B1D0u) goto L_08A9B1D0;
    return;
L_08A9B1D0:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 11540u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08A9B1E4u);
    ctx.set_gpr(5, ctx.gpr[17] + ctx.gpr[1]);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 777u, 0x0884AD38u>(ctx, &aot_mem) && ctx.pc == 0x08A9B1E4u) goto L_08A9B1E4;
    return;
L_08A9B1E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9B234;
      }
      goto L_08A9B1EC;
    }
L_08A9B1EC:
    ctx.set_gpr(1, ctx.gpr[1] | 11572u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08A9B1FCu);
    ctx.set_gpr(5, ctx.gpr[17] + ctx.gpr[1]);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 872u, 0x08843A88u>(ctx, &aot_mem) && ctx.pc == 0x08A9B1FCu) goto L_08A9B1FC;
    return;
L_08A9B1FC:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 11636u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x08A9B210u);
    ctx.set_gpr(5, ctx.gpr[17] + ctx.gpr[1]);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 872u, 0x08843A88u>(ctx, &aot_mem) && ctx.pc == 0x08A9B210u) goto L_08A9B210;
    return;
L_08A9B210:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 11552u);
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(11568)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08A9B230u);
    ctx.set_gpr(5, ctx.gpr[17] + ctx.gpr[1]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 511u, 0x0884728Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9B230u) goto L_08A9B230;
    return;
L_08A9B230:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08A9B234;
L_08A9B234:
    ctx.set_gpr(31, 0x08A9B23Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08A9B23Cu) goto L_08A9B23C;
    return;
L_08A9B23C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9B248u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 535u, 0x0884A0DCu>(ctx, &aot_mem) && ctx.pc == 0x08A9B248u) goto L_08A9B248;
    return;
L_08A9B248:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 11700u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(5, ctx.gpr[17] + ctx.gpr[1]);
    ctx.set_gpr(31, 0x08A9B260u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 270u, 0x08A031C4u>(ctx, &aot_mem) && ctx.pc == 0x08A9B260u) goto L_08A9B260;
    return;
L_08A9B260:
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    ctx.set_gpr(31, 0x08A9B26Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 651u, 0x0884A6B8u>(ctx, &aot_mem) && ctx.pc == 0x08A9B26Cu) goto L_08A9B26C;
    return;
L_08A9B26C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08A9B278u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 777u, 0x0884AD38u>(ctx, &aot_mem) && ctx.pc == 0x08A9B278u) goto L_08A9B278;
    return;
L_08A9B278:
    ctx.set_gpr(31, 0x08A9B280u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08A9B280u) goto L_08A9B280;
    return;
L_08A9B280:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9B28Cu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 462u, 0x08A85A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9B28Cu) goto L_08A9B28C;
    return;
L_08A9B28C:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 11712u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(5, ctx.gpr[17] + ctx.gpr[1]);
    ctx.set_gpr(31, 0x08A9B2A4u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 270u, 0x08A031C4u>(ctx, &aot_mem) && ctx.pc == 0x08A9B2A4u) goto L_08A9B2A4;
    return;
L_08A9B2A4:
    ctx.set_gpr(31, 0x08A9B2ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08A9B2ACu) goto L_08A9B2AC;
    return;
L_08A9B2AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9B2B8u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 461u, 0x08A85A1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9B2B8u) goto L_08A9B2B8;
    return;
L_08A9B2B8:
    ctx.set_gpr(2, ctx.gpr[16] & 255u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
        goto L_08A9B2D8;
    }
    goto L_08A9B2C4;
L_08A9B2C4:
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 11528u);
    ctx.set_gpr(31, 0x08A9B2D4u);
    ctx.set_gpr(4, ctx.gpr[17] + ctx.gpr[1]);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 1096u, 0x08A93CECu>(ctx, &aot_mem) && ctx.pc == 0x08A9B2D4u) goto L_08A9B2D4;
    return;
L_08A9B2D4:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08A9B2D8;
L_08A9B2D8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9B2F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-5168));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(6, 2230u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-22804));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(2224));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(368));
    goto L_08A9B320;
L_08A9B320:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A9B320;
      }
      goto L_08A9B340;
    }
L_08A9B340:
    ctx.set_gpr(6, 2230u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-19860));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(276));
    goto L_08A9B350;
L_08A9B350:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A9B350;
      }
      goto L_08A9B370;
    }
L_08A9B370:
    ctx.set_gpr(31, 0x08A9B378u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 400u, 0x08A81258u>(ctx, &aot_mem) && ctx.pc == 0x08A9B378u) goto L_08A9B378;
    return;
L_08A9B378:
    ctx.set_gpr(2, ctx.gpr[17] << 6u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(2224));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08A9B3BC;
    }
    goto L_08A9B394;
L_08A9B394:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08A9B398;
L_08A9B398:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x08A9B3A4u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 1104u, 0x08A93DA8u>(ctx, &aot_mem) && ctx.pc == 0x08A9B3A4u) goto L_08A9B3A4;
    return;
L_08A9B3A4:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08A9B398;
    }
    goto L_08A9B3B8;
L_08A9B3B8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08A9B3BC;
L_08A9B3BC:
    ctx.set_gpr(31, 0x08A9B3C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 396u, 0x08A81204u>(ctx, &aot_mem) && ctx.pc == 0x08A9B3C4u) goto L_08A9B3C4;
    return;
L_08A9B3C4:
    ctx.set_gpr(3, ctx.gpr[17] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[3] << 4u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[29]);
    ctx.set_gpr(16, ctx.gpr[3] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08A9B410;
    }
    goto L_08A9B3E8;
L_08A9B3E8:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08A9B3EC;
L_08A9B3EC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A9B3F8u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 456u, 0x08A898E4u>(ctx, &aot_mem) && ctx.pc == 0x08A9B3F8u) goto L_08A9B3F8;
    return;
L_08A9B3F8:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[4] != ctx.gpr[3]) {
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08A9B3EC;
    }
    goto L_08A9B40C;
L_08A9B40C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08A9B410;
L_08A9B410:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(5168));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9B424:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A9B44Cu);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0021_entry, 21u, 830u, 0x0885B2A8u>(ctx, &aot_mem) && ctx.pc == 0x08A9B44Cu) goto L_08A9B44C;
    return;
L_08A9B44C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A9B458u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 259u, 0x08A7D19Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9B458u) goto L_08A9B458;
    return;
L_08A9B458:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    goto L_08A9B460;
L_08A9B460:
    if (ctx.gpr[16] == ctx.gpr[19]) {
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_08A9B478;
    }
    goto L_08A9B468;
L_08A9B468:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A9B474u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 899u, 0x0885F6C8u>(ctx, &aot_mem) && ctx.pc == 0x08A9B474u) goto L_08A9B474;
    return;
L_08A9B474:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08A9B478;
L_08A9B478:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9B460;
      }
      goto L_08A9B484;
    }
L_08A9B484:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A9B498u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 787u, 0x0885F02Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9B498u) goto L_08A9B498;
    return;
L_08A9B498:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A9B4B0u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 148u, 0x0886080Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9B4B0u) goto L_08A9B4B0;
    return;
L_08A9B4B0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A9B4C4u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 161u, 0x088608DCu>(ctx, &aot_mem) && ctx.pc == 0x08A9B4C4u) goto L_08A9B4C4;
    return;
L_08A9B4C4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A9B4D0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 182u, 0x088609ECu>(ctx, &aot_mem) && ctx.pc == 0x08A9B4D0u) goto L_08A9B4D0;
    return;
L_08A9B4D0:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9B4F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-352));
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
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1592)));
    ctx.set_gpr(31, 0x08A9B528u);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 592u, 0x08A92254u>(ctx, &aot_mem) && ctx.pc == 0x08A9B528u) goto L_08A9B528;
    return;
L_08A9B528:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9B534u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(280));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 299u, 0x08855674u>(ctx, &aot_mem) && ctx.pc == 0x08A9B534u) goto L_08A9B534;
    return;
L_08A9B534:
    ctx.set_gpr(31, 0x08A9B53Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(316));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 299u, 0x08855674u>(ctx, &aot_mem) && ctx.pc == 0x08A9B53Cu) goto L_08A9B53C;
    return;
L_08A9B53C:
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    goto L_08A9B550;
L_08A9B550:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(3656), ctx.gpr[3]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(3660), ctx.gpr[3]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(3664), ctx.gpr[3]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(3668), ctx.gpr[3]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(3672), ctx.gpr[3]);
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(3676), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08A9B550;
      }
      goto L_08A9B5A8;
    }
L_08A9B5A8:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_08A9B5B0;
L_08A9B5B0:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A9B5BCu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 306u, 0x08A95710u>(ctx, &aot_mem) && ctx.pc == 0x08A9B5BCu) goto L_08A9B5BC;
    return;
L_08A9B5BC:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 30 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
        goto L_08A9B5B0;
    }
    goto L_08A9B5CC;
L_08A9B5CC:
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_08A9B5D4;
L_08A9B5D4:
    ctx.set_gpr(31, 0x08A9B5DCu);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08A9B5DCu) goto L_08A9B5DC;
    return;
L_08A9B5DC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A9B5E8u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 108u, 0x08A947BCu>(ctx, &aot_mem) && ctx.pc == 0x08A9B5E8u) goto L_08A9B5E8;
    return;
L_08A9B5E8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(16, 0u + 0u);
      if (branch_taken) {
          goto L_08A9B624;
      }
      goto L_08A9B5F4;
    }
L_08A9B5F4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_08A9B5F8;
L_08A9B5F8:
    ctx.set_gpr(31, 0x08A9B600u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08A9B600u) goto L_08A9B600;
    return;
L_08A9B600:
    ctx.set_gpr(31, 0x08A9B608u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 793u, 0x08A97E7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9B608u) goto L_08A9B608;
    return;
L_08A9B608:
    ctx.set_gpr(31, 0x08A9B610u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_08A98F50;
L_08A9B610:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
        goto L_08A9B5F8;
    }
    goto L_08A9B624;
L_08A9B624:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 200 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
        goto L_08A9B5D4;
    }
    goto L_08A9B634;
L_08A9B634:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    goto L_08A9B640;
L_08A9B640:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
        goto L_08A9B654;
    }
    goto L_08A9B64C;
L_08A9B64C:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_08A9B654;
L_08A9B654:
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
        goto L_08A9B664;
    }
    goto L_08A9B65C;
L_08A9B65C:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08A9B664;
L_08A9B664:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A9B640;
      }
      goto L_08A9B670;
    }
L_08A9B670:
    ctx.set_gpr(31, 0x08A9B678u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 705u, 0x08847F48u>(ctx, &aot_mem) && ctx.pc == 0x08A9B678u) goto L_08A9B678;
    return;
L_08A9B678:
    ctx.set_gpr(6, ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9B688u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 275u, 0x08A954A0u>(ctx, &aot_mem) && ctx.pc == 0x08A9B688u) goto L_08A9B688;
    return;
L_08A9B688:
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, ctx.gpr[4] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, 2230u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(18560));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x08A9B6BCu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 705u, 0x08847F48u>(ctx, &aot_mem) && ctx.pc == 0x08A9B6BCu) goto L_08A9B6BC;
    return;
L_08A9B6BC:
    ctx.set_gpr(6, ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9B6CCu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 275u, 0x08A954A0u>(ctx, &aot_mem) && ctx.pc == 0x08A9B6CCu) goto L_08A9B6CC;
    return;
L_08A9B6CC:
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(30, 0u + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(3, ctx.gpr[4] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(2, 2230u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-13204));
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    goto L_08A9B700;
L_08A9B700:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
        goto L_08A9B724;
    }
    goto L_08A9B70C;
L_08A9B70C:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < 12 ? 1u : 0u);
    ctx.set_gpr(30, ctx.gpr[30] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A9B700;
      }
      goto L_08A9B720;
    }
L_08A9B720:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    goto L_08A9B724;
L_08A9B724:
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_08A9B72C;
L_08A9B72C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(3656), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(3660), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(3664), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(3668), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(3672), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(3676), ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[6]) < 12 ? 1u : 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(24));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08A9B72C;
      }
      goto L_08A9B7A0;
    }
L_08A9B7A0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    goto L_08A9B7B0;
L_08A9B7B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[2] == ctx.gpr[3]) {
    ctx.set_gpr(17, 0u + 0u);
        goto L_08A9B7DC;
    }
    goto L_08A9B7BC;
L_08A9B7BC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A9B7B0;
      }
      goto L_08A9B7D8;
    }
L_08A9B7D8:
    ctx.set_gpr(17, 0u + 0u);
    goto L_08A9B7DC;
L_08A9B7DC:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[6] == ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
        goto L_08A9B80C;
    }
    goto L_08A9B7EC;
L_08A9B7EC:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A9B7F8u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 306u, 0x08A95710u>(ctx, &aot_mem) && ctx.pc == 0x08A9B7F8u) goto L_08A9B7F8;
    return;
L_08A9B7F8:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A9B7DC;
      }
      goto L_08A9B808;
    }
L_08A9B808:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    goto L_08A9B80C;
L_08A9B80C:
    ctx.set_gpr(31, 0x08A9B814u);
    ctx.set_gpr(20, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 28u, 0x08864230u>(ctx, &aot_mem) && ctx.pc == 0x08A9B814u) goto L_08A9B814;
    return;
L_08A9B814:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[2] != ctx.gpr[3]) {
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
        goto L_08A9B828;
    }
    goto L_08A9B820;
L_08A9B820:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(1600));
      if (branch_taken) {
          goto L_08A9BC0C;
      }
      goto L_08A9B828;
    }
L_08A9B828:
    ctx.set_gpr(31, 0x08A9B830u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 27u, 0x08864218u>(ctx, &aot_mem) && ctx.pc == 0x08A9B830u) goto L_08A9B830;
    return;
L_08A9B830:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(23, ctx.gpr[3] << 3u);
      if (branch_taken) {
          goto L_08A9BC0C;
      }
      goto L_08A9B83C;
    }
L_08A9B83C:
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A9B848u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(276));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 144u, 0x08A94AC4u>(ctx, &aot_mem) && ctx.pc == 0x08A9B848u) goto L_08A9B848;
    return;
L_08A9B848:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9B854u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 155u, 0x08A94BC8u>(ctx, &aot_mem) && ctx.pc == 0x08A9B854u) goto L_08A9B854;
    return;
L_08A9B854:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.set_gpr(31, 0x08A9B860u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 156u, 0x08A94BD4u>(ctx, &aot_mem) && ctx.pc == 0x08A9B860u) goto L_08A9B860;
    return;
L_08A9B860:
    ctx.set_gpr(31, 0x08A9B868u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 705u, 0x08847F48u>(ctx, &aot_mem) && ctx.pc == 0x08A9B868u) goto L_08A9B868;
    return;
L_08A9B868:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9B878u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 275u, 0x08A954A0u>(ctx, &aot_mem) && ctx.pc == 0x08A9B878u) goto L_08A9B878;
    return;
L_08A9B878:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A9B888u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 136u, 0x088548B4u>(ctx, &aot_mem) && ctx.pc == 0x08A9B888u) goto L_08A9B888;
    return;
L_08A9B888:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A9B898u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 136u, 0x088548B4u>(ctx, &aot_mem) && ctx.pc == 0x08A9B898u) goto L_08A9B898;
    return;
L_08A9B898:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A9B8B4u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 717u, 0x08A9771Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9B8B4u) goto L_08A9B8B4;
    return;
L_08A9B8B4:
    ctx.set_gpr(31, 0x08A9B8BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 705u, 0x08847F48u>(ctx, &aot_mem) && ctx.pc == 0x08A9B8BCu) goto L_08A9B8BC;
    return;
L_08A9B8BC:
    ctx.set_gpr(6, ctx.gpr[30] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9B8CCu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 275u, 0x08A954A0u>(ctx, &aot_mem) && ctx.pc == 0x08A9B8CCu) goto L_08A9B8CC;
    return;
L_08A9B8CC:
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 20 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 60 ? 1u : 0u);
        goto L_08A9B9CC;
    }
    goto L_08A9B8E8;
L_08A9B8E8:
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] << 4u);
    ctx.set_gpr(2, 2230u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(11700));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(44)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(48)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(56)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(60)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(68)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(72)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.set_gpr(31, 0x08A9B9A0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(280));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 281u, 0x0885555Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9B9A0u) goto L_08A9B9A0;
    return;
L_08A9B9A0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(204));
    ctx.set_gpr(31, 0x08A9B9B0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(316));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 281u, 0x0885555Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9B9B0u) goto L_08A9B9B0;
    return;
L_08A9B9B0:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A9B9C4u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    goto L_08A980EC;
L_08A9B9C4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(384));
      if (branch_taken) {
          goto L_08A9BC0C;
      }
      goto L_08A9B9CC;
    }
L_08A9B9CC:
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
        goto L_08A9BB30;
    }
    goto L_08A9B9D4;
L_08A9B9D4:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-20));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 2u));
      if (branch_taken) {
          goto L_08A9B9E8;
      }
      goto L_08A9B9E0;
    }
L_08A9B9E0:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 2u));
    goto L_08A9B9E8;
L_08A9B9E8:
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(2, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[2] << 4u);
    ctx.set_gpr(2, 2230u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(11700));
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(18, ctx.gpr[2] + ctx.gpr[3]);
    goto L_08A9BA0C;
L_08A9BA0C:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(168));
    ctx.set_gpr(31, 0x08A9BAACu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(280));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 281u, 0x0885555Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9BAACu) goto L_08A9BAAC;
    return;
L_08A9BAAC:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.set_gpr(31, 0x08A9BABCu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(316));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 281u, 0x0885555Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9BABCu) goto L_08A9BABC;
    return;
L_08A9BABC:
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A9BAD0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    goto L_08A980EC;
L_08A9BAD0:
    ctx.set_gpr(20, ctx.gpr[20] + ctx.gpr[16]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
        goto L_08A9BB0C;
    }
    goto L_08A9BAE0;
L_08A9BAE0:
    ctx.set_gpr(31, 0x08A9BAE8u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 96u, 0x08A946D4u>(ctx, &aot_mem) && ctx.pc == 0x08A9BAE8u) goto L_08A9BAE8;
    return;
L_08A9BAE8:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < 22 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9BB08;
      }
      goto L_08A9BAF4;
    }
L_08A9BAF4:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(80));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A9BA0C;
      }
      goto L_08A9BB08;
    }
L_08A9BB08:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    goto L_08A9BB0C;
L_08A9BB0C:
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
        goto L_08A9BC30;
    }
    goto L_08A9BB14;
L_08A9BB14:
    ctx.set_gpr(31, 0x08A9BB1Cu);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 96u, 0x08A946D4u>(ctx, &aot_mem) && ctx.pc == 0x08A9BB1Cu) goto L_08A9BB1C;
    return;
L_08A9BB1C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 22 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
        goto L_08A9BC10;
    }
    goto L_08A9BB28;
L_08A9BB28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9BC2C;
      }
      goto L_08A9BB30;
    }
L_08A9BB30:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] << 4u);
    ctx.set_gpr(2, 2230u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(11700));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(44)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(48)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(56)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(60)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(68)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(72)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(31, 0x08A9BBE4u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(280));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 281u, 0x0885555Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9BBE4u) goto L_08A9BBE4;
    return;
L_08A9BBE4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x08A9BBF4u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(316));
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 281u, 0x0885555Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9BBF4u) goto L_08A9BBF4;
    return;
L_08A9BBF4:
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A9BC08u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    goto L_08A980EC;
L_08A9BC08:
    ctx.set_gpr(20, ctx.gpr[20] + ctx.gpr[16]);
    goto L_08A9BC0C;
L_08A9BC0C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    goto L_08A9BC10;
L_08A9BC10:
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9BC2C;
      }
      goto L_08A9BC18;
    }
L_08A9BC18:
    ctx.set_gpr(31, 0x08A9BC20u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 96u, 0x08A946D4u>(ctx, &aot_mem) && ctx.pc == 0x08A9BC20u) goto L_08A9BC20;
    return;
L_08A9BC20:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 34 ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
        goto L_08A9B83C;
    }
    goto L_08A9BC2C;
L_08A9BC2C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_08A9BC30;
L_08A9BC30:
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(352));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9BC5C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < 14 ? 1u : 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
      if (branch_taken) {
          goto L_08A9BCBC;
      }
      goto L_08A9BC84;
    }
L_08A9BC84:
    ctx.set_gpr(31, 0x08A9BC8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08A9BC8Cu) goto L_08A9BC8C;
    return;
L_08A9BC8C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9BC98u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 431u, 0x0885DA14u>(ctx, &aot_mem) && ctx.pc == 0x08A9BC98u) goto L_08A9BC98;
    return;
L_08A9BC98:
    ctx.set_gpr(31, 0x08A9BCA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08A9BCA0u) goto L_08A9BCA0;
    return;
L_08A9BCA0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A9BCB4u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 303u, 0x0885D188u>(ctx, &aot_mem) && ctx.pc == 0x08A9BCB4u) goto L_08A9BCB4;
    return;
L_08A9BCB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9BCE8;
      }
      goto L_08A9BCBC;
    }
L_08A9BCBC:
    ctx.set_gpr(31, 0x08A9BCC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08A9BCC4u) goto L_08A9BCC4;
    return;
L_08A9BCC4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A9BCD0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(13));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 431u, 0x0885DA14u>(ctx, &aot_mem) && ctx.pc == 0x08A9BCD0u) goto L_08A9BCD0;
    return;
L_08A9BCD0:
    ctx.set_gpr(31, 0x08A9BCD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08A9BCD8u) goto L_08A9BCD8;
    return;
L_08A9BCD8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(31, 0x08A9BCE8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 303u, 0x0885D188u>(ctx, &aot_mem) && ctx.pc == 0x08A9BCE8u) goto L_08A9BCE8;
    return;
L_08A9BCE8:
    ctx.set_gpr(31, 0x08A9BCF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 195u, 0x08848CB4u>(ctx, &aot_mem) && ctx.pc == 0x08A9BCF0u) goto L_08A9BCF0;
    return;
L_08A9BCF0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A9BD00u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    if (rt.invoke_chained_direct<&recomp_unit_0022_entry, 22u, 350u, 0x0885D4A4u>(ctx, &aot_mem) && ctx.pc == 0x08A9BD00u) goto L_08A9BD00;
    return;
L_08A9BD00:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9BD1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_08A9BEC4;
      }
      goto L_08A9BD54;
    }
L_08A9BD54:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    goto L_08A9BD58;
L_08A9BD58:
    ctx.set_gpr(16, ctx.gpr[19] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[4] != ctx.gpr[3]) {
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(31));
        goto L_08A9BE40;
    }
    goto L_08A9BD6C;
L_08A9BD6C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[5] != ctx.gpr[2]) {
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_08A9BDB4;
    }
    goto L_08A9BD7C;
L_08A9BD7C:
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08A9BD88u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 312u, 0x08855740u>(ctx, &aot_mem) && ctx.pc == 0x08A9BD88u) goto L_08A9BD88;
    return;
L_08A9BD88:
    ctx.set_gpr(3, 49024u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(3, 18371u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 20480u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08A9BE1C;
      }
      goto L_08A9BDB4;
    }
L_08A9BDB4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(32));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
        goto L_08A9BDF4;
    }
    goto L_08A9BDC0;
L_08A9BDC0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A9BDCCu);
    ctx.set_gpr(21, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 122u, 0x08A948B8u>(ctx, &aot_mem) && ctx.pc == 0x08A9BDCCu) goto L_08A9BDCC;
    return;
L_08A9BDCC:
    ctx.set_gpr(3, 18371u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 20480u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(12500));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08A9BE1C;
      }
      goto L_08A9BDF4;
    }
L_08A9BDF4:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08A9BE00u);
    ctx.set_gpr(21, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 122u, 0x08A948B8u>(ctx, &aot_mem) && ctx.pc == 0x08A9BE00u) goto L_08A9BE00;
    return;
L_08A9BE00:
    ctx.set_gpr(3, 18371u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 20480u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_08A9BE1C;
L_08A9BE1C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(16496));
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(18, ctx.gpr[3] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A9BEB0;
      }
      goto L_08A9BE40;
    }
L_08A9BE40:
    if (ctx.gpr[4] != ctx.gpr[3]) {
    ctx.set_gpr(3, 2226u << 16u);
        goto L_08A9BE98;
    }
    goto L_08A9BE48;
L_08A9BE48:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A9BE5Cu);
    ctx.set_gpr(21, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 132u, 0x08A9497Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9BE5Cu) goto L_08A9BE5C;
    return;
L_08A9BE5C:
    ctx.set_gpr(3, 17530u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(3, 2226u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(16496));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(18, ctx.gpr[3] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A9BEB0;
      }
      goto L_08A9BE98;
    }
L_08A9BE98:
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(16496));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[3]);
    ctx.set_gpr(18, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    goto L_08A9BEB0;
L_08A9BEB0:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
        goto L_08A9BD58;
    }
    goto L_08A9BEC4;
L_08A9BEC4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9BEE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08A9BF28;
      }
      goto L_08A9BF10;
    }
L_08A9BF10:
    if (ctx.gpr[17] == ctx.gpr[2]) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
        goto L_08A9BF2C;
    }
    goto L_08A9BF18;
L_08A9BF18:
    ctx.set_gpr(31, 0x08A9BF20u);
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 150u, 0x08A94B5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9BF20u) goto L_08A9BF20;
    return;
L_08A9BF20:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A9BF3C;
      }
      goto L_08A9BF28;
    }
L_08A9BF28:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_08A9BF2C;
L_08A9BF2C:
    ctx.set_gpr(31, 0x08A9BF34u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 150u, 0x08A94B5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9BF34u) goto L_08A9BF34;
    return;
L_08A9BF34:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    goto L_08A9BF3C;
L_08A9BF3C:
    ctx.set_gpr(2, ctx.gpr[18] << 2u);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(4, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08A9BFD8;
      }
      goto L_08A9BF58;
    }
L_08A9BF58:
    ctx.set_gpr(4, 1u << 16u);
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(1, ctx.gpr[1] | 100u);
    ctx.set_gpr(8, ctx.gpr[5] + ctx.gpr[1]);
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(16496));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] << 2u);
    goto L_08A9BF80;
L_08A9BF80:
    ctx.set_gpr(4, ctx.gpr[9] + ctx.gpr[4]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[7] != ctx.gpr[6]) {
    ctx.set_gpr(4, ctx.gpr[7] << 2u);
        goto L_08A9BFB8;
    }
    goto L_08A9BF90;
L_08A9BF90:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08A9BFDC;
    }
    goto L_08A9BFA0;
L_08A9BFA0:
    ctx.set_gpr(4, ctx.gpr[7] << 2u);
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A9BFC8;
      }
      goto L_08A9BFB8;
    }
L_08A9BFB8:
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_08A9BFC8;
L_08A9BFC8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.set_gpr(4, ctx.gpr[2] << 2u);
        goto L_08A9BF80;
    }
    goto L_08A9BFD8;
L_08A9BFD8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08A9BFDC;
L_08A9BFDC:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9BFF0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    ctx.pc = 0x08A9C000u; return;
}

void recomp_unit_0165(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0165_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_165(Runtime &runtime) {
    runtime.register_generated_unit(165u, 0x08A98000u, 16384u, &recomp_unit_0165, &recomp_unit_0165_entry);
    runtime.register_function(0x08A98004u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98028u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98058u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9805Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9807Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A980A0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A980D0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A980ECu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9811Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98128u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98130u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98140u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98154u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98160u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98170u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9818Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A981A0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A981B8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A981CCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A981D0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A981D8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A981FCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98200u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98208u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98214u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98218u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98220u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98248u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98258u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9825Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98264u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98268u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98270u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98294u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A982A4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A982A8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A982B0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A982B4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A982BCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A982C0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98390u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98394u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9839Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A983A0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A983C8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A983CCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A983E8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9840Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A986E8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98708u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98744u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98758u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98764u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9876Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A989D4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A989F4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98A30u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98A44u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98A54u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98CC0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98CC8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98F30u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98F50u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98F74u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98F88u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98F94u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98F9Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98FB4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98FB8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98FF0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A98FF4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99000u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99020u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99034u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9905Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99064u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9906Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99084u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A990A0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A990B0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A990C4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A990D0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A990D8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A990DCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A990F4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99104u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99110u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99114u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99118u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99128u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99150u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9915Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99164u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99174u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99188u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99194u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A991A4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A991C0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A991D4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A991ECu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99200u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99204u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9920Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99230u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99234u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9923Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99248u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9924Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99254u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9927Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9928Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99290u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99298u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9929Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A992A4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A992C8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A992D8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A992DCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A992E4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A992E8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A992F0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A992F4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A993C4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A993C8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A993D0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A993D4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A993FCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99400u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9941Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99440u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A994A0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A994BCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A994F0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99504u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99510u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99518u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99520u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9953Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99544u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99564u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99580u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A995B4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A995C8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A995D8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A995E0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A995FCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99604u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9962Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99634u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9963Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99658u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99660u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99680u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9969Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A996C0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A996D4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A996E0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A996E8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99700u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99704u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9973Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99740u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9974Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9976Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99780u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A997A8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A997ACu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A997B4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A997C0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A997CCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A997D0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A997D8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A997E0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A997F0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99800u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9981Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99864u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9987Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9988Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99898u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A998A8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A998B4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A998C4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A998E0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A998F8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99900u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99938u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99950u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99A0Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99A18u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99A20u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99A2Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99A38u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99A5Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99A70u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99A78u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99A8Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99A94u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99AA0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99AC4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99AD4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99AD8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99B14u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99B28u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99B40u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99B4Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99B54u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99B5Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99B64u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99B68u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99B70u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99B88u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99B90u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99B9Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99BA4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99BACu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99BD0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99BE0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99BF4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99BF8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99C20u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99C28u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99C38u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99C58u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99C5Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99C70u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99C94u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99CB8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99CC4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99CCCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99CD4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99CF0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99CF8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99D00u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99D08u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99D3Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99D60u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99D80u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99D84u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99DBCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99DC4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99DD4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99DFCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99E04u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99E0Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99E60u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99E80u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99EB8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99EC0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99ED0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99F14u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99F34u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99F6Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99F74u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99F84u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99FC8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A99FE8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A020u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A028u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A038u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A03Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A044u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A098u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A0B8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A0F0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A0F8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A108u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A10Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A110u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A11Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A124u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A138u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A158u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A164u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A174u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A19Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A1A0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A1ACu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A238u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A244u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A254u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A264u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A298u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A2A8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A2BCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A2E4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A2F4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A308u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A30Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A318u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A33Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A344u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A350u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A368u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A36Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A380u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A384u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A39Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A3A4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A3B4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A3C0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A3CCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A3D4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A3D8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A3ECu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A3F8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A404u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A408u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A41Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A420u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A438u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A440u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A450u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A45Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A468u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A470u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A474u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A48Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A4BCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A4C8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A4E0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A4E4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A4FCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A504u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A514u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A520u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A528u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A554u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A560u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A578u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A57Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A594u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A59Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A5ACu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A5B8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A5BCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A5D0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A5DCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A5F4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A600u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A63Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A640u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A678u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A688u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A69Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A6BCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A6C8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A6D4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A6DCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A6E4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A6ECu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A6F4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A700u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A708u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A714u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A718u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A734u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A73Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A75Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A770u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A780u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A78Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A794u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A7A4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A7ACu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A7BCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A7C8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A7D8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A7E8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A808u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A81Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A828u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A83Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A84Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A86Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A880u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A88Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A890u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A8A4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A8C4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A8D0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A8DCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A8E4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A8ECu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A8F4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A8FCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A908u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A910u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A91Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A920u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A93Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A944u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A964u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A978u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A988u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A994u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A99Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A9ACu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A9B4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A9C4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9A9D0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AAD4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AAE4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AAF4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AB04u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AB24u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AB38u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AB40u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AB4Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AB6Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AB9Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ABD0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ABD8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AC0Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AC18u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AC2Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AC3Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AC5Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AC70u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AC7Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AC80u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AC94u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ACB4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ACC0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ACC8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ACD0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ACD8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ACE0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ACECu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ACF4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AD00u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AD04u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AD1Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AD24u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AD44u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AD58u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AD68u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AD74u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AD7Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AD8Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ADA0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ADB0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ADD0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ADE4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ADF0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9ADF4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AE08u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AE2Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AE48u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AE60u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AE84u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AEA8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AEC4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AEDCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AF00u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AF08u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AF20u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AF2Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AF34u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AF3Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AF4Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AF7Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AF84u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AF8Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AF94u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AFA8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AFBCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AFCCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AFDCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AFE4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9AFF8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B018u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B02Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B05Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B074u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B0A0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B0D0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B0D8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B0E4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B0ECu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B0F4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B0FCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B104u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B13Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B148u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B164u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B180u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B1C4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B1D0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B1E4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B1ECu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B1FCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B210u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B230u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B234u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B23Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B248u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B260u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B26Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B278u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B280u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B28Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B2A4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B2ACu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B2B8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B2C4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B2D4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B2D8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B2F4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B320u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B340u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B350u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B370u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B378u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B394u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B398u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B3A4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B3B8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B3BCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B3C4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B3E8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B3ECu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B3F8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B40Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B410u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B424u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B44Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B458u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B460u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B468u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B474u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B478u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B484u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B498u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B4B0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B4C4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B4D0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B4F0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B528u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B534u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B53Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B550u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B5A8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B5B0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B5BCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B5CCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B5D4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B5DCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B5E8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B5F4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B5F8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B600u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B608u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B610u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B624u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B634u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B640u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B64Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B654u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B65Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B664u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B670u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B678u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B688u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B6BCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B6CCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B700u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B70Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B720u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B724u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B72Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B7A0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B7B0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B7BCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B7D8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B7DCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B7ECu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B7F8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B808u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B80Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B814u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B820u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B828u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B830u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B83Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B848u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B854u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B860u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B868u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B878u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B888u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B898u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B8B4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B8BCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B8CCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B8E8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B9A0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B9B0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B9C4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B9CCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B9D4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B9E0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9B9E8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BA0Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BAACu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BABCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BAD0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BAE0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BAE8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BAF4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BB08u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BB0Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BB14u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BB1Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BB28u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BB30u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BBE4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BBF4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BC08u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BC0Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BC10u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BC18u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BC20u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BC2Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BC30u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BC5Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BC84u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BC8Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BC98u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BCA0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BCB4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BCBCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BCC4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BCD0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BCD8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BCE8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BCF0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BD00u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BD1Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BD54u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BD58u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BD6Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BD7Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BD88u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BDB4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BDC0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BDCCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BDF4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BE00u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BE1Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BE40u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BE48u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BE5Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BE98u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BEB0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BEC4u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BEE8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BF10u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BF18u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BF20u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BF28u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BF2Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BF34u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BF3Cu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BF58u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BF80u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BF90u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BFA0u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BFB8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BFC8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BFD8u, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BFDCu, &recomp_unit_0165, "recomp_unit_0165");
    runtime.register_function(0x08A9BFF0u, &recomp_unit_0165, "recomp_unit_0165");
}
} // namespace psprecomp
