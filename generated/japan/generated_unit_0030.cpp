#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0030[3933] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 7, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0,
    0, 0, 10, 0, 0, 0, 11, 0, 12, 13, 0, 14, 15, 0, 16, 17, 0, 18, 19, 0, 20, 21, 0, 22, 23, 0, 24, 25, 0, 26, 0, 27,
    0, 28, 0, 29, 0, 0, 0, 0, 0, 30, 0, 31, 0, 32, 0, 33, 0, 34, 0, 35, 0, 36, 0, 37, 0, 38, 0, 39, 0, 40, 0, 41,
    0, 42, 0, 43, 0, 44, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0,
    0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 48, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 52, 0, 0, 0, 53, 0, 54, 55,
    0, 56, 57, 0, 58, 59, 0, 60, 61, 0, 62, 63, 0, 64, 65, 0, 66, 67, 0, 68, 0, 69, 0, 70, 0, 71, 0, 72, 0, 0, 0, 0,
    0, 73, 0, 74, 0, 75, 0, 76, 0, 77, 0, 78, 0, 79, 0, 80, 0, 81, 0, 82, 0, 83, 0, 84, 0, 85, 0, 86, 0, 87, 0, 88,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 91, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0,
    95, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 99, 0, 100,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 102, 0, 103, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    106, 0, 0, 0, 107, 0, 108, 109, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 112, 0, 113, 0, 114, 0, 115, 0, 116, 0,
    0, 117, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 120, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 123, 0, 124, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 129, 130, 0, 0, 0,
    0, 131, 0, 132, 0, 133, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 138, 0, 139,
    0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 148, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151,
    0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 154, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0,
    0, 158, 0, 159, 0, 0, 0, 0, 0, 160, 0, 161, 0, 162, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 165, 0, 166, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 167, 0, 168, 0, 0, 0, 169, 0, 170, 0, 0, 171, 0, 172, 0, 173, 0, 0, 174, 0, 175, 0, 0, 176, 0, 177, 0, 0, 178, 0,
    179, 0, 0, 0, 180, 0, 0, 181, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 184, 0, 0, 0, 185, 0, 186, 187, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 190, 0,
    0, 191, 0, 192, 0, 193, 0, 0, 194, 0, 195, 0, 0, 196, 0, 197, 0, 198, 0, 199, 0, 200, 0, 201, 0, 202, 0, 203, 0, 204, 0, 205,
    0, 0, 206, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 209, 0, 210, 0, 0, 211, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 216, 0, 217, 0, 218, 0, 219,
    0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 224, 225, 0, 0, 226, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 230, 0, 231, 232, 0,
    0, 233, 234, 0, 235, 0, 236, 0, 237, 0, 238, 0, 239, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 242, 0,
    243, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 245, 0, 0, 0, 0, 246, 0, 0, 247, 0, 248, 249, 0, 0, 250, 0, 0, 251, 0, 0, 0, 252, 253, 0, 254, 0, 0, 255, 0, 0, 256,
    0, 0, 257, 0, 0, 258, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 261, 0, 262, 0, 263, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 265,
    0, 0, 0, 0, 266, 0, 0, 0, 0, 267, 0, 268, 0, 0, 0, 0, 269, 0, 270, 0, 0, 0, 0, 271, 0, 272, 0, 0, 0, 0, 273, 0,
    274, 0, 275, 0, 0, 0, 0, 0, 0, 0, 0, 0, 276, 277, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 280, 281,
    0, 282, 0, 0, 0, 283, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 287, 0, 288, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 290, 0, 0, 0, 0, 0, 0, 0, 291, 0, 292, 0, 0, 0, 0, 0, 0, 0, 293, 0, 294, 0, 0, 0, 295, 296, 0, 0, 0, 0, 0,
    0, 0, 0, 297, 0, 298, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 301, 0, 302, 0, 0, 0, 0, 0, 0,
    303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 305, 0, 0, 306, 0, 307, 0, 0, 308, 309, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 315, 0, 0, 0, 0, 0, 316, 0, 317, 0, 318, 0, 319, 0, 320, 0, 321,
    0, 322, 0, 323, 0, 324, 0, 325, 0, 326, 0, 327, 0, 328, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0,
    0, 0, 332, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 335, 0, 336, 0, 337, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 338, 0, 339, 340, 0, 0, 0, 0, 0, 341, 0, 342, 0, 343, 0, 344, 0, 345, 0, 346, 0, 347, 0, 0,
    348, 0, 0, 0, 349, 0, 0, 0, 350, 0, 351, 0, 352, 0, 353, 0, 354, 0, 355, 0, 356, 0, 357, 0, 358, 0, 0, 0, 359, 0, 360, 361,
    0, 362, 363, 0, 364, 365, 0, 366, 367, 0, 368, 369, 0, 370, 371, 0, 372, 373, 0, 374, 375, 0, 0, 376, 0, 377, 0, 378, 0, 379, 0, 380,
    0, 381, 0, 382, 0, 383, 0, 384, 0, 385, 0, 386, 0, 387, 0, 388, 0, 389, 0, 390, 0, 391, 0, 392, 0, 393, 0, 394, 0, 395, 0, 396,
    0, 397, 0, 398, 0, 399, 0, 400, 0, 401, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 404, 0, 0, 405, 0, 0, 0, 406,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 416, 0, 0,
    0, 0, 417, 0, 418, 0, 0, 0, 0, 0, 419, 0, 420, 0, 0, 0, 0, 0, 0, 421, 0, 422, 0, 0, 0, 423, 0, 424, 0, 425, 0, 426,
    0, 0, 0, 0, 0, 427, 0, 0, 428, 0, 429, 0, 430, 0, 0, 0, 0, 431, 0, 0, 0, 0, 432, 0, 0, 0, 433, 0, 434, 0, 435, 0,
    0, 436, 0, 437, 0, 0, 0, 0, 438, 0, 0, 439, 0, 440, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 442, 0, 443, 0, 444, 0, 0, 0,
    0, 445, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 448, 0, 0, 449,
    0, 0, 450, 0, 451, 0, 0, 0, 452, 0, 453, 0, 454, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 457, 0, 0,
    0, 458, 0, 459, 0, 0, 0, 460, 0, 461, 0, 0, 462, 0, 463, 0, 464, 0, 465, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0,
    0, 0, 469, 0, 470, 0, 0, 0, 471, 0, 0, 0, 472, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 475, 0, 0,
    0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 478, 0, 479, 480, 0, 0, 0, 0,
    0, 0, 0, 481, 0, 0, 0, 0, 0, 482, 0, 483, 0, 484, 0, 0, 485, 0, 486, 0, 487, 0, 488, 0, 489, 0, 490, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 493, 0, 494, 0, 0, 0, 495, 0, 0, 0, 0, 0,
    0, 0, 496, 497, 0, 0, 0, 0, 0, 0, 498, 0, 0, 499, 0, 500, 0, 0, 0, 501, 0, 0, 0, 502, 0, 0, 503, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 505, 506, 0, 507, 0, 0, 508, 0, 509, 0, 510, 0, 0, 0, 0, 511, 0, 0,
    512, 0, 0, 513, 0, 514, 0, 515, 0, 0, 0, 0, 516, 0, 0, 517, 0, 0, 518, 0, 519, 0, 0, 0, 0, 0, 0, 520, 0, 521, 0, 0,
    522, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 525, 0, 0, 526, 0, 0, 0, 527, 0, 0, 0,
    0, 0, 528, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 532, 0, 0, 0,
    0, 0, 533, 0, 534, 0, 535, 0, 0, 0, 0, 0, 536, 0, 537, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 539, 0, 0, 0, 0, 0,
    540, 0, 541, 0, 542, 0, 0, 0, 0, 0, 543, 0, 544, 0, 0, 0, 545, 0, 0, 546, 0, 0, 0, 547, 0, 0, 548, 0, 549, 0, 0, 0,
    550, 0, 0, 551, 0, 0, 0, 552, 0, 0, 553, 0, 0, 0, 554, 0, 0, 555, 0, 0, 0, 556, 0, 0, 557, 0, 0, 0, 0, 0, 0, 558,
    0, 559, 0, 0, 0, 0, 0, 560, 0, 0, 0, 561, 0, 0, 562, 0, 0, 0, 563, 0, 0, 564, 0, 565, 0, 0, 0, 566, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 567, 0, 0, 0, 568, 0, 0, 569, 0, 0, 0, 570, 0, 0, 0, 0, 0, 0, 0, 0, 0, 571, 0, 0, 0, 572, 0,
    0, 573, 0, 0, 0, 574, 0, 0, 575, 0, 0, 0, 576, 0, 0, 577, 0, 0, 0, 578, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 579, 0, 580, 0, 0, 0, 0, 0, 581, 0, 0, 0, 582, 0,
    0, 583, 0, 0, 0, 584, 0, 0, 585, 0, 0, 0, 586, 0, 0, 587, 0, 0, 0, 588, 0, 0, 589, 0, 0, 0, 590, 0, 591, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 592, 0, 593, 0, 0, 0, 594, 0, 0, 0, 595, 0, 0, 0, 596,
};
void recomp_unit_0030_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0887C28Cu;
        entry_id = (entry_delta < 15732u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0030[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0887C28C;
    case 2u: goto L_0887C2A8;
    case 3u: goto L_0887C2B4;
    case 4u: goto L_0887C2BC;
    case 5u: goto L_0887C344;
    case 6u: goto L_0887C358;
    case 7u: goto L_0887C360;
    case 8u: goto L_0887C368;
    case 9u: goto L_0887C378;
    case 10u: goto L_0887C394;
    case 11u: goto L_0887C3A4;
    case 12u: goto L_0887C3AC;
    case 13u: goto L_0887C3B0;
    case 14u: goto L_0887C3B8;
    case 15u: goto L_0887C3BC;
    case 16u: goto L_0887C3C4;
    case 17u: goto L_0887C3C8;
    case 18u: goto L_0887C3D0;
    case 19u: goto L_0887C3D4;
    case 20u: goto L_0887C3DC;
    case 21u: goto L_0887C3E0;
    case 22u: goto L_0887C3E8;
    case 23u: goto L_0887C3EC;
    case 24u: goto L_0887C3F4;
    case 25u: goto L_0887C3F8;
    case 26u: goto L_0887C400;
    case 27u: goto L_0887C408;
    case 28u: goto L_0887C410;
    case 29u: goto L_0887C418;
    case 30u: goto L_0887C430;
    case 31u: goto L_0887C438;
    case 32u: goto L_0887C440;
    case 33u: goto L_0887C448;
    case 34u: goto L_0887C450;
    case 35u: goto L_0887C458;
    case 36u: goto L_0887C460;
    case 37u: goto L_0887C468;
    case 38u: goto L_0887C470;
    case 39u: goto L_0887C478;
    case 40u: goto L_0887C480;
    case 41u: goto L_0887C488;
    case 42u: goto L_0887C490;
    case 43u: goto L_0887C498;
    case 44u: goto L_0887C4A0;
    case 45u: goto L_0887C4A8;
    case 46u: goto L_0887C680;
    case 47u: goto L_0887C6A4;
    case 48u: goto L_0887C6B4;
    case 49u: goto L_0887C6BC;
    case 50u: goto L_0887C748;
    case 51u: goto L_0887C764;
    case 52u: goto L_0887C76C;
    case 53u: goto L_0887C77C;
    case 54u: goto L_0887C784;
    case 55u: goto L_0887C788;
    case 56u: goto L_0887C790;
    case 57u: goto L_0887C794;
    case 58u: goto L_0887C79C;
    case 59u: goto L_0887C7A0;
    case 60u: goto L_0887C7A8;
    case 61u: goto L_0887C7AC;
    case 62u: goto L_0887C7B4;
    case 63u: goto L_0887C7B8;
    case 64u: goto L_0887C7C0;
    case 65u: goto L_0887C7C4;
    case 66u: goto L_0887C7CC;
    case 67u: goto L_0887C7D0;
    case 68u: goto L_0887C7D8;
    case 69u: goto L_0887C7E0;
    case 70u: goto L_0887C7E8;
    case 71u: goto L_0887C7F0;
    case 72u: goto L_0887C7F8;
    case 73u: goto L_0887C810;
    case 74u: goto L_0887C818;
    case 75u: goto L_0887C820;
    case 76u: goto L_0887C828;
    case 77u: goto L_0887C830;
    case 78u: goto L_0887C838;
    case 79u: goto L_0887C840;
    case 80u: goto L_0887C848;
    case 81u: goto L_0887C850;
    case 82u: goto L_0887C858;
    case 83u: goto L_0887C860;
    case 84u: goto L_0887C868;
    case 85u: goto L_0887C870;
    case 86u: goto L_0887C878;
    case 87u: goto L_0887C880;
    case 88u: goto L_0887C888;
    case 89u: goto L_0887C944;
    case 90u: goto L_0887C958;
    case 91u: goto L_0887C960;
    case 92u: goto L_0887C968;
    case 93u: goto L_0887CB70;
    case 94u: goto L_0887CB84;
    case 95u: goto L_0887CB8C;
    case 96u: goto L_0887CB94;
    case 97u: goto L_0887CCA4;
    case 98u: goto L_0887CCE0;
    case 99u: goto L_0887CD00;
    case 100u: goto L_0887CD08;
    case 101u: goto L_0887CD30;
    case 102u: goto L_0887CD44;
    case 103u: goto L_0887CD4C;
    case 104u: goto L_0887CD54;
    case 105u: goto L_0887D040;
    case 106u: goto L_0887D08C;
    case 107u: goto L_0887D09C;
    case 108u: goto L_0887D0A4;
    case 109u: goto L_0887D0A8;
    case 110u: goto L_0887D0AC;
    case 111u: goto L_0887D0E0;
    case 112u: goto L_0887D0E4;
    case 113u: goto L_0887D0EC;
    case 114u: goto L_0887D0F4;
    case 115u: goto L_0887D0FC;
    case 116u: goto L_0887D104;
    case 117u: goto L_0887D110;
    case 118u: goto L_0887D120;
    case 119u: goto L_0887D140;
    case 120u: goto L_0887D148;
    case 121u: goto L_0887D154;
    case 122u: goto L_0887D16C;
    case 123u: goto L_0887D174;
    case 124u: goto L_0887D17C;
    case 125u: goto L_0887D1B4;
    case 126u: goto L_0887D1C4;
    case 127u: goto L_0887D1D8;
    case 128u: goto L_0887D1EC;
    case 129u: goto L_0887D1F8;
    case 130u: goto L_0887D1FC;
    case 131u: goto L_0887D210;
    case 132u: goto L_0887D218;
    case 133u: goto L_0887D220;
    case 134u: goto L_0887D22C;
    case 135u: goto L_0887D244;
    case 136u: goto L_0887D258;
    case 137u: goto L_0887D270;
    case 138u: goto L_0887D280;
    case 139u: goto L_0887D288;
    case 140u: goto L_0887D294;
    case 141u: goto L_0887D2A8;
    case 142u: goto L_0887D2B8;
    case 143u: goto L_0887D2C4;
    case 144u: goto L_0887D314;
    case 145u: goto L_0887D32C;
    case 146u: goto L_0887D334;
    case 147u: goto L_0887D374;
    case 148u: goto L_0887D3A0;
    case 149u: goto L_0887D3AC;
    case 150u: goto L_0887D3C0;
    case 151u: goto L_0887D408;
    case 152u: goto L_0887D410;
    case 153u: goto L_0887D44C;
    case 154u: goto L_0887D454;
    case 155u: goto L_0887D45C;
    case 156u: goto L_0887D470;
    case 157u: goto L_0887D484;
    case 158u: goto L_0887D490;
    case 159u: goto L_0887D498;
    case 160u: goto L_0887D4B0;
    case 161u: goto L_0887D4B8;
    case 162u: goto L_0887D4C0;
    case 163u: goto L_0887D4D0;
    case 164u: goto L_0887D4E0;
    case 165u: goto L_0887D4EC;
    case 166u: goto L_0887D4F4;
    case 167u: goto L_0887D594;
    case 168u: goto L_0887D59C;
    case 169u: goto L_0887D5AC;
    case 170u: goto L_0887D5B4;
    case 171u: goto L_0887D5C0;
    case 172u: goto L_0887D5C8;
    case 173u: goto L_0887D5D0;
    case 174u: goto L_0887D5DC;
    case 175u: goto L_0887D5E4;
    case 176u: goto L_0887D5F0;
    case 177u: goto L_0887D5F8;
    case 178u: goto L_0887D604;
    case 179u: goto L_0887D60C;
    case 180u: goto L_0887D61C;
    case 181u: goto L_0887D628;
    case 182u: goto L_0887D630;
    case 183u: goto L_0887D64C;
    case 184u: goto L_0887D654;
    case 185u: goto L_0887D664;
    case 186u: goto L_0887D66C;
    case 187u: goto L_0887D670;
    case 188u: goto L_0887D6C8;
    case 189u: goto L_0887D6FC;
    case 190u: goto L_0887D704;
    case 191u: goto L_0887D710;
    case 192u: goto L_0887D718;
    case 193u: goto L_0887D720;
    case 194u: goto L_0887D72C;
    case 195u: goto L_0887D734;
    case 196u: goto L_0887D740;
    case 197u: goto L_0887D748;
    case 198u: goto L_0887D750;
    case 199u: goto L_0887D758;
    case 200u: goto L_0887D760;
    case 201u: goto L_0887D768;
    case 202u: goto L_0887D770;
    case 203u: goto L_0887D778;
    case 204u: goto L_0887D780;
    case 205u: goto L_0887D788;
    case 206u: goto L_0887D794;
    case 207u: goto L_0887D7A0;
    case 208u: goto L_0887D840;
    case 209u: goto L_0887D84C;
    case 210u: goto L_0887D854;
    case 211u: goto L_0887D860;
    case 212u: goto L_0887D868;
    case 213u: goto L_0887D8B8;
    case 214u: goto L_0887D8BC;
    case 215u: goto L_0887D8E4;
    case 216u: goto L_0887D8F0;
    case 217u: goto L_0887D8F8;
    case 218u: goto L_0887D900;
    case 219u: goto L_0887D908;
    case 220u: goto L_0887D910;
    case 221u: goto L_0887D944;
    case 222u: goto L_0887D9B8;
    case 223u: goto L_0887D9C8;
    case 224u: goto L_0887D9D0;
    case 225u: goto L_0887D9D4;
    case 226u: goto L_0887D9E0;
    case 227u: goto L_0887D9F0;
    case 228u: goto L_0887DA48;
    case 229u: goto L_0887DA70;
    case 230u: goto L_0887DA78;
    case 231u: goto L_0887DA80;
    case 232u: goto L_0887DA84;
    case 233u: goto L_0887DA90;
    case 234u: goto L_0887DA94;
    case 235u: goto L_0887DA9C;
    case 236u: goto L_0887DAA4;
    case 237u: goto L_0887DAAC;
    case 238u: goto L_0887DAB4;
    case 239u: goto L_0887DABC;
    case 240u: goto L_0887DAC4;
    case 241u: goto L_0887DAF4;
    case 242u: goto L_0887DB04;
    case 243u: goto L_0887DB0C;
    case 244u: goto L_0887DB14;
    case 245u: goto L_0887DB90;
    case 246u: goto L_0887DBA4;
    case 247u: goto L_0887DBB0;
    case 248u: goto L_0887DBB8;
    case 249u: goto L_0887DBBC;
    case 250u: goto L_0887DBC8;
    case 251u: goto L_0887DBD4;
    case 252u: goto L_0887DBE4;
    case 253u: goto L_0887DBE8;
    case 254u: goto L_0887DBF0;
    case 255u: goto L_0887DBFC;
    case 256u: goto L_0887DC08;
    case 257u: goto L_0887DC14;
    case 258u: goto L_0887DC20;
    case 259u: goto L_0887DC2C;
    case 260u: goto L_0887DC40;
    case 261u: goto L_0887DC4C;
    case 262u: goto L_0887DC54;
    case 263u: goto L_0887DC5C;
    case 264u: goto L_0887DC64;
    case 265u: goto L_0887DC88;
    case 266u: goto L_0887DC9C;
    case 267u: goto L_0887DCB0;
    case 268u: goto L_0887DCB8;
    case 269u: goto L_0887DCCC;
    case 270u: goto L_0887DCD4;
    case 271u: goto L_0887DCE8;
    case 272u: goto L_0887DCF0;
    case 273u: goto L_0887DD04;
    case 274u: goto L_0887DD0C;
    case 275u: goto L_0887DD14;
    case 276u: goto L_0887DD3C;
    case 277u: goto L_0887DD40;
    case 278u: goto L_0887DD4C;
    case 279u: goto L_0887DD6C;
    case 280u: goto L_0887DD84;
    case 281u: goto L_0887DD88;
    case 282u: goto L_0887DD90;
    case 283u: goto L_0887DDA0;
    case 284u: goto L_0887DDB0;
    case 285u: goto L_0887DE58;
    case 286u: goto L_0887DE64;
    case 287u: goto L_0887DE94;
    case 288u: goto L_0887DE9C;
    case 289u: goto L_0887DEA0;
    case 290u: goto L_0887DF90;
    case 291u: goto L_0887DFB0;
    case 292u: goto L_0887DFB8;
    case 293u: goto L_0887DFD8;
    case 294u: goto L_0887DFE0;
    case 295u: goto L_0887DFF0;
    case 296u: goto L_0887DFF4;
    case 297u: goto L_0887E018;
    case 298u: goto L_0887E020;
    case 299u: goto L_0887E02C;
    case 300u: goto L_0887E060;
    case 301u: goto L_0887E068;
    case 302u: goto L_0887E070;
    case 303u: goto L_0887E08C;
    case 304u: goto L_0887E0C0;
    case 305u: goto L_0887E0D4;
    case 306u: goto L_0887E0E0;
    case 307u: goto L_0887E0E8;
    case 308u: goto L_0887E0F4;
    case 309u: goto L_0887E0F8;
    case 310u: goto L_0887E15C;
    case 311u: goto L_0887E168;
    case 312u: goto L_0887E3A0;
    case 313u: goto L_0887E518;
    case 314u: goto L_0887E53C;
    case 315u: goto L_0887E548;
    case 316u: goto L_0887E560;
    case 317u: goto L_0887E568;
    case 318u: goto L_0887E570;
    case 319u: goto L_0887E578;
    case 320u: goto L_0887E580;
    case 321u: goto L_0887E588;
    case 322u: goto L_0887E590;
    case 323u: goto L_0887E598;
    case 324u: goto L_0887E5A0;
    case 325u: goto L_0887E5A8;
    case 326u: goto L_0887E5B0;
    case 327u: goto L_0887E5B8;
    case 328u: goto L_0887E5C0;
    case 329u: goto L_0887E5D0;
    case 330u: goto L_0887E5E0;
    case 331u: goto L_0887E5F4;
    case 332u: goto L_0887E614;
    case 333u: goto L_0887E630;
    case 334u: goto L_0887E654;
    case 335u: goto L_0887E674;
    case 336u: goto L_0887E67C;
    case 337u: goto L_0887E684;
    case 338u: goto L_0887E6AC;
    case 339u: goto L_0887E6B4;
    case 340u: goto L_0887E6B8;
    case 341u: goto L_0887E6D0;
    case 342u: goto L_0887E6D8;
    case 343u: goto L_0887E6E0;
    case 344u: goto L_0887E6E8;
    case 345u: goto L_0887E6F0;
    case 346u: goto L_0887E6F8;
    case 347u: goto L_0887E700;
    case 348u: goto L_0887E70C;
    case 349u: goto L_0887E71C;
    case 350u: goto L_0887E72C;
    case 351u: goto L_0887E734;
    case 352u: goto L_0887E73C;
    case 353u: goto L_0887E744;
    case 354u: goto L_0887E74C;
    case 355u: goto L_0887E754;
    case 356u: goto L_0887E75C;
    case 357u: goto L_0887E764;
    case 358u: goto L_0887E76C;
    case 359u: goto L_0887E77C;
    case 360u: goto L_0887E784;
    case 361u: goto L_0887E788;
    case 362u: goto L_0887E790;
    case 363u: goto L_0887E794;
    case 364u: goto L_0887E79C;
    case 365u: goto L_0887E7A0;
    case 366u: goto L_0887E7A8;
    case 367u: goto L_0887E7AC;
    case 368u: goto L_0887E7B4;
    case 369u: goto L_0887E7B8;
    case 370u: goto L_0887E7C0;
    case 371u: goto L_0887E7C4;
    case 372u: goto L_0887E7CC;
    case 373u: goto L_0887E7D0;
    case 374u: goto L_0887E7D8;
    case 375u: goto L_0887E7DC;
    case 376u: goto L_0887E7E8;
    case 377u: goto L_0887E7F0;
    case 378u: goto L_0887E7F8;
    case 379u: goto L_0887E800;
    case 380u: goto L_0887E808;
    case 381u: goto L_0887E810;
    case 382u: goto L_0887E818;
    case 383u: goto L_0887E820;
    case 384u: goto L_0887E828;
    case 385u: goto L_0887E830;
    case 386u: goto L_0887E838;
    case 387u: goto L_0887E840;
    case 388u: goto L_0887E848;
    case 389u: goto L_0887E850;
    case 390u: goto L_0887E858;
    case 391u: goto L_0887E860;
    case 392u: goto L_0887E868;
    case 393u: goto L_0887E870;
    case 394u: goto L_0887E878;
    case 395u: goto L_0887E880;
    case 396u: goto L_0887E888;
    case 397u: goto L_0887E890;
    case 398u: goto L_0887E898;
    case 399u: goto L_0887E8A0;
    case 400u: goto L_0887E8A8;
    case 401u: goto L_0887E8B0;
    case 402u: goto L_0887E8BC;
    case 403u: goto L_0887E8DC;
    case 404u: goto L_0887E8EC;
    case 405u: goto L_0887E8F8;
    case 406u: goto L_0887E908;
    case 407u: goto L_0887E93C;
    case 408u: goto L_0887E94C;
    case 409u: goto L_0887E95C;
    case 410u: goto L_0887E96C;
    case 411u: goto L_0887E9D0;
    case 412u: goto L_0887E9E0;
    case 413u: goto L_0887EB2C;
    case 414u: goto L_0887EB54;
    case 415u: goto L_0887EB74;
    case 416u: goto L_0887EB80;
    case 417u: goto L_0887EB94;
    case 418u: goto L_0887EB9C;
    case 419u: goto L_0887EBB4;
    case 420u: goto L_0887EBBC;
    case 421u: goto L_0887EBD8;
    case 422u: goto L_0887EBE0;
    case 423u: goto L_0887EBF0;
    case 424u: goto L_0887EBF8;
    case 425u: goto L_0887EC00;
    case 426u: goto L_0887EC08;
    case 427u: goto L_0887EC20;
    case 428u: goto L_0887EC2C;
    case 429u: goto L_0887EC34;
    case 430u: goto L_0887EC3C;
    case 431u: goto L_0887EC50;
    case 432u: goto L_0887EC64;
    case 433u: goto L_0887EC74;
    case 434u: goto L_0887EC7C;
    case 435u: goto L_0887EC84;
    case 436u: goto L_0887EC90;
    case 437u: goto L_0887EC98;
    case 438u: goto L_0887ECAC;
    case 439u: goto L_0887ECB8;
    case 440u: goto L_0887ECC0;
    case 441u: goto L_0887ECDC;
    case 442u: goto L_0887ECEC;
    case 443u: goto L_0887ECF4;
    case 444u: goto L_0887ECFC;
    case 445u: goto L_0887ED10;
    case 446u: goto L_0887ED18;
    case 447u: goto L_0887F1E8;
    case 448u: goto L_0887F1FC;
    case 449u: goto L_0887F208;
    case 450u: goto L_0887F214;
    case 451u: goto L_0887F21C;
    case 452u: goto L_0887F22C;
    case 453u: goto L_0887F234;
    case 454u: goto L_0887F23C;
    case 455u: goto L_0887F244;
    case 456u: goto L_0887F270;
    case 457u: goto L_0887F280;
    case 458u: goto L_0887F290;
    case 459u: goto L_0887F298;
    case 460u: goto L_0887F2A8;
    case 461u: goto L_0887F2B0;
    case 462u: goto L_0887F2BC;
    case 463u: goto L_0887F2C4;
    case 464u: goto L_0887F2CC;
    case 465u: goto L_0887F2D4;
    case 466u: goto L_0887F2DC;
    case 467u: goto L_0887F5B4;
    case 468u: goto L_0887F5F0;
    case 469u: goto L_0887F614;
    case 470u: goto L_0887F61C;
    case 471u: goto L_0887F62C;
    case 472u: goto L_0887F63C;
    case 473u: goto L_0887F644;
    case 474u: goto L_0887F678;
    case 475u: goto L_0887F680;
    case 476u: goto L_0887F690;
    case 477u: goto L_0887F6D4;
    case 478u: goto L_0887F6EC;
    case 479u: goto L_0887F6F4;
    case 480u: goto L_0887F6F8;
    case 481u: goto L_0887F718;
    case 482u: goto L_0887F730;
    case 483u: goto L_0887F738;
    case 484u: goto L_0887F740;
    case 485u: goto L_0887F74C;
    case 486u: goto L_0887F754;
    case 487u: goto L_0887F75C;
    case 488u: goto L_0887F764;
    case 489u: goto L_0887F76C;
    case 490u: goto L_0887F774;
    case 491u: goto L_0887F7AC;
    case 492u: goto L_0887F7C4;
    case 493u: goto L_0887F7DC;
    case 494u: goto L_0887F7E4;
    case 495u: goto L_0887F7F4;
    case 496u: goto L_0887F814;
    case 497u: goto L_0887F818;
    case 498u: goto L_0887F834;
    case 499u: goto L_0887F840;
    case 500u: goto L_0887F848;
    case 501u: goto L_0887F858;
    case 502u: goto L_0887F868;
    case 503u: goto L_0887F874;
    case 504u: goto L_0887F8A0;
    case 505u: goto L_0887F8C4;
    case 506u: goto L_0887F8C8;
    case 507u: goto L_0887F8D0;
    case 508u: goto L_0887F8DC;
    case 509u: goto L_0887F8E4;
    case 510u: goto L_0887F8EC;
    case 511u: goto L_0887F900;
    case 512u: goto L_0887F90C;
    case 513u: goto L_0887F918;
    case 514u: goto L_0887F920;
    case 515u: goto L_0887F928;
    case 516u: goto L_0887F93C;
    case 517u: goto L_0887F948;
    case 518u: goto L_0887F954;
    case 519u: goto L_0887F95C;
    case 520u: goto L_0887F978;
    case 521u: goto L_0887F980;
    case 522u: goto L_0887F98C;
    case 523u: goto L_0887F994;
    case 524u: goto L_0887F9D0;
    case 525u: goto L_0887F9E0;
    case 526u: goto L_0887F9EC;
    case 527u: goto L_0887F9FC;
    case 528u: goto L_0887FA14;
    case 529u: goto L_0887FA24;
    case 530u: goto L_0887FB4C;
    case 531u: goto L_0887FB74;
    case 532u: goto L_0887FB7C;
    case 533u: goto L_0887FB94;
    case 534u: goto L_0887FB9C;
    case 535u: goto L_0887FBA4;
    case 536u: goto L_0887FBBC;
    case 537u: goto L_0887FBC4;
    case 538u: goto L_0887FBEC;
    case 539u: goto L_0887FBF4;
    case 540u: goto L_0887FC0C;
    case 541u: goto L_0887FC14;
    case 542u: goto L_0887FC1C;
    case 543u: goto L_0887FC34;
    case 544u: goto L_0887FC3C;
    case 545u: goto L_0887FC4C;
    case 546u: goto L_0887FC58;
    case 547u: goto L_0887FC68;
    case 548u: goto L_0887FC74;
    case 549u: goto L_0887FC7C;
    case 550u: goto L_0887FC8C;
    case 551u: goto L_0887FC98;
    case 552u: goto L_0887FCA8;
    case 553u: goto L_0887FCB4;
    case 554u: goto L_0887FCC4;
    case 555u: goto L_0887FCD0;
    case 556u: goto L_0887FCE0;
    case 557u: goto L_0887FCEC;
    case 558u: goto L_0887FD08;
    case 559u: goto L_0887FD10;
    case 560u: goto L_0887FD28;
    case 561u: goto L_0887FD38;
    case 562u: goto L_0887FD44;
    case 563u: goto L_0887FD54;
    case 564u: goto L_0887FD60;
    case 565u: goto L_0887FD68;
    case 566u: goto L_0887FD78;
    case 567u: goto L_0887FDA0;
    case 568u: goto L_0887FDB0;
    case 569u: goto L_0887FDBC;
    case 570u: goto L_0887FDCC;
    case 571u: goto L_0887FDF4;
    case 572u: goto L_0887FE04;
    case 573u: goto L_0887FE10;
    case 574u: goto L_0887FE20;
    case 575u: goto L_0887FE2C;
    case 576u: goto L_0887FE3C;
    case 577u: goto L_0887FE48;
    case 578u: goto L_0887FE58;
    case 579u: goto L_0887FED4;
    case 580u: goto L_0887FEDC;
    case 581u: goto L_0887FEF4;
    case 582u: goto L_0887FF04;
    case 583u: goto L_0887FF10;
    case 584u: goto L_0887FF20;
    case 585u: goto L_0887FF2C;
    case 586u: goto L_0887FF3C;
    case 587u: goto L_0887FF48;
    case 588u: goto L_0887FF58;
    case 589u: goto L_0887FF64;
    case 590u: goto L_0887FF74;
    case 591u: goto L_0887FF7C;
    case 592u: goto L_0887FFC4;
    case 593u: goto L_0887FFCC;
    case 594u: goto L_0887FFDC;
    case 595u: goto L_0887FFEC;
    case 596u: goto L_0887FFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0887C28C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0887C2A8u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 424u, 0x0887ACF0u>(ctx, &aot_mem) && ctx.pc == 0x0887C2A8u) goto L_0887C2A8;
    return;
L_0887C2A8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0887C2B4u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 224u, 0x08879ED0u>(ctx, &aot_mem) && ctx.pc == 0x0887C2B4u) goto L_0887C2B4;
    return;
L_0887C2B4:
    ctx.set_gpr(31, 0x0887C2BCu);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 426u, 0x0887AD0Cu>(ctx, &aot_mem) && ctx.pc == 0x0887C2BCu) goto L_0887C2BC;
    return;
L_0887C2BC:
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
L_0887C344:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0887C358u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 424u, 0x0887ACF0u>(ctx, &aot_mem) && ctx.pc == 0x0887C358u) goto L_0887C358;
    return;
L_0887C358:
    ctx.set_gpr(31, 0x0887C360u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 248u, 0x0887A168u>(ctx, &aot_mem) && ctx.pc == 0x0887C360u) goto L_0887C360;
    return;
L_0887C360:
    ctx.set_gpr(31, 0x0887C368u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 426u, 0x0887AD0Cu>(ctx, &aot_mem) && ctx.pc == 0x0887C368u) goto L_0887C368;
    return;
L_0887C368:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887C378:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0887C394u);
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 424u, 0x0887ACF0u>(ctx, &aot_mem) && ctx.pc == 0x0887C394u) goto L_0887C394;
    return;
L_0887C394:
    ctx.set_gpr(3, 2247u << 16u);
    ctx.set_gpr(16, ctx.gpr[3] + static_cast<std::uint32_t>(-18156));
    ctx.set_gpr(18, ctx.gpr[16] + static_cast<std::uint32_t>(832));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    goto L_0887C3A4;
L_0887C3A4:
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0887C4A0;
      }
      goto L_0887C3AC;
    }
L_0887C3AC:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52))))));
    goto L_0887C3B0;
L_0887C3B0:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[17];
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(52));
      if (branch_taken) {
          goto L_0887C490;
      }
      goto L_0887C3B8;
    }
L_0887C3B8:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(104))))));
    goto L_0887C3BC;
L_0887C3BC:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[17];
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(104));
      if (branch_taken) {
          goto L_0887C480;
      }
      goto L_0887C3C4;
    }
L_0887C3C4:
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(156))))));
    goto L_0887C3C8;
L_0887C3C8:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[17];
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(156));
      if (branch_taken) {
          goto L_0887C470;
      }
      goto L_0887C3D0;
    }
L_0887C3D0:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(208))))));
    goto L_0887C3D4;
L_0887C3D4:
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[17];
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(208));
      if (branch_taken) {
          goto L_0887C460;
      }
      goto L_0887C3DC;
    }
L_0887C3DC:
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(260))))));
    goto L_0887C3E0;
L_0887C3E0:
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[17];
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(260));
      if (branch_taken) {
          goto L_0887C450;
      }
      goto L_0887C3E8;
    }
L_0887C3E8:
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(312))))));
    goto L_0887C3EC;
L_0887C3EC:
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[17];
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(312));
      if (branch_taken) {
          goto L_0887C440;
      }
      goto L_0887C3F4;
    }
L_0887C3F4:
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(364))))));
    goto L_0887C3F8;
L_0887C3F8:
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[17];
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(364));
      if (branch_taken) {
          goto L_0887C430;
      }
      goto L_0887C400;
    }
L_0887C400:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(416));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    goto L_0887C408;
L_0887C408:
    if (ctx.gpr[4] != 0u) {
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
        goto L_0887C3A4;
    }
    goto L_0887C410;
L_0887C410:
    ctx.set_gpr(31, 0x0887C418u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 426u, 0x0887AD0Cu>(ctx, &aot_mem) && ctx.pc == 0x0887C418u) goto L_0887C418;
    return;
L_0887C418:
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
L_0887C430:
    ctx.set_gpr(31, 0x0887C438u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(416));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 248u, 0x0887A168u>(ctx, &aot_mem) && ctx.pc == 0x0887C438u) goto L_0887C438;
    return;
L_0887C438:
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    goto L_0887C408;
L_0887C440:
    ctx.set_gpr(31, 0x0887C448u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 248u, 0x0887A168u>(ctx, &aot_mem) && ctx.pc == 0x0887C448u) goto L_0887C448;
    return;
L_0887C448:
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(364))))));
    goto L_0887C3F8;
L_0887C450:
    ctx.set_gpr(31, 0x0887C458u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 248u, 0x0887A168u>(ctx, &aot_mem) && ctx.pc == 0x0887C458u) goto L_0887C458;
    return;
L_0887C458:
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(312))))));
    goto L_0887C3EC;
L_0887C460:
    ctx.set_gpr(31, 0x0887C468u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 248u, 0x0887A168u>(ctx, &aot_mem) && ctx.pc == 0x0887C468u) goto L_0887C468;
    return;
L_0887C468:
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(260))))));
    goto L_0887C3E0;
L_0887C470:
    ctx.set_gpr(31, 0x0887C478u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 248u, 0x0887A168u>(ctx, &aot_mem) && ctx.pc == 0x0887C478u) goto L_0887C478;
    return;
L_0887C478:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(208))))));
    goto L_0887C3D4;
L_0887C480:
    ctx.set_gpr(31, 0x0887C488u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 248u, 0x0887A168u>(ctx, &aot_mem) && ctx.pc == 0x0887C488u) goto L_0887C488;
    return;
L_0887C488:
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(156))))));
    goto L_0887C3C8;
L_0887C490:
    ctx.set_gpr(31, 0x0887C498u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 248u, 0x0887A168u>(ctx, &aot_mem) && ctx.pc == 0x0887C498u) goto L_0887C498;
    return;
L_0887C498:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(104))))));
    goto L_0887C3BC;
L_0887C4A0:
    ctx.set_gpr(31, 0x0887C4A8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 248u, 0x0887A168u>(ctx, &aot_mem) && ctx.pc == 0x0887C4A8u) goto L_0887C4A8;
    return;
L_0887C4A8:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52))))));
    goto L_0887C3B0;
L_0887C680:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0887C6A4u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 424u, 0x0887ACF0u>(ctx, &aot_mem) && ctx.pc == 0x0887C6A4u) goto L_0887C6A4;
    return;
L_0887C6A4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0887C6B4u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 276u, 0x0887A3F4u>(ctx, &aot_mem) && ctx.pc == 0x0887C6B4u) goto L_0887C6B4;
    return;
L_0887C6B4:
    ctx.set_gpr(31, 0x0887C6BCu);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 426u, 0x0887AD0Cu>(ctx, &aot_mem) && ctx.pc == 0x0887C6BCu) goto L_0887C6BC;
    return;
L_0887C6BC:
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
L_0887C748:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0887C764u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 424u, 0x0887ACF0u>(ctx, &aot_mem) && ctx.pc == 0x0887C764u) goto L_0887C764;
    return;
L_0887C764:
    ctx.set_gpr(31, 0x0887C76Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 616u, 0x08877B90u>(ctx, &aot_mem) && ctx.pc == 0x0887C76Cu) goto L_0887C76C;
    return;
L_0887C76C:
    ctx.set_gpr(3, 2247u << 16u);
    ctx.set_gpr(16, ctx.gpr[3] + static_cast<std::uint32_t>(-18156));
    ctx.set_gpr(18, ctx.gpr[16] + static_cast<std::uint32_t>(832));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    goto L_0887C77C;
L_0887C77C:
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0887C880;
      }
      goto L_0887C784;
    }
L_0887C784:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52))))));
    goto L_0887C788;
L_0887C788:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[17];
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(52));
      if (branch_taken) {
          goto L_0887C870;
      }
      goto L_0887C790;
    }
L_0887C790:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(104))))));
    goto L_0887C794;
L_0887C794:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[17];
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(104));
      if (branch_taken) {
          goto L_0887C860;
      }
      goto L_0887C79C;
    }
L_0887C79C:
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(156))))));
    goto L_0887C7A0;
L_0887C7A0:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[17];
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(156));
      if (branch_taken) {
          goto L_0887C850;
      }
      goto L_0887C7A8;
    }
L_0887C7A8:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(208))))));
    goto L_0887C7AC;
L_0887C7AC:
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[17];
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(208));
      if (branch_taken) {
          goto L_0887C840;
      }
      goto L_0887C7B4;
    }
L_0887C7B4:
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(260))))));
    goto L_0887C7B8;
L_0887C7B8:
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[17];
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(260));
      if (branch_taken) {
          goto L_0887C830;
      }
      goto L_0887C7C0;
    }
L_0887C7C0:
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(312))))));
    goto L_0887C7C4;
L_0887C7C4:
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[17];
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(312));
      if (branch_taken) {
          goto L_0887C820;
      }
      goto L_0887C7CC;
    }
L_0887C7CC:
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(364))))));
    goto L_0887C7D0;
L_0887C7D0:
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[17];
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(364));
      if (branch_taken) {
          goto L_0887C810;
      }
      goto L_0887C7D8;
    }
L_0887C7D8:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(416));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    goto L_0887C7E0;
L_0887C7E0:
    if (ctx.gpr[4] != 0u) {
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
        goto L_0887C77C;
    }
    goto L_0887C7E8;
L_0887C7E8:
    ctx.set_gpr(31, 0x0887C7F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 618u, 0x08877BACu>(ctx, &aot_mem) && ctx.pc == 0x0887C7F0u) goto L_0887C7F0;
    return;
L_0887C7F0:
    ctx.set_gpr(31, 0x0887C7F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 426u, 0x0887AD0Cu>(ctx, &aot_mem) && ctx.pc == 0x0887C7F8u) goto L_0887C7F8;
    return;
L_0887C7F8:
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
L_0887C810:
    ctx.set_gpr(31, 0x0887C818u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(416));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 301u, 0x0887A5E0u>(ctx, &aot_mem) && ctx.pc == 0x0887C818u) goto L_0887C818;
    return;
L_0887C818:
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    goto L_0887C7E0;
L_0887C820:
    ctx.set_gpr(31, 0x0887C828u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 301u, 0x0887A5E0u>(ctx, &aot_mem) && ctx.pc == 0x0887C828u) goto L_0887C828;
    return;
L_0887C828:
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(364))))));
    goto L_0887C7D0;
L_0887C830:
    ctx.set_gpr(31, 0x0887C838u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 301u, 0x0887A5E0u>(ctx, &aot_mem) && ctx.pc == 0x0887C838u) goto L_0887C838;
    return;
L_0887C838:
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(312))))));
    goto L_0887C7C4;
L_0887C840:
    ctx.set_gpr(31, 0x0887C848u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 301u, 0x0887A5E0u>(ctx, &aot_mem) && ctx.pc == 0x0887C848u) goto L_0887C848;
    return;
L_0887C848:
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(260))))));
    goto L_0887C7B8;
L_0887C850:
    ctx.set_gpr(31, 0x0887C858u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 301u, 0x0887A5E0u>(ctx, &aot_mem) && ctx.pc == 0x0887C858u) goto L_0887C858;
    return;
L_0887C858:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(208))))));
    goto L_0887C7AC;
L_0887C860:
    ctx.set_gpr(31, 0x0887C868u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 301u, 0x0887A5E0u>(ctx, &aot_mem) && ctx.pc == 0x0887C868u) goto L_0887C868;
    return;
L_0887C868:
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(156))))));
    goto L_0887C7A0;
L_0887C870:
    ctx.set_gpr(31, 0x0887C878u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 301u, 0x0887A5E0u>(ctx, &aot_mem) && ctx.pc == 0x0887C878u) goto L_0887C878;
    return;
L_0887C878:
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(104))))));
    goto L_0887C794;
L_0887C880:
    ctx.set_gpr(31, 0x0887C888u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 301u, 0x0887A5E0u>(ctx, &aot_mem) && ctx.pc == 0x0887C888u) goto L_0887C888;
    return;
L_0887C888:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52))))));
    goto L_0887C788;
L_0887C944:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0887C958u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 424u, 0x0887ACF0u>(ctx, &aot_mem) && ctx.pc == 0x0887C958u) goto L_0887C958;
    return;
L_0887C958:
    ctx.set_gpr(31, 0x0887C960u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 349u, 0x0887A83Cu>(ctx, &aot_mem) && ctx.pc == 0x0887C960u) goto L_0887C960;
    return;
L_0887C960:
    ctx.set_gpr(31, 0x0887C968u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 426u, 0x0887AD0Cu>(ctx, &aot_mem) && ctx.pc == 0x0887C968u) goto L_0887C968;
    return;
L_0887C968:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887CB70:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0887CB84u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 424u, 0x0887ACF0u>(ctx, &aot_mem) && ctx.pc == 0x0887CB84u) goto L_0887CB84;
    return;
L_0887CB84:
    ctx.set_gpr(31, 0x0887CB8Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 368u, 0x0887A94Cu>(ctx, &aot_mem) && ctx.pc == 0x0887CB8Cu) goto L_0887CB8C;
    return;
L_0887CB8C:
    ctx.set_gpr(31, 0x0887CB94u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 426u, 0x0887AD0Cu>(ctx, &aot_mem) && ctx.pc == 0x0887CB94u) goto L_0887CB94;
    return;
L_0887CB94:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887CCA4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    ctx.set_gpr(21, ctx.gpr[9] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.set_gpr(20, ctx.gpr[8] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0887CCE0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 424u, 0x0887ACF0u>(ctx, &aot_mem) && ctx.pc == 0x0887CCE0u) goto L_0887CCE0;
    return;
L_0887CCE0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(8, ctx.gpr[20] + 0u);
    ctx.set_gpr(9, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0887CD00u);
    ctx.set_gpr(10, ctx.gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 373u, 0x0887A984u>(ctx, &aot_mem) && ctx.pc == 0x0887CD00u) goto L_0887CD00;
    return;
L_0887CD00:
    ctx.set_gpr(31, 0x0887CD08u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 426u, 0x0887AD0Cu>(ctx, &aot_mem) && ctx.pc == 0x0887CD08u) goto L_0887CD08;
    return;
L_0887CD08:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887CD30:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0887CD44u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 424u, 0x0887ACF0u>(ctx, &aot_mem) && ctx.pc == 0x0887CD44u) goto L_0887CD44;
    return;
L_0887CD44:
    ctx.set_gpr(31, 0x0887CD4Cu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 422u, 0x0887ACB0u>(ctx, &aot_mem) && ctx.pc == 0x0887CD4Cu) goto L_0887CD4C;
    return;
L_0887CD4C:
    ctx.set_gpr(31, 0x0887CD54u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 426u, 0x0887AD0Cu>(ctx, &aot_mem) && ctx.pc == 0x0887CD54u) goto L_0887CD54;
    return;
L_0887CD54:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887D040:
    ctx.set_gpr(3, 2247u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-16008)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[30]);
    ctx.set_gpr(30, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[23]);
    ctx.set_gpr(23, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    ctx.set_gpr(22, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.set_gpr(21, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_0887D4E0;
      }
      goto L_0887D08C;
    }
L_0887D08C:
    ctx.set_gpr(20, 2247u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-15992)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0887D0E0;
      }
      goto L_0887D09C;
    }
L_0887D09C:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[5];
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0887D0E4;
      }
      goto L_0887D0A4;
    }
L_0887D0A4:
    ctx.set_gpr(12, 2247u << 16u);
    goto L_0887D0A8;
L_0887D0A8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(-16004)));
    goto L_0887D0AC;
L_0887D0AC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887D0E0:
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(4));
    goto L_0887D0E4;
L_0887D0E4:
    ctx.set_gpr(31, 0x0887D0ECu);
    ctx.set_gpr(18, 2247u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 368u, 0x0887A94Cu>(ctx, &aot_mem) && ctx.pc == 0x0887D0ECu) goto L_0887D0EC;
    return;
L_0887D0EC:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[19];
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_0887D4D0;
      }
      goto L_0887D0F4;
    }
L_0887D0F4:
    ctx.set_gpr(31, 0x0887D0FCu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-15992)));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 195u, 0x08879BE8u>(ctx, &aot_mem) && ctx.pc == 0x0887D0FCu) goto L_0887D0FC;
    return;
L_0887D0FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(12, 2247u << 16u);
      if (branch_taken) {
          goto L_0887D0A8;
      }
      goto L_0887D104;
    }
L_0887D104:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[5];
    ctx.set_gpr(11, 2247u << 16u);
      if (branch_taken) {
          goto L_0887D498;
      }
      goto L_0887D110;
    }
L_0887D110:
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-16004), ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[10];
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_0887D0AC;
      }
      goto L_0887D120;
    }
L_0887D120:
    ctx.set_gpr(16, 2247u << 16u);
    ctx.set_gpr(14, ctx.gpr[17] << 2u);
    ctx.set_gpr(15, ctx.gpr[16] + static_cast<std::uint32_t>(-17324));
    ctx.set_gpr(13, ctx.gpr[14] + ctx.gpr[15]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(15))))));
    if (ctx.gpr[12] == ctx.gpr[5]) {
    ctx.set_gpr(21, ctx.gpr[18] + static_cast<std::uint32_t>(280));
        goto L_0887D490;
    }
    goto L_0887D140;
L_0887D140:
    ctx.set_gpr(22, ctx.gpr[18] + static_cast<std::uint32_t>(280));
    ctx.set_gpr(23, ctx.gpr[18] + static_cast<std::uint32_t>(282));
    goto L_0887D148;
L_0887D148:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0887D314;
      }
      goto L_0887D154;
    }
L_0887D154:
    ctx.set_gpr(12, 2245u << 16u);
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(-26748)));
    ctx.set_gpr(21, ctx.gpr[22] << 9u);
    ctx.set_gpr(16, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(17, 2247u << 16u);
      if (branch_taken) {
          goto L_0887D1F8;
      }
      goto L_0887D16C;
    }
L_0887D16C:
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(15))))));
    goto L_0887D174;
L_0887D174:
    { const bool branch_taken = ctx.gpr[13] == ctx.gpr[22];
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
      if (branch_taken) {
          goto L_0887D2C4;
      }
      goto L_0887D17C;
    }
L_0887D17C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26752)));
    ctx.set_gpr(8, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(25, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, ctx.gpr[6] << 8u);
    ctx.set_gpr(9, ctx.gpr[7] | ctx.gpr[4]);
    ctx.set_gpr(10, ctx.gpr[11] << 16u);
    ctx.set_gpr(15, ctx.gpr[9] | ctx.gpr[10]);
    ctx.set_gpr(24, ctx.gpr[25] << 24u);
    ctx.set_gpr(31, 0x0887D1B4u);
    ctx.set_gpr(4, ctx.gpr[15] | ctx.gpr[24]);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 423u, 0x0887ACCCu>(ctx, &aot_mem) && ctx.pc == 0x0887D1B4u) goto L_0887D1B4;
    return;
L_0887D1B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, (ctx.gpr[2] & ~0x0000FFFFu) | ((0u & 0x0000FFFFu) << 0u));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-15996)));
      if (branch_taken) {
          goto L_0887D288;
      }
      goto L_0887D1C4;
    }
L_0887D1C4:
    ctx.set_gpr(3, ctx.gpr[14] << 1u);
    ctx.set_gpr(13, ctx.gpr[3] + ctx.gpr[23]);
    ctx.set_gpr(12, ctx.gpr[14] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store16(ctx.gpr[13] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-15996), ctx.gpr[12]);
    goto L_0887D1D8;
L_0887D1D8:
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-15996)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(15, static_cast<std::int32_t>(ctx.gpr[24]) < static_cast<std::int32_t>(ctx.gpr[25]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[15] == 0u;
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0887D258;
      }
      goto L_0887D1EC;
    }
L_0887D1EC:
    ctx.set_gpr(16, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    if (ctx.gpr[16] != 0u) {
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(15))))));
        goto L_0887D174;
    }
    goto L_0887D1F8;
L_0887D1F8:
    ctx.set_gpr(16, 2245u << 16u);
    goto L_0887D1FC;
L_0887D1FC:
    ctx.set_gpr(21, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-26752)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-15992)));
    ctx.set_gpr(31, 0x0887D210u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-26748)));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 276u, 0x0887A3F4u>(ctx, &aot_mem) && ctx.pc == 0x0887D210u) goto L_0887D210;
    return;
L_0887D210:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(5, 2247u << 16u);
      if (branch_taken) {
          goto L_0887D22C;
      }
      goto L_0887D218;
    }
L_0887D218:
    ctx.set_gpr(31, 0x0887D220u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-15992)));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 368u, 0x0887A94Cu>(ctx, &aot_mem) && ctx.pc == 0x0887D220u) goto L_0887D220;
    return;
L_0887D220:
    ctx.set_gpr(8, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-16004), ctx.gpr[2]);
    goto L_0887D0A4;
L_0887D22C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-15992)));
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(19, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-16004), ctx.gpr[22]);
    ctx.set_gpr(31, 0x0887D244u);
    ctx.set_gpr(17, 2247u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 248u, 0x0887A168u>(ctx, &aot_mem) && ctx.pc == 0x0887D244u) goto L_0887D244;
    return;
L_0887D244:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-15992), 0u);
    ctx.set_gpr(20, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-15996), 0u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-26748), 0u);
    goto L_0887D0A4;
L_0887D258:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-15992)));
    ctx.set_gpr(30, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(23, 2247u << 16u);
    ctx.set_gpr(18, 2245u << 16u);
    ctx.set_gpr(31, 0x0887D270u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-16004), ctx.gpr[30]);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 248u, 0x0887A168u>(ctx, &aot_mem) && ctx.pc == 0x0887D270u) goto L_0887D270;
    return;
L_0887D270:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-15996), 0u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-15992), 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-26748), 0u);
      if (branch_taken) {
          goto L_0887D0A4;
      }
      goto L_0887D280;
    }
L_0887D280:
    ctx.set_gpr(16, 2245u << 16u);
    goto L_0887D1FC;
L_0887D288:
    ctx.set_gpr(7, 2225u << 16u);
    ctx.set_gpr(31, 0x0887D294u);
    ctx.set_gpr(4, ctx.gpr[7] + static_cast<std::uint32_t>(13664));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 76u, 0x08879004u>(ctx, &aot_mem) && ctx.pc == 0x0887D294u) goto L_0887D294;
    return;
L_0887D294:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-15992)));
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(10, 2247u << 16u);
    ctx.set_gpr(31, 0x0887D2A8u);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-16004), ctx.gpr[11]);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 248u, 0x0887A168u>(ctx, &aot_mem) && ctx.pc == 0x0887D2A8u) goto L_0887D2A8;
    return;
L_0887D2A8:
    ctx.set_gpr(9, 2247u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-16004)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-15992), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-15996), 0u);
    goto L_0887D2B8;
L_0887D2B8:
    ctx.set_gpr(6, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-26748), 0u);
    goto L_0887D0AC;
L_0887D2C4:
    ctx.set_gpr(14, 2245u << 16u);
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(-26752)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-15996)));
    ctx.set_gpr(12, ctx.gpr[3] + ctx.gpr[13]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[2] << 8u);
    ctx.set_gpr(7, ctx.gpr[5] | ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[8] << 16u);
    ctx.set_gpr(9, ctx.gpr[25] << 2u);
    ctx.set_gpr(10, ctx.gpr[7] | ctx.gpr[6]);
    ctx.set_gpr(4, ctx.gpr[11] << 24u);
    ctx.set_gpr(24, ctx.gpr[10] | ctx.gpr[4]);
    ctx.set_gpr(15, ctx.gpr[9] + ctx.gpr[30]);
    ctx.set_gpr(14, ctx.gpr[25] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(0), ctx.gpr[24]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-15996), ctx.gpr[14]);
    goto L_0887D1D8;
L_0887D314:
    ctx.set_gpr(24, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(-26752)));
    ctx.set_gpr(19, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(13576));
    ctx.set_gpr(31, 0x0887D32Cu);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 648u, 0x08812A74u>(ctx, &aot_mem) && ctx.pc == 0x0887D32Cu) goto L_0887D32C;
    return;
L_0887D32C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(8, 2245u << 16u);
      if (branch_taken) {
          goto L_0887D484;
      }
      goto L_0887D334;
    }
L_0887D334:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-26752)));
    ctx.set_gpr(6, 1u << 16u);
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(5)));
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(6)));
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(7)));
    ctx.set_gpr(5, ctx.gpr[8] & 255u);
    ctx.set_gpr(7, ctx.gpr[3] << 8u);
    ctx.set_gpr(4, ctx.gpr[5] | ctx.gpr[7]);
    ctx.set_gpr(5, ctx.gpr[11] << 16u);
    ctx.set_gpr(9, ctx.gpr[4] | ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[10] << 24u);
    ctx.set_gpr(2, ctx.gpr[9] | ctx.gpr[4]);
    ctx.set_gpr(25, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[25] != 0u;
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0887D44C;
      }
      goto L_0887D374;
    }
L_0887D374:
    ctx.set_gpr(16, ctx.gpr[8] & 255u);
    ctx.set_gpr(15, ctx.gpr[16] | ctx.gpr[7]);
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(15)));
    ctx.set_gpr(14, ctx.gpr[15] | ctx.gpr[5]);
    ctx.set_gpr(13, ctx.gpr[14] | ctx.gpr[4]);
    ctx.set_gpr(7, ctx.gpr[13] & 65535u);
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[6]))));
    rt.memory().aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[13]));
    ctx.set_gpr(2, ctx.gpr[7] + static_cast<std::uint32_t>(72));
    { const bool branch_taken = ctx.gpr[12] == ctx.gpr[19];
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
      if (branch_taken) {
          goto L_0887D3AC;
      }
      goto L_0887D3A0;
    }
L_0887D3A0:
    ctx.set_gpr(19, ctx.gpr[7] << 1u);
    ctx.set_gpr(17, ctx.gpr[19] + static_cast<std::uint32_t>(284));
    ctx.set_gpr(2, ctx.gpr[17] >> 2u);
    goto L_0887D3AC;
L_0887D3AC:
    ctx.set_gpr(9, ctx.gpr[2] << 2u);
    ctx.set_gpr(25, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[6]))));
    ctx.set_gpr(24, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[25] == ctx.gpr[24];
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
      if (branch_taken) {
          goto L_0887D410;
      }
      goto L_0887D3C0;
    }
L_0887D3C0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26752)));
    ctx.set_gpr(8, ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(6, ctx.gpr[3] << 8u);
    ctx.set_gpr(10, ctx.gpr[7] | ctx.gpr[6]);
    ctx.set_gpr(4, ctx.gpr[11] << 16u);
    ctx.set_gpr(24, ctx.gpr[10] | ctx.gpr[4]);
    ctx.set_gpr(25, ctx.gpr[9] << 24u);
    ctx.set_gpr(16, ctx.gpr[24] | ctx.gpr[25]);
    ctx.set_gpr(19, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 31u));
    ctx.set_gpr(17, ctx.gpr[19] >> 21u);
    ctx.set_gpr(15, ctx.gpr[16] + ctx.gpr[17]);
    ctx.set_gpr(21, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[15]) >> 11u));
    rt.memory().aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[21]));
    goto L_0887D408;
L_0887D408:
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(3));
    goto L_0887D154;
L_0887D410:
    ctx.set_gpr(14, 2245u << 16u);
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[14] + static_cast<std::uint32_t>(-26752)));
    ctx.set_gpr(12, ctx.gpr[13] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(22, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[22] << 8u);
    ctx.set_gpr(6, ctx.gpr[5] | ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[8] << 16u);
    ctx.set_gpr(4, ctx.gpr[6] | ctx.gpr[3]);
    ctx.set_gpr(11, ctx.gpr[7] << 24u);
    ctx.set_gpr(10, ctx.gpr[4] | ctx.gpr[11]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    goto L_0887D408;
L_0887D44C:
    ctx.set_gpr(21, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[21] + static_cast<std::uint32_t>(13732));
    goto L_0887D454;
L_0887D454:
    ctx.set_gpr(31, 0x0887D45Cu);
    ctx.set_gpr(30, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 76u, 0x08879004u>(ctx, &aot_mem) && ctx.pc == 0x0887D45Cu) goto L_0887D45C;
    return;
L_0887D45C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-15992)));
    ctx.set_gpr(23, 2247u << 16u);
    ctx.set_gpr(22, 2247u << 16u);
    ctx.set_gpr(31, 0x0887D470u);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-16004), ctx.gpr[30]);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 248u, 0x0887A168u>(ctx, &aot_mem) && ctx.pc == 0x0887D470u) goto L_0887D470;
    return;
L_0887D470:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-16004)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-15992), 0u);
    ctx.set_gpr(20, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-15996), 0u);
    goto L_0887D2B8;
L_0887D484:
    ctx.set_gpr(18, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(13788));
    goto L_0887D454;
L_0887D490:
    ctx.set_gpr(30, ctx.gpr[18] + static_cast<std::uint32_t>(284));
    goto L_0887D148;
L_0887D498:
    ctx.set_gpr(8, 2245u << 16u);
    ctx.set_gpr(7, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-26748)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-26752)));
    ctx.set_gpr(31, 0x0887D4B0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-15992)));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 276u, 0x0887A3F4u>(ctx, &aot_mem) && ctx.pc == 0x0887D4B0u) goto L_0887D4B0;
    return;
L_0887D4B0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(12, 2247u << 16u);
      if (branch_taken) {
          goto L_0887D0A8;
      }
      goto L_0887D4B8;
    }
L_0887D4B8:
    ctx.set_gpr(31, 0x0887D4C0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-15992)));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 248u, 0x0887A168u>(ctx, &aot_mem) && ctx.pc == 0x0887D4C0u) goto L_0887D4C0;
    return;
L_0887D4C0:
    ctx.set_gpr(9, 2247u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-16004), ctx.gpr[19]);
    goto L_0887D0AC;
L_0887D4D0:
    ctx.set_gpr(6, 2247u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-16004), ctx.gpr[2]);
    goto L_0887D0AC;
L_0887D4E0:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(31, 0x0887D4ECu);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(13844));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 76u, 0x08879004u>(ctx, &aot_mem) && ctx.pc == 0x0887D4ECu) goto L_0887D4EC;
    return;
L_0887D4EC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-3));
    goto L_0887D0AC;
L_0887D4F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[30]);
    ctx.set_gpr(30, 2247u << 16u);
    ctx.set_gpr(11, ctx.gpr[30] + static_cast<std::uint32_t>(-16044));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[23]);
    ctx.set_gpr(23, 2247u << 16u);
    ctx.set_gpr(2, ctx.gpr[23] + static_cast<std::uint32_t>(-16300));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.set_gpr(21, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.set_gpr(20, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-16012)));
    ctx.set_gpr(12, rt.memory().aot_load16(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 31u));
    ctx.set_gpr(13, ctx.gpr[14] >> 28u);
    ctx.set_gpr(3, ctx.gpr[10] + ctx.gpr[13]);
    ctx.set_gpr(3, (ctx.gpr[3] & ~0x0000000Fu) | ((0u & 0x0000000Fu) << 0u));
    ctx.set_gpr(9, ctx.gpr[10] - ctx.gpr[3]);
    ctx.set_gpr(8, ctx.gpr[9] << 4u);
    ctx.set_gpr(10, ctx.gpr[8] + ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[12] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[7]));
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    rt.memory().aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[7]));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(-16012), ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[22]));
    rt.memory().aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0887D794;
      }
      goto L_0887D594;
    }
L_0887D594:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.set_gpr(17, 15u << 16u);
      if (branch_taken) {
          goto L_0887D788;
      }
      goto L_0887D59C;
    }
L_0887D59C:
    ctx.set_gpr(16, ctx.gpr[17] | 65535u);
    ctx.set_gpr(15, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[15] != 0u) {
    ctx.set_gpr(18, 2225u << 16u);
        goto L_0887D780;
    }
    goto L_0887D5AC;
L_0887D5AC:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(24, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0887D768;
      }
      goto L_0887D5B4;
    }
L_0887D5B4:
    ctx.set_gpr(25, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1))))));
    { const bool branch_taken = ctx.gpr[25] == ctx.gpr[24];
    ctx.set_gpr(5, 0u + 0u);
      if (branch_taken) {
          goto L_0887D6C8;
      }
      goto L_0887D5C0;
    }
L_0887D5C0:
    ctx.set_gpr(31, 0x0887D5C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 616u, 0x08877B90u>(ctx, &aot_mem) && ctx.pc == 0x0887D5C8u) goto L_0887D5C8;
    return;
L_0887D5C8:
    ctx.set_gpr(31, 0x0887D5D0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 715u, 0x08882964u>(ctx, &aot_mem) && ctx.pc == 0x0887D5D0u) goto L_0887D5D0;
    return;
L_0887D5D0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0887D5DCu);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 199u, 0x08879C20u>(ctx, &aot_mem) && ctx.pc == 0x0887D5DCu) goto L_0887D5DC;
    return;
L_0887D5DC:
    ctx.set_gpr(31, 0x0887D5E4u);
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 618u, 0x08877BACu>(ctx, &aot_mem) && ctx.pc == 0x0887D5E4u) goto L_0887D5E4;
    return;
L_0887D5E4:
    ctx.set_gpr(4, ctx.gpr[16] | ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0887D760;
      }
      goto L_0887D5F0;
    }
L_0887D5F0:
    ctx.set_gpr(31, 0x0887D5F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 616u, 0x08877B90u>(ctx, &aot_mem) && ctx.pc == 0x0887D5F8u) goto L_0887D5F8;
    return;
L_0887D5F8:
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[22] != 0u) {
    ctx.set_gpr(20, 2225u << 16u);
        goto L_0887D748;
    }
    goto L_0887D604;
L_0887D604:
    ctx.set_gpr(31, 0x0887D60Cu);
    ctx.set_gpr(17, ctx.gpr[19] << 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 618u, 0x08877BACu>(ctx, &aot_mem) && ctx.pc == 0x0887D60Cu) goto L_0887D60C;
    return;
L_0887D60C:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0887D61Cu);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 726u, 0x0889F958u>(ctx, &aot_mem) && ctx.pc == 0x0887D61Cu) goto L_0887D61C;
    return;
L_0887D61C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_0887D6C8;
      }
      goto L_0887D628;
    }
L_0887D628:
    ctx.set_gpr(31, 0x0887D630u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 616u, 0x08877B90u>(ctx, &aot_mem) && ctx.pc == 0x0887D630u) goto L_0887D630;
    return;
L_0887D630:
    ctx.set_gpr(9, 2247u << 16u);
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-16000)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[7];
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
      if (branch_taken) {
          goto L_0887D734;
      }
      goto L_0887D64C;
    }
L_0887D64C:
    ctx.set_gpr(31, 0x0887D654u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 618u, 0x08877BACu>(ctx, &aot_mem) && ctx.pc == 0x0887D654u) goto L_0887D654;
    return;
L_0887D654:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0887D664u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 261u, 0x0887A2F4u>(ctx, &aot_mem) && ctx.pc == 0x0887D664u) goto L_0887D664;
    return;
L_0887D664:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_0887D6FC;
      }
      goto L_0887D66C;
    }
L_0887D66C:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    goto L_0887D670;
L_0887D670:
    ctx.set_gpr(24, ctx.gpr[30] + static_cast<std::uint32_t>(-16044));
    ctx.set_gpr(6, ctx.gpr[23] + static_cast<std::uint32_t>(-16300));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-16012)));
    ctx.set_gpr(30, rt.memory().aot_load16(ctx.gpr[24] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(17, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 31u));
    ctx.set_gpr(15, ctx.gpr[17] >> 28u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[15]);
    ctx.set_gpr(3, (ctx.gpr[3] & ~0x0000000Fu) | ((0u & 0x0000000Fu) << 0u));
    ctx.set_gpr(13, ctx.gpr[5] - ctx.gpr[3]);
    ctx.set_gpr(14, ctx.gpr[13] << 4u);
    ctx.set_gpr(23, ctx.gpr[14] + ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[13] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(12), ctx.gpr[20]);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(-16012), ctx.gpr[2]);
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    rt.memory().aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[21]));
    rt.memory().aot_store16(ctx.gpr[23] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[30]));
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(8), ctx.gpr[19]);
    goto L_0887D6C8;
L_0887D6C8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887D6FC:
    ctx.set_gpr(31, 0x0887D704u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 616u, 0x08877B90u>(ctx, &aot_mem) && ctx.pc == 0x0887D704u) goto L_0887D704;
    return;
L_0887D704:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[4] != 0u) {
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_0887D720;
    }
    goto L_0887D710;
L_0887D710:
    ctx.set_gpr(31, 0x0887D718u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 618u, 0x08877BACu>(ctx, &aot_mem) && ctx.pc == 0x0887D718u) goto L_0887D718;
    return;
L_0887D718:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    goto L_0887D670;
L_0887D720:
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[12];
    ctx.set_gpr(31, 0x0887D72Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887D72Cu) goto L_0887D72C;
    return;
L_0887D72C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), 0u);
    goto L_0887D710;
L_0887D734:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0887D740u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 142u, 0x088797D4u>(ctx, &aot_mem) && ctx.pc == 0x0887D740u) goto L_0887D740;
    return;
L_0887D740:
    // nop
    goto L_0887D64C;
L_0887D748:
    ctx.set_gpr(31, 0x0887D750u);
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(13944));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 76u, 0x08879004u>(ctx, &aot_mem) && ctx.pc == 0x0887D750u) goto L_0887D750;
    return;
L_0887D750:
    ctx.set_gpr(31, 0x0887D758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 618u, 0x08877BACu>(ctx, &aot_mem) && ctx.pc == 0x0887D758u) goto L_0887D758;
    return;
L_0887D758:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    goto L_0887D6C8;
L_0887D760:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[22]));
    goto L_0887D6C8;
L_0887D768:
    ctx.set_gpr(19, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(13988));
    goto L_0887D770;
L_0887D770:
    ctx.set_gpr(31, 0x0887D778u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 76u, 0x08879004u>(ctx, &aot_mem) && ctx.pc == 0x0887D778u) goto L_0887D778;
    return;
L_0887D778:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-3));
    goto L_0887D6C8;
L_0887D780:
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(13896));
    goto L_0887D770;
L_0887D788:
    ctx.set_gpr(6, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[6] + static_cast<std::uint32_t>(14028));
    goto L_0887D770;
L_0887D794:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(14072));
    goto L_0887D770;
L_0887D7A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    ctx.set_gpr(20, 2247u << 16u);
    ctx.set_gpr(14, 2247u << 16u);
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-16012)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    ctx.set_gpr(6, 2247u << 16u);
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[11]) >> 31u));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.set_gpr(12, ctx.gpr[13] >> 28u);
    ctx.set_gpr(5, ctx.gpr[11] + ctx.gpr[12]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[14] + static_cast<std::uint32_t>(-16044));
    ctx.set_gpr(5, (ctx.gpr[5] & ~0x0000000Fu) | ((0u & 0x0000000Fu) << 0u));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(9, ctx.gpr[11] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[9] << 4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(22, ctx.gpr[6] + static_cast<std::uint32_t>(-16300));
    ctx.set_gpr(7, ctx.gpr[3] + ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(8, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(10, rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(14)));
    ctx.set_gpr(21, 0u + static_cast<std::uint32_t>(7));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.set_gpr(3, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(14112));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-16012), ctx.gpr[8]);
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[21]));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    rt.memory().aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_0887D900;
      }
      goto L_0887D840;
    }
L_0887D840:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[17];
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0887D8B8;
      }
      goto L_0887D84C;
    }
L_0887D84C:
    if (ctx.gpr[3] == ctx.gpr[4]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
        goto L_0887D8F8;
    }
    goto L_0887D854;
L_0887D854:
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[15] == 0u;
    ctx.set_gpr(4, ctx.gpr[15] + 0u);
      if (branch_taken) {
          goto L_0887D8E4;
      }
      goto L_0887D860;
    }
L_0887D860:
    ctx.set_gpr(31, 0x0887D868u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 745u, 0x08882B80u>(ctx, &aot_mem) && ctx.pc == 0x0887D868u) goto L_0887D868;
    return;
L_0887D868:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.set_gpr(25, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-16012)));
    ctx.set_gpr(24, rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(14)));
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 31u));
    ctx.set_gpr(3, ctx.gpr[6] >> 28u);
    ctx.set_gpr(10, ctx.gpr[9] + ctx.gpr[3]);
    ctx.set_gpr(10, (ctx.gpr[10] & ~0x0000000Fu) | ((0u & 0x0000000Fu) << 0u));
    ctx.set_gpr(7, ctx.gpr[9] - ctx.gpr[10]);
    ctx.set_gpr(8, ctx.gpr[7] << 4u);
    ctx.set_gpr(17, ctx.gpr[8] + ctx.gpr[22]);
    ctx.set_gpr(22, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[25]);
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[24]));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-16012), ctx.gpr[22]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[21]));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[19]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    goto L_0887D8B8;
L_0887D8B8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_0887D8BC;
L_0887D8BC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
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
L_0887D8E4:
    ctx.set_gpr(16, 2225u << 16u);
    ctx.set_gpr(31, 0x0887D8F0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(14152));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 76u, 0x08879004u>(ctx, &aot_mem) && ctx.pc == 0x0887D8F0u) goto L_0887D8F0;
    return;
L_0887D8F0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_0887D8BC;
L_0887D8F8:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_0887D8BC;
L_0887D900:
    ctx.set_gpr(31, 0x0887D908u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 76u, 0x08879004u>(ctx, &aot_mem) && ctx.pc == 0x0887D908u) goto L_0887D908;
    return;
L_0887D908:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    goto L_0887D8BC;
L_0887D910:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
      if (branch_taken) {
          goto L_0887DAC4;
      }
      goto L_0887D944;
    }
L_0887D944:
    ctx.set_gpr(20, 2247u << 16u);
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-16012)));
    ctx.set_gpr(22, 2247u << 16u);
    ctx.set_gpr(3, ctx.gpr[22] + static_cast<std::uint32_t>(-16300));
    ctx.set_gpr(24, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[15]) >> 31u));
    ctx.set_gpr(21, ctx.gpr[24] >> 28u);
    ctx.set_gpr(17, ctx.gpr[15] + ctx.gpr[21]);
    ctx.set_gpr(17, (ctx.gpr[17] & ~0x0000000Fu) | ((0u & 0x0000000Fu) << 0u));
    ctx.set_gpr(13, ctx.gpr[15] - ctx.gpr[17]);
    ctx.set_gpr(14, ctx.gpr[13] << 4u);
    ctx.set_gpr(7, ctx.gpr[14] + ctx.gpr[3]);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(6));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(21, 2247u << 16u);
    ctx.set_gpr(11, ctx.gpr[21] + static_cast<std::uint32_t>(-16044));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(12, 15u << 16u);
    ctx.set_gpr(2, ctx.gpr[13] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.set_gpr(9, ctx.gpr[12] | 65535u);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.set_gpr(8, rt.memory().aot_load16(ctx.gpr[11] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-16012), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[5]));
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[9];
    rt.memory().aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0887DAB4;
      }
      goto L_0887D9B8;
    }
L_0887D9B8:
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_0887DAA4;
      }
      goto L_0887D9C8;
    }
L_0887D9C8:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.set_gpr(25, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0887DA70;
      }
      goto L_0887D9D0;
    }
L_0887D9D0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    goto L_0887D9D4;
L_0887D9D4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    if (static_cast<std::int32_t>(ctx.gpr[2]) < 0) {
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), 0u);
        goto L_0887D9F0;
    }
    goto L_0887D9E0;
L_0887D9E0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    if (ctx.gpr[10] != 0u) {
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
        goto L_0887D9F0;
    }
    goto L_0887D9F0;
L_0887D9F0:
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-16012)));
    ctx.set_gpr(6, ctx.gpr[22] + static_cast<std::uint32_t>(-16300));
    ctx.set_gpr(12, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(15, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[14]) >> 31u));
    ctx.set_gpr(3, ctx.gpr[15] >> 28u);
    ctx.set_gpr(5, ctx.gpr[14] + ctx.gpr[3]);
    ctx.set_gpr(5, (ctx.gpr[5] & ~0x0000000Fu) | ((0u & 0x0000000Fu) << 0u));
    ctx.set_gpr(13, ctx.gpr[14] - ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[13] << 4u);
    ctx.set_gpr(22, ctx.gpr[2] + ctx.gpr[6]);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[12]));
    ctx.set_gpr(11, ctx.gpr[21] + static_cast<std::uint32_t>(-16044));
    ctx.set_gpr(7, ctx.gpr[13] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[8]));
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(8), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(18, rt.memory().aot_load16(ctx.gpr[11] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-16012), ctx.gpr[7]);
    rt.memory().aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    goto L_0887DA48;
L_0887DA48:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
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
L_0887DA70:
    if (ctx.gpr[18] == ctx.gpr[25]) {
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
        goto L_0887DA84;
    }
    goto L_0887DA78;
L_0887DA78:
    if (ctx.gpr[18] != ctx.gpr[17]) {
    ctx.set_gpr(16, 2225u << 16u);
        goto L_0887DA90;
    }
    goto L_0887DA80;
L_0887DA80:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_0887DA84;
L_0887DA84:
    ctx.set_gpr(9, ctx.gpr[2] + ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[9]);
    goto L_0887D9D4;
L_0887DA90:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(14196));
    goto L_0887DA94;
L_0887DA94:
    ctx.set_gpr(31, 0x0887DA9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 76u, 0x08879004u>(ctx, &aot_mem) && ctx.pc == 0x0887DA9Cu) goto L_0887DA9C;
    return;
L_0887DA9C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    goto L_0887DA48;
L_0887DAA4:
    ctx.set_gpr(31, 0x0887DAACu);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 278u, 0x0887A410u>(ctx, &aot_mem) && ctx.pc == 0x0887DAACu) goto L_0887DAAC;
    return;
L_0887DAAC:
    // nop
    goto L_0887D9C8;
L_0887DAB4:
    ctx.set_gpr(31, 0x0887DABCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 349u, 0x0887A83Cu>(ctx, &aot_mem) && ctx.pc == 0x0887DABCu) goto L_0887DABC;
    return;
L_0887DABC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    goto L_0887D9B8;
L_0887DAC4:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(14236));
    goto L_0887DA94;
L_0887DAF4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0887DB04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 620u, 0x08877BC8u>(ctx, &aot_mem) && ctx.pc == 0x0887DB04u) goto L_0887DB04;
    return;
L_0887DB04:
    ctx.set_gpr(31, 0x0887DB0Cu);
    // nop
    goto L_0887DB90;
L_0887DB0C:
    ctx.set_gpr(31, 0x0887DB14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 621u, 0x08877BD0u>(ctx, &aot_mem) && ctx.pc == 0x0887DB14u) goto L_0887DB14;
    return;
L_0887DB14:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887DB90:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0887DBA4u);
    ctx.set_gpr(16, 2245u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 616u, 0x08877B90u>(ctx, &aot_mem) && ctx.pc == 0x0887DBA4u) goto L_0887DBA4;
    return;
L_0887DBA4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-26664)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0887DBC8;
      }
      goto L_0887DBB0;
    }
L_0887DBB0:
    ctx.set_gpr(31, 0x0887DBB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 618u, 0x08877BACu>(ctx, &aot_mem) && ctx.pc == 0x0887DBB8u) goto L_0887DBB8;
    return;
L_0887DBB8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_0887DBBC;
L_0887DBBC:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887DBC8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-26664), ctx.gpr[3]);
    ctx.set_gpr(31, 0x0887DBD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 618u, 0x08877BACu>(ctx, &aot_mem) && ctx.pc == 0x0887DBD4u) goto L_0887DBD4;
    return;
L_0887DBD4:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26656)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(5, 2245u << 16u);
      if (branch_taken) {
          goto L_0887DC54;
      }
      goto L_0887DBE4;
    }
L_0887DBE4:
    ctx.set_gpr(12, 0u + static_cast<std::uint32_t>(3));
    goto L_0887DBE8;
L_0887DBE8:
    ctx.set_gpr(31, 0x0887DBF0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-26664), ctx.gpr[12]);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 809u, 0x08883080u>(ctx, &aot_mem) && ctx.pc == 0x0887DBF0u) goto L_0887DBF0;
    return;
L_0887DBF0:
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0887DBFCu);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-26664), ctx.gpr[11]);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 781u, 0x08882D78u>(ctx, &aot_mem) && ctx.pc == 0x0887DBFCu) goto L_0887DBFC;
    return;
L_0887DBFC:
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x0887DC08u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-26664), ctx.gpr[10]);
    goto L_0887C748;
L_0887DC08:
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x0887DC14u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-26664), ctx.gpr[9]);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 781u, 0x08882D78u>(ctx, &aot_mem) && ctx.pc == 0x0887DC14u) goto L_0887DC14;
    return;
L_0887DC14:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(31, 0x0887DC20u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-26664), ctx.gpr[8]);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 809u, 0x08883080u>(ctx, &aot_mem) && ctx.pc == 0x0887DC20u) goto L_0887DC20;
    return;
L_0887DC20:
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(31, 0x0887DC2Cu);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-26664), ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 813u, 0x088830ACu>(ctx, &aot_mem) && ctx.pc == 0x0887DC2Cu) goto L_0887DC2C;
    return;
L_0887DC2C:
    ctx.set_gpr(6, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-26648)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-26664), 0u);
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
        goto L_0887DBBC;
    }
    goto L_0887DC40;
L_0887DC40:
    ctx.set_gpr(13, 2245u << 16u);
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x0887DC4Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(-26644)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887DC4Cu) goto L_0887DC4C;
    return;
L_0887DC4C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    goto L_0887DBBC;
L_0887DC54:
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x0887DC5Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26652)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887DC5Cu) goto L_0887DC5C;
    return;
L_0887DC5C:
    ctx.set_gpr(12, 0u + static_cast<std::uint32_t>(3));
    goto L_0887DBE8;
L_0887DC64:
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(7, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, ctx.gpr[8] << 8u);
    ctx.set_gpr(4, ctx.gpr[6] | ctx.gpr[3]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[4]))));
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(6, ctx.gpr[7] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0887DC9C;
      }
      goto L_0887DC88;
    }
L_0887DC88:
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(11, ctx.gpr[12] << 8u);
    ctx.set_gpr(9, ctx.gpr[10] | ctx.gpr[11]);
    rt.memory().aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[9]));
    goto L_0887DC9C;
L_0887DC9C:
    ctx.set_gpr(2, ctx.gpr[6] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[14]) <= 0;
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[14]));
      if (branch_taken) {
          goto L_0887DCB8;
      }
      goto L_0887DCB0;
    }
L_0887DCB0:
    ctx.set_gpr(15, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[15]));
    goto L_0887DCB8;
L_0887DCB8:
    ctx.set_gpr(7, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(6, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[25]) <= 0;
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[25]));
      if (branch_taken) {
          goto L_0887DCD4;
      }
      goto L_0887DCCC;
    }
L_0887DCCC:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0887DCD4;
L_0887DCD4:
    ctx.set_gpr(9, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(6, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(ctx.gpr[3]));
      if (branch_taken) {
          goto L_0887DCF0;
      }
      goto L_0887DCE8;
    }
L_0887DCE8:
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(ctx.gpr[10]));
    goto L_0887DCF0;
L_0887DCF0:
    ctx.set_gpr(13, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[13] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(6, ctx.gpr[13] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[12]) <= 0;
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[12]));
      if (branch_taken) {
          goto L_0887DD0C;
      }
      goto L_0887DD04;
    }
L_0887DD04:
    ctx.set_gpr(14, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[14]));
    goto L_0887DD0C;
L_0887DD0C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887DD14:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
      if (branch_taken) {
          goto L_0887DD40;
      }
      goto L_0887DD3C;
    }
L_0887DD3C:
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    goto L_0887DD40;
L_0887DD40:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0887DFF4;
      }
      goto L_0887DD4C;
    }
L_0887DD4C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(4, 0u | 32768u);
    ctx.set_gpr(7, ctx.gpr[3] << 8u);
    ctx.set_gpr(8, ctx.gpr[7] | ctx.gpr[9]);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[4];
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_0887DFF4;
      }
      goto L_0887DD6C;
    }
L_0887DD6C:
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(11, ctx.gpr[12] << 8u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(18, ctx.gpr[11] | ctx.gpr[10]);
      if (branch_taken) {
          goto L_0887DD88;
      }
      goto L_0887DD84;
    }
L_0887DD84:
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    goto L_0887DD88;
L_0887DD88:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.set_gpr(7, 0u + 0u);
      if (branch_taken) {
          goto L_0887DFF4;
      }
      goto L_0887DD90;
    }
L_0887DD90:
    ctx.set_gpr(13, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[13]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_0887DFF4;
      }
      goto L_0887DDA0;
    }
L_0887DDA0:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(-6));
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[18]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(-16));
      if (branch_taken) {
          goto L_0887DFF4;
      }
      goto L_0887DDB0;
    }
L_0887DDB0:
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5)));
    ctx.set_gpr(24, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    ctx.set_gpr(15, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(7)));
    ctx.set_gpr(25, ctx.gpr[7] << 24u);
    ctx.set_gpr(4, ctx.gpr[8] << 16u);
    ctx.set_gpr(17, ctx.gpr[25] | ctx.gpr[4]);
    ctx.set_gpr(20, ctx.gpr[24] << 8u);
    ctx.set_gpr(14, ctx.gpr[17] | ctx.gpr[20]);
    ctx.set_gpr(3, ctx.gpr[14] | ctx.gpr[15]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(14, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(9)));
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(10)));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(12, ctx.gpr[5] << 24u);
    ctx.set_gpr(6, ctx.gpr[13] << 16u);
    ctx.set_gpr(9, ctx.gpr[12] | ctx.gpr[6]);
    ctx.set_gpr(10, ctx.gpr[11] << 8u);
    ctx.set_gpr(8, ctx.gpr[9] | ctx.gpr[10]);
    ctx.set_gpr(4, ctx.gpr[8] | ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.set_gpr(25, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(20, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(13)));
    ctx.set_gpr(24, ctx.gpr[25] << 8u);
    ctx.set_gpr(17, ctx.gpr[20] | ctx.gpr[24]);
    rt.memory().aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[17]));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(14))))));
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(15, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(15)));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[14];
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(ctx.gpr[15]));
      if (branch_taken) {
          goto L_0887E020;
      }
      goto L_0887DE58;
    }
L_0887DE58:
    ctx.set_gpr(12, static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[12] != 0u;
    ctx.set_gpr(7, 0u + 0u);
      if (branch_taken) {
          goto L_0887DFF4;
      }
      goto L_0887DE64;
    }
L_0887DE64:
    ctx.set_gpr(20, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(17, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(3, ctx.gpr[20] << 8u);
    ctx.set_gpr(13, ctx.gpr[17] | ctx.gpr[3]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[13]))));
    ctx.set_gpr(15, ctx.gpr[4] << 2u);
    ctx.set_gpr(14, ctx.gpr[15] + ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[14] << 2u);
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    rt.memory().aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(ctx.gpr[13]));
      if (branch_taken) {
          goto L_0887DFF4;
      }
      goto L_0887DE94;
    }
L_0887DE94:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.set_gpr(20, 0u + 0u);
      if (branch_taken) {
          goto L_0887E018;
      }
      goto L_0887DE9C;
    }
L_0887DE9C:
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    goto L_0887DEA0;
L_0887DEA0:
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[8] << 8u);
    ctx.set_gpr(24, ctx.gpr[25] | ctx.gpr[3]);
    rt.memory().aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[24]));
    ctx.set_gpr(17, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(15, ctx.gpr[17] << 8u);
    ctx.set_gpr(14, ctx.gpr[7] | ctx.gpr[15]);
    rt.memory().aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[14]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(13, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5)));
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6)));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(7)));
    ctx.set_gpr(4, ctx.gpr[5] << 24u);
    ctx.set_gpr(12, ctx.gpr[13] << 16u);
    ctx.set_gpr(9, ctx.gpr[4] | ctx.gpr[12]);
    ctx.set_gpr(10, ctx.gpr[11] << 8u);
    ctx.set_gpr(25, ctx.gpr[9] | ctx.gpr[10]);
    ctx.set_gpr(3, ctx.gpr[25] | ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.set_gpr(24, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(9)));
    ctx.set_gpr(14, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(10)));
    ctx.set_gpr(12, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(7, ctx.gpr[24] << 24u);
    ctx.set_gpr(15, ctx.gpr[17] << 16u);
    ctx.set_gpr(13, ctx.gpr[7] | ctx.gpr[15]);
    ctx.set_gpr(5, ctx.gpr[14] << 8u);
    ctx.set_gpr(11, ctx.gpr[13] | ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[11] | ctx.gpr[12]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(13)));
    ctx.set_gpr(25, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(14)));
    ctx.set_gpr(4, ctx.gpr[10] << 24u);
    ctx.set_gpr(8, ctx.gpr[9] << 16u);
    ctx.set_gpr(17, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(15)));
    ctx.set_gpr(24, ctx.gpr[4] | ctx.gpr[8]);
    ctx.set_gpr(3, ctx.gpr[25] << 8u);
    ctx.set_gpr(15, ctx.gpr[24] | ctx.gpr[3]);
    ctx.set_gpr(7, ctx.gpr[15] | ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(28), ctx.gpr[7]);
    ctx.set_gpr(14, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(17)));
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(18)));
    ctx.set_gpr(7, rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(14)));
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(19)));
    ctx.set_gpr(12, ctx.gpr[14] << 24u);
    ctx.set_gpr(13, ctx.gpr[5] << 16u);
    ctx.set_gpr(10, ctx.gpr[12] | ctx.gpr[13]);
    ctx.set_gpr(2, ctx.gpr[11] << 8u);
    ctx.set_gpr(8, ctx.gpr[10] | ctx.gpr[2]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[7]))));
    ctx.set_gpr(25, ctx.gpr[8] | ctx.gpr[9]);
    ctx.set_gpr(24, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(32), ctx.gpr[25]);
    { const bool branch_taken = ctx.gpr[24] != 0u;
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_0887DEA0;
      }
      goto L_0887DF90;
    }
L_0887DF90:
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[7]))));
    ctx.set_gpr(10, ctx.gpr[11] << 2u);
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3))))));
    ctx.set_gpr(9, ctx.gpr[10] + ctx.gpr[11]);
    ctx.set_gpr(20, ctx.gpr[9] << 2u);
    ctx.set_gpr(18, ctx.gpr[18] - ctx.gpr[20]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.set_gpr(20, 0u + 0u);
      if (branch_taken) {
          goto L_0887DFF0;
      }
      goto L_0887DFB0;
    }
L_0887DFB0:
    ctx.set_gpr(17, ctx.gpr[19] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(12, static_cast<std::int32_t>(ctx.gpr[18]) < 12 ? 1u : 0u);
    goto L_0887DFB8;
L_0887DFB8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(-12));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = ctx.gpr[12] != 0u;
    ctx.set_gpr(7, 0u + 0u);
      if (branch_taken) {
          goto L_0887DFF4;
      }
      goto L_0887DFD8;
    }
L_0887DFD8:
    ctx.set_gpr(31, 0x0887DFE0u);
    // nop
    goto L_0887DC64;
L_0887DFE0:
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3))))));
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[13]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(12, static_cast<std::int32_t>(ctx.gpr[18]) < 12 ? 1u : 0u);
      if (branch_taken) {
          goto L_0887DFB8;
      }
      goto L_0887DFF0;
    }
L_0887DFF0:
    ctx.set_gpr(7, 0u + 0u);
    goto L_0887DFF4;
L_0887DFF4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[7] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887E018:
    ctx.set_gpr(7, rt.memory().aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(14)));
    goto L_0887DF90;
L_0887E020:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(-12));
    goto L_0887DE58;
L_0887E02C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(2, ctx.gpr[17] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(6, ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[6] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
      if (branch_taken) {
          goto L_0887E08C;
      }
      goto L_0887E060;
    }
L_0887E060:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(14272));
    goto L_0887E068;
L_0887E068:
    ctx.set_gpr(31, 0x0887E070u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 76u, 0x08879004u>(ctx, &aot_mem) && ctx.pc == 0x0887E070u) goto L_0887E070;
    return;
L_0887E070:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887E08C:
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(31, 0x0887E0C0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0887E0C0u) goto L_0887E0C0;
    return;
L_0887E0C0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(31, 0x0887E0D4u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    goto L_0887DD14;
L_0887E0D4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.set_gpr(5, 2225u << 16u);
      if (branch_taken) {
          goto L_0887E168;
      }
      goto L_0887E0E0;
    }
L_0887E0E0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(92))))));
      if (branch_taken) {
          goto L_0887E15C;
      }
      goto L_0887E0E8;
    }
L_0887E0E8:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[8];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0887E0F8;
      }
      goto L_0887E0F4;
    }
L_0887E0F4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_0887E0F8;
L_0887E0F8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(15, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(35))))));
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(34))))));
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(46))))));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[15]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[14]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[13]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[12]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[11]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[15]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[14]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[13]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[12]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[11]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[10]);
    goto L_0887E070;
L_0887E15C:
    ctx.set_gpr(7, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[7] + static_cast<std::uint32_t>(14384));
    goto L_0887E068;
L_0887E168:
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(14324));
    goto L_0887E068;
L_0887E3A0:
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(8, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.set_gpr(6, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(13, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(12, 2225u << 16u);
    ctx.set_gpr(10, ctx.gpr[12] + static_cast<std::uint32_t>(14440));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.set_gpr(8, ctx.gpr[13] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(25, ctx.gpr[14] >> 24u);
    ctx.set_gpr(24, (ctx.gpr[14] >> 16u) & 0x000000FFu);
    ctx.set_gpr(15, (ctx.gpr[14] >> 8u) & 0x000000FFu);
    rt.memory().aot_store8(ctx.gpr[13] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[25]));
    ctx.set_gpr(25, ctx.gpr[8] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store8(ctx.gpr[13] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[15]));
    ctx.set_gpr(15, ctx.gpr[25] + static_cast<std::uint32_t>(2));
    rt.memory().aot_store8(ctx.gpr[13] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[24]));
    rt.memory().aot_store8(ctx.gpr[13] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[14]));
    ctx.set_gpr(13, ctx.gpr[15] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(11, ctx.gpr[9] >> 24u);
    ctx.set_gpr(7, (ctx.gpr[9] >> 16u) & 0x000000FFu);
    ctx.set_gpr(2, (ctx.gpr[9] >> 8u) & 0x000000FFu);
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[11]));
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(12))))));
    ctx.set_gpr(3, (ctx.gpr[6] >> 8u) & 0x000000FFu);
    rt.memory().aot_store8(ctx.gpr[25] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[25] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(24, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store8(ctx.gpr[15] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[24]));
    ctx.set_gpr(14, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(61)));
    ctx.set_gpr(5, ctx.gpr[13] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[13] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[14]));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(9), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(11, rt.memory().aot_load8(ctx.gpr[12] + static_cast<std::uint32_t>(14440)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(10), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(1)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(2)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(3)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(5)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(15), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(6)));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[3]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887E518:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(14448));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(16, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0887E53Cu);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-26616), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0034_entry, 34u, 636u, 0x0888F220u>(ctx, &aot_mem) && ctx.pc == 0x0887E53Cu) goto L_0887E53C;
    return;
L_0887E53C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-26640)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E560;
      }
      goto L_0887E548;
    }
L_0887E548:
    ctx.set_gpr(25, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-26640), ctx.gpr[25]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887E560:
    ctx.set_gpr(31, 0x0887E568u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 610u, 0x08877B38u>(ctx, &aot_mem) && ctx.pc == 0x0887E568u) goto L_0887E568;
    return;
L_0887E568:
    ctx.set_gpr(31, 0x0887E570u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 616u, 0x08877B90u>(ctx, &aot_mem) && ctx.pc == 0x0887E570u) goto L_0887E570;
    return;
L_0887E570:
    ctx.set_gpr(31, 0x0887E578u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 193u, 0x088A0DE8u>(ctx, &aot_mem) && ctx.pc == 0x0887E578u) goto L_0887E578;
    return;
L_0887E578:
    ctx.set_gpr(31, 0x0887E580u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 712u, 0x0889F898u>(ctx, &aot_mem) && ctx.pc == 0x0887E580u) goto L_0887E580;
    return;
L_0887E580:
    ctx.set_gpr(31, 0x0887E588u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 499u, 0x0889EA58u>(ctx, &aot_mem) && ctx.pc == 0x0887E588u) goto L_0887E588;
    return;
L_0887E588:
    ctx.set_gpr(31, 0x0887E590u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 70u, 0x08878F6Cu>(ctx, &aot_mem) && ctx.pc == 0x0887E590u) goto L_0887E590;
    return;
L_0887E590:
    ctx.set_gpr(31, 0x0887E598u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 574u, 0x08882204u>(ctx, &aot_mem) && ctx.pc == 0x0887E598u) goto L_0887E598;
    return;
L_0887E598:
    ctx.set_gpr(31, 0x0887E5A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 204u, 0x08880C3Cu>(ctx, &aot_mem) && ctx.pc == 0x0887E5A0u) goto L_0887E5A0;
    return;
L_0887E5A0:
    ctx.set_gpr(31, 0x0887E5A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 143u, 0x088797DCu>(ctx, &aot_mem) && ctx.pc == 0x0887E5A8u) goto L_0887E5A8;
    return;
L_0887E5A8:
    ctx.set_gpr(31, 0x0887E5B0u);
    // nop
    goto L_0887FC3C;
L_0887E5B0:
    ctx.set_gpr(31, 0x0887E5B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 330u, 0x08895A18u>(ctx, &aot_mem) && ctx.pc == 0x0887E5B8u) goto L_0887E5B8;
    return;
L_0887E5B8:
    ctx.set_gpr(31, 0x0887E5C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 634u, 0x088A3B90u>(ctx, &aot_mem) && ctx.pc == 0x0887E5C0u) goto L_0887E5C0;
    return;
L_0887E5C0:
    ctx.set_gpr(24, 2184u << 16u);
    ctx.set_gpr(4, ctx.gpr[24] + static_cast<std::uint32_t>(-5924));
    ctx.set_gpr(31, 0x0887E5D0u);
    ctx.set_gpr(5, 0u + 0u);
    goto L_0887FC74;
L_0887E5D0:
    ctx.set_gpr(15, 2184u << 16u);
    ctx.set_gpr(4, ctx.gpr[15] + static_cast<std::uint32_t>(-5896));
    ctx.set_gpr(31, 0x0887E5E0u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 327u, 0x088959DCu>(ctx, &aot_mem) && ctx.pc == 0x0887E5E0u) goto L_0887E5E0;
    return;
L_0887E5E0:
    ctx.set_gpr(14, 2247u << 16u);
    ctx.set_gpr(4, ctx.gpr[14] + static_cast<std::uint32_t>(-7668));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0887E5F4u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3136));
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0887E5F4u) goto L_0887E5F4;
    return;
L_0887E5F4:
    ctx.set_gpr(13, 2225u << 16u);
    ctx.set_gpr(12, 2184u << 16u);
    ctx.set_gpr(8, ctx.gpr[13] + static_cast<std::uint32_t>(14528));
    ctx.set_gpr(6, ctx.gpr[12] + static_cast<std::uint32_t>(-5828));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0887E614u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 501u, 0x088A2E10u>(ctx, &aot_mem) && ctx.pc == 0x0887E614u) goto L_0887E614;
    return;
L_0887E614:
    ctx.set_gpr(11, 2184u << 16u);
    ctx.set_gpr(10, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[11] + static_cast<std::uint32_t>(-5796));
    ctx.set_gpr(7, ctx.gpr[10] + static_cast<std::uint32_t>(14544));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0887E630u);
    ctx.set_gpr(6, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 461u, 0x088A2A6Cu>(ctx, &aot_mem) && ctx.pc == 0x0887E630u) goto L_0887E630;
    return;
L_0887E630:
    ctx.set_gpr(9, 2225u << 16u);
    ctx.set_gpr(7, 2184u << 16u);
    ctx.set_gpr(8, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[7] + static_cast<std::uint32_t>(-5680));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, ctx.gpr[9] + static_cast<std::uint32_t>(14560));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x0887E654u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-26624), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 461u, 0x088A2A6Cu>(ctx, &aot_mem) && ctx.pc == 0x0887E654u) goto L_0887E654;
    return;
L_0887E654:
    ctx.set_gpr(6, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-26632), ctx.gpr[2]);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(60));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-26628), 0u);
    ctx.set_gpr(31, 0x0887E674u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26620), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 273u, 0x088858BCu>(ctx, &aot_mem) && ctx.pc == 0x0887E674u) goto L_0887E674;
    return;
L_0887E674:
    ctx.set_gpr(31, 0x0887E67Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 618u, 0x08877BACu>(ctx, &aot_mem) && ctx.pc == 0x0887E67Cu) goto L_0887E67C;
    return;
L_0887E67C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-26640)));
    goto L_0887E548;
L_0887E684:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26640)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0887E8B0;
      }
      goto L_0887E6AC;
    }
L_0887E6AC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26640), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0887E6D0;
      }
      goto L_0887E6B4;
    }
L_0887E6B4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_0887E6B8;
L_0887E6B8:
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
L_0887E6D0:
    ctx.set_gpr(31, 0x0887E6D8u);
    ctx.set_gpr(18, 2225u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 134u, 0x088848CCu>(ctx, &aot_mem) && ctx.pc == 0x0887E6D8u) goto L_0887E6D8;
    return;
L_0887E6D8:
    ctx.set_gpr(31, 0x0887E6E0u);
    // nop
    goto L_0887FC58;
L_0887E6E0:
    ctx.set_gpr(31, 0x0887E6E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 150u, 0x088798B0u>(ctx, &aot_mem) && ctx.pc == 0x0887E6E8u) goto L_0887E6E8;
    return;
L_0887E6E8:
    ctx.set_gpr(31, 0x0887E6F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 579u, 0x0888225Cu>(ctx, &aot_mem) && ctx.pc == 0x0887E6F0u) goto L_0887E6F0;
    return;
L_0887E6F0:
    ctx.set_gpr(31, 0x0887E6F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 337u, 0x08895A90u>(ctx, &aot_mem) && ctx.pc == 0x0887E6F8u) goto L_0887E6F8;
    return;
L_0887E6F8:
    ctx.set_gpr(31, 0x0887E700u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 616u, 0x08877B90u>(ctx, &aot_mem) && ctx.pc == 0x0887E700u) goto L_0887E700;
    return;
L_0887E700:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x0887E70Cu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 475u, 0x088A2B74u>(ctx, &aot_mem) && ctx.pc == 0x0887E70Cu) goto L_0887E70C;
    return;
L_0887E70C:
    ctx.set_gpr(7, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-26624)));
    ctx.set_gpr(31, 0x0887E71Cu);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(4));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 475u, 0x088A2B74u>(ctx, &aot_mem) && ctx.pc == 0x0887E71Cu) goto L_0887E71C;
    return;
L_0887E71C:
    ctx.set_gpr(6, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-26632)));
    ctx.set_gpr(31, 0x0887E72Cu);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(5));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 475u, 0x088A2B74u>(ctx, &aot_mem) && ctx.pc == 0x0887E72Cu) goto L_0887E72C;
    return;
L_0887E72C:
    ctx.set_gpr(31, 0x0887E734u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 637u, 0x088A3C3Cu>(ctx, &aot_mem) && ctx.pc == 0x0887E734u) goto L_0887E734;
    return;
L_0887E734:
    ctx.set_gpr(31, 0x0887E73Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 209u, 0x08880C94u>(ctx, &aot_mem) && ctx.pc == 0x0887E73Cu) goto L_0887E73C;
    return;
L_0887E73C:
    ctx.set_gpr(31, 0x0887E744u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 72u, 0x08878FA4u>(ctx, &aot_mem) && ctx.pc == 0x0887E744u) goto L_0887E744;
    return;
L_0887E744:
    ctx.set_gpr(31, 0x0887E74Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 506u, 0x0889EAB8u>(ctx, &aot_mem) && ctx.pc == 0x0887E74Cu) goto L_0887E74C;
    return;
L_0887E74C:
    ctx.set_gpr(31, 0x0887E754u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 719u, 0x0889F8F8u>(ctx, &aot_mem) && ctx.pc == 0x0887E754u) goto L_0887E754;
    return;
L_0887E754:
    ctx.set_gpr(31, 0x0887E75Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 200u, 0x088A0E48u>(ctx, &aot_mem) && ctx.pc == 0x0887E75Cu) goto L_0887E75C;
    return;
L_0887E75C:
    ctx.set_gpr(31, 0x0887E764u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 618u, 0x08877BACu>(ctx, &aot_mem) && ctx.pc == 0x0887E764u) goto L_0887E764;
    return;
L_0887E764:
    ctx.set_gpr(31, 0x0887E76Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 613u, 0x08877B68u>(ctx, &aot_mem) && ctx.pc == 0x0887E76Cu) goto L_0887E76C;
    return;
L_0887E76C:
    ctx.set_gpr(3, 2247u << 16u);
    ctx.set_gpr(16, ctx.gpr[3] + static_cast<std::uint32_t>(-7668));
    ctx.set_gpr(19, ctx.gpr[16] + static_cast<std::uint32_t>(3136));
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    goto L_0887E77C;
L_0887E77C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887E898;
      }
      goto L_0887E784;
    }
L_0887E784:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(196))))));
    goto L_0887E788;
L_0887E788:
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.set_gpr(17, ctx.gpr[16] + static_cast<std::uint32_t>(196));
      if (branch_taken) {
          goto L_0887E880;
      }
      goto L_0887E790;
    }
L_0887E790:
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(392))))));
    goto L_0887E794;
L_0887E794:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.set_gpr(17, ctx.gpr[16] + static_cast<std::uint32_t>(392));
      if (branch_taken) {
          goto L_0887E868;
      }
      goto L_0887E79C;
    }
L_0887E79C:
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(588))))));
    goto L_0887E7A0;
L_0887E7A0:
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.set_gpr(17, ctx.gpr[16] + static_cast<std::uint32_t>(588));
      if (branch_taken) {
          goto L_0887E850;
      }
      goto L_0887E7A8;
    }
L_0887E7A8:
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(784))))));
    goto L_0887E7AC;
L_0887E7AC:
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.set_gpr(17, ctx.gpr[16] + static_cast<std::uint32_t>(784));
      if (branch_taken) {
          goto L_0887E838;
      }
      goto L_0887E7B4;
    }
L_0887E7B4:
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(980))))));
    goto L_0887E7B8;
L_0887E7B8:
    { const bool branch_taken = ctx.gpr[12] != 0u;
    ctx.set_gpr(17, ctx.gpr[16] + static_cast<std::uint32_t>(980));
      if (branch_taken) {
          goto L_0887E820;
      }
      goto L_0887E7C0;
    }
L_0887E7C0:
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1176))))));
    goto L_0887E7C4;
L_0887E7C4:
    { const bool branch_taken = ctx.gpr[13] != 0u;
    ctx.set_gpr(17, ctx.gpr[16] + static_cast<std::uint32_t>(1176));
      if (branch_taken) {
          goto L_0887E808;
      }
      goto L_0887E7CC;
    }
L_0887E7CC:
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1372))))));
    goto L_0887E7D0;
L_0887E7D0:
    { const bool branch_taken = ctx.gpr[14] != 0u;
    ctx.set_gpr(17, ctx.gpr[16] + static_cast<std::uint32_t>(1372));
      if (branch_taken) {
          goto L_0887E7F0;
      }
      goto L_0887E7D8;
    }
L_0887E7D8:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1568));
    goto L_0887E7DC;
L_0887E7DC:
    ctx.set_gpr(15, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    if (ctx.gpr[15] != 0u) {
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
        goto L_0887E77C;
    }
    goto L_0887E7E8;
L_0887E7E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_0887E6B8;
L_0887E7F0:
    ctx.set_gpr(31, 0x0887E7F8u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(14580));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 452u, 0x088A2870u>(ctx, &aot_mem) && ctx.pc == 0x0887E7F8u) goto L_0887E7F8;
    return;
L_0887E7F8:
    ctx.set_gpr(31, 0x0887E800u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 130u, 0x08884898u>(ctx, &aot_mem) && ctx.pc == 0x0887E800u) goto L_0887E800;
    return;
L_0887E800:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1568));
    goto L_0887E7DC;
L_0887E808:
    ctx.set_gpr(31, 0x0887E810u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(14580));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 452u, 0x088A2870u>(ctx, &aot_mem) && ctx.pc == 0x0887E810u) goto L_0887E810;
    return;
L_0887E810:
    ctx.set_gpr(31, 0x0887E818u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 130u, 0x08884898u>(ctx, &aot_mem) && ctx.pc == 0x0887E818u) goto L_0887E818;
    return;
L_0887E818:
    ctx.set_gpr(14, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1372))))));
    goto L_0887E7D0;
L_0887E820:
    ctx.set_gpr(31, 0x0887E828u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(14580));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 452u, 0x088A2870u>(ctx, &aot_mem) && ctx.pc == 0x0887E828u) goto L_0887E828;
    return;
L_0887E828:
    ctx.set_gpr(31, 0x0887E830u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 130u, 0x08884898u>(ctx, &aot_mem) && ctx.pc == 0x0887E830u) goto L_0887E830;
    return;
L_0887E830:
    ctx.set_gpr(13, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1176))))));
    goto L_0887E7C4;
L_0887E838:
    ctx.set_gpr(31, 0x0887E840u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(14580));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 452u, 0x088A2870u>(ctx, &aot_mem) && ctx.pc == 0x0887E840u) goto L_0887E840;
    return;
L_0887E840:
    ctx.set_gpr(31, 0x0887E848u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 130u, 0x08884898u>(ctx, &aot_mem) && ctx.pc == 0x0887E848u) goto L_0887E848;
    return;
L_0887E848:
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(980))))));
    goto L_0887E7B8;
L_0887E850:
    ctx.set_gpr(31, 0x0887E858u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(14580));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 452u, 0x088A2870u>(ctx, &aot_mem) && ctx.pc == 0x0887E858u) goto L_0887E858;
    return;
L_0887E858:
    ctx.set_gpr(31, 0x0887E860u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 130u, 0x08884898u>(ctx, &aot_mem) && ctx.pc == 0x0887E860u) goto L_0887E860;
    return;
L_0887E860:
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(784))))));
    goto L_0887E7AC;
L_0887E868:
    ctx.set_gpr(31, 0x0887E870u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(14580));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 452u, 0x088A2870u>(ctx, &aot_mem) && ctx.pc == 0x0887E870u) goto L_0887E870;
    return;
L_0887E870:
    ctx.set_gpr(31, 0x0887E878u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 130u, 0x08884898u>(ctx, &aot_mem) && ctx.pc == 0x0887E878u) goto L_0887E878;
    return;
L_0887E878:
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(588))))));
    goto L_0887E7A0;
L_0887E880:
    ctx.set_gpr(31, 0x0887E888u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(14580));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 452u, 0x088A2870u>(ctx, &aot_mem) && ctx.pc == 0x0887E888u) goto L_0887E888;
    return;
L_0887E888:
    ctx.set_gpr(31, 0x0887E890u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 130u, 0x08884898u>(ctx, &aot_mem) && ctx.pc == 0x0887E890u) goto L_0887E890;
    return;
L_0887E890:
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(392))))));
    goto L_0887E794;
L_0887E898:
    ctx.set_gpr(31, 0x0887E8A0u);
    ctx.set_gpr(4, ctx.gpr[18] + static_cast<std::uint32_t>(14580));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 452u, 0x088A2870u>(ctx, &aot_mem) && ctx.pc == 0x0887E8A0u) goto L_0887E8A0;
    return;
L_0887E8A0:
    ctx.set_gpr(31, 0x0887E8A8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 130u, 0x08884898u>(ctx, &aot_mem) && ctx.pc == 0x0887E8A8u) goto L_0887E8A8;
    return;
L_0887E8A8:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(196))))));
    goto L_0887E788;
L_0887E8B0:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(31, 0x0887E8BCu);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(14624));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 452u, 0x088A2870u>(ctx, &aot_mem) && ctx.pc == 0x0887E8BCu) goto L_0887E8BC;
    return;
L_0887E8BC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_0887E6B8;
L_0887E8DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0887E8ECu);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 76u, 0x08879004u>(ctx, &aot_mem) && ctx.pc == 0x0887E8ECu) goto L_0887E8EC;
    return;
L_0887E8EC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887E8F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0887E908u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 76u, 0x08879004u>(ctx, &aot_mem) && ctx.pc == 0x0887E908u) goto L_0887E908;
    return;
L_0887E908:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887E93C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0887E94Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 276u, 0x08886010u>(ctx, &aot_mem) && ctx.pc == 0x0887E94Cu) goto L_0887E94C;
    return;
L_0887E94C:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887E95C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0887E96Cu);
    // nop
    goto L_0887DAF4;
L_0887E96C:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887E9D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0887E9E0u);
    // nop
    goto L_0887F270;
L_0887E9E0:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887EB2C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0887EB54u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 620u, 0x08877BC8u>(ctx, &aot_mem) && ctx.pc == 0x0887EB54u) goto L_0887EB54;
    return;
L_0887EB54:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(14776));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
      if (branch_taken) {
          goto L_0887EBF8;
      }
      goto L_0887EB74;
    }
L_0887EB74:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(31, 0x0887EB80u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    goto L_0887CCA4;
L_0887EB80:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_0887EBD8;
      }
      goto L_0887EB94;
    }
L_0887EB94:
    ctx.set_gpr(31, 0x0887EB9Cu);
    // nop
    goto L_0887CD30;
L_0887EB9C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0887EBB4u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 146u, 0x08894AB4u>(ctx, &aot_mem) && ctx.pc == 0x0887EBB4u) goto L_0887EBB4;
    return;
L_0887EBB4:
    ctx.set_gpr(31, 0x0887EBBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 621u, 0x08877BD0u>(ctx, &aot_mem) && ctx.pc == 0x0887EBBCu) goto L_0887EBBC;
    return;
L_0887EBBC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
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
L_0887EBD8:
    ctx.set_gpr(31, 0x0887EBE0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 95u, 0x0887935Cu>(ctx, &aot_mem) && ctx.pc == 0x0887EBE0u) goto L_0887EBE0;
    return;
L_0887EBE0:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(14820));
    ctx.set_gpr(31, 0x0887EBF0u);
    ctx.set_gpr(5, ctx.gpr[29] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 85u, 0x08879084u>(ctx, &aot_mem) && ctx.pc == 0x0887EBF0u) goto L_0887EBF0;
    return;
L_0887EBF0:
    // nop
    goto L_0887EBB4;
L_0887EBF8:
    ctx.set_gpr(31, 0x0887EC00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 76u, 0x08879004u>(ctx, &aot_mem) && ctx.pc == 0x0887EC00u) goto L_0887EC00;
    return;
L_0887EC00:
    // nop
    goto L_0887EBB4;
L_0887EC08:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0887EC20u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 620u, 0x08877BC8u>(ctx, &aot_mem) && ctx.pc == 0x0887EC20u) goto L_0887EC20;
    return;
L_0887EC20:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
      if (branch_taken) {
          goto L_0887ECAC;
      }
      goto L_0887EC2C;
    }
L_0887EC2C:
    ctx.set_gpr(31, 0x0887EC34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 209u, 0x08884DDCu>(ctx, &aot_mem) && ctx.pc == 0x0887EC34u) goto L_0887EC34;
    return;
L_0887EC34:
    ctx.set_gpr(31, 0x0887EC3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 616u, 0x08877B90u>(ctx, &aot_mem) && ctx.pc == 0x0887EC3Cu) goto L_0887EC3C;
    return;
L_0887EC3C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0887EC50u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 171u, 0x08884B3Cu>(ctx, &aot_mem) && ctx.pc == 0x0887EC50u) goto L_0887EC50;
    return;
L_0887EC50:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[5];
    ctx.set_gpr(31, 0x0887EC64u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887EC64u) goto L_0887EC64;
    return;
L_0887EC64:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(62))))));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0887EC74u);
    ctx.set_gpr(5, ctx.gpr[2] << 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 247u, 0x0889534Cu>(ctx, &aot_mem) && ctx.pc == 0x0887EC74u) goto L_0887EC74;
    return;
L_0887EC74:
    ctx.set_gpr(31, 0x0887EC7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 618u, 0x08877BACu>(ctx, &aot_mem) && ctx.pc == 0x0887EC7Cu) goto L_0887EC7C;
    return;
L_0887EC7C:
    ctx.set_gpr(31, 0x0887EC84u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 158u, 0x08894B8Cu>(ctx, &aot_mem) && ctx.pc == 0x0887EC84u) goto L_0887EC84;
    return;
L_0887EC84:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0887EC90u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 298u, 0x08886764u>(ctx, &aot_mem) && ctx.pc == 0x0887EC90u) goto L_0887EC90;
    return;
L_0887EC90:
    ctx.set_gpr(31, 0x0887EC98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 621u, 0x08877BD0u>(ctx, &aot_mem) && ctx.pc == 0x0887EC98u) goto L_0887EC98;
    return;
L_0887EC98:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887ECAC:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(31, 0x0887ECB8u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(14860));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 76u, 0x08879004u>(ctx, &aot_mem) && ctx.pc == 0x0887ECB8u) goto L_0887ECB8;
    return;
L_0887ECB8:
    // nop
    goto L_0887EC90;
L_0887ECC0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0887ECDCu);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 620u, 0x08877BC8u>(ctx, &aot_mem) && ctx.pc == 0x0887ECDCu) goto L_0887ECDC;
    return;
L_0887ECDC:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(14908));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_0887ED10;
      }
      goto L_0887ECEC;
    }
L_0887ECEC:
    ctx.set_gpr(31, 0x0887ECF4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(148)));
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 261u, 0x0889549Cu>(ctx, &aot_mem) && ctx.pc == 0x0887ECF4u) goto L_0887ECF4;
    return;
L_0887ECF4:
    ctx.set_gpr(31, 0x0887ECFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 621u, 0x08877BD0u>(ctx, &aot_mem) && ctx.pc == 0x0887ECFCu) goto L_0887ECFC;
    return;
L_0887ECFC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887ED10:
    ctx.set_gpr(31, 0x0887ED18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 76u, 0x08879004u>(ctx, &aot_mem) && ctx.pc == 0x0887ED18u) goto L_0887ED18;
    return;
L_0887ED18:
    // nop
    goto L_0887ECF4;
L_0887F1E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0887F1FCu);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 620u, 0x08877BC8u>(ctx, &aot_mem) && ctx.pc == 0x0887F1FCu) goto L_0887F1FC;
    return;
L_0887F1FC:
    ctx.set_gpr(2, 2225u << 16u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(15096));
      if (branch_taken) {
          goto L_0887F23C;
      }
      goto L_0887F208;
    }
L_0887F208:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F22C;
      }
      goto L_0887F214;
    }
L_0887F214:
    ctx.set_gpr(31, 0x0887F21Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 621u, 0x08877BD0u>(ctx, &aot_mem) && ctx.pc == 0x0887F21Cu) goto L_0887F21C;
    return;
L_0887F21C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887F22C:
    ctx.set_gpr(31, 0x0887F234u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 150u, 0x08894B2Cu>(ctx, &aot_mem) && ctx.pc == 0x0887F234u) goto L_0887F234;
    return;
L_0887F234:
    // nop
    goto L_0887F214;
L_0887F23C:
    ctx.set_gpr(31, 0x0887F244u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 76u, 0x08879004u>(ctx, &aot_mem) && ctx.pc == 0x0887F244u) goto L_0887F244;
    return;
L_0887F244:
    // nop
    goto L_0887F214;
L_0887F270:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0887F280u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 620u, 0x08877BC8u>(ctx, &aot_mem) && ctx.pc == 0x0887F280u) goto L_0887F280;
    return;
L_0887F280:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26612)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(5, 2245u << 16u);
      if (branch_taken) {
          goto L_0887F2CC;
      }
      goto L_0887F290;
    }
L_0887F290:
    ctx.set_gpr(31, 0x0887F298u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 196u, 0x08894D68u>(ctx, &aot_mem) && ctx.pc == 0x0887F298u) goto L_0887F298;
    return;
L_0887F298:
    ctx.set_gpr(4, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26604)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(6, 2245u << 16u);
      if (branch_taken) {
          goto L_0887F2BC;
      }
      goto L_0887F2A8;
    }
L_0887F2A8:
    ctx.set_gpr(31, 0x0887F2B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 621u, 0x08877BD0u>(ctx, &aot_mem) && ctx.pc == 0x0887F2B0u) goto L_0887F2B0;
    return;
L_0887F2B0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887F2BC:
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x0887F2C4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-26600)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887F2C4u) goto L_0887F2C4;
    return;
L_0887F2C4:
    // nop
    goto L_0887F2A8;
L_0887F2CC:
    jump_target = ctx.gpr[3];
    ctx.set_gpr(31, 0x0887F2D4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26608)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887F2D4u) goto L_0887F2D4;
    return;
L_0887F2D4:
    // nop
    goto L_0887F290;
L_0887F2DC:
    ctx.set_gpr(3, 2227u << 16u);
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887F5B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, 2245u << 16u);
    ctx.set_gpr(3, 2227u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26596)));
    ctx.set_gpr(2, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(412)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-26516), 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26596)));
      if (branch_taken) {
          goto L_0887F614;
      }
      goto L_0887F5F0;
    }
L_0887F5F0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-26596), ctx.gpr[18]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887F614:
    ctx.set_gpr(31, 0x0887F61Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 634u, 0x088A3B90u>(ctx, &aot_mem) && ctx.pc == 0x0887F61Cu) goto L_0887F61C;
    return;
L_0887F61C:
    ctx.set_gpr(6, 2184u << 16u);
    ctx.set_gpr(4, ctx.gpr[6] + static_cast<std::uint32_t>(-2132));
    ctx.set_gpr(31, 0x0887F62Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 529u, 0x088A3154u>(ctx, &aot_mem) && ctx.pc == 0x0887F62Cu) goto L_0887F62C;
    return;
L_0887F62C:
    ctx.set_gpr(5, 2184u << 16u);
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(-2060));
    ctx.set_gpr(31, 0x0887F63Cu);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 530u, 0x088A3168u>(ctx, &aot_mem) && ctx.pc == 0x0887F63Cu) goto L_0887F63C;
    return;
L_0887F63C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(18, 2245u << 16u);
      if (branch_taken) {
          goto L_0887F774;
      }
      goto L_0887F644;
    }
L_0887F644:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(13, ctx.gpr[18] + static_cast<std::uint32_t>(-26592));
    rt.memory().aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-26592), ctx.gpr[25]);
    ctx.set_gpr(24, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(4), ctx.gpr[24]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(15, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(16), ctx.gpr[15]);
    ctx.set_gpr(14, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(24), ctx.gpr[14]);
    goto L_0887F678;
L_0887F678:
    ctx.set_gpr(31, 0x0887F680u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(-26592));
    ctx.pc = 0x08B0DD9Cu;
    return;
L_0887F680:
    ctx.set_gpr(19, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-26500), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0887F690u);
    ctx.set_gpr(16, 2245u << 16u);
    ctx.pc = 0x08B0DE64u;
    return;
L_0887F690:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(8, 2184u << 16u);
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(15188));
    ctx.set_gpr(7, 0u | 32768u);
    ctx.set_gpr(5, ctx.gpr[8] + static_cast<std::uint32_t>(-1204));
    ctx.set_gpr(11, 2247u << 16u);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(10, 2245u << 16u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-26488), 0u);
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-4532), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26496), 0u);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-26492), 0u);
    ctx.set_gpr(31, 0x0887F6D4u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.pc = 0x08B0DDE4u;
    return;
L_0887F6D4:
    ctx.set_gpr(7, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-26508), ctx.gpr[2]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0887F6ECu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-26508)));
    ctx.pc = 0x08B0DD7Cu;
    return;
L_0887F6EC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(6, 2225u << 16u);
      if (branch_taken) {
          goto L_0887F764;
      }
      goto L_0887F6F4;
    }
L_0887F6F4:
    ctx.set_gpr(13, 2225u << 16u);
    goto L_0887F6F8;
L_0887F6F8:
    ctx.set_gpr(12, 2184u << 16u);
    ctx.set_gpr(4, ctx.gpr[13] + static_cast<std::uint32_t>(15220));
    ctx.set_gpr(5, ctx.gpr[12] + static_cast<std::uint32_t>(-1084));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(16384));
    ctx.set_gpr(31, 0x0887F718u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.pc = 0x08B0DDE4u;
    return;
L_0887F718:
    ctx.set_gpr(9, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-26504), ctx.gpr[2]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0887F730u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-26504)));
    ctx.pc = 0x08B0DD7Cu;
    return;
L_0887F730:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(14, 2225u << 16u);
      if (branch_taken) {
          goto L_0887F754;
      }
      goto L_0887F738;
    }
L_0887F738:
    ctx.set_gpr(31, 0x0887F740u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 244u, 0x08898D30u>(ctx, &aot_mem) && ctx.pc == 0x0887F740u) goto L_0887F740;
    return;
L_0887F740:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-26500)));
    ctx.set_gpr(31, 0x0887F74Cu);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.pc = 0x08B0DE24u;
    return;
L_0887F74C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26596)));
    goto L_0887F5F0;
L_0887F754:
    ctx.set_gpr(31, 0x0887F75Cu);
    ctx.set_gpr(4, ctx.gpr[14] + static_cast<std::uint32_t>(15204));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 46u, 0x0881454Cu>(ctx, &aot_mem) && ctx.pc == 0x0887F75Cu) goto L_0887F75C;
    return;
L_0887F75C:
    // nop
    goto L_0887F738;
L_0887F764:
    ctx.set_gpr(31, 0x0887F76Cu);
    ctx.set_gpr(4, ctx.gpr[6] + static_cast<std::uint32_t>(15204));
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 46u, 0x0881454Cu>(ctx, &aot_mem) && ctx.pc == 0x0887F76Cu) goto L_0887F76C;
    return;
L_0887F76C:
    ctx.set_gpr(13, 2225u << 16u);
    goto L_0887F6F8;
L_0887F774:
    ctx.set_gpr(7, ctx.gpr[18] + static_cast<std::uint32_t>(-26592));
    ctx.set_gpr(12, 0u + static_cast<std::uint32_t>(50));
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(17));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(22));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(24));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(24), ctx.gpr[12]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(20), ctx.gpr[11]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-26592), ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_0887F678;
L_0887F7AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-26544)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
      if (branch_taken) {
          goto L_0887F7DC;
      }
      goto L_0887F7C4;
    }
L_0887F7C4:
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-26544), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887F7DC:
    ctx.set_gpr(31, 0x0887F7E4u);
    // nop
    ctx.pc = 0x08B0DC94u;
    return;
L_0887F7E4:
    ctx.set_gpr(4, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-26484), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-26544)));
    goto L_0887F7C4;
L_0887F7F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-26544)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-26544), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0887F834;
      }
      goto L_0887F814;
    }
L_0887F814:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-26544)));
    goto L_0887F818;
L_0887F818:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < 0 ? 1u : 0u);
    if (ctx.gpr[2] != 0u) ctx.set_gpr(5, 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-26544), ctx.gpr[5]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887F834:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(31, 0x0887F840u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26484)));
    ctx.pc = 0x08B0DCACu;
    return;
L_0887F840:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-26544)));
    goto L_0887F818;
L_0887F848:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26596)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u < ctx.gpr[4] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887F858:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0887F868u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 516u, 0x088A3068u>(ctx, &aot_mem) && ctx.pc == 0x0887F868u) goto L_0887F868;
    return;
L_0887F868:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887F874:
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26596)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-26596), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0887F95C;
      }
      goto L_0887F8A0;
    }
L_0887F8A0:
    ctx.set_gpr(19, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-26508)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(17, 2245u << 16u);
    ctx.set_gpr(18, 2245u << 16u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-26492), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[6];
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-26496), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0887F8EC;
      }
      goto L_0887F8C4;
    }
L_0887F8C4:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    goto L_0887F8C8;
L_0887F8C8:
    ctx.set_gpr(31, 0x0887F8D0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(10));
    ctx.pc = 0x08B0DD34u;
    return;
L_0887F8D0:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26496)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0887F8C8;
      }
      goto L_0887F8DC;
    }
L_0887F8DC:
    ctx.set_gpr(31, 0x0887F8E4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-26508)));
    ctx.pc = 0x08B0DE74u;
    return;
L_0887F8E4:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-26508), ctx.gpr[8]);
    goto L_0887F8EC;
L_0887F8EC:
    ctx.set_gpr(17, 2245u << 16u);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26504)));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[9];
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-26492)));
      if (branch_taken) {
          goto L_0887F920;
      }
      goto L_0887F900;
    }
L_0887F900:
    ctx.set_gpr(11, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[12] == ctx.gpr[11];
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0887F978;
      }
      goto L_0887F90C;
    }
L_0887F90C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26504)));
    ctx.set_gpr(31, 0x0887F918u);
    // nop
    ctx.pc = 0x08B0DE74u;
    return;
L_0887F918:
    ctx.set_gpr(14, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-26504), ctx.gpr[14]);
    goto L_0887F920;
L_0887F920:
    ctx.set_gpr(31, 0x0887F928u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 244u, 0x08898D30u>(ctx, &aot_mem) && ctx.pc == 0x0887F928u) goto L_0887F928;
    return;
L_0887F928:
    ctx.set_gpr(16, 2245u << 16u);
    ctx.set_gpr(15, 2247u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[15] + static_cast<std::uint32_t>(-4532)));
    ctx.set_gpr(31, 0x0887F93Cu);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-26500)));
    ctx.pc = 0x08B0DE24u;
    return;
L_0887F93C:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(31, 0x0887F948u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 529u, 0x088A3154u>(ctx, &aot_mem) && ctx.pc == 0x0887F948u) goto L_0887F948;
    return;
L_0887F948:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(31, 0x0887F954u);
    ctx.set_gpr(5, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 530u, 0x088A3168u>(ctx, &aot_mem) && ctx.pc == 0x0887F954u) goto L_0887F954;
    return;
L_0887F954:
    ctx.set_gpr(31, 0x0887F95Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 637u, 0x088A3C3Cu>(ctx, &aot_mem) && ctx.pc == 0x0887F95Cu) goto L_0887F95C;
    return;
L_0887F95C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
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
L_0887F978:
    ctx.set_gpr(31, 0x0887F980u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(10));
    ctx.pc = 0x08B0DD34u;
    return;
L_0887F980:
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-26492)));
    { const bool branch_taken = ctx.gpr[13] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0887F978;
      }
      goto L_0887F98C;
    }
L_0887F98C:
    // nop
    goto L_0887F90C;
L_0887F994:
    ctx.set_gpr(9, 2245u << 16u);
    ctx.set_gpr(7, ctx.gpr[9] + static_cast<std::uint32_t>(-26592));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-26592)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887F9D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0887F9E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 424u, 0x088A2324u>(ctx, &aot_mem) && ctx.pc == 0x0887F9E0u) goto L_0887F9E0;
    return;
L_0887F9E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887F9EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0887F9FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 431u, 0x088A237Cu>(ctx, &aot_mem) && ctx.pc == 0x0887F9FCu) goto L_0887F9FC;
    return;
L_0887F9FC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887FA14:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0887FA24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 598u, 0x088A388Cu>(ctx, &aot_mem) && ctx.pc == 0x0887FA24u) goto L_0887FA24;
    return;
L_0887FA24:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887FB4C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26496)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4524), 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(4, 0u + 0u);
      if (branch_taken) {
          goto L_0887FB94;
      }
      goto L_0887FB74;
    }
L_0887FB74:
    ctx.set_gpr(31, 0x0887FB7Cu);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-26496), 0u);
    ctx.pc = 0x08B0DE84u;
    return;
L_0887FB7C:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887FB94:
    ctx.set_gpr(31, 0x0887FB9Cu);
    // nop
    ctx.pc = 0x08B0DF34u;
    return;
L_0887FB9C:
    ctx.set_gpr(31, 0x0887FBA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 562u, 0x088A35B0u>(ctx, &aot_mem) && ctx.pc == 0x0887FBA4u) goto L_0887FBA4;
    return;
L_0887FBA4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4524)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26496)));
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4524), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(4, 0u + 0u);
      if (branch_taken) {
          goto L_0887FB94;
      }
      goto L_0887FBBC;
    }
L_0887FBBC:
    // nop
    goto L_0887FB74;
L_0887FBC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(17, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26492)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, 2247u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4520), 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(4, 0u + 0u);
      if (branch_taken) {
          goto L_0887FC0C;
      }
      goto L_0887FBEC;
    }
L_0887FBEC:
    ctx.set_gpr(31, 0x0887FBF4u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-26492), 0u);
    ctx.pc = 0x08B0DE84u;
    return;
L_0887FBF4:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887FC0C:
    ctx.set_gpr(31, 0x0887FC14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 586u, 0x088A3798u>(ctx, &aot_mem) && ctx.pc == 0x0887FC14u) goto L_0887FC14;
    return;
L_0887FC14:
    ctx.set_gpr(31, 0x0887FC1Cu);
    // nop
    ctx.pc = 0x08B0DF34u;
    return;
L_0887FC1C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4520)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26492)));
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4520), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(4, 0u + 0u);
      if (branch_taken) {
          goto L_0887FC0C;
      }
      goto L_0887FC34;
    }
L_0887FC34:
    // nop
    goto L_0887FBEC;
L_0887FC3C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0887FC4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 694u, 0x0889739Cu>(ctx, &aot_mem) && ctx.pc == 0x0887FC4Cu) goto L_0887FC4C;
    return;
L_0887FC4C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887FC58:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0887FC68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 699u, 0x088973F8u>(ctx, &aot_mem) && ctx.pc == 0x0887FC68u) goto L_0887FC68;
    return;
L_0887FC68:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887FC74:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887FC7C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0887FC8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 653u, 0x0889700Cu>(ctx, &aot_mem) && ctx.pc == 0x0887FC8Cu) goto L_0887FC8C;
    return;
L_0887FC8C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887FC98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0887FCA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 704u, 0x08897430u>(ctx, &aot_mem) && ctx.pc == 0x0887FCA8u) goto L_0887FCA8;
    return;
L_0887FCA8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887FCB4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0887FCC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 709u, 0x088974CCu>(ctx, &aot_mem) && ctx.pc == 0x0887FCC4u) goto L_0887FCC4;
    return;
L_0887FCC4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887FCD0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0887FCE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 719u, 0x08897564u>(ctx, &aot_mem) && ctx.pc == 0x0887FCE0u) goto L_0887FCE0;
    return;
L_0887FCE0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887FCEC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(31, 0x0887FD08u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 728u, 0x088976A8u>(ctx, &aot_mem) && ctx.pc == 0x0887FD08u) goto L_0887FD08;
    return;
L_0887FD08:
    ctx.set_gpr(31, 0x0887FD10u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 780u, 0x088978FCu>(ctx, &aot_mem) && ctx.pc == 0x0887FD10u) goto L_0887FD10;
    return;
L_0887FD10:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887FD28:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0887FD38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 730u, 0x088976ECu>(ctx, &aot_mem) && ctx.pc == 0x0887FD38u) goto L_0887FD38;
    return;
L_0887FD38:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887FD44:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0887FD54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 736u, 0x08897764u>(ctx, &aot_mem) && ctx.pc == 0x0887FD54u) goto L_0887FD54;
    return;
L_0887FD54:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887FD60:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887FD68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0887FD78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 738u, 0x08897780u>(ctx, &aot_mem) && ctx.pc == 0x0887FD78u) goto L_0887FD78;
    return;
L_0887FD78:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887FDA0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0887FDB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 777u, 0x088978D8u>(ctx, &aot_mem) && ctx.pc == 0x0887FDB0u) goto L_0887FDB0;
    return;
L_0887FDB0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887FDBC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0887FDCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 778u, 0x088978E0u>(ctx, &aot_mem) && ctx.pc == 0x0887FDCCu) goto L_0887FDCC;
    return;
L_0887FDCC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887FDF4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0887FE04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 782u, 0x08897918u>(ctx, &aot_mem) && ctx.pc == 0x0887FE04u) goto L_0887FE04;
    return;
L_0887FE04:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887FE10:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0887FE20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 787u, 0x0889799Cu>(ctx, &aot_mem) && ctx.pc == 0x0887FE20u) goto L_0887FE20;
    return;
L_0887FE20:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887FE2C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0887FE3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 789u, 0x088979D4u>(ctx, &aot_mem) && ctx.pc == 0x0887FE3Cu) goto L_0887FE3C;
    return;
L_0887FE3C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887FE48:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0887FE58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 790u, 0x088979DCu>(ctx, &aot_mem) && ctx.pc == 0x0887FE58u) goto L_0887FE58;
    return;
L_0887FE58:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887FED4:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887FEDC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887FEF4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0887FF04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 722u, 0x08897580u>(ctx, &aot_mem) && ctx.pc == 0x0887FF04u) goto L_0887FF04;
    return;
L_0887FF04:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887FF10:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0887FF20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 726u, 0x08897648u>(ctx, &aot_mem) && ctx.pc == 0x0887FF20u) goto L_0887FF20;
    return;
L_0887FF20:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887FF2C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0887FF3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 727u, 0x08897654u>(ctx, &aot_mem) && ctx.pc == 0x0887FF3Cu) goto L_0887FF3C;
    return;
L_0887FF3C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887FF48:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0887FF58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0036_entry, 36u, 724u, 0x0889759Cu>(ctx, &aot_mem) && ctx.pc == 0x0887FF58u) goto L_0887FF58;
    return;
L_0887FF58:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887FF64:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887FF74:
    jump_target = ctx.gpr[31];
    ctx.set_gpr(2, 0u + 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887FF7C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[22]);
    ctx.set_gpr(3, 2247u << 16u);
    ctx.set_gpr(22, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[21]);
    ctx.set_gpr(21, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[3] + static_cast<std::uint32_t>(-4516));
    ctx.set_gpr(3, ctx.gpr[6] + 0u);
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    goto L_0887FFC4;
L_0887FFC4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 6u, 0x0888004Cu>(ctx, &aot_mem); return;
      }
      goto L_0887FFCC;
    }
L_0887FFCC:
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 6u, 0x0888004Cu>(ctx, &aot_mem); return;
      }
      goto L_0887FFDC;
    }
L_0887FFDC:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 6u, 0x0888004Cu>(ctx, &aot_mem); return;
      }
      goto L_0887FFEC;
    }
L_0887FFEC:
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(180));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 6u, 0x0888004Cu>(ctx, &aot_mem); return;
      }
      goto L_0887FFFC;
    }
L_0887FFFC:
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.pc = 0x08880000u; return;
}

void recomp_unit_0030(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0030_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_30(Runtime &runtime) {
    runtime.register_generated_unit(30u, 0x0887C000u, 16384u, &recomp_unit_0030, &recomp_unit_0030_entry);
    runtime.register_function(0x0887C28Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C2A8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C2B4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C2BCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C344u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C358u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C360u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C368u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C378u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C394u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C3A4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C3ACu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C3B0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C3B8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C3BCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C3C4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C3C8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C3D0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C3D4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C3DCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C3E0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C3E8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C3ECu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C3F4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C3F8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C400u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C408u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C410u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C418u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C430u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C438u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C440u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C448u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C450u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C458u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C460u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C468u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C470u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C478u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C480u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C488u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C490u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C498u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C4A0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C4A8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C680u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C6A4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C6B4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C6BCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C748u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C764u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C76Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C77Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C784u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C788u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C790u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C794u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C79Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C7A0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C7A8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C7ACu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C7B4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C7B8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C7C0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C7C4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C7CCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C7D0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C7D8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C7E0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C7E8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C7F0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C7F8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C810u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C818u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C820u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C828u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C830u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C838u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C840u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C848u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C850u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C858u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C860u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C868u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C870u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C878u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C880u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C888u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C944u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C958u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C960u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C968u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CB70u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CB84u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CB8Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CB94u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CCA4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CCE0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CD00u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CD08u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CD30u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CD44u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CD4Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CD54u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D040u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D08Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D09Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D0A4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D0A8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D0ACu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D0E0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D0E4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D0ECu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D0F4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D0FCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D104u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D110u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D120u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D140u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D148u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D154u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D16Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D174u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D17Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D1B4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D1C4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D1D8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D1ECu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D1F8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D1FCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D210u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D218u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D220u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D22Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D244u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D258u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D270u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D280u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D288u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D294u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D2A8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D2B8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D2C4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D314u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D32Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D334u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D374u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D3A0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D3ACu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D3C0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D408u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D410u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D44Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D454u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D45Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D470u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D484u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D490u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D498u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D4B0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D4B8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D4C0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D4D0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D4E0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D4ECu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D4F4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D594u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D59Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D5ACu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D5B4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D5C0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D5C8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D5D0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D5DCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D5E4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D5F0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D5F8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D604u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D60Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D61Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D628u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D630u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D64Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D654u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D664u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D66Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D670u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D6C8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D6FCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D704u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D710u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D718u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D720u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D72Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D734u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D740u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D748u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D750u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D758u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D760u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D768u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D770u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D778u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D780u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D788u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D794u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D7A0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D840u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D84Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D854u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D860u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D868u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D8B8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D8BCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D8E4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D8F0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D8F8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D900u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D908u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D910u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D944u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D9B8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D9C8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D9D0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D9D4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D9E0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D9F0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DA48u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DA70u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DA78u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DA80u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DA84u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DA90u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DA94u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DA9Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DAA4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DAACu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DAB4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DABCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DAC4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DAF4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DB04u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DB0Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DB14u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DB90u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DBA4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DBB0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DBB8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DBBCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DBC8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DBD4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DBE4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DBE8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DBF0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DBFCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DC08u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DC14u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DC20u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DC2Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DC40u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DC4Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DC54u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DC5Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DC64u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DC88u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DC9Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DCB0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DCB8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DCCCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DCD4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DCE8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DCF0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DD04u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DD0Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DD14u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DD3Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DD40u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DD4Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DD6Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DD84u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DD88u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DD90u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DDA0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DDB0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DE58u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DE64u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DE94u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DE9Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DEA0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DF90u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DFB0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DFB8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DFD8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DFE0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DFF0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DFF4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E018u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E020u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E02Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E060u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E068u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E070u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E08Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E0C0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E0D4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E0E0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E0E8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E0F4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E0F8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E15Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E168u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E3A0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E518u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E53Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E548u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E560u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E568u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E570u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E578u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E580u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E588u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E590u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E598u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E5A0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E5A8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E5B0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E5B8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E5C0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E5D0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E5E0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E5F4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E614u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E630u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E654u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E674u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E67Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E684u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E6ACu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E6B4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E6B8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E6D0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E6D8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E6E0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E6E8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E6F0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E6F8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E700u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E70Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E71Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E72Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E734u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E73Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E744u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E74Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E754u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E75Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E764u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E76Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E77Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E784u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E788u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E790u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E794u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E79Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E7A0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E7A8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E7ACu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E7B4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E7B8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E7C0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E7C4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E7CCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E7D0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E7D8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E7DCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E7E8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E7F0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E7F8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E800u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E808u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E810u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E818u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E820u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E828u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E830u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E838u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E840u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E848u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E850u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E858u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E860u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E868u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E870u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E878u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E880u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E888u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E890u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E898u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E8A0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E8A8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E8B0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E8BCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E8DCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E8ECu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E8F8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E908u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E93Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E94Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E95Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E96Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E9D0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E9E0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EB2Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EB54u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EB74u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EB80u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EB94u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EB9Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EBB4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EBBCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EBD8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EBE0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EBF0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EBF8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EC00u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EC08u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EC20u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EC2Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EC34u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EC3Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EC50u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EC64u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EC74u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EC7Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EC84u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EC90u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EC98u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887ECACu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887ECB8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887ECC0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887ECDCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887ECECu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887ECF4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887ECFCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887ED10u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887ED18u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F1E8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F1FCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F208u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F214u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F21Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F22Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F234u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F23Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F244u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F270u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F280u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F290u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F298u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F2A8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F2B0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F2BCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F2C4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F2CCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F2D4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F2DCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F5B4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F5F0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F614u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F61Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F62Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F63Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F644u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F678u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F680u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F690u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F6D4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F6ECu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F6F4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F6F8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F718u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F730u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F738u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F740u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F74Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F754u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F75Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F764u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F76Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F774u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F7ACu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F7C4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F7DCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F7E4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F7F4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F814u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F818u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F834u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F840u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F848u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F858u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F868u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F874u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F8A0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F8C4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F8C8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F8D0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F8DCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F8E4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F8ECu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F900u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F90Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F918u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F920u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F928u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F93Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F948u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F954u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F95Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F978u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F980u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F98Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F994u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F9D0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F9E0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F9ECu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F9FCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FA14u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FA24u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FB4Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FB74u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FB7Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FB94u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FB9Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FBA4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FBBCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FBC4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FBECu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FBF4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FC0Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FC14u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FC1Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FC34u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FC3Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FC4Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FC58u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FC68u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FC74u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FC7Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FC8Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FC98u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FCA8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FCB4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FCC4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FCD0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FCE0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FCECu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FD08u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FD10u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FD28u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FD38u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FD44u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FD54u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FD60u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FD68u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FD78u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FDA0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FDB0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FDBCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FDCCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FDF4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FE04u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FE10u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FE20u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FE2Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FE3Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FE48u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FE58u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FED4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FEDCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FEF4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FF04u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FF10u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FF20u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FF2Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FF3Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FF48u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FF58u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FF64u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FF74u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FF7Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FFC4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FFCCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FFDCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FFECu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FFFCu, &recomp_unit_0030, "recomp_unit_0030");
}
} // namespace psprecomp
