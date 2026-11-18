#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0153[4095] = {
    1, 0, 0, 0, 2, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0, 7, 0, 8, 0,
    0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 10, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0,
    14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0,
    0, 22, 0, 23, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0,
    0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 37, 0, 38,
    0, 0, 0, 0, 0, 0, 39, 0, 0, 40, 0, 0, 41, 0, 0, 42, 0, 0, 43, 0, 0, 0, 44, 0, 45, 0, 0, 46, 0, 0, 47, 0,
    48, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0,
    0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 0, 63, 0, 0, 64, 0, 0, 65, 0,
    0, 0, 0, 0, 0, 66, 0, 0, 67, 0, 0, 0, 68, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 72,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76,
    0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0,
    0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0,
    0, 90, 0, 0, 0, 0, 0, 0, 91, 0, 0, 92, 0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 95, 0, 0, 0, 0, 0, 0,
    0, 96, 0, 0, 0, 0, 0, 0, 97, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0,
    0, 0, 101, 0, 0, 0, 0, 0, 102, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0,
    106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 110, 0,
    0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0,
    0, 0, 0, 0, 0, 115, 0, 116, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 121,
    0, 0, 0, 122, 0, 0, 0, 123, 0, 124, 0, 0, 125, 0, 0, 126, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 137,
    0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 145, 0, 0, 146, 0, 0, 0, 0, 0,
    147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 151, 0,
    0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0,
    0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 161, 0, 0, 0,
    0, 0, 0, 0, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 0, 167, 0,
    0, 168, 0, 0, 0, 0, 169, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 178, 0,
    0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 181, 182, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 183, 0, 0, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 190, 0, 191, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 193, 0, 0, 194, 0, 0, 195, 0, 0, 196, 0, 0, 0, 197, 0, 198, 0, 0, 199, 0, 0, 200, 0, 201, 0, 0, 0, 0, 0, 0, 0,
    202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 207, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 210, 0, 0, 211, 0, 0, 0,
    0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0,
    216, 0, 0, 217, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 222, 0,
    0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0,
    0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 232, 0, 0, 0, 0, 0,
    0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238, 0, 0, 239,
    0, 0, 0, 0, 240, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 245, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 248, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 250, 251,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 253, 254, 0, 255, 0, 0, 0, 0, 0, 0, 256, 257, 0,
    258, 0, 0, 0, 0, 0, 0, 259, 260, 0, 261, 0, 0, 262, 0, 0, 263, 0, 0, 264, 0, 0, 265, 0, 0, 266, 267, 0, 268, 0, 0, 0,
    0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 273, 0, 274, 0, 0, 0, 275, 0, 276, 0, 0,
    0, 0, 0, 277, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0,
    0, 283, 0, 0, 0, 284, 0, 0, 285, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0,
    290, 0, 0, 291, 0, 0, 292, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 297,
    0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 301,
    0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 304, 0, 0, 305, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0,
    308, 0, 0, 0, 0, 309, 0, 0, 310, 0, 311, 0, 0, 0, 312, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 314, 0, 315, 0, 0,
    0, 0, 316, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 319, 0,
    320, 0, 0, 321, 0, 0, 0, 0, 0, 0, 322, 0, 323, 0, 0, 0, 324, 0, 0, 325, 0, 326, 327, 0, 0, 328, 0, 0, 329, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0,
    0, 0, 333, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 339, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 341, 0, 0, 342, 0, 343, 0, 0, 0, 344, 0, 0, 345, 0, 0, 0, 346, 0,
    0, 347, 0, 0, 0, 348, 0, 0, 349, 0, 350, 0, 0, 351, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 354, 0, 0, 0,
    0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 356, 0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 359, 0, 0, 360, 0,
    0, 361, 0, 0, 362, 363, 0, 0, 364, 0, 365, 0, 0, 0, 366, 0, 0, 367, 0, 0, 368, 0, 0, 369, 0, 0, 370, 371, 0, 0, 372, 373,
    0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 378,
    0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 382, 0, 0, 0, 0,
    0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386,
    0, 0, 0, 0, 0, 387, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 404, 0, 0, 0,
    0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 408, 0, 0, 409, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0,
    0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0,
    0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0,
    0, 421, 0, 0, 0, 0, 0, 422, 0, 0, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 429, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 431, 432, 0, 433, 0, 0, 0, 0,
    434, 435, 0, 436, 0, 0, 0, 0, 0, 437, 0, 0, 0, 438, 439, 0, 440, 441, 0, 442, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 444, 0,
    0, 0, 0, 445, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 447, 0, 0, 0, 448, 0, 0, 0, 449, 0, 0, 0, 450, 0, 0, 0, 451, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 453, 0, 0, 454, 0, 0, 455, 0, 456, 0, 0, 0, 0, 457, 0, 0,
    0, 0, 458, 0, 0, 459, 0, 0, 0, 460, 0, 0, 461, 0, 0, 0, 0, 0, 462, 0, 463, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0,
    0, 0, 0, 0, 465, 0, 466, 467, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 470, 0,
    0, 0, 0, 0, 471, 0, 472, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 476, 0, 0, 477, 0, 0, 478, 0, 0, 479, 0, 480, 0, 0, 0, 0, 481, 0, 0, 0, 0, 482, 0, 0, 483, 0, 0, 0, 484,
    0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0,
    488, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 492,
    0, 493, 0, 0, 0, 0, 494, 495, 0, 496, 0, 0, 0, 497, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 499, 500, 0, 0, 501, 0, 0, 502,
    0, 0, 0, 503, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 506, 0, 0, 507, 0, 0, 0, 0, 508, 0, 0, 0,
    509, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 511, 0, 0, 512, 0, 0, 513, 0, 0, 514, 0, 515, 0, 0, 0,
    0, 0, 516, 0, 0, 0, 0, 0, 517, 0, 0, 0, 518, 519, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 0, 521, 522, 0, 0, 523,
    0, 524, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 529, 0, 0, 0, 530,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 532, 0, 0, 533, 0, 0, 0, 534, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 0, 537, 0, 538, 0, 0, 539, 0,
    0, 540, 0, 0, 541, 0, 542, 0, 0, 543, 0, 544, 0, 0, 0, 0, 0, 545, 0, 546, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0,
    548, 549, 0, 0, 550, 551, 0, 0, 552, 0, 553, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 555, 0, 0, 556, 0, 0, 0, 0, 0, 0, 0,
    557, 0, 0, 0, 0, 0, 0, 558, 0, 0, 0, 0, 559, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0,
    0, 561, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 563, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 564, 0, 0, 0, 0, 0,
    0, 565, 0, 0, 0, 0, 0, 566, 0, 567, 0, 0, 568, 0, 0, 569, 0, 0, 570, 0, 571, 0, 0, 572, 0, 573, 0, 0, 0, 0, 0, 574,
    0, 575, 0, 0, 0, 576, 0, 0, 0, 0, 0, 0, 0, 0, 577, 578, 0, 579, 580, 0, 581, 0, 582, 0, 0, 583, 0, 0, 0, 584, 0, 0,
    0, 585, 0, 0, 0, 586, 0, 0, 0, 587, 0, 0, 0, 0, 588, 0, 0, 0, 589, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 590, 0, 591, 0, 0, 592, 0, 0, 593, 0, 0, 594, 0, 595, 0, 0, 0, 0, 0, 596, 0, 0, 0, 0, 0, 597, 0, 0, 0, 598, 599,
    0, 0, 0, 600, 0, 0, 0, 0, 601, 0, 0, 602, 0, 0, 0, 0, 0, 0, 0, 603, 0, 0, 0, 0, 0, 0, 604, 0, 0, 0, 0, 0,
    0, 0, 0, 605, 0, 0, 0, 0, 0, 0, 0, 0, 606, 0, 0, 0, 0, 0, 0, 0, 0, 607, 0, 0, 0, 0, 0, 0, 0, 0, 608, 0,
    0, 0, 0, 0, 0, 0, 0, 609, 0, 0, 0, 0, 0, 0, 0, 0, 610, 0, 0, 0, 0, 0, 0, 611, 0, 0, 0, 0, 612, 0, 0, 0,
    613, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 614, 0, 615, 0, 0, 616, 0, 0, 617, 0, 0, 618, 0, 619, 0, 0, 0,
    0, 0, 620, 0, 0, 0, 0, 0, 621, 0, 0, 0, 622, 623, 0, 0, 0, 0, 624, 0, 0, 0, 625, 0, 626, 627, 0, 0, 0, 0, 0, 0,
    628, 0, 0, 629, 0, 630, 0, 0, 0, 0, 631, 0, 0, 632, 0, 0, 0, 0, 0, 0, 0, 633, 0, 0, 0, 0, 0, 0, 634, 0, 0, 0,
    0, 0, 0, 0, 0, 635, 0, 0, 0, 0, 0, 0, 0, 0, 636, 0, 0, 0, 0, 0, 0, 0, 0, 637, 0, 0, 0, 0, 0, 0, 0, 0,
    638, 0, 0, 0, 0, 0, 0, 0, 0, 639, 0, 0, 0, 0, 0, 0, 0, 0, 640, 0, 0, 0, 0, 0, 0, 641, 0, 0, 0, 0, 0, 0,
    0, 642, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 644, 0, 645, 0, 0, 646, 0, 0, 647, 0, 0, 648, 0,
    649, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0, 651, 0, 0, 0, 652, 653, 0, 0, 0, 0, 654, 0, 0, 0, 655, 0, 656, 657, 0, 0,
    0, 0, 0, 0, 658, 0, 659, 0, 660, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 661, 0, 0, 0, 0, 0, 662, 0, 0, 0, 0, 0, 663,
    0, 664, 0, 0, 0, 0, 0, 665, 0, 0, 0, 0, 0, 666, 0, 0, 0, 0, 667, 0, 0, 668, 0, 0, 669, 0, 0, 670, 0, 0, 0, 0,
    0, 671, 0, 0, 0, 0, 0, 672, 0, 673, 0, 0, 674, 0, 0, 0, 675, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 676, 0, 677, 0, 0, 678, 0, 0, 679, 0, 0, 680, 0, 681, 0, 0, 682, 0,
    0, 0, 0, 0, 0, 0, 683, 0, 684, 0, 0, 0, 0, 685, 0, 686, 0, 0, 0, 0, 687, 0, 0, 0, 0, 688, 0, 0, 0, 0, 0, 0,
    0, 689, 0, 0, 690, 0, 691, 0, 0, 0, 0, 0, 0, 692, 0, 693, 0, 0, 0, 0, 694, 0, 0, 695, 0, 696, 697, 0, 698, 0, 0, 0,
    699, 0, 0, 0, 700, 0, 0, 0, 0, 0, 0, 0, 701, 0, 0, 0, 702, 0, 703, 0, 0, 0, 0, 704, 0, 0, 705, 0, 0, 0, 0, 706,
    0, 0, 0, 707, 0, 0, 0, 0, 0, 0, 708, 0, 0, 0, 709, 0, 710, 0, 0, 711, 0, 712, 0, 0, 713, 714, 0, 0, 0, 0, 715,
};
void recomp_unit_0153_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A68000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0153[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A68000;
    case 2u: goto L_08A68010;
    case 3u: goto L_08A6801C;
    case 4u: goto L_08A68028;
    case 5u: goto L_08A68058;
    case 6u: goto L_08A68064;
    case 7u: goto L_08A68070;
    case 8u: goto L_08A68078;
    case 9u: goto L_08A6809C;
    case 10u: goto L_08A680A8;
    case 11u: goto L_08A680B4;
    case 12u: goto L_08A680E8;
    case 13u: goto L_08A680F4;
    case 14u: goto L_08A68100;
    case 15u: goto L_08A6814C;
    case 16u: goto L_08A6815C;
    case 17u: goto L_08A68174;
    case 18u: goto L_08A681BC;
    case 19u: goto L_08A681CC;
    case 20u: goto L_08A681E4;
    case 21u: goto L_08A681F8;
    case 22u: goto L_08A68204;
    case 23u: goto L_08A6820C;
    case 24u: goto L_08A68214;
    case 25u: goto L_08A6823C;
    case 26u: goto L_08A6824C;
    case 27u: goto L_08A68264;
    case 28u: goto L_08A68288;
    case 29u: goto L_08A68298;
    case 30u: goto L_08A682B0;
    case 31u: goto L_08A682D4;
    case 32u: goto L_08A682F4;
    case 33u: goto L_08A6834C;
    case 34u: goto L_08A683A0;
    case 35u: goto L_08A683D4;
    case 36u: goto L_08A683EC;
    case 37u: goto L_08A683F4;
    case 38u: goto L_08A683FC;
    case 39u: goto L_08A68418;
    case 40u: goto L_08A68424;
    case 41u: goto L_08A68430;
    case 42u: goto L_08A6843C;
    case 43u: goto L_08A68448;
    case 44u: goto L_08A68458;
    case 45u: goto L_08A68460;
    case 46u: goto L_08A6846C;
    case 47u: goto L_08A68478;
    case 48u: goto L_08A68480;
    case 49u: goto L_08A684A4;
    case 50u: goto L_08A684B0;
    case 51u: goto L_08A684CC;
    case 52u: goto L_08A684F4;
    case 53u: goto L_08A6851C;
    case 54u: goto L_08A68528;
    case 55u: goto L_08A68534;
    case 56u: goto L_08A68544;
    case 57u: goto L_08A68560;
    case 58u: goto L_08A6856C;
    case 59u: goto L_08A6858C;
    case 60u: goto L_08A685AC;
    case 61u: goto L_08A685C8;
    case 62u: goto L_08A685D4;
    case 63u: goto L_08A685E0;
    case 64u: goto L_08A685EC;
    case 65u: goto L_08A685F8;
    case 66u: goto L_08A68614;
    case 67u: goto L_08A68620;
    case 68u: goto L_08A68630;
    case 69u: goto L_08A6863C;
    case 70u: goto L_08A6864C;
    case 71u: goto L_08A6865C;
    case 72u: goto L_08A6867C;
    case 73u: goto L_08A686A8;
    case 74u: goto L_08A686B8;
    case 75u: goto L_08A686D0;
    case 76u: goto L_08A686FC;
    case 77u: goto L_08A6870C;
    case 78u: goto L_08A68724;
    case 79u: goto L_08A6872C;
    case 80u: goto L_08A68750;
    case 81u: goto L_08A68760;
    case 82u: goto L_08A68778;
    case 83u: goto L_08A6878C;
    case 84u: goto L_08A6879C;
    case 85u: goto L_08A687B4;
    case 86u: goto L_08A687C0;
    case 87u: goto L_08A687D4;
    case 88u: goto L_08A687E0;
    case 89u: goto L_08A687F0;
    case 90u: goto L_08A68804;
    case 91u: goto L_08A68820;
    case 92u: goto L_08A6882C;
    case 93u: goto L_08A68838;
    case 94u: goto L_08A6885C;
    case 95u: goto L_08A68864;
    case 96u: goto L_08A68884;
    case 97u: goto L_08A688A0;
    case 98u: goto L_08A688A4;
    case 99u: goto L_08A688D8;
    case 100u: goto L_08A688F8;
    case 101u: goto L_08A68908;
    case 102u: goto L_08A68920;
    case 103u: goto L_08A68924;
    case 104u: goto L_08A68950;
    case 105u: goto L_08A68970;
    case 106u: goto L_08A68980;
    case 107u: goto L_08A68994;
    case 108u: goto L_08A689AC;
    case 109u: goto L_08A689D8;
    case 110u: goto L_08A689F8;
    case 111u: goto L_08A68A08;
    case 112u: goto L_08A68A64;
    case 113u: goto L_08A68AC0;
    case 114u: goto L_08A68AF4;
    case 115u: goto L_08A68B14;
    case 116u: goto L_08A68B1C;
    case 117u: goto L_08A68B24;
    case 118u: goto L_08A68B3C;
    case 119u: goto L_08A68B60;
    case 120u: goto L_08A68B70;
    case 121u: goto L_08A68B7C;
    case 122u: goto L_08A68B8C;
    case 123u: goto L_08A68B9C;
    case 124u: goto L_08A68BA4;
    case 125u: goto L_08A68BB0;
    case 126u: goto L_08A68BBC;
    case 127u: goto L_08A68BC4;
    case 128u: goto L_08A68BE8;
    case 129u: goto L_08A68C18;
    case 130u: goto L_08A68C44;
    case 131u: goto L_08A68C60;
    case 132u: goto L_08A68C8C;
    case 133u: goto L_08A68CB4;
    case 134u: goto L_08A68CC0;
    case 135u: goto L_08A68CCC;
    case 136u: goto L_08A68CE0;
    case 137u: goto L_08A68CFC;
    case 138u: goto L_08A68D08;
    case 139u: goto L_08A68D30;
    case 140u: goto L_08A68D50;
    case 141u: goto L_08A68D68;
    case 142u: goto L_08A68D98;
    case 143u: goto L_08A68DC4;
    case 144u: goto L_08A68DD0;
    case 145u: goto L_08A68DDC;
    case 146u: goto L_08A68DE8;
    case 147u: goto L_08A68E00;
    case 148u: goto L_08A68E30;
    case 149u: goto L_08A68E5C;
    case 150u: goto L_08A68E6C;
    case 151u: goto L_08A68E78;
    case 152u: goto L_08A68E88;
    case 153u: goto L_08A68E98;
    case 154u: goto L_08A68EB8;
    case 155u: goto L_08A68EE4;
    case 156u: goto L_08A68EF4;
    case 157u: goto L_08A68F0C;
    case 158u: goto L_08A68F40;
    case 159u: goto L_08A68F50;
    case 160u: goto L_08A68F68;
    case 161u: goto L_08A68F70;
    case 162u: goto L_08A68F94;
    case 163u: goto L_08A68FA4;
    case 164u: goto L_08A68FBC;
    case 165u: goto L_08A68FD0;
    case 166u: goto L_08A68FE0;
    case 167u: goto L_08A68FF8;
    case 168u: goto L_08A69004;
    case 169u: goto L_08A69018;
    case 170u: goto L_08A69024;
    case 171u: goto L_08A69034;
    case 172u: goto L_08A69048;
    case 173u: goto L_08A69064;
    case 174u: goto L_08A69094;
    case 175u: goto L_08A690C0;
    case 176u: goto L_08A690CC;
    case 177u: goto L_08A690F0;
    case 178u: goto L_08A690F8;
    case 179u: goto L_08A69118;
    case 180u: goto L_08A69134;
    case 181u: goto L_08A69150;
    case 182u: goto L_08A69154;
    case 183u: goto L_08A69184;
    case 184u: goto L_08A691A4;
    case 185u: goto L_08A691B4;
    case 186u: goto L_08A69210;
    case 187u: goto L_08A69264;
    case 188u: goto L_08A69298;
    case 189u: goto L_08A692B0;
    case 190u: goto L_08A692B8;
    case 191u: goto L_08A692C0;
    case 192u: goto L_08A692D8;
    case 193u: goto L_08A69304;
    case 194u: goto L_08A69310;
    case 195u: goto L_08A6931C;
    case 196u: goto L_08A69328;
    case 197u: goto L_08A69338;
    case 198u: goto L_08A69340;
    case 199u: goto L_08A6934C;
    case 200u: goto L_08A69358;
    case 201u: goto L_08A69360;
    case 202u: goto L_08A69380;
    case 203u: goto L_08A693AC;
    case 204u: goto L_08A693C8;
    case 205u: goto L_08A693F4;
    case 206u: goto L_08A6941C;
    case 207u: goto L_08A69428;
    case 208u: goto L_08A69434;
    case 209u: goto L_08A69448;
    case 210u: goto L_08A69464;
    case 211u: goto L_08A69470;
    case 212u: goto L_08A69490;
    case 213u: goto L_08A694B0;
    case 214u: goto L_08A694C8;
    case 215u: goto L_08A694F4;
    case 216u: goto L_08A69500;
    case 217u: goto L_08A6950C;
    case 218u: goto L_08A69518;
    case 219u: goto L_08A69530;
    case 220u: goto L_08A6955C;
    case 221u: goto L_08A6956C;
    case 222u: goto L_08A69578;
    case 223u: goto L_08A69588;
    case 224u: goto L_08A69598;
    case 225u: goto L_08A695B8;
    case 226u: goto L_08A695E4;
    case 227u: goto L_08A695F4;
    case 228u: goto L_08A6960C;
    case 229u: goto L_08A69638;
    case 230u: goto L_08A69648;
    case 231u: goto L_08A69660;
    case 232u: goto L_08A69668;
    case 233u: goto L_08A6968C;
    case 234u: goto L_08A6969C;
    case 235u: goto L_08A696B4;
    case 236u: goto L_08A696C8;
    case 237u: goto L_08A696D8;
    case 238u: goto L_08A696F0;
    case 239u: goto L_08A696FC;
    case 240u: goto L_08A69710;
    case 241u: goto L_08A6971C;
    case 242u: goto L_08A6972C;
    case 243u: goto L_08A69740;
    case 244u: goto L_08A69758;
    case 245u: goto L_08A69784;
    case 246u: goto L_08A69790;
    case 247u: goto L_08A697B4;
    case 248u: goto L_08A697BC;
    case 249u: goto L_08A697DC;
    case 250u: goto L_08A697F8;
    case 251u: goto L_08A697FC;
    case 252u: goto L_08A69830;
    case 253u: goto L_08A6984C;
    case 254u: goto L_08A69850;
    case 255u: goto L_08A69858;
    case 256u: goto L_08A69874;
    case 257u: goto L_08A69878;
    case 258u: goto L_08A69880;
    case 259u: goto L_08A6989C;
    case 260u: goto L_08A698A0;
    case 261u: goto L_08A698A8;
    case 262u: goto L_08A698B4;
    case 263u: goto L_08A698C0;
    case 264u: goto L_08A698CC;
    case 265u: goto L_08A698D8;
    case 266u: goto L_08A698E4;
    case 267u: goto L_08A698E8;
    case 268u: goto L_08A698F0;
    case 269u: goto L_08A6990C;
    case 270u: goto L_08A6991C;
    case 271u: goto L_08A6993C;
    case 272u: goto L_08A6994C;
    case 273u: goto L_08A69954;
    case 274u: goto L_08A6995C;
    case 275u: goto L_08A6996C;
    case 276u: goto L_08A69974;
    case 277u: goto L_08A6998C;
    case 278u: goto L_08A69994;
    case 279u: goto L_08A699AC;
    case 280u: goto L_08A699C4;
    case 281u: goto L_08A699DC;
    case 282u: goto L_08A699F0;
    case 283u: goto L_08A69A04;
    case 284u: goto L_08A69A14;
    case 285u: goto L_08A69A20;
    case 286u: goto L_08A69A2C;
    case 287u: goto L_08A69A44;
    case 288u: goto L_08A69A54;
    case 289u: goto L_08A69A78;
    case 290u: goto L_08A69A80;
    case 291u: goto L_08A69A8C;
    case 292u: goto L_08A69A98;
    case 293u: goto L_08A69AAC;
    case 294u: goto L_08A69AC4;
    case 295u: goto L_08A69AD4;
    case 296u: goto L_08A69AEC;
    case 297u: goto L_08A69AFC;
    case 298u: goto L_08A69B0C;
    case 299u: goto L_08A69B34;
    case 300u: goto L_08A69B74;
    case 301u: goto L_08A69B7C;
    case 302u: goto L_08A69B88;
    case 303u: goto L_08A69BC4;
    case 304u: goto L_08A69BC8;
    case 305u: goto L_08A69BD4;
    case 306u: goto L_08A69BDC;
    case 307u: goto L_08A69BF4;
    case 308u: goto L_08A69C00;
    case 309u: goto L_08A69C14;
    case 310u: goto L_08A69C20;
    case 311u: goto L_08A69C28;
    case 312u: goto L_08A69C38;
    case 313u: goto L_08A69C50;
    case 314u: goto L_08A69C6C;
    case 315u: goto L_08A69C74;
    case 316u: goto L_08A69C88;
    case 317u: goto L_08A69C98;
    case 318u: goto L_08A69CEC;
    case 319u: goto L_08A69CF8;
    case 320u: goto L_08A69D00;
    case 321u: goto L_08A69D0C;
    case 322u: goto L_08A69D28;
    case 323u: goto L_08A69D30;
    case 324u: goto L_08A69D40;
    case 325u: goto L_08A69D4C;
    case 326u: goto L_08A69D54;
    case 327u: goto L_08A69D58;
    case 328u: goto L_08A69D64;
    case 329u: goto L_08A69D70;
    case 330u: goto L_08A69D98;
    case 331u: goto L_08A69DB4;
    case 332u: goto L_08A69DF8;
    case 333u: goto L_08A69E08;
    case 334u: goto L_08A69E20;
    case 335u: goto L_08A69E90;
    case 336u: goto L_08A69EB8;
    case 337u: goto L_08A69EC8;
    case 338u: goto L_08A69EE0;
    case 339u: goto L_08A69EF8;
    case 340u: goto L_08A69F30;
    case 341u: goto L_08A69F38;
    case 342u: goto L_08A69F44;
    case 343u: goto L_08A69F4C;
    case 344u: goto L_08A69F5C;
    case 345u: goto L_08A69F68;
    case 346u: goto L_08A69F78;
    case 347u: goto L_08A69F84;
    case 348u: goto L_08A69F94;
    case 349u: goto L_08A69FA0;
    case 350u: goto L_08A69FA8;
    case 351u: goto L_08A69FB4;
    case 352u: goto L_08A69FC4;
    case 353u: goto L_08A69FE4;
    case 354u: goto L_08A69FF0;
    case 355u: goto L_08A6A014;
    case 356u: goto L_08A6A030;
    case 357u: goto L_08A6A038;
    case 358u: goto L_08A6A060;
    case 359u: goto L_08A6A06C;
    case 360u: goto L_08A6A078;
    case 361u: goto L_08A6A084;
    case 362u: goto L_08A6A090;
    case 363u: goto L_08A6A094;
    case 364u: goto L_08A6A0A0;
    case 365u: goto L_08A6A0A8;
    case 366u: goto L_08A6A0B8;
    case 367u: goto L_08A6A0C4;
    case 368u: goto L_08A6A0D0;
    case 369u: goto L_08A6A0DC;
    case 370u: goto L_08A6A0E8;
    case 371u: goto L_08A6A0EC;
    case 372u: goto L_08A6A0F8;
    case 373u: goto L_08A6A0FC;
    case 374u: goto L_08A6A118;
    case 375u: goto L_08A6A128;
    case 376u: goto L_08A6A144;
    case 377u: goto L_08A6A174;
    case 378u: goto L_08A6A17C;
    case 379u: goto L_08A6A18C;
    case 380u: goto L_08A6A1B8;
    case 381u: goto L_08A6A1DC;
    case 382u: goto L_08A6A1EC;
    case 383u: goto L_08A6A208;
    case 384u: goto L_08A6A22C;
    case 385u: goto L_08A6A234;
    case 386u: goto L_08A6A27C;
    case 387u: goto L_08A6A294;
    case 388u: goto L_08A6A2A0;
    case 389u: goto L_08A6A2D8;
    case 390u: goto L_08A6A358;
    case 391u: goto L_08A6A3C0;
    case 392u: goto L_08A6A3D4;
    case 393u: goto L_08A6A408;
    case 394u: goto L_08A6A43C;
    case 395u: goto L_08A6A4A0;
    case 396u: goto L_08A6A4D4;
    case 397u: goto L_08A6A508;
    case 398u: goto L_08A6A53C;
    case 399u: goto L_08A6A584;
    case 400u: goto L_08A6A5B8;
    case 401u: goto L_08A6A5EC;
    case 402u: goto L_08A6A640;
    case 403u: goto L_08A6A65C;
    case 404u: goto L_08A6A670;
    case 405u: goto L_08A6A688;
    case 406u: goto L_08A6A6C4;
    case 407u: goto L_08A6A6DC;
    case 408u: goto L_08A6A718;
    case 409u: goto L_08A6A724;
    case 410u: goto L_08A6A73C;
    case 411u: goto L_08A6A778;
    case 412u: goto L_08A6A790;
    case 413u: goto L_08A6A7CC;
    case 414u: goto L_08A6A7F8;
    case 415u: goto L_08A6A81C;
    case 416u: goto L_08A6A838;
    case 417u: goto L_08A6A850;
    case 418u: goto L_08A6A88C;
    case 419u: goto L_08A6A8B4;
    case 420u: goto L_08A6A8E0;
    case 421u: goto L_08A6A904;
    case 422u: goto L_08A6A91C;
    case 423u: goto L_08A6A92C;
    case 424u: goto L_08A6A96C;
    case 425u: goto L_08A6A9C8;
    case 426u: goto L_08A6A9D4;
    case 427u: goto L_08A6AA04;
    case 428u: goto L_08A6AA64;
    case 429u: goto L_08A6AA74;
    case 430u: goto L_08A6AACC;
    case 431u: goto L_08A6AAE0;
    case 432u: goto L_08A6AAE4;
    case 433u: goto L_08A6AAEC;
    case 434u: goto L_08A6AB00;
    case 435u: goto L_08A6AB04;
    case 436u: goto L_08A6AB0C;
    case 437u: goto L_08A6AB24;
    case 438u: goto L_08A6AB34;
    case 439u: goto L_08A6AB38;
    case 440u: goto L_08A6AB40;
    case 441u: goto L_08A6AB44;
    case 442u: goto L_08A6AB4C;
    case 443u: goto L_08A6AB64;
    case 444u: goto L_08A6AB78;
    case 445u: goto L_08A6AB8C;
    case 446u: goto L_08A6ABA4;
    case 447u: goto L_08A6ABB8;
    case 448u: goto L_08A6ABC8;
    case 449u: goto L_08A6ABD8;
    case 450u: goto L_08A6ABE8;
    case 451u: goto L_08A6ABF8;
    case 452u: goto L_08A6AC34;
    case 453u: goto L_08A6AC40;
    case 454u: goto L_08A6AC4C;
    case 455u: goto L_08A6AC58;
    case 456u: goto L_08A6AC60;
    case 457u: goto L_08A6AC74;
    case 458u: goto L_08A6AC88;
    case 459u: goto L_08A6AC94;
    case 460u: goto L_08A6ACA4;
    case 461u: goto L_08A6ACB0;
    case 462u: goto L_08A6ACC8;
    case 463u: goto L_08A6ACD0;
    case 464u: goto L_08A6ACF0;
    case 465u: goto L_08A6AD10;
    case 466u: goto L_08A6AD18;
    case 467u: goto L_08A6AD1C;
    case 468u: goto L_08A6AD34;
    case 469u: goto L_08A6AD64;
    case 470u: goto L_08A6AD78;
    case 471u: goto L_08A6AD90;
    case 472u: goto L_08A6AD98;
    case 473u: goto L_08A6ADA8;
    case 474u: goto L_08A6ADC4;
    case 475u: goto L_08A6ADD8;
    case 476u: goto L_08A6AE0C;
    case 477u: goto L_08A6AE18;
    case 478u: goto L_08A6AE24;
    case 479u: goto L_08A6AE30;
    case 480u: goto L_08A6AE38;
    case 481u: goto L_08A6AE4C;
    case 482u: goto L_08A6AE60;
    case 483u: goto L_08A6AE6C;
    case 484u: goto L_08A6AE7C;
    case 485u: goto L_08A6AE94;
    case 486u: goto L_08A6AEB4;
    case 487u: goto L_08A6AEE8;
    case 488u: goto L_08A6AF00;
    case 489u: goto L_08A6AF14;
    case 490u: goto L_08A6AF3C;
    case 491u: goto L_08A6AF78;
    case 492u: goto L_08A6AF7C;
    case 493u: goto L_08A6AF84;
    case 494u: goto L_08A6AF98;
    case 495u: goto L_08A6AF9C;
    case 496u: goto L_08A6AFA4;
    case 497u: goto L_08A6AFB4;
    case 498u: goto L_08A6AFCC;
    case 499u: goto L_08A6AFE0;
    case 500u: goto L_08A6AFE4;
    case 501u: goto L_08A6AFF0;
    case 502u: goto L_08A6AFFC;
    case 503u: goto L_08A6B00C;
    case 504u: goto L_08A6B020;
    case 505u: goto L_08A6B044;
    case 506u: goto L_08A6B050;
    case 507u: goto L_08A6B05C;
    case 508u: goto L_08A6B070;
    case 509u: goto L_08A6B080;
    case 510u: goto L_08A6B0BC;
    case 511u: goto L_08A6B0C4;
    case 512u: goto L_08A6B0D0;
    case 513u: goto L_08A6B0DC;
    case 514u: goto L_08A6B0E8;
    case 515u: goto L_08A6B0F0;
    case 516u: goto L_08A6B108;
    case 517u: goto L_08A6B120;
    case 518u: goto L_08A6B130;
    case 519u: goto L_08A6B134;
    case 520u: goto L_08A6B160;
    case 521u: goto L_08A6B16C;
    case 522u: goto L_08A6B170;
    case 523u: goto L_08A6B17C;
    case 524u: goto L_08A6B184;
    case 525u: goto L_08A6B190;
    case 526u: goto L_08A6B1B0;
    case 527u: goto L_08A6B1BC;
    case 528u: goto L_08A6B1DC;
    case 529u: goto L_08A6B1EC;
    case 530u: goto L_08A6B1FC;
    case 531u: goto L_08A6B23C;
    case 532u: goto L_08A6B258;
    case 533u: goto L_08A6B264;
    case 534u: goto L_08A6B274;
    case 535u: goto L_08A6B2B0;
    case 536u: goto L_08A6B2CC;
    case 537u: goto L_08A6B2E4;
    case 538u: goto L_08A6B2EC;
    case 539u: goto L_08A6B2F8;
    case 540u: goto L_08A6B304;
    case 541u: goto L_08A6B310;
    case 542u: goto L_08A6B318;
    case 543u: goto L_08A6B324;
    case 544u: goto L_08A6B32C;
    case 545u: goto L_08A6B344;
    case 546u: goto L_08A6B34C;
    case 547u: goto L_08A6B35C;
    case 548u: goto L_08A6B380;
    case 549u: goto L_08A6B384;
    case 550u: goto L_08A6B390;
    case 551u: goto L_08A6B394;
    case 552u: goto L_08A6B3A0;
    case 553u: goto L_08A6B3A8;
    case 554u: goto L_08A6B3B4;
    case 555u: goto L_08A6B3D4;
    case 556u: goto L_08A6B3E0;
    case 557u: goto L_08A6B400;
    case 558u: goto L_08A6B41C;
    case 559u: goto L_08A6B430;
    case 560u: goto L_08A6B468;
    case 561u: goto L_08A6B484;
    case 562u: goto L_08A6B4A0;
    case 563u: goto L_08A6B4B4;
    case 564u: goto L_08A6B4E8;
    case 565u: goto L_08A6B504;
    case 566u: goto L_08A6B51C;
    case 567u: goto L_08A6B524;
    case 568u: goto L_08A6B530;
    case 569u: goto L_08A6B53C;
    case 570u: goto L_08A6B548;
    case 571u: goto L_08A6B550;
    case 572u: goto L_08A6B55C;
    case 573u: goto L_08A6B564;
    case 574u: goto L_08A6B57C;
    case 575u: goto L_08A6B584;
    case 576u: goto L_08A6B594;
    case 577u: goto L_08A6B5B8;
    case 578u: goto L_08A6B5BC;
    case 579u: goto L_08A6B5C4;
    case 580u: goto L_08A6B5C8;
    case 581u: goto L_08A6B5D0;
    case 582u: goto L_08A6B5D8;
    case 583u: goto L_08A6B5E4;
    case 584u: goto L_08A6B5F4;
    case 585u: goto L_08A6B604;
    case 586u: goto L_08A6B614;
    case 587u: goto L_08A6B624;
    case 588u: goto L_08A6B638;
    case 589u: goto L_08A6B648;
    case 590u: goto L_08A6B684;
    case 591u: goto L_08A6B68C;
    case 592u: goto L_08A6B698;
    case 593u: goto L_08A6B6A4;
    case 594u: goto L_08A6B6B0;
    case 595u: goto L_08A6B6B8;
    case 596u: goto L_08A6B6D0;
    case 597u: goto L_08A6B6E8;
    case 598u: goto L_08A6B6F8;
    case 599u: goto L_08A6B6FC;
    case 600u: goto L_08A6B70C;
    case 601u: goto L_08A6B720;
    case 602u: goto L_08A6B72C;
    case 603u: goto L_08A6B74C;
    case 604u: goto L_08A6B768;
    case 605u: goto L_08A6B78C;
    case 606u: goto L_08A6B7B0;
    case 607u: goto L_08A6B7D4;
    case 608u: goto L_08A6B7F8;
    case 609u: goto L_08A6B81C;
    case 610u: goto L_08A6B840;
    case 611u: goto L_08A6B85C;
    case 612u: goto L_08A6B870;
    case 613u: goto L_08A6B880;
    case 614u: goto L_08A6B8BC;
    case 615u: goto L_08A6B8C4;
    case 616u: goto L_08A6B8D0;
    case 617u: goto L_08A6B8DC;
    case 618u: goto L_08A6B8E8;
    case 619u: goto L_08A6B8F0;
    case 620u: goto L_08A6B908;
    case 621u: goto L_08A6B920;
    case 622u: goto L_08A6B930;
    case 623u: goto L_08A6B934;
    case 624u: goto L_08A6B948;
    case 625u: goto L_08A6B958;
    case 626u: goto L_08A6B960;
    case 627u: goto L_08A6B964;
    case 628u: goto L_08A6B980;
    case 629u: goto L_08A6B98C;
    case 630u: goto L_08A6B994;
    case 631u: goto L_08A6B9A8;
    case 632u: goto L_08A6B9B4;
    case 633u: goto L_08A6B9D4;
    case 634u: goto L_08A6B9F0;
    case 635u: goto L_08A6BA14;
    case 636u: goto L_08A6BA38;
    case 637u: goto L_08A6BA5C;
    case 638u: goto L_08A6BA80;
    case 639u: goto L_08A6BAA4;
    case 640u: goto L_08A6BAC8;
    case 641u: goto L_08A6BAE4;
    case 642u: goto L_08A6BB04;
    case 643u: goto L_08A6BB18;
    case 644u: goto L_08A6BB4C;
    case 645u: goto L_08A6BB54;
    case 646u: goto L_08A6BB60;
    case 647u: goto L_08A6BB6C;
    case 648u: goto L_08A6BB78;
    case 649u: goto L_08A6BB80;
    case 650u: goto L_08A6BB98;
    case 651u: goto L_08A6BBB0;
    case 652u: goto L_08A6BBC0;
    case 653u: goto L_08A6BBC4;
    case 654u: goto L_08A6BBD8;
    case 655u: goto L_08A6BBE8;
    case 656u: goto L_08A6BBF0;
    case 657u: goto L_08A6BBF4;
    case 658u: goto L_08A6BC10;
    case 659u: goto L_08A6BC18;
    case 660u: goto L_08A6BC20;
    case 661u: goto L_08A6BC4C;
    case 662u: goto L_08A6BC64;
    case 663u: goto L_08A6BC7C;
    case 664u: goto L_08A6BC84;
    case 665u: goto L_08A6BC9C;
    case 666u: goto L_08A6BCB4;
    case 667u: goto L_08A6BCC8;
    case 668u: goto L_08A6BCD4;
    case 669u: goto L_08A6BCE0;
    case 670u: goto L_08A6BCEC;
    case 671u: goto L_08A6BD04;
    case 672u: goto L_08A6BD1C;
    case 673u: goto L_08A6BD24;
    case 674u: goto L_08A6BD30;
    case 675u: goto L_08A6BD40;
    case 676u: goto L_08A6BDB8;
    case 677u: goto L_08A6BDC0;
    case 678u: goto L_08A6BDCC;
    case 679u: goto L_08A6BDD8;
    case 680u: goto L_08A6BDE4;
    case 681u: goto L_08A6BDEC;
    case 682u: goto L_08A6BDF8;
    case 683u: goto L_08A6BE18;
    case 684u: goto L_08A6BE20;
    case 685u: goto L_08A6BE34;
    case 686u: goto L_08A6BE3C;
    case 687u: goto L_08A6BE50;
    case 688u: goto L_08A6BE64;
    case 689u: goto L_08A6BE84;
    case 690u: goto L_08A6BE90;
    case 691u: goto L_08A6BE98;
    case 692u: goto L_08A6BEB4;
    case 693u: goto L_08A6BEBC;
    case 694u: goto L_08A6BED0;
    case 695u: goto L_08A6BEDC;
    case 696u: goto L_08A6BEE4;
    case 697u: goto L_08A6BEE8;
    case 698u: goto L_08A6BEF0;
    case 699u: goto L_08A6BF00;
    case 700u: goto L_08A6BF10;
    case 701u: goto L_08A6BF30;
    case 702u: goto L_08A6BF40;
    case 703u: goto L_08A6BF48;
    case 704u: goto L_08A6BF5C;
    case 705u: goto L_08A6BF68;
    case 706u: goto L_08A6BF7C;
    case 707u: goto L_08A6BF8C;
    case 708u: goto L_08A6BFA8;
    case 709u: goto L_08A6BFB8;
    case 710u: goto L_08A6BFC0;
    case 711u: goto L_08A6BFCC;
    case 712u: goto L_08A6BFD4;
    case 713u: goto L_08A6BFE0;
    case 714u: goto L_08A6BFE4;
    case 715u: goto L_08A6BFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A68000:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A68078;
      }
      goto L_08A68010;
    }
L_08A68010:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A68028;
      }
      goto L_08A6801C;
    }
L_08A6801C:
    ctx.set_gpr(1, ctx.gpr[12] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A68078;
      }
      goto L_08A68028;
    }
L_08A68028:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(12, ctx.gpr[3] << 3u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[12]);
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A68028;
      }
      goto L_08A68058;
    }
L_08A68058:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A68070;
      }
      goto L_08A68064;
    }
L_08A68064:
    ctx.set_gpr(1, ctx.gpr[12] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A68028;
      }
      goto L_08A68070;
    }
L_08A68070:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A68100;
      }
      goto L_08A68078;
    }
L_08A68078:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(12, ctx.gpr[5] << 3u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[12]);
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A68100;
      }
      goto L_08A6809C;
    }
L_08A6809C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A680B4;
      }
      goto L_08A680A8;
    }
L_08A680A8:
    ctx.set_gpr(1, ctx.gpr[6] < ctx.gpr[12] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A68100;
      }
      goto L_08A680B4;
    }
L_08A680B4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(13, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(12, ctx.gpr[5] << 3u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[13] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[12]);
    ctx.set_gpr(12, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A680B4;
      }
      goto L_08A680E8;
    }
L_08A680E8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A68100;
      }
      goto L_08A680F4;
    }
L_08A680F4:
    ctx.set_gpr(1, ctx.gpr[6] < ctx.gpr[12] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A680B4;
      }
      goto L_08A68100;
    }
L_08A68100:
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(8, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[8]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[6] - ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[7] - ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[4] >> 18u);
    ctx.set_gpr(3, ctx.gpr[3] << 14u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A6815C;
      }
      goto L_08A6814C;
    }
L_08A6814C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A68174;
      }
      goto L_08A6815C;
    }
L_08A6815C:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[2];
    goto L_08A68174;
L_08A68174:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[4] + ctx.gpr[8]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 3u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, ctx.gpr[7] < ctx.gpr[4] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[7] - ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[6] - ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[4] >> 18u);
    ctx.set_gpr(3, ctx.gpr[3] << 14u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A681CC;
      }
      goto L_08A681BC;
    }
L_08A681BC:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A681E4;
      }
      goto L_08A681CC;
    }
L_08A681CC:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_08A681E4;
L_08A681E4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32408)));
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A68204;
      }
      goto L_08A681F8;
    }
L_08A681F8:
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6820C;
      }
      goto L_08A68204;
    }
L_08A68204:
    ctx.fpr[0] = ctx.fpr[2] / ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A6820C;
L_08A6820C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A68214:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(16, ctx.gpr[10] + 0u);
    ctx.set_gpr(3, ctx.gpr[6] >> 18u);
    ctx.set_gpr(2, ctx.gpr[7] << 14u);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A6824C;
      }
      goto L_08A6823C;
    }
L_08A6823C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A68264;
      }
      goto L_08A6824C;
    }
L_08A6824C:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[12];
    goto L_08A68264;
L_08A68264:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] >> 18u);
    ctx.set_gpr(2, ctx.gpr[2] << 14u);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A68298;
      }
      goto L_08A68288;
    }
L_08A68288:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A682B0;
      }
      goto L_08A68298;
    }
L_08A68298:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[20];
    goto L_08A682B0;
L_08A682B0:
    ctx.fpr[0] = ctx.fpr[12] / ctx.fpr[20];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_fpr_bits(13, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08A682D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 644u, 0x0880F004u>(ctx, &aot_mem) && ctx.pc == 0x08A682D4u) goto L_08A682D4;
    return;
L_08A682D4:
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[20];
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A682F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(22, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(3, ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(17, ctx.gpr[6] - ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[7] - ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A683A0;
      }
      goto L_08A6834C;
    }
L_08A6834C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(21, ctx.gpr[19] + ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[21] < ctx.gpr[19] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(23, ctx.gpr[2] + ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A683EC;
      }
      goto L_08A683A0;
    }
L_08A683A0:
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
    ctx.set_gpr(31, 0x08A683D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 110u, 0x0881C82Cu>(ctx, &aot_mem) && ctx.pc == 0x08A683D4u) goto L_08A683D4;
    return;
L_08A683D4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[3]);
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    ctx.set_gpr(7, ctx.gpr[23] + 0u);
    goto L_08A683EC;
L_08A683EC:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A68424;
      }
      goto L_08A683F4;
    }
L_08A683F4:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A68424;
      }
      goto L_08A683FC;
    }
L_08A683FC:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(240)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A68418u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A68418u) goto L_08A68418;
    return;
L_08A68418:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A688A4;
      }
      goto L_08A68424;
    }
L_08A68424:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A685D4;
      }
      goto L_08A68430;
    }
L_08A68430:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A68448;
      }
      goto L_08A6843C;
    }
L_08A6843C:
    ctx.set_gpr(1, ctx.gpr[21] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A685D4;
      }
      goto L_08A68448;
    }
L_08A68448:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A68544;
      }
      goto L_08A68458;
    }
L_08A68458:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A684B0;
      }
      goto L_08A68460;
    }
L_08A68460:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A684B0;
      }
      goto L_08A6846C;
    }
L_08A6846C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A68480;
      }
      goto L_08A68478;
    }
L_08A68478:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A685AC;
      }
      goto L_08A68480;
    }
L_08A68480:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(240)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A684A4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A684A4u) goto L_08A684A4;
    return;
L_08A684A4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A688A4;
      }
      goto L_08A684B0;
    }
L_08A684B0:
    ctx.set_gpr(3, ctx.gpr[17] < ctx.gpr[19] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[17] - ctx.gpr[19]);
    ctx.set_gpr(2, ctx.gpr[16] - ctx.gpr[18]);
    ctx.set_gpr(5, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(31, 0x08A684CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 363u, 0x08A66580u>(ctx, &aot_mem) && ctx.pc == 0x08A684CCu) goto L_08A684CC;
    return;
L_08A684CC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(17, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[19] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A68620;
      }
      goto L_08A684F4;
    }
L_08A684F4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A68620;
      }
      goto L_08A6851C;
    }
L_08A6851C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A68534;
      }
      goto L_08A68528;
    }
L_08A68528:
    ctx.set_gpr(1, ctx.gpr[17] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A68620;
      }
      goto L_08A68534;
    }
L_08A68534:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A68620;
      }
      goto L_08A68544;
    }
L_08A68544:
    ctx.set_gpr(3, ctx.gpr[17] < ctx.gpr[19] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[17] - ctx.gpr[19]);
    ctx.set_gpr(2, ctx.gpr[16] - ctx.gpr[18]);
    ctx.set_gpr(5, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(31, 0x08A68560u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 363u, 0x08A66580u>(ctx, &aot_mem) && ctx.pc == 0x08A68560u) goto L_08A68560;
    return;
L_08A68560:
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6858C;
      }
      goto L_08A6856C;
    }
L_08A6856C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(3, ctx.gpr[21] < ctx.gpr[4] ? 1u : 0u);
    ctx.set_gpr(17, ctx.gpr[21] - ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[23] - ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] - ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A68620;
      }
      goto L_08A6858C;
    }
L_08A6858C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(17, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[19] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A68620;
      }
      goto L_08A685AC;
    }
L_08A685AC:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(240)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A685C8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A685C8u) goto L_08A685C8;
    return;
L_08A685C8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A688A4;
      }
      goto L_08A685D4;
    }
L_08A685D4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A68620;
      }
      goto L_08A685E0;
    }
L_08A685E0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A685F8;
      }
      goto L_08A685EC;
    }
L_08A685EC:
    ctx.set_gpr(1, ctx.gpr[17] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A68620;
      }
      goto L_08A685F8;
    }
L_08A685F8:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(240)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A68614u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A68614u) goto L_08A68614;
    return;
L_08A68614:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A688A4;
      }
      goto L_08A68620;
    }
L_08A68620:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6882C;
      }
      goto L_08A68630;
    }
L_08A68630:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6864C;
      }
      goto L_08A6863C;
    }
L_08A6863C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6882C;
      }
      goto L_08A6864C;
    }
L_08A6864C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A687F0;
      }
      goto L_08A6865C;
    }
L_08A6865C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6872C;
      }
      goto L_08A6867C;
    }
L_08A6867C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(4, ctx.gpr[17] < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[17] - ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, ctx.gpr[16] - ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] >> 18u);
    ctx.set_gpr(2, ctx.gpr[2] << 14u);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A686B8;
      }
      goto L_08A686A8;
    }
L_08A686A8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A686D0;
      }
      goto L_08A686B8;
    }
L_08A686B8:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_08A686D0;
L_08A686D0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(4, ctx.gpr[21] < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[21] - ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, ctx.gpr[23] - ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] >> 18u);
    ctx.set_gpr(2, ctx.gpr[2] << 14u);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A6870C;
      }
      goto L_08A686FC;
    }
L_08A686FC:
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A68724;
      }
      goto L_08A6870C;
    }
L_08A6870C:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[20];
    goto L_08A68724;
L_08A68724:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A687C0;
      }
      goto L_08A6872C;
    }
L_08A6872C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] >> 18u);
    ctx.set_gpr(2, ctx.gpr[2] << 14u);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A68760;
      }
      goto L_08A68750;
    }
L_08A68750:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A68778;
      }
      goto L_08A68760;
    }
L_08A68760:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[20];
    goto L_08A68778;
L_08A68778:
    ctx.set_gpr(3, ctx.gpr[17] >> 18u);
    ctx.set_gpr(2, ctx.gpr[16] << 14u);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A6879C;
      }
      goto L_08A6878C;
    }
L_08A6878C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A687B4;
      }
      goto L_08A6879C;
    }
L_08A6879C:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[12];
    goto L_08A687B4;
L_08A687B4:
    ctx.set_fpr_bits(13, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08A687C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 644u, 0x0880F004u>(ctx, &aot_mem) && ctx.pc == 0x08A687C0u) goto L_08A687C0;
    return;
L_08A687C0:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32408)));
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A687E0;
      }
      goto L_08A687D4;
    }
L_08A687D4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A68884;
      }
      goto L_08A687E0;
    }
L_08A687E0:
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[20];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A68884;
      }
      goto L_08A687F0;
    }
L_08A687F0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A68804u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A68804u) goto L_08A68804;
    return;
L_08A68804:
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(240)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A68820u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A68820u) goto L_08A68820;
    return;
L_08A68820:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A688A4;
      }
      goto L_08A6882C;
    }
L_08A6882C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A68864;
      }
      goto L_08A68838;
    }
L_08A68838:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(10, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(11, ctx.gpr[20] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08A6885Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 657u, 0x08A67FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A6885Cu) goto L_08A6885C;
    return;
L_08A6885C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A68884;
      }
      goto L_08A68864;
    }
L_08A68864:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(10, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(31, 0x08A68884u);
    // nop
    goto L_08A68214;
L_08A68884:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(31, 0x08A688A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 623u, 0x08A67BACu>(ctx, &aot_mem) && ctx.pc == 0x08A688A0u) goto L_08A688A0;
    return;
L_08A688A0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08A688A4;
L_08A688A4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A688D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A688F8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A688F8u) goto L_08A688F8;
    return;
L_08A688F8:
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(3, 0u + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A68924;
      }
      goto L_08A68908;
    }
L_08A68908:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(196)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A68920u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A68920u) goto L_08A68920;
    return;
L_08A68920:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    goto L_08A68924;
L_08A68924:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[6]);
    ctx.set_gpr(4, ctx.gpr[2] < ctx.gpr[4] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A68950:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A68970u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A68970u) goto L_08A68970;
    return;
L_08A68970:
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A689AC;
      }
      goto L_08A68980;
    }
L_08A68980:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A68994u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A68994u) goto L_08A68994;
    return;
L_08A68994:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(6, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    goto L_08A689AC;
L_08A689AC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(3, ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A689D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(10, ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A689F8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A689F8u) goto L_08A689F8;
    return;
L_08A689F8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A68A08:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-112));
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
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[10]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(3, ctx.gpr[8] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(17, ctx.gpr[8] - ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[9] - ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A68AC0;
      }
      goto L_08A68A64;
    }
L_08A68A64:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[21] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[22]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A68B14;
      }
      goto L_08A68AC0;
    }
L_08A68AC0:
    ctx.set_gpr(21, 0u + 0u);
    ctx.set_gpr(22, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
    ctx.set_gpr(31, 0x08A68AF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 110u, 0x0881C82Cu>(ctx, &aot_mem) && ctx.pc == 0x08A68AF4u) goto L_08A68AF4;
    return;
L_08A68AF4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(88)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(92)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    goto L_08A68B14;
L_08A68B14:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A68B60;
      }
      goto L_08A68B1C;
    }
L_08A68B1C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A68B60;
      }
      goto L_08A68B24;
    }
L_08A68B24:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A68B3Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A68B3Cu) goto L_08A68B3C;
    return;
L_08A68B3C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69154;
      }
      goto L_08A68B60;
    }
L_08A68B60:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A68DC4;
      }
      goto L_08A68B70;
    }
L_08A68B70:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A68B8C;
      }
      goto L_08A68B7C;
    }
L_08A68B7C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A68DC4;
      }
      goto L_08A68B8C;
    }
L_08A68B8C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A68CE0;
      }
      goto L_08A68B9C;
    }
L_08A68B9C:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A68C44;
      }
      goto L_08A68BA4;
    }
L_08A68BA4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A68C44;
      }
      goto L_08A68BB0;
    }
L_08A68BB0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A68BC4;
      }
      goto L_08A68BBC;
    }
L_08A68BBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A68D50;
      }
      goto L_08A68BC4;
    }
L_08A68BC4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A68BE8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A68BE8u) goto L_08A68BE8;
    return;
L_08A68BE8:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(172)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A68C18u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A68C18u) goto L_08A68C18;
    return;
L_08A68C18:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69154;
      }
      goto L_08A68C44;
    }
L_08A68C44:
    ctx.set_gpr(3, ctx.gpr[17] < ctx.gpr[21] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[17] - ctx.gpr[21]);
    ctx.set_gpr(2, ctx.gpr[16] - ctx.gpr[22]);
    ctx.set_gpr(5, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(31, 0x08A68C60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 363u, 0x08A66580u>(ctx, &aot_mem) && ctx.pc == 0x08A68C60u) goto L_08A68C60;
    return;
L_08A68C60:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(17, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[21] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[22]);
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A68E5C;
      }
      goto L_08A68C8C;
    }
L_08A68C8C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A68E5C;
      }
      goto L_08A68CB4;
    }
L_08A68CB4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A68CCC;
      }
      goto L_08A68CC0;
    }
L_08A68CC0:
    ctx.set_gpr(1, ctx.gpr[17] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A68E5C;
      }
      goto L_08A68CCC;
    }
L_08A68CCC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A68E5C;
      }
      goto L_08A68CE0;
    }
L_08A68CE0:
    ctx.set_gpr(3, ctx.gpr[17] < ctx.gpr[21] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[17] - ctx.gpr[21]);
    ctx.set_gpr(2, ctx.gpr[16] - ctx.gpr[22]);
    ctx.set_gpr(5, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(31, 0x08A68CFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 363u, 0x08A66580u>(ctx, &aot_mem) && ctx.pc == 0x08A68CFCu) goto L_08A68CFC;
    return;
L_08A68CFC:
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A68D30;
      }
      goto L_08A68D08;
    }
L_08A68D08:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, ctx.gpr[2] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(17, ctx.gpr[2] - ctx.gpr[5]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[4]);
    ctx.set_gpr(16, ctx.gpr[2] - ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A68E5C;
      }
      goto L_08A68D30;
    }
L_08A68D30:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(17, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[21] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[22]);
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A68E5C;
      }
      goto L_08A68D50;
    }
L_08A68D50:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A68D68u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A68D68u) goto L_08A68D68;
    return;
L_08A68D68:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(172)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A68D98u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A68D98u) goto L_08A68D98;
    return;
L_08A68D98:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69154;
      }
      goto L_08A68DC4;
    }
L_08A68DC4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A68E5C;
      }
      goto L_08A68DD0;
    }
L_08A68DD0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A68DE8;
      }
      goto L_08A68DDC;
    }
L_08A68DDC:
    ctx.set_gpr(1, ctx.gpr[17] < ctx.gpr[21] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A68E5C;
      }
      goto L_08A68DE8;
    }
L_08A68DE8:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A68E00u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A68E00u) goto L_08A68E00;
    return;
L_08A68E00:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(172)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A68E30u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A68E30u) goto L_08A68E30;
    return;
L_08A68E30:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69154;
      }
      goto L_08A68E5C;
    }
L_08A68E5C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A690C0;
      }
      goto L_08A68E6C;
    }
L_08A68E6C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A68E88;
      }
      goto L_08A68E78;
    }
L_08A68E78:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A690C0;
      }
      goto L_08A68E88;
    }
L_08A68E88:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A69034;
      }
      goto L_08A68E98;
    }
L_08A68E98:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A68F70;
      }
      goto L_08A68EB8;
    }
L_08A68EB8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(4, ctx.gpr[17] < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[17] - ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, ctx.gpr[16] - ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] >> 18u);
    ctx.set_gpr(2, ctx.gpr[2] << 14u);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A68EF4;
      }
      goto L_08A68EE4;
    }
L_08A68EE4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A68F0C;
      }
      goto L_08A68EF4;
    }
L_08A68EF4:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_08A68F0C;
L_08A68F0C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(5, ctx.gpr[3] < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[4] >> 18u);
    ctx.set_gpr(2, ctx.gpr[2] << 14u);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A68F50;
      }
      goto L_08A68F40;
    }
L_08A68F40:
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A68F68;
      }
      goto L_08A68F50;
    }
L_08A68F50:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[20];
    goto L_08A68F68;
L_08A68F68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69004;
      }
      goto L_08A68F70;
    }
L_08A68F70:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] >> 18u);
    ctx.set_gpr(2, ctx.gpr[2] << 14u);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A68FA4;
      }
      goto L_08A68F94;
    }
L_08A68F94:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A68FBC;
      }
      goto L_08A68FA4;
    }
L_08A68FA4:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[20];
    goto L_08A68FBC;
L_08A68FBC:
    ctx.set_gpr(3, ctx.gpr[17] >> 18u);
    ctx.set_gpr(2, ctx.gpr[16] << 14u);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A68FE0;
      }
      goto L_08A68FD0;
    }
L_08A68FD0:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A68FF8;
      }
      goto L_08A68FE0;
    }
L_08A68FE0:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[12];
    goto L_08A68FF8;
L_08A68FF8:
    ctx.set_fpr_bits(13, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08A69004u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 644u, 0x0880F004u>(ctx, &aot_mem) && ctx.pc == 0x08A69004u) goto L_08A69004;
    return;
L_08A69004:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32408)));
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A69024;
      }
      goto L_08A69018;
    }
L_08A69018:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69118;
      }
      goto L_08A69024;
    }
L_08A69024:
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[20];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69118;
      }
      goto L_08A69034;
    }
L_08A69034:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A69048u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A69048u) goto L_08A69048;
    return;
L_08A69048:
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A69064u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A69064u) goto L_08A69064;
    return;
L_08A69064:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(172)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A69094u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A69094u) goto L_08A69094;
    return;
L_08A69094:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69154;
      }
      goto L_08A690C0;
    }
L_08A690C0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A690F8;
      }
      goto L_08A690CC;
    }
L_08A690CC:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(10, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(31, 0x08A690F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 657u, 0x08A67FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A690F0u) goto L_08A690F0;
    return;
L_08A690F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69118;
      }
      goto L_08A690F8;
    }
L_08A690F8:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(10, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(31, 0x08A69118u);
    // nop
    goto L_08A68214;
L_08A69118:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(31, 0x08A69134u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 616u, 0x08A67AA4u>(ctx, &aot_mem) && ctx.pc == 0x08A69134u) goto L_08A69134;
    return;
L_08A69134:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(31, 0x08A69150u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 650u, 0x08A67F20u>(ctx, &aot_mem) && ctx.pc == 0x08A69150u) goto L_08A69150;
    return;
L_08A69150:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08A69154;
L_08A69154:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A69184:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(8, ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A691A4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A691A4u) goto L_08A691A4;
    return;
L_08A691A4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A691B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[8]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(3, ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(17, ctx.gpr[6] - ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[7] - ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A69264;
      }
      goto L_08A69210;
    }
L_08A69210:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(22, ctx.gpr[18] + ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[22] < ctx.gpr[18] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[21]);
    ctx.set_gpr(23, ctx.gpr[2] + ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A692B0;
      }
      goto L_08A69264;
    }
L_08A69264:
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(21, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
    ctx.set_gpr(31, 0x08A69298u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 110u, 0x0881C82Cu>(ctx, &aot_mem) && ctx.pc == 0x08A69298u) goto L_08A69298;
    return;
L_08A69298:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[3]);
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(7, ctx.gpr[23] + 0u);
    goto L_08A692B0;
L_08A692B0:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A69304;
      }
      goto L_08A692B8;
    }
L_08A692B8:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A69304;
      }
      goto L_08A692C0;
    }
L_08A692C0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(172)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A692D8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A692D8u) goto L_08A692D8;
    return;
L_08A692D8:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A697FC;
      }
      goto L_08A69304;
    }
L_08A69304:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A694F4;
      }
      goto L_08A69310;
    }
L_08A69310:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A69328;
      }
      goto L_08A6931C;
    }
L_08A6931C:
    ctx.set_gpr(1, ctx.gpr[22] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A694F4;
      }
      goto L_08A69328;
    }
L_08A69328:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A69448;
      }
      goto L_08A69338;
    }
L_08A69338:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A693AC;
      }
      goto L_08A69340;
    }
L_08A69340:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A693AC;
      }
      goto L_08A6934C;
    }
L_08A6934C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A69360;
      }
      goto L_08A69358;
    }
L_08A69358:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A694B0;
      }
      goto L_08A69360;
    }
L_08A69360:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(172)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A69380u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A69380u) goto L_08A69380;
    return;
L_08A69380:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A697FC;
      }
      goto L_08A693AC;
    }
L_08A693AC:
    ctx.set_gpr(3, ctx.gpr[17] < ctx.gpr[18] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[17] - ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[16] - ctx.gpr[21]);
    ctx.set_gpr(5, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(31, 0x08A693C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 363u, 0x08A66580u>(ctx, &aot_mem) && ctx.pc == 0x08A693C8u) goto L_08A693C8;
    return;
L_08A693C8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(17, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[18] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[21]);
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A6955C;
      }
      goto L_08A693F4;
    }
L_08A693F4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6955C;
      }
      goto L_08A6941C;
    }
L_08A6941C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A69434;
      }
      goto L_08A69428;
    }
L_08A69428:
    ctx.set_gpr(1, ctx.gpr[17] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6955C;
      }
      goto L_08A69434;
    }
L_08A69434:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6955C;
      }
      goto L_08A69448;
    }
L_08A69448:
    ctx.set_gpr(3, ctx.gpr[17] < ctx.gpr[18] ? 1u : 0u);
    ctx.set_gpr(4, ctx.gpr[17] - ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[16] - ctx.gpr[21]);
    ctx.set_gpr(5, ctx.gpr[2] - ctx.gpr[3]);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(31, 0x08A69464u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 363u, 0x08A66580u>(ctx, &aot_mem) && ctx.pc == 0x08A69464u) goto L_08A69464;
    return;
L_08A69464:
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69490;
      }
      goto L_08A69470;
    }
L_08A69470:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(3, ctx.gpr[22] < ctx.gpr[4] ? 1u : 0u);
    ctx.set_gpr(17, ctx.gpr[22] - ctx.gpr[4]);
    ctx.set_gpr(2, ctx.gpr[23] - ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] - ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6955C;
      }
      goto L_08A69490;
    }
L_08A69490:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(17, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[18] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[21]);
    ctx.set_gpr(16, ctx.gpr[2] + ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6955C;
      }
      goto L_08A694B0;
    }
L_08A694B0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(172)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A694C8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A694C8u) goto L_08A694C8;
    return;
L_08A694C8:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A697FC;
      }
      goto L_08A694F4;
    }
L_08A694F4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6955C;
      }
      goto L_08A69500;
    }
L_08A69500:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A69518;
      }
      goto L_08A6950C;
    }
L_08A6950C:
    ctx.set_gpr(1, ctx.gpr[17] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6955C;
      }
      goto L_08A69518;
    }
L_08A69518:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(172)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A69530u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A69530u) goto L_08A69530;
    return;
L_08A69530:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A697FC;
      }
      goto L_08A6955C;
    }
L_08A6955C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A69784;
      }
      goto L_08A6956C;
    }
L_08A6956C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A69588;
      }
      goto L_08A69578;
    }
L_08A69578:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69784;
      }
      goto L_08A69588;
    }
L_08A69588:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A6972C;
      }
      goto L_08A69598;
    }
L_08A69598:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A69668;
      }
      goto L_08A695B8;
    }
L_08A695B8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(4, ctx.gpr[17] < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[17] - ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, ctx.gpr[16] - ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] >> 18u);
    ctx.set_gpr(2, ctx.gpr[2] << 14u);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A695F4;
      }
      goto L_08A695E4;
    }
L_08A695E4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6960C;
      }
      goto L_08A695F4;
    }
L_08A695F4:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    goto L_08A6960C;
L_08A6960C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(4, ctx.gpr[22] < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[22] - ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, ctx.gpr[23] - ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] >> 18u);
    ctx.set_gpr(2, ctx.gpr[2] << 14u);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A69648;
      }
      goto L_08A69638;
    }
L_08A69638:
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69660;
      }
      goto L_08A69648;
    }
L_08A69648:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[20];
    goto L_08A69660;
L_08A69660:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A696FC;
      }
      goto L_08A69668;
    }
L_08A69668:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] >> 18u);
    ctx.set_gpr(2, ctx.gpr[2] << 14u);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A6969C;
      }
      goto L_08A6968C;
    }
L_08A6968C:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A696B4;
      }
      goto L_08A6969C;
    }
L_08A6969C:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[20];
    goto L_08A696B4;
L_08A696B4:
    ctx.set_gpr(3, ctx.gpr[17] >> 18u);
    ctx.set_gpr(2, ctx.gpr[16] << 14u);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A696D8;
      }
      goto L_08A696C8;
    }
L_08A696C8:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A696F0;
      }
      goto L_08A696D8;
    }
L_08A696D8:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[12];
    goto L_08A696F0;
L_08A696F0:
    ctx.set_fpr_bits(13, ctx.fpr_bits(20));
    ctx.set_gpr(31, 0x08A696FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 644u, 0x0880F004u>(ctx, &aot_mem) && ctx.pc == 0x08A696FCu) goto L_08A696FC;
    return;
L_08A696FC:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32408)));
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6971C;
      }
      goto L_08A69710;
    }
L_08A69710:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A697DC;
      }
      goto L_08A6971C;
    }
L_08A6971C:
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[20];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A697DC;
      }
      goto L_08A6972C;
    }
L_08A6972C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A69740u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A69740u) goto L_08A69740;
    return;
L_08A69740:
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(172)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A69758u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A69758u) goto L_08A69758;
    return;
L_08A69758:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A697FC;
      }
      goto L_08A69784;
    }
L_08A69784:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A697BC;
      }
      goto L_08A69790;
    }
L_08A69790:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(10, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(31, 0x08A697B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 657u, 0x08A67FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A697B4u) goto L_08A697B4;
    return;
L_08A697B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A697DC;
      }
      goto L_08A697BC;
    }
L_08A697BC:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(10, ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.set_gpr(31, 0x08A697DCu);
    // nop
    goto L_08A68214;
L_08A697DC:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(31, 0x08A697F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 650u, 0x08A67F20u>(ctx, &aot_mem) && ctx.pc == 0x08A697F8u) goto L_08A697F8;
    return;
L_08A697F8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08A697FC;
L_08A697FC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A69830:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27776)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) && ctx.fpr[1] == ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A69850;
      }
      goto L_08A6984C;
    }
L_08A6984C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A69850;
L_08A69850:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A69878;
      }
      goto L_08A69858;
    }
L_08A69858:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27772)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) && ctx.fpr[1] == ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A69878;
      }
      goto L_08A69874;
    }
L_08A69874:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A69878;
L_08A69878:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A698A0;
      }
      goto L_08A69880;
    }
L_08A69880:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27768)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) && ctx.fpr[1] == ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A698A0;
      }
      goto L_08A6989C;
    }
L_08A6989C:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A698A0;
L_08A698A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A698B4;
      }
      goto L_08A698A8;
    }
L_08A698A8:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A698E8;
      }
      goto L_08A698B4;
    }
L_08A698B4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A698D8;
      }
      goto L_08A698C0;
    }
L_08A698C0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A698D8;
      }
      goto L_08A698CC;
    }
L_08A698CC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A698E4;
      }
      goto L_08A698D8;
    }
L_08A698D8:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A698E8;
      }
      goto L_08A698E4;
    }
L_08A698E4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08A698E8;
L_08A698E8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A698F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20944)));
    ctx.set_gpr(31, 0x08A6990Cu);
    // nop
    goto L_08A6991C;
L_08A6990C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6991C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08A6993Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 474u, 0x08A125B4u>(ctx, &aot_mem) && ctx.pc == 0x08A6993Cu) goto L_08A6993C;
    return;
L_08A6993C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A6994Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 200u, 0x08944F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6994Cu) goto L_08A6994C;
    return;
L_08A6994C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A699AC;
      }
      goto L_08A69954;
    }
L_08A69954:
    ctx.set_gpr(31, 0x08A6995Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0133_entry, 133u, 347u, 0x08A19E3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6995Cu) goto L_08A6995C;
    return;
L_08A6995C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A6996Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 200u, 0x08944F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6996Cu) goto L_08A6996C;
    return;
L_08A6996C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69994;
      }
      goto L_08A69974;
    }
L_08A69974:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 2215u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-24592));
    ctx.set_gpr(31, 0x08A6998Cu);
    // nop
    goto L_08A69EF8;
L_08A6998C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A699AC;
      }
      goto L_08A69994;
    }
L_08A69994:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 2215u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-24604));
    ctx.set_gpr(31, 0x08A699ACu);
    // nop
    goto L_08A69EF8;
L_08A699AC:
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
L_08A699C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A699DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 428u, 0x08945EB4u>(ctx, &aot_mem) && ctx.pc == 0x08A699DCu) goto L_08A699DC;
    return;
L_08A699DC:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20944)));
    ctx.set_gpr(31, 0x08A699F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A699F0u) goto L_08A699F0;
    return;
L_08A699F0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A69A04:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-288));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A69A14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A69A14u) goto L_08A69A14;
    return;
L_08A69A14:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A69A20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A69A20u) goto L_08A69A20;
    return;
L_08A69A20:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A69A2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 362u, 0x08A0DE90u>(ctx, &aot_mem) && ctx.pc == 0x08A69A2Cu) goto L_08A69A2C;
    return;
L_08A69A2C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-20944), ctx.gpr[2]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-20948)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A69C28;
      }
      goto L_08A69A44;
    }
L_08A69A44:
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(22936));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(30));
    goto L_08A69A54;
L_08A69A54:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A69A54;
      }
      goto L_08A69A78;
    }
L_08A69A78:
    ctx.set_gpr(31, 0x08A69A80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 223u, 0x0893CE4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A69A80u) goto L_08A69A80;
    return;
L_08A69A80:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A69A8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A69A8Cu) goto L_08A69A8C;
    return;
L_08A69A8C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A69A98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 321u, 0x088E975Cu>(ctx, &aot_mem) && ctx.pc == 0x08A69A98u) goto L_08A69A98;
    return;
L_08A69A98:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-20948));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A69AACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 67u, 0x0895853Cu>(ctx, &aot_mem) && ctx.pc == 0x08A69AACu) goto L_08A69AAC;
    return;
L_08A69AAC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20948)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[2]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69AD4;
      }
      goto L_08A69AC4;
    }
L_08A69AC4:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08A69AD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 785u, 0x0890FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A69AD4u) goto L_08A69AD4;
    return;
L_08A69AD4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20948)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A69AFC;
      }
      goto L_08A69AEC;
    }
L_08A69AEC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(20));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69B0C;
      }
      goto L_08A69AFC;
    }
L_08A69AFC:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08A69B0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A69B0Cu) goto L_08A69B0C;
    return;
L_08A69B0C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69BC8;
      }
      goto L_08A69B34;
    }
L_08A69B34:
    ctx.set_gpr(2, ctx.gpr[8] << 1u);
    ctx.set_gpr(7, ctx.gpr[2] + ctx.gpr[8]);
    ctx.set_gpr(2, ctx.gpr[7] << 2u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(57)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20948)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69BC4;
      }
      goto L_08A69B74;
    }
L_08A69B74:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A69BC4;
      }
      goto L_08A69B7C;
    }
L_08A69B7C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69BC4;
      }
      goto L_08A69B88;
    }
L_08A69B88:
    ctx.set_gpr(3, ctx.gpr[7] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(37)));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(38)));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08A69BC4;
L_08A69BC4:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_08A69BC8;
L_08A69BC8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[8]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A69B34;
      }
      goto L_08A69BD4;
    }
L_08A69BD4:
    ctx.set_gpr(31, 0x08A69BDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A69BDCu) goto L_08A69BDC;
    return;
L_08A69BDC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20948)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69C00;
      }
      goto L_08A69BF4;
    }
L_08A69BF4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A69C00;
L_08A69C00:
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(21));
    ctx.set_gpr(31, 0x08A69C14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 158u, 0x08958B08u>(ctx, &aot_mem) && ctx.pc == 0x08A69C14u) goto L_08A69C14;
    return;
L_08A69C14:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69C28;
      }
      goto L_08A69C20;
    }
L_08A69C20:
    ctx.set_gpr(31, 0x08A69C28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A69C28u) goto L_08A69C28;
    return;
L_08A69C28:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(288));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A69C38:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20944)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69C74;
      }
      goto L_08A69C50;
    }
L_08A69C50:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A69C74;
      }
      goto L_08A69C6C;
    }
L_08A69C6C:
    ctx.set_gpr(31, 0x08A69C74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A69C74u) goto L_08A69C74;
    return;
L_08A69C74:
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-20948));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A69C88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A69C88u) goto L_08A69C88;
    return;
L_08A69C88:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A69C98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20992)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20988)));
    ctx.set_gpr(6, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-20992), ctx.gpr[6]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-20988), ctx.gpr[3]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69D70;
      }
      goto L_08A69CEC;
    }
L_08A69CEC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08A69CF8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A69CF8u) goto L_08A69CF8;
    return;
L_08A69CF8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69D70;
      }
      goto L_08A69D00;
    }
L_08A69D00:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A69D64;
      }
      goto L_08A69D0C;
    }
L_08A69D0C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25088)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A69D28u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A69D28u) goto L_08A69D28;
    return;
L_08A69D28:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A69D70;
      }
      goto L_08A69D30;
    }
L_08A69D30:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A69D40u);
    // nop
    goto L_08A69FF0;
L_08A69D40:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A69D54;
      }
      goto L_08A69D4C;
    }
L_08A69D4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69D58;
      }
      goto L_08A69D54;
    }
L_08A69D54:
    ctx.set_gpr(3, 0u + 0u);
    goto L_08A69D58;
L_08A69D58:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69D98;
      }
      goto L_08A69D64;
    }
L_08A69D64:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69D98;
      }
      goto L_08A69D70;
    }
L_08A69D70:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08A69D98u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A69D98u) goto L_08A69D98;
    return;
L_08A69D98:
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
L_08A69DB4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21008)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-21004)));
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21008), ctx.gpr[4]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-21004), ctx.gpr[3]);
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21024));
    ctx.set_gpr(31, 0x08A69DF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 192u, 0x08958D34u>(ctx, &aot_mem) && ctx.pc == 0x08A69DF8u) goto L_08A69DF8;
    return;
L_08A69DF8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A69E08:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2246u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21016));
    ctx.set_gpr(31, 0x08A69E20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 192u, 0x08958D34u>(ctx, &aot_mem) && ctx.pc == 0x08A69E20u) goto L_08A69E20;
    return;
L_08A69E20:
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21016)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21012)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21024)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21020)));
    ctx.set_gpr(4, ctx.gpr[7] < ctx.gpr[5] ? 1u : 0u);
    ctx.set_gpr(5, ctx.gpr[7] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[6] - ctx.gpr[3]);
    ctx.set_gpr(7, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-21000)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-20996)));
    ctx.set_gpr(5, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[7]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-21000), ctx.gpr[5]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-20996), ctx.gpr[4]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A69E90:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A69EB8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A69EB8u) goto L_08A69EB8;
    return;
L_08A69EB8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A69EC8u);
    // nop
    goto L_08A69C98;
L_08A69EC8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A69EE0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A69EE0u) goto L_08A69EE0;
    return;
L_08A69EE0:
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
L_08A69EF8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25088)));
    ctx.set_gpr(31, 0x08A69F30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 200u, 0x08944F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A69F30u) goto L_08A69F30;
    return;
L_08A69F30:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69FC4;
      }
      goto L_08A69F38;
    }
L_08A69F38:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A69F4C;
      }
      goto L_08A69F44;
    }
L_08A69F44:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    goto L_08A69F4C;
L_08A69F4C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A69F94;
      }
      goto L_08A69F5C;
    }
L_08A69F5C:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A69F94;
      }
      goto L_08A69F68;
    }
L_08A69F68:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A69F84;
      }
      goto L_08A69F78;
    }
L_08A69F78:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69F94;
      }
      goto L_08A69F84;
    }
L_08A69F84:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A69F94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A69F94u) goto L_08A69F94;
    return;
L_08A69F94:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69FC4;
      }
      goto L_08A69FA0;
    }
L_08A69FA0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A69FC4;
      }
      goto L_08A69FA8;
    }
L_08A69FA8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A69FC4;
      }
      goto L_08A69FB4;
    }
L_08A69FB4:
    ctx.set_gpr(4, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    goto L_08A69FC4;
L_08A69FC4:
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
L_08A69FE4:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A69FF0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A0F8;
      }
      goto L_08A6A014;
    }
L_08A6A014:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(16, ctx.gpr[17] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A0EC;
      }
      goto L_08A6A030;
    }
L_08A6A030:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A094;
      }
      goto L_08A6A038;
    }
L_08A6A038:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    jump_target = ctx.gpr[2];
    ctx.set_gpr(31, 0x08A6A060u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A6A060u) goto L_08A6A060;
    return;
L_08A6A060:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A6A078;
      }
      goto L_08A6A06C;
    }
L_08A6A06C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A0FC;
      }
      goto L_08A6A078;
    }
L_08A6A078:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A6A090;
      }
      goto L_08A6A084;
    }
L_08A6A084:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A0FC;
      }
      goto L_08A6A090;
    }
L_08A6A090:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    goto L_08A6A094;
L_08A6A094:
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A038;
      }
      goto L_08A6A0A0;
    }
L_08A6A0A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A0F8;
      }
      goto L_08A6A0A8;
    }
L_08A6A0A8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A6A0B8u);
    // nop
    goto L_08A69C98;
L_08A6A0B8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A6A0D0;
      }
      goto L_08A6A0C4;
    }
L_08A6A0C4:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A0FC;
      }
      goto L_08A6A0D0;
    }
L_08A6A0D0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A6A0E8;
      }
      goto L_08A6A0DC;
    }
L_08A6A0DC:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A0FC;
      }
      goto L_08A6A0E8;
    }
L_08A6A0E8:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    goto L_08A6A0EC;
L_08A6A0EC:
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A0A8;
      }
      goto L_08A6A0F8;
    }
L_08A6A0F8:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A6A0FC;
L_08A6A0FC:
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
L_08A6A118:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6A128:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6A144:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A17C;
      }
      goto L_08A6A174;
    }
L_08A6A174:
    ctx.set_gpr(31, 0x08A6A17Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A6A17Cu) goto L_08A6A17C;
    return;
L_08A6A17C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A6A18Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 9u, 0x089100E0u>(ctx, &aot_mem) && ctx.pc == 0x08A6A18Cu) goto L_08A6A18C;
    return;
L_08A6A18C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
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
L_08A6A1B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[6] + 0u);
    ctx.set_gpr(5, ctx.gpr[8] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, ctx.gpr[9] + 0u);
    ctx.set_gpr(31, 0x08A6A1DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 624u, 0x089B79B4u>(ctx, &aot_mem) && ctx.pc == 0x08A6A1DCu) goto L_08A6A1DC;
    return;
L_08A6A1DC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6A1EC:
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 5u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(272));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6A208:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(272));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A6A22Cu);
    // nop
    goto L_08A6B5D8;
L_08A6A22C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A2A0;
      }
      goto L_08A6A234;
    }
L_08A6A234:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(60), 0u);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(72), 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(76), 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(80), 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(84), 0u);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(93), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(96), 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(100), 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(104), 0u);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(176));
    goto L_08A6A27C;
L_08A6A27C:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(272));
    ctx.set_gpr(3, ctx.gpr[4] < ctx.gpr[3] ? 1u : 0u);
    // nop
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A27C;
      }
      goto L_08A6A294;
    }
L_08A6A294:
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(36), 0u);
    goto L_08A6A2A0;
L_08A6A2A0:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(176));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(170), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(171), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, ctx.gpr[16] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[3] << 5u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6A2D8:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), ctx.gpr[7]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(88), ctx.gpr[8]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(93), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(156)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(152)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(104), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(108), ctx.gpr[7]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(0u));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6A358:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(3, 49024u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[3]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A6A3C0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A6A3C0u) goto L_08A6A3C0;
    return;
L_08A6A3C0:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A6A3D4u);
    // nop
    goto L_08A6A838;
L_08A6A3D4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A6A408u);
    // nop
    goto L_08A6A81C;
L_08A6A408:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(116), ctx.gpr[2]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A6A43Cu);
    // nop
    goto L_08A6A7F8;
L_08A6A43C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(120), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(124), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(76)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(128), ctx.gpr[2]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A6A4A0u);
    // nop
    goto L_08A6A7CC;
L_08A6A4A0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(132), ctx.gpr[2]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A6A4D4u);
    // nop
    goto L_08A6A778;
L_08A6A4D4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(136), ctx.gpr[2]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A6A508u);
    // nop
    goto L_08A6A724;
L_08A6A508:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(140), ctx.gpr[2]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A6A53Cu);
    // nop
    goto L_08A6A718;
L_08A6A53C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(144), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(148), ctx.gpr[2]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A6A584u);
    // nop
    goto L_08A6A6C4;
L_08A6A584:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(152), ctx.gpr[2]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A6A5B8u);
    // nop
    goto L_08A6A670;
L_08A6A5B8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(156), ctx.gpr[2]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A6A5ECu);
    // nop
    goto L_08A6A65C;
L_08A6A5EC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(160), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(164), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[16] & 255u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A6A640u);
    // nop
    goto L_08A6A2D8;
L_08A6A640:
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
L_08A6A65C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6A670:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A6A688u);
    // nop
    goto L_08A6A7F8;
L_08A6A688:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6A6C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A6A6DCu);
    // nop
    goto L_08A6A81C;
L_08A6A6DC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6A718:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6A724:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A6A73Cu);
    // nop
    goto L_08A6A65C;
L_08A6A73C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6A778:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A6A790u);
    // nop
    goto L_08A6A718;
L_08A6A790:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6A7CC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6A7F8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6A81C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6A838:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A6A850u);
    // nop
    goto L_08A6A7CC;
L_08A6A850:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6A88C:
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 5u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(169)));
    ctx.set_gpr(2, ctx.gpr[2] << 5u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(176));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6A8B4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(169)));
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(3, ctx.gpr[2] << 5u);
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, ctx.gpr[2] << 5u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(176));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6A8E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(10, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(169)));
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A91C;
      }
      goto L_08A6A904;
    }
L_08A6A904:
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(169)));
    ctx.set_gpr(3, 0u < ctx.gpr[9] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(8, ctx.gpr[3] & 255u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A92C;
      }
      goto L_08A6A91C;
    }
L_08A6A91C:
    ctx.set_gpr(8, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(169)));
    ctx.set_gpr(3, 0u < ctx.gpr[8] ? 1u : 0u);
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    ctx.set_gpr(9, ctx.gpr[3] & 255u);
    goto L_08A6A92C;
L_08A6A92C:
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[9] << 5u);
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[8] << 5u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    { const bool signed_ok = ctx.execute_signed_add(5u, 5u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A6A948u, 0x00A02820u); return; } }
    { const bool signed_ok = ctx.execute_signed_add(8u, 10u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A6A94Cu, 0x01404020u); return; } }
    { const bool signed_ok = ctx.execute_signed_add(6u, 6u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A6A950u, 0x00C03020u); return; } }
    { const bool signed_ok = ctx.execute_signed_add(7u, 7u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A6A954u, 0x00E03820u); return; } }
    { const bool signed_ok = ctx.execute_signed_add(9u, 4u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A6A958u, 0x00804820u); return; } }
    { const bool signed_ok = ctx.execute_signed_add(10u, 3u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A6A95Cu, 0x00605020u); return; } }
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_value, 99u, 1u); }
    ctx.set_vfpu_scalar_bits(3u, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_vfpu_scalar_bits(101u, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08A6A96C;
L_08A6A96C:
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector(vfpu_value, 1u, 4u); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(80);
      float vfpu_value[4]{
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector(vfpu_value, 2u, 4u); }
    { const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector(vfpu_value, 6u, 4u); }
    { const std::uint32_t vfpu_address = ctx.gpr[10] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector(vfpu_value, 7u, 4u); }
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    // PSP CACHE is a no-op in coherent host memory.
    ctx.execute_vfpu_vscl(8u, 1u, 3u, 4u);
    ctx.execute_vfpu_vscl(9u, 2u, 3u, 3u);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix(vfpu_s, 8u, 4u, 0u);
      ctx.read_vfpu_vector_with_source_prefix(vfpu_t, 6u, 4u, 1u);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_d, 4u, 4u); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix(vfpu_s, 9u, 3u, 0u);
      ctx.read_vfpu_vector_with_source_prefix(vfpu_t, 7u, 3u, 1u);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_d, 5u, 3u); }
    ctx.execute_vfpu_vdot(67u, 4u, 4u, 4u);
    ctx.execute_vfpu_vcmp(67u, 67u, 1u, 8u);
    // PSP CACHE is a no-op in coherent host memory.
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix(vfpu_s, 67u, 1u, 0u);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_d, 67u, 1u); }
    ctx.execute_vfpu_vcmov(67u, 99u, 1u, 0u, false);
    ctx.execute_vfpu_vscl(4u, 4u, 67u, 4u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector(vfpu_value, 5u, 4u);
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(16);
      rt.memory().aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      rt.memory().aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      rt.memory().aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      rt.memory().aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector(vfpu_value, 4u, 4u);
      const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
      rt.memory().aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      rt.memory().aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      rt.memory().aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      rt.memory().aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(96));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6A96C;
      }
      goto L_08A6A9C8;
    }
L_08A6A9C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6A9D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool signed_ok = ctx.execute_signed_add(5u, 3u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A6A9E8u, 0x00602820u); return; } }
    { const bool signed_ok = ctx.execute_signed_add(8u, 8u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A6A9ECu, 0x01004020u); return; } }
    { const bool signed_ok = ctx.execute_signed_add(6u, 6u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A6A9F0u, 0x00C03020u); return; } }
    { const bool signed_ok = ctx.execute_signed_add(7u, 7u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08A6A9F4u, 0x00E03820u); return; } }
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_value, 101u, 1u); }
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_value, 8u, 4u); }
    ctx.set_vfpu_scalar_bits(3u, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    goto L_08A6AA04;
L_08A6AA04:
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(64);
      float vfpu_value[4]{
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector(vfpu_value, 1u, 4u); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(80);
      float vfpu_value[4]{
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(rt.memory().aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector(vfpu_value, 2u, 4u); }
    // PSP CACHE is a no-op in coherent host memory.
    ctx.execute_vfpu_vscl(4u, 1u, 3u, 4u);
    ctx.execute_vfpu_vscl(5u, 2u, 3u, 3u);
    ctx.execute_vfpu_vdot(67u, 4u, 4u, 4u);
    ctx.execute_vfpu_vcmp(67u, 67u, 1u, 8u);
    // nop
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix(vfpu_s, 67u, 1u, 0u);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_d, 67u, 1u); }
    ctx.execute_vfpu_vcmov(67u, 101u, 1u, 0u, false);
    ctx.execute_vfpu_vscl(4u, 4u, 67u, 4u);
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector(vfpu_value, 8u, 4u);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(64);
      rt.memory().aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      rt.memory().aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      rt.memory().aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      rt.memory().aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector(vfpu_value, 8u, 4u);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(80);
      rt.memory().aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      rt.memory().aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      rt.memory().aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      rt.memory().aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector(vfpu_value, 5u, 4u);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(16);
      rt.memory().aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      rt.memory().aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      rt.memory().aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      rt.memory().aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector(vfpu_value, 5u, 4u);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(48);
      rt.memory().aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      rt.memory().aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      rt.memory().aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      rt.memory().aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector(vfpu_value, 4u, 4u);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      rt.memory().aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      rt.memory().aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      rt.memory().aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      rt.memory().aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector(vfpu_value, 4u, 4u);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(32);
      rt.memory().aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      rt.memory().aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      rt.memory().aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      rt.memory().aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(96));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6AA04;
      }
      goto L_08A6AA64;
    }
L_08A6AA64:
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(169), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6AA74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_fpr_bits(22, ctx.fpr_bits(12));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[7] + 0u);
    ctx.set_gpr(5, ctx.gpr[7] + 0u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, 49024u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) && ctx.fpr[0] == ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6AAE4;
      }
      goto L_08A6AACC;
    }
L_08A6AACC:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32408)));
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6AAE4;
      }
      goto L_08A6AAE0;
    }
L_08A6AAE0:
    ctx.set_gpr(5, 0u + 0u);
    goto L_08A6AAE4;
L_08A6AAE4:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6AB04;
      }
      goto L_08A6AAEC;
    }
L_08A6AAEC:
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[22];
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[22])) || ctx.fpr[0] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6AB04;
      }
      goto L_08A6AB00;
    }
L_08A6AB00:
    ctx.set_gpr(6, 0u + 0u);
    goto L_08A6AB04;
L_08A6AB04:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6AB44;
      }
      goto L_08A6AB0C;
    }
L_08A6AB0C:
    ctx.set_gpr(3, 0u + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6AB38;
      }
      goto L_08A6AB24;
    }
L_08A6AB24:
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6AB38;
      }
      goto L_08A6AB34;
    }
L_08A6AB34:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    goto L_08A6AB38;
L_08A6AB38:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6AB44;
      }
      goto L_08A6AB40;
    }
L_08A6AB40:
    ctx.set_gpr(7, 0u + 0u);
    goto L_08A6AB44;
L_08A6AB44:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6ABA4;
      }
      goto L_08A6AB4C;
    }
L_08A6AB4C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A6AB64u);
    // nop
    goto L_08A6A2D8;
L_08A6AB64:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(168), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(31, 0x08A6AB78u);
    // nop
    goto L_08A6B624;
L_08A6AB78:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x08A6AB8Cu);
    // nop
    goto L_08A6B044;
L_08A6AB8C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(31, 0x08A6ABA4u);
    // nop
    goto L_08A6A9D4;
L_08A6ABA4:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32408)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[22]) || std::isnan(ctx.fpr[0])) || ctx.fpr[22] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6AF14;
      }
      goto L_08A6ABB8;
    }
L_08A6ABB8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6AD64;
      }
      goto L_08A6ABC8;
    }
L_08A6ABC8:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(168)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A6ACA4;
      }
      goto L_08A6ABD8;
    }
L_08A6ABD8:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(112))))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A6ABF8;
      }
      goto L_08A6ABE8;
    }
L_08A6ABE8:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    goto L_08A6ABF8;
L_08A6ABF8:
    ctx.set_gpr(5, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(112))))));
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(23192));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> (ctx.gpr[2] & 31u)));
    ctx.set_gpr(2, ctx.gpr[2] & 3u);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[2]))));
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6AC94;
      }
      goto L_08A6AC34;
    }
L_08A6AC34:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A6AC88;
      }
      goto L_08A6AC40;
    }
L_08A6AC40:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A6AC74;
      }
      goto L_08A6AC4C;
    }
L_08A6AC4C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A6AC60;
      }
      goto L_08A6AC58;
    }
L_08A6AC58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6AC94;
      }
      goto L_08A6AC60;
    }
L_08A6AC60:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6AC94;
      }
      goto L_08A6AC74;
    }
L_08A6AC74:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(104), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6AC94;
      }
      goto L_08A6AC88;
    }
L_08A6AC88:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), ctx.gpr[2]);
    goto L_08A6AC94;
L_08A6AC94:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(168), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6ACD0;
      }
      goto L_08A6ACA4;
    }
L_08A6ACA4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A6ACD0;
      }
      goto L_08A6ACB0;
    }
L_08A6ACB0:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(31, 0x08A6ACC8u);
    // nop
    goto L_08A6B70C;
L_08A6ACC8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(168), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08A6ACD0;
L_08A6ACD0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(31, 0x08A6ACF0u);
    // nop
    goto L_08A6B184;
L_08A6ACF0:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6AD18;
      }
      goto L_08A6AD10;
    }
L_08A6AD10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6AD1C;
      }
      goto L_08A6AD18;
    }
L_08A6AD18:
    ctx.set_fpr_bits(13, ctx.fpr_bits(20));
    goto L_08A6AD1C;
L_08A6AD1C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(21));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A6AD34u);
    // nop
    goto L_08A6A8E0;
L_08A6AD34:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A6AD64;
L_08A6AD64:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[22]) || std::isnan(ctx.fpr[0])) || ctx.fpr[22] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6AF00;
      }
      goto L_08A6AD78;
    }
L_08A6AD78:
    ctx.fpr[1] = ctx.fpr[20] - ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32248)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) || ctx.fpr[1] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6ABC8;
      }
      goto L_08A6AD90;
    }
L_08A6AD90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6AF00;
      }
      goto L_08A6AD98;
    }
L_08A6AD98:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(168)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A6AE7C;
      }
      goto L_08A6ADA8;
    }
L_08A6ADA8:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(112))))));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[2]))));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A6ADD8;
      }
      goto L_08A6ADC4;
    }
L_08A6ADC4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    goto L_08A6ADD8;
L_08A6ADD8:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(112))))));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(23192));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> (ctx.gpr[2] & 31u)));
    ctx.set_gpr(2, ctx.gpr[2] & 3u);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[2]))));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6AE6C;
      }
      goto L_08A6AE0C;
    }
L_08A6AE0C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A6AE60;
      }
      goto L_08A6AE18;
    }
L_08A6AE18:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A6AE4C;
      }
      goto L_08A6AE24;
    }
L_08A6AE24:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A6AE38;
      }
      goto L_08A6AE30;
    }
L_08A6AE30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6AE6C;
      }
      goto L_08A6AE38;
    }
L_08A6AE38:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6AE6C;
      }
      goto L_08A6AE4C;
    }
L_08A6AE4C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(104), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6AE6C;
      }
      goto L_08A6AE60;
    }
L_08A6AE60:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), ctx.gpr[2]);
    goto L_08A6AE6C;
L_08A6AE6C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(168), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6AE94;
      }
      goto L_08A6AE7C;
    }
L_08A6AE7C:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(31, 0x08A6AE94u);
    // nop
    goto L_08A6B994;
L_08A6AE94:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(31, 0x08A6AEB4u);
    // nop
    goto L_08A6B3A8;
L_08A6AEB4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(20, 0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.set_fpr_bits(12, ctx.fpr_bits(21) ^ 0x80000000u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_fpr_bits(13, ctx.fpr_bits(20));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A6AEE8u);
    // nop
    goto L_08A6A8E0;
L_08A6AEE8:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08A6AF00;
L_08A6AF00:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6AD98;
      }
      goto L_08A6AF14;
    }
L_08A6AF14:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6AF3C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6AF7C;
      }
      goto L_08A6AF78;
    }
L_08A6AF78:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A6AF7C;
L_08A6AF7C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6AF9C;
      }
      goto L_08A6AF84;
    }
L_08A6AF84:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[0])) || ctx.fpr[12] < ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6AF9C;
      }
      goto L_08A6AF98;
    }
L_08A6AF98:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A6AF9C;
L_08A6AF9C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A6AFB4;
      }
      goto L_08A6AFA4;
    }
L_08A6AFA4:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6AFCC;
      }
      goto L_08A6AFB4;
    }
L_08A6AFB4:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_08A6AFCC;
L_08A6AFCC:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[1]) || std::isnan(ctx.fpr[0])) && ctx.fpr[1] == ctx.fpr[0]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6AFE4;
      }
      goto L_08A6AFE0;
    }
L_08A6AFE0:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A6AFE4;
L_08A6AFE4:
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6AFFC;
      }
      goto L_08A6AFF0;
    }
L_08A6AFF0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A6AFFCu);
    // nop
    goto L_08A6AA74;
L_08A6AFFC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A6B00Cu);
    // nop
    goto L_08A6A88C;
L_08A6B00C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A6B020u);
    // nop
    goto L_08A6A8B4;
L_08A6B020:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
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
L_08A6B044:
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B170;
      }
      goto L_08A6B050;
    }
L_08A6B050:
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B160;
      }
      goto L_08A6B05C;
    }
L_08A6B05C:
    ctx.set_gpr(3, 0u + 0u);
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(16))))));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08A6B080;
      }
      goto L_08A6B070;
    }
L_08A6B070:
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    goto L_08A6B080;
L_08A6B080:
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(16))))));
    ctx.set_gpr(10, ctx.gpr[12] << 2u);
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(23176));
    ctx.set_gpr(11, ctx.gpr[9] + ctx.gpr[10]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> (ctx.gpr[9] & 31u)));
    ctx.set_gpr(9, ctx.gpr[9] & 3u);
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[9]))));
    ctx.set_gpr(9, ctx.gpr[12] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[9]));
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B0C4;
      }
      goto L_08A6B0BC;
    }
L_08A6B0BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B134;
      }
      goto L_08A6B0C4;
    }
L_08A6B0C4:
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08A6B120;
      }
      goto L_08A6B0D0;
    }
L_08A6B0D0:
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08A6B108;
      }
      goto L_08A6B0DC;
    }
L_08A6B0DC:
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08A6B0F0;
      }
      goto L_08A6B0E8;
    }
L_08A6B0E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B130;
      }
      goto L_08A6B0F0;
    }
L_08A6B0F0:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B130;
      }
      goto L_08A6B108;
    }
L_08A6B108:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B130;
      }
      goto L_08A6B120;
    }
L_08A6B120:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[9]);
    goto L_08A6B130;
L_08A6B130:
    ctx.set_gpr(10, ctx.gpr[3] + 0u);
    goto L_08A6B134;
L_08A6B134:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[8] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[8]);
    ctx.set_gpr(3, ctx.gpr[3] << 5u);
    ctx.set_gpr(9, ctx.gpr[3] + ctx.gpr[9]);
    ctx.set_gpr(3, ctx.gpr[7] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08A6B160;
L_08A6B160:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[7]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B05C;
      }
      goto L_08A6B16C;
    }
L_08A6B16C:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_08A6B170;
L_08A6B170:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B050;
      }
      goto L_08A6B17C;
    }
L_08A6B17C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6B184:
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B394;
      }
      goto L_08A6B190;
    }
L_08A6B190:
    ctx.set_gpr(3, ctx.gpr[8] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[8]);
    ctx.set_gpr(3, ctx.gpr[3] << 5u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, ctx.gpr[3] + ctx.gpr[7]);
    ctx.set_gpr(7, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B390;
      }
      goto L_08A6B1B0;
    }
L_08A6B1B0:
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B384;
      }
      goto L_08A6B1BC;
    }
L_08A6B1BC:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(9, ctx.gpr[3] + ctx.gpr[9]);
    ctx.set_gpr(10, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(9, ctx.gpr[9] << (ctx.gpr[7] & 31u));
    ctx.set_gpr(9, ctx.gpr[9] & ctx.gpr[10]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B380;
      }
      goto L_08A6B1DC;
    }
L_08A6B1DC:
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(20))))));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08A6B1FC;
      }
      goto L_08A6B1EC;
    }
L_08A6B1EC:
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    goto L_08A6B1FC;
L_08A6B1FC:
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(20))))));
    ctx.set_gpr(10, ctx.gpr[12] << 2u);
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(22132));
    ctx.set_gpr(11, ctx.gpr[9] + ctx.gpr[10]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> (ctx.gpr[9] & 31u)));
    ctx.set_gpr(9, ctx.gpr[9] & 3u);
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[9]))));
    ctx.set_gpr(9, ctx.gpr[12] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_08A6B258;
      }
      goto L_08A6B23C;
    }
L_08A6B23C:
    ctx.set_gpr(10, ctx.gpr[11] << 2u);
    ctx.set_gpr(9, 2226u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-27116));
    ctx.set_gpr(9, ctx.gpr[9] + ctx.gpr[10]);
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B35C;
      }
      goto L_08A6B258;
    }
L_08A6B258:
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(21))))));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_08A6B274;
      }
      goto L_08A6B264;
    }
L_08A6B264:
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    goto L_08A6B274;
L_08A6B274:
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(21))))));
    ctx.set_gpr(10, ctx.gpr[12] << 2u);
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(22148));
    ctx.set_gpr(11, ctx.gpr[9] + ctx.gpr[10]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> (ctx.gpr[9] & 31u)));
    ctx.set_gpr(9, ctx.gpr[9] & 15u);
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[9]))));
    ctx.set_gpr(9, ctx.gpr[12] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[9]));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B2CC;
      }
      goto L_08A6B2B0;
    }
L_08A6B2B0:
    ctx.set_gpr(10, ctx.gpr[10] << 2u);
    ctx.set_gpr(9, 2226u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-27100));
    ctx.set_gpr(9, ctx.gpr[9] + ctx.gpr[10]);
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B35C;
      }
      goto L_08A6B2CC;
    }
L_08A6B2CC:
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(9, ctx.gpr[10] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B32C;
      }
      goto L_08A6B2E4;
    }
L_08A6B2E4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[11]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A6B304;
      }
      goto L_08A6B2EC;
    }
L_08A6B2EC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[11]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B304;
      }
      goto L_08A6B2F8;
    }
L_08A6B2F8:
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(127));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B35C;
      }
      goto L_08A6B304;
    }
L_08A6B304:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[11]) < -8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B324;
      }
      goto L_08A6B310;
    }
L_08A6B310:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[11]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A6B324;
      }
      goto L_08A6B318;
    }
L_08A6B318:
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-128));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B35C;
      }
      goto L_08A6B324;
    }
L_08A6B324:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B35C;
      }
      goto L_08A6B32C;
    }
L_08A6B32C:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(11, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B34C;
      }
      goto L_08A6B344;
    }
L_08A6B344:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B35C;
      }
      goto L_08A6B34C;
    }
L_08A6B34C:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), ctx.gpr[9]);
    goto L_08A6B35C;
L_08A6B35C:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(10, ctx.gpr[3] + ctx.gpr[9]);
    ctx.set_gpr(9, ctx.gpr[7] << 2u);
    ctx.set_gpr(9, ctx.gpr[9] + ctx.gpr[10]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(64)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A6B380;
L_08A6B380:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08A6B384;
L_08A6B384:
    ctx.set_gpr(9, static_cast<std::int32_t>(ctx.gpr[7]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B1BC;
      }
      goto L_08A6B390;
    }
L_08A6B390:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_08A6B394;
L_08A6B394:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B190;
      }
      goto L_08A6B3A0;
    }
L_08A6B3A0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6B3A8:
    ctx.set_gpr(7, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B5C8;
      }
      goto L_08A6B3B4;
    }
L_08A6B3B4:
    ctx.set_gpr(3, ctx.gpr[7] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[7]);
    ctx.set_gpr(3, ctx.gpr[3] << 5u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B5C4;
      }
      goto L_08A6B3D4;
    }
L_08A6B3D4:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B5BC;
      }
      goto L_08A6B3E0;
    }
L_08A6B3E0:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(8, ctx.gpr[3] + ctx.gpr[8]);
    ctx.set_gpr(9, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(8, ctx.gpr[8] << (ctx.gpr[5] & 31u));
    ctx.set_gpr(8, ctx.gpr[8] & ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B5B8;
      }
      goto L_08A6B400;
    }
L_08A6B400:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(20))))));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[8]))));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08A6B430;
      }
      goto L_08A6B41C;
    }
L_08A6B41C:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    goto L_08A6B430;
L_08A6B430:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(20))))));
    ctx.set_gpr(9, ctx.gpr[8] << 2u);
    ctx.set_gpr(8, 2229u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(22132));
    ctx.set_gpr(10, ctx.gpr[8] + ctx.gpr[9]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> (ctx.gpr[8] & 31u)));
    ctx.set_gpr(8, ctx.gpr[8] & 3u);
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[8]))));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08A6B484;
      }
      goto L_08A6B468;
    }
L_08A6B468:
    ctx.set_gpr(9, ctx.gpr[9] << 2u);
    ctx.set_gpr(8, 2226u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-27116));
    ctx.set_gpr(8, ctx.gpr[8] + ctx.gpr[9]);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B594;
      }
      goto L_08A6B484;
    }
L_08A6B484:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(21))))));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[8]))));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08A6B4B4;
      }
      goto L_08A6B4A0;
    }
L_08A6B4A0:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    goto L_08A6B4B4;
L_08A6B4B4:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(21))))));
    ctx.set_gpr(9, ctx.gpr[8] << 2u);
    ctx.set_gpr(8, 2229u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(22148));
    ctx.set_gpr(10, ctx.gpr[8] + ctx.gpr[9]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> (ctx.gpr[8] & 31u)));
    ctx.set_gpr(8, ctx.gpr[8] & 15u);
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[8]))));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B504;
      }
      goto L_08A6B4E8;
    }
L_08A6B4E8:
    ctx.set_gpr(9, ctx.gpr[8] << 2u);
    ctx.set_gpr(8, 2226u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-27100));
    ctx.set_gpr(8, ctx.gpr[8] + ctx.gpr[9]);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B594;
      }
      goto L_08A6B504;
    }
L_08A6B504:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(8, ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(-1))))));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B564;
      }
      goto L_08A6B51C;
    }
L_08A6B51C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[10]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A6B53C;
      }
      goto L_08A6B524;
    }
L_08A6B524:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[10]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B53C;
      }
      goto L_08A6B530;
    }
L_08A6B530:
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(127));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B594;
      }
      goto L_08A6B53C;
    }
L_08A6B53C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[10]) < -8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B55C;
      }
      goto L_08A6B548;
    }
L_08A6B548:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[10]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A6B55C;
      }
      goto L_08A6B550;
    }
L_08A6B550:
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(-128));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B594;
      }
      goto L_08A6B55C;
    }
L_08A6B55C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B594;
      }
      goto L_08A6B564;
    }
L_08A6B564:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(8, ctx.gpr[9] + static_cast<std::uint32_t>(-2));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[8]);
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(-2))))));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B584;
      }
      goto L_08A6B57C;
    }
L_08A6B57C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B594;
      }
      goto L_08A6B584;
    }
L_08A6B584:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(8, ctx.gpr[9] + static_cast<std::uint32_t>(-4));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), ctx.gpr[8]);
    ctx.set_gpr(10, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-4)));
    goto L_08A6B594;
L_08A6B594:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(9, ctx.gpr[3] + ctx.gpr[8]);
    ctx.set_gpr(8, ctx.gpr[5] << 2u);
    ctx.set_gpr(8, ctx.gpr[8] + ctx.gpr[9]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(64)));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A6B5B8;
L_08A6B5B8:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    goto L_08A6B5BC;
L_08A6B5BC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A6B3E0;
      }
      goto L_08A6B5C4;
    }
L_08A6B5C4:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    goto L_08A6B5C8;
L_08A6B5C8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A6B3B4;
      }
      goto L_08A6B5D0;
    }
L_08A6B5D0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6B5D8:
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6B5E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A6B5F4u);
    // nop
    goto L_08A6BDF8;
L_08A6B5F4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6B604:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A6B614u);
    // nop
    goto L_08A6BE64;
L_08A6B614:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6B624:
    ctx.set_gpr(3, 0u + 0u);
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(16))))));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A6B648;
      }
      goto L_08A6B638;
    }
L_08A6B638:
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_08A6B648;
L_08A6B648:
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(16))))));
    ctx.set_gpr(7, ctx.gpr[9] << 2u);
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(23192));
    ctx.set_gpr(8, ctx.gpr[6] + ctx.gpr[7]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> (ctx.gpr[6] & 31u)));
    ctx.set_gpr(6, ctx.gpr[6] & 3u);
    ctx.set_gpr(7, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[6]))));
    ctx.set_gpr(6, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B68C;
      }
      goto L_08A6B684;
    }
L_08A6B684:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B6FC;
      }
      goto L_08A6B68C;
    }
L_08A6B68C:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A6B6E8;
      }
      goto L_08A6B698;
    }
L_08A6B698:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A6B6D0;
      }
      goto L_08A6B6A4;
    }
L_08A6B6A4:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A6B6B8;
      }
      goto L_08A6B6B0;
    }
L_08A6B6B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B6F8;
      }
      goto L_08A6B6B8;
    }
L_08A6B6B8:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B6F8;
      }
      goto L_08A6B6D0;
    }
L_08A6B6D0:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B6F8;
      }
      goto L_08A6B6E8;
    }
L_08A6B6E8:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[6]);
    goto L_08A6B6F8;
L_08A6B6F8:
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    goto L_08A6B6FC;
L_08A6B6FC:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6B70C:
    ctx.set_gpr(3, ctx.gpr[6] << 3u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[6]);
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B980;
      }
      goto L_08A6B720;
    }
L_08A6B720:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B948;
      }
      goto L_08A6B72C;
    }
L_08A6B72C:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(7));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[8]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(10, ctx.lo);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[8]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(6, ctx.hi);
    ctx.set_gpr(1, ctx.gpr[6] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B85C;
      }
      goto L_08A6B74C;
    }
L_08A6B74C:
    ctx.set_gpr(9, 2226u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-27180));
    ctx.set_gpr(6, ctx.gpr[6] << 2u);
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[9]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[6];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6B768:
    ctx.set_gpr(6, ctx.gpr[10] << 1u);
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[10]);
    ctx.set_gpr(6, ctx.gpr[6] << 5u);
    ctx.set_gpr(9, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(6, ctx.gpr[6] ^ 1u);
    rt.memory().aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B85C;
      }
      goto L_08A6B78C;
    }
L_08A6B78C:
    ctx.set_gpr(6, ctx.gpr[10] << 1u);
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[10]);
    ctx.set_gpr(6, ctx.gpr[6] << 5u);
    ctx.set_gpr(9, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(6, ctx.gpr[6] ^ 2u);
    rt.memory().aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B85C;
      }
      goto L_08A6B7B0;
    }
L_08A6B7B0:
    ctx.set_gpr(6, ctx.gpr[10] << 1u);
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[10]);
    ctx.set_gpr(6, ctx.gpr[6] << 5u);
    ctx.set_gpr(9, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(6, ctx.gpr[6] ^ 4u);
    rt.memory().aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B85C;
      }
      goto L_08A6B7D4;
    }
L_08A6B7D4:
    ctx.set_gpr(6, ctx.gpr[10] << 1u);
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[10]);
    ctx.set_gpr(6, ctx.gpr[6] << 5u);
    ctx.set_gpr(9, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(6, ctx.gpr[6] ^ 8u);
    rt.memory().aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B85C;
      }
      goto L_08A6B7F8;
    }
L_08A6B7F8:
    ctx.set_gpr(6, ctx.gpr[10] << 1u);
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[10]);
    ctx.set_gpr(6, ctx.gpr[6] << 5u);
    ctx.set_gpr(9, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(6, ctx.gpr[6] ^ 16u);
    rt.memory().aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B85C;
      }
      goto L_08A6B81C;
    }
L_08A6B81C:
    ctx.set_gpr(6, ctx.gpr[10] << 1u);
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[10]);
    ctx.set_gpr(6, ctx.gpr[6] << 5u);
    ctx.set_gpr(9, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(6, ctx.gpr[6] ^ 32u);
    rt.memory().aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B85C;
      }
      goto L_08A6B840;
    }
L_08A6B840:
    ctx.set_gpr(6, ctx.gpr[10] << 1u);
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[10]);
    ctx.set_gpr(6, ctx.gpr[6] << 5u);
    ctx.set_gpr(9, ctx.gpr[6] + ctx.gpr[5]);
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(6, ctx.gpr[6] ^ 64u);
    rt.memory().aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_08A6B85C;
L_08A6B85C:
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(16))))));
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08A6B880;
      }
      goto L_08A6B870;
    }
L_08A6B870:
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    goto L_08A6B880;
L_08A6B880:
    ctx.set_gpr(12, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(16))))));
    ctx.set_gpr(10, ctx.gpr[12] << 2u);
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(23192));
    ctx.set_gpr(11, ctx.gpr[9] + ctx.gpr[10]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> (ctx.gpr[9] & 31u)));
    ctx.set_gpr(9, ctx.gpr[9] & 3u);
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[9]))));
    ctx.set_gpr(9, ctx.gpr[12] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[9]));
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B8C4;
      }
      goto L_08A6B8BC;
    }
L_08A6B8BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B934;
      }
      goto L_08A6B8C4;
    }
L_08A6B8C4:
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08A6B920;
      }
      goto L_08A6B8D0;
    }
L_08A6B8D0:
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08A6B908;
      }
      goto L_08A6B8DC;
    }
L_08A6B8DC:
    ctx.set_gpr(9, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[10] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08A6B8F0;
      }
      goto L_08A6B8E8;
    }
L_08A6B8E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B930;
      }
      goto L_08A6B8F0;
    }
L_08A6B8F0:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B930;
      }
      goto L_08A6B908;
    }
L_08A6B908:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, rt.memory().aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B930;
      }
      goto L_08A6B920;
    }
L_08A6B920:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), ctx.gpr[9]);
    goto L_08A6B930;
L_08A6B930:
    ctx.set_gpr(10, ctx.gpr[6] + 0u);
    goto L_08A6B934;
L_08A6B934:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B980;
      }
      goto L_08A6B948;
    }
L_08A6B948:
    ctx.set_gpr(6, ctx.gpr[3] - ctx.gpr[8]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B960;
      }
      goto L_08A6B958;
    }
L_08A6B958:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B964;
      }
      goto L_08A6B960;
    }
L_08A6B960:
    ctx.set_gpr(9, ctx.gpr[6] + 0u);
    goto L_08A6B964;
L_08A6B964:
    ctx.set_gpr(8, ctx.gpr[8] + ctx.gpr[9]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, ctx.gpr[6] - ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08A6B980;
L_08A6B980:
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6B720;
      }
      goto L_08A6B98C;
    }
L_08A6B98C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6B994:
    ctx.set_gpr(3, ctx.gpr[6] << 3u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[6]);
    ctx.set_gpr(6, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6BC10;
      }
      goto L_08A6B9A8;
    }
L_08A6B9A8:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6BBD8;
      }
      goto L_08A6B9B4;
    }
L_08A6B9B4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(7));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[3]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(9, ctx.lo);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[3]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.set_gpr(3, ctx.hi);
    ctx.set_gpr(1, ctx.gpr[3] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6BAE4;
      }
      goto L_08A6B9D4;
    }
L_08A6B9D4:
    ctx.set_gpr(8, 2226u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-27148));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[8]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[3];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6B9F0:
    ctx.set_gpr(3, ctx.gpr[9] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[9]);
    ctx.set_gpr(3, ctx.gpr[3] << 5u);
    ctx.set_gpr(8, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(3, ctx.gpr[3] ^ 1u);
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6BAE4;
      }
      goto L_08A6BA14;
    }
L_08A6BA14:
    ctx.set_gpr(3, ctx.gpr[9] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[9]);
    ctx.set_gpr(3, ctx.gpr[3] << 5u);
    ctx.set_gpr(8, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(3, ctx.gpr[3] ^ 2u);
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6BAE4;
      }
      goto L_08A6BA38;
    }
L_08A6BA38:
    ctx.set_gpr(3, ctx.gpr[9] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[9]);
    ctx.set_gpr(3, ctx.gpr[3] << 5u);
    ctx.set_gpr(8, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(3, ctx.gpr[3] ^ 4u);
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6BAE4;
      }
      goto L_08A6BA5C;
    }
L_08A6BA5C:
    ctx.set_gpr(3, ctx.gpr[9] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[9]);
    ctx.set_gpr(3, ctx.gpr[3] << 5u);
    ctx.set_gpr(8, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(3, ctx.gpr[3] ^ 8u);
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6BAE4;
      }
      goto L_08A6BA80;
    }
L_08A6BA80:
    ctx.set_gpr(3, ctx.gpr[9] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[9]);
    ctx.set_gpr(3, ctx.gpr[3] << 5u);
    ctx.set_gpr(8, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(3, ctx.gpr[3] ^ 16u);
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6BAE4;
      }
      goto L_08A6BAA4;
    }
L_08A6BAA4:
    ctx.set_gpr(3, ctx.gpr[9] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[9]);
    ctx.set_gpr(3, ctx.gpr[3] << 5u);
    ctx.set_gpr(8, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(3, ctx.gpr[3] ^ 32u);
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6BAE4;
      }
      goto L_08A6BAC8;
    }
L_08A6BAC8:
    ctx.set_gpr(3, ctx.gpr[9] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[9]);
    ctx.set_gpr(3, ctx.gpr[3] << 5u);
    ctx.set_gpr(8, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(3, ctx.gpr[3] ^ 64u);
    rt.memory().aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08A6BAE4;
L_08A6BAE4:
    ctx.set_gpr(3, 0u + 0u);
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(16))))));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[8]))));
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08A6BB18;
      }
      goto L_08A6BB04;
    }
L_08A6BB04:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    goto L_08A6BB18;
L_08A6BB18:
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(16))))));
    ctx.set_gpr(9, ctx.gpr[8] << 2u);
    ctx.set_gpr(8, 2229u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(23192));
    ctx.set_gpr(10, ctx.gpr[8] + ctx.gpr[9]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0))))));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(8, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> (ctx.gpr[8] & 31u)));
    ctx.set_gpr(8, ctx.gpr[8] & 3u);
    ctx.set_gpr(9, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(ctx.gpr[8]))));
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6BB54;
      }
      goto L_08A6BB4C;
    }
L_08A6BB4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6BBC4;
      }
      goto L_08A6BB54;
    }
L_08A6BB54:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08A6BBB0;
      }
      goto L_08A6BB60;
    }
L_08A6BB60:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08A6BB98;
      }
      goto L_08A6BB6C;
    }
L_08A6BB6C:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08A6BB80;
      }
      goto L_08A6BB78;
    }
L_08A6BB78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6BBC0;
      }
      goto L_08A6BB80;
    }
L_08A6BB80:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(-1)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6BBC0;
      }
      goto L_08A6BB98;
    }
L_08A6BB98:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[8] + static_cast<std::uint32_t>(-2));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(-2)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6BBC0;
      }
      goto L_08A6BBB0;
    }
L_08A6BBB0:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[8] + static_cast<std::uint32_t>(-4));
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-4)));
    goto L_08A6BBC0;
L_08A6BBC0:
    ctx.set_gpr(9, ctx.gpr[3] + 0u);
    goto L_08A6BBC4;
L_08A6BBC4:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6BC10;
      }
      goto L_08A6BBD8;
    }
L_08A6BBD8:
    ctx.set_gpr(3, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6BBF0;
      }
      goto L_08A6BBE8;
    }
L_08A6BBE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6BBF4;
      }
      goto L_08A6BBF0;
    }
L_08A6BBF0:
    ctx.set_gpr(8, ctx.gpr[3] + 0u);
    goto L_08A6BBF4;
L_08A6BBF4:
    ctx.set_gpr(6, ctx.gpr[6] - ctx.gpr[8]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08A6BC10;
L_08A6BC10:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A6B9A8;
      }
      goto L_08A6BC18;
    }
L_08A6BC18:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6BC20:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-23300));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-23332));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(80));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6BC4C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6BC84;
      }
      goto L_08A6BC64;
    }
L_08A6BC64:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-23300));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[5]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A6BC84;
      }
      goto L_08A6BC7C;
    }
L_08A6BC7C:
    ctx.set_gpr(31, 0x08A6BC84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 201u, 0x08804D84u>(ctx, &aot_mem) && ctx.pc == 0x08A6BC84u) goto L_08A6BC84;
    return;
L_08A6BC84:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6BC9C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6BCEC;
      }
      goto L_08A6BCB4;
    }
L_08A6BCB4:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-23332));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6BCD4;
      }
      goto L_08A6BCC8;
    }
L_08A6BCC8:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-23300));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08A6BCD4;
L_08A6BCD4:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[5]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A6BCEC;
      }
      goto L_08A6BCE0;
    }
L_08A6BCE0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A6BCECu);
    // nop
    goto L_08A6BDE4;
L_08A6BCEC:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6BD04:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08A6BD1Cu);
    // nop
    goto L_08A6BDEC;
L_08A6BD1C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6BD30;
      }
      goto L_08A6BD24;
    }
L_08A6BD24:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A6BD30u);
    // nop
    goto L_08A6BC20;
L_08A6BD30:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6BD40:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6BDB8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6BDC0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(80));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6BDCC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6BDD8:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6BDE4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6BDEC:
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6BDF8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-20940)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6BE50;
      }
      goto L_08A6BE18;
    }
L_08A6BE18:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6BE3C;
      }
      goto L_08A6BE20;
    }
L_08A6BE20:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(12)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A6BE34u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A6BE34u) goto L_08A6BE34;
    return;
L_08A6BE34:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-20940), ctx.gpr[2]);
    goto L_08A6BE3C;
L_08A6BE3C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20940)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A6BE50u);
    // nop
    goto L_08A6BEDC;
L_08A6BE50:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6BE64:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-20940)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6BEBC;
      }
      goto L_08A6BE84;
    }
L_08A6BE84:
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A6BE90u);
    // nop
    goto L_08A6BED0;
L_08A6BE90:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6BEB4;
      }
      goto L_08A6BE98;
    }
L_08A6BE98:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-20940)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A6BEB4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A6BEB4u) goto L_08A6BEB4;
    return;
L_08A6BEB4:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-20940), 0u);
    goto L_08A6BEBC;
L_08A6BEBC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6BED0:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6BEDC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6BEE8;
      }
      goto L_08A6BEE4;
    }
L_08A6BEE4:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08A6BEE8;
L_08A6BEE8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6BEF0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A6BF00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 837u, 0x08A43BE8u>(ctx, &aot_mem) && ctx.pc == 0x08A6BF00u) goto L_08A6BF00;
    return;
L_08A6BF00:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6BF10:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A6BF30u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A6BF30u) goto L_08A6BF30;
    return;
L_08A6BF30:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A6BF40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 118u, 0x089448B4u>(ctx, &aot_mem) && ctx.pc == 0x08A6BF40u) goto L_08A6BF40;
    return;
L_08A6BF40:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6BF5C;
      }
      goto L_08A6BF48;
    }
L_08A6BF48:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(200)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A6BF5Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A6BF5Cu) goto L_08A6BF5C;
    return;
L_08A6BF5C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A6BF68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 839u, 0x08A43C08u>(ctx, &aot_mem) && ctx.pc == 0x08A6BF68u) goto L_08A6BF68;
    return;
L_08A6BF68:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6BF7C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22440)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6BF8C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6BFD4;
      }
      goto L_08A6BFA8;
    }
L_08A6BFA8:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(255));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A6BFD4;
      }
      goto L_08A6BFB8;
    }
L_08A6BFB8:
    ctx.set_gpr(31, 0x08A6BFC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 387u, 0x08A6D900u>(ctx, &aot_mem) && ctx.pc == 0x08A6BFC0u) goto L_08A6BFC0;
    return;
L_08A6BFC0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A6BFCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 391u, 0x08A6D954u>(ctx, &aot_mem) && ctx.pc == 0x08A6BFCCu) goto L_08A6BFCC;
    return;
L_08A6BFCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6BFE4;
      }
      goto L_08A6BFD4;
    }
L_08A6BFD4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A6BFE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 387u, 0x08A6D900u>(ctx, &aot_mem) && ctx.pc == 0x08A6BFE0u) goto L_08A6BFE0;
    return;
L_08A6BFE0:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    goto L_08A6BFE4;
L_08A6BFE4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6BFF8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.pc = 0x08A6C000u; return;
}

void recomp_unit_0153(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0153_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_153(Runtime &runtime) {
    runtime.register_generated_unit(153u, 0x08A68000u, 16384u, &recomp_unit_0153, &recomp_unit_0153_entry);
    runtime.register_function(0x08A68000u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68010u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6801Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68028u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68058u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68064u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68070u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68078u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6809Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A680A8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A680B4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A680E8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A680F4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68100u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6814Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6815Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68174u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A681BCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A681CCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A681E4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A681F8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68204u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6820Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68214u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6823Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6824Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68264u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68288u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68298u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A682B0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A682D4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A682F4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6834Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A683A0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A683D4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A683ECu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A683F4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A683FCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68418u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68424u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68430u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6843Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68448u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68458u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68460u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6846Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68478u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68480u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A684A4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A684B0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A684CCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A684F4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6851Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68528u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68534u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68544u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68560u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6856Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6858Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A685ACu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A685C8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A685D4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A685E0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A685ECu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A685F8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68614u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68620u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68630u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6863Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6864Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6865Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6867Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A686A8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A686B8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A686D0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A686FCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6870Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68724u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6872Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68750u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68760u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68778u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6878Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6879Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A687B4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A687C0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A687D4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A687E0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A687F0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68804u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68820u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6882Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68838u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6885Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68864u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68884u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A688A0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A688A4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A688D8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A688F8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68908u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68920u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68924u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68950u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68970u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68980u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68994u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A689ACu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A689D8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A689F8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68A08u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68A64u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68AC0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68AF4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68B14u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68B1Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68B24u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68B3Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68B60u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68B70u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68B7Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68B8Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68B9Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68BA4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68BB0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68BBCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68BC4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68BE8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68C18u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68C44u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68C60u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68C8Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68CB4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68CC0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68CCCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68CE0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68CFCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68D08u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68D30u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68D50u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68D68u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68D98u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68DC4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68DD0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68DDCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68DE8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68E00u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68E30u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68E5Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68E6Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68E78u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68E88u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68E98u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68EB8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68EE4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68EF4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68F0Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68F40u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68F50u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68F68u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68F70u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68F94u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68FA4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68FBCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68FD0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68FE0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A68FF8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69004u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69018u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69024u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69034u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69048u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69064u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69094u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A690C0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A690CCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A690F0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A690F8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69118u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69134u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69150u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69154u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69184u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A691A4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A691B4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69210u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69264u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69298u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A692B0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A692B8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A692C0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A692D8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69304u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69310u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6931Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69328u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69338u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69340u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6934Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69358u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69360u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69380u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A693ACu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A693C8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A693F4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6941Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69428u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69434u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69448u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69464u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69470u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69490u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A694B0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A694C8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A694F4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69500u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6950Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69518u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69530u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6955Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6956Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69578u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69588u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69598u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A695B8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A695E4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A695F4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6960Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69638u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69648u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69660u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69668u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6968Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6969Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A696B4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A696C8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A696D8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A696F0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A696FCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69710u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6971Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6972Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69740u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69758u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69784u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69790u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A697B4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A697BCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A697DCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A697F8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A697FCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69830u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6984Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69850u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69858u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69874u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69878u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69880u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6989Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A698A0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A698A8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A698B4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A698C0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A698CCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A698D8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A698E4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A698E8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A698F0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6990Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6991Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6993Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6994Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69954u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6995Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6996Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69974u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6998Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69994u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A699ACu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A699C4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A699DCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A699F0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69A04u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69A14u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69A20u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69A2Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69A44u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69A54u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69A78u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69A80u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69A8Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69A98u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69AACu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69AC4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69AD4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69AECu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69AFCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69B0Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69B34u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69B74u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69B7Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69B88u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69BC4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69BC8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69BD4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69BDCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69BF4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69C00u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69C14u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69C20u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69C28u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69C38u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69C50u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69C6Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69C74u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69C88u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69C98u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69CECu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69CF8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69D00u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69D0Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69D28u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69D30u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69D40u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69D4Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69D54u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69D58u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69D64u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69D70u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69D98u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69DB4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69DF8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69E08u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69E20u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69E90u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69EB8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69EC8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69EE0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69EF8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69F30u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69F38u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69F44u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69F4Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69F5Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69F68u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69F78u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69F84u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69F94u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69FA0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69FA8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69FB4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69FC4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69FE4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A69FF0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A014u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A030u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A038u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A060u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A06Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A078u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A084u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A090u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A094u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A0A0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A0A8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A0B8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A0C4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A0D0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A0DCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A0E8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A0ECu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A0F8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A0FCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A118u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A128u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A144u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A174u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A17Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A18Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A1B8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A1DCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A1ECu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A208u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A22Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A234u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A27Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A294u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A2A0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A2D8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A358u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A3C0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A3D4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A408u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A43Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A4A0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A4D4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A508u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A53Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A584u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A5B8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A5ECu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A640u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A65Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A670u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A688u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A6C4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A6DCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A718u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A724u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A73Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A778u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A790u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A7CCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A7F8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A81Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A838u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A850u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A88Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A8B4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A8E0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A904u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A91Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A92Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A96Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A9C8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6A9D4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AA04u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AA64u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AA74u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AACCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AAE0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AAE4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AAECu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AB00u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AB04u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AB0Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AB24u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AB34u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AB38u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AB40u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AB44u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AB4Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AB64u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AB78u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AB8Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6ABA4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6ABB8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6ABC8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6ABD8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6ABE8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6ABF8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AC34u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AC40u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AC4Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AC58u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AC60u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AC74u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AC88u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AC94u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6ACA4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6ACB0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6ACC8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6ACD0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6ACF0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AD10u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AD18u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AD1Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AD34u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AD64u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AD78u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AD90u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AD98u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6ADA8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6ADC4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6ADD8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AE0Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AE18u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AE24u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AE30u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AE38u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AE4Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AE60u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AE6Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AE7Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AE94u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AEB4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AEE8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AF00u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AF14u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AF3Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AF78u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AF7Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AF84u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AF98u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AF9Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AFA4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AFB4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AFCCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AFE0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AFE4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AFF0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6AFFCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B00Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B020u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B044u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B050u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B05Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B070u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B080u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B0BCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B0C4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B0D0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B0DCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B0E8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B0F0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B108u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B120u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B130u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B134u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B160u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B16Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B170u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B17Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B184u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B190u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B1B0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B1BCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B1DCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B1ECu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B1FCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B23Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B258u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B264u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B274u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B2B0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B2CCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B2E4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B2ECu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B2F8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B304u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B310u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B318u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B324u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B32Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B344u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B34Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B35Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B380u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B384u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B390u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B394u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B3A0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B3A8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B3B4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B3D4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B3E0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B400u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B41Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B430u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B468u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B484u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B4A0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B4B4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B4E8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B504u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B51Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B524u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B530u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B53Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B548u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B550u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B55Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B564u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B57Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B584u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B594u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B5B8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B5BCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B5C4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B5C8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B5D0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B5D8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B5E4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B5F4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B604u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B614u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B624u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B638u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B648u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B684u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B68Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B698u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B6A4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B6B0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B6B8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B6D0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B6E8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B6F8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B6FCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B70Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B720u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B72Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B74Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B768u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B78Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B7B0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B7D4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B7F8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B81Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B840u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B85Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B870u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B880u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B8BCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B8C4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B8D0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B8DCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B8E8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B8F0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B908u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B920u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B930u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B934u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B948u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B958u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B960u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B964u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B980u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B98Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B994u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B9A8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B9B4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B9D4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6B9F0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BA14u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BA38u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BA5Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BA80u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BAA4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BAC8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BAE4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BB04u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BB18u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BB4Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BB54u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BB60u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BB6Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BB78u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BB80u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BB98u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BBB0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BBC0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BBC4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BBD8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BBE8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BBF0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BBF4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BC10u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BC18u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BC20u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BC4Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BC64u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BC7Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BC84u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BC9Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BCB4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BCC8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BCD4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BCE0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BCECu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BD04u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BD1Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BD24u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BD30u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BD40u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BDB8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BDC0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BDCCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BDD8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BDE4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BDECu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BDF8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BE18u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BE20u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BE34u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BE3Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BE50u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BE64u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BE84u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BE90u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BE98u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BEB4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BEBCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BED0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BEDCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BEE4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BEE8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BEF0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BF00u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BF10u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BF30u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BF40u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BF48u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BF5Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BF68u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BF7Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BF8Cu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BFA8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BFB8u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BFC0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BFCCu, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BFD4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BFE0u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BFE4u, &recomp_unit_0153, "recomp_unit_0153");
    runtime.register_function(0x08A6BFF8u, &recomp_unit_0153, "recomp_unit_0153");
}
} // namespace psprecomp
