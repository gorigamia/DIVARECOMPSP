#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0016[4095] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 7, 0, 0, 0, 0,
    0, 8, 0, 0, 0, 0, 0, 0, 9, 0, 10, 0, 0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 13, 0, 0, 0, 14, 0,
    0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 18, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26,
    0, 27, 0, 28, 0, 29, 0, 0, 30, 0, 0, 31, 0, 0, 32, 0, 0, 33, 0, 34, 0, 35, 0, 36, 0, 37, 0, 0, 38, 0, 0, 39,
    0, 40, 0, 0, 41, 0, 0, 42, 0, 43, 0, 44, 0, 0, 0, 45, 0, 0, 46, 0, 47, 0, 0, 48, 0, 49, 0, 0, 50, 0, 0, 51,
    0, 0, 52, 0, 53, 54, 0, 0, 55, 0, 0, 56, 0, 0, 57, 0, 0, 58, 59, 0, 0, 0, 0, 0, 0, 0, 60, 0, 61, 0, 62, 0,
    0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 67, 0, 0, 0, 68, 0, 69, 0, 0, 0, 0, 70,
    0, 0, 0, 71, 0, 72, 0, 0, 73, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 76, 0, 77, 0, 78, 0, 0, 79,
    0, 0, 80, 0, 0, 81, 0, 0, 82, 0, 83, 0, 84, 0, 85, 0, 86, 0, 0, 87, 0, 0, 88, 0, 89, 0, 0, 90, 0, 0, 91, 0,
    92, 0, 93, 0, 0, 0, 94, 0, 0, 95, 0, 96, 0, 0, 97, 0, 98, 0, 0, 99, 0, 0, 100, 0, 0, 101, 0, 102, 103, 0, 0, 104,
    0, 0, 105, 0, 0, 106, 0, 0, 107, 108, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0,
    0, 0, 112, 0, 113, 0, 0, 0, 0, 0, 0, 0, 114, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0,
    117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 119, 0, 0, 120, 0, 0, 121, 0, 0, 122, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 124,
    0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 128, 0, 129, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 132, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 137, 0, 0, 0, 0, 0, 0,
    138, 0, 0, 0, 0, 0, 0, 139, 0, 0, 140, 0, 0, 141, 0, 142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 144, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 147, 0, 0, 148, 0, 0, 149, 0, 150, 0, 0, 151,
    0, 0, 152, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 159, 0, 0, 0, 160, 0, 161, 0, 0, 162, 163, 0, 0, 0, 0, 164, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 166, 0, 0, 167, 0, 0, 168, 0, 169, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 173,
    0, 0, 0, 0, 0, 174, 175, 0, 0, 0, 176, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 179, 0, 0, 0, 180,
    181, 0, 0, 182, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 185, 0, 0, 186, 0, 187, 0, 0, 188, 0, 0,
    189, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 195, 196, 0, 0,
    0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 0, 198, 0, 199, 0, 200, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 203, 204, 0,
    0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 208, 0, 209, 0, 0, 210, 0, 211, 212, 0, 0, 213, 0, 0, 0, 214,
    0, 215, 216, 0, 0, 217, 0, 218, 0, 0, 0, 0, 0, 0, 0, 219, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 222, 0, 223, 0,
    224, 0, 225, 0, 0, 226, 0, 0, 227, 0, 228, 0, 229, 0, 230, 0, 0, 0, 0, 0, 0, 231, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0,
    234, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 236, 0, 237, 0, 238, 0, 239, 0, 240, 0, 241, 0, 0, 0, 242, 0, 243, 0,
    0, 244, 0, 245, 0, 246, 0, 247, 0, 0, 248, 0, 0, 0, 249, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 253, 0, 254, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    263, 0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266, 267, 0, 0,
    268, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0,
    0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    276, 0, 0, 0, 0, 277, 0, 0, 0, 278, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 281, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 285, 0, 0, 0, 0, 286, 0, 0,
    0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 290, 0, 291, 0, 0, 292, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 297, 0, 0,
    298, 0, 0, 0, 0, 299, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0, 301, 0, 302, 0, 0, 303, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0,
    305, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0,
    0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 313, 0, 314, 0, 315, 316, 0, 0, 317, 0, 0, 0, 318, 0, 0,
    319, 0, 320, 0, 321, 0, 322, 0, 323, 0, 324, 0, 0, 0, 325, 0, 326, 0, 0, 327, 0, 328, 0, 329, 0, 330, 0, 0, 0, 0, 0, 0,
    0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 333, 0, 0, 0, 0, 0, 334, 335, 0, 336, 0, 0, 337, 0, 338, 339, 0, 0, 0,
    0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 341, 0, 0, 342, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 344, 0, 345, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0,
    354, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 357, 358,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 360, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 366, 0, 0, 0, 0, 0,
    0, 0, 0, 367, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 370, 0, 371, 0, 0, 0, 0, 0, 372, 0, 373,
    0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 375, 0, 376, 0, 0, 0, 0, 0, 377, 378, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 383, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 386, 0, 0, 387, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 389, 0, 0, 390,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391,
    392, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 394, 395, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397,
    0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 402, 0, 0, 0, 0, 403, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 408, 0, 409, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 412, 0, 413, 0, 0, 0, 0, 0, 0,
    0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 422,
    0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 424, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 427, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0,
    0, 433, 0, 0, 434, 0, 0, 435, 0, 0, 436, 0, 0, 0, 437, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0,
    0, 0, 0, 0, 440, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0,
    0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 449, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 452,
    0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 455, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 458, 0, 459,
    0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0,
    463, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 465, 0, 466, 0, 467, 0, 468, 0, 469, 0, 470, 0, 471, 0, 472, 0, 473, 0, 474, 0,
    475, 0, 476, 477, 0, 0, 478, 0, 0, 0, 479, 0, 480, 0, 0, 481, 0, 0, 482, 0, 483, 0, 484, 0, 485, 0, 0, 0, 0, 0, 486, 0,
    0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0,
    489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0,
    0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 495, 0, 496, 0, 0, 0, 0, 497, 0, 0, 498, 0,
    499, 0, 500, 0, 0, 0, 501, 0, 502, 0, 0, 503, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 507, 0, 0, 0, 0, 508, 0, 0, 0, 0, 509, 0, 0, 0,
    0, 510, 0, 511, 0, 0, 0, 0, 0, 0, 512, 0, 513, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0,
    0, 0, 0, 0, 515, 0, 516, 0, 517, 0, 518, 0, 519, 0, 520, 0, 521, 0, 0, 0, 0, 0, 0, 522, 0, 523, 0, 0, 0, 524, 0, 0,
    525, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 527, 0, 0, 528, 0, 0, 0, 529, 0, 0, 530, 0, 0, 0, 531, 0, 532, 0, 533, 0, 0,
    534, 0, 0, 0, 535, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 538, 0, 0, 0, 0, 539, 0, 540, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 541, 0, 0, 542, 0, 543, 0, 544, 0, 0, 0, 0, 0, 0, 0, 545, 0, 0, 546, 0, 547, 0, 548, 0,
    549, 0, 550, 0, 0, 0, 551, 0, 0, 0, 0, 0, 0, 0, 0, 0, 552, 0, 553, 0, 554, 0, 555, 0, 0, 0, 0, 0, 0, 0, 556, 557,
    0, 0, 0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 559, 0, 0,
    0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    563, 0, 0, 0, 564, 0, 565, 0, 0, 566, 0, 0, 0, 567, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 568,
    0, 569, 0, 0, 570, 0, 0, 571, 0, 0, 572, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 573, 0, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 576, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 577, 0, 578, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 580, 0, 581, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 582, 583, 0, 584, 0, 0, 0, 0, 0, 0, 0, 585, 0, 0, 586, 0, 587, 0, 0, 0, 588, 0, 0, 589, 0, 590, 591, 592, 0, 0,
    593, 0, 0, 0, 594, 0, 0, 0, 595, 0, 0, 596, 0, 0, 0, 597, 0, 0, 598, 0, 0, 599, 0, 0, 600, 0, 601, 602, 0, 603, 0, 0,
    604, 0, 605, 0, 0, 606, 0, 0, 0, 0, 0, 0, 0, 607, 0, 608, 0, 609, 0, 610, 0, 611, 0, 0, 612, 0, 0, 0, 0, 0, 0, 613,
    0, 614, 0, 615, 0, 616, 0, 617, 0, 0, 618, 0, 619, 0, 620, 0, 0, 621, 0, 622, 0, 0, 0, 623, 0, 624, 0, 625, 0, 626, 0, 0,
    0, 627, 0, 628, 0, 0, 629, 0, 630, 0, 631, 632, 0, 0, 0, 0, 633, 0, 634, 0, 0, 0, 0, 0, 0, 635, 0, 0, 0, 636, 0, 0,
    0, 637, 0, 0, 0, 0, 638, 0, 0, 639, 640, 0, 0, 0, 641, 0, 642, 0, 0, 0, 643, 0, 0, 0, 644, 0, 0, 0, 0, 645, 0, 646,
    0, 0, 0, 0, 0, 0, 0, 647, 0, 0, 0, 648, 0, 649, 0, 0, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0, 0, 0, 0, 651, 0,
    0, 0, 0, 0, 0, 652, 0, 653, 0, 654, 0, 0, 0, 0, 0, 0, 0, 655, 0, 656, 0, 657, 0, 658, 0, 659, 0, 0, 660, 0, 0, 0,
    661, 0, 0, 0, 662, 0, 0, 0, 0, 0, 0, 0, 663, 0, 664, 0, 665, 0, 666, 0, 667, 0, 0, 668, 0, 0, 0, 669, 0, 670, 0, 671,
    0, 672, 0, 0, 0, 0, 0, 0, 673, 0, 0, 0, 0, 674, 0, 0, 0, 0, 0, 0, 675, 0, 0, 0, 0, 676, 0, 0, 0, 0, 0, 677,
    0, 0, 678, 0, 679, 680, 0, 0, 0, 681, 682, 0, 0, 683, 0, 684, 0, 0, 685, 686, 0, 687, 0, 0, 0, 0, 688, 0, 689, 690, 0, 691,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 692, 0, 0, 693, 0, 0, 0, 0, 694, 695, 0, 0, 696, 0, 0, 0, 0, 0, 0, 0, 697,
    0, 0, 0, 0, 0, 0, 698, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 699, 0, 0, 0, 0, 0, 0, 700, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 701, 0, 0, 702, 0, 0, 703, 0, 0, 704, 0, 0, 705, 0, 0, 706, 0, 0, 0, 0, 0, 0, 707, 0, 0, 0,
    708, 0, 0, 0, 709, 0, 0, 0, 710, 0, 0, 0, 711, 0, 0, 0, 712, 0, 713, 0, 0, 0, 714, 0, 0, 0, 0, 715, 0, 0, 716,
};
void recomp_unit_0016_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08844000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0016[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08844000;
    case 2u: goto L_08844014;
    case 3u: goto L_0884402C;
    case 4u: goto L_08844034;
    case 5u: goto L_08844048;
    case 6u: goto L_08844064;
    case 7u: goto L_0884406C;
    case 8u: goto L_08844084;
    case 9u: goto L_088440A0;
    case 10u: goto L_088440A8;
    case 11u: goto L_088440C8;
    case 12u: goto L_088440E0;
    case 13u: goto L_088440E8;
    case 14u: goto L_088440F8;
    case 15u: goto L_08844104;
    case 16u: goto L_0884411C;
    case 17u: goto L_0884412C;
    case 18u: goto L_08844134;
    case 19u: goto L_0884413C;
    case 20u: goto L_0884414C;
    case 21u: goto L_08844168;
    case 22u: goto L_08844174;
    case 23u: goto L_088441A8;
    case 24u: goto L_088441B0;
    case 25u: goto L_088441CC;
    case 26u: goto L_088441FC;
    case 27u: goto L_08844204;
    case 28u: goto L_0884420C;
    case 29u: goto L_08844214;
    case 30u: goto L_08844220;
    case 31u: goto L_0884422C;
    case 32u: goto L_08844238;
    case 33u: goto L_08844244;
    case 34u: goto L_0884424C;
    case 35u: goto L_08844254;
    case 36u: goto L_0884425C;
    case 37u: goto L_08844264;
    case 38u: goto L_08844270;
    case 39u: goto L_0884427C;
    case 40u: goto L_08844284;
    case 41u: goto L_08844290;
    case 42u: goto L_0884429C;
    case 43u: goto L_088442A4;
    case 44u: goto L_088442AC;
    case 45u: goto L_088442BC;
    case 46u: goto L_088442C8;
    case 47u: goto L_088442D0;
    case 48u: goto L_088442DC;
    case 49u: goto L_088442E4;
    case 50u: goto L_088442F0;
    case 51u: goto L_088442FC;
    case 52u: goto L_08844308;
    case 53u: goto L_08844310;
    case 54u: goto L_08844314;
    case 55u: goto L_08844320;
    case 56u: goto L_0884432C;
    case 57u: goto L_08844338;
    case 58u: goto L_08844344;
    case 59u: goto L_08844348;
    case 60u: goto L_08844368;
    case 61u: goto L_08844370;
    case 62u: goto L_08844378;
    case 63u: goto L_08844384;
    case 64u: goto L_08844398;
    case 65u: goto L_088443AC;
    case 66u: goto L_088443C4;
    case 67u: goto L_088443D0;
    case 68u: goto L_088443E0;
    case 69u: goto L_088443E8;
    case 70u: goto L_088443FC;
    case 71u: goto L_0884440C;
    case 72u: goto L_08844414;
    case 73u: goto L_08844420;
    case 74u: goto L_08844428;
    case 75u: goto L_08844458;
    case 76u: goto L_08844460;
    case 77u: goto L_08844468;
    case 78u: goto L_08844470;
    case 79u: goto L_0884447C;
    case 80u: goto L_08844488;
    case 81u: goto L_08844494;
    case 82u: goto L_088444A0;
    case 83u: goto L_088444A8;
    case 84u: goto L_088444B0;
    case 85u: goto L_088444B8;
    case 86u: goto L_088444C0;
    case 87u: goto L_088444CC;
    case 88u: goto L_088444D8;
    case 89u: goto L_088444E0;
    case 90u: goto L_088444EC;
    case 91u: goto L_088444F8;
    case 92u: goto L_08844500;
    case 93u: goto L_08844508;
    case 94u: goto L_08844518;
    case 95u: goto L_08844524;
    case 96u: goto L_0884452C;
    case 97u: goto L_08844538;
    case 98u: goto L_08844540;
    case 99u: goto L_0884454C;
    case 100u: goto L_08844558;
    case 101u: goto L_08844564;
    case 102u: goto L_0884456C;
    case 103u: goto L_08844570;
    case 104u: goto L_0884457C;
    case 105u: goto L_08844588;
    case 106u: goto L_08844594;
    case 107u: goto L_088445A0;
    case 108u: goto L_088445A4;
    case 109u: goto L_088445C4;
    case 110u: goto L_088445E0;
    case 111u: goto L_088445F4;
    case 112u: goto L_08844608;
    case 113u: goto L_08844610;
    case 114u: goto L_08844630;
    case 115u: goto L_08844638;
    case 116u: goto L_08844678;
    case 117u: goto L_08844680;
    case 118u: goto L_0884469C;
    case 119u: goto L_088446A8;
    case 120u: goto L_088446B4;
    case 121u: goto L_088446C0;
    case 122u: goto L_088446CC;
    case 123u: goto L_088446D8;
    case 124u: goto L_088446FC;
    case 125u: goto L_08844704;
    case 126u: goto L_08844748;
    case 127u: goto L_08844760;
    case 128u: goto L_08844768;
    case 129u: goto L_08844770;
    case 130u: goto L_088447B4;
    case 131u: goto L_088447CC;
    case 132u: goto L_088447D0;
    case 133u: goto L_088447F4;
    case 134u: goto L_08844834;
    case 135u: goto L_0884483C;
    case 136u: goto L_08844858;
    case 137u: goto L_08844864;
    case 138u: goto L_08844880;
    case 139u: goto L_0884489C;
    case 140u: goto L_088448A8;
    case 141u: goto L_088448B4;
    case 142u: goto L_088448BC;
    case 143u: goto L_088448D8;
    case 144u: goto L_088448F0;
    case 145u: goto L_08844918;
    case 146u: goto L_08844948;
    case 147u: goto L_08844950;
    case 148u: goto L_0884495C;
    case 149u: goto L_08844968;
    case 150u: goto L_08844970;
    case 151u: goto L_0884497C;
    case 152u: goto L_08844988;
    case 153u: goto L_08844994;
    case 154u: goto L_088449AC;
    case 155u: goto L_088449C8;
    case 156u: goto L_088449EC;
    case 157u: goto L_08844A20;
    case 158u: goto L_08844A34;
    case 159u: goto L_08844A3C;
    case 160u: goto L_08844A4C;
    case 161u: goto L_08844A54;
    case 162u: goto L_08844A60;
    case 163u: goto L_08844A64;
    case 164u: goto L_08844A78;
    case 165u: goto L_08844AC0;
    case 166u: goto L_08844AC8;
    case 167u: goto L_08844AD4;
    case 168u: goto L_08844AE0;
    case 169u: goto L_08844AE8;
    case 170u: goto L_08844B2C;
    case 171u: goto L_08844B44;
    case 172u: goto L_08844B6C;
    case 173u: goto L_08844B7C;
    case 174u: goto L_08844B94;
    case 175u: goto L_08844B98;
    case 176u: goto L_08844BA8;
    case 177u: goto L_08844BB0;
    case 178u: goto L_08844BE0;
    case 179u: goto L_08844BEC;
    case 180u: goto L_08844BFC;
    case 181u: goto L_08844C00;
    case 182u: goto L_08844C0C;
    case 183u: goto L_08844C14;
    case 184u: goto L_08844C50;
    case 185u: goto L_08844CD4;
    case 186u: goto L_08844CE0;
    case 187u: goto L_08844CE8;
    case 188u: goto L_08844CF4;
    case 189u: goto L_08844D00;
    case 190u: goto L_08844D08;
    case 191u: goto L_08844D1C;
    case 192u: goto L_08844D38;
    case 193u: goto L_08844D40;
    case 194u: goto L_08844D54;
    case 195u: goto L_08844D70;
    case 196u: goto L_08844D74;
    case 197u: goto L_08844D98;
    case 198u: goto L_08844DB8;
    case 199u: goto L_08844DC0;
    case 200u: goto L_08844DC8;
    case 201u: goto L_08844DD4;
    case 202u: goto L_08844DE8;
    case 203u: goto L_08844DF4;
    case 204u: goto L_08844DF8;
    case 205u: goto L_08844E08;
    case 206u: goto L_08844E20;
    case 207u: goto L_08844E30;
    case 208u: goto L_08844E40;
    case 209u: goto L_08844E48;
    case 210u: goto L_08844E54;
    case 211u: goto L_08844E5C;
    case 212u: goto L_08844E60;
    case 213u: goto L_08844E6C;
    case 214u: goto L_08844E7C;
    case 215u: goto L_08844E84;
    case 216u: goto L_08844E88;
    case 217u: goto L_08844E94;
    case 218u: goto L_08844E9C;
    case 219u: goto L_08844EBC;
    case 220u: goto L_08844EC0;
    case 221u: goto L_08844EE8;
    case 222u: goto L_08844EF0;
    case 223u: goto L_08844EF8;
    case 224u: goto L_08844F00;
    case 225u: goto L_08844F08;
    case 226u: goto L_08844F14;
    case 227u: goto L_08844F20;
    case 228u: goto L_08844F28;
    case 229u: goto L_08844F30;
    case 230u: goto L_08844F38;
    case 231u: goto L_08844F54;
    case 232u: goto L_08844F60;
    case 233u: goto L_08844F78;
    case 234u: goto L_08844F80;
    case 235u: goto L_08844FAC;
    case 236u: goto L_08844FB8;
    case 237u: goto L_08844FC0;
    case 238u: goto L_08844FC8;
    case 239u: goto L_08844FD0;
    case 240u: goto L_08844FD8;
    case 241u: goto L_08844FE0;
    case 242u: goto L_08844FF0;
    case 243u: goto L_08844FF8;
    case 244u: goto L_08845004;
    case 245u: goto L_0884500C;
    case 246u: goto L_08845014;
    case 247u: goto L_0884501C;
    case 248u: goto L_08845028;
    case 249u: goto L_08845038;
    case 250u: goto L_08845044;
    case 251u: goto L_08845054;
    case 252u: goto L_08845068;
    case 253u: goto L_08845070;
    case 254u: goto L_08845078;
    case 255u: goto L_088450A8;
    case 256u: goto L_088450BC;
    case 257u: goto L_088450D0;
    case 258u: goto L_088450E4;
    case 259u: goto L_088450F4;
    case 260u: goto L_08845128;
    case 261u: goto L_0884513C;
    case 262u: goto L_0884514C;
    case 263u: goto L_08845180;
    case 264u: goto L_08845194;
    case 265u: goto L_088451A4;
    case 266u: goto L_088451F0;
    case 267u: goto L_088451F4;
    case 268u: goto L_08845200;
    case 269u: goto L_08845218;
    case 270u: goto L_0884522C;
    case 271u: goto L_0884523C;
    case 272u: goto L_08845274;
    case 273u: goto L_08845288;
    case 274u: goto L_088452C0;
    case 275u: goto L_088452C8;
    case 276u: goto L_08845300;
    case 277u: goto L_08845314;
    case 278u: goto L_08845324;
    case 279u: goto L_0884532C;
    case 280u: goto L_08845360;
    case 281u: goto L_08845368;
    case 282u: goto L_088453A0;
    case 283u: goto L_088453A8;
    case 284u: goto L_088453CC;
    case 285u: goto L_088453E0;
    case 286u: goto L_088453F4;
    case 287u: goto L_08845404;
    case 288u: goto L_0884543C;
    case 289u: goto L_08845450;
    case 290u: goto L_08845488;
    case 291u: goto L_08845490;
    case 292u: goto L_0884549C;
    case 293u: goto L_088454A8;
    case 294u: goto L_088454C8;
    case 295u: goto L_088454DC;
    case 296u: goto L_088454EC;
    case 297u: goto L_088454F4;
    case 298u: goto L_08845500;
    case 299u: goto L_08845514;
    case 300u: goto L_08845520;
    case 301u: goto L_08845540;
    case 302u: goto L_08845548;
    case 303u: goto L_08845554;
    case 304u: goto L_08845560;
    case 305u: goto L_08845580;
    case 306u: goto L_08845588;
    case 307u: goto L_088455AC;
    case 308u: goto L_088455D4;
    case 309u: goto L_088455E8;
    case 310u: goto L_08845608;
    case 311u: goto L_08845628;
    case 312u: goto L_0884563C;
    case 313u: goto L_08845644;
    case 314u: goto L_0884564C;
    case 315u: goto L_08845654;
    case 316u: goto L_08845658;
    case 317u: goto L_08845664;
    case 318u: goto L_08845674;
    case 319u: goto L_08845680;
    case 320u: goto L_08845688;
    case 321u: goto L_08845690;
    case 322u: goto L_08845698;
    case 323u: goto L_088456A0;
    case 324u: goto L_088456A8;
    case 325u: goto L_088456B8;
    case 326u: goto L_088456C0;
    case 327u: goto L_088456CC;
    case 328u: goto L_088456D4;
    case 329u: goto L_088456DC;
    case 330u: goto L_088456E4;
    case 331u: goto L_08845708;
    case 332u: goto L_08845728;
    case 333u: goto L_08845734;
    case 334u: goto L_0884574C;
    case 335u: goto L_08845750;
    case 336u: goto L_08845758;
    case 337u: goto L_08845764;
    case 338u: goto L_0884576C;
    case 339u: goto L_08845770;
    case 340u: goto L_08845790;
    case 341u: goto L_088457AC;
    case 342u: goto L_088457B8;
    case 343u: goto L_088457D0;
    case 344u: goto L_08845808;
    case 345u: goto L_08845810;
    case 346u: goto L_08845818;
    case 347u: goto L_08845828;
    case 348u: goto L_0884584C;
    case 349u: goto L_08845858;
    case 350u: goto L_088458A4;
    case 351u: goto L_088458C4;
    case 352u: goto L_08845B50;
    case 353u: goto L_08845B64;
    case 354u: goto L_08845B80;
    case 355u: goto L_08845B98;
    case 356u: goto L_08845BE4;
    case 357u: goto L_08845BF8;
    case 358u: goto L_08845BFC;
    case 359u: goto L_08845C2C;
    case 360u: goto L_08845C8C;
    case 361u: goto L_08845C94;
    case 362u: goto L_08845CD4;
    case 363u: goto L_08845CF4;
    case 364u: goto L_08845DD8;
    case 365u: goto L_08845E64;
    case 366u: goto L_08845E68;
    case 367u: goto L_08845E8C;
    case 368u: goto L_08845EA4;
    case 369u: goto L_08845EB8;
    case 370u: goto L_08845ED4;
    case 371u: goto L_08845EDC;
    case 372u: goto L_08845EF4;
    case 373u: goto L_08845EFC;
    case 374u: goto L_08845F0C;
    case 375u: goto L_08845F28;
    case 376u: goto L_08845F30;
    case 377u: goto L_08845F48;
    case 378u: goto L_08845F4C;
    case 379u: goto L_08845F64;
    case 380u: goto L_08845F94;
    case 381u: goto L_08846004;
    case 382u: goto L_0884604C;
    case 383u: goto L_08846050;
    case 384u: goto L_0884605C;
    case 385u: goto L_088460DC;
    case 386u: goto L_088460E0;
    case 387u: goto L_088460EC;
    case 388u: goto L_0884616C;
    case 389u: goto L_08846170;
    case 390u: goto L_0884617C;
    case 391u: goto L_088461FC;
    case 392u: goto L_08846200;
    case 393u: goto L_0884620C;
    case 394u: goto L_0884628C;
    case 395u: goto L_08846290;
    case 396u: goto L_088462B0;
    case 397u: goto L_088462FC;
    case 398u: goto L_08846320;
    case 399u: goto L_0884632C;
    case 400u: goto L_08846358;
    case 401u: goto L_088463D0;
    case 402u: goto L_088463E4;
    case 403u: goto L_088463F8;
    case 404u: goto L_08846428;
    case 405u: goto L_0884644C;
    case 406u: goto L_088464A0;
    case 407u: goto L_08846510;
    case 408u: goto L_08846528;
    case 409u: goto L_08846530;
    case 410u: goto L_08846538;
    case 411u: goto L_088465D8;
    case 412u: goto L_088465DC;
    case 413u: goto L_088465E4;
    case 414u: goto L_08846608;
    case 415u: goto L_08846628;
    case 416u: goto L_08846648;
    case 417u: goto L_088466A8;
    case 418u: goto L_088466BC;
    case 419u: goto L_08846828;
    case 420u: goto L_08846830;
    case 421u: goto L_08846874;
    case 422u: goto L_0884687C;
    case 423u: goto L_08846890;
    case 424u: goto L_088468AC;
    case 425u: goto L_088468B0;
    case 426u: goto L_0884694C;
    case 427u: goto L_08846988;
    case 428u: goto L_08846990;
    case 429u: goto L_08846A18;
    case 430u: goto L_08846A3C;
    case 431u: goto L_08846ABC;
    case 432u: goto L_08846AF8;
    case 433u: goto L_08846B04;
    case 434u: goto L_08846B10;
    case 435u: goto L_08846B1C;
    case 436u: goto L_08846B28;
    case 437u: goto L_08846B38;
    case 438u: goto L_08846B50;
    case 439u: goto L_08846B6C;
    case 440u: goto L_08846B90;
    case 441u: goto L_08846BA4;
    case 442u: goto L_08846C04;
    case 443u: goto L_08846C3C;
    case 444u: goto L_08846D14;
    case 445u: goto L_08846D4C;
    case 446u: goto L_08846D6C;
    case 447u: goto L_08846D8C;
    case 448u: goto L_08846DBC;
    case 449u: goto L_08846DC0;
    case 450u: goto L_08846DC8;
    case 451u: goto L_08846DF8;
    case 452u: goto L_08846DFC;
    case 453u: goto L_08846E04;
    case 454u: goto L_08846E34;
    case 455u: goto L_08846E38;
    case 456u: goto L_08846E40;
    case 457u: goto L_08846E70;
    case 458u: goto L_08846E74;
    case 459u: goto L_08846E7C;
    case 460u: goto L_08846E9C;
    case 461u: goto L_08846EC0;
    case 462u: goto L_08846EE0;
    case 463u: goto L_08846F00;
    case 464u: goto L_08846F10;
    case 465u: goto L_08846F30;
    case 466u: goto L_08846F38;
    case 467u: goto L_08846F40;
    case 468u: goto L_08846F48;
    case 469u: goto L_08846F50;
    case 470u: goto L_08846F58;
    case 471u: goto L_08846F60;
    case 472u: goto L_08846F68;
    case 473u: goto L_08846F70;
    case 474u: goto L_08846F78;
    case 475u: goto L_08846F80;
    case 476u: goto L_08846F88;
    case 477u: goto L_08846F8C;
    case 478u: goto L_08846F98;
    case 479u: goto L_08846FA8;
    case 480u: goto L_08846FB0;
    case 481u: goto L_08846FBC;
    case 482u: goto L_08846FC8;
    case 483u: goto L_08846FD0;
    case 484u: goto L_08846FD8;
    case 485u: goto L_08846FE0;
    case 486u: goto L_08846FF8;
    case 487u: goto L_08847018;
    case 488u: goto L_0884705C;
    case 489u: goto L_08847080;
    case 490u: goto L_088470A8;
    case 491u: goto L_088470C8;
    case 492u: goto L_088470F8;
    case 493u: goto L_08847118;
    case 494u: goto L_08847148;
    case 495u: goto L_08847150;
    case 496u: goto L_08847158;
    case 497u: goto L_0884716C;
    case 498u: goto L_08847178;
    case 499u: goto L_08847180;
    case 500u: goto L_08847188;
    case 501u: goto L_08847198;
    case 502u: goto L_088471A0;
    case 503u: goto L_088471AC;
    case 504u: goto L_088471BC;
    case 505u: goto L_08847218;
    case 506u: goto L_08847234;
    case 507u: goto L_08847248;
    case 508u: goto L_0884725C;
    case 509u: goto L_08847270;
    case 510u: goto L_08847284;
    case 511u: goto L_0884728C;
    case 512u: goto L_088472A8;
    case 513u: goto L_088472B0;
    case 514u: goto L_088472F0;
    case 515u: goto L_08847310;
    case 516u: goto L_08847318;
    case 517u: goto L_08847320;
    case 518u: goto L_08847328;
    case 519u: goto L_08847330;
    case 520u: goto L_08847338;
    case 521u: goto L_08847340;
    case 522u: goto L_0884735C;
    case 523u: goto L_08847364;
    case 524u: goto L_08847374;
    case 525u: goto L_08847380;
    case 526u: goto L_08847390;
    case 527u: goto L_088473AC;
    case 528u: goto L_088473B8;
    case 529u: goto L_088473C8;
    case 530u: goto L_088473D4;
    case 531u: goto L_088473E4;
    case 532u: goto L_088473EC;
    case 533u: goto L_088473F4;
    case 534u: goto L_08847400;
    case 535u: goto L_08847410;
    case 536u: goto L_0884741C;
    case 537u: goto L_0884743C;
    case 538u: goto L_08847450;
    case 539u: goto L_08847464;
    case 540u: goto L_0884746C;
    case 541u: goto L_088474A0;
    case 542u: goto L_088474AC;
    case 543u: goto L_088474B4;
    case 544u: goto L_088474BC;
    case 545u: goto L_088474DC;
    case 546u: goto L_088474E8;
    case 547u: goto L_088474F0;
    case 548u: goto L_088474F8;
    case 549u: goto L_08847500;
    case 550u: goto L_08847508;
    case 551u: goto L_08847518;
    case 552u: goto L_08847540;
    case 553u: goto L_08847548;
    case 554u: goto L_08847550;
    case 555u: goto L_08847558;
    case 556u: goto L_08847578;
    case 557u: goto L_0884757C;
    case 558u: goto L_08847598;
    case 559u: goto L_088475F4;
    case 560u: goto L_08847618;
    case 561u: goto L_08847630;
    case 562u: goto L_0884764C;
    case 563u: goto L_08847680;
    case 564u: goto L_08847690;
    case 565u: goto L_08847698;
    case 566u: goto L_088476A4;
    case 567u: goto L_088476B4;
    case 568u: goto L_088476FC;
    case 569u: goto L_08847704;
    case 570u: goto L_08847710;
    case 571u: goto L_0884771C;
    case 572u: goto L_08847728;
    case 573u: goto L_08847784;
    case 574u: goto L_08847798;
    case 575u: goto L_088477CC;
    case 576u: goto L_088477D4;
    case 577u: goto L_08847804;
    case 578u: goto L_0884780C;
    case 579u: goto L_0884781C;
    case 580u: goto L_08847850;
    case 581u: goto L_08847858;
    case 582u: goto L_08847888;
    case 583u: goto L_0884788C;
    case 584u: goto L_08847894;
    case 585u: goto L_088478B4;
    case 586u: goto L_088478C0;
    case 587u: goto L_088478C8;
    case 588u: goto L_088478D8;
    case 589u: goto L_088478E4;
    case 590u: goto L_088478EC;
    case 591u: goto L_088478F0;
    case 592u: goto L_088478F4;
    case 593u: goto L_08847900;
    case 594u: goto L_08847910;
    case 595u: goto L_08847920;
    case 596u: goto L_0884792C;
    case 597u: goto L_0884793C;
    case 598u: goto L_08847948;
    case 599u: goto L_08847954;
    case 600u: goto L_08847960;
    case 601u: goto L_08847968;
    case 602u: goto L_0884796C;
    case 603u: goto L_08847974;
    case 604u: goto L_08847980;
    case 605u: goto L_08847988;
    case 606u: goto L_08847994;
    case 607u: goto L_088479B4;
    case 608u: goto L_088479BC;
    case 609u: goto L_088479C4;
    case 610u: goto L_088479CC;
    case 611u: goto L_088479D4;
    case 612u: goto L_088479E0;
    case 613u: goto L_088479FC;
    case 614u: goto L_08847A04;
    case 615u: goto L_08847A0C;
    case 616u: goto L_08847A14;
    case 617u: goto L_08847A1C;
    case 618u: goto L_08847A28;
    case 619u: goto L_08847A30;
    case 620u: goto L_08847A38;
    case 621u: goto L_08847A44;
    case 622u: goto L_08847A4C;
    case 623u: goto L_08847A5C;
    case 624u: goto L_08847A64;
    case 625u: goto L_08847A6C;
    case 626u: goto L_08847A74;
    case 627u: goto L_08847A84;
    case 628u: goto L_08847A8C;
    case 629u: goto L_08847A98;
    case 630u: goto L_08847AA0;
    case 631u: goto L_08847AA8;
    case 632u: goto L_08847AAC;
    case 633u: goto L_08847AC0;
    case 634u: goto L_08847AC8;
    case 635u: goto L_08847AE4;
    case 636u: goto L_08847AF4;
    case 637u: goto L_08847B04;
    case 638u: goto L_08847B18;
    case 639u: goto L_08847B24;
    case 640u: goto L_08847B28;
    case 641u: goto L_08847B38;
    case 642u: goto L_08847B40;
    case 643u: goto L_08847B50;
    case 644u: goto L_08847B60;
    case 645u: goto L_08847B74;
    case 646u: goto L_08847B7C;
    case 647u: goto L_08847B9C;
    case 648u: goto L_08847BAC;
    case 649u: goto L_08847BB4;
    case 650u: goto L_08847BD4;
    case 651u: goto L_08847BF8;
    case 652u: goto L_08847C14;
    case 653u: goto L_08847C1C;
    case 654u: goto L_08847C24;
    case 655u: goto L_08847C44;
    case 656u: goto L_08847C4C;
    case 657u: goto L_08847C54;
    case 658u: goto L_08847C5C;
    case 659u: goto L_08847C64;
    case 660u: goto L_08847C70;
    case 661u: goto L_08847C80;
    case 662u: goto L_08847C90;
    case 663u: goto L_08847CB0;
    case 664u: goto L_08847CB8;
    case 665u: goto L_08847CC0;
    case 666u: goto L_08847CC8;
    case 667u: goto L_08847CD0;
    case 668u: goto L_08847CDC;
    case 669u: goto L_08847CEC;
    case 670u: goto L_08847CF4;
    case 671u: goto L_08847CFC;
    case 672u: goto L_08847D04;
    case 673u: goto L_08847D20;
    case 674u: goto L_08847D34;
    case 675u: goto L_08847D50;
    case 676u: goto L_08847D64;
    case 677u: goto L_08847D7C;
    case 678u: goto L_08847D88;
    case 679u: goto L_08847D90;
    case 680u: goto L_08847D94;
    case 681u: goto L_08847DA4;
    case 682u: goto L_08847DA8;
    case 683u: goto L_08847DB4;
    case 684u: goto L_08847DBC;
    case 685u: goto L_08847DC8;
    case 686u: goto L_08847DCC;
    case 687u: goto L_08847DD4;
    case 688u: goto L_08847DE8;
    case 689u: goto L_08847DF0;
    case 690u: goto L_08847DF4;
    case 691u: goto L_08847DFC;
    case 692u: goto L_08847E2C;
    case 693u: goto L_08847E38;
    case 694u: goto L_08847E4C;
    case 695u: goto L_08847E50;
    case 696u: goto L_08847E5C;
    case 697u: goto L_08847E7C;
    case 698u: goto L_08847E98;
    case 699u: goto L_08847ECC;
    case 700u: goto L_08847EE8;
    case 701u: goto L_08847F18;
    case 702u: goto L_08847F24;
    case 703u: goto L_08847F30;
    case 704u: goto L_08847F3C;
    case 705u: goto L_08847F48;
    case 706u: goto L_08847F54;
    case 707u: goto L_08847F70;
    case 708u: goto L_08847F80;
    case 709u: goto L_08847F90;
    case 710u: goto L_08847FA0;
    case 711u: goto L_08847FB0;
    case 712u: goto L_08847FC0;
    case 713u: goto L_08847FC8;
    case 714u: goto L_08847FD8;
    case 715u: goto L_08847FEC;
    case 716u: goto L_08847FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08844000:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.set_gpr(31, 0x08844014u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 595u, 0x0883E9F0u>(ctx, &aot_mem) && ctx.pc == 0x08844014u) goto L_08844014;
    return;
L_08844014:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(188)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0884402Cu);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884402Cu) goto L_0884402C;
    return;
L_0884402C:
    ctx.set_gpr(31, 0x08844034u);
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 595u, 0x088423F0u>(ctx, &aot_mem) && ctx.pc == 0x08844034u) goto L_08844034;
    return;
L_08844034:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(31, 0x08844048u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 595u, 0x0883E9F0u>(ctx, &aot_mem) && ctx.pc == 0x08844048u) goto L_08844048;
    return;
L_08844048:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(168)));
    ctx.set_gpr(5, 0u + 0u);
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08844064u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08844064u) goto L_08844064;
    return;
L_08844064:
    ctx.set_gpr(31, 0x0884406Cu);
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 595u, 0x088423F0u>(ctx, &aot_mem) && ctx.pc == 0x0884406Cu) goto L_0884406C;
    return;
L_0884406C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(31, 0x08844084u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 595u, 0x0883E9F0u>(ctx, &aot_mem) && ctx.pc == 0x08844084u) goto L_08844084;
    return;
L_08844084:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(168)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088440A0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088440A0u) goto L_088440A0;
    return;
L_088440A0:
    ctx.set_gpr(31, 0x088440A8u);
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 595u, 0x088423F0u>(ctx, &aot_mem) && ctx.pc == 0x088440A8u) goto L_088440A8;
    return;
L_088440A8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    ctx.set_fpr_bits(14, ctx.fpr_bits(12));
    ctx.set_gpr(31, 0x088440C8u);
    ctx.set_fpr_bits(15, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x088440C8u) goto L_088440C8;
    return;
L_088440C8:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088440E0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088440E0u) goto L_088440E0;
    return;
L_088440E0:
    ctx.set_gpr(31, 0x088440E8u);
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 595u, 0x088423F0u>(ctx, &aot_mem) && ctx.pc == 0x088440E8u) goto L_088440E8;
    return;
L_088440E8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(31, 0x088440F8u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_088441B0;
L_088440F8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08844104u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x08844104u) goto L_08844104;
    return;
L_08844104:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_fpr_bits(12, ctx.fpr_bits(0));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(196)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0884411Cu);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884411Cu) goto L_0884411C;
    return;
L_0884411C:
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x0884412Cu);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    goto L_08844428;
L_0884412C:
    ctx.set_gpr(31, 0x08844134u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 943u, 0x08843E3Cu>(ctx, &aot_mem) && ctx.pc == 0x08844134u) goto L_08844134;
    return;
L_08844134:
    ctx.set_gpr(31, 0x0884413Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_088441A8;
L_0884413C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x0884414Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 148u, 0x08840894u>(ctx, &aot_mem) && ctx.pc == 0x0884414Cu) goto L_0884414C;
    return;
L_0884414C:
    ctx.set_gpr(2, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[21]);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(208), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08844168u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    goto L_08844B6C;
L_08844168:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(31, 0x08844174u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 247u, 0x0883D3DCu>(ctx, &aot_mem) && ctx.pc == 0x08844174u) goto L_08844174;
    return;
L_08844174:
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088441A8:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088441B0:
    ctx.set_gpr(6, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 41554u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] | 40250u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, 16273u << 16u);
    ctx.set_gpr(5, ctx.gpr[2] | 57158u);
    (void)rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem); return;
L_088441CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x088441FCu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 160u, 0x0884094Cu>(ctx, &aot_mem) && ctx.pc == 0x088441FCu) goto L_088441FC;
    return;
L_088441FC:
    ctx.set_gpr(31, 0x08844204u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 159u, 0x08840940u>(ctx, &aot_mem) && ctx.pc == 0x08844204u) goto L_08844204;
    return;
L_08844204:
    ctx.set_gpr(31, 0x0884420Cu);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 610u, 0x088424D8u>(ctx, &aot_mem) && ctx.pc == 0x0884420Cu) goto L_0884420C;
    return;
L_0884420C:
    ctx.set_gpr(31, 0x08844214u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_088443FC;
L_08844214:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (ctx.gpr[16] != 0u) {
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
        goto L_0884424C;
    }
    goto L_08844220;
L_08844220:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0884422Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 268u, 0x0883D530u>(ctx, &aot_mem) && ctx.pc == 0x0884422Cu) goto L_0884422C;
    return;
L_0884422C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08844238u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 247u, 0x0883D3DCu>(ctx, &aot_mem) && ctx.pc == 0x08844238u) goto L_08844238;
    return;
L_08844238:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08844244u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 148u, 0x08840894u>(ctx, &aot_mem) && ctx.pc == 0x08844244u) goto L_08844244;
    return;
L_08844244:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08844348;
      }
      goto L_0884424C;
    }
L_0884424C:
    ctx.set_gpr(31, 0x08844254u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 238u, 0x0883D370u>(ctx, &aot_mem) && ctx.pc == 0x08844254u) goto L_08844254;
    return;
L_08844254:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_08844320;
      }
      goto L_0884425C;
    }
L_0884425C:
    ctx.set_gpr(31, 0x08844264u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 610u, 0x088424D8u>(ctx, &aot_mem) && ctx.pc == 0x08844264u) goto L_08844264;
    return;
L_08844264:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08844270u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_088443AC;
L_08844270:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884427Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    goto L_08844384;
L_0884427C:
    ctx.set_gpr(31, 0x08844284u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 943u, 0x08843E3Cu>(ctx, &aot_mem) && ctx.pc == 0x08844284u) goto L_08844284;
    return;
L_08844284:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08844290u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 29u, 0x088D01E0u>(ctx, &aot_mem) && ctx.pc == 0x08844290u) goto L_08844290;
    return;
L_08844290:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884429Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 238u, 0x0883D370u>(ctx, &aot_mem) && ctx.pc == 0x0884429Cu) goto L_0884429C;
    return;
L_0884429C:
    ctx.set_gpr(31, 0x088442A4u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 244u, 0x0883D3C4u>(ctx, &aot_mem) && ctx.pc == 0x088442A4u) goto L_088442A4;
    return;
L_088442A4:
    ctx.set_gpr(31, 0x088442ACu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08844368;
L_088442AC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(31, 0x088442BCu);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(15936)));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 620u, 0x08816D44u>(ctx, &aot_mem) && ctx.pc == 0x088442BCu) goto L_088442BC;
    return;
L_088442BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088442C8u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 464u, 0x088164FCu>(ctx, &aot_mem) && ctx.pc == 0x088442C8u) goto L_088442C8;
    return;
L_088442C8:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08844314;
    }
    goto L_088442D0;
L_088442D0:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088442DCu);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x088442DCu) goto L_088442DC;
    return;
L_088442DC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08844310;
      }
      goto L_088442E4;
    }
L_088442E4:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x088442F0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 931u, 0x08843D54u>(ctx, &aot_mem) && ctx.pc == 0x088442F0u) goto L_088442F0;
    return;
L_088442F0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x088442FCu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 247u, 0x0883D3DCu>(ctx, &aot_mem) && ctx.pc == 0x088442FCu) goto L_088442FC;
    return;
L_088442FC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08844308u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 148u, 0x08840894u>(ctx, &aot_mem) && ctx.pc == 0x08844308u) goto L_08844308;
    return;
L_08844308:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08844348;
      }
      goto L_08844310;
    }
L_08844310:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08844314;
L_08844314:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884425C;
      }
      goto L_08844320;
    }
L_08844320:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0884432Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 268u, 0x0883D530u>(ctx, &aot_mem) && ctx.pc == 0x0884432Cu) goto L_0884432C;
    return;
L_0884432C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08844338u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 247u, 0x0883D3DCu>(ctx, &aot_mem) && ctx.pc == 0x08844338u) goto L_08844338;
    return;
L_08844338:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08844344u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 148u, 0x08840894u>(ctx, &aot_mem) && ctx.pc == 0x08844344u) goto L_08844344;
    return;
L_08844344:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08844348;
L_08844348:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08844368:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(88));
    goto L_08844370;
L_08844370:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08844378;
L_08844378:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08844384:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08844398u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08844398u) goto L_08844398;
    return;
L_08844398:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088443AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x088443C4u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 365u, 0x08841414u>(ctx, &aot_mem) && ctx.pc == 0x088443C4u) goto L_088443C4;
    return;
L_088443C4:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088443D0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_088443E0;
L_088443D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088443E0:
    // nop
    goto L_088443E8;
L_088443E8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088443FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0884440Cu);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 365u, 0x08841414u>(ctx, &aot_mem) && ctx.pc == 0x0884440Cu) goto L_0884440C;
    return;
L_0884440C:
    ctx.set_gpr(31, 0x08844414u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08844420;
L_08844414:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08844420:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08844428:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08844458u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 160u, 0x0884094Cu>(ctx, &aot_mem) && ctx.pc == 0x08844458u) goto L_08844458;
    return;
L_08844458:
    ctx.set_gpr(31, 0x08844460u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 159u, 0x08840940u>(ctx, &aot_mem) && ctx.pc == 0x08844460u) goto L_08844460;
    return;
L_08844460:
    ctx.set_gpr(31, 0x08844468u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 610u, 0x088424D8u>(ctx, &aot_mem) && ctx.pc == 0x08844468u) goto L_08844468;
    return;
L_08844468:
    ctx.set_gpr(31, 0x08844470u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_088443FC;
L_08844470:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (ctx.gpr[16] != 0u) {
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
        goto L_088444A8;
    }
    goto L_0884447C;
L_0884447C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08844488u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_088445C4;
L_08844488:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08844494u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 247u, 0x0883D3DCu>(ctx, &aot_mem) && ctx.pc == 0x08844494u) goto L_08844494;
    return;
L_08844494:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x088444A0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 148u, 0x08840894u>(ctx, &aot_mem) && ctx.pc == 0x088444A0u) goto L_088444A0;
    return;
L_088444A0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_088445A4;
      }
      goto L_088444A8;
    }
L_088444A8:
    ctx.set_gpr(31, 0x088444B0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 238u, 0x0883D370u>(ctx, &aot_mem) && ctx.pc == 0x088444B0u) goto L_088444B0;
    return;
L_088444B0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_0884457C;
      }
      goto L_088444B8;
    }
L_088444B8:
    ctx.set_gpr(31, 0x088444C0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 610u, 0x088424D8u>(ctx, &aot_mem) && ctx.pc == 0x088444C0u) goto L_088444C0;
    return;
L_088444C0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088444CCu);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_088443AC;
L_088444CC:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088444D8u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    goto L_08844384;
L_088444D8:
    ctx.set_gpr(31, 0x088444E0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 943u, 0x08843E3Cu>(ctx, &aot_mem) && ctx.pc == 0x088444E0u) goto L_088444E0;
    return;
L_088444E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088444ECu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 29u, 0x088D01E0u>(ctx, &aot_mem) && ctx.pc == 0x088444ECu) goto L_088444EC;
    return;
L_088444EC:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088444F8u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 238u, 0x0883D370u>(ctx, &aot_mem) && ctx.pc == 0x088444F8u) goto L_088444F8;
    return;
L_088444F8:
    ctx.set_gpr(31, 0x08844500u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 244u, 0x0883D3C4u>(ctx, &aot_mem) && ctx.pc == 0x08844500u) goto L_08844500;
    return;
L_08844500:
    ctx.set_gpr(31, 0x08844508u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08844368;
L_08844508:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(31, 0x08844518u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(15936)));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 620u, 0x08816D44u>(ctx, &aot_mem) && ctx.pc == 0x08844518u) goto L_08844518;
    return;
L_08844518:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08844524u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(92));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 464u, 0x088164FCu>(ctx, &aot_mem) && ctx.pc == 0x08844524u) goto L_08844524;
    return;
L_08844524:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08844570;
    }
    goto L_0884452C;
L_0884452C:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08844538u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 480u, 0x08816610u>(ctx, &aot_mem) && ctx.pc == 0x08844538u) goto L_08844538;
    return;
L_08844538:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884456C;
      }
      goto L_08844540;
    }
L_08844540:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0884454Cu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 933u, 0x08843D88u>(ctx, &aot_mem) && ctx.pc == 0x0884454Cu) goto L_0884454C;
    return;
L_0884454C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08844558u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 247u, 0x0883D3DCu>(ctx, &aot_mem) && ctx.pc == 0x08844558u) goto L_08844558;
    return;
L_08844558:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08844564u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 148u, 0x08840894u>(ctx, &aot_mem) && ctx.pc == 0x08844564u) goto L_08844564;
    return;
L_08844564:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_088445A4;
      }
      goto L_0884456C;
    }
L_0884456C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08844570;
L_08844570:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088444B8;
      }
      goto L_0884457C;
    }
L_0884457C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08844588u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_088445C4;
L_08844588:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08844594u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 247u, 0x0883D3DCu>(ctx, &aot_mem) && ctx.pc == 0x08844594u) goto L_08844594;
    return;
L_08844594:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x088445A0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 148u, 0x08840894u>(ctx, &aot_mem) && ctx.pc == 0x088445A0u) goto L_088445A0;
    return;
L_088445A0:
    ctx.set_gpr(2, 0u + 0u);
    goto L_088445A4;
L_088445A4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088445C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088445E0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 270u, 0x0883D560u>(ctx, &aot_mem) && ctx.pc == 0x088445E0u) goto L_088445E0;
    return;
L_088445E0:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088445F4:
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
        goto L_08844610;
    }
    goto L_08844608;
L_08844608:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_08844630;
      }
      goto L_08844610;
    }
L_08844610:
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(1568), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    goto L_08844630;
L_08844630:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08844638:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[19]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(36)));
    ctx.set_fpr_bits(21, ctx.fpr_bits(12));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_fpr_bits(20, ctx.fpr_bits(13));
      if (branch_taken) {
          goto L_088447CC;
      }
      goto L_08844678;
    }
L_08844678:
    ctx.set_gpr(31, 0x08844680u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 175u, 0x08848BC4u>(ctx, &aot_mem) && ctx.pc == 0x08844680u) goto L_08844680;
    return;
L_08844680:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[19]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(208)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(532)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0884469Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0884469Cu) goto L_0884469C;
    return;
L_0884469C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088446A8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 242u, 0x0883D3B4u>(ctx, &aot_mem) && ctx.pc == 0x088446A8u) goto L_088446A8;
    return;
L_088446A8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088446B4u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 243u, 0x0883D3BCu>(ctx, &aot_mem) && ctx.pc == 0x088446B4u) goto L_088446B4;
    return;
L_088446B4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088446C0u);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 595u, 0x088423F0u>(ctx, &aot_mem) && ctx.pc == 0x088446C0u) goto L_088446C0;
    return;
L_088446C0:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088446CCu);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 336u, 0x0883DA20u>(ctx, &aot_mem) && ctx.pc == 0x088446CCu) goto L_088446CC;
    return;
L_088446CC:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x088446D8u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 763u, 0x0884347Cu>(ctx, &aot_mem) && ctx.pc == 0x088446D8u) goto L_088446D8;
    return;
L_088446D8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(980));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[19]);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(14003)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(8));
        goto L_08844768;
    }
    goto L_088446FC;
L_088446FC:
    ctx.set_gpr(31, 0x08844704u);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 595u, 0x088423F0u>(ctx, &aot_mem) && ctx.pc == 0x08844704u) goto L_08844704;
    return;
L_08844704:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 1u));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 5u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-16604)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 1u));
    ctx.fpr[12] = ctx.fpr[21] + ctx.fpr[0];
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[13] = ctx.fpr[20] + ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08844748u);
    ctx.fpr[14] = ctx.fpr[0] - ctx.fpr[1];
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x08844748u) goto L_08844748;
    return;
L_08844748:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08844760u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08844760u) goto L_08844760;
    return;
L_08844760:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_088447D0;
      }
      goto L_08844768;
    }
L_08844768:
    ctx.set_gpr(31, 0x08844770u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 595u, 0x088423F0u>(ctx, &aot_mem) && ctx.pc == 0x08844770u) goto L_08844770;
    return;
L_08844770:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 1u));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 5u << 16u);
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-16608)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 1u));
    ctx.fpr[12] = ctx.fpr[21] + ctx.fpr[0];
    ctx.set_gpr(2, 16448u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[13] = ctx.fpr[20] + ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x088447B4u);
    ctx.fpr[14] = ctx.fpr[1] - ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x088447B4u) goto L_088447B4;
    return;
L_088447B4:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088447CCu);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088447CCu) goto L_088447CC;
    return;
L_088447CC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_088447D0;
L_088447D0:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088447F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[17]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(36)));
    ctx.set_fpr_bits(21, ctx.fpr_bits(12));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_fpr_bits(20, ctx.fpr_bits(13));
      if (branch_taken) {
          goto L_088448F0;
      }
      goto L_08844834;
    }
L_08844834:
    ctx.set_gpr(31, 0x0884483Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 175u, 0x08848BC4u>(ctx, &aot_mem) && ctx.pc == 0x0884483Cu) goto L_0884483C;
    return;
L_0884483C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(208)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(532)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08844858u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08844858u) goto L_08844858;
    return;
L_08844858:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08844864u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 243u, 0x0883D3BCu>(ctx, &aot_mem) && ctx.pc == 0x08844864u) goto L_08844864;
    return;
L_08844864:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    { const float fs = ctx.fpr[21]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x08844880u);
    ctx.set_gpr(20, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 242u, 0x0883D3B4u>(ctx, &aot_mem) && ctx.pc == 0x08844880u) goto L_08844880;
    return;
L_08844880:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(31, 0x0884489Cu);
    ctx.set_gpr(19, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 595u, 0x088423F0u>(ctx, &aot_mem) && ctx.pc == 0x0884489Cu) goto L_0884489C;
    return;
L_0884489C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088448A8u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 336u, 0x0883DA20u>(ctx, &aot_mem) && ctx.pc == 0x088448A8u) goto L_088448A8;
    return;
L_088448A8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088448B4u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 763u, 0x0884347Cu>(ctx, &aot_mem) && ctx.pc == 0x088448B4u) goto L_088448B4;
    return;
L_088448B4:
    ctx.set_gpr(31, 0x088448BCu);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 595u, 0x088423F0u>(ctx, &aot_mem) && ctx.pc == 0x088448BCu) goto L_088448BC;
    return;
L_088448BC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[20]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.set_gpr(31, 0x088448D8u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 595u, 0x0883E9F0u>(ctx, &aot_mem) && ctx.pc == 0x088448D8u) goto L_088448D8;
    return;
L_088448D8:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(188)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088448F0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088448F0u) goto L_088448F0;
    return;
L_088448F0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08844918:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[18]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
      if (branch_taken) {
          goto L_088449AC;
      }
      goto L_08844948;
    }
L_08844948:
    ctx.set_gpr(31, 0x08844950u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 595u, 0x088423F0u>(ctx, &aot_mem) && ctx.pc == 0x08844950u) goto L_08844950;
    return;
L_08844950:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0884495Cu);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 336u, 0x0883DA20u>(ctx, &aot_mem) && ctx.pc == 0x0884495Cu) goto L_0884495C;
    return;
L_0884495C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08844968u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 763u, 0x0884347Cu>(ctx, &aot_mem) && ctx.pc == 0x08844968u) goto L_08844968;
    return;
L_08844968:
    ctx.set_gpr(31, 0x08844970u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 595u, 0x088423F0u>(ctx, &aot_mem) && ctx.pc == 0x08844970u) goto L_08844970;
    return;
L_08844970:
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x0884497Cu);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x0884497Cu) goto L_0884497C;
    return;
L_0884497C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08844988u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    goto L_088441B0;
L_08844988:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08844994u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x08844994u) goto L_08844994;
    return;
L_08844994:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(0));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(196)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088449ACu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088449ACu) goto L_088449AC;
    return;
L_088449AC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088449C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x088449ECu);
    ctx.set_gpr(18, ctx.gpr[9] + 0u);
    goto L_08844A78;
L_088449EC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(980));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, 2u << 16u);
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[18]))));
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(13556), ctx.gpr[6]);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(14291)));
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08844A64;
    }
    goto L_08844A20;
L_08844A20:
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(14290)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08844A60;
      }
      goto L_08844A34;
    }
L_08844A34:
    if (ctx.gpr[6] != 0u) {
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
        goto L_08844A54;
    }
    goto L_08844A3C;
L_08844A3C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08844A4Cu);
    ctx.set_gpr(6, 0u + 0u);
    goto L_08846608;
L_08844A4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08844A60;
      }
      goto L_08844A54;
    }
L_08844A54:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08844A60u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    goto L_08846608;
L_08844A60:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08844A64;
L_08844A64:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08844A78:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[21]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(16, ctx.gpr[9] + 0u);
      if (branch_taken) {
          goto L_08844B44;
      }
      goto L_08844AC0;
    }
L_08844AC0:
    ctx.set_gpr(31, 0x08844AC8u);
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 595u, 0x088423F0u>(ctx, &aot_mem) && ctx.pc == 0x08844AC8u) goto L_08844AC8;
    return;
L_08844AC8:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08844AD4u);
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 336u, 0x0883DA20u>(ctx, &aot_mem) && ctx.pc == 0x08844AD4u) goto L_08844AD4;
    return;
L_08844AD4:
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x08844AE0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 763u, 0x0884347Cu>(ctx, &aot_mem) && ctx.pc == 0x08844AE0u) goto L_08844AE0;
    return;
L_08844AE0:
    ctx.set_gpr(31, 0x08844AE8u);
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 595u, 0x088423F0u>(ctx, &aot_mem) && ctx.pc == 0x08844AE8u) goto L_08844AE8;
    return;
L_08844AE8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 17279u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = ctx.fpr[0] / ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[13] = ctx.fpr[0] / ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[14] = ctx.fpr[0] / ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(31, 0x08844B2Cu);
    ctx.fpr[15] = ctx.fpr[0] / ctx.fpr[1];
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 600u, 0x0883EA54u>(ctx, &aot_mem) && ctx.pc == 0x08844B2Cu) goto L_08844B2C;
    return;
L_08844B2C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08844B44u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08844B44u) goto L_08844B44;
    return;
L_08844B44:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08844B6C:
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08844C0C;
      }
      goto L_08844B7C;
    }
L_08844B7C:
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(888), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.set_gpr(10, 0u + 0u);
      if (branch_taken) {
          goto L_08844C0C;
      }
      goto L_08844B94;
    }
L_08844B94:
    ctx.set_gpr(8, ctx.gpr[4] + 0u);
    goto L_08844B98;
L_08844B98:
    ctx.set_gpr(9, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
        goto L_08844C00;
    }
    goto L_08844BA8;
L_08844BA8:
    ctx.set_gpr(3, ctx.gpr[9] << 1u);
    ctx.set_gpr(7, ctx.gpr[4] + ctx.gpr[3]);
    goto L_08844BB0;
L_08844BB0:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(1568))))));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(1568))))));
    ctx.set_gpr(3, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(888)));
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(888)));
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
        goto L_08844BEC;
    }
    goto L_08844BE0;
L_08844BE0:
    rt.memory().aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(1568), static_cast<std::uint16_t>(ctx.gpr[6]));
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(1568), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    goto L_08844BEC;
L_08844BEC:
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08844BB0;
      }
      goto L_08844BFC;
    }
L_08844BFC:
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    goto L_08844C00;
L_08844C00:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[10]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08844B98;
      }
      goto L_08844C0C;
    }
L_08844C0C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08844C14:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[17]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(36)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_08844D74;
    }
    goto L_08844C50;
L_08844C50:
    ctx.set_gpr(3, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(980));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, 2u << 16u);
    ctx.fpr[5] = ctx.fpr[0] - ctx.fpr[13];
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13420)));
    ctx.fpr[4] = ctx.fpr[0] - ctx.fpr[15];
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13424)));
    ctx.fpr[3] = ctx.fpr[14] - ctx.fpr[12];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13416)));
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[3] - ctx.fpr[1];
    ctx.fpr[20] = ctx.fpr[12] + ctx.fpr[0];
    ctx.fpr[3] = ctx.fpr[5] - ctx.fpr[4];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13428)));
    ctx.fpr[22] = ctx.fpr[14] - ctx.fpr[1];
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[3] - ctx.fpr[0];
    ctx.fpr[23] = ctx.fpr[5] - ctx.fpr[1];
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    ctx.fpr[21] = ctx.fpr[4] + ctx.fpr[0];
      if (branch_taken) {
          goto L_08844D70;
      }
      goto L_08844CD4;
    }
L_08844CD4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < 170 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08844D70;
      }
      goto L_08844CE0;
    }
L_08844CE0:
    ctx.set_gpr(31, 0x08844CE8u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 595u, 0x088423F0u>(ctx, &aot_mem) && ctx.pc == 0x08844CE8u) goto L_08844CE8;
    return;
L_08844CE8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08844CF4u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 336u, 0x0883DA20u>(ctx, &aot_mem) && ctx.pc == 0x08844CF4u) goto L_08844CF4;
    return;
L_08844CF4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08844D00u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 763u, 0x0884347Cu>(ctx, &aot_mem) && ctx.pc == 0x08844D00u) goto L_08844D00;
    return;
L_08844D00:
    ctx.set_gpr(31, 0x08844D08u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 595u, 0x088423F0u>(ctx, &aot_mem) && ctx.pc == 0x08844D08u) goto L_08844D08;
    return;
L_08844D08:
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_fpr_bits(13, ctx.fpr_bits(21));
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08844D1Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 595u, 0x0883E9F0u>(ctx, &aot_mem) && ctx.pc == 0x08844D1Cu) goto L_08844D1C;
    return;
L_08844D1C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(168)));
    ctx.set_gpr(5, 0u + 0u);
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08844D38u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08844D38u) goto L_08844D38;
    return;
L_08844D38:
    ctx.set_gpr(31, 0x08844D40u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 595u, 0x088423F0u>(ctx, &aot_mem) && ctx.pc == 0x08844D40u) goto L_08844D40;
    return;
L_08844D40:
    ctx.set_fpr_bits(12, ctx.fpr_bits(22));
    ctx.set_fpr_bits(13, ctx.fpr_bits(23));
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08844D54u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 595u, 0x0883E9F0u>(ctx, &aot_mem) && ctx.pc == 0x08844D54u) goto L_08844D54;
    return;
L_08844D54:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(168)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08844D70u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08844D70u) goto L_08844D70;
    return;
L_08844D70:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08844D74;
L_08844D74:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08844D98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08844DB8u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 941u, 0x08843E2Cu>(ctx, &aot_mem) && ctx.pc == 0x08844DB8u) goto L_08844DB8;
    return;
L_08844DB8:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08844DF8;
    }
    goto L_08844DC0;
L_08844DC0:
    ctx.set_gpr(31, 0x08844DC8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 610u, 0x088424D8u>(ctx, &aot_mem) && ctx.pc == 0x08844DC8u) goto L_08844DC8;
    return;
L_08844DC8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08844DD4u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 941u, 0x08843E2Cu>(ctx, &aot_mem) && ctx.pc == 0x08844DD4u) goto L_08844DD4;
    return;
L_08844DD4:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08844DE8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08844DE8u) goto L_08844DE8;
    return;
L_08844DE8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08844DF4u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08844384;
L_08844DF4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08844DF8;
L_08844DF8:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08844E08:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08844E20u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 365u, 0x08841414u>(ctx, &aot_mem) && ctx.pc == 0x08844E20u) goto L_08844E20;
    return;
L_08844E20:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08844E30u);
    ctx.set_gpr(6, 0u + 0u);
    goto L_08844E40;
L_08844E30:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08844E40:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 338u, 0x089497CCu>(ctx, &aot_mem); return;
L_08844E48:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08844EE8;
      }
      goto L_08844E54;
    }
L_08844E54:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.set_gpr(8, 0u + 0u);
      if (branch_taken) {
          goto L_08844EE8;
      }
      goto L_08844E5C;
    }
L_08844E5C:
    ctx.set_gpr(7, ctx.gpr[4] + 0u);
    goto L_08844E60;
L_08844E60:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(1568))))));
    if (ctx.gpr[5] == ctx.gpr[3]) {
    ctx.set_gpr(3, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
        goto L_08844E88;
    }
    goto L_08844E6C;
L_08844E6C:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08844E60;
      }
      goto L_08844E7C;
    }
L_08844E7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08844EE8;
      }
      goto L_08844E84;
    }
L_08844E84:
    ctx.set_gpr(3, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    goto L_08844E88;
L_08844E88:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    if (ctx.gpr[1] == 0u) {
    ctx.set_gpr(3, ctx.gpr[6] << 1u);
        goto L_08844EC0;
    }
    goto L_08844E94;
L_08844E94:
    ctx.set_gpr(3, ctx.gpr[8] << 1u);
    ctx.set_gpr(7, ctx.gpr[4] + ctx.gpr[3]);
    goto L_08844E9C;
L_08844E9C:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(1570))))));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(1568), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08844E9C;
      }
      goto L_08844EBC;
    }
L_08844EBC:
    ctx.set_gpr(3, ctx.gpr[6] << 1u);
    goto L_08844EC0;
L_08844EC0:
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(1566), static_cast<std::uint16_t>(0u));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(6, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(208), 0u);
    goto L_08844EE8;
L_08844EE8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08844EF0:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2038))))));
    ctx.set_gpr(7, 0u + 0u);
    goto L_08844EF8;
L_08844EF8:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
        goto L_08844F08;
    }
    goto L_08844F00;
L_08844F00:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08844F78;
      }
      goto L_08844F08;
    }
L_08844F08:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[7]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08844EF8;
      }
      goto L_08844F14;
    }
L_08844F14:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(8, ctx.gpr[4] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(128));
    goto L_08844F20;
L_08844F20:
    if (ctx.gpr[2] != ctx.gpr[7]) {
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(3160)));
        goto L_08844F30;
    }
    goto L_08844F28;
L_08844F28:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08844F78;
      }
      goto L_08844F30;
    }
L_08844F30:
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
        goto L_08844F54;
    }
    goto L_08844F38;
L_08844F38:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1112));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(3160), static_cast<std::uint8_t>(ctx.gpr[7]));
      if (branch_taken) {
          goto L_08844F60;
      }
      goto L_08844F54;
    }
L_08844F54:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 129 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1112));
      if (branch_taken) {
          goto L_08844F20;
      }
      goto L_08844F60;
    }
L_08844F60:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2040), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2044), ctx.gpr[6]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2037), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2038), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2048), ctx.gpr[2]);
    goto L_08844F78;
L_08844F78:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08844F80:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2037))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
      if (branch_taken) {
          goto L_08845004;
      }
      goto L_08844FAC;
    }
L_08844FAC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08844FC0;
      }
      goto L_08844FB8;
    }
L_08844FB8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(2037))))));
      if (branch_taken) {
          goto L_08845658;
      }
      goto L_08844FC0;
    }
L_08844FC0:
    ctx.set_gpr(31, 0x08844FC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08844FC8u) goto L_08844FC8;
    return;
L_08844FC8:
    ctx.set_gpr(31, 0x08844FD0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1038u, 0x08AAFF54u>(ctx, &aot_mem) && ctx.pc == 0x08844FD0u) goto L_08844FD0;
    return;
L_08844FD0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08845654;
      }
      goto L_08844FD8;
    }
L_08844FD8:
    ctx.set_gpr(31, 0x08844FE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08844FE0u) goto L_08844FE0;
    return;
L_08844FE0:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2040)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08844FF0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1027u, 0x08AAFEB8u>(ctx, &aot_mem) && ctx.pc == 0x08844FF0u) goto L_08844FF0;
    return;
L_08844FF0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08845654;
      }
      goto L_08844FF8;
    }
L_08844FF8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(2037), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08845654;
      }
      goto L_08845004;
    }
L_08845004:
    ctx.set_gpr(31, 0x0884500Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x0884500Cu) goto L_0884500C;
    return;
L_0884500C:
    ctx.set_gpr(31, 0x08845014u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1044u, 0x08AAFF94u>(ctx, &aot_mem) && ctx.pc == 0x08845014u) goto L_08845014;
    return;
L_08845014:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08845654;
      }
      goto L_0884501C;
    }
L_0884501C:
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08845038;
      }
      goto L_08845028;
    }
L_08845028:
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08845028;
      }
      goto L_08845038;
    }
L_08845038:
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08845054;
      }
      goto L_08845044;
    }
L_08845044:
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08845044;
      }
      goto L_08845054;
    }
L_08845054:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2044)));
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x08845068u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(16012));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x08845068u) goto L_08845068;
    return;
L_08845068:
    ctx.set_gpr(31, 0x08845070u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08845070u) goto L_08845070;
    return;
L_08845070:
    ctx.set_gpr(31, 0x08845078u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 971u, 0x08AAFC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08845078u) goto L_08845078;
    return;
L_08845078:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(13));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(10));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(32));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(62), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, 0x088450A8u);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 620u, 0x08816D44u>(ctx, &aot_mem) && ctx.pc == 0x088450A8u) goto L_088450A8;
    return;
L_088450A8:
    ctx.set_gpr(16, ctx.gpr[2] - ctx.gpr[18]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088450BCu);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x088450BCu) goto L_088450BC;
    return;
L_088450BC:
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(18, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088450D0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 620u, 0x08816D44u>(ctx, &aot_mem) && ctx.pc == 0x088450D0u) goto L_088450D0;
    return;
L_088450D0:
    ctx.set_gpr(16, ctx.gpr[2] - ctx.gpr[18]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088450E4u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x088450E4u) goto L_088450E4;
    return;
L_088450E4:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[29]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, 0x088450F4u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 685u, 0x0880F28Cu>(ctx, &aot_mem) && ctx.pc == 0x088450F4u) goto L_088450F4;
    return;
L_088450F4:
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(18, ctx.gpr[18] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2048)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1112));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(31, 0x08845128u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(2128), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 620u, 0x08816D44u>(ctx, &aot_mem) && ctx.pc == 0x08845128u) goto L_08845128;
    return;
L_08845128:
    ctx.set_gpr(16, ctx.gpr[2] - ctx.gpr[18]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0884513Cu);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x0884513Cu) goto L_0884513C;
    return;
L_0884513C:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[29]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, 0x0884514Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 685u, 0x0880F28Cu>(ctx, &aot_mem) && ctx.pc == 0x0884514Cu) goto L_0884514C;
    return;
L_0884514C:
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(18, ctx.gpr[18] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2048)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1112));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(31, 0x08845180u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(2132), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 620u, 0x08816D44u>(ctx, &aot_mem) && ctx.pc == 0x08845180u) goto L_08845180;
    return;
L_08845180:
    ctx.set_gpr(16, ctx.gpr[2] - ctx.gpr[18]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08845194u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x08845194u) goto L_08845194;
    return;
L_08845194:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[29]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, 0x088451A4u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 685u, 0x0880F28Cu>(ctx, &aot_mem) && ctx.pc == 0x088451A4u) goto L_088451A4;
    return;
L_088451A4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(18, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2048)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1112));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(2124), ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2048)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2124)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(19, 0u + 0u);
      if (branch_taken) {
          goto L_088455D4;
      }
      goto L_088451F0;
    }
L_088451F0:
    ctx.set_gpr(17, 0u + 0u);
    goto L_088451F4;
L_088451F4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08845200u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 620u, 0x08816D44u>(ctx, &aot_mem) && ctx.pc == 0x08845200u) goto L_08845200;
    return;
L_08845200:
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08845218u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 620u, 0x08816D44u>(ctx, &aot_mem) && ctx.pc == 0x08845218u) goto L_08845218;
    return;
L_08845218:
    ctx.set_gpr(16, ctx.gpr[2] - ctx.gpr[18]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0884522Cu);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x0884522Cu) goto L_0884522C;
    return;
L_0884522C:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[29]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, 0x0884523Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 685u, 0x0880F28Cu>(ctx, &aot_mem) && ctx.pc == 0x0884523Cu) goto L_0884523C;
    return;
L_0884523C:
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, ctx.gpr[18] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2048)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1112));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(31, 0x08845274u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(2136), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 620u, 0x08816D44u>(ctx, &aot_mem) && ctx.pc == 0x08845274u) goto L_08845274;
    return;
L_08845274:
    ctx.set_gpr(16, ctx.gpr[2] - ctx.gpr[18]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08845288u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x08845288u) goto L_08845288;
    return;
L_08845288:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[29]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2048)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1112));
    ctx.set_gpr(2, 17280u << 16u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[3]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2132)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) && ctx.fpr[0] == ctx.fpr[1]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.set_gpr(2, 17408u << 16u);
        goto L_08845300;
    }
    goto L_088452C0;
L_088452C0:
    ctx.set_gpr(31, 0x088452C8u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 685u, 0x0880F28Cu>(ctx, &aot_mem) && ctx.pc == 0x088452C8u) goto L_088452C8;
    return;
L_088452C8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 15395u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] | 55050u);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2048)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1112));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(2140), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_088453CC;
      }
      goto L_08845300;
    }
L_08845300:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) && ctx.fpr[0] == ctx.fpr[1]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
        goto L_088453A0;
    }
    goto L_08845314;
L_08845314:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2124)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
        goto L_08845360;
    }
    goto L_08845324;
L_08845324:
    ctx.set_gpr(31, 0x0884532Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 685u, 0x0880F28Cu>(ctx, &aot_mem) && ctx.pc == 0x0884532Cu) goto L_0884532C;
    return;
L_0884532C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2048)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1112));
    ctx.set_gpr(4, 16256u << 16u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(2140), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_088453CC;
      }
      goto L_08845360;
    }
L_08845360:
    ctx.set_gpr(31, 0x08845368u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 685u, 0x0880F28Cu>(ctx, &aot_mem) && ctx.pc == 0x08845368u) goto L_08845368;
    return;
L_08845368:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 15820u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] | 52429u);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2048)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1112));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(2140), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_088453CC;
      }
      goto L_088453A0;
    }
L_088453A0:
    ctx.set_gpr(31, 0x088453A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 685u, 0x0880F28Cu>(ctx, &aot_mem) && ctx.pc == 0x088453A8u) goto L_088453A8;
    return;
L_088453A8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2048)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1112));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(2140), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_088453CC;
L_088453CC:
    ctx.set_gpr(2, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088453E0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 620u, 0x08816D44u>(ctx, &aot_mem) && ctx.pc == 0x088453E0u) goto L_088453E0;
    return;
L_088453E0:
    ctx.set_gpr(16, ctx.gpr[2] - ctx.gpr[18]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088453F4u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x088453F4u) goto L_088453F4;
    return;
L_088453F4:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[29]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(31, 0x08845404u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 685u, 0x0880F28Cu>(ctx, &aot_mem) && ctx.pc == 0x08845404u) goto L_08845404;
    return;
L_08845404:
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, ctx.gpr[18] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2048)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1112));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(31, 0x0884543Cu);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(2144), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 620u, 0x08816D44u>(ctx, &aot_mem) && ctx.pc == 0x0884543Cu) goto L_0884543C;
    return;
L_0884543C:
    ctx.set_gpr(16, ctx.gpr[2] - ctx.gpr[18]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08845450u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 574u, 0x08816B28u>(ctx, &aot_mem) && ctx.pc == 0x08845450u) goto L_08845450;
    return;
L_08845450:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[29]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2048)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1112));
    ctx.set_gpr(2, 17280u << 16u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[20] + ctx.gpr[3]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2132)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) && ctx.fpr[0] == ctx.fpr[1]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.set_gpr(2, 17408u << 16u);
        goto L_088454C8;
    }
    goto L_08845488;
L_08845488:
    ctx.set_gpr(31, 0x08845490u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 685u, 0x0880F28Cu>(ctx, &aot_mem) && ctx.pc == 0x08845490u) goto L_08845490;
    return;
L_08845490:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x0884549Cu);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x0884549Cu) goto L_0884549C;
    return;
L_0884549C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088454A8u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x088454A8u) goto L_088454A8;
    return;
L_088454A8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2048)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1112));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(2148), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_088455AC;
      }
      goto L_088454C8;
    }
L_088454C8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) && ctx.fpr[0] == ctx.fpr[1]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
        goto L_08845580;
    }
    goto L_088454DC;
L_088454DC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2124)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
        goto L_08845540;
    }
    goto L_088454EC;
L_088454EC:
    ctx.set_gpr(31, 0x088454F4u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 685u, 0x0880F28Cu>(ctx, &aot_mem) && ctx.pc == 0x088454F4u) goto L_088454F4;
    return;
L_088454F4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08845500u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08845500u) goto L_08845500;
    return;
L_08845500:
    ctx.set_gpr(5, 16368u << 16u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08845514u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08845514u) goto L_08845514;
    return;
L_08845514:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08845520u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x08845520u) goto L_08845520;
    return;
L_08845520:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2048)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1112));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(2148), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_088455AC;
      }
      goto L_08845540;
    }
L_08845540:
    ctx.set_gpr(31, 0x08845548u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 685u, 0x0880F28Cu>(ctx, &aot_mem) && ctx.pc == 0x08845548u) goto L_08845548;
    return;
L_08845548:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(31, 0x08845554u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 675u, 0x0881EBD0u>(ctx, &aot_mem) && ctx.pc == 0x08845554u) goto L_08845554;
    return;
L_08845554:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08845560u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 18u, 0x08820104u>(ctx, &aot_mem) && ctx.pc == 0x08845560u) goto L_08845560;
    return;
L_08845560:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2048)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1112));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(2148), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_088455AC;
      }
      goto L_08845580;
    }
L_08845580:
    ctx.set_gpr(31, 0x08845588u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 685u, 0x0880F28Cu>(ctx, &aot_mem) && ctx.pc == 0x08845588u) goto L_08845588;
    return;
L_08845588:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2048)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1112));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(2148), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_088455AC;
L_088455AC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2048)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1112));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2124)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_088451F4;
      }
      goto L_088455D4;
    }
L_088455D4:
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(16032));
    ctx.set_gpr(31, 0x088455E8u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x088455E8u) goto L_088455E8;
    return;
L_088455E8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2048)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1112));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[20]);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(2060));
    goto L_08845608;
L_08845608:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08845608;
      }
      goto L_08845628;
    }
L_08845628:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2044)));
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(31, 0x0884563Cu);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(16044));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 423u, 0x08815FF4u>(ctx, &aot_mem) && ctx.pc == 0x0884563Cu) goto L_0884563C;
    return;
L_0884563C:
    ctx.set_gpr(31, 0x08845644u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08845644u) goto L_08845644;
    return;
L_08845644:
    ctx.set_gpr(31, 0x0884564Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1016u, 0x08AAFE28u>(ctx, &aot_mem) && ctx.pc == 0x0884564Cu) goto L_0884564C;
    return;
L_0884564C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(2037), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08845654;
L_08845654:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(2037))))));
    goto L_08845658;
L_08845658:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(2038))))));
        goto L_08845750;
    }
    goto L_08845664;
L_08845664:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(2038))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088456CC;
      }
      goto L_08845674;
    }
L_08845674:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08845688;
      }
      goto L_08845680;
    }
L_08845680:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0884574C;
      }
      goto L_08845688;
    }
L_08845688:
    ctx.set_gpr(31, 0x08845690u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x08845690u) goto L_08845690;
    return;
L_08845690:
    ctx.set_gpr(31, 0x08845698u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1038u, 0x08AAFF54u>(ctx, &aot_mem) && ctx.pc == 0x08845698u) goto L_08845698;
    return;
L_08845698:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884574C;
      }
      goto L_088456A0;
    }
L_088456A0:
    ctx.set_gpr(31, 0x088456A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x088456A8u) goto L_088456A8;
    return;
L_088456A8:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2044)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088456B8u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1027u, 0x08AAFEB8u>(ctx, &aot_mem) && ctx.pc == 0x088456B8u) goto L_088456B8;
    return;
L_088456B8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884574C;
      }
      goto L_088456C0;
    }
L_088456C0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(2038), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_0884574C;
      }
      goto L_088456CC;
    }
L_088456CC:
    ctx.set_gpr(31, 0x088456D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x088456D4u) goto L_088456D4;
    return;
L_088456D4:
    ctx.set_gpr(31, 0x088456DCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1044u, 0x08AAFF94u>(ctx, &aot_mem) && ctx.pc == 0x088456DCu) goto L_088456DC;
    return;
L_088456DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0884574C;
      }
      goto L_088456E4;
    }
L_088456E4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2048)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1112));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08845708u);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(2060));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 873u, 0x08843A90u>(ctx, &aot_mem) && ctx.pc == 0x08845708u) goto L_08845708;
    return;
L_08845708:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2048)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1112));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08845728u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(3164));
    goto L_08845790;
L_08845728:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08845734u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 141u, 0x08840834u>(ctx, &aot_mem) && ctx.pc == 0x08845734u) goto L_08845734;
    return;
L_08845734:
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(2038), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(2037), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(2048), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08845770;
      }
      goto L_0884574C;
    }
L_0884574C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(2038))))));
    goto L_08845750;
L_08845750:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08845770;
    }
    goto L_08845758;
L_08845758:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(2037))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0884576C;
      }
      goto L_08845764;
    }
L_08845764:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08845770;
      }
      goto L_0884576C;
    }
L_0884576C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08845770;
L_08845770:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08845790:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088457ACu);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 935u, 0x08843DBCu>(ctx, &aot_mem) && ctx.pc == 0x088457ACu) goto L_088457AC;
    return;
L_088457AC:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088457B8u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 261u, 0x0883D48Cu>(ctx, &aot_mem) && ctx.pc == 0x088457B8u) goto L_088457B8;
    return;
L_088457B8:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088457D0:
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
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(170));
    goto L_08845808;
L_08845808:
    if (ctx.gpr[18] != ctx.gpr[3]) {
    ctx.set_gpr(2, 2u << 16u);
        goto L_08845818;
    }
    goto L_08845810;
L_08845810:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08845BFC;
      }
      goto L_08845818;
    }
L_08845818:
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(13457)));
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
        goto L_0884584C;
    }
    goto L_08845828;
L_08845828:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(980));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[19]);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(13457), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08845858;
      }
      goto L_0884584C;
    }
L_0884584C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < 171 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(980));
      if (branch_taken) {
          goto L_08845808;
      }
      goto L_08845858;
    }
L_08845858:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(980));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(1, 2u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 13327u);
    ctx.set_gpr(10, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[10] + ctx.gpr[19]);
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(13325), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(13326), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1112));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(8, ctx.gpr[4] + ctx.gpr[1]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(11, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[11] + ctx.gpr[19]);
    ctx.set_gpr(9, ctx.gpr[2] + static_cast<std::uint32_t>(2060));
    goto L_088458A4;
L_088458A4:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_088458A4;
      }
      goto L_088458C4;
    }
L_088458C4:
    ctx.set_gpr(1, 2u << 16u);
    ctx.set_gpr(10, ctx.gpr[10] + ctx.gpr[19]);
    ctx.set_gpr(1, ctx.gpr[1] | 13392u);
    ctx.set_gpr(17, ctx.gpr[10] + ctx.gpr[1]);
    ctx.set_gpr(1, 2u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 13396u);
    ctx.set_gpr(16, ctx.gpr[10] + ctx.gpr[1]);
    ctx.set_gpr(1, 2u << 16u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(1, ctx.gpr[1] | 13432u);
    ctx.set_gpr(9, ctx.gpr[10] + ctx.gpr[1]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(1, 2u << 16u);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_gpr(8, 16256u << 16u);
    ctx.set_gpr(3, ctx.gpr[10] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(13436), ctx.gpr[8]);
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[10] + ctx.gpr[3]);
    ctx.set_gpr(4, 2u << 16u);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(14003), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(1, ctx.gpr[1] | 13460u);
    ctx.set_gpr(3, ctx.gpr[10] + ctx.gpr[1]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[10] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(13456), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[10] + ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(14288), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(4, 2u << 16u);
    ctx.set_gpr(4, ctx.gpr[10] + ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(14289), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(4, 2u << 16u);
    ctx.set_gpr(4, ctx.gpr[10] + ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(14291), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, 2u << 16u);
    ctx.set_gpr(4, ctx.gpr[10] + ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(14290), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, 2u << 16u);
    ctx.set_gpr(4, ctx.gpr[10] + ctx.gpr[4]);
    ctx.set_gpr(1, 2u << 16u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(13520), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(1, ctx.gpr[1] | 13524u);
    ctx.set_gpr(4, ctx.gpr[10] + ctx.gpr[1]);
    ctx.set_gpr(7, 17279u << 16u);
    ctx.set_gpr(1, 2u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.set_gpr(1, ctx.gpr[1] | 13528u);
    ctx.set_gpr(4, ctx.gpr[10] + ctx.gpr[1]);
    ctx.set_gpr(1, 2u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.set_gpr(1, ctx.gpr[1] | 13532u);
    ctx.set_gpr(4, ctx.gpr[10] + ctx.gpr[1]);
    ctx.set_gpr(1, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[11] + ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.set_gpr(1, ctx.gpr[1] | 13536u);
    ctx.set_gpr(4, ctx.gpr[10] + ctx.gpr[1]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.set_gpr(4, 2u << 16u);
    ctx.set_gpr(4, ctx.gpr[10] + ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(13458), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[10] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(13416), 0u);
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[10] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(13420), 0u);
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[10] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(13424), ctx.gpr[8]);
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[10] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(13428), ctx.gpr[8]);
    ctx.set_gpr(3, ctx.gpr[6] << 4u);
    ctx.set_gpr(13, ctx.gpr[3] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2128)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(2136)));
    ctx.set_gpr(1, 2u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 13400u);
    ctx.fpr[0] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(22, ctx.gpr[10] + ctx.gpr[1]);
    ctx.set_gpr(1, 2u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 13404u);
    ctx.set_gpr(21, ctx.gpr[10] + ctx.gpr[1]);
    ctx.set_gpr(1, 2u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 13408u);
    ctx.set_gpr(20, ctx.gpr[10] + ctx.gpr[1]);
    ctx.set_gpr(1, 2u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 13412u);
    ctx.set_gpr(23, ctx.gpr[10] + ctx.gpr[1]);
    ctx.set_gpr(1, 2u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 13440u);
    ctx.set_gpr(30, ctx.gpr[10] + ctx.gpr[1]);
    ctx.set_gpr(1, 2u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 13444u);
    ctx.set_gpr(3, ctx.gpr[10] + ctx.gpr[1]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[3]);
    ctx.set_gpr(3, 16384u << 16u);
    ctx.set_gpr(12, 2u << 16u);
    ctx.set_gpr(11, 2u << 16u);
    ctx.set_gpr(7, 2u << 16u);
    ctx.set_gpr(1, 2u << 16u);
    ctx.set_gpr(12, ctx.gpr[10] + ctx.gpr[12]);
    ctx.set_gpr(11, ctx.gpr[10] + ctx.gpr[11]);
    ctx.set_gpr(7, ctx.gpr[10] + ctx.gpr[7]);
    ctx.set_gpr(1, ctx.gpr[1] | 13327u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(2140)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2132)));
    ctx.fpr[5] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[0] = ctx.fpr[1] / ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(2144)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2128)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.fpr[1] = ctx.fpr[2] / ctx.fpr[1];
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(2148)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2132)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.fpr[1] = ctx.fpr[2] / ctx.fpr[1];
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(2144)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2128)));
    ctx.fpr[0] = ctx.fpr[1] / ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(2148)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2132)));
    ctx.fpr[0] = ctx.fpr[1] / ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(13448), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(13452), ctx.gpr[8]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(13324), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2128)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2132)));
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(2144)));
    ctx.fpr[4] = ctx.fpr[2] / ctx.fpr[5];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(2148)));
    ctx.fpr[6] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[10] + ctx.gpr[1]);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[5];
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[3] = ctx.fpr[3] / ctx.fpr[5];
    ctx.fpr[4] = ctx.fpr[6] - ctx.fpr[4];
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[5];
    ctx.fpr[1] = ctx.fpr[2] - ctx.fpr[1];
    ctx.fpr[12] = ctx.fpr[3] + ctx.fpr[4];
    ctx.set_gpr(31, 0x08845B50u);
    ctx.fpr[13] = ctx.fpr[0] + ctx.fpr[1];
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 953u, 0x08843EB4u>(ctx, &aot_mem) && ctx.pc == 0x08845B50u) goto L_08845B50;
    return;
L_08845B50:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08845B64u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    goto L_08845F94;
L_08845B64:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08845B80u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    goto L_08844C14;
L_08845B80:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08845B98u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    goto L_088447F4;
L_08845B98:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_fpr_bits(3, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_fpr_bits(2, ctx.fpu_float_to_word(ctx.fpr[2], 1u));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_fpr_bits(1, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    ctx.set_gpr(7, std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.set_gpr(8, std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(31, 0x08845BE4u);
    ctx.set_gpr(9, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_088449C8;
L_08845BE4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08845BF8u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    goto L_08844918;
L_08845BF8:
    ctx.set_gpr(2, ctx.gpr[18] + 0u);
    goto L_08845BFC;
L_08845BFC:
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
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08845C2C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(980));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    ctx.set_gpr(1, 2u << 16u);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.lo);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[21]);
    ctx.set_gpr(1, ctx.gpr[1] | 13324u);
    ctx.set_gpr(30, ctx.gpr[2] + ctx.gpr[1]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[19];
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
      if (branch_taken) {
          goto L_08845C94;
      }
      goto L_08845C8C;
    }
L_08845C8C:
    ctx.set_gpr(31, 0x08845C94u);
    // nop
    goto L_08844E48;
L_08845C94:
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[21]);
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(13325), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(13326), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1112));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(1, 2u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 13327u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[1]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(7, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[7] + ctx.gpr[21]);
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(2060));
    goto L_08845CD4;
L_08845CD4:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08845CD4;
      }
      goto L_08845CF4;
    }
L_08845CF4:
    ctx.set_gpr(5, ctx.gpr[7] + ctx.gpr[21]);
    ctx.set_gpr(6, ctx.gpr[16] << 4u);
    ctx.set_gpr(4, ctx.gpr[6] + ctx.gpr[5]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2136)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2128)));
    ctx.set_gpr(1, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[21]);
    ctx.fpr[0] = ctx.fpr[1] / ctx.fpr[0];
    ctx.set_gpr(1, ctx.gpr[1] | 13400u);
    ctx.set_gpr(17, ctx.gpr[2] + ctx.gpr[1]);
    ctx.set_gpr(1, 2u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 13404u);
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[1]);
    ctx.set_gpr(1, 2u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 13408u);
    ctx.set_gpr(22, ctx.gpr[2] + ctx.gpr[1]);
    ctx.set_gpr(1, 2u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 13412u);
    ctx.set_gpr(23, ctx.gpr[2] + ctx.gpr[1]);
    ctx.set_gpr(1, 2u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 13440u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[1]);
    ctx.set_gpr(1, 2u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[3]);
    ctx.set_gpr(1, ctx.gpr[1] | 13444u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[1]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2140)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2132)));
    ctx.fpr[0] = ctx.fpr[1] / ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2136)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2144)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2128)));
    ctx.fpr[1] = ctx.fpr[2] + ctx.fpr[1];
    ctx.fpr[0] = ctx.fpr[1] / ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2140)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2148)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2132)));
    ctx.fpr[1] = ctx.fpr[2] + ctx.fpr[1];
    ctx.fpr[0] = ctx.fpr[1] / ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2144)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2128)));
    ctx.fpr[0] = ctx.fpr[1] / ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2148)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2132)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[0] = ctx.fpr[1] / ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[3] == ctx.gpr[19]) {
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[21]);
        goto L_08845E68;
    }
    goto L_08845DD8;
L_08845DD8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1112));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(1, 2u << 16u);
    rt.memory().aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.set_gpr(1, ctx.gpr[1] | 13327u);
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[4] + ctx.gpr[21]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2128)));
    ctx.set_gpr(4, 16384u << 16u);
    ctx.fpr[5] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[4] = ctx.fpr[0] / ctx.fpr[5];
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[6] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13392)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2132)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[5]);
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2144)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[1]);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2148)));
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[5];
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13396)));
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13432)));
    ctx.fpr[3] = ctx.fpr[3] / ctx.fpr[5];
    ctx.fpr[4] = ctx.fpr[6] - ctx.fpr[4];
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[5];
    ctx.fpr[1] = ctx.fpr[2] - ctx.fpr[1];
    ctx.fpr[12] = ctx.fpr[3] + ctx.fpr[4];
    ctx.set_gpr(31, 0x08845E64u);
    ctx.fpr[13] = ctx.fpr[0] + ctx.fpr[1];
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 953u, 0x08843EB4u>(ctx, &aot_mem) && ctx.pc == 0x08845E64u) goto L_08845E64;
    return;
L_08845E64:
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[21]);
    goto L_08845E68;
L_08845E68:
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(13392)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(13396)));
    ctx.set_gpr(31, 0x08845E8Cu);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    goto L_08845F94;
L_08845E8C:
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[21]);
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(14288)));
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(2, 2u << 16u);
        goto L_08845EFC;
    }
    goto L_08845EA4;
L_08845EA4:
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(14289)));
    if (ctx.gpr[2] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08845EDC;
    }
    goto L_08845EB8;
L_08845EB8:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08845ED4u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    goto L_08844C14;
L_08845ED4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
      if (branch_taken) {
          goto L_08845F4C;
      }
      goto L_08845EDC;
    }
L_08845EDC:
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08845EF4u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    goto L_08844C14;
L_08845EF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08845F48;
      }
      goto L_08845EFC;
    }
L_08845EFC:
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(14289)));
    if (ctx.gpr[2] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
        goto L_08845F30;
    }
    goto L_08845F0C;
L_08845F0C:
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08845F28u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    goto L_08844C14;
L_08845F28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08845F48;
      }
      goto L_08845F30;
    }
L_08845F30:
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08845F48u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    goto L_08844C14;
L_08845F48:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    goto L_08845F4C;
L_08845F4C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08845F64u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    goto L_088447F4;
L_08845F64:
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
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08845F94:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(980));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    ctx.set_gpr(1, 2u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.lo);
    ctx.set_gpr(6, ctx.gpr[19] + ctx.gpr[21]);
    ctx.set_gpr(1, ctx.gpr[1] | 13392u);
    ctx.set_gpr(18, ctx.gpr[6] + ctx.gpr[1]);
    ctx.set_gpr(1, 2u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(1, ctx.gpr[1] | 13396u);
    ctx.set_gpr(17, ctx.gpr[6] + ctx.gpr[1]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(1, 2u << 16u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(1, ctx.gpr[1] | 13456u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_gpr(16, ctx.gpr[6] + ctx.gpr[1]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
        goto L_08846050;
    }
    goto L_08846004;
L_08846004:
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(13325)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1112));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[4] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[21]);
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2128)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2132)));
    ctx.fpr[3] = ctx.fpr[3] / ctx.fpr[4];
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[4];
    ctx.fpr[12] = ctx.fpr[2] - ctx.fpr[3];
    ctx.set_gpr(31, 0x0884604Cu);
    ctx.fpr[13] = ctx.fpr[0] - ctx.fpr[1];
    goto L_08844638;
L_0884604C:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    goto L_08846050;
L_08846050:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[4] != ctx.gpr[3]) {
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
        goto L_088460E0;
    }
    goto L_0884605C;
L_0884605C:
    ctx.set_gpr(5, ctx.gpr[19] + ctx.gpr[21]);
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(13325)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1112));
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(13326)));
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[21]);
    ctx.set_gpr(3, ctx.gpr[3] << 4u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2144)));
    ctx.fpr[6] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2128)));
    ctx.fpr[5] = ctx.fpr[1] / ctx.fpr[6];
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2148)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2132)));
    ctx.fpr[4] = ctx.fpr[4] / ctx.fpr[6];
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[6];
    ctx.fpr[3] = ctx.fpr[3] - ctx.fpr[4];
    ctx.fpr[2] = ctx.fpr[2] / ctx.fpr[6];
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    ctx.fpr[12] = ctx.fpr[5] + ctx.fpr[3];
    ctx.set_gpr(31, 0x088460DCu);
    ctx.fpr[13] = ctx.fpr[2] + ctx.fpr[0];
    goto L_08844638;
L_088460DC:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    goto L_088460E0;
L_088460E0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    if (ctx.gpr[4] != ctx.gpr[3]) {
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
        goto L_08846170;
    }
    goto L_088460EC;
L_088460EC:
    ctx.set_gpr(5, ctx.gpr[19] + ctx.gpr[21]);
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(13325)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1112));
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(13326)));
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[21]);
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2128)));
    ctx.fpr[6] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2132)));
    ctx.fpr[5] = ctx.fpr[2] / ctx.fpr[6];
    ctx.set_gpr(4, ctx.gpr[4] << 4u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[3]);
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2144)));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[6];
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2148)));
    ctx.fpr[3] = ctx.fpr[3] / ctx.fpr[6];
    ctx.fpr[4] = ctx.fpr[4] - ctx.fpr[5];
    ctx.fpr[2] = ctx.fpr[2] / ctx.fpr[6];
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    ctx.fpr[12] = ctx.fpr[4] - ctx.fpr[3];
    ctx.set_gpr(31, 0x0884616Cu);
    ctx.fpr[13] = ctx.fpr[2] + ctx.fpr[0];
    goto L_08844638;
L_0884616C:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    goto L_08846170;
L_08846170:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    if (ctx.gpr[4] != ctx.gpr[3]) {
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
        goto L_08846200;
    }
    goto L_0884617C;
L_0884617C:
    ctx.set_gpr(5, ctx.gpr[19] + ctx.gpr[21]);
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(13325)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1112));
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(13326)));
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[21]);
    ctx.set_gpr(3, ctx.gpr[3] << 4u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2144)));
    ctx.fpr[6] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2128)));
    ctx.fpr[5] = ctx.fpr[2] / ctx.fpr[6];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2148)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2132)));
    ctx.fpr[4] = ctx.fpr[4] / ctx.fpr[6];
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.fpr[2] = ctx.fpr[2] / ctx.fpr[6];
    ctx.fpr[3] = ctx.fpr[3] - ctx.fpr[4];
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[6];
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[2];
    ctx.fpr[12] = ctx.fpr[5] + ctx.fpr[3];
    ctx.set_gpr(31, 0x088461FCu);
    ctx.fpr[13] = ctx.fpr[1] - ctx.fpr[0];
    goto L_08844638;
L_088461FC:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    goto L_08846200;
L_08846200:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    if (ctx.gpr[4] != ctx.gpr[3]) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_08846290;
    }
    goto L_0884620C;
L_0884620C:
    ctx.set_gpr(6, ctx.gpr[19] + ctx.gpr[21]);
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(13325)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1112));
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(13326)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[21]);
    ctx.set_gpr(3, 16384u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(2128)));
    ctx.fpr[6] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(2132)));
    ctx.fpr[5] = ctx.fpr[0] / ctx.fpr[6];
    ctx.set_gpr(2, ctx.gpr[2] << 4u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[6]);
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2144)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.fpr[2] = ctx.fpr[2] / ctx.fpr[6];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2148)));
    ctx.fpr[3] = ctx.fpr[3] / ctx.fpr[6];
    ctx.fpr[4] = ctx.fpr[4] - ctx.fpr[5];
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[6];
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[2];
    ctx.fpr[12] = ctx.fpr[4] - ctx.fpr[3];
    ctx.set_gpr(31, 0x0884628Cu);
    ctx.fpr[13] = ctx.fpr[1] - ctx.fpr[0];
    goto L_08844638;
L_0884628C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08846290;
L_08846290:
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
L_088462B0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(980));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(1, 2u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 13392u);
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[1]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, 2u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 13396u);
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[12];
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[1]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[13];
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    goto L_08845F94;
L_088462FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.fpr[0] = std::bit_cast<float>(0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[12])) && ctx.fpr[0] == ctx.fpr[12]));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08846358;
      }
      goto L_08846320;
    }
L_08846320:
    ctx.set_fpr_bits(12, ctx.fpr_bits(13));
    ctx.set_gpr(31, 0x0884632Cu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(14));
    goto L_08845F94;
L_0884632C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(980));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, 2u << 16u);
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(13464), 0u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(13468), 0u);
      if (branch_taken) {
          goto L_088463D0;
      }
      goto L_08846358;
    }
L_08846358:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(980));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, 2u << 16u);
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(7, ctx.gpr[5] + ctx.gpr[16]);
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(4, ctx.gpr[3] + 0u);
    ctx.set_gpr(3, ctx.gpr[7] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13392)));
    ctx.set_gpr(5, 2u << 16u);
    ctx.set_gpr(4, ctx.gpr[7] + ctx.gpr[4]);
    ctx.fpr[0] = ctx.fpr[13] - ctx.fpr[0];
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[7] + ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[7] + ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(13472), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13396)));
    ctx.set_gpr(4, 2u << 16u);
    ctx.set_gpr(5, ctx.gpr[7] + ctx.gpr[5]);
    ctx.fpr[0] = ctx.fpr[14] - ctx.fpr[0];
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(4, ctx.gpr[7] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[7] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(13476), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(13480), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(13484), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(13464), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[7] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(13468), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088463D0;
L_088463D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088463E4:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[12])) && ctx.fpr[0] == ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(980));
        goto L_08846428;
    }
    goto L_088463F8;
L_088463F8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(980));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(1, 2u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 13436u);
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(7, ctx.lo);
    ctx.set_gpr(6, ctx.gpr[2] | 13436u);
    ctx.set_gpr(2, ctx.gpr[7] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[1]);
    ctx.set_gpr(2, 16256u << 16u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_0884644C;
      }
      goto L_08846428;
    }
L_08846428:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(1, 2u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 13436u);
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(7, ctx.lo);
    ctx.set_gpr(6, ctx.gpr[2] | 13436u);
    ctx.set_gpr(2, ctx.gpr[7] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[1]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0884644C;
L_0884644C:
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[7]);
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[7] + ctx.gpr[4]);
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(13440)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(13448)));
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(13444)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(13452)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    goto L_088447F4;
L_088464A0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(980));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(1, 2u << 16u);
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 13448u);
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(8, ctx.gpr[6] + ctx.gpr[4]);
    ctx.set_gpr(7, ctx.gpr[8] + ctx.gpr[1]);
    ctx.set_gpr(1, 2u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 13452u);
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(6, ctx.gpr[8] + ctx.gpr[1]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_gpr(3, ctx.gpr[8] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[8] + ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(13440)));
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13436)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 2u << 16u);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.set_gpr(2, ctx.gpr[8] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(13444)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    goto L_088447F4;
L_08846510:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[12])) && ctx.fpr[0] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
      if (branch_taken) {
          goto L_08846538;
      }
      goto L_08846528;
    }
L_08846528:
    ctx.set_gpr(31, 0x08846530u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(13));
    goto L_088463E4;
L_08846530:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_088465DC;
      }
      goto L_08846538;
    }
L_08846538:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(980));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(1, 2u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 13436u);
    ctx.set_gpr(6, 2u << 16u);
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(9, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(8, ctx.gpr[9] + ctx.gpr[1]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.fpr[0] = ctx.fpr[13] - ctx.fpr[0];
    ctx.set_gpr(2, ctx.gpr[9] + ctx.gpr[2]);
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(7, ctx.gpr[9] + ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(13496), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(6, ctx.gpr[9] + ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(13500), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, ctx.gpr[9] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(13488), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(13492), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(2, ctx.gpr[9] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(13440)));
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 2u << 16u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.set_gpr(2, ctx.gpr[9] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(13448)));
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[9] + ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(13444)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[9] + ctx.gpr[2]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(13452)));
    ctx.set_gpr(31, 0x088465D8u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    goto L_088447F4;
L_088465D8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_088465DC;
L_088465DC:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088465E4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(980));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(1, 2u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 13460u);
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[1]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08844918;
L_08846608:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(980));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(13458), static_cast<std::uint8_t>(ctx.gpr[6]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08846628:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(980));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(13432), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08844B6C;
L_08846648:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 5u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-16612), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, 5u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-16652), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(6, 5u << 16u);
    ctx.set_gpr(6, ctx.gpr[4] + ctx.gpr[6]);
    ctx.set_gpr(5, 5u << 16u);
    ctx.set_gpr(3, 5u << 16u);
    ctx.set_gpr(5, ctx.gpr[4] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-16648), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-16644), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-16640), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088466A8:
    ctx.fpr[1] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[1])) || ctx.fpr[12] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08846828;
      }
      goto L_088466BC;
    }
L_088466BC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[3] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 5u << 16u);
    ctx.set_gpr(1, 4u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 48856u);
    ctx.set_gpr(9, ctx.gpr[4] + ctx.gpr[1]);
    ctx.set_gpr(1, 4u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-16612), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(3, 5u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-16616), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(3, 5u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-16620), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.set_gpr(3, 5u << 16u);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(6, 5u << 16u);
    ctx.set_gpr(5, 5u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 48860u);
    ctx.set_gpr(6, ctx.gpr[4] + ctx.gpr[6]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-16652)));
    ctx.set_gpr(5, ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_gpr(3, 5u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-16684), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 5u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-16648)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.set_gpr(8, ctx.gpr[4] + ctx.gpr[1]);
    ctx.set_gpr(3, 5u << 16u);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-16644)));
    ctx.set_gpr(1, 4u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 48864u);
    ctx.set_gpr(3, 5u << 16u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-16640)));
    ctx.set_gpr(7, ctx.gpr[4] + ctx.gpr[1]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 5u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-16668), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    ctx.set_gpr(3, 5u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-16664), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.set_gpr(3, 5u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-16660), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, 5u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-16656), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 5u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-16684)));
    ctx.set_gpr(3, 5u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-16668)));
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.set_gpr(3, 5u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-16636), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-16664)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, 5u << 16u);
    ctx.set_gpr(3, 5u << 16u);
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[4] + ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-16632), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-16660)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 5u << 16u);
    ctx.set_gpr(5, ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    ctx.set_gpr(3, 5u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-16628), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-16656)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-16624), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08846828;
L_08846828:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08846830:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(16, ctx.gpr[9] + 0u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.set_gpr(21, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_0884687C;
      }
      goto L_08846874;
    }
L_08846874:
    ctx.set_gpr(31, 0x0884687Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    goto L_08846608;
L_0884687C:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[0]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[21]);
        goto L_088468B0;
    }
    goto L_08846890;
L_08846890:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088468ACu);
    ctx.set_gpr(9, ctx.gpr[16] + 0u);
    goto L_0884694C;
L_088468AC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[21]);
    goto L_088468B0;
L_088468B0:
    ctx.fpr[3] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(980));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[19])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[20]);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(13560), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(3, 2u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(13564), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(13540), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(13544), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(13548), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(3, 2u << 16u);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(13552), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884694C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[9] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08846990;
      }
      goto L_08846988;
    }
L_08846988:
    ctx.set_gpr(31, 0x08846990u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    goto L_08846608;
L_08846990:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(980));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(9, 2u << 16u);
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(10, ctx.gpr[2] + ctx.gpr[21]);
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[10] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(13524), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[10] + ctx.gpr[2]);
    ctx.set_gpr(9, ctx.gpr[10] + ctx.gpr[9]);
    ctx.set_gpr(3, ctx.gpr[10] + ctx.gpr[3]);
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[19]))));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(13528), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[10] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[18]))));
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(13532), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[17]))));
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(13536), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, 0x08846A18u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(13560), 0u);
    goto L_088449C8;
L_08846A18:
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
L_08846A3C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(980));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(10, 2u << 16u);
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[6]))));
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(12, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(11, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[12] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(13524), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(11, ctx.gpr[12] + ctx.gpr[11]);
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(10, ctx.gpr[12] + ctx.gpr[10]);
    ctx.set_gpr(3, ctx.gpr[12] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(13528), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, ctx.gpr[12] + ctx.gpr[2]);
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[7]))));
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[8]))));
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(13532), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[9]))));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(13536), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(13560), 0u);
    goto L_08844A78;
L_08846ABC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1112));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(16, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[16] + static_cast<std::uint32_t>(2060));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08846AF8u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    goto L_08844428;
L_08846AF8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08846B04u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    goto L_08844D98;
L_08846B04:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08846B10u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 148u, 0x08840894u>(ctx, &aot_mem) && ctx.pc == 0x08846B10u) goto L_08846B10;
    return;
L_08846B10:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(3164));
    ctx.set_gpr(31, 0x08846B1Cu);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08844384;
L_08846B1C:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(3168));
    ctx.set_gpr(31, 0x08846B28u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 238u, 0x0883D370u>(ctx, &aot_mem) && ctx.pc == 0x08846B28u) goto L_08846B28;
    return;
L_08846B28:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08846B38u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1112));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08846B38u) goto L_08846B38;
    return;
L_08846B38:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08846B50:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08846B6Cu);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    goto L_08844E48;
L_08846B6C:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(980));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(1, 2u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 13324u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(31, 0x08846B90u);
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[1]);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08846B90u) goto L_08846B90;
    return;
L_08846B90:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08846BA4:
    ctx.set_gpr(12, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, ctx.gpr[12] + ctx.gpr[6]);
    ctx.set_gpr(11, ctx.gpr[3] << 4u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(980));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(10, ctx.gpr[7] << 3u);
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(7, ctx.gpr[6] + ctx.gpr[4]);
    ctx.set_gpr(5, 2u << 16u);
    ctx.set_gpr(4, ctx.gpr[11] + ctx.gpr[7]);
    ctx.set_gpr(6, ctx.gpr[10] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(13568), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(13569), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(13572), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(4, ctx.gpr[12] + ctx.gpr[7]);
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(13968), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08846C04:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    ctx.set_gpr(16, ctx.gpr[8] + 0u);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08846C3Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    goto L_08846608;
L_08846C3C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(980));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(1, 2u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 13988u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(6, ctx.gpr[4] + ctx.gpr[19]);
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[1]);
    ctx.set_gpr(1, 2u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 13993u);
    ctx.set_gpr(4, ctx.gpr[6] + ctx.gpr[1]);
    ctx.set_gpr(1, 2u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 13998u);
    ctx.set_gpr(9, ctx.gpr[6] + ctx.gpr[1]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(1, 2u << 16u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(1, ctx.gpr[1] | 13968u);
    ctx.set_gpr(7, ctx.gpr[6] + ctx.gpr[1]);
    rt.memory().aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[8]));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[8]));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(6, ctx.gpr[5] + ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(16), 0u);
    ctx.set_gpr(5, ctx.gpr[4] + ctx.gpr[18]);
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(4, ctx.gpr[9] + ctx.gpr[18]);
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.set_gpr(3, ctx.gpr[7] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[16]));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
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
L_08846D14:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(980));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(7, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    ctx.set_gpr(7, ctx.gpr[7] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[7] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(14003), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(2, ctx.gpr[7] + ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(13392)));
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[7] + ctx.gpr[2]);
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(13396)));
    goto L_08845F94;
L_08846D4C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(980));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(13392)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08846D6C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(980));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(13396)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08846D8C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(980));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, 2u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13464)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08846DC0;
      }
      goto L_08846DBC;
    }
L_08846DBC:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08846DC0;
L_08846DC0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08846DC8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(980));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, 2u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13488)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08846DFC;
      }
      goto L_08846DF8;
    }
L_08846DF8:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08846DFC;
L_08846DFC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08846E04:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(980));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, 2u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13504)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08846E38;
      }
      goto L_08846E34;
    }
L_08846E34:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08846E38;
L_08846E38:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08846E40:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(980));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, 2u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13560)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08846E74;
      }
      goto L_08846E70;
    }
L_08846E70:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08846E74;
L_08846E74:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08846E7C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(980));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(13560), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08846E9C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(980));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(13988)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08846EC0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(980));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(14004)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08846EE0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(980));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(14292)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08846F00:
    ctx.set_gpr(2, 5u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-16612)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08846F10:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08846F30u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_08846D8C;
L_08846F30:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08846F40;
    }
    goto L_08846F38;
L_08846F38:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08846FE0;
      }
      goto L_08846F40;
    }
L_08846F40:
    ctx.set_gpr(31, 0x08846F48u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_08846DC8;
L_08846F48:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08846F58;
    }
    goto L_08846F50;
L_08846F50:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08846FE0;
      }
      goto L_08846F58;
    }
L_08846F58:
    ctx.set_gpr(31, 0x08846F60u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_08846E04;
L_08846F60:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08846F70;
    }
    goto L_08846F68;
L_08846F68:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08846FE0;
      }
      goto L_08846F70;
    }
L_08846F70:
    ctx.set_gpr(31, 0x08846F78u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_08846E40;
L_08846F78:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(16, 0u + 0u);
        goto L_08846F88;
    }
    goto L_08846F80;
L_08846F80:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08846FE0;
      }
      goto L_08846F88;
    }
L_08846F88:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    goto L_08846F8C;
L_08846F8C:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08846F98u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    goto L_08846E9C;
L_08846F98:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
        goto L_08846FB0;
    }
    goto L_08846FA8;
L_08846FA8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08846FE0;
      }
      goto L_08846FB0;
    }
L_08846FB0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 5 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08846F8C;
    }
    goto L_08846FBC;
L_08846FBC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08846FC8u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_08846EE0;
L_08846FC8:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
        goto L_08846FD8;
    }
    goto L_08846FD0;
L_08846FD0:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08846FE0;
      }
      goto L_08846FD8;
    }
L_08846FD8:
    ctx.set_gpr(31, 0x08846FE0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_08846EC0;
L_08846FE0:
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
L_08846FF8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(980));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(13458)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08847018:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(980));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(8, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    ctx.set_gpr(8, ctx.gpr[8] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[8] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(14288), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(2, ctx.gpr[8] + ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(14289), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[8] + ctx.gpr[2]);
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(13325)));
    ctx.set_gpr(2, 2u << 16u);
    ctx.set_gpr(2, ctx.gpr[8] + ctx.gpr[2]);
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(13326)));
    goto L_08845C2C;
L_0884705C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(980));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(4, ctx.gpr[6] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(13988), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08847080:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(980));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(4, ctx.gpr[6] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(13988), static_cast<std::uint8_t>(ctx.gpr[7]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088470A8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(980));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(14291), static_cast<std::uint8_t>(ctx.gpr[6]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088470C8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(980));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, ctx.lo);
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(4, ctx.gpr[6] + ctx.gpr[4]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(14292), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(14296), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088470F8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(980));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(14292), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08847118:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_fpr_bits(22, ctx.fpr_bits(12));
    ctx.set_fpr_bits(21, ctx.fpr_bits(13));
    ctx.set_fpr_bits(20, ctx.fpr_bits(14));
    ctx.set_gpr(31, 0x08847148u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 730u, 0x0883F334u>(ctx, &aot_mem) && ctx.pc == 0x08847148u) goto L_08847148;
    return;
L_08847148:
    ctx.set_gpr(31, 0x08847150u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    goto L_088472A8;
L_08847150:
    ctx.set_gpr(31, 0x08847158u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    goto L_088472A8;
L_08847158:
    ctx.set_fpr_bits(12, ctx.fpr_bits(22));
    ctx.set_fpr_bits(13, ctx.fpr_bits(21));
    ctx.set_fpr_bits(14, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x0884716Cu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 605u, 0x0883EAC8u>(ctx, &aot_mem) && ctx.pc == 0x0884716Cu) goto L_0884716C;
    return;
L_0884716C:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08847178u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    goto L_0884728C;
L_08847178:
    ctx.set_gpr(31, 0x08847180u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x08847180u) goto L_08847180;
    return;
L_08847180:
    ctx.set_gpr(31, 0x08847188u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08847284;
L_08847188:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(31, 0x08847198u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x08847198u) goto L_08847198;
    return;
L_08847198:
    ctx.set_gpr(31, 0x088471A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 181u, 0x08848C0Cu>(ctx, &aot_mem) && ctx.pc == 0x088471A0u) goto L_088471A0;
    return;
L_088471A0:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088471ACu);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    goto L_08847270;
L_088471AC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(124));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(31, 0x088471BCu);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x088471BCu) goto L_088471BC;
    return;
L_088471BC:
    ctx.set_gpr(2, 17392u << 16u);
    ctx.fpr[4] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[3] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[2] + ctx.fpr[0];
    ctx.set_gpr(2, 17288u << 16u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[1] = ctx.fpr[1] / ctx.fpr[3];
    ctx.fpr[0] = ctx.fpr[2] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[0] / ctx.fpr[3];
    ctx.fpr[0] = ctx.fpr[2] - ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(31, 0x08847218u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08847234;
L_08847218:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08847234:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08847248u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_0884725C;
L_08847248:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884725C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08847270:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(192)));
    ctx.set_gpr(2, ctx.gpr[2] << 6u);
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(64));
    (void)rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 870u, 0x08843A60u>(ctx, &aot_mem); return;
L_08847284:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884728C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088472A8:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088472B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-400));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(6, 2226u << 16u);
    ctx.set_fpr_bits(22, ctx.fpr_bits(12));
    ctx.set_fpr_bits(21, ctx.fpr_bits(13));
    ctx.set_fpr_bits(20, ctx.fpr_bits(14));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(16052));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(336));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(8));
    goto L_088472F0;
L_088472F0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_088472F0;
      }
      goto L_08847310;
    }
L_08847310:
    ctx.set_gpr(31, 0x08847318u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x08847318u) goto L_08847318;
    return;
L_08847318:
    ctx.set_gpr(31, 0x08847320u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(208));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x08847320u) goto L_08847320;
    return;
L_08847320:
    ctx.set_gpr(31, 0x08847328u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(272));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 161u, 0x08840958u>(ctx, &aot_mem) && ctx.pc == 0x08847328u) goto L_08847328;
    return;
L_08847328:
    ctx.set_gpr(31, 0x08847330u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    goto L_088472A8;
L_08847330:
    ctx.set_gpr(31, 0x08847338u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(132));
    goto L_088472A8;
L_08847338:
    ctx.set_gpr(31, 0x08847340u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    goto L_088472A8;
L_08847340:
    ctx.set_gpr(2, 49024u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(31, 0x0884735Cu);
    ctx.set_fpr_bits(13, ctx.fpr_bits(12));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 607u, 0x0883EAF0u>(ctx, &aot_mem) && ctx.pc == 0x0884735Cu) goto L_0884735C;
    return;
L_0884735C:
    ctx.set_gpr(31, 0x08847364u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 181u, 0x08848C0Cu>(ctx, &aot_mem) && ctx.pc == 0x08847364u) goto L_08847364;
    return;
L_08847364:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08847374u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 864u, 0x08843A1Cu>(ctx, &aot_mem) && ctx.pc == 0x08847374u) goto L_08847374;
    return;
L_08847374:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.set_gpr(31, 0x08847380u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 862u, 0x088439F4u>(ctx, &aot_mem) && ctx.pc == 0x08847380u) goto L_08847380;
    return;
L_08847380:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08847390u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(208));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x08847390u) goto L_08847390;
    return;
L_08847390:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(336));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_gpr(31, 0x088473ACu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    goto L_08847464;
L_088473AC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.set_gpr(31, 0x088473B8u);
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 124u, 0x08A019A0u>(ctx, &aot_mem) && ctx.pc == 0x088473B8u) goto L_088473B8;
    return;
L_088473B8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088473C8u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x088473C8u) goto L_088473C8;
    return;
L_088473C8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.set_gpr(31, 0x088473D4u);
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 124u, 0x08A019A0u>(ctx, &aot_mem) && ctx.pc == 0x088473D4u) goto L_088473D4;
    return;
L_088473D4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088473E4u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(208));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x088473E4u) goto L_088473E4;
    return;
L_088473E4:
    ctx.set_gpr(31, 0x088473ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 180u, 0x08848C00u>(ctx, &aot_mem) && ctx.pc == 0x088473ECu) goto L_088473EC;
    return;
L_088473EC:
    ctx.set_gpr(31, 0x088473F4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08847284;
L_088473F4:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08847400u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(272));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 124u, 0x08A019A0u>(ctx, &aot_mem) && ctx.pc == 0x08847400u) goto L_08847400;
    return;
L_08847400:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08847410u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(272));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x08847410u) goto L_08847410;
    return;
L_08847410:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0884741Cu);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(120));
    goto L_0884743C;
L_0884741C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(400));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884743C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08847450u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    goto L_0884728C;
L_08847450:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08847464:
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem); return;
L_0884746C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
      if (branch_taken) {
          goto L_08847540;
      }
      goto L_088474A0;
    }
L_088474A0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088474E8;
      }
      goto L_088474AC;
    }
L_088474AC:
    if (ctx.gpr[4] == 0u) {
    ctx.set_gpr(2, ctx.gpr[18] << 7u);
        goto L_088474BC;
    }
    goto L_088474B4;
L_088474B4:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + 0u);
      if (branch_taken) {
          goto L_0884757C;
      }
      goto L_088474BC;
    }
L_088474BC:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(2, 5u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-15404))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08847578;
      }
      goto L_088474DC;
    }
L_088474DC:
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08847578;
      }
      goto L_088474E8;
    }
L_088474E8:
    ctx.set_gpr(31, 0x088474F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 187u, 0x08848C54u>(ctx, &aot_mem) && ctx.pc == 0x088474F0u) goto L_088474F0;
    return;
L_088474F0:
    ctx.set_gpr(31, 0x088474F8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 1038u, 0x08AAFF54u>(ctx, &aot_mem) && ctx.pc == 0x088474F8u) goto L_088474F8;
    return;
L_088474F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08847578;
      }
      goto L_08847500;
    }
L_08847500:
    ctx.set_gpr(31, 0x08847508u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08847508u) goto L_08847508;
    return;
L_08847508:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08847518u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08844EF0;
L_08847518:
    ctx.set_gpr(3, ctx.gpr[18] << 7u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[19]);
    ctx.set_gpr(4, ctx.gpr[17] + ctx.gpr[3]);
    ctx.set_gpr(3, 5u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-15404), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08847578;
      }
      goto L_08847540;
    }
L_08847540:
    ctx.set_gpr(31, 0x08847548u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 176u, 0x08848BD0u>(ctx, &aot_mem) && ctx.pc == 0x08847548u) goto L_08847548;
    return;
L_08847548:
    ctx.set_gpr(31, 0x08847550u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08844F80;
L_08847550:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08847578;
      }
      goto L_08847558;
    }
L_08847558:
    ctx.set_gpr(2, ctx.gpr[17] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[19]);
    ctx.set_gpr(2, 5u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-16596), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(32), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0884757C;
      }
      goto L_08847578;
    }
L_08847578:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0884757C;
L_0884757C:
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
L_08847598:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, ctx.gpr[18] << 4u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.set_gpr(1, 4u << 16u);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(17, ctx.gpr[7] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(1, ctx.gpr[1] | 52436u);
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[1]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[3] != ctx.gpr[2]) {
    ctx.set_gpr(2, 0u + 0u);
        goto L_08847630;
    }
    goto L_088475F4;
L_088475F4:
    ctx.set_gpr(2, ctx.gpr[18] << 7u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(2, 5u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-15404))))));
    ctx.set_gpr(7, ctx.gpr[9] + 0u);
    ctx.set_gpr(31, 0x08847618u);
    ctx.set_gpr(6, ctx.gpr[8] + 0u);
    goto L_088457D0;
L_08847618:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[17] + ctx.gpr[19]);
    ctx.set_gpr(2, 5u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-16084), ctx.gpr[18]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08847630;
L_08847630:
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
L_0884764C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(1, 4u << 16u);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, ctx.gpr[5] << 7u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(1, ctx.gpr[1] | 50132u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[1]);
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(31, 0x08847680u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    goto L_0884771C;
L_08847680:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[5] == ctx.gpr[3]) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_088476A4;
    }
    goto L_08847690;
L_08847690:
    ctx.set_gpr(31, 0x08847698u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_08846ABC;
L_08847698:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_088476A4;
L_088476A4:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088476B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, ctx.gpr[5] << 4u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(1, 4u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(1, ctx.gpr[1] | 52436u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(6, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[1]);
    ctx.set_gpr(16, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[5] == ctx.gpr[3]) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08847710;
    }
    goto L_088476FC;
L_088476FC:
    ctx.set_gpr(31, 0x08847704u);
    // nop
    goto L_08846B50;
L_08847704:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08847710;
L_08847710:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884771C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08847728:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(980));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(6, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(6, ctx.gpr[2] + ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(13416), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(13420), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(13424), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(13428), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(14288)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(3, 2u << 16u);
        goto L_0884780C;
    }
    goto L_08847784;
L_08847784:
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(14289)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(3, 2u << 16u);
        goto L_088477D4;
    }
    goto L_08847798;
L_08847798:
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13400)));
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13404)));
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13408)));
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x088477CCu);
    ctx.fpr[15] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13412)));
    goto L_08844C14;
L_088477CC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_0884788C;
      }
      goto L_088477D4;
    }
L_088477D4:
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13400)));
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13412)));
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13408)));
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x08847804u);
    ctx.fpr[15] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13404)));
    goto L_08844C14;
L_08847804:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847888;
      }
      goto L_0884780C;
    }
L_0884780C:
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(14289)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(3, 2u << 16u);
        goto L_08847858;
    }
    goto L_0884781C;
L_0884781C:
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13408)));
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13404)));
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13400)));
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x08847850u);
    ctx.fpr[15] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13412)));
    goto L_08844C14;
L_08847850:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847888;
      }
      goto L_08847858;
    }
L_08847858:
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13408)));
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13412)));
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13400)));
    ctx.set_gpr(3, 2u << 16u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, 0x08847888u);
    ctx.fpr[15] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(13404)));
    goto L_08844C14;
L_08847888:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_0884788C;
L_0884788C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08847894:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    if (ctx.gpr[4] == ctx.gpr[3]) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_088478F4;
    }
    goto L_088478B4;
L_088478B4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088478E4;
      }
      goto L_088478C0;
    }
L_088478C0:
    ctx.set_gpr(31, 0x088478C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 178u, 0x08848BE8u>(ctx, &aot_mem) && ctx.pc == 0x088478C8u) goto L_088478C8;
    return;
L_088478C8:
    ctx.set_gpr(5, 2181u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088478D8u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-18380));
    goto L_08847E7C;
L_088478D8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_088478F0;
      }
      goto L_088478E4;
    }
L_088478E4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088478F0;
      }
      goto L_088478EC;
    }
L_088478EC:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    goto L_088478F0;
L_088478F0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_088478F4;
L_088478F4:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08847900:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08847910u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 178u, 0x08848BE8u>(ctx, &aot_mem) && ctx.pc == 0x08847910u) goto L_08847910;
    return;
L_08847910:
    ctx.set_gpr(5, 2180u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08847920u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(30868));
    goto L_08847ECC;
L_08847920:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0884792C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(190));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
      if (branch_taken) {
          goto L_08847968;
      }
      goto L_0884793C;
    }
L_0884793C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(222));
    if (ctx.gpr[4] == ctx.gpr[2]) {
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
        goto L_0884796C;
    }
    goto L_08847948;
L_08847948:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(266));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08847968;
      }
      goto L_08847954;
    }
L_08847954:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(333));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08847968;
      }
      goto L_08847960;
    }
L_08847960:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08847988;
      }
      goto L_08847968;
    }
L_08847968:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    goto L_0884796C;
L_0884796C:
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
        goto L_08847980;
    }
    goto L_08847974;
L_08847974:
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 1u));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    goto L_08847980;
L_08847980:
    ctx.set_gpr(31, 0x08847988u);
    // nop
    ctx.pc = 0x08B0DF64u;
    return;
L_08847988:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08847994:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(4, 2226u << 16u);
    ctx.set_gpr(5, 2180u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(16120));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(31200));
    ctx.set_gpr(31, 0x088479B4u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.pc = 0x08B0DD54u;
    return;
L_088479B4:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
        goto L_088479C4;
    }
    goto L_088479BC;
L_088479BC:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088479D4;
      }
      goto L_088479C4;
    }
L_088479C4:
    ctx.set_gpr(31, 0x088479CCu);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.pc = 0x08B0DF54u;
    return;
L_088479CC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(0u) ? 1u : 0u);
    ctx.set_gpr(2, 0u - ctx.gpr[2]);
    goto L_088479D4;
L_088479D4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088479E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 1u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08847A74;
      }
      goto L_088479FC;
    }
L_088479FC:
    ctx.set_gpr(31, 0x08847A04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08847A04u) goto L_08847A04;
    return;
L_08847A04:
    ctx.set_gpr(31, 0x08847A0Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08847AF4;
L_08847A0C:
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08847AAC;
    }
    goto L_08847A14;
L_08847A14:
    ctx.set_gpr(31, 0x08847A1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08847A1Cu) goto L_08847A1C;
    return;
L_08847A1C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08847A28u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    goto L_08847AE4;
L_08847A28:
    ctx.set_gpr(31, 0x08847A30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08847A30u) goto L_08847A30;
    return;
L_08847A30:
    ctx.set_gpr(31, 0x08847A38u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08847AC8;
L_08847A38:
    ctx.set_gpr(16, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08847A44u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08847A44u) goto L_08847A44;
    return;
L_08847A44:
    ctx.set_gpr(31, 0x08847A4Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    goto L_08847AC0;
L_08847A4C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08847A5Cu);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 280u, 0x08860F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08847A5Cu) goto L_08847A5C;
    return;
L_08847A5C:
    ctx.set_gpr(31, 0x08847A64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08847A64u) goto L_08847A64;
    return;
L_08847A64:
    ctx.set_gpr(31, 0x08847A6Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 528u, 0x08861EF8u>(ctx, &aot_mem) && ctx.pc == 0x08847A6Cu) goto L_08847A6C;
    return;
L_08847A6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847AA8;
      }
      goto L_08847A74;
    }
L_08847A74:
    ctx.set_gpr(2, 4u << 16u);
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08847AA8;
      }
      goto L_08847A84;
    }
L_08847A84:
    ctx.set_gpr(31, 0x08847A8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08847A8Cu) goto L_08847A8C;
    return;
L_08847A8C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08847A98u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_08847AE4;
L_08847A98:
    ctx.set_gpr(31, 0x08847AA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 182u, 0x08848C18u>(ctx, &aot_mem) && ctx.pc == 0x08847AA0u) goto L_08847AA0;
    return;
L_08847AA0:
    ctx.set_gpr(31, 0x08847AA8u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 528u, 0x08861EF8u>(ctx, &aot_mem) && ctx.pc == 0x08847AA8u) goto L_08847AA8;
    return;
L_08847AA8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08847AAC;
L_08847AAC:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08847AC0:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(24));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08847AC8:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4804)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-4808)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08847AE4:
    ctx.set_gpr(3, 1u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(-4816), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08847AF4:
    ctx.set_gpr(2, 1u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(-4816)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08847B04:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x08847B18u);
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    goto L_08847C14;
L_08847B18:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(50));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08847B28;
      }
      goto L_08847B24;
    }
L_08847B24:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08847B28;
L_08847B28:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16116)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08847B74;
      }
      goto L_08847B38;
    }
L_08847B38:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08847B9C;
      }
      goto L_08847B40;
    }
L_08847B40:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9036)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08847B9C;
      }
      goto L_08847B50;
    }
L_08847B50:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(31, 0x08847B60u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(9036), ctx.gpr[3]);
    ctx.pc = 0x08B0E0B4u;
    return;
L_08847B60:
    ctx.set_gpr(4, 2233u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(9040), ctx.gpr[2]);
    ctx.set_gpr(2, 2233u << 16u);
    { const bool branch_taken = 0u == 0u;
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(9044), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08847B9C;
      }
      goto L_08847B74;
    }
L_08847B74:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08847B9C;
      }
      goto L_08847B7C;
    }
L_08847B7C:
    ctx.set_gpr(2, 2233u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(9036), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(9040), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(9044), 0u);
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16116), 0u);
    goto L_08847B9C;
L_08847B9C:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9036)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08847BF8;
      }
      goto L_08847BAC;
    }
L_08847BAC:
    ctx.set_gpr(31, 0x08847BB4u);
    // nop
    ctx.pc = 0x08B0E0B4u;
    return;
L_08847BB4:
    ctx.set_gpr(3, 2233u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(9040)));
    ctx.set_gpr(3, 38u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 9632u);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08847BF8;
      }
      goto L_08847BD4;
    }
L_08847BD4:
    ctx.set_gpr(2, 2233u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(9036), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(9040), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(9044), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2226u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16116), ctx.gpr[3]);
    goto L_08847BF8;
L_08847BF8:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16116)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08847C14:
    // nop
    ctx.pc = 0x08B0DF84u; return;
L_08847C1C:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08847C24:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(4, 2226u << 16u);
    ctx.set_gpr(5, 2180u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(16136));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(31772));
    ctx.set_gpr(31, 0x08847C44u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.pc = 0x08B0DD54u;
    return;
L_08847C44:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
        goto L_08847C54;
    }
    goto L_08847C4C;
L_08847C4C:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08847C64;
      }
      goto L_08847C54;
    }
L_08847C54:
    ctx.set_gpr(31, 0x08847C5Cu);
    // nop
    ctx.pc = 0x08B0DF94u;
    return;
L_08847C5C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(0u) ? 1u : 0u);
    ctx.set_gpr(2, 0u - ctx.gpr[2]);
    goto L_08847C64;
L_08847C64:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08847C70:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08847C80u);
    // nop
    ctx.pc = 0x08B0DCB4u;
    return;
L_08847C80:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08847C90:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(4, 2226u << 16u);
    ctx.set_gpr(5, 2180u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(16148));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(31856));
    ctx.set_gpr(31, 0x08847CB0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.pc = 0x08B0DD54u;
    return;
L_08847CB0:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
        goto L_08847CC0;
    }
    goto L_08847CB8;
L_08847CB8:
    { const bool branch_taken = 0u == 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08847CD0;
      }
      goto L_08847CC0;
    }
L_08847CC0:
    ctx.set_gpr(31, 0x08847CC8u);
    // nop
    ctx.pc = 0x08B0DCBCu;
    return;
L_08847CC8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(0u) ? 1u : 0u);
    ctx.set_gpr(2, 0u - ctx.gpr[2]);
    goto L_08847CD0;
L_08847CD0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08847CDC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08847CECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 520u, 0x08AB9BE4u>(ctx, &aot_mem) && ctx.pc == 0x08847CECu) goto L_08847CEC;
    return;
L_08847CEC:
    ctx.set_gpr(31, 0x08847CF4u);
    // nop
    goto L_08847B04;
L_08847CF4:
    ctx.set_gpr(31, 0x08847CFCu);
    // nop
    ctx.pc = 0x08B0DDB4u;
    return;
L_08847CFC:
    ctx.set_gpr(31, 0x08847D04u);
    // nop
    ctx.pc = 0x08B0E0B4u;
    return;
L_08847D04:
    ctx.set_gpr(4, 2233u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(9048), ctx.gpr[2]);
    ctx.set_gpr(4, 2233u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(9052), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08847D20:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(3, 2233u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(9052)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(9048)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08847D34:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08847D50u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08847D50u) goto L_08847D50;
    return;
L_08847D50:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08847D64:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (ctx.gpr[16] == 0u) {
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
        goto L_08847D94;
    }
    goto L_08847D7C;
L_08847D7C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[5]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08847D90;
      }
      goto L_08847D88;
    }
L_08847D88:
    ctx.set_gpr(31, 0x08847D90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x08847D90u) goto L_08847D90;
    return;
L_08847D90:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08847D94;
L_08847D94:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08847DA4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08847DA8;
L_08847DA8:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
        goto L_08847DBC;
    }
    goto L_08847DB4;
L_08847DB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08847DCC;
      }
      goto L_08847DBC;
    }
L_08847DBC:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08847DA8;
      }
      goto L_08847DC8;
    }
L_08847DC8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08847DCC;
L_08847DCC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08847DD4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
        goto L_08847DF4;
    }
    goto L_08847DE8;
L_08847DE8:
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x08847DF0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08847DF0u) goto L_08847DF0;
    return;
L_08847DF0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    goto L_08847DF4;
L_08847DF4:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08847DFC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    goto L_08847E2C;
L_08847E2C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
        goto L_08847E50;
    }
    goto L_08847E38;
L_08847E38:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08847E4Cu);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08847DD4;
L_08847E4C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08847E50;
L_08847E50:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[17]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08847E2C;
      }
      goto L_08847E5C;
    }
L_08847E5C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08847E7C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08847E98u);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    goto L_08847DA4;
L_08847E98:
    ctx.set_gpr(3, ctx.gpr[2] << 5u);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[3]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08847ECC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08847EE8u);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    goto L_08847DA4;
L_08847EE8:
    ctx.set_gpr(3, ctx.gpr[2] << 5u);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08847F18:
    ctx.set_gpr(2, 2244u << 16u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(15764));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08847F24:
    ctx.set_gpr(2, 2244u << 16u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(21440));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08847F30:
    ctx.set_gpr(2, 2244u << 16u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(21604));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08847F3C:
    ctx.set_gpr(2, 2244u << 16u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(20836));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08847F48:
    ctx.set_gpr(2, 2244u << 16u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(21780));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08847F54:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(4, 2243u << 16u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(13));
    ctx.set_gpr(31, 0x08847F70u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15820));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 803u, 0x0884AF68u>(ctx, &aot_mem) && ctx.pc == 0x08847F70u) goto L_08847F70;
    return;
L_08847F70:
    ctx.set_gpr(4, 2243u << 16u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08847F80u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15820));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 813u, 0x0884B028u>(ctx, &aot_mem) && ctx.pc == 0x08847F80u) goto L_08847F80;
    return;
L_08847F80:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08847F90:
    ctx.set_gpr(4, 2243u << 16u);
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15820));
    (void)rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 823u, 0x0884B0E8u>(ctx, &aot_mem); return;
L_08847FA0:
    ctx.set_gpr(4, 2243u << 16u);
    ctx.set_gpr(5, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15820));
    (void)rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 838u, 0x0884B1D4u>(ctx, &aot_mem); return;
L_08847FB0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08847FC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 588u, 0x08A5E794u>(ctx, &aot_mem) && ctx.pc == 0x08847FC0u) goto L_08847FC0;
    return;
L_08847FC0:
    ctx.set_gpr(31, 0x08847FC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 28u, 0x088481A4u>(ctx, &aot_mem) && ctx.pc == 0x08847FC8u) goto L_08847FC8;
    return;
L_08847FC8:
    ctx.set_gpr(4, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08847FD8u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(16168));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 648u, 0x089A2DB8u>(ctx, &aot_mem) && ctx.pc == 0x08847FD8u) goto L_08847FD8;
    return;
L_08847FD8:
    ctx.set_gpr(4, 2226u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(16172));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(480));
    ctx.set_gpr(31, 0x08847FECu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(272));
    if (rt.invoke_chained_direct<&recomp_unit_0017_entry, 17u, 100u, 0x08848688u>(ctx, &aot_mem) && ctx.pc == 0x08847FECu) goto L_08847FEC;
    return;
L_08847FEC:
    ctx.set_gpr(4, 2244u << 16u);
    ctx.set_gpr(31, 0x08847FF8u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(10260));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 916u, 0x08AAF950u>(ctx, &aot_mem) && ctx.pc == 0x08847FF8u) goto L_08847FF8;
    return;
L_08847FF8:
    ctx.set_gpr(4, 2244u << 16u);
    ctx.set_gpr(31, 0x08848004u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8360));
    (void)rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 157u, 0x08AB091Cu>(ctx, &aot_mem);
    return;
}

void recomp_unit_0016(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0016_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_16(Runtime &runtime) {
    runtime.register_generated_unit(16u, 0x08844000u, 16384u, &recomp_unit_0016, &recomp_unit_0016_entry);
    runtime.register_function(0x08844000u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844014u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884402Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844034u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844048u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844064u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884406Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844084u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088440A0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088440A8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088440C8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088440E0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088440E8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088440F8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844104u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884411Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884412Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844134u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884413Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884414Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844168u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844174u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088441A8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088441B0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088441CCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088441FCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844204u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884420Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844214u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844220u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884422Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844238u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844244u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884424Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844254u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884425Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844264u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844270u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884427Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844284u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844290u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884429Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088442A4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088442ACu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088442BCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088442C8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088442D0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088442DCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088442E4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088442F0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088442FCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844308u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844310u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844314u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844320u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884432Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844338u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844344u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844348u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844368u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844370u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844378u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844384u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844398u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088443ACu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088443C4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088443D0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088443E0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088443E8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088443FCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884440Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844414u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844420u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844428u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844458u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844460u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844468u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844470u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884447Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844488u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844494u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088444A0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088444A8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088444B0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088444B8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088444C0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088444CCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088444D8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088444E0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088444ECu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088444F8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844500u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844508u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844518u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844524u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884452Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844538u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844540u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884454Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844558u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844564u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884456Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844570u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884457Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844588u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844594u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088445A0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088445A4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088445C4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088445E0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088445F4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844608u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844610u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844630u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844638u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844678u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844680u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884469Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088446A8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088446B4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088446C0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088446CCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088446D8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088446FCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844704u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844748u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844760u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844768u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844770u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088447B4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088447CCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088447D0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088447F4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844834u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884483Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844858u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844864u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844880u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884489Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088448A8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088448B4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088448BCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088448D8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088448F0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844918u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844948u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844950u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884495Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844968u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844970u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884497Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844988u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844994u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088449ACu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088449C8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088449ECu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844A20u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844A34u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844A3Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844A4Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844A54u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844A60u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844A64u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844A78u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844AC0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844AC8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844AD4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844AE0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844AE8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844B2Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844B44u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844B6Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844B7Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844B94u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844B98u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844BA8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844BB0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844BE0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844BECu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844BFCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844C00u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844C0Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844C14u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844C50u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844CD4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844CE0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844CE8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844CF4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844D00u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844D08u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844D1Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844D38u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844D40u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844D54u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844D70u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844D74u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844D98u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844DB8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844DC0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844DC8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844DD4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844DE8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844DF4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844DF8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844E08u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844E20u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844E30u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844E40u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844E48u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844E54u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844E5Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844E60u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844E6Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844E7Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844E84u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844E88u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844E94u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844E9Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844EBCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844EC0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844EE8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844EF0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844EF8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844F00u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844F08u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844F14u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844F20u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844F28u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844F30u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844F38u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844F54u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844F60u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844F78u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844F80u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844FACu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844FB8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844FC0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844FC8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844FD0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844FD8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844FE0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844FF0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08844FF8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845004u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884500Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845014u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884501Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845028u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845038u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845044u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845054u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845068u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845070u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845078u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088450A8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088450BCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088450D0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088450E4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088450F4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845128u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884513Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884514Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845180u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845194u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088451A4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088451F0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088451F4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845200u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845218u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884522Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884523Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845274u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845288u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088452C0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088452C8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845300u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845314u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845324u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884532Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845360u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845368u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088453A0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088453A8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088453CCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088453E0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088453F4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845404u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884543Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845450u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845488u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845490u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884549Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088454A8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088454C8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088454DCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088454ECu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088454F4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845500u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845514u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845520u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845540u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845548u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845554u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845560u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845580u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845588u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088455ACu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088455D4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088455E8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845608u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845628u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884563Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845644u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884564Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845654u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845658u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845664u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845674u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845680u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845688u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845690u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845698u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088456A0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088456A8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088456B8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088456C0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088456CCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088456D4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088456DCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088456E4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845708u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845728u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845734u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884574Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845750u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845758u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845764u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884576Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845770u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845790u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088457ACu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088457B8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088457D0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845808u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845810u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845818u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845828u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884584Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845858u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088458A4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088458C4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845B50u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845B64u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845B80u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845B98u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845BE4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845BF8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845BFCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845C2Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845C8Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845C94u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845CD4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845CF4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845DD8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845E64u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845E68u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845E8Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845EA4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845EB8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845ED4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845EDCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845EF4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845EFCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845F0Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845F28u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845F30u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845F48u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845F4Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845F64u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08845F94u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846004u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884604Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846050u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884605Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088460DCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088460E0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088460ECu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884616Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846170u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884617Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088461FCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846200u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884620Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884628Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846290u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088462B0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088462FCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846320u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884632Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846358u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088463D0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088463E4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088463F8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846428u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884644Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088464A0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846510u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846528u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846530u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846538u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088465D8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088465DCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088465E4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846608u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846628u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846648u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088466A8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088466BCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846828u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846830u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846874u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884687Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846890u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088468ACu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088468B0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884694Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846988u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846990u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846A18u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846A3Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846ABCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846AF8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846B04u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846B10u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846B1Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846B28u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846B38u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846B50u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846B6Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846B90u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846BA4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846C04u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846C3Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846D14u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846D4Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846D6Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846D8Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846DBCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846DC0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846DC8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846DF8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846DFCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846E04u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846E34u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846E38u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846E40u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846E70u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846E74u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846E7Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846E9Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846EC0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846EE0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846F00u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846F10u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846F30u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846F38u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846F40u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846F48u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846F50u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846F58u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846F60u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846F68u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846F70u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846F78u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846F80u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846F88u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846F8Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846F98u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846FA8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846FB0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846FBCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846FC8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846FD0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846FD8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846FE0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08846FF8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847018u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884705Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847080u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088470A8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088470C8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088470F8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847118u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847148u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847150u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847158u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884716Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847178u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847180u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847188u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847198u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088471A0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088471ACu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088471BCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847218u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847234u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847248u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884725Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847270u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847284u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884728Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088472A8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088472B0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088472F0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847310u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847318u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847320u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847328u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847330u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847338u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847340u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884735Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847364u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847374u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847380u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847390u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088473ACu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088473B8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088473C8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088473D4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088473E4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088473ECu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088473F4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847400u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847410u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884741Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884743Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847450u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847464u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884746Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088474A0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088474ACu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088474B4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088474BCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088474DCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088474E8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088474F0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088474F8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847500u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847508u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847518u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847540u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847548u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847550u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847558u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847578u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884757Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847598u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088475F4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847618u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847630u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884764Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847680u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847690u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847698u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088476A4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088476B4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088476FCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847704u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847710u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884771Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847728u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847784u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847798u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088477CCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088477D4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847804u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884780Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884781Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847850u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847858u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847888u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884788Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847894u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088478B4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088478C0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088478C8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088478D8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088478E4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088478ECu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088478F0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088478F4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847900u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847910u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847920u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884792Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884793Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847948u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847954u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847960u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847968u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x0884796Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847974u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847980u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847988u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847994u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088479B4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088479BCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088479C4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088479CCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088479D4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088479E0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x088479FCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847A04u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847A0Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847A14u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847A1Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847A28u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847A30u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847A38u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847A44u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847A4Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847A5Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847A64u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847A6Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847A74u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847A84u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847A8Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847A98u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847AA0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847AA8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847AACu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847AC0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847AC8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847AE4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847AF4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847B04u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847B18u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847B24u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847B28u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847B38u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847B40u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847B50u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847B60u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847B74u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847B7Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847B9Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847BACu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847BB4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847BD4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847BF8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847C14u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847C1Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847C24u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847C44u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847C4Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847C54u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847C5Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847C64u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847C70u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847C80u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847C90u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847CB0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847CB8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847CC0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847CC8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847CD0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847CDCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847CECu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847CF4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847CFCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847D04u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847D20u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847D34u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847D50u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847D64u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847D7Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847D88u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847D90u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847D94u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847DA4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847DA8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847DB4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847DBCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847DC8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847DCCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847DD4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847DE8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847DF0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847DF4u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847DFCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847E2Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847E38u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847E4Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847E50u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847E5Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847E7Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847E98u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847ECCu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847EE8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847F18u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847F24u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847F30u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847F3Cu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847F48u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847F54u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847F70u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847F80u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847F90u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847FA0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847FB0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847FC0u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847FC8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847FD8u, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847FECu, &recomp_unit_0016, "recomp_unit_0016");
    runtime.register_function(0x08847FF8u, &recomp_unit_0016, "recomp_unit_0016");
}
} // namespace psprecomp
