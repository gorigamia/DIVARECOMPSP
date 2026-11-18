#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0113[4094] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 5, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0,
    0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 24, 0, 0, 0, 0, 0, 25, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 29, 0, 30, 0, 0, 31, 32, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 36, 0, 0, 37, 38, 0, 0,
    39, 0, 0, 40, 0, 0, 41, 0, 0, 42, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0,
    0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0,
    0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 53, 0, 0, 54, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 57, 0, 0, 0, 58,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 62,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0,
    0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 0, 71, 72, 0, 0, 73, 0, 74, 0, 75, 0, 0, 76, 0, 0, 77, 0, 78,
    79, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0,
    0, 0, 95, 96, 0, 97, 0, 0, 98, 0, 99, 0, 0, 100, 0, 101, 0, 0, 0, 0, 102, 0, 0, 103, 0, 104, 0, 0, 0, 105, 0, 106,
    0, 0, 0, 107, 0, 0, 108, 0, 0, 0, 0, 0, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 111, 112, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0,
    123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 127, 0,
    0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 137, 0, 0, 0,
    0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 141, 0, 0, 0, 142, 0, 0, 143, 0, 0, 0, 0, 0, 0, 144, 0, 0, 145, 0, 0, 146, 0, 0, 0, 0, 0, 0, 147, 0, 0, 148,
    0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0,
    0, 0, 0, 152, 0, 153, 154, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 158, 159, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 162, 0, 0, 0, 0, 0, 163, 0, 0, 164, 0, 0, 0,
    0, 165, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 174, 0, 0, 0,
    0, 175, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 178, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 180,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 183, 0, 184, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 188, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 192, 0, 193, 0, 0, 0,
    0, 0, 194, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0,
    0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 207, 0, 0, 0, 208,
    0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 213, 0, 0, 214, 0, 215, 0, 216, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 221, 0, 0, 0, 222, 0, 223, 0, 0, 0, 224, 0, 0, 225, 0, 0, 226,
    0, 0, 227, 0, 0, 228, 0, 229, 0, 0, 230, 0, 0, 231, 0, 0, 232, 0, 233, 234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 237, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 240, 0, 0,
    0, 241, 0, 0, 242, 0, 0, 243, 0, 0, 244, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 247, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 250, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0,
    0, 253, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0,
    0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 268, 0, 0, 269, 0, 0, 0, 0, 0, 0, 270, 0, 0,
    0, 271, 0, 272, 0, 0, 273, 0, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 281, 0, 0, 282, 0, 0,
    283, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0,
    288, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 291, 0, 292, 293, 0, 0, 0, 0, 0,
    0, 0, 294, 0, 295, 0, 0, 296, 0, 0, 0, 297, 0, 0, 298, 299, 0, 300, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 302, 0, 303,
    0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 307,
    0, 0, 0, 0, 0, 0, 308, 309, 0, 0, 310, 311, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 314, 0, 0, 0,
    315, 0, 316, 0, 0, 0, 0, 317, 0, 318, 0, 0, 319, 0, 320, 0, 0, 321, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 325, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 329, 0, 0,
    330, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 333, 334, 335, 0, 0, 336, 337, 0, 0, 338, 0, 339, 0, 0, 340, 0, 341, 342,
    343, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 350, 0, 0, 351, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 352, 353, 354, 0, 0, 355, 0, 0, 0, 0, 356, 0, 0, 357, 358, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0,
    360, 361, 0, 0, 362, 0, 0, 0, 363, 364, 0, 0, 0, 0, 365, 0, 0, 366, 367, 0, 0, 0, 0, 0, 0, 0, 368, 0, 369, 370, 0, 0,
    371, 0, 0, 0, 0, 372, 0, 0, 373, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 376, 377, 0, 0, 378, 0, 0, 0, 0, 379, 0,
    0, 380, 381, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 383, 0, 0, 384, 0, 0, 0, 0, 385, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 388, 0, 0, 0, 389, 0, 0, 0, 0, 390, 0, 0,
    0, 0, 0, 0, 0, 391, 0, 0, 392, 0, 0, 393, 0, 0, 0, 0, 394, 0, 0, 395, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0,
    397, 0, 0, 0, 0, 0, 0, 398, 399, 0, 0, 400, 0, 0, 401, 402, 0, 403, 0, 0, 0, 0, 404, 0, 0, 0, 0, 405, 0, 406, 0, 0,
    407, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 409, 0, 410, 0, 0, 0, 0, 411, 0, 0, 0, 412, 0, 413, 0, 0, 0, 0, 414, 0, 0,
    0, 415, 0, 416, 0, 0, 0, 0, 417, 0, 0, 0, 418, 0, 0, 0, 419, 0, 0, 420, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 422, 0,
    0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 425, 0, 0, 426, 0, 0, 0, 0, 0, 0, 427, 0, 428, 0, 0, 0,
    0, 0, 0, 429, 0, 430, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 432, 0, 433, 0, 0, 0, 0, 0, 0, 434, 0, 435, 0, 0, 0, 436,
    0, 437, 0, 438, 0, 0, 0, 0, 0, 0, 439, 0, 440, 0, 0, 0, 0, 0, 0, 441, 0, 442, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0,
    444, 0, 445, 0, 0, 0, 0, 0, 0, 446, 0, 447, 0, 0, 0, 448, 0, 449, 0, 450, 0, 0, 0, 0, 0, 0, 451, 0, 452, 0, 0, 0,
    0, 0, 0, 453, 0, 454, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 456, 0, 457, 0, 0, 0, 0, 0, 0, 458, 0, 459, 0, 0, 0, 460,
    0, 461, 0, 462, 0, 463, 0, 0, 0, 0, 0, 0, 0, 464, 0, 465, 0, 0, 0, 0, 0, 0, 466, 0, 467, 0, 0, 0, 468, 0, 0, 0,
    0, 0, 0, 469, 0, 470, 0, 0, 0, 0, 0, 0, 471, 0, 472, 0, 0, 0, 473, 0, 474, 0, 475, 0, 0, 0, 0, 0, 0, 476, 0, 477,
    0, 0, 0, 0, 0, 0, 478, 0, 479, 0, 0, 480, 0, 0, 0, 481, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 483, 0, 484, 0, 0, 0,
    0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 487, 0, 0, 488, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491,
    492, 0, 0, 493, 0, 0, 494, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 498, 0,
    0, 499, 0, 0, 500, 0, 0, 0, 501, 0, 0, 502, 503, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 506, 507, 0, 0, 508, 0, 0, 509, 0, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 512,
    513, 0, 0, 514, 0, 0, 515, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 519, 0, 0, 520, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 523, 0, 0, 524, 0, 0,
    0, 0, 0, 0, 0, 525, 0, 0, 526, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 530, 0,
    0, 531, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 536, 0, 0, 0, 0, 0,
    0, 0, 537, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 540, 541, 0, 0, 542, 0, 0, 543, 0, 0, 544, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 545, 0, 0, 546, 0, 0, 0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 549, 550, 0, 0,
    0, 551, 0, 0, 0, 0, 0, 0, 0, 552, 553, 0, 0, 554, 0, 0, 555, 0, 0, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 557, 0, 0, 0, 0, 0, 0, 0, 0, 0, 558, 0, 559, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 561, 0, 562, 0, 0, 0, 0, 0, 563, 0, 0, 0, 0, 0, 0, 0, 564, 565, 0, 0, 566, 567, 0, 0, 568, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 569, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 0, 0, 0, 0, 0, 0, 0, 571, 0, 0, 0, 0, 0, 572,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 573, 0, 0, 0, 574, 575, 0, 0, 0, 0, 576, 0, 0, 0, 0, 0, 0, 0,
    0, 577, 0, 0, 0, 0, 0, 0, 0, 0, 0, 578, 0, 0, 579, 580, 0, 0, 581, 0, 0, 582, 583, 0, 0, 0, 0, 0, 584, 0, 0, 0,
    0, 585, 0, 0, 0, 0, 586, 0, 587, 0, 0, 0, 0, 0, 588, 0, 0, 0, 0, 0, 0, 0, 589, 0, 590, 0, 0, 0, 591, 0, 0, 0,
    0, 592, 593, 0, 0, 594, 0, 595, 0, 0, 0, 0, 596, 0, 0, 0, 0, 0, 597, 0, 598, 0, 599, 0, 600, 0, 601, 0, 0, 0, 0, 0,
    0, 0, 0, 602, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 603, 0, 0, 0, 0, 604, 0, 0, 0, 0, 0, 605, 0, 0, 606, 0, 0,
    0, 0, 0, 0, 607, 0, 0, 0, 0, 0, 0, 608, 0, 609, 0, 0, 0, 0, 0, 0, 0, 610, 0, 0, 0, 0, 0, 0, 611, 0, 0, 0,
    0, 612, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 613, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 614, 0, 0, 0, 0, 615,
    0, 0, 616, 0, 0, 617, 0, 0, 618, 0, 0, 619, 0, 0, 620, 0, 0, 621, 0, 0, 622, 0, 0, 623, 0, 0, 624, 0, 0, 625, 0, 0,
    626, 0, 0, 627, 0, 0, 628, 0, 0, 629, 0, 0, 630, 0, 0, 631, 0, 0, 632, 0, 0, 633, 0, 0, 634, 0, 0, 635, 0, 0, 636, 0,
    0, 637, 0, 0, 638, 0, 0, 639, 0, 0, 640, 0, 0, 641, 0, 0, 642, 0, 0, 643, 0, 0, 644, 0, 0, 645, 0, 0, 646, 0, 0, 647,
    0, 0, 648, 0, 0, 649, 0, 0, 650, 0, 0, 651, 0, 0, 652, 0, 0, 653, 0, 0, 654, 0, 0, 655, 0, 0, 656, 0, 657, 0, 0, 0,
    0, 658, 0, 0, 0, 0, 0, 0, 0, 0, 659, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 660, 0, 0, 661, 0, 0, 0, 0, 0,
    662, 0, 0, 0, 0, 0, 0, 0, 0, 0, 663, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 664, 0, 0, 0, 0, 0, 665, 0, 0, 0, 0, 0, 666, 0, 0, 0, 0, 667, 0, 0, 0, 0,
    0, 0, 0, 0, 668, 0, 0, 0, 669, 0, 0, 0, 0, 0, 0, 670, 0, 0, 0, 0, 0, 671, 0, 0, 0, 0, 0, 672, 0, 0, 0, 0,
    0, 673, 0, 0, 0, 0, 0, 674, 0, 0, 0, 675, 0, 0, 0, 0, 0, 0, 0, 676, 0, 0, 677, 0, 0, 0, 678, 0, 0, 0, 0, 0,
    679, 0, 0, 0, 680, 681, 0, 682, 683, 0, 0, 0, 0, 0, 0, 684, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 685, 0, 0, 0, 0,
    686, 0, 0, 0, 0, 0, 0, 687, 0, 0, 0, 0, 688, 0, 0, 0, 0, 0, 0, 0, 0, 0, 689, 0, 690, 0, 0, 0, 0, 0, 0, 0,
    0, 691, 0, 0, 0, 0, 0, 692, 0, 0, 0, 0, 0, 0, 0, 0, 693, 0, 0, 694, 0, 0, 695, 0, 0, 696, 0, 0, 0, 697, 0, 0,
    0, 0, 698, 0, 0, 0, 0, 699, 0, 0, 700, 0, 701, 0, 702, 0, 0, 703, 0, 0, 0, 704, 0, 705, 0, 0, 0, 706, 0, 707,
};
void recomp_unit_0113_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089C8004u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0113[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089C8004;
    case 2u: goto L_089C801C;
    case 3u: goto L_089C8030;
    case 4u: goto L_089C8044;
    case 5u: goto L_089C8054;
    case 6u: goto L_089C8058;
    case 7u: goto L_089C8080;
    case 8u: goto L_089C80B0;
    case 9u: goto L_089C80B8;
    case 10u: goto L_089C80C8;
    case 11u: goto L_089C80F4;
    case 12u: goto L_089C8110;
    case 13u: goto L_089C8124;
    case 14u: goto L_089C8138;
    case 15u: goto L_089C816C;
    case 16u: goto L_089C8194;
    case 17u: goto L_089C81BC;
    case 18u: goto L_089C81CC;
    case 19u: goto L_089C81F0;
    case 20u: goto L_089C8218;
    case 21u: goto L_089C8224;
    case 22u: goto L_089C8230;
    case 23u: goto L_089C8248;
    case 24u: goto L_089C8288;
    case 25u: goto L_089C82A0;
    case 26u: goto L_089C82AC;
    case 27u: goto L_089C82BC;
    case 28u: goto L_089C82D8;
    case 29u: goto L_089C82E4;
    case 30u: goto L_089C82EC;
    case 31u: goto L_089C82F8;
    case 32u: goto L_089C82FC;
    case 33u: goto L_089C8334;
    case 34u: goto L_089C834C;
    case 35u: goto L_089C8360;
    case 36u: goto L_089C8368;
    case 37u: goto L_089C8374;
    case 38u: goto L_089C8378;
    case 39u: goto L_089C8384;
    case 40u: goto L_089C8390;
    case 41u: goto L_089C839C;
    case 42u: goto L_089C83A8;
    case 43u: goto L_089C83B4;
    case 44u: goto L_089C83C4;
    case 45u: goto L_089C83EC;
    case 46u: goto L_089C8410;
    case 47u: goto L_089C8434;
    case 48u: goto L_089C8458;
    case 49u: goto L_089C847C;
    case 50u: goto L_089C84A0;
    case 51u: goto L_089C84B0;
    case 52u: goto L_089C84C0;
    case 53u: goto L_089C84CC;
    case 54u: goto L_089C84D8;
    case 55u: goto L_089C84E4;
    case 56u: goto L_089C8564;
    case 57u: goto L_089C8570;
    case 58u: goto L_089C8580;
    case 59u: goto L_089C85A8;
    case 60u: goto L_089C85D0;
    case 61u: goto L_089C85DC;
    case 62u: goto L_089C8600;
    case 63u: goto L_089C8628;
    case 64u: goto L_089C8648;
    case 65u: goto L_089C8654;
    case 66u: goto L_089C8660;
    case 67u: goto L_089C867C;
    case 68u: goto L_089C8688;
    case 69u: goto L_089C86A4;
    case 70u: goto L_089C86B0;
    case 71u: goto L_089C86C0;
    case 72u: goto L_089C86C4;
    case 73u: goto L_089C86D0;
    case 74u: goto L_089C86D8;
    case 75u: goto L_089C86E0;
    case 76u: goto L_089C86EC;
    case 77u: goto L_089C86F8;
    case 78u: goto L_089C8700;
    case 79u: goto L_089C8704;
    case 80u: goto L_089C8718;
    case 81u: goto L_089C87DC;
    case 82u: goto L_089C87EC;
    case 83u: goto L_089C8820;
    case 84u: goto L_089C8840;
    case 85u: goto L_089C884C;
    case 86u: goto L_089C8868;
    case 87u: goto L_089C8874;
    case 88u: goto L_089C889C;
    case 89u: goto L_089C88B0;
    case 90u: goto L_089C88D0;
    case 91u: goto L_089C88D8;
    case 92u: goto L_089C8924;
    case 93u: goto L_089C893C;
    case 94u: goto L_089C8970;
    case 95u: goto L_089C898C;
    case 96u: goto L_089C8990;
    case 97u: goto L_089C8998;
    case 98u: goto L_089C89A4;
    case 99u: goto L_089C89AC;
    case 100u: goto L_089C89B8;
    case 101u: goto L_089C89C0;
    case 102u: goto L_089C89D4;
    case 103u: goto L_089C89E0;
    case 104u: goto L_089C89E8;
    case 105u: goto L_089C89F8;
    case 106u: goto L_089C8A00;
    case 107u: goto L_089C8A10;
    case 108u: goto L_089C8A1C;
    case 109u: goto L_089C8A38;
    case 110u: goto L_089C8A40;
    case 111u: goto L_089C8A5C;
    case 112u: goto L_089C8A60;
    case 113u: goto L_089C8B04;
    case 114u: goto L_089C8B40;
    case 115u: goto L_089C8B5C;
    case 116u: goto L_089C8BA0;
    case 117u: goto L_089C8BAC;
    case 118u: goto L_089C8BC0;
    case 119u: goto L_089C8BD4;
    case 120u: goto L_089C8BF0;
    case 121u: goto L_089C8C38;
    case 122u: goto L_089C8C78;
    case 123u: goto L_089C8C84;
    case 124u: goto L_089C8CAC;
    case 125u: goto L_089C8CD0;
    case 126u: goto L_089C8CDC;
    case 127u: goto L_089C8CFC;
    case 128u: goto L_089C8D08;
    case 129u: goto L_089C8D34;
    case 130u: goto L_089C8D4C;
    case 131u: goto L_089C8D88;
    case 132u: goto L_089C8E94;
    case 133u: goto L_089C8EA0;
    case 134u: goto L_089C8EB4;
    case 135u: goto L_089C8ED8;
    case 136u: goto L_089C8EE8;
    case 137u: goto L_089C8EF4;
    case 138u: goto L_089C8F08;
    case 139u: goto L_089C8F3C;
    case 140u: goto L_089C8F60;
    case 141u: goto L_089C8F88;
    case 142u: goto L_089C8F98;
    case 143u: goto L_089C8FA4;
    case 144u: goto L_089C8FC0;
    case 145u: goto L_089C8FCC;
    case 146u: goto L_089C8FD8;
    case 147u: goto L_089C8FF4;
    case 148u: goto L_089C9000;
    case 149u: goto L_089C9014;
    case 150u: goto L_089C906C;
    case 151u: goto L_089C9078;
    case 152u: goto L_089C9090;
    case 153u: goto L_089C9098;
    case 154u: goto L_089C909C;
    case 155u: goto L_089C90BC;
    case 156u: goto L_089C90C8;
    case 157u: goto L_089C90E0;
    case 158u: goto L_089C90E8;
    case 159u: goto L_089C90EC;
    case 160u: goto L_089C913C;
    case 161u: goto L_089C9148;
    case 162u: goto L_089C9150;
    case 163u: goto L_089C9168;
    case 164u: goto L_089C9174;
    case 165u: goto L_089C9188;
    case 166u: goto L_089C9190;
    case 167u: goto L_089C91B4;
    case 168u: goto L_089C91E0;
    case 169u: goto L_089C9224;
    case 170u: goto L_089C9234;
    case 171u: goto L_089C9244;
    case 172u: goto L_089C9258;
    case 173u: goto L_089C926C;
    case 174u: goto L_089C9274;
    case 175u: goto L_089C9288;
    case 176u: goto L_089C9294;
    case 177u: goto L_089C92C0;
    case 178u: goto L_089C92C4;
    case 179u: goto L_089C92E4;
    case 180u: goto L_089C9300;
    case 181u: goto L_089C9328;
    case 182u: goto L_089C9348;
    case 183u: goto L_089C9368;
    case 184u: goto L_089C9370;
    case 185u: goto L_089C93AC;
    case 186u: goto L_089C93DC;
    case 187u: goto L_089C93EC;
    case 188u: goto L_089C93FC;
    case 189u: goto L_089C942C;
    case 190u: goto L_089C9430;
    case 191u: goto L_089C9554;
    case 192u: goto L_089C956C;
    case 193u: goto L_089C9574;
    case 194u: goto L_089C958C;
    case 195u: goto L_089C9598;
    case 196u: goto L_089C95A8;
    case 197u: goto L_089C95C8;
    case 198u: goto L_089C95D4;
    case 199u: goto L_089C95E4;
    case 200u: goto L_089C95FC;
    case 201u: goto L_089C9608;
    case 202u: goto L_089C9618;
    case 203u: goto L_089C9630;
    case 204u: goto L_089C963C;
    case 205u: goto L_089C964C;
    case 206u: goto L_089C9664;
    case 207u: goto L_089C9670;
    case 208u: goto L_089C9680;
    case 209u: goto L_089C9698;
    case 210u: goto L_089C9738;
    case 211u: goto L_089C9750;
    case 212u: goto L_089C9764;
    case 213u: goto L_089C979C;
    case 214u: goto L_089C97A8;
    case 215u: goto L_089C97B0;
    case 216u: goto L_089C97B8;
    case 217u: goto L_089C97C4;
    case 218u: goto L_089C97D8;
    case 219u: goto L_089C97E8;
    case 220u: goto L_089C983C;
    case 221u: goto L_089C9840;
    case 222u: goto L_089C9850;
    case 223u: goto L_089C9858;
    case 224u: goto L_089C9868;
    case 225u: goto L_089C9874;
    case 226u: goto L_089C9880;
    case 227u: goto L_089C988C;
    case 228u: goto L_089C9898;
    case 229u: goto L_089C98A0;
    case 230u: goto L_089C98AC;
    case 231u: goto L_089C98B8;
    case 232u: goto L_089C98C4;
    case 233u: goto L_089C98CC;
    case 234u: goto L_089C98D0;
    case 235u: goto L_089C98F8;
    case 236u: goto L_089C9938;
    case 237u: goto L_089C9944;
    case 238u: goto L_089C9960;
    case 239u: goto L_089C9970;
    case 240u: goto L_089C9978;
    case 241u: goto L_089C9988;
    case 242u: goto L_089C9994;
    case 243u: goto L_089C99A0;
    case 244u: goto L_089C99AC;
    case 245u: goto L_089C99B4;
    case 246u: goto L_089C99E0;
    case 247u: goto L_089C9A14;
    case 248u: goto L_089C9A20;
    case 249u: goto L_089C9A3C;
    case 250u: goto L_089C9A4C;
    case 251u: goto L_089C9A54;
    case 252u: goto L_089C9A64;
    case 253u: goto L_089C9A88;
    case 254u: goto L_089C9A94;
    case 255u: goto L_089C9AB8;
    case 256u: goto L_089C9AE4;
    case 257u: goto L_089C9B20;
    case 258u: goto L_089C9B44;
    case 259u: goto L_089C9B68;
    case 260u: goto L_089C9B8C;
    case 261u: goto L_089C9BB0;
    case 262u: goto L_089C9BD4;
    case 263u: goto L_089C9C24;
    case 264u: goto L_089C9C30;
    case 265u: goto L_089C9D08;
    case 266u: goto L_089C9D38;
    case 267u: goto L_089C9DC4;
    case 268u: goto L_089C9DD0;
    case 269u: goto L_089C9DDC;
    case 270u: goto L_089C9DF8;
    case 271u: goto L_089C9E08;
    case 272u: goto L_089C9E10;
    case 273u: goto L_089C9E1C;
    case 274u: goto L_089C9E28;
    case 275u: goto L_089C9E3C;
    case 276u: goto L_089C9E54;
    case 277u: goto L_089C9E7C;
    case 278u: goto L_089C9EB0;
    case 279u: goto L_089C9EF4;
    case 280u: goto L_089C9F60;
    case 281u: goto L_089C9F6C;
    case 282u: goto L_089C9F78;
    case 283u: goto L_089C9F84;
    case 284u: goto L_089C9FA8;
    case 285u: goto L_089C9FB0;
    case 286u: goto L_089C9FC0;
    case 287u: goto L_089C9FF4;
    case 288u: goto L_089CA004;
    case 289u: goto L_089CA01C;
    case 290u: goto L_089CA044;
    case 291u: goto L_089CA060;
    case 292u: goto L_089CA068;
    case 293u: goto L_089CA06C;
    case 294u: goto L_089CA08C;
    case 295u: goto L_089CA094;
    case 296u: goto L_089CA0A0;
    case 297u: goto L_089CA0B0;
    case 298u: goto L_089CA0BC;
    case 299u: goto L_089CA0C0;
    case 300u: goto L_089CA0C8;
    case 301u: goto L_089CA0EC;
    case 302u: goto L_089CA0F8;
    case 303u: goto L_089CA100;
    case 304u: goto L_089CA118;
    case 305u: goto L_089CA150;
    case 306u: goto L_089CA15C;
    case 307u: goto L_089CA180;
    case 308u: goto L_089CA19C;
    case 309u: goto L_089CA1A0;
    case 310u: goto L_089CA1AC;
    case 311u: goto L_089CA1B0;
    case 312u: goto L_089CA1B8;
    case 313u: goto L_089CA1E4;
    case 314u: goto L_089CA1F4;
    case 315u: goto L_089CA204;
    case 316u: goto L_089CA20C;
    case 317u: goto L_089CA220;
    case 318u: goto L_089CA228;
    case 319u: goto L_089CA234;
    case 320u: goto L_089CA23C;
    case 321u: goto L_089CA248;
    case 322u: goto L_089CA264;
    case 323u: goto L_089CA2A4;
    case 324u: goto L_089CA2E8;
    case 325u: goto L_089CA2F0;
    case 326u: goto L_089CA318;
    case 327u: goto L_089CA348;
    case 328u: goto L_089CA36C;
    case 329u: goto L_089CA378;
    case 330u: goto L_089CA384;
    case 331u: goto L_089CA390;
    case 332u: goto L_089CA3B4;
    case 333u: goto L_089CA3BC;
    case 334u: goto L_089CA3C0;
    case 335u: goto L_089CA3C4;
    case 336u: goto L_089CA3D0;
    case 337u: goto L_089CA3D4;
    case 338u: goto L_089CA3E0;
    case 339u: goto L_089CA3E8;
    case 340u: goto L_089CA3F4;
    case 341u: goto L_089CA3FC;
    case 342u: goto L_089CA400;
    case 343u: goto L_089CA404;
    case 344u: goto L_089CA40C;
    case 345u: goto L_089CA4A4;
    case 346u: goto L_089CA4BC;
    case 347u: goto L_089CA4CC;
    case 348u: goto L_089CA4EC;
    case 349u: goto L_089CA558;
    case 350u: goto L_089CA56C;
    case 351u: goto L_089CA578;
    case 352u: goto L_089CA5A0;
    case 353u: goto L_089CA5A4;
    case 354u: goto L_089CA5A8;
    case 355u: goto L_089CA5B4;
    case 356u: goto L_089CA5C8;
    case 357u: goto L_089CA5D4;
    case 358u: goto L_089CA5D8;
    case 359u: goto L_089CA5FC;
    case 360u: goto L_089CA604;
    case 361u: goto L_089CA608;
    case 362u: goto L_089CA614;
    case 363u: goto L_089CA624;
    case 364u: goto L_089CA628;
    case 365u: goto L_089CA63C;
    case 366u: goto L_089CA648;
    case 367u: goto L_089CA64C;
    case 368u: goto L_089CA66C;
    case 369u: goto L_089CA674;
    case 370u: goto L_089CA678;
    case 371u: goto L_089CA684;
    case 372u: goto L_089CA698;
    case 373u: goto L_089CA6A4;
    case 374u: goto L_089CA6A8;
    case 375u: goto L_089CA6D0;
    case 376u: goto L_089CA6D8;
    case 377u: goto L_089CA6DC;
    case 378u: goto L_089CA6E8;
    case 379u: goto L_089CA6FC;
    case 380u: goto L_089CA708;
    case 381u: goto L_089CA70C;
    case 382u: goto L_089CA730;
    case 383u: goto L_089CA738;
    case 384u: goto L_089CA744;
    case 385u: goto L_089CA758;
    case 386u: goto L_089CA764;
    case 387u: goto L_089CA7BC;
    case 388u: goto L_089CA7D4;
    case 389u: goto L_089CA7E4;
    case 390u: goto L_089CA7F8;
    case 391u: goto L_089CA818;
    case 392u: goto L_089CA824;
    case 393u: goto L_089CA830;
    case 394u: goto L_089CA844;
    case 395u: goto L_089CA850;
    case 396u: goto L_089CA86C;
    case 397u: goto L_089CA884;
    case 398u: goto L_089CA8A0;
    case 399u: goto L_089CA8A4;
    case 400u: goto L_089CA8B0;
    case 401u: goto L_089CA8BC;
    case 402u: goto L_089CA8C0;
    case 403u: goto L_089CA8C8;
    case 404u: goto L_089CA8DC;
    case 405u: goto L_089CA8F0;
    case 406u: goto L_089CA8F8;
    case 407u: goto L_089CA904;
    case 408u: goto L_089CA918;
    case 409u: goto L_089CA930;
    case 410u: goto L_089CA938;
    case 411u: goto L_089CA94C;
    case 412u: goto L_089CA95C;
    case 413u: goto L_089CA964;
    case 414u: goto L_089CA978;
    case 415u: goto L_089CA988;
    case 416u: goto L_089CA990;
    case 417u: goto L_089CA9A4;
    case 418u: goto L_089CA9B4;
    case 419u: goto L_089CA9C4;
    case 420u: goto L_089CA9D0;
    case 421u: goto L_089CA9E4;
    case 422u: goto L_089CA9FC;
    case 423u: goto L_089CAA14;
    case 424u: goto L_089CAA2C;
    case 425u: goto L_089CAA44;
    case 426u: goto L_089CAA50;
    case 427u: goto L_089CAA6C;
    case 428u: goto L_089CAA74;
    case 429u: goto L_089CAA90;
    case 430u: goto L_089CAA98;
    case 431u: goto L_089CAAA8;
    case 432u: goto L_089CAAC4;
    case 433u: goto L_089CAACC;
    case 434u: goto L_089CAAE8;
    case 435u: goto L_089CAAF0;
    case 436u: goto L_089CAB00;
    case 437u: goto L_089CAB08;
    case 438u: goto L_089CAB10;
    case 439u: goto L_089CAB2C;
    case 440u: goto L_089CAB34;
    case 441u: goto L_089CAB50;
    case 442u: goto L_089CAB58;
    case 443u: goto L_089CAB68;
    case 444u: goto L_089CAB84;
    case 445u: goto L_089CAB8C;
    case 446u: goto L_089CABA8;
    case 447u: goto L_089CABB0;
    case 448u: goto L_089CABC0;
    case 449u: goto L_089CABC8;
    case 450u: goto L_089CABD0;
    case 451u: goto L_089CABEC;
    case 452u: goto L_089CABF4;
    case 453u: goto L_089CAC10;
    case 454u: goto L_089CAC18;
    case 455u: goto L_089CAC28;
    case 456u: goto L_089CAC44;
    case 457u: goto L_089CAC4C;
    case 458u: goto L_089CAC68;
    case 459u: goto L_089CAC70;
    case 460u: goto L_089CAC80;
    case 461u: goto L_089CAC88;
    case 462u: goto L_089CAC90;
    case 463u: goto L_089CAC98;
    case 464u: goto L_089CACB8;
    case 465u: goto L_089CACC0;
    case 466u: goto L_089CACDC;
    case 467u: goto L_089CACE4;
    case 468u: goto L_089CACF4;
    case 469u: goto L_089CAD10;
    case 470u: goto L_089CAD18;
    case 471u: goto L_089CAD34;
    case 472u: goto L_089CAD3C;
    case 473u: goto L_089CAD4C;
    case 474u: goto L_089CAD54;
    case 475u: goto L_089CAD5C;
    case 476u: goto L_089CAD78;
    case 477u: goto L_089CAD80;
    case 478u: goto L_089CAD9C;
    case 479u: goto L_089CADA4;
    case 480u: goto L_089CADB0;
    case 481u: goto L_089CADC0;
    case 482u: goto L_089CADD4;
    case 483u: goto L_089CADEC;
    case 484u: goto L_089CADF4;
    case 485u: goto L_089CAE10;
    case 486u: goto L_089CAE44;
    case 487u: goto L_089CAE98;
    case 488u: goto L_089CAEA4;
    case 489u: goto L_089CAEB8;
    case 490u: goto L_089CAED4;
    case 491u: goto L_089CAF00;
    case 492u: goto L_089CAF04;
    case 493u: goto L_089CAF10;
    case 494u: goto L_089CAF1C;
    case 495u: goto L_089CAF30;
    case 496u: goto L_089CAF4C;
    case 497u: goto L_089CAF78;
    case 498u: goto L_089CAF7C;
    case 499u: goto L_089CAF88;
    case 500u: goto L_089CAF94;
    case 501u: goto L_089CAFA4;
    case 502u: goto L_089CAFB0;
    case 503u: goto L_089CAFB4;
    case 504u: goto L_089CAFC8;
    case 505u: goto L_089CAFE4;
    case 506u: goto L_089CB00C;
    case 507u: goto L_089CB010;
    case 508u: goto L_089CB01C;
    case 509u: goto L_089CB028;
    case 510u: goto L_089CB03C;
    case 511u: goto L_089CB058;
    case 512u: goto L_089CB080;
    case 513u: goto L_089CB084;
    case 514u: goto L_089CB090;
    case 515u: goto L_089CB09C;
    case 516u: goto L_089CB0B0;
    case 517u: goto L_089CB0D4;
    case 518u: goto L_089CB0E4;
    case 519u: goto L_089CB114;
    case 520u: goto L_089CB120;
    case 521u: goto L_089CB140;
    case 522u: goto L_089CB14C;
    case 523u: goto L_089CB16C;
    case 524u: goto L_089CB178;
    case 525u: goto L_089CB198;
    case 526u: goto L_089CB1A4;
    case 527u: goto L_089CB1B0;
    case 528u: goto L_089CB1D0;
    case 529u: goto L_089CB1DC;
    case 530u: goto L_089CB1FC;
    case 531u: goto L_089CB208;
    case 532u: goto L_089CB214;
    case 533u: goto L_089CB234;
    case 534u: goto L_089CB240;
    case 535u: goto L_089CB260;
    case 536u: goto L_089CB26C;
    case 537u: goto L_089CB28C;
    case 538u: goto L_089CB298;
    case 539u: goto L_089CB2B8;
    case 540u: goto L_089CB2C4;
    case 541u: goto L_089CB2C8;
    case 542u: goto L_089CB2D4;
    case 543u: goto L_089CB2E0;
    case 544u: goto L_089CB2EC;
    case 545u: goto L_089CB314;
    case 546u: goto L_089CB320;
    case 547u: goto L_089CB348;
    case 548u: goto L_089CB354;
    case 549u: goto L_089CB374;
    case 550u: goto L_089CB378;
    case 551u: goto L_089CB388;
    case 552u: goto L_089CB3A8;
    case 553u: goto L_089CB3AC;
    case 554u: goto L_089CB3B8;
    case 555u: goto L_089CB3C4;
    case 556u: goto L_089CB3E4;
    case 557u: goto L_089CB418;
    case 558u: goto L_089CB440;
    case 559u: goto L_089CB448;
    case 560u: goto L_089CB464;
    case 561u: goto L_089CB48C;
    case 562u: goto L_089CB494;
    case 563u: goto L_089CB4AC;
    case 564u: goto L_089CB4CC;
    case 565u: goto L_089CB4D0;
    case 566u: goto L_089CB4DC;
    case 567u: goto L_089CB4E0;
    case 568u: goto L_089CB4EC;
    case 569u: goto L_089CB520;
    case 570u: goto L_089CB548;
    case 571u: goto L_089CB568;
    case 572u: goto L_089CB580;
    case 573u: goto L_089CB5BC;
    case 574u: goto L_089CB5CC;
    case 575u: goto L_089CB5D0;
    case 576u: goto L_089CB5E4;
    case 577u: goto L_089CB608;
    case 578u: goto L_089CB630;
    case 579u: goto L_089CB63C;
    case 580u: goto L_089CB640;
    case 581u: goto L_089CB64C;
    case 582u: goto L_089CB658;
    case 583u: goto L_089CB65C;
    case 584u: goto L_089CB674;
    case 585u: goto L_089CB688;
    case 586u: goto L_089CB69C;
    case 587u: goto L_089CB6A4;
    case 588u: goto L_089CB6BC;
    case 589u: goto L_089CB6DC;
    case 590u: goto L_089CB6E4;
    case 591u: goto L_089CB6F4;
    case 592u: goto L_089CB708;
    case 593u: goto L_089CB70C;
    case 594u: goto L_089CB718;
    case 595u: goto L_089CB720;
    case 596u: goto L_089CB734;
    case 597u: goto L_089CB74C;
    case 598u: goto L_089CB754;
    case 599u: goto L_089CB75C;
    case 600u: goto L_089CB764;
    case 601u: goto L_089CB76C;
    case 602u: goto L_089CB790;
    case 603u: goto L_089CB840;
    case 604u: goto L_089CB854;
    case 605u: goto L_089CB86C;
    case 606u: goto L_089CB878;
    case 607u: goto L_089CB894;
    case 608u: goto L_089CB8B0;
    case 609u: goto L_089CB8B8;
    case 610u: goto L_089CB8D8;
    case 611u: goto L_089CB8F4;
    case 612u: goto L_089CB908;
    case 613u: goto L_089CB934;
    case 614u: goto L_089CB96C;
    case 615u: goto L_089CB980;
    case 616u: goto L_089CB98C;
    case 617u: goto L_089CB998;
    case 618u: goto L_089CB9A4;
    case 619u: goto L_089CB9B0;
    case 620u: goto L_089CB9BC;
    case 621u: goto L_089CB9C8;
    case 622u: goto L_089CB9D4;
    case 623u: goto L_089CB9E0;
    case 624u: goto L_089CB9EC;
    case 625u: goto L_089CB9F8;
    case 626u: goto L_089CBA04;
    case 627u: goto L_089CBA10;
    case 628u: goto L_089CBA1C;
    case 629u: goto L_089CBA28;
    case 630u: goto L_089CBA34;
    case 631u: goto L_089CBA40;
    case 632u: goto L_089CBA4C;
    case 633u: goto L_089CBA58;
    case 634u: goto L_089CBA64;
    case 635u: goto L_089CBA70;
    case 636u: goto L_089CBA7C;
    case 637u: goto L_089CBA88;
    case 638u: goto L_089CBA94;
    case 639u: goto L_089CBAA0;
    case 640u: goto L_089CBAAC;
    case 641u: goto L_089CBAB8;
    case 642u: goto L_089CBAC4;
    case 643u: goto L_089CBAD0;
    case 644u: goto L_089CBADC;
    case 645u: goto L_089CBAE8;
    case 646u: goto L_089CBAF4;
    case 647u: goto L_089CBB00;
    case 648u: goto L_089CBB0C;
    case 649u: goto L_089CBB18;
    case 650u: goto L_089CBB24;
    case 651u: goto L_089CBB30;
    case 652u: goto L_089CBB3C;
    case 653u: goto L_089CBB48;
    case 654u: goto L_089CBB54;
    case 655u: goto L_089CBB60;
    case 656u: goto L_089CBB6C;
    case 657u: goto L_089CBB74;
    case 658u: goto L_089CBB88;
    case 659u: goto L_089CBBAC;
    case 660u: goto L_089CBBE0;
    case 661u: goto L_089CBBEC;
    case 662u: goto L_089CBC04;
    case 663u: goto L_089CBC2C;
    case 664u: goto L_089CBCAC;
    case 665u: goto L_089CBCC4;
    case 666u: goto L_089CBCDC;
    case 667u: goto L_089CBCF0;
    case 668u: goto L_089CBD14;
    case 669u: goto L_089CBD24;
    case 670u: goto L_089CBD40;
    case 671u: goto L_089CBD58;
    case 672u: goto L_089CBD70;
    case 673u: goto L_089CBD88;
    case 674u: goto L_089CBDA0;
    case 675u: goto L_089CBDB0;
    case 676u: goto L_089CBDD0;
    case 677u: goto L_089CBDDC;
    case 678u: goto L_089CBDEC;
    case 679u: goto L_089CBE04;
    case 680u: goto L_089CBE14;
    case 681u: goto L_089CBE18;
    case 682u: goto L_089CBE20;
    case 683u: goto L_089CBE24;
    case 684u: goto L_089CBE40;
    case 685u: goto L_089CBE70;
    case 686u: goto L_089CBE84;
    case 687u: goto L_089CBEA0;
    case 688u: goto L_089CBEB4;
    case 689u: goto L_089CBEDC;
    case 690u: goto L_089CBEE4;
    case 691u: goto L_089CBF08;
    case 692u: goto L_089CBF20;
    case 693u: goto L_089CBF44;
    case 694u: goto L_089CBF50;
    case 695u: goto L_089CBF5C;
    case 696u: goto L_089CBF68;
    case 697u: goto L_089CBF78;
    case 698u: goto L_089CBF8C;
    case 699u: goto L_089CBFA0;
    case 700u: goto L_089CBFAC;
    case 701u: goto L_089CBFB4;
    case 702u: goto L_089CBFBC;
    case 703u: goto L_089CBFC8;
    case 704u: goto L_089CBFD8;
    case 705u: goto L_089CBFE0;
    case 706u: goto L_089CBFF0;
    case 707u: goto L_089CBFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089C8004:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(820)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8030;
      }
      goto L_089C801C;
    }
L_089C801C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8044;
      }
      goto L_089C8030;
    }
L_089C8030:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089C8044u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089C8044u) goto L_089C8044;
    return;
L_089C8044:
    ctx.set_gpr(4, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    goto L_089C8054;
L_089C8054:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(824), 0u);
    goto L_089C8058;
L_089C8058:
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
L_089C8080:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(820)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C81CC;
      }
      goto L_089C80B0;
    }
L_089C80B0:
    ctx.set_gpr(31, 0x089C80B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 144u, 0x089D0A28u>(ctx, &aot_mem) && ctx.pc == 0x089C80B8u) goto L_089C80B8;
    return;
L_089C80B8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(436)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 0 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C816C;
      }
      goto L_089C80C8;
    }
L_089C80C8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(428)));
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089C80F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 369u, 0x089D20E0u>(ctx, &aot_mem) && ctx.pc == 0x089C80F4u) goto L_089C80F4;
    return;
L_089C80F4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8124;
      }
      goto L_089C8110;
    }
L_089C8110:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8138;
      }
      goto L_089C8124;
    }
L_089C8124:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089C8138u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x089C8138u) goto L_089C8138;
    return;
L_089C8138:
    ctx.set_gpr(4, ctx.gpr[16] << 4u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C81BC;
      }
      goto L_089C816C;
    }
L_089C816C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(820)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089C8194u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 369u, 0x089D20E0u>(ctx, &aot_mem) && ctx.pc == 0x089C8194u) goto L_089C8194;
    return;
L_089C8194:
    ctx.set_gpr(3, (ctx.gpr[2] >> 24u) & 0x0000000Fu);
    ctx.set_gpr(4, ctx.gpr[3] << 16u);
    ctx.set_gpr(3, 4096u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] << 8u);
    ctx.set_gpr(4, ctx.gpr[4] >> 8u);
    ctx.set_gpr(3, 2304u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_089C81BC;
L_089C81BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(820)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    goto L_089C81CC;
L_089C81CC:
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
L_089C81F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(816));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089C8218u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089C8218u) goto L_089C8218;
    return;
L_089C8218:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8230;
      }
      goto L_089C8224;
    }
L_089C8224:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] | 4096u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    goto L_089C8230;
L_089C8230:
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
L_089C8248:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-272));
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
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(816)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C87EC;
      }
      goto L_089C8288;
    }
L_089C8288:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(30, ctx.gpr[2] << 3u);
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(404)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C82FC;
      }
      goto L_089C82A0;
    }
L_089C82A0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(784)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C82FC;
      }
      goto L_089C82AC;
    }
L_089C82AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(436)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 0 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C82FC;
      }
      goto L_089C82BC;
    }
L_089C82BC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(272)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, (ctx.gpr[2] >> 7u) & 0x00000003u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089C82F8;
      }
      goto L_089C82D8;
    }
L_089C82D8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089C82EC;
      }
      goto L_089C82E4;
    }
L_089C82E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C82FC;
      }
      goto L_089C82EC;
    }
L_089C82EC:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C82FC;
      }
      goto L_089C82F8;
    }
L_089C82F8:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    goto L_089C82FC;
L_089C82FC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(492)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, ctx.gpr[19] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[30])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(2, ctx.gpr[22] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(18, ctx.gpr[22] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(23, ctx.gpr[18] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8704;
      }
      goto L_089C8334;
    }
L_089C8334:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8374;
      }
      goto L_089C834C;
    }
L_089C834C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26668)));
    ctx.set_gpr(31, 0x089C8360u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x089C8360u) goto L_089C8360;
    return;
L_089C8360:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8374;
      }
      goto L_089C8368;
    }
L_089C8368:
    ctx.set_gpr(3, ctx.gpr[21] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8378;
      }
      goto L_089C8374;
    }
L_089C8374:
    ctx.set_gpr(3, 0u + 0u);
    goto L_089C8378;
L_089C8378:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8390;
      }
      goto L_089C8384;
    }
L_089C8384:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_089C8390;
L_089C8390:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C84B0;
      }
      goto L_089C839C;
    }
L_089C839C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(816)));
    ctx.set_gpr(31, 0x089C83A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089C83A8u) goto L_089C83A8;
    return;
L_089C83A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089C83B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 587u, 0x089F7360u>(ctx, &aot_mem) && ctx.pc == 0x089C83B4u) goto L_089C83B4;
    return;
L_089C83B4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(268));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089C83C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x089C83C4u) goto L_089C83C4;
    return;
L_089C83C4:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32508)));
    ctx.set_gpr(31, 0x089C83ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 603u, 0x089FAF0Cu>(ctx, &aot_mem) && ctx.pc == 0x089C83ECu) goto L_089C83EC;
    return;
L_089C83EC:
    ctx.set_gpr(2, 49024u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32508)));
    ctx.set_gpr(31, 0x089C8410u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 603u, 0x089FAF0Cu>(ctx, &aot_mem) && ctx.pc == 0x089C8410u) goto L_089C8410;
    return;
L_089C8410:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), 0u);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32508)));
    ctx.set_gpr(31, 0x089C8434u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 603u, 0x089FAF0Cu>(ctx, &aot_mem) && ctx.pc == 0x089C8434u) goto L_089C8434;
    return;
L_089C8434:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    ctx.set_gpr(2, 49024u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32508)));
    ctx.set_gpr(31, 0x089C8458u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 603u, 0x089FAF0Cu>(ctx, &aot_mem) && ctx.pc == 0x089C8458u) goto L_089C8458;
    return;
L_089C8458:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), 0u);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32508)));
    ctx.set_gpr(31, 0x089C847Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 603u, 0x089FAF0Cu>(ctx, &aot_mem) && ctx.pc == 0x089C847Cu) goto L_089C847C;
    return;
L_089C847C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.set_gpr(2, 49024u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32508)));
    ctx.set_gpr(31, 0x089C84A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 603u, 0x089FAF0Cu>(ctx, &aot_mem) && ctx.pc == 0x089C84A0u) goto L_089C84A0;
    return;
L_089C84A0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089C84B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 693u, 0x089FF550u>(ctx, &aot_mem) && ctx.pc == 0x089C84B0u) goto L_089C84B0;
    return;
L_089C84B0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(172));
    ctx.set_gpr(31, 0x089C84C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 255u, 0x089F9100u>(ctx, &aot_mem) && ctx.pc == 0x089C84C0u) goto L_089C84C0;
    return;
L_089C84C0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(51)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8570;
      }
      goto L_089C84CC;
    }
L_089C84CC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(784)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8570;
      }
      goto L_089C84D8;
    }
L_089C84D8:
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8564;
      }
      goto L_089C84E4;
    }
L_089C84E4:
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(172));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(760)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(176));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(764)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(180));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(768)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(772)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(776)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(780)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_089C8564;
L_089C8564:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C84E4;
      }
      goto L_089C8570;
    }
L_089C8570:
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089C85D0;
      }
      goto L_089C8580;
    }
L_089C8580:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(172));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(15));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(10, 2226u << 16u);
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(-27480));
    ctx.set_gpr(31, 0x089C85A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 333u, 0x089FDDFCu>(ctx, &aot_mem) && ctx.pc == 0x089C85A8u) goto L_089C85A8;
    return;
L_089C85A8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28400)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(2, 65280u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28400), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8648;
      }
      goto L_089C85D0;
    }
L_089C85D0:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_089C8628;
      }
      goto L_089C85DC;
    }
L_089C85DC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(172));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(10, 2226u << 16u);
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(-27480));
    ctx.set_gpr(31, 0x089C8600u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 333u, 0x089FDDFCu>(ctx, &aot_mem) && ctx.pc == 0x089C8600u) goto L_089C8600;
    return;
L_089C8600:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28400)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(2, 65280u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28400), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8648;
      }
      goto L_089C8628;
    }
L_089C8628:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28400)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(384));
    ctx.set_gpr(2, 65280u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28400), ctx.gpr[3]);
    goto L_089C8648;
L_089C8648:
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C86C4;
      }
      goto L_089C8654;
    }
L_089C8654:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089C867C;
      }
      goto L_089C8660;
    }
L_089C8660:
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(172)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C86C0;
      }
      goto L_089C867C;
    }
L_089C867C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089C86A4;
      }
      goto L_089C8688;
    }
L_089C8688:
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(124))))));
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C86C0;
      }
      goto L_089C86A4;
    }
L_089C86A4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089C86C0;
      }
      goto L_089C86B0;
    }
L_089C86B0:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[3]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_089C86C0;
L_089C86C0:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    goto L_089C86C4;
L_089C86C4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < 24 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C8654;
      }
      goto L_089C86D0;
    }
L_089C86D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C86E0;
      }
      goto L_089C86D8;
    }
L_089C86D8:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_089C86E0;
L_089C86E0:
    ctx.set_gpr(2, ctx.gpr[18] & 3u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C86D8;
      }
      goto L_089C86EC;
    }
L_089C86EC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8700;
      }
      goto L_089C86F8;
    }
L_089C86F8:
    ctx.set_gpr(31, 0x089C8700u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089C8700u) goto L_089C8700;
    return;
L_089C8700:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089C8704;
L_089C8704:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(816)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C8334;
      }
      goto L_089C8718;
    }
L_089C8718:
    ctx.set_gpr(3, (ctx.gpr[18] >> 24u) & 0x0000003Fu);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(-28406), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28440)));
    ctx.set_gpr(3, ctx.gpr[18] << 8u);
    ctx.set_gpr(3, ctx.gpr[3] >> 8u);
    ctx.set_gpr(4, 65280u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28440), ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28408)));
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28440)));
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(3, (ctx.gpr[23] >> 24u) & 0x0000003Fu);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(-28406), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28468)));
    ctx.set_gpr(3, ctx.gpr[23] << 8u);
    ctx.set_gpr(3, ctx.gpr[3] >> 8u);
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-28468), ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(-28444), static_cast<std::uint8_t>(ctx.gpr[30]));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28408)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28468)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28400)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-28444)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[18] + static_cast<std::uint32_t>(16));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(824), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(816));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089C87DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089C87DCu) goto L_089C87DC;
    return;
L_089C87DC:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089C87ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 366u, 0x089D20A8u>(ctx, &aot_mem) && ctx.pc == 0x089C87ECu) goto L_089C87EC;
    return;
L_089C87EC:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(272));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C8820:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, ctx.gpr[3] & 4096u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C889C;
      }
      goto L_089C8840;
    }
L_089C8840:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089C884Cu);
    // nop
    goto L_089C8248;
L_089C884C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(872)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-4097));
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(872), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(824)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C889C;
      }
      goto L_089C8868;
    }
L_089C8868:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089C8874u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 369u, 0x089D20E0u>(ctx, &aot_mem) && ctx.pc == 0x089C8874u) goto L_089C8874;
    return;
L_089C8874:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-28408)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-28436)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x089C889Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 366u, 0x089D20A8u>(ctx, &aot_mem) && ctx.pc == 0x089C889Cu) goto L_089C889C;
    return;
L_089C889C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C88B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(824)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8924;
      }
      goto L_089C88D0;
    }
L_089C88D0:
    ctx.set_gpr(31, 0x089C88D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 369u, 0x089D20E0u>(ctx, &aot_mem) && ctx.pc == 0x089C88D8u) goto L_089C88D8;
    return;
L_089C88D8:
    ctx.set_gpr(4, (ctx.gpr[2] >> 24u) & 0x0000003Fu);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-28406), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-28436)));
    ctx.set_gpr(4, ctx.gpr[2] << 8u);
    ctx.set_gpr(4, ctx.gpr[4] >> 8u);
    ctx.set_gpr(3, 65280u << 16u);
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-28436), ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-28408)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-28436)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(824), 0u);
    goto L_089C8924;
L_089C8924:
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
L_089C893C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(396)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(400)));
    ctx.set_gpr(3, ctx.gpr[5] << 3u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(628)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(644)));
    ctx.set_gpr(3, ctx.gpr[5] ^ ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8990;
      }
      goto L_089C8970;
    }
L_089C8970:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(636)));
    ctx.set_gpr(3, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) && ctx.fpr[0] == ctx.fpr[1]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089C8990;
      }
      goto L_089C898C;
    }
L_089C898C:
    ctx.set_gpr(3, 0u + 0u);
    goto L_089C8990;
L_089C8990:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C89A4;
      }
      goto L_089C8998;
    }
L_089C8998:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(632)));
    ctx.set_gpr(3, ctx.gpr[3] ^ 0u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_089C89A4;
L_089C89A4:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C89B8;
      }
      goto L_089C89AC;
    }
L_089C89AC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[3] ^ 2u);
    ctx.set_gpr(3, 0u < ctx.gpr[3] ? 1u : 0u);
    goto L_089C89B8;
L_089C89B8:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8A10;
      }
      goto L_089C89C0;
    }
L_089C89C0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(660)));
    ctx.set_gpr(3, ctx.gpr[3] ^ 0u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C89E0;
      }
      goto L_089C89D4;
    }
L_089C89D4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(664)));
    ctx.set_gpr(3, ctx.gpr[3] ^ 0u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_089C89E0;
L_089C89E0:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C89F8;
      }
      goto L_089C89E8;
    }
L_089C89E8:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(668)));
    ctx.set_gpr(3, ctx.gpr[3] ^ ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_089C89F8;
L_089C89F8:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8A10;
      }
      goto L_089C8A00;
    }
L_089C8A00:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(672)));
    ctx.set_gpr(3, ctx.gpr[3] ^ ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_089C8A10;
L_089C8A10:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(640), static_cast<std::uint8_t>(ctx.gpr[3]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C8A1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(896)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C8A60;
      }
      goto L_089C8A38;
    }
L_089C8A38:
    ctx.set_gpr(31, 0x089C8A40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 128u, 0x089BCC74u>(ctx, &aot_mem) && ctx.pc == 0x089C8A40u) goto L_089C8A40;
    return;
L_089C8A40:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(768));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C8A5Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C8A5Cu) goto L_089C8A5C;
    return;
L_089C8A5C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(896), ctx.gpr[2]);
    goto L_089C8A60;
L_089C8A60:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(896)));
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(644)));
    ctx.set_gpr(6, ctx.gpr[5] << 8u);
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(5, 21760u << 16u);
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(644)));
    ctx.set_gpr(6, ctx.gpr[5] >> 24u);
    ctx.set_gpr(5, 22528u << 16u);
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.set_gpr(5, 4736u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] | 256u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(896)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(5, (ctx.gpr[5] >> 24u) & 0x0000000Fu);
    ctx.set_gpr(6, ctx.gpr[5] << 16u);
    ctx.set_gpr(5, 4096u << 16u);
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(896)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(6, ctx.gpr[5] << 8u);
    ctx.set_gpr(6, ctx.gpr[6] >> 8u);
    ctx.set_gpr(5, 256u << 16u);
    ctx.set_gpr(5, ctx.gpr[6] | ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.set_gpr(6, 1030u << 16u);
    ctx.set_gpr(5, ctx.gpr[6] | 2u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.set_gpr(5, 54016u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.set_gpr(5, 2816u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(892)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C8B40;
      }
      goto L_089C8B04;
    }
L_089C8B04:
    ctx.set_gpr(5, ctx.gpr[4] << 2u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(6, 480u << 16u);
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[5] << 2u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(272));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8BC0;
      }
      goto L_089C8B40;
    }
L_089C8B40:
    ctx.set_gpr(5, ctx.gpr[6] | 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8BA0;
      }
      goto L_089C8B5C;
    }
L_089C8B5C:
    ctx.set_gpr(5, ctx.gpr[4] << 2u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.set_gpr(6, ctx.gpr[8] << 16u);
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[5] << 2u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(272));
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(5, ctx.gpr[5] << 2u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_089C8BA0;
L_089C8BA0:
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[7]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C8B5C;
      }
      goto L_089C8BAC;
    }
L_089C8BAC:
    ctx.set_gpr(5, 272u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] | 480u);
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-8), ctx.gpr[5]);
    goto L_089C8BC0;
L_089C8BC0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C8BD4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8C38;
      }
      goto L_089C8BF0;
    }
L_089C8BF0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-27627)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(-27627), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-27627)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(-27627), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8C78;
      }
      goto L_089C8C38;
    }
L_089C8C38:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-27627)));
    ctx.set_gpr(6, 0u & 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] | ctx.gpr[6]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(-27627), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-27627)));
    ctx.set_gpr(3, ctx.gpr[6] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(-27627), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_089C8C78;
L_089C8C78:
    ctx.set_gpr(2, ctx.gpr[5] & 2u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8CAC;
      }
      goto L_089C8C84;
    }
L_089C8C84:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-27627)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-5));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(-27627), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8CD0;
      }
      goto L_089C8CAC;
    }
L_089C8CAC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-27627)));
    ctx.set_gpr(2, 0u & 1u);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-5));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(-27627), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_089C8CD0;
L_089C8CD0:
    ctx.set_gpr(2, ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8CFC;
      }
      goto L_089C8CDC;
    }
L_089C8CDC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-27627)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(-27627), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_089C8CFC;
L_089C8CFC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089C8D08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 144u, 0x089D0A28u>(ctx, &aot_mem) && ctx.pc == 0x089C8D08u) goto L_089C8D08;
    return;
L_089C8D08:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-27628)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(-27628), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089C8D34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 369u, 0x089D20E0u>(ctx, &aot_mem) && ctx.pc == 0x089C8D34u) goto L_089C8D34;
    return;
L_089C8D34:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27628)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(640)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8D88;
      }
      goto L_089C8D4C;
    }
L_089C8D4C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(896)));
    ctx.set_gpr(3, (ctx.gpr[3] >> 24u) & 0x0000000Fu);
    ctx.set_gpr(4, ctx.gpr[3] << 16u);
    ctx.set_gpr(3, 4096u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(896)));
    ctx.set_gpr(4, ctx.gpr[3] << 8u);
    ctx.set_gpr(4, ctx.gpr[4] >> 8u);
    ctx.set_gpr(3, 2560u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8E94;
      }
      goto L_089C8D88;
    }
L_089C8D88:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(628)));
    ctx.set_gpr(4, ctx.gpr[3] << 8u);
    ctx.set_gpr(4, ctx.gpr[4] >> 8u);
    ctx.set_gpr(3, 21760u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(628)));
    ctx.set_gpr(4, ctx.gpr[3] >> 24u);
    ctx.set_gpr(3, 22528u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.set_gpr(3, 4736u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 256u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(3, (ctx.gpr[4] >> 24u) & 0x0000000Fu);
    ctx.set_gpr(3, ctx.gpr[3] << 16u);
    ctx.set_gpr(6, 4096u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[4] << 8u);
    ctx.set_gpr(4, ctx.gpr[4] >> 8u);
    ctx.set_gpr(3, 256u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.set_gpr(3, 1030u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 2u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    ctx.set_gpr(3, 54016u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(3, (ctx.gpr[5] >> 24u) & 0x0000000Fu);
    ctx.set_gpr(3, ctx.gpr[3] << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(32), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[5] << 8u);
    ctx.set_gpr(4, ctx.gpr[4] >> 8u);
    ctx.set_gpr(3, 2048u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(636)));
    ctx.set_gpr(3, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = ctx.fpr[0] - ctx.fpr[1];
    ctx.set_gpr(3, 0u | 65535u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(664)));
    ctx.set_gpr(4, ctx.gpr[3] << 16u);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(660)));
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(668)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(660)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 16u);
    ctx.set_gpr(3, ctx.gpr[6] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(672)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(664)));
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[6] << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    goto L_089C8E94;
L_089C8E94:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089C8EA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 366u, 0x089D20A8u>(ctx, &aot_mem) && ctx.pc == 0x089C8EA0u) goto L_089C8EA0;
    return;
L_089C8EA0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C8EB4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(892), ctx.gpr[5]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(628)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(644), ctx.gpr[2]);
    ctx.set_gpr(31, 0x089C8ED8u);
    // nop
    goto L_089C8A1C;
L_089C8ED8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(400)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089C8EF4;
      }
      goto L_089C8EE8;
    }
L_089C8EE8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089C8EF4u);
    // nop
    goto L_089C893C;
L_089C8EF4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C8F08:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(396)));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    // nop
      if (branch_taken) {
          goto L_089C9014;
      }
      goto L_089C8F3C;
    }
L_089C8F3C:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, ctx.gpr[3] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[2] << 3u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089C8F60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 433u, 0x08929E9Cu>(ctx, &aot_mem) && ctx.pc == 0x089C8F60u) goto L_089C8F60;
    return;
L_089C8F60:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[4] << 3u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(224));
    ctx.set_gpr(31, 0x089C8F88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x089C8F88u) goto L_089C8F88;
    return;
L_089C8F88:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8FCC;
      }
      goto L_089C8F98;
    }
L_089C8F98:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089C8FA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 445u, 0x08929F74u>(ctx, &aot_mem) && ctx.pc == 0x089C8FA4u) goto L_089C8FA4;
    return;
L_089C8FA4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C8FC0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C8FC0u) goto L_089C8FC0;
    return;
L_089C8FC0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[2]));
    goto L_089C8FCC;
L_089C8FCC:
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C8FF4;
      }
      goto L_089C8FD8;
    }
L_089C8FD8:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_089C8FF4;
L_089C8FF4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C8FD8;
      }
      goto L_089C9000;
    }
L_089C9000:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    goto L_089C9014;
L_089C9014:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(17, rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(-2)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(396)));
    ctx.set_gpr(2, ctx.gpr[17] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C906Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C906Cu) goto L_089C906C;
    return;
L_089C906C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9098;
      }
      goto L_089C9078;
    }
L_089C9078:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C9090u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C9090u) goto L_089C9090;
    return;
L_089C9090:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C909C;
      }
      goto L_089C9098;
    }
L_089C9098:
    ctx.set_gpr(2, ctx.gpr[20] + 0u);
    goto L_089C909C;
L_089C909C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C90BCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C90BCu) goto L_089C90BC;
    return;
L_089C90BC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C90E8;
      }
      goto L_089C90C8;
    }
L_089C90C8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C90E0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C90E0u) goto L_089C90E0;
    return;
L_089C90E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C90EC;
      }
      goto L_089C90E8;
    }
L_089C90E8:
    ctx.set_gpr(2, ctx.gpr[20] + 0u);
    goto L_089C90EC;
L_089C90EC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(24));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089C9150;
      }
      goto L_089C913C;
    }
L_089C913C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089C9150;
      }
      goto L_089C9148;
    }
L_089C9148:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) > 0;
    // nop
      if (branch_taken) {
          goto L_089C9168;
      }
      goto L_089C9150;
    }
L_089C9150:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9174;
      }
      goto L_089C9168;
    }
L_089C9168:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), 0u);
    goto L_089C9174;
L_089C9174:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(63));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 6u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089C9190;
      }
      goto L_089C9188;
    }
L_089C9188:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(63));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 6u));
    goto L_089C9190;
L_089C9190:
    ctx.set_gpr(2, ctx.gpr[2] << 6u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089C91B4u);
    // nop
    goto L_089C9300;
L_089C91B4:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(400), ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
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
L_089C91E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(396)));
    ctx.set_gpr(3, ctx.gpr[17] << 3u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[17]);
    ctx.set_gpr(5, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 0 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C9234;
      }
      goto L_089C9224;
    }
L_089C9224:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(516)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C9234u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C9234u) goto L_089C9234;
    return;
L_089C9234:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 0 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C9258;
      }
      goto L_089C9244;
    }
L_089C9244:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(516)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C9258u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C9258u) goto L_089C9258;
    return;
L_089C9258:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(396)));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C92E4;
      }
      goto L_089C926C;
    }
L_089C926C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C92E4;
      }
      goto L_089C9274;
    }
L_089C9274:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C92C4;
      }
      goto L_089C9288;
    }
L_089C9288:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089C9294u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 445u, 0x08929F74u>(ctx, &aot_mem) && ctx.pc == 0x089C9294u) goto L_089C9294;
    return;
L_089C9294:
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
    ctx.set_gpr(31, 0x089C92C0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C92C0u) goto L_089C92C0;
    return;
L_089C92C0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    goto L_089C92C4;
L_089C92C4:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[17]));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[3]));
    goto L_089C92E4;
L_089C92E4:
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
L_089C9300:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(396)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[5] << 3u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089C9368;
      }
      goto L_089C9328;
    }
L_089C9328:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(400)));
    ctx.set_gpr(3, ctx.gpr[5] << 3u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089C9368;
      }
      goto L_089C9348;
    }
L_089C9348:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(660)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(676), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(664)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(680), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(668)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(684), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(672)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(688), ctx.gpr[3]);
    goto L_089C9368;
L_089C9368:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C9370:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(396)));
    ctx.set_gpr(2, ctx.gpr[5] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089C93DC;
      }
      goto L_089C93AC;
    }
L_089C93AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(424)));
    ctx.set_gpr(2, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C93EC;
      }
      goto L_089C93DC;
    }
L_089C93DC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(591)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(528)));
    goto L_089C93EC;
L_089C93EC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089C942C;
      }
      goto L_089C93FC;
    }
L_089C93FC:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(424)));
    ctx.set_gpr(3, ctx.gpr[4] << 3u);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9430;
      }
      goto L_089C942C;
    }
L_089C942C:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(536)));
    goto L_089C9430;
L_089C9430:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27848)));
    ctx.set_gpr(4, ctx.gpr[2] << 8u);
    ctx.set_gpr(4, ctx.gpr[4] >> 8u);
    ctx.set_gpr(6, 65280u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[6]);
    ctx.set_gpr(4, ctx.gpr[3] | ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27848), ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27432)));
    ctx.set_gpr(3, 4096u << 16u);
    ctx.set_gpr(10, ctx.gpr[4] | ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-27432), ctx.gpr[10]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(8, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(-27844)));
    ctx.set_gpr(4, ctx.gpr[4] & 2047u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2048));
    ctx.set_gpr(8, ctx.gpr[8] & ctx.gpr[3]);
    ctx.set_gpr(9, ctx.gpr[8] | ctx.gpr[4]);
    ctx.set_gpr(8, 2246u << 16u);
    rt.memory().aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(-27844), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 24u));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(-27842), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(2, 8192u << 16u);
    ctx.set_gpr(2, ctx.gpr[10] | ctx.gpr[2]);
    ctx.set_gpr(8, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-27432), ctx.gpr[2]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(8, 2246u << 16u);
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(-27632)));
    ctx.set_gpr(9, ctx.gpr[9] & 3u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(8, ctx.gpr[10] & ctx.gpr[8]);
    ctx.set_gpr(9, ctx.gpr[8] | ctx.gpr[9]);
    ctx.set_gpr(8, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(-27632), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.set_gpr(8, 2246u << 16u);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-27424)));
    ctx.set_gpr(8, 4u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] | ctx.gpr[8]);
    ctx.set_gpr(8, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-27424), ctx.gpr[9]);
    ctx.set_gpr(8, 2246u << 16u);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-27840)));
    ctx.set_gpr(8, ctx.gpr[7] << 8u);
    ctx.set_gpr(8, ctx.gpr[8] >> 8u);
    ctx.set_gpr(6, ctx.gpr[9] & ctx.gpr[6]);
    ctx.set_gpr(8, ctx.gpr[6] | ctx.gpr[8]);
    ctx.set_gpr(6, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-27840), ctx.gpr[8]);
    ctx.set_gpr(6, 16384u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] | ctx.gpr[6]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(-27836)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] | ctx.gpr[4]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(-27836), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 24u));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(-27834), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 32768u << 16u);
    ctx.set_gpr(3, ctx.gpr[6] | ctx.gpr[2]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-27432), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(400), ctx.gpr[5]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C9574;
      }
      goto L_089C9554;
    }
L_089C9554:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(940)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C956Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C956Cu) goto L_089C956C;
    return;
L_089C956C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C958C;
      }
      goto L_089C9574;
    }
L_089C9574:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(940)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C958Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C958Cu) goto L_089C958C;
    return;
L_089C958C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089C9598u);
    // nop
    goto L_089C893C;
L_089C9598:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089C95C8;
      }
      goto L_089C95A8;
    }
L_089C95A8:
    ctx.fpr[6] = std::bit_cast<float>(0u);
    ctx.set_fpr_bits(5, ctx.fpr_bits(6));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[4] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[3] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9698;
      }
      goto L_089C95C8;
    }
L_089C95C8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(676)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C95E4;
      }
      goto L_089C95D4;
    }
L_089C95D4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[6] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C95FC;
      }
      goto L_089C95E4;
    }
L_089C95E4:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[6] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[6] = ctx.fpr[6] + ctx.fpr[6];
    goto L_089C95FC;
L_089C95FC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(680)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C9618;
      }
      goto L_089C9608;
    }
L_089C9608:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[5] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9630;
      }
      goto L_089C9618;
    }
L_089C9618:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[5] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[5] = ctx.fpr[5] + ctx.fpr[5];
    goto L_089C9630;
L_089C9630:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(684)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C964C;
      }
      goto L_089C963C;
    }
L_089C963C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[4] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9664;
      }
      goto L_089C964C;
    }
L_089C964C:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[4] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[4] = ctx.fpr[4] + ctx.fpr[4];
    goto L_089C9664;
L_089C9664:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(688)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C9680;
      }
      goto L_089C9670;
    }
L_089C9670:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[3] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9698;
      }
      goto L_089C9680;
    }
L_089C9680:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[3] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[3] = ctx.fpr[3] + ctx.fpr[3];
    goto L_089C9698;
L_089C9698:
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 17792u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[4];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, ctx.gpr[2] << 4u);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(-28168), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27440)));
    ctx.set_gpr(4, ctx.gpr[2] | 4096u);
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[3];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, ctx.gpr[2] << 4u);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(-28164), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(3, ctx.gpr[4] | 8192u);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-27440), ctx.gpr[3]);
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[6], 1u));
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[5], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[4], 1u));
    ctx.set_gpr(7, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[3], 1u));
    ctx.set_gpr(8, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(764)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C9738u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C9738u) goto L_089C9738;
    return;
L_089C9738:
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
L_089C9750:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(400)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_089C97D8;
      }
      goto L_089C9764;
    }
L_089C9764:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(396)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[5] << 3u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(8, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[7] << 3u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[7]);
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089C97B8;
      }
      goto L_089C979C;
    }
L_089C979C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089C97B8;
      }
      goto L_089C97A8;
    }
L_089C97A8:
    ctx.set_gpr(31, 0x089C97B0u);
    // nop
    goto L_089C9370;
L_089C97B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C97D8;
      }
      goto L_089C97B8;
    }
L_089C97B8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089C97D8;
      }
      goto L_089C97C4;
    }
L_089C97C4:
    ctx.set_gpr(6, ctx.gpr[8] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(172)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C97D8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C97D8u) goto L_089C97D8;
    return;
L_089C97D8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C97E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(396)));
    ctx.set_gpr(2, ctx.gpr[19] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[19]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089C9840;
      }
      goto L_089C983C;
    }
L_089C983C:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    goto L_089C9840;
L_089C9840:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089C9850u);
    // nop
    goto L_089C9300;
L_089C9850:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9A54;
      }
      goto L_089C9858;
    }
L_089C9858:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089C98CC;
      }
      goto L_089C9868;
    }
L_089C9868:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_089C98CC;
      }
      goto L_089C9874;
    }
L_089C9874:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(24));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089C98AC;
      }
      goto L_089C9880;
    }
L_089C9880:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(15));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089C98A0;
      }
      goto L_089C988C;
    }
L_089C988C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089C98A0;
      }
      goto L_089C9898;
    }
L_089C9898:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C98CC;
      }
      goto L_089C98A0;
    }
L_089C98A0:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C98D0;
      }
      goto L_089C98AC;
    }
L_089C98AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C98C4;
      }
      goto L_089C98B8;
    }
L_089C98B8:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(5));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C98D0;
      }
      goto L_089C98C4;
    }
L_089C98C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C98D0;
      }
      goto L_089C98CC;
    }
L_089C98CC:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(7));
    goto L_089C98D0;
L_089C98D0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(468)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C98F8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C98F8u) goto L_089C98F8;
    return;
L_089C98F8:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(424)));
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(18, ctx.lo);
    ctx.set_gpr(31, 0x089C9938u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 222u, 0x0893CE3Cu>(ctx, &aot_mem) && ctx.pc == 0x089C9938u) goto L_089C9938;
    return;
L_089C9938:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089C9944u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089C9944u) goto L_089C9944;
    return;
L_089C9944:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C9960u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C9960u) goto L_089C9960;
    return;
L_089C9960:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9978;
      }
      goto L_089C9970;
    }
L_089C9970:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_089C9978;
L_089C9978:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(15));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089C99B4;
      }
      goto L_089C9988;
    }
L_089C9988:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089C99B4;
      }
      goto L_089C9994;
    }
L_089C9994:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(24));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089C99B4;
      }
      goto L_089C99A0;
    }
L_089C99A0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089C99B4;
      }
      goto L_089C99AC;
    }
L_089C99AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9A54;
      }
      goto L_089C99B4;
    }
L_089C99B4:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(468)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C99E0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C99E0u) goto L_089C99E0;
    return;
L_089C99E0:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(424)));
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(17, ctx.gpr[2] << 1u);
    ctx.set_gpr(31, 0x089C9A14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 222u, 0x0893CE3Cu>(ctx, &aot_mem) && ctx.pc == 0x089C9A14u) goto L_089C9A14;
    return;
L_089C9A14:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089C9A20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089C9A20u) goto L_089C9A20;
    return;
L_089C9A20:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C9A3Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C9A3Cu) goto L_089C9A3C;
    return;
L_089C9A3C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9A54;
      }
      goto L_089C9A4C;
    }
L_089C9A4C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_089C9A54;
L_089C9A54:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089C9A64u);
    // nop
    goto L_089C9370;
L_089C9A64:
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
L_089C9A88:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(400)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C9A94:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(396)));
    ctx.set_gpr(2, ctx.gpr[5] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C9AB8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(396)));
    ctx.set_gpr(2, ctx.gpr[5] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C9AE4:
    ctx.set_gpr(3, ctx.gpr[5] << 3u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(396)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(396)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C9B20:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(396)));
    ctx.set_gpr(2, ctx.gpr[5] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C9B44:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(396)));
    ctx.set_gpr(2, ctx.gpr[5] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C9B68:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(396)));
    ctx.set_gpr(2, ctx.gpr[5] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C9B8C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(396)));
    ctx.set_gpr(2, ctx.gpr[5] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C9BB0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(396)));
    ctx.set_gpr(2, ctx.gpr[5] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C9BD4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(22, ctx.gpr[4] + 0u);
    ctx.set_gpr(21, ctx.gpr[5] + 0u);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    ctx.set_gpr(18, ctx.gpr[8] + 0u);
    ctx.set_gpr(17, ctx.gpr[9] + 0u);
    ctx.set_gpr(16, ctx.gpr[10] + 0u);
    ctx.set_gpr(23, ctx.gpr[11] + 0u);
    ctx.set_gpr(31, 0x089C9C24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 144u, 0x089D0A28u>(ctx, &aot_mem) && ctx.pc == 0x089C9C24u) goto L_089C9C24;
    return;
L_089C9C24:
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x089C9C30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 369u, 0x089D20E0u>(ctx, &aot_mem) && ctx.pc == 0x089C9C30u) goto L_089C9C30;
    return;
L_089C9C30:
    ctx.set_gpr(3, 52224u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[21] << 8u);
    ctx.set_gpr(4, ctx.gpr[4] >> 8u);
    ctx.set_gpr(3, 45568u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, (ctx.gpr[21] >> 24u) & 0x000000FFu);
    ctx.set_gpr(4, ctx.gpr[3] << 16u);
    ctx.set_gpr(3, 45824u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[20] << 8u);
    ctx.set_gpr(4, ctx.gpr[4] >> 8u);
    ctx.set_gpr(3, 46080u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    ctx.set_gpr(3, (ctx.gpr[20] >> 24u) & 0x000000FFu);
    ctx.set_gpr(4, ctx.gpr[3] << 16u);
    ctx.set_gpr(3, 46336u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[23] << 10u);
    ctx.set_gpr(3, 60160u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(4, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, 60416u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(24), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, 60928u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[17] ^ 3u);
    ctx.set_gpr(4, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(3, 59904u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(32), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x089C9D08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 366u, 0x089D20A8u>(ctx, &aot_mem) && ctx.pc == 0x089C9D08u) goto L_089C9D08;
    return;
L_089C9D08:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
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
L_089C9D38:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
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
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[7] + 0u);
    ctx.set_gpr(19, ctx.gpr[8] + 0u);
    ctx.set_gpr(22, ctx.gpr[9] + 0u);
    ctx.set_gpr(23, ctx.gpr[10] + 0u);
    ctx.set_gpr(18, ctx.gpr[11] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(396)));
    ctx.set_gpr(2, ctx.gpr[5] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(424)));
    ctx.set_gpr(2, ctx.gpr[6] << 3u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089C9E10;
      }
      goto L_089C9DC4;
    }
L_089C9DC4:
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(31, 0x089C9DD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 222u, 0x0893CE3Cu>(ctx, &aot_mem) && ctx.pc == 0x089C9DD0u) goto L_089C9DD0;
    return;
L_089C9DD0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089C9DDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089C9DDCu) goto L_089C9DDC;
    return;
L_089C9DDC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C9DF8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C9DF8u) goto L_089C9DF8;
    return;
L_089C9DF8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(104), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9E10;
      }
      goto L_089C9E08;
    }
L_089C9E08:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_089C9E10;
L_089C9E10:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C9EB0;
      }
      goto L_089C9E1C;
    }
L_089C9E1C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C9EB0;
      }
      goto L_089C9E28;
    }
L_089C9E28:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089C9E54;
      }
      goto L_089C9E3C;
    }
L_089C9E3C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(591)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[21]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(540)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9E7C;
      }
      goto L_089C9E54;
    }
L_089C9E54:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(424)));
    ctx.set_gpr(2, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_089C9E7C;
L_089C9E7C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[23]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(10, ctx.gpr[20] + 0u);
    ctx.set_gpr(11, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089C9EB0u);
    // nop
    goto L_089C9BD4;
L_089C9EB0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, ctx.gpr[2] & 1024u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089C9EF4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
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
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    ctx.set_gpr(23, ctx.gpr[7] + 0u);
    ctx.set_gpr(30, ctx.gpr[8] + 0u);
    ctx.set_gpr(19, ctx.gpr[9] + 0u);
    ctx.set_gpr(18, ctx.gpr[10] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(396)));
    ctx.set_gpr(2, ctx.gpr[5] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(22, 0u + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9F78;
      }
      goto L_089C9F60;
    }
L_089C9F60:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089C9F78;
      }
      goto L_089C9F6C;
    }
L_089C9F6C:
    ctx.set_gpr(2, ctx.gpr[17] & 15u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089C9FB0;
      }
      goto L_089C9F78;
    }
L_089C9F78:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089C9F84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 148u, 0x089BCD74u>(ctx, &aot_mem) && ctx.pc == 0x089C9F84u) goto L_089C9F84;
    return;
L_089C9F84:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[3] << 2u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089C9FA8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089C9FA8u) goto L_089C9FA8;
    return;
L_089C9FA8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(1));
    goto L_089C9FB0;
L_089C9FB0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089C9FF4;
      }
      goto L_089C9FC0;
    }
L_089C9FC0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(424)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA044;
      }
      goto L_089C9FF4;
    }
L_089C9FF4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CA01C;
      }
      goto L_089CA004;
    }
L_089CA004:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(591)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[21]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(540)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA044;
      }
      goto L_089CA01C;
    }
L_089CA01C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(424)));
    ctx.set_gpr(2, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_089CA044;
L_089CA044:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089CA068;
      }
      goto L_089CA060;
    }
L_089CA060:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA06C;
      }
      goto L_089CA068;
    }
L_089CA068:
    ctx.set_gpr(8, ctx.gpr[19] + 0u);
    goto L_089CA06C;
L_089CA06C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(10, ctx.gpr[23] + 0u);
    ctx.set_gpr(11, ctx.gpr[30] + 0u);
    ctx.set_gpr(31, 0x089CA08Cu);
    // nop
    goto L_089C9BD4;
L_089CA08C:
    ctx.set_gpr(31, 0x089CA094u);
    // nop
    ctx.pc = 0x08B0DEB4u;
    return;
L_089CA094:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089CA0A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 336u, 0x089D1E28u>(ctx, &aot_mem) && ctx.pc == 0x089CA0A0u) goto L_089CA0A0;
    return;
L_089CA0A0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CA0BC;
      }
      goto L_089CA0B0;
    }
L_089CA0B0:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA0C0;
      }
      goto L_089CA0BC;
    }
L_089CA0BC:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(10));
    goto L_089CA0C0;
L_089CA0C0:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA100;
      }
      goto L_089CA0C8;
    }
L_089CA0C8:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(100));
    ctx.set_gpr(8, ctx.gpr[19] + 0u);
    ctx.set_gpr(9, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CA0ECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CA0ECu) goto L_089CA0EC;
    return;
L_089CA0EC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089CA0F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089CA0F8u) goto L_089CA0F8;
    return;
L_089CA0F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA118;
      }
      goto L_089CA100;
    }
L_089CA100:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089CA118u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 255u, 0x089A508Cu>(ctx, &aot_mem) && ctx.pc == 0x089CA118u) goto L_089CA118;
    return;
L_089CA118:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CA150:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA1A0;
      }
      goto L_089CA15C;
    }
L_089CA15C:
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, 2229u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-13444));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089CA19C;
      }
      goto L_089CA180;
    }
L_089CA180:
    ctx.set_gpr(3, 2229u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-13436));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA1B0;
      }
      goto L_089CA19C;
    }
L_089CA19C:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_089CA1A0;
L_089CA1A0:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < 13 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CA15C;
      }
      goto L_089CA1AC;
    }
L_089CA1AC:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089CA1B0;
L_089CA1B0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CA1B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(524)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089CA1F4;
      }
      goto L_089CA1E4;
    }
L_089CA1E4:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(724)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CA1F4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CA1F4u) goto L_089CA1F4;
    return;
L_089CA1F4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(520)));
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA248;
      }
      goto L_089CA204;
    }
L_089CA204:
    ctx.set_gpr(31, 0x089CA20Cu);
    // nop
    ctx.pc = 0x08B0DC94u;
    return;
L_089CA20C:
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(520)));
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA228;
      }
      goto L_089CA220;
    }
L_089CA220:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(376), ctx.gpr[16]);
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(1));
    goto L_089CA228;
L_089CA228:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089CA234u);
    // nop
    ctx.pc = 0x08B0DCACu;
    return;
L_089CA234:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA248;
      }
      goto L_089CA23C;
    }
L_089CA23C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089CA248u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 380u, 0x089D2198u>(ctx, &aot_mem) && ctx.pc == 0x089CA248u) goto L_089CA248;
    return;
L_089CA248:
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
L_089CA264:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    ctx.set_gpr(16, ctx.gpr[8] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089CA2A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 215u, 0x089B9378u>(ctx, &aot_mem) && ctx.pc == 0x089CA2A4u) goto L_089CA2A4;
    return;
L_089CA2A4:
    ctx.fpr[5] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(52)));
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(56)));
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(60)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[5]));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089CA2E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 215u, 0x089B9378u>(ctx, &aot_mem) && ctx.pc == 0x089CA2E8u) goto L_089CA2E8;
    return;
L_089CA2E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA318;
      }
      goto L_089CA2F0;
    }
L_089CA2F0:
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(52)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(56)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA348;
      }
      goto L_089CA318;
    }
L_089CA318:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27928)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27924)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27920)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27916)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089CA348;
L_089CA348:
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
L_089CA36C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA3E8;
      }
      goto L_089CA378;
    }
L_089CA378:
    ctx.set_gpr(9, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA3D4;
      }
      goto L_089CA384;
    }
L_089CA384:
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA3C4;
      }
      goto L_089CA390;
    }
L_089CA390:
    ctx.set_gpr(7, ctx.gpr[4] + ctx.gpr[8]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA3BC;
      }
      goto L_089CA3B4;
    }
L_089CA3B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA3C0;
      }
      goto L_089CA3BC;
    }
L_089CA3BC:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    goto L_089CA3C0;
L_089CA3C0:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_089CA3C4;
L_089CA3C4:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CA390;
      }
      goto L_089CA3D0;
    }
L_089CA3D0:
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    goto L_089CA3D4;
L_089CA3D4:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CA384;
      }
      goto L_089CA3E0;
    }
L_089CA3E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA404;
      }
      goto L_089CA3E8;
    }
L_089CA3E8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[6]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA3FC;
      }
      goto L_089CA3F4;
    }
L_089CA3F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA400;
      }
      goto L_089CA3FC;
    }
L_089CA3FC:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(8));
    goto L_089CA400;
L_089CA400:
    ctx.set_gpr(2, ctx.gpr[6] + 0u);
    goto L_089CA404;
L_089CA404:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CA40C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, 2229u << 16u);
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-13132)));
    ctx.set_gpr(3, 2229u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-13128)));
    ctx.set_gpr(3, 2229u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-13124)));
    ctx.set_gpr(3, 2229u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-13120)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, (ctx.gpr[5] >> 9u) & 0x00000003u);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[29]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(3, ctx.gpr[5] & 3u);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[29]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(3, ctx.gpr[5] & 28u);
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(3, (ctx.gpr[5] >> 5u) & 0x00000003u);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[29]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(3, (ctx.gpr[5] >> 7u) & 0x00000003u);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[29]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CA4A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.set_gpr(3, 0u + 0u);
    rt.memory().aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CA56C;
      }
      goto L_089CA4BC;
    }
L_089CA4BC:
    ctx.set_gpr(12, 2229u << 16u);
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(-13116));
    ctx.set_gpr(11, ctx.gpr[29] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(5));
    goto L_089CA4CC;
L_089CA4CC:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(4));
    // nop
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[10]) > 0;
    // nop
      if (branch_taken) {
          goto L_089CA4CC;
      }
      goto L_089CA4EC;
    }
L_089CA4EC:
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, ctx.gpr[9] << 2u);
    ctx.set_gpr(9, ctx.gpr[9] + ctx.gpr[29]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(10, ctx.gpr[9] << 9u);
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(9, ctx.gpr[9] << 2u);
    ctx.set_gpr(9, ctx.gpr[9] + ctx.gpr[29]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(10, ctx.gpr[10] | ctx.gpr[9]);
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(10, ctx.gpr[9] | ctx.gpr[10]);
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(6)));
    ctx.set_gpr(9, ctx.gpr[9] << 2u);
    ctx.set_gpr(9, ctx.gpr[9] + ctx.gpr[29]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(9, ctx.gpr[9] << 5u);
    ctx.set_gpr(10, ctx.gpr[9] | ctx.gpr[10]);
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(9, ctx.gpr[9] << 2u);
    ctx.set_gpr(9, ctx.gpr[9] + ctx.gpr[29]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(9, ctx.gpr[9] << 7u);
    ctx.set_gpr(9, ctx.gpr[9] | ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA56C;
      }
      goto L_089CA558;
    }
L_089CA558:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(9, ctx.gpr[5] << 14u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_089CA56C;
L_089CA56C:
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA5A8;
      }
      goto L_089CA578;
    }
L_089CA578:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, (ctx.gpr[3] >> 14u) & 0x00000007u);
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[3]));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[9])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    rt.memory().aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[3]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[9]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089CA5A4;
      }
      goto L_089CA5A0;
    }
L_089CA5A0:
    ctx.set_gpr(9, 0u + 0u);
    goto L_089CA5A4;
L_089CA5A4:
    ctx.set_gpr(3, ctx.gpr[9] + 0u);
    goto L_089CA5A8;
L_089CA5A8:
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA608;
      }
      goto L_089CA5B4;
    }
L_089CA5B4:
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[9]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(5, ctx.hi);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA5D4;
      }
      goto L_089CA5C8;
    }
L_089CA5C8:
    ctx.set_gpr(5, ctx.gpr[9] - ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA5D8;
      }
      goto L_089CA5D4;
    }
L_089CA5D4:
    ctx.set_gpr(5, 0u + 0u);
    goto L_089CA5D8;
L_089CA5D8:
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[5]);
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(5, ctx.gpr[9] << 1u);
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[5]);
    rt.memory().aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA604;
      }
      goto L_089CA5FC;
    }
L_089CA5FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA608;
      }
      goto L_089CA604;
    }
L_089CA604:
    ctx.set_gpr(3, ctx.gpr[9] + 0u);
    goto L_089CA608;
L_089CA608:
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA678;
      }
      goto L_089CA614;
    }
L_089CA614:
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(28));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089CA628;
      }
      goto L_089CA624;
    }
L_089CA624:
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(2));
    goto L_089CA628;
L_089CA628:
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[9]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(5, ctx.hi);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA648;
      }
      goto L_089CA63C;
    }
L_089CA63C:
    ctx.set_gpr(5, ctx.gpr[9] - ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA64C;
      }
      goto L_089CA648;
    }
L_089CA648:
    ctx.set_gpr(5, 0u + 0u);
    goto L_089CA64C;
L_089CA64C:
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[5]);
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[9]);
    rt.memory().aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA674;
      }
      goto L_089CA66C;
    }
L_089CA66C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA678;
      }
      goto L_089CA674;
    }
L_089CA674:
    ctx.set_gpr(3, ctx.gpr[9] + 0u);
    goto L_089CA678;
L_089CA678:
    ctx.set_gpr(9, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(6)));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA6DC;
      }
      goto L_089CA684;
    }
L_089CA684:
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[9]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(5, ctx.hi);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA6A4;
      }
      goto L_089CA698;
    }
L_089CA698:
    ctx.set_gpr(5, ctx.gpr[9] - ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA6A8;
      }
      goto L_089CA6A4;
    }
L_089CA6A4:
    ctx.set_gpr(5, 0u + 0u);
    goto L_089CA6A8;
L_089CA6A8:
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[5]);
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(6)));
    ctx.set_gpr(5, ctx.gpr[9] << 1u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[9]);
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[5]);
    rt.memory().aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA6D8;
      }
      goto L_089CA6D0;
    }
L_089CA6D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA6DC;
      }
      goto L_089CA6D8;
    }
L_089CA6D8:
    ctx.set_gpr(3, ctx.gpr[9] + 0u);
    goto L_089CA6DC;
L_089CA6DC:
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA758;
      }
      goto L_089CA6E8;
    }
L_089CA6E8:
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(4, ctx.hi);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA708;
      }
      goto L_089CA6FC;
    }
L_089CA6FC:
    ctx.set_gpr(4, ctx.gpr[6] - ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA70C;
      }
      goto L_089CA708;
    }
L_089CA708:
    ctx.set_gpr(4, 0u + 0u);
    goto L_089CA70C;
L_089CA70C:
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[6] << 1u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[6]);
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA758;
      }
      goto L_089CA730;
    }
L_089CA730:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA744;
      }
      goto L_089CA738;
    }
L_089CA738:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_089CA744;
L_089CA744:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[3]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(4, ctx.hi);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CA738;
      }
      goto L_089CA758;
    }
L_089CA758:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CA764:
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
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(21, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(22, 0u + 0u);
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(10));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA7D4;
      }
      goto L_089CA7BC;
    }
L_089CA7BC:
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    // nop
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CA7BC;
      }
      goto L_089CA7D4;
    }
L_089CA7D4:
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA824;
      }
      goto L_089CA7E4;
    }
L_089CA7E4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CA7F8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CA7F8u) goto L_089CA7F8;
    return;
L_089CA7F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 240u);
    ctx.set_gpr(17, (ctx.gpr[2] >> 4u) & 0x000000FFu);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089CA818u);
    // nop
    goto L_089CA36C;
L_089CA818:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA8A4;
      }
      goto L_089CA824;
    }
L_089CA824:
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA8A4;
      }
      goto L_089CA830;
    }
L_089CA830:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089CA844u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 215u, 0x089B9378u>(ctx, &aot_mem) && ctx.pc == 0x089CA844u) goto L_089CA844;
    return;
L_089CA844:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA8A4;
      }
      goto L_089CA850;
    }
L_089CA850:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089CA86Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 215u, 0x089B9378u>(ctx, &aot_mem) && ctx.pc == 0x089CA86Cu) goto L_089CA86C;
    return;
L_089CA86C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089CA884u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 679u, 0x089BBA78u>(ctx, &aot_mem) && ctx.pc == 0x089CA884u) goto L_089CA884;
    return;
L_089CA884:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const std::uint32_t dividend = ctx.gpr[16]; const std::uint32_t divisor = ctx.gpr[19]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089CA8A0u);
    // nop
    goto L_089CA36C;
L_089CA8A0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_089CA8A4;
L_089CA8A4:
    ctx.set_gpr(23, 0u + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA8C0;
      }
      goto L_089CA8B0;
    }
L_089CA8B0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CA8C0;
      }
      goto L_089CA8BC;
    }
L_089CA8BC:
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(1));
    goto L_089CA8C0;
L_089CA8C0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA9C4;
      }
      goto L_089CA8C8;
    }
L_089CA8C8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CA8DCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CA8DCu) goto L_089CA8DC;
    return;
L_089CA8DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 240u);
    ctx.set_gpr(2, (ctx.gpr[2] >> 4u) & 0x000000FFu);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA904;
      }
      goto L_089CA8F0;
    }
L_089CA8F0:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CA904;
      }
      goto L_089CA8F8;
    }
L_089CA8F8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(68), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(22, ctx.gpr[16] + 0u);
    goto L_089CA904;
L_089CA904:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CA918u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CA918u) goto L_089CA918;
    return;
L_089CA918:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 15u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, (ctx.gpr[2] >> 16u) & 0x000000FFu);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA938;
      }
      goto L_089CA930;
    }
L_089CA930:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(70), static_cast<std::uint16_t>(ctx.gpr[2]));
    goto L_089CA938;
L_089CA938:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CA94Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CA94Cu) goto L_089CA94C;
    return;
L_089CA94C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA964;
      }
      goto L_089CA95C;
    }
L_089CA95C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(28));
    rt.memory().aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(72), static_cast<std::uint16_t>(ctx.gpr[2]));
    goto L_089CA964;
L_089CA964:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CA978u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CA978u) goto L_089CA978;
    return;
L_089CA978:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 2u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CA990;
      }
      goto L_089CA988;
    }
L_089CA988:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(74), static_cast<std::uint16_t>(ctx.gpr[2]));
    goto L_089CA990;
L_089CA990:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CA9A4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CA9A4u) goto L_089CA9A4;
    return;
L_089CA9A4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CADF4;
      }
      goto L_089CA9B4;
    }
L_089CA9B4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(76), static_cast<std::uint16_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CADF4;
      }
      goto L_089CA9C4;
    }
L_089CA9C4:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CADF4;
      }
      goto L_089CA9D0;
    }
L_089CA9D0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089CA9E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 215u, 0x089B9378u>(ctx, &aot_mem) && ctx.pc == 0x089CA9E4u) goto L_089CA9E4;
    return;
L_089CA9E4:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089CA9FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 215u, 0x089B9378u>(ctx, &aot_mem) && ctx.pc == 0x089CA9FCu) goto L_089CA9FC;
    return;
L_089CA9FC:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089CAA14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 215u, 0x089B9378u>(ctx, &aot_mem) && ctx.pc == 0x089CAA14u) goto L_089CAA14;
    return;
L_089CAA14:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089CAA2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 215u, 0x089B9378u>(ctx, &aot_mem) && ctx.pc == 0x089CAA2Cu) goto L_089CAA2C;
    return;
L_089CAA2C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089CAA44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 215u, 0x089B9378u>(ctx, &aot_mem) && ctx.pc == 0x089CAA44u) goto L_089CAA44;
    return;
L_089CAA44:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CAB08;
      }
      goto L_089CAA50;
    }
L_089CAA50:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30004)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CAA6Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CAA6Cu) goto L_089CAA6C;
    return;
L_089CAA6C:
    { const bool branch_taken = ctx.gpr[30] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CAA98;
      }
      goto L_089CAA74;
    }
L_089CAA74:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30016)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CAA90u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CAA90u) goto L_089CAA90;
    return;
L_089CAA90:
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CAAA8;
      }
      goto L_089CAA98;
    }
L_089CAA98:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(76), static_cast<std::uint16_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CAB08;
      }
      goto L_089CAAA8;
    }
L_089CAAA8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30028)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CAAC4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CAAC4u) goto L_089CAAC4;
    return;
L_089CAAC4:
    { const bool branch_taken = ctx.gpr[30] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CAAF0;
      }
      goto L_089CAACC;
    }
L_089CAACC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29952)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CAAE8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CAAE8u) goto L_089CAAE8;
    return;
L_089CAAE8:
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CAB00;
      }
      goto L_089CAAF0;
    }
L_089CAAF0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(76), static_cast<std::uint16_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CAB08;
      }
      goto L_089CAB00;
    }
L_089CAB00:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(76), static_cast<std::uint16_t>(ctx.gpr[2]));
    goto L_089CAB08;
L_089CAB08:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CABC8;
      }
      goto L_089CAB10;
    }
L_089CAB10:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30004)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CAB2Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CAB2Cu) goto L_089CAB2C;
    return;
L_089CAB2C:
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CAB58;
      }
      goto L_089CAB34;
    }
L_089CAB34:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30016)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CAB50u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CAB50u) goto L_089CAB50;
    return;
L_089CAB50:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CAB68;
      }
      goto L_089CAB58;
    }
L_089CAB58:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(74), static_cast<std::uint16_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CABC8;
      }
      goto L_089CAB68;
    }
L_089CAB68:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30028)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CAB84u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CAB84u) goto L_089CAB84;
    return;
L_089CAB84:
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CABB0;
      }
      goto L_089CAB8C;
    }
L_089CAB8C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29952)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CABA8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CABA8u) goto L_089CABA8;
    return;
L_089CABA8:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CABC0;
      }
      goto L_089CABB0;
    }
L_089CABB0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(74), static_cast<std::uint16_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CABC8;
      }
      goto L_089CABC0;
    }
L_089CABC0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(74), static_cast<std::uint16_t>(ctx.gpr[2]));
    goto L_089CABC8;
L_089CABC8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CAC88;
      }
      goto L_089CABD0;
    }
L_089CABD0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30004)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CABECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CABECu) goto L_089CABEC;
    return;
L_089CABEC:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CAC18;
      }
      goto L_089CABF4;
    }
L_089CABF4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30016)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CAC10u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CAC10u) goto L_089CAC10;
    return;
L_089CAC10:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CAC28;
      }
      goto L_089CAC18;
    }
L_089CAC18:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(70), static_cast<std::uint16_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CAC88;
      }
      goto L_089CAC28;
    }
L_089CAC28:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30028)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CAC44u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CAC44u) goto L_089CAC44;
    return;
L_089CAC44:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CAC70;
      }
      goto L_089CAC4C;
    }
L_089CAC4C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29952)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CAC68u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CAC68u) goto L_089CAC68;
    return;
L_089CAC68:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CAC80;
      }
      goto L_089CAC70;
    }
L_089CAC70:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(70), static_cast<std::uint16_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CAC88;
      }
      goto L_089CAC80;
    }
L_089CAC80:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(70), static_cast<std::uint16_t>(ctx.gpr[2]));
    goto L_089CAC88;
L_089CAC88:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CAD54;
      }
      goto L_089CAC90;
    }
L_089CAC90:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CAD54;
      }
      goto L_089CAC98;
    }
L_089CAC98:
    ctx.set_gpr(22, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30004)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CACB8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CACB8u) goto L_089CACB8;
    return;
L_089CACB8:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CACE4;
      }
      goto L_089CACC0;
    }
L_089CACC0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30016)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CACDCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CACDCu) goto L_089CACDC;
    return;
L_089CACDC:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CACF4;
      }
      goto L_089CACE4;
    }
L_089CACE4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(68), static_cast<std::uint16_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CAD54;
      }
      goto L_089CACF4;
    }
L_089CACF4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30028)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CAD10u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CAD10u) goto L_089CAD10;
    return;
L_089CAD10:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CAD3C;
      }
      goto L_089CAD18;
    }
L_089CAD18:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29952)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CAD34u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CAD34u) goto L_089CAD34;
    return;
L_089CAD34:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CAD4C;
      }
      goto L_089CAD3C;
    }
L_089CAD3C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(68), static_cast<std::uint16_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CAD54;
      }
      goto L_089CAD4C;
    }
L_089CAD4C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(68), static_cast<std::uint16_t>(ctx.gpr[2]));
    goto L_089CAD54;
L_089CAD54:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CADF4;
      }
      goto L_089CAD5C;
    }
L_089CAD5C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30004)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CAD78u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CAD78u) goto L_089CAD78;
    return;
L_089CAD78:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CADA4;
      }
      goto L_089CAD80;
    }
L_089CAD80:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30016)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CAD9Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CAD9Cu) goto L_089CAD9C;
    return;
L_089CAD9C:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CADEC;
      }
      goto L_089CADA4;
    }
L_089CADA4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CADC0;
      }
      goto L_089CADB0;
    }
L_089CADB0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    rt.memory().aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(72), static_cast<std::uint16_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CADF4;
      }
      goto L_089CADC0;
    }
L_089CADC0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x089CADD4u);
    // nop
    goto L_089CA150;
L_089CADD4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    rt.memory().aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(72), static_cast<std::uint16_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CADF4;
      }
      goto L_089CADEC;
    }
L_089CADEC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(28));
    rt.memory().aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(72), static_cast<std::uint16_t>(ctx.gpr[2]));
    goto L_089CADF4;
L_089CADF4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x089CAE10u);
    // nop
    goto L_089CA4A4;
L_089CAE10:
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
L_089CAE44:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-112));
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
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[6]);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    ctx.set_gpr(21, ctx.gpr[8] + 0u);
    ctx.set_gpr(16, ctx.gpr[9] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(31, 0x089CAE98u);
    // nop
    goto L_089CA40C;
L_089CAE98:
    ctx.set_gpr(22, rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CAF10;
      }
      goto L_089CAEA4;
    }
L_089CAEA4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089CAEB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 215u, 0x089B9378u>(ctx, &aot_mem) && ctx.pc == 0x089CAEB8u) goto L_089CAEB8;
    return;
L_089CAEB8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(30, ctx.gpr[19] + ctx.gpr[3]);
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CAF04;
      }
      goto L_089CAED4;
    }
L_089CAED4:
    ctx.set_gpr(2, ctx.gpr[22] << 1u);
    ctx.set_gpr(6, ctx.gpr[2] + ctx.gpr[22]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[17]))));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[30] + ctx.gpr[2]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[23] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x089CAF00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x089CAF00u) goto L_089CAF00;
    return;
L_089CAF00:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_089CAF04;
L_089CAF04:
    ctx.set_gpr(3, ctx.gpr[20] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CAED4;
      }
      goto L_089CAF10;
    }
L_089CAF10:
    ctx.set_gpr(22, rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(106)));
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CAF88;
      }
      goto L_089CAF1C;
    }
L_089CAF1C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089CAF30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 215u, 0x089B9378u>(ctx, &aot_mem) && ctx.pc == 0x089CAF30u) goto L_089CAF30;
    return;
L_089CAF30:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(6)));
    ctx.set_gpr(30, ctx.gpr[19] + ctx.gpr[3]);
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CAF7C;
      }
      goto L_089CAF4C;
    }
L_089CAF4C:
    ctx.set_gpr(2, ctx.gpr[22] << 1u);
    ctx.set_gpr(6, ctx.gpr[2] + ctx.gpr[22]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[17]))));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[30] + ctx.gpr[2]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[23] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x089CAF78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x089CAF78u) goto L_089CAF78;
    return;
L_089CAF78:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_089CAF7C;
L_089CAF7C:
    ctx.set_gpr(3, ctx.gpr[20] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CAF4C;
      }
      goto L_089CAF88;
    }
L_089CAF88:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB01C;
      }
      goto L_089CAF94;
    }
L_089CAF94:
    ctx.set_gpr(3, ctx.gpr[3] & 65535u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(28));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CAFB0;
      }
      goto L_089CAFA4;
    }
L_089CAFA4:
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CAFB4;
      }
      goto L_089CAFB0;
    }
L_089CAFB0:
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(2));
    goto L_089CAFB4;
L_089CAFB4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089CAFC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 215u, 0x089B9378u>(ctx, &aot_mem) && ctx.pc == 0x089CAFC8u) goto L_089CAFC8;
    return;
L_089CAFC8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(30, ctx.gpr[19] + ctx.gpr[3]);
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB010;
      }
      goto L_089CAFE4;
    }
L_089CAFE4:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[17]))));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[30] + ctx.gpr[2]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[23] + ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x089CB00Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x089CB00Cu) goto L_089CB00C;
    return;
L_089CB00C:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_089CB010;
L_089CB010:
    ctx.set_gpr(3, ctx.gpr[20] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CAFE4;
      }
      goto L_089CB01C;
    }
L_089CB01C:
    ctx.set_gpr(22, rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(102)));
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB090;
      }
      goto L_089CB028;
    }
L_089CB028:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089CB03Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 215u, 0x089B9378u>(ctx, &aot_mem) && ctx.pc == 0x089CB03Cu) goto L_089CB03C;
    return;
L_089CB03C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(21, ctx.gpr[19] + ctx.gpr[3]);
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB084;
      }
      goto L_089CB058;
    }
L_089CB058:
    ctx.set_gpr(6, ctx.gpr[22] << 1u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[17]))));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[21] + ctx.gpr[2]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[23] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x089CB080u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x089CB080u) goto L_089CB080;
    return;
L_089CB080:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_089CB084;
L_089CB084:
    ctx.set_gpr(3, ctx.gpr[20] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CB058;
      }
      goto L_089CB090;
    }
L_089CB090:
    ctx.set_gpr(20, rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB4EC;
      }
      goto L_089CB09C;
    }
L_089CB09C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089CB0B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 215u, 0x089B9378u>(ctx, &aot_mem) && ctx.pc == 0x089CB0B0u) goto L_089CB0B0;
    return;
L_089CB0B0:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089CB0D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 215u, 0x089B9378u>(ctx, &aot_mem) && ctx.pc == 0x089CB0D4u) goto L_089CB0D4;
    return;
L_089CB0D4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089CB0E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 679u, 0x089BBA78u>(ctx, &aot_mem) && ctx.pc == 0x089CB0E4u) goto L_089CB0E4;
    return;
L_089CB0E4:
    ctx.set_gpr(30, ctx.gpr[2] + 0u);
    ctx.set_gpr(21, 0u + 0u);
    ctx.set_gpr(22, 0u + 0u);
    ctx.set_gpr(23, 0u + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26776)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CB114u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CB114u) goto L_089CB114;
    return;
L_089CB114:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CB1A4;
      }
      goto L_089CB120;
    }
L_089CB120:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26768)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CB140u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CB140u) goto L_089CB140;
    return;
L_089CB140:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CB1A4;
      }
      goto L_089CB14C;
    }
L_089CB14C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26748)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CB16Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CB16Cu) goto L_089CB16C;
    return;
L_089CB16C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CB1A4;
      }
      goto L_089CB178;
    }
L_089CB178:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30040)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CB198u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CB198u) goto L_089CB198;
    return;
L_089CB198:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CB1B0;
      }
      goto L_089CB1A4;
    }
L_089CB1A4:
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB2C8;
      }
      goto L_089CB1B0;
    }
L_089CB1B0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30016)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CB1D0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CB1D0u) goto L_089CB1D0;
    return;
L_089CB1D0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CB208;
      }
      goto L_089CB1DC;
    }
L_089CB1DC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30004)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CB1FCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CB1FCu) goto L_089CB1FC;
    return;
L_089CB1FC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CB214;
      }
      goto L_089CB208;
    }
L_089CB208:
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB2C8;
      }
      goto L_089CB214;
    }
L_089CB214:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26760)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CB234u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CB234u) goto L_089CB234;
    return;
L_089CB234:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CB2C4;
      }
      goto L_089CB240;
    }
L_089CB240:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26740)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CB260u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CB260u) goto L_089CB260;
    return;
L_089CB260:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CB2C4;
      }
      goto L_089CB26C;
    }
L_089CB26C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29952)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CB28Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CB28Cu) goto L_089CB28C;
    return;
L_089CB28C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CB2C4;
      }
      goto L_089CB298;
    }
L_089CB298:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30028)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CB2B8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CB2B8u) goto L_089CB2B8;
    return;
L_089CB2B8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CB2C8;
      }
      goto L_089CB2C4;
    }
L_089CB2C4:
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_089CB2C8;
L_089CB2C8:
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB4E0;
      }
      goto L_089CB2D4;
    }
L_089CB2D4:
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB378;
      }
      goto L_089CB2E0;
    }
L_089CB2E0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089CB314;
      }
      goto L_089CB2EC;
    }
L_089CB2EC:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[17]))));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB374;
      }
      goto L_089CB314;
    }
L_089CB314:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089CB348;
      }
      goto L_089CB320;
    }
L_089CB320:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[17]))));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB374;
      }
      goto L_089CB348;
    }
L_089CB348:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089CB374;
      }
      goto L_089CB354;
    }
L_089CB354:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[17]))));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_089CB374;
L_089CB374:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_089CB378;
L_089CB378:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(3, ctx.gpr[3] & 1536u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB3A8;
      }
      goto L_089CB388;
    }
L_089CB388:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(6, ctx.gpr[3] | 49152u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[6]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 14u));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB3AC;
      }
      goto L_089CB3A8;
    }
L_089CB3A8:
    ctx.set_gpr(3, 0u + 0u);
    goto L_089CB3AC;
L_089CB3AC:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CB2E0;
      }
      goto L_089CB3B8;
    }
L_089CB3B8:
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB4D0;
      }
      goto L_089CB3C4;
    }
L_089CB3C4:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[30])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB440;
      }
      goto L_089CB3E4;
    }
L_089CB3E4:
    ctx.set_gpr(6, ctx.gpr[4] + ctx.gpr[6]);
    ctx.set_gpr(7, ctx.gpr[6] << 2u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[7]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_fpr_bits(2, ctx.fpr_bits(0) & 0x7FFFFFFFu);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32516)));
    ctx.set_fpu_condition((ctx.fpr[2] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089CB4CC;
      }
      goto L_089CB418;
    }
L_089CB418:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[17]))));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB4CC;
      }
      goto L_089CB440;
    }
L_089CB440:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB48C;
      }
      goto L_089CB448;
    }
L_089CB448:
    ctx.set_gpr(6, ctx.gpr[4] + ctx.gpr[6]);
    ctx.set_gpr(7, ctx.gpr[6] << 1u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[7]);
    ctx.set_gpr(7, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB4CC;
      }
      goto L_089CB464;
    }
L_089CB464:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[17]))));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB4CC;
      }
      goto L_089CB48C;
    }
L_089CB48C:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB4CC;
      }
      goto L_089CB494;
    }
L_089CB494:
    ctx.set_gpr(7, ctx.gpr[4] + ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[7]);
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB4CC;
      }
      goto L_089CB4AC;
    }
L_089CB4AC:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[17]))));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(6, ctx.gpr[19] + ctx.gpr[6]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    goto L_089CB4CC;
L_089CB4CC:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_089CB4D0;
L_089CB4D0:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CB3C4;
      }
      goto L_089CB4DC;
    }
L_089CB4DC:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_089CB4E0;
L_089CB4E0:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CB2D4;
      }
      goto L_089CB4EC;
    }
L_089CB4EC:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CB520:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CB548u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CB548u) goto L_089CB548;
    return;
L_089CB548:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(52))))));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(8, ctx.gpr[17] + static_cast<std::uint32_t>(54));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(31, 0x089CB568u);
    // nop
    goto L_089CAE44;
L_089CB568:
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
L_089CB580:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, (ctx.gpr[19] >> 9u) & 0x00000003u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089CB5BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 215u, 0x089B9378u>(ctx, &aot_mem) && ctx.pc == 0x089CB5BCu) goto L_089CB5BC;
    return;
L_089CB5BC:
    ctx.set_gpr(3, ctx.gpr[18] ^ 0u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB5D0;
      }
      goto L_089CB5CC;
    }
L_089CB5CC:
    ctx.set_gpr(3, 0u < ctx.gpr[2] ? 1u : 0u);
    goto L_089CB5D0;
L_089CB5D0:
    ctx.set_gpr(17, ctx.gpr[3] & 255u);
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-13096));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    goto L_089CB5E4;
L_089CB5E4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    // nop
      if (branch_taken) {
          goto L_089CB5E4;
      }
      goto L_089CB608;
    }
L_089CB608:
    ctx.set_gpr(3, (ctx.gpr[19] >> 2u) & 0x00000007u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[19] & 3u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    ctx.set_gpr(3, 0u < ctx.gpr[17] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(4, ctx.gpr[3] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB63C;
      }
      goto L_089CB630;
    }
L_089CB630:
    ctx.set_gpr(3, (ctx.gpr[19] >> 7u) & 0x00000003u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB640;
      }
      goto L_089CB63C;
    }
L_089CB63C:
    ctx.set_gpr(3, 0u + 0u);
    goto L_089CB640;
L_089CB640:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB658;
      }
      goto L_089CB64C;
    }
L_089CB64C:
    ctx.set_gpr(3, (ctx.gpr[19] >> 5u) & 0x00000003u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB65C;
      }
      goto L_089CB658;
    }
L_089CB658:
    ctx.set_gpr(3, 0u + 0u);
    goto L_089CB65C;
L_089CB65C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[4] & 255u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[3]);
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB70C;
      }
      goto L_089CB674;
    }
L_089CB674:
    ctx.set_gpr(3, ctx.gpr[20] << 3u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[29]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB708;
      }
      goto L_089CB688;
    }
L_089CB688:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089CB69Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 215u, 0x089B9378u>(ctx, &aot_mem) && ctx.pc == 0x089CB69Cu) goto L_089CB69C;
    return;
L_089CB69C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB708;
      }
      goto L_089CB6A4;
    }
L_089CB6A4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089CB6BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 462u, 0x0884D888u>(ctx, &aot_mem) && ctx.pc == 0x089CB6BCu) goto L_089CB6BC;
    return;
L_089CB6BC:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB6E4;
      }
      goto L_089CB6DC;
    }
L_089CB6DC:
    ctx.set_gpr(31, 0x089CB6E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089CB6E4u) goto L_089CB6E4;
    return;
L_089CB6E4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089CB6F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 9u, 0x089100E0u>(ctx, &aot_mem) && ctx.pc == 0x089CB6F4u) goto L_089CB6F4;
    return;
L_089CB6F4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    goto L_089CB708;
L_089CB708:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_089CB70C;
L_089CB70C:
    ctx.set_gpr(3, ctx.gpr[20] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CB674;
      }
      goto L_089CB718;
    }
L_089CB718:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB76C;
      }
      goto L_089CB720;
    }
L_089CB720:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089CB734u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 215u, 0x089B9378u>(ctx, &aot_mem) && ctx.pc == 0x089CB734u) goto L_089CB734;
    return;
L_089CB734:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089CB74Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 215u, 0x089B9378u>(ctx, &aot_mem) && ctx.pc == 0x089CB74Cu) goto L_089CB74C;
    return;
L_089CB74C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB75C;
      }
      goto L_089CB754;
    }
L_089CB754:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4660));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    goto L_089CB75C;
L_089CB75C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB76C;
      }
      goto L_089CB764;
    }
L_089CB764:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4660));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    goto L_089CB76C;
L_089CB76C:
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
L_089CB790:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(218), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(216), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(217), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(218), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), 0u);
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27920)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27916)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27928)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27924)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(104), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(180), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(172), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(176), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(184), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(208), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(204), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(212), 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CB840:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, (ctx.gpr[3] >> 11u) & 0x00000003u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089CB86C;
      }
      goto L_089CB854;
    }
L_089CB854:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB8B0;
      }
      goto L_089CB86C;
    }
L_089CB86C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089CB894;
      }
      goto L_089CB878;
    }
L_089CB878:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(5, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CB8B0;
      }
      goto L_089CB894;
    }
L_089CB894:
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    goto L_089CB8B0;
L_089CB8B0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CB8B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(22));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x089CB8D8u);
    // nop
    goto L_089CA40C;
L_089CB8D8:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(22));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(8, ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x089CB8F4u);
    // nop
    goto L_089CA4A4;
L_089CB8F4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CB908:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089CB934:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(204)));
    ctx.set_gpr(2, 65280u << 16u);
    ctx.set_gpr(16, ctx.gpr[17] & ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CBE18;
      }
      goto L_089CB96C;
    }
L_089CB96C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[6] >> 24u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(255));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089CBE14;
      }
      goto L_089CB980;
    }
L_089CB980:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(254));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089CBE14;
      }
      goto L_089CB98C;
    }
L_089CB98C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(253));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089CBE14;
      }
      goto L_089CB998;
    }
L_089CB998:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(252));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089CBE14;
      }
      goto L_089CB9A4;
    }
L_089CB9A4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(251));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089CBE14;
      }
      goto L_089CB9B0;
    }
L_089CB9B0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(250));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089CBE14;
      }
      goto L_089CB9BC;
    }
L_089CB9BC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(239));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089CBE14;
      }
      goto L_089CB9C8;
    }
L_089CB9C8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(237));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089CBE14;
      }
      goto L_089CB9D4;
    }
L_089CB9D4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(209));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089CBE14;
      }
      goto L_089CB9E0;
    }
L_089CB9E0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(183));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089CBE14;
      }
      goto L_089CB9EC;
    }
L_089CB9EC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(182));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089CBE14;
      }
      goto L_089CB9F8;
    }
L_089CB9F8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(90));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089CBE14;
      }
      goto L_089CBA04;
    }
L_089CBA04:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(89));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089CBE14;
      }
      goto L_089CBA10;
    }
L_089CBA10:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(82));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089CBE14;
      }
      goto L_089CBA1C;
    }
L_089CBA1C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(79));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089CBE14;
      }
      goto L_089CBA28;
    }
L_089CBA28:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(78));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089CBE14;
      }
      goto L_089CBA34;
    }
L_089CBA34:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(57));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089CBE14;
      }
      goto L_089CBA40;
    }
L_089CBA40:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(53));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089CBE14;
      }
      goto L_089CBA4C;
    }
L_089CBA4C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(52));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089CBE14;
      }
      goto L_089CBA58;
    }
L_089CBA58:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(41));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089CBE14;
      }
      goto L_089CBA64;
    }
L_089CBA64:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(17));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089CBE14;
      }
      goto L_089CBA70;
    }
L_089CBA70:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(13));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089CBE14;
      }
      goto L_089CBA7C;
    }
L_089CBA7C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089CBE14;
      }
      goto L_089CBA88;
    }
L_089CBA88:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(19));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089CBE14;
      }
      goto L_089CBA94;
    }
L_089CBA94:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(20));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089CBE14;
      }
      goto L_089CBAA0;
    }
L_089CBAA0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(88));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089CBDD0;
      }
      goto L_089CBAAC;
    }
L_089CBAAC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(85));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089CBDA0;
      }
      goto L_089CBAB8;
    }
L_089CBAB8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(73));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089CBD88;
      }
      goto L_089CBAC4;
    }
L_089CBAC4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(72));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089CBD70;
      }
      goto L_089CBAD0;
    }
L_089CBAD0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(75));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089CBD58;
      }
      goto L_089CBADC;
    }
L_089CBADC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(74));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089CBD40;
      }
      goto L_089CBAE8;
    }
L_089CBAE8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(15));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089CBD24;
      }
      goto L_089CBAF4;
    }
L_089CBAF4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(59));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089CBD14;
      }
      goto L_089CBB00;
    }
L_089CBB00:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(7));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089CBCF0;
      }
      goto L_089CBB0C;
    }
L_089CBB0C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(18));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089CBCDC;
      }
      goto L_089CBB18;
    }
L_089CBB18:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089CBCC4;
      }
      goto L_089CBB24;
    }
L_089CBB24:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089CBCAC;
      }
      goto L_089CBB30;
    }
L_089CBB30:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089CBC2C;
      }
      goto L_089CBB3C;
    }
L_089CBB3C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(11));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089CBBE0;
      }
      goto L_089CBB48;
    }
L_089CBB48:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(10));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089CBBAC;
      }
      goto L_089CBB54;
    }
L_089CBB54:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089CBB88;
      }
      goto L_089CBB60;
    }
L_089CBB60:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089CBB74;
      }
      goto L_089CBB6C;
    }
L_089CBB6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CBE14;
      }
      goto L_089CBB74;
    }
L_089CBB74:
    ctx.set_gpr(2, 255u << 16u);
    ctx.set_gpr(2, ctx.gpr[6] & ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] << 8u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CBE14;
      }
      goto L_089CBB88;
    }
L_089CBB88:
    ctx.set_gpr(2, ctx.gpr[6] << 8u);
    ctx.set_gpr(2, ctx.gpr[2] >> 8u);
    ctx.set_gpr(17, ctx.gpr[16] | ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(204), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CBE14;
      }
      goto L_089CBBAC;
    }
L_089CBBAC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(204), ctx.gpr[17]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(212), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 8u);
    ctx.set_gpr(2, ctx.gpr[2] >> 8u);
    ctx.set_gpr(17, ctx.gpr[16] | ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CBE14;
      }
      goto L_089CBBE0;
    }
L_089CBBE0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(212)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CBC04;
      }
      goto L_089CBBEC;
    }
L_089CBBEC:
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(204), 0u);
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CBE24;
      }
      goto L_089CBC04;
    }
L_089CBC04:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(212), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(204)));
    ctx.set_gpr(17, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, 65280u << 16u);
    ctx.set_gpr(16, ctx.gpr[17] & ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CBE14;
      }
      goto L_089CBC2C;
    }
L_089CBC2C:
    ctx.set_gpr(2, ctx.gpr[6] & 65535u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, (ctx.gpr[2] >> 16u) & 0x00000007u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-29292));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-29296));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const std::uint32_t dividend = ctx.gpr[3]; const std::uint32_t divisor = ctx.gpr[2]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(2, ctx.lo);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(204), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CBE24;
      }
      goto L_089CBCAC;
    }
L_089CBCAC:
    ctx.set_gpr(2, ctx.gpr[6] << 8u);
    ctx.set_gpr(2, ctx.gpr[2] >> 8u);
    ctx.set_gpr(2, ctx.gpr[16] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CBE14;
      }
      goto L_089CBCC4;
    }
L_089CBCC4:
    ctx.set_gpr(2, ctx.gpr[6] << 8u);
    ctx.set_gpr(2, ctx.gpr[2] >> 8u);
    ctx.set_gpr(2, ctx.gpr[16] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CBE14;
      }
      goto L_089CBCDC;
    }
L_089CBCDC:
    ctx.set_gpr(2, ctx.gpr[6] << 8u);
    ctx.set_gpr(2, ctx.gpr[2] >> 8u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CBE14;
      }
      goto L_089CBCF0;
    }
L_089CBCF0:
    ctx.set_gpr(2, ctx.gpr[6] << 8u);
    ctx.set_gpr(2, ctx.gpr[2] >> 8u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(218), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CBE14;
      }
      goto L_089CBD14;
    }
L_089CBD14:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(44));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CBE14;
      }
      goto L_089CBD24;
    }
L_089CBD24:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(204), 0u);
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CBE24;
      }
      goto L_089CBD40;
    }
L_089CBD40:
    ctx.set_gpr(2, ctx.gpr[6] << 8u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CBE14;
      }
      goto L_089CBD58;
    }
L_089CBD58:
    ctx.set_gpr(2, ctx.gpr[6] << 8u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CBE14;
      }
      goto L_089CBD70;
    }
L_089CBD70:
    ctx.set_gpr(2, ctx.gpr[6] << 8u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CBE14;
      }
      goto L_089CBD88;
    }
L_089CBD88:
    ctx.set_gpr(2, ctx.gpr[6] << 8u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CBE14;
      }
      goto L_089CBDA0;
    }
L_089CBDA0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x089CBDB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 207u, 0x08A02CCCu>(ctx, &aot_mem) && ctx.pc == 0x089CBDB0u) goto L_089CBDB0;
    return;
L_089CBDB0:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CBE14;
      }
      goto L_089CBDD0;
    }
L_089CBDD0:
    ctx.set_gpr(2, ctx.gpr[6] & 255u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_089CBDEC;
      }
      goto L_089CBDDC;
    }
L_089CBDDC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CBE04;
      }
      goto L_089CBDEC;
    }
L_089CBDEC:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_089CBE04;
L_089CBE04:
    ctx.set_gpr(2, 17279u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[1] / ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089CBE14;
L_089CBE14:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    goto L_089CBE18;
L_089CBE18:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CB96C;
      }
      goto L_089CBE20;
    }
L_089CBE20:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089CBE24;
L_089CBE24:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
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
L_089CBE40:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(220)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CBE70u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CBE70u) goto L_089CBE70;
    return;
L_089CBE70:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(216), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CBEB4;
      }
      goto L_089CBE84;
    }
L_089CBE84:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(204), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089CBEA0u);
    // nop
    goto L_089CB934;
L_089CBEA0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(217), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 4u, 0x089CC098u>(ctx, &aot_mem); return;
      }
      goto L_089CBEB4;
    }
L_089CBEB4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(208), 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(204), 0u);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(217), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(232)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CBEDCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CBEDCu) goto L_089CBEDC;
    return;
L_089CBEDC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CBF08;
      }
      goto L_089CBEE4;
    }
L_089CBEE4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(72)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CBF44;
      }
      goto L_089CBF08;
    }
L_089CBF08:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(1136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089CBF20u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089CBF20u) goto L_089CBF20;
    return;
L_089CBF20:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(116)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    goto L_089CBF44;
L_089CBF44:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089CBF78;
      }
      goto L_089CBF50;
    }
L_089CBF50:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089CBF5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 138u, 0x089BCCF4u>(ctx, &aot_mem) && ctx.pc == 0x089CBF5Cu) goto L_089CBF5C;
    return;
L_089CBF5C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089CBF68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 628u, 0x089F7718u>(ctx, &aot_mem) && ctx.pc == 0x089CBF68u) goto L_089CBF68;
    return;
L_089CBF68:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089CBF78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x089CBF78u) goto L_089CBF78;
    return;
L_089CBF78:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[3] & 8192u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CBFF0;
      }
      goto L_089CBF8C;
    }
L_089CBF8C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-8193));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CBFD8;
      }
      goto L_089CBFA0;
    }
L_089CBFA0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089CBFC8;
      }
      goto L_089CBFAC;
    }
L_089CBFAC:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089CBFBC;
      }
      goto L_089CBFB4;
    }
L_089CBFB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CBFD8;
      }
      goto L_089CBFBC;
    }
L_089CBFBC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CBFE0;
      }
      goto L_089CBFC8;
    }
L_089CBFC8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(5));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CBFE0;
      }
      goto L_089CBFD8;
    }
L_089CBFD8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    goto L_089CBFE0;
L_089CBFE0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089CBFF8;
      }
      goto L_089CBFF0;
    }
L_089CBFF0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    goto L_089CBFF8;
L_089CBFF8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.pc = 0x089CC000u; return;
}

void recomp_unit_0113(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0113_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_113(Runtime &runtime) {
    runtime.register_generated_unit(113u, 0x089C8000u, 16384u, &recomp_unit_0113, &recomp_unit_0113_entry);
    runtime.register_function(0x089C8004u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C801Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8030u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8044u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8054u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8058u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8080u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C80B0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C80B8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C80C8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C80F4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8110u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8124u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8138u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C816Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8194u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C81BCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C81CCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C81F0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8218u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8224u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8230u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8248u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8288u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C82A0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C82ACu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C82BCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C82D8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C82E4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C82ECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C82F8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C82FCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8334u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C834Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8360u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8368u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8374u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8378u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8384u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8390u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C839Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C83A8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C83B4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C83C4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C83ECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8410u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8434u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8458u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C847Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C84A0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C84B0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C84C0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C84CCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C84D8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C84E4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8564u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8570u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8580u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C85A8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C85D0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C85DCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8600u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8628u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8648u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8654u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8660u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C867Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8688u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C86A4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C86B0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C86C0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C86C4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C86D0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C86D8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C86E0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C86ECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C86F8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8700u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8704u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8718u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C87DCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C87ECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8820u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8840u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C884Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8868u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8874u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C889Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C88B0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C88D0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C88D8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8924u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C893Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8970u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C898Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8990u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8998u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C89A4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C89ACu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C89B8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C89C0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C89D4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C89E0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C89E8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C89F8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8A00u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8A10u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8A1Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8A38u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8A40u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8A5Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8A60u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8B04u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8B40u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8B5Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8BA0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8BACu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8BC0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8BD4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8BF0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8C38u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8C78u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8C84u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8CACu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8CD0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8CDCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8CFCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8D08u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8D34u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8D4Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8D88u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8E94u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8EA0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8EB4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8ED8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8EE8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8EF4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8F08u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8F3Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8F60u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8F88u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8F98u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8FA4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8FC0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8FCCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8FD8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C8FF4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9000u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9014u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C906Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9078u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9090u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9098u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C909Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C90BCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C90C8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C90E0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C90E8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C90ECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C913Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9148u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9150u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9168u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9174u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9188u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9190u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C91B4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C91E0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9224u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9234u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9244u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9258u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C926Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9274u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9288u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9294u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C92C0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C92C4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C92E4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9300u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9328u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9348u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9368u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9370u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C93ACu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C93DCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C93ECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C93FCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C942Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9430u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9554u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C956Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9574u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C958Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9598u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C95A8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C95C8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C95D4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C95E4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C95FCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9608u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9618u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9630u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C963Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C964Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9664u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9670u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9680u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9698u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9738u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9750u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9764u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C979Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C97A8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C97B0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C97B8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C97C4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C97D8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C97E8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C983Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9840u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9850u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9858u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9868u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9874u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9880u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C988Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9898u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C98A0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C98ACu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C98B8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C98C4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C98CCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C98D0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C98F8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9938u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9944u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9960u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9970u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9978u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9988u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9994u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C99A0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C99ACu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C99B4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C99E0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9A14u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9A20u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9A3Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9A4Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9A54u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9A64u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9A88u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9A94u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9AB8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9AE4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9B20u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9B44u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9B68u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9B8Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9BB0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9BD4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9C24u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9C30u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9D08u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9D38u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9DC4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9DD0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9DDCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9DF8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9E08u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9E10u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9E1Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9E28u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9E3Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9E54u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9E7Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9EB0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9EF4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9F60u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9F6Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9F78u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9F84u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9FA8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9FB0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9FC0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089C9FF4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA004u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA01Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA044u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA060u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA068u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA06Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA08Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA094u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA0A0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA0B0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA0BCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA0C0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA0C8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA0ECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA0F8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA100u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA118u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA150u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA15Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA180u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA19Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA1A0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA1ACu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA1B0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA1B8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA1E4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA1F4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA204u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA20Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA220u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA228u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA234u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA23Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA248u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA264u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA2A4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA2E8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA2F0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA318u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA348u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA36Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA378u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA384u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA390u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA3B4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA3BCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA3C0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA3C4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA3D0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA3D4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA3E0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA3E8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA3F4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA3FCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA400u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA404u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA40Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA4A4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA4BCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA4CCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA4ECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA558u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA56Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA578u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA5A0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA5A4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA5A8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA5B4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA5C8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA5D4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA5D8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA5FCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA604u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA608u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA614u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA624u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA628u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA63Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA648u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA64Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA66Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA674u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA678u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA684u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA698u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA6A4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA6A8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA6D0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA6D8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA6DCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA6E8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA6FCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA708u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA70Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA730u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA738u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA744u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA758u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA764u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA7BCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA7D4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA7E4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA7F8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA818u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA824u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA830u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA844u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA850u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA86Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA884u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA8A0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA8A4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA8B0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA8BCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA8C0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA8C8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA8DCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA8F0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA8F8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA904u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA918u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA930u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA938u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA94Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA95Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA964u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA978u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA988u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA990u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA9A4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA9B4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA9C4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA9D0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA9E4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CA9FCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAA14u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAA2Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAA44u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAA50u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAA6Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAA74u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAA90u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAA98u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAAA8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAAC4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAACCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAAE8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAAF0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAB00u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAB08u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAB10u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAB2Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAB34u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAB50u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAB58u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAB68u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAB84u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAB8Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CABA8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CABB0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CABC0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CABC8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CABD0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CABECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CABF4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAC10u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAC18u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAC28u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAC44u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAC4Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAC68u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAC70u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAC80u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAC88u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAC90u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAC98u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CACB8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CACC0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CACDCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CACE4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CACF4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAD10u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAD18u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAD34u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAD3Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAD4Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAD54u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAD5Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAD78u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAD80u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAD9Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CADA4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CADB0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CADC0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CADD4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CADECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CADF4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAE10u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAE44u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAE98u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAEA4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAEB8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAED4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAF00u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAF04u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAF10u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAF1Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAF30u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAF4Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAF78u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAF7Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAF88u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAF94u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAFA4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAFB0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAFB4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAFC8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CAFE4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB00Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB010u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB01Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB028u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB03Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB058u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB080u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB084u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB090u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB09Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB0B0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB0D4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB0E4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB114u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB120u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB140u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB14Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB16Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB178u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB198u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB1A4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB1B0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB1D0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB1DCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB1FCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB208u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB214u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB234u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB240u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB260u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB26Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB28Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB298u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB2B8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB2C4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB2C8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB2D4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB2E0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB2ECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB314u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB320u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB348u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB354u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB374u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB378u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB388u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB3A8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB3ACu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB3B8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB3C4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB3E4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB418u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB440u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB448u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB464u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB48Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB494u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB4ACu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB4CCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB4D0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB4DCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB4E0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB4ECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB520u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB548u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB568u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB580u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB5BCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB5CCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB5D0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB5E4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB608u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB630u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB63Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB640u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB64Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB658u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB65Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB674u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB688u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB69Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB6A4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB6BCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB6DCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB6E4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB6F4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB708u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB70Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB718u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB720u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB734u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB74Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB754u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB75Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB764u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB76Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB790u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB840u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB854u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB86Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB878u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB894u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB8B0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB8B8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB8D8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB8F4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB908u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB934u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB96Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB980u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB98Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB998u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB9A4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB9B0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB9BCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB9C8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB9D4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB9E0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB9ECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CB9F8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBA04u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBA10u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBA1Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBA28u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBA34u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBA40u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBA4Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBA58u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBA64u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBA70u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBA7Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBA88u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBA94u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBAA0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBAACu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBAB8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBAC4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBAD0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBADCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBAE8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBAF4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBB00u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBB0Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBB18u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBB24u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBB30u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBB3Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBB48u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBB54u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBB60u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBB6Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBB74u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBB88u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBBACu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBBE0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBBECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBC04u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBC2Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBCACu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBCC4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBCDCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBCF0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBD14u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBD24u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBD40u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBD58u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBD70u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBD88u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBDA0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBDB0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBDD0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBDDCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBDECu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBE04u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBE14u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBE18u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBE20u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBE24u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBE40u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBE70u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBE84u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBEA0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBEB4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBEDCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBEE4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBF08u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBF20u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBF44u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBF50u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBF5Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBF68u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBF78u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBF8Cu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBFA0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBFACu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBFB4u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBFBCu, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBFC8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBFD8u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBFE0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBFF0u, &recomp_unit_0113, "recomp_unit_0113");
    runtime.register_function(0x089CBFF8u, &recomp_unit_0113, "recomp_unit_0113");
}
} // namespace psprecomp
