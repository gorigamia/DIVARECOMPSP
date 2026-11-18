#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0139[4094] = {
    1, 2, 3, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 6, 0, 0, 0, 7, 0, 8, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0,
    0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 14, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0,
    0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 18, 0, 0, 19, 0, 0, 0, 20, 0,
    0, 21, 0, 22, 23, 0, 0, 24, 0, 25, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 31, 0, 0, 32, 0, 33, 34,
    0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 38, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 43, 0, 44, 45, 0, 0, 46, 0,
    0, 0, 0, 47, 0, 48, 0, 49, 50, 0, 0, 51, 0, 0, 0, 0, 52, 0, 53, 0, 54, 55, 0, 0, 56, 0, 0, 0, 0, 57, 0, 58,
    0, 59, 60, 0, 0, 61, 0, 0, 0, 0, 62, 0, 63, 0, 64, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0,
    0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0,
    0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0,
    0, 89, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 95, 0,
    0, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 102,
    0, 103, 0, 0, 0, 104, 0, 0, 105, 0, 0, 106, 0, 107, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 0, 114, 0, 0, 115, 0, 116, 117, 0,
    0, 118, 0, 119, 0, 0, 0, 0, 120, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 123, 0, 0, 124, 0, 0, 0, 125, 0, 0, 126, 0, 127, 128, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 131, 0, 0,
    0, 132, 0, 133, 0, 134, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 138, 0, 139, 0, 0, 0, 0, 140,
    0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0, 144, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 147,
    0, 148, 0, 149, 0, 0, 150, 0, 0, 151, 0, 0, 0, 152, 0, 0, 153, 0, 0, 154, 0, 0, 0, 155, 0, 0, 156, 0, 0, 157, 0, 0,
    0, 158, 0, 0, 159, 0, 0, 160, 0, 0, 0, 161, 0, 0, 162, 0, 0, 163, 0, 0, 0, 164, 0, 0, 165, 0, 0, 166, 0, 0, 0, 167,
    0, 0, 168, 0, 0, 169, 0, 0, 0, 170, 0, 0, 171, 0, 0, 172, 0, 0, 0, 173, 0, 0, 174, 0, 0, 175, 0, 0, 0, 176, 0, 0,
    177, 0, 0, 178, 0, 0, 0, 179, 0, 0, 180, 0, 0, 181, 0, 0, 0, 182, 0, 0, 183, 0, 0, 184, 0, 0, 0, 185, 0, 0, 186, 0,
    0, 187, 0, 0, 0, 188, 0, 0, 189, 0, 0, 190, 0, 0, 0, 191, 0, 0, 192, 0, 0, 193, 0, 0, 0, 194, 0, 0, 195, 0, 0, 196,
    0, 0, 0, 197, 0, 0, 198, 0, 0, 199, 0, 0, 0, 200, 0, 0, 201, 0, 0, 202, 0, 0, 0, 203, 0, 0, 204, 0, 0, 205, 0, 0,
    0, 206, 0, 0, 207, 0, 0, 208, 0, 0, 0, 209, 0, 0, 210, 0, 0, 211, 0, 0, 0, 212, 0, 0, 213, 0, 0, 214, 0, 0, 0, 215,
    0, 0, 216, 0, 0, 217, 0, 0, 0, 218, 0, 0, 219, 0, 0, 220, 0, 0, 0, 221, 0, 0, 222, 0, 0, 223, 0, 0, 0, 224, 0, 0,
    225, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0,
    0, 230, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 234, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0,
    0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0,
    0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0,
    0, 246, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0,
    0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 254, 0, 0,
    0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0,
    259, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 0, 264,
    0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 266, 0, 267, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 269, 0, 270, 0, 0, 0, 0, 0,
    271, 0, 0, 0, 0, 0, 0, 272, 0, 273, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 275, 0, 276, 0, 0, 0, 0, 0, 277, 0,
    0, 0, 0, 0, 0, 278, 0, 279, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 281, 0, 282, 0, 0, 0, 0, 0, 283, 0, 0, 0,
    0, 0, 0, 284, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 287, 0, 288, 0, 0, 0, 0, 0, 289, 0, 0, 0, 0, 0,
    0, 290, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 293, 0, 294, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 296,
    0, 297, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 299, 0, 300, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 303,
    0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 305, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 308, 0, 309, 0, 0,
    0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 311, 0, 312, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 314, 0, 315, 0, 0, 0, 0,
    0, 316, 0, 0, 0, 0, 0, 0, 317, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 320, 0, 321, 0, 0, 0, 0, 0, 322,
    0, 0, 0, 0, 0, 0, 323, 0, 324, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 326, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0,
    0, 0, 0, 0, 329, 0, 330, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 332, 0, 333, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0,
    0, 0, 335, 0, 336, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 0, 338, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0,
    341, 0, 342, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 344, 0, 345, 0, 346, 0, 0, 347, 0, 0, 0, 0, 348, 0, 0, 0, 0,
    0, 0, 0, 0, 349, 0, 350, 0, 0, 0, 351, 0, 0, 0, 352, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0,
    0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 358, 0, 0, 359, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0,
    0, 361, 0, 362, 0, 363, 0, 0, 0, 364, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 368, 0, 0, 369, 0, 0, 370, 0, 0, 371, 0, 0, 372, 0, 0,
    373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 375, 0, 0, 0, 0, 376, 0, 0, 377, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 381, 0, 0,
    382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0,
    0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 390,
    0, 0, 0, 0, 391, 0, 0, 0, 0, 392, 0, 0, 0, 0, 393, 0, 394, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 396, 0,
    0, 397, 0, 0, 0, 398, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 401, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 403, 0, 0, 0, 404, 0, 405, 0, 0, 406, 407, 0, 0, 0,
    0, 0, 0, 0, 408, 0, 0, 409, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 412, 0, 0, 0, 413,
    0, 414, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0,
    0, 0, 420, 0, 0, 0, 0, 421, 0, 422, 0, 0, 0, 0, 423, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 426, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 434,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 436, 0, 0, 0, 0, 0, 0, 437, 438, 0,
    0, 0, 0, 0, 0, 439, 440, 0, 0, 0, 0, 0, 0, 441, 442, 0, 0, 0, 443, 0, 444, 445, 0, 0, 446, 447, 0, 0, 448, 0, 0, 0,
    0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 453,
    0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 455, 0, 0, 456, 0, 0, 0, 0, 457, 458, 0, 0, 0, 459, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 461, 0, 0, 0, 0, 462, 0, 0, 463, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 465, 0, 466, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 468, 469, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 471, 0, 0, 0, 472,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 474, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    476, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 480, 0, 0,
    0, 0, 481, 0, 0, 0, 0, 482, 0, 0, 0, 0, 483, 0, 0, 0, 484, 0, 0, 0, 485, 0, 0, 0, 0, 486, 0, 0, 0, 487, 0, 0,
    0, 0, 488, 0, 0, 0, 489, 0, 0, 0, 490, 0, 0, 0, 0, 491, 0, 0, 0, 492, 0, 0, 0, 493, 0, 0, 0, 0, 494, 0, 0, 0,
    0, 495, 0, 0, 0, 0, 496, 0, 0, 0, 0, 497, 0, 0, 0, 498, 0, 0, 0, 0, 499, 0, 0, 0, 0, 500, 0, 0, 0, 0, 501, 0,
    0, 0, 0, 502, 0, 0, 0, 503, 0, 0, 0, 504, 0, 0, 0, 0, 505, 0, 0, 0, 0, 506, 0, 0, 0, 0, 507, 0, 0, 0, 508, 0,
    0, 0, 0, 509, 0, 0, 0, 0, 510, 0, 0, 0, 0, 511, 0, 0, 0, 0, 512, 0, 0, 0, 0, 513, 0, 0, 514, 0, 0, 0, 0, 0,
    0, 515, 0, 0, 0, 0, 0, 0, 0, 516, 0, 517, 0, 0, 0, 518, 0, 519, 0, 0, 0, 520, 0, 0, 0, 521, 0, 0, 0, 0, 0, 522,
    0, 0, 0, 0, 0, 523, 0, 0, 0, 524, 0, 0, 0, 0, 0, 525, 0, 0, 526, 0, 527, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0,
    0, 0, 0, 529, 0, 530, 0, 0, 531, 0, 0, 532, 0, 0, 0, 0, 533, 0, 534, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 536, 0, 0, 0, 0, 0, 537, 0, 538, 539, 0, 0, 540, 0, 0, 0, 541, 0, 0, 0, 0, 542, 0, 0, 543, 0, 0, 0, 0, 0, 544,
    0, 0, 0, 0, 0, 545, 0, 546, 547, 0, 0, 548, 0, 0, 0, 549, 0, 0, 0, 0, 550, 0, 0, 551, 0, 0, 0, 0, 0, 0, 0, 0,
    552, 0, 0, 0, 0, 0, 0, 553, 0, 554, 0, 555, 0, 0, 0, 556, 0, 0, 557, 0, 0, 558, 0, 0, 0, 0, 559, 0, 0, 0, 560, 0,
    0, 561, 0, 0, 562, 0, 0, 0, 563, 564, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 566, 567, 0, 0, 568, 569,
    0, 0, 570, 0, 0, 0, 0, 0, 0, 0, 571, 0, 0, 0, 0, 572, 573, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 576, 0, 0, 0, 577, 0, 0, 0, 578, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 579, 580, 0, 0, 581, 0, 0, 0, 0, 0, 0, 582, 0, 0, 0, 0, 0, 583, 0, 584, 585, 0, 0, 586, 0, 0, 0, 587,
    0, 0, 0, 0, 588, 0, 0, 589, 0, 0, 0, 0, 0, 590, 0, 0, 0, 0, 0, 591, 0, 592, 593, 0, 0, 594, 0, 0, 0, 595, 0, 0,
    0, 0, 596, 0, 0, 597, 0, 0, 0, 0, 598, 0, 0, 599, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0, 601, 602, 0, 0, 603, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 604, 0, 0, 605, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 606,
    0, 607, 0, 0, 608, 609, 0, 610, 0, 0, 0, 0, 0, 611, 0, 0, 0, 0, 612, 0, 0, 0, 613, 0, 614, 0, 615, 0, 0, 616, 0, 0,
    617, 0, 0, 0, 618, 0, 0, 619, 0, 0, 620, 0, 0, 0, 621, 0, 0, 622, 0, 0, 623, 0, 0, 0, 624, 0, 0, 625, 0, 0, 626, 0,
    0, 0, 627, 0, 0, 628, 0, 0, 629, 0, 0, 0, 630, 0, 0, 631, 0, 0, 632, 0, 0, 0, 633, 0, 0, 634, 0, 0, 635, 0, 0, 0,
    636, 0, 0, 637, 0, 0, 638, 0, 0, 0, 0, 0, 0, 0, 639, 0, 0, 0, 0, 0, 640, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 641, 0, 0, 0, 0, 0, 0, 642, 0, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 0, 644, 0, 0, 0, 0, 0, 0, 645, 0, 0,
    0, 0, 0, 0, 646, 0, 0, 0, 0, 0, 0, 647, 0, 0, 0, 0, 0, 0, 648, 0, 0, 0, 0, 649, 0, 0, 0, 650, 0, 0, 0, 0,
    0, 0, 0, 651, 0, 0, 0, 652, 0, 653, 0, 0, 0, 654, 0, 0, 0, 0, 0, 0, 655, 0, 656, 0, 657, 0, 0, 0, 658, 0, 0, 0,
    0, 0, 0, 659, 0, 660, 0, 661, 0, 0, 0, 662, 0, 0, 0, 0, 0, 0, 663, 0, 664, 0, 665, 0, 0, 0, 666, 0, 0, 0, 0, 0,
    0, 667, 0, 668, 0, 669, 0, 0, 0, 670, 0, 0, 0, 0, 0, 0, 671, 0, 672, 0, 673, 0, 0, 0, 674, 0, 0, 0, 0, 0, 0, 675,
    0, 676, 0, 677, 0, 0, 0, 678, 0, 0, 0, 0, 0, 0, 679, 0, 680, 0, 681, 0, 0, 0, 682, 0, 0, 0, 0, 0, 0, 683, 0, 684,
    0, 685, 0, 0, 0, 686, 0, 0, 0, 0, 0, 0, 687, 0, 688, 0, 689, 0, 0, 690, 0, 0, 0, 0, 691, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 692, 0, 0, 0, 693, 0, 0, 0, 694, 0, 0, 0, 0, 0, 0, 695, 0, 0, 696, 0, 0, 0, 697, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 698, 0, 0, 0, 0, 0, 0, 699, 0, 700, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 701, 0, 0, 702, 0, 0, 703, 0, 0, 704, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 705, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 706, 0, 0, 707, 0, 0, 0, 0, 0, 0, 0, 0,
    708, 0, 0, 0, 709, 0, 0, 710, 0, 0, 711, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 712, 0, 713, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 714, 0, 0, 0, 0, 0, 0, 715, 0, 0, 0, 0, 0, 0, 716, 0, 0, 0, 0, 0, 0, 717, 0, 0, 0, 718, 0, 719,
    0, 0, 720, 0, 0, 0, 0, 0, 721, 0, 0, 0, 0, 0, 722, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 723, 0, 0, 0, 0, 724, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 725, 0, 0, 726, 0, 727, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 728, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 729, 0, 0, 0, 0, 730, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 731, 0, 0, 732, 0, 0, 0, 0, 0, 0, 733, 0, 0, 0, 0, 0, 0, 734, 0, 0, 0, 0, 0, 0, 735, 0, 0,
    0, 0, 0, 0, 736, 737, 0, 0, 0, 738, 739, 0, 0, 0, 740, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 741, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 742, 0, 0, 0, 0, 743, 0, 0, 744, 0, 0, 0, 0, 745,
};
void recomp_unit_0139_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A30000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0139[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A30000;
    case 2u: goto L_08A30004;
    case 3u: goto L_08A30008;
    case 4u: goto L_08A30020;
    case 5u: goto L_08A3002C;
    case 6u: goto L_08A30034;
    case 7u: goto L_08A30044;
    case 8u: goto L_08A3004C;
    case 9u: goto L_08A30054;
    case 10u: goto L_08A30064;
    case 11u: goto L_08A30084;
    case 12u: goto L_08A300B8;
    case 13u: goto L_08A300CC;
    case 14u: goto L_08A300D4;
    case 15u: goto L_08A300E0;
    case 16u: goto L_08A300F8;
    case 17u: goto L_08A30110;
    case 18u: goto L_08A3015C;
    case 19u: goto L_08A30168;
    case 20u: goto L_08A30178;
    case 21u: goto L_08A30184;
    case 22u: goto L_08A3018C;
    case 23u: goto L_08A30190;
    case 24u: goto L_08A3019C;
    case 25u: goto L_08A301A4;
    case 26u: goto L_08A301B0;
    case 27u: goto L_08A301DC;
    case 28u: goto L_08A301E8;
    case 29u: goto L_08A30248;
    case 30u: goto L_08A30254;
    case 31u: goto L_08A30264;
    case 32u: goto L_08A30270;
    case 33u: goto L_08A30278;
    case 34u: goto L_08A3027C;
    case 35u: goto L_08A3028C;
    case 36u: goto L_08A302A8;
    case 37u: goto L_08A302C0;
    case 38u: goto L_08A302D4;
    case 39u: goto L_08A302D8;
    case 40u: goto L_08A30304;
    case 41u: goto L_08A30344;
    case 42u: goto L_08A30358;
    case 43u: goto L_08A30360;
    case 44u: goto L_08A30368;
    case 45u: goto L_08A3036C;
    case 46u: goto L_08A30378;
    case 47u: goto L_08A3038C;
    case 48u: goto L_08A30394;
    case 49u: goto L_08A3039C;
    case 50u: goto L_08A303A0;
    case 51u: goto L_08A303AC;
    case 52u: goto L_08A303C0;
    case 53u: goto L_08A303C8;
    case 54u: goto L_08A303D0;
    case 55u: goto L_08A303D4;
    case 56u: goto L_08A303E0;
    case 57u: goto L_08A303F4;
    case 58u: goto L_08A303FC;
    case 59u: goto L_08A30404;
    case 60u: goto L_08A30408;
    case 61u: goto L_08A30414;
    case 62u: goto L_08A30428;
    case 63u: goto L_08A30430;
    case 64u: goto L_08A30438;
    case 65u: goto L_08A3043C;
    case 66u: goto L_08A304A0;
    case 67u: goto L_08A304D4;
    case 68u: goto L_08A304DC;
    case 69u: goto L_08A304EC;
    case 70u: goto L_08A30550;
    case 71u: goto L_08A30558;
    case 72u: goto L_08A30568;
    case 73u: goto L_08A3058C;
    case 74u: goto L_08A3059C;
    case 75u: goto L_08A305B4;
    case 76u: goto L_08A305CC;
    case 77u: goto L_08A305DC;
    case 78u: goto L_08A305F4;
    case 79u: goto L_08A30610;
    case 80u: goto L_08A30620;
    case 81u: goto L_08A30638;
    case 82u: goto L_08A3064C;
    case 83u: goto L_08A30654;
    case 84u: goto L_08A30664;
    case 85u: goto L_08A306BC;
    case 86u: goto L_08A306C4;
    case 87u: goto L_08A306D4;
    case 88u: goto L_08A306F4;
    case 89u: goto L_08A30704;
    case 90u: goto L_08A3071C;
    case 91u: goto L_08A30730;
    case 92u: goto L_08A30740;
    case 93u: goto L_08A30758;
    case 94u: goto L_08A30768;
    case 95u: goto L_08A30778;
    case 96u: goto L_08A30790;
    case 97u: goto L_08A3079C;
    case 98u: goto L_08A30814;
    case 99u: goto L_08A30848;
    case 100u: goto L_08A30858;
    case 101u: goto L_08A3086C;
    case 102u: goto L_08A3087C;
    case 103u: goto L_08A30884;
    case 104u: goto L_08A30894;
    case 105u: goto L_08A308A0;
    case 106u: goto L_08A308AC;
    case 107u: goto L_08A308B4;
    case 108u: goto L_08A308C0;
    case 109u: goto L_08A308CC;
    case 110u: goto L_08A308E4;
    case 111u: goto L_08A308F8;
    case 112u: goto L_08A30944;
    case 113u: goto L_08A30950;
    case 114u: goto L_08A30960;
    case 115u: goto L_08A3096C;
    case 116u: goto L_08A30974;
    case 117u: goto L_08A30978;
    case 118u: goto L_08A30984;
    case 119u: goto L_08A3098C;
    case 120u: goto L_08A309A0;
    case 121u: goto L_08A309AC;
    case 122u: goto L_08A309C0;
    case 123u: goto L_08A30A0C;
    case 124u: goto L_08A30A18;
    case 125u: goto L_08A30A28;
    case 126u: goto L_08A30A34;
    case 127u: goto L_08A30A3C;
    case 128u: goto L_08A30A40;
    case 129u: goto L_08A30A4C;
    case 130u: goto L_08A30A60;
    case 131u: goto L_08A30A74;
    case 132u: goto L_08A30A84;
    case 133u: goto L_08A30A8C;
    case 134u: goto L_08A30A94;
    case 135u: goto L_08A30A98;
    case 136u: goto L_08A30AC4;
    case 137u: goto L_08A30AD4;
    case 138u: goto L_08A30AE0;
    case 139u: goto L_08A30AE8;
    case 140u: goto L_08A30AFC;
    case 141u: goto L_08A30B14;
    case 142u: goto L_08A30B24;
    case 143u: goto L_08A30B44;
    case 144u: goto L_08A30B4C;
    case 145u: goto L_08A30B58;
    case 146u: goto L_08A30B6C;
    case 147u: goto L_08A30B7C;
    case 148u: goto L_08A30B84;
    case 149u: goto L_08A30B8C;
    case 150u: goto L_08A30B98;
    case 151u: goto L_08A30BA4;
    case 152u: goto L_08A30BB4;
    case 153u: goto L_08A30BC0;
    case 154u: goto L_08A30BCC;
    case 155u: goto L_08A30BDC;
    case 156u: goto L_08A30BE8;
    case 157u: goto L_08A30BF4;
    case 158u: goto L_08A30C04;
    case 159u: goto L_08A30C10;
    case 160u: goto L_08A30C1C;
    case 161u: goto L_08A30C2C;
    case 162u: goto L_08A30C38;
    case 163u: goto L_08A30C44;
    case 164u: goto L_08A30C54;
    case 165u: goto L_08A30C60;
    case 166u: goto L_08A30C6C;
    case 167u: goto L_08A30C7C;
    case 168u: goto L_08A30C88;
    case 169u: goto L_08A30C94;
    case 170u: goto L_08A30CA4;
    case 171u: goto L_08A30CB0;
    case 172u: goto L_08A30CBC;
    case 173u: goto L_08A30CCC;
    case 174u: goto L_08A30CD8;
    case 175u: goto L_08A30CE4;
    case 176u: goto L_08A30CF4;
    case 177u: goto L_08A30D00;
    case 178u: goto L_08A30D0C;
    case 179u: goto L_08A30D1C;
    case 180u: goto L_08A30D28;
    case 181u: goto L_08A30D34;
    case 182u: goto L_08A30D44;
    case 183u: goto L_08A30D50;
    case 184u: goto L_08A30D5C;
    case 185u: goto L_08A30D6C;
    case 186u: goto L_08A30D78;
    case 187u: goto L_08A30D84;
    case 188u: goto L_08A30D94;
    case 189u: goto L_08A30DA0;
    case 190u: goto L_08A30DAC;
    case 191u: goto L_08A30DBC;
    case 192u: goto L_08A30DC8;
    case 193u: goto L_08A30DD4;
    case 194u: goto L_08A30DE4;
    case 195u: goto L_08A30DF0;
    case 196u: goto L_08A30DFC;
    case 197u: goto L_08A30E0C;
    case 198u: goto L_08A30E18;
    case 199u: goto L_08A30E24;
    case 200u: goto L_08A30E34;
    case 201u: goto L_08A30E40;
    case 202u: goto L_08A30E4C;
    case 203u: goto L_08A30E5C;
    case 204u: goto L_08A30E68;
    case 205u: goto L_08A30E74;
    case 206u: goto L_08A30E84;
    case 207u: goto L_08A30E90;
    case 208u: goto L_08A30E9C;
    case 209u: goto L_08A30EAC;
    case 210u: goto L_08A30EB8;
    case 211u: goto L_08A30EC4;
    case 212u: goto L_08A30ED4;
    case 213u: goto L_08A30EE0;
    case 214u: goto L_08A30EEC;
    case 215u: goto L_08A30EFC;
    case 216u: goto L_08A30F08;
    case 217u: goto L_08A30F14;
    case 218u: goto L_08A30F24;
    case 219u: goto L_08A30F30;
    case 220u: goto L_08A30F3C;
    case 221u: goto L_08A30F4C;
    case 222u: goto L_08A30F58;
    case 223u: goto L_08A30F64;
    case 224u: goto L_08A30F74;
    case 225u: goto L_08A30F80;
    case 226u: goto L_08A30F8C;
    case 227u: goto L_08A30FB0;
    case 228u: goto L_08A30FCC;
    case 229u: goto L_08A30FE8;
    case 230u: goto L_08A31004;
    case 231u: goto L_08A31020;
    case 232u: goto L_08A3103C;
    case 233u: goto L_08A31058;
    case 234u: goto L_08A31074;
    case 235u: goto L_08A310B8;
    case 236u: goto L_08A310E0;
    case 237u: goto L_08A310F8;
    case 238u: goto L_08A31114;
    case 239u: goto L_08A31130;
    case 240u: goto L_08A3114C;
    case 241u: goto L_08A31178;
    case 242u: goto L_08A31194;
    case 243u: goto L_08A311B0;
    case 244u: goto L_08A311CC;
    case 245u: goto L_08A311E8;
    case 246u: goto L_08A31204;
    case 247u: goto L_08A31220;
    case 248u: goto L_08A3123C;
    case 249u: goto L_08A31258;
    case 250u: goto L_08A31274;
    case 251u: goto L_08A31290;
    case 252u: goto L_08A312AC;
    case 253u: goto L_08A312D8;
    case 254u: goto L_08A312F4;
    case 255u: goto L_08A31310;
    case 256u: goto L_08A3132C;
    case 257u: goto L_08A31348;
    case 258u: goto L_08A31364;
    case 259u: goto L_08A31380;
    case 260u: goto L_08A3139C;
    case 261u: goto L_08A313B8;
    case 262u: goto L_08A313D4;
    case 263u: goto L_08A313EC;
    case 264u: goto L_08A313FC;
    case 265u: goto L_08A3141C;
    case 266u: goto L_08A3142C;
    case 267u: goto L_08A31434;
    case 268u: goto L_08A31444;
    case 269u: goto L_08A31460;
    case 270u: goto L_08A31468;
    case 271u: goto L_08A31480;
    case 272u: goto L_08A3149C;
    case 273u: goto L_08A314A4;
    case 274u: goto L_08A314BC;
    case 275u: goto L_08A314D8;
    case 276u: goto L_08A314E0;
    case 277u: goto L_08A314F8;
    case 278u: goto L_08A31514;
    case 279u: goto L_08A3151C;
    case 280u: goto L_08A31534;
    case 281u: goto L_08A31550;
    case 282u: goto L_08A31558;
    case 283u: goto L_08A31570;
    case 284u: goto L_08A3158C;
    case 285u: goto L_08A31594;
    case 286u: goto L_08A315AC;
    case 287u: goto L_08A315C8;
    case 288u: goto L_08A315D0;
    case 289u: goto L_08A315E8;
    case 290u: goto L_08A31604;
    case 291u: goto L_08A3160C;
    case 292u: goto L_08A31624;
    case 293u: goto L_08A31640;
    case 294u: goto L_08A31648;
    case 295u: goto L_08A31660;
    case 296u: goto L_08A3167C;
    case 297u: goto L_08A31684;
    case 298u: goto L_08A3169C;
    case 299u: goto L_08A316B8;
    case 300u: goto L_08A316C0;
    case 301u: goto L_08A316D8;
    case 302u: goto L_08A316F4;
    case 303u: goto L_08A316FC;
    case 304u: goto L_08A31714;
    case 305u: goto L_08A31730;
    case 306u: goto L_08A31738;
    case 307u: goto L_08A31750;
    case 308u: goto L_08A3176C;
    case 309u: goto L_08A31774;
    case 310u: goto L_08A3178C;
    case 311u: goto L_08A317A8;
    case 312u: goto L_08A317B0;
    case 313u: goto L_08A317C8;
    case 314u: goto L_08A317E4;
    case 315u: goto L_08A317EC;
    case 316u: goto L_08A31804;
    case 317u: goto L_08A31820;
    case 318u: goto L_08A31828;
    case 319u: goto L_08A31840;
    case 320u: goto L_08A3185C;
    case 321u: goto L_08A31864;
    case 322u: goto L_08A3187C;
    case 323u: goto L_08A31898;
    case 324u: goto L_08A318A0;
    case 325u: goto L_08A318B8;
    case 326u: goto L_08A318D4;
    case 327u: goto L_08A318DC;
    case 328u: goto L_08A318F4;
    case 329u: goto L_08A31910;
    case 330u: goto L_08A31918;
    case 331u: goto L_08A31930;
    case 332u: goto L_08A3194C;
    case 333u: goto L_08A31954;
    case 334u: goto L_08A3196C;
    case 335u: goto L_08A31988;
    case 336u: goto L_08A31990;
    case 337u: goto L_08A319A8;
    case 338u: goto L_08A319C4;
    case 339u: goto L_08A319CC;
    case 340u: goto L_08A319E4;
    case 341u: goto L_08A31A00;
    case 342u: goto L_08A31A08;
    case 343u: goto L_08A31A20;
    case 344u: goto L_08A31A3C;
    case 345u: goto L_08A31A44;
    case 346u: goto L_08A31A4C;
    case 347u: goto L_08A31A58;
    case 348u: goto L_08A31A6C;
    case 349u: goto L_08A31A90;
    case 350u: goto L_08A31A98;
    case 351u: goto L_08A31AA8;
    case 352u: goto L_08A31AB8;
    case 353u: goto L_08A31AD0;
    case 354u: goto L_08A31AF4;
    case 355u: goto L_08A31B04;
    case 356u: goto L_08A31B1C;
    case 357u: goto L_08A31B3C;
    case 358u: goto L_08A31B48;
    case 359u: goto L_08A31B54;
    case 360u: goto L_08A31B6C;
    case 361u: goto L_08A31B84;
    case 362u: goto L_08A31B8C;
    case 363u: goto L_08A31B94;
    case 364u: goto L_08A31BA4;
    case 365u: goto L_08A31BBC;
    case 366u: goto L_08A31BD0;
    case 367u: goto L_08A31C38;
    case 368u: goto L_08A31C44;
    case 369u: goto L_08A31C50;
    case 370u: goto L_08A31C5C;
    case 371u: goto L_08A31C68;
    case 372u: goto L_08A31C74;
    case 373u: goto L_08A31C80;
    case 374u: goto L_08A31D14;
    case 375u: goto L_08A31D88;
    case 376u: goto L_08A31D9C;
    case 377u: goto L_08A31DA8;
    case 378u: goto L_08A31DB4;
    case 379u: goto L_08A31DD8;
    case 380u: goto L_08A31DE8;
    case 381u: goto L_08A31DF4;
    case 382u: goto L_08A31E00;
    case 383u: goto L_08A31E30;
    case 384u: goto L_08A31E38;
    case 385u: goto L_08A31E78;
    case 386u: goto L_08A31E94;
    case 387u: goto L_08A31EB0;
    case 388u: goto L_08A31ECC;
    case 389u: goto L_08A31EE8;
    case 390u: goto L_08A31EFC;
    case 391u: goto L_08A31F10;
    case 392u: goto L_08A31F24;
    case 393u: goto L_08A31F38;
    case 394u: goto L_08A31F40;
    case 395u: goto L_08A31F5C;
    case 396u: goto L_08A31F78;
    case 397u: goto L_08A31F84;
    case 398u: goto L_08A31F94;
    case 399u: goto L_08A31FAC;
    case 400u: goto L_08A31FDC;
    case 401u: goto L_08A31FE8;
    case 402u: goto L_08A3203C;
    case 403u: goto L_08A32048;
    case 404u: goto L_08A32058;
    case 405u: goto L_08A32060;
    case 406u: goto L_08A3206C;
    case 407u: goto L_08A32070;
    case 408u: goto L_08A32090;
    case 409u: goto L_08A3209C;
    case 410u: goto L_08A320B4;
    case 411u: goto L_08A320D4;
    case 412u: goto L_08A320EC;
    case 413u: goto L_08A320FC;
    case 414u: goto L_08A32104;
    case 415u: goto L_08A32114;
    case 416u: goto L_08A32154;
    case 417u: goto L_08A32178;
    case 418u: goto L_08A321C0;
    case 419u: goto L_08A321E8;
    case 420u: goto L_08A32208;
    case 421u: goto L_08A3221C;
    case 422u: goto L_08A32224;
    case 423u: goto L_08A32238;
    case 424u: goto L_08A32244;
    case 425u: goto L_08A322D8;
    case 426u: goto L_08A322EC;
    case 427u: goto L_08A32350;
    case 428u: goto L_08A3239C;
    case 429u: goto L_08A323D0;
    case 430u: goto L_08A32400;
    case 431u: goto L_08A32460;
    case 432u: goto L_08A324A8;
    case 433u: goto L_08A324DC;
    case 434u: goto L_08A324FC;
    case 435u: goto L_08A32554;
    case 436u: goto L_08A32558;
    case 437u: goto L_08A32574;
    case 438u: goto L_08A32578;
    case 439u: goto L_08A32594;
    case 440u: goto L_08A32598;
    case 441u: goto L_08A325B4;
    case 442u: goto L_08A325B8;
    case 443u: goto L_08A325C8;
    case 444u: goto L_08A325D0;
    case 445u: goto L_08A325D4;
    case 446u: goto L_08A325E0;
    case 447u: goto L_08A325E4;
    case 448u: goto L_08A325F0;
    case 449u: goto L_08A3260C;
    case 450u: goto L_08A32628;
    case 451u: goto L_08A32644;
    case 452u: goto L_08A32660;
    case 453u: goto L_08A3267C;
    case 454u: goto L_08A32698;
    case 455u: goto L_08A326B4;
    case 456u: goto L_08A326C0;
    case 457u: goto L_08A326D4;
    case 458u: goto L_08A326D8;
    case 459u: goto L_08A326E8;
    case 460u: goto L_08A32744;
    case 461u: goto L_08A32790;
    case 462u: goto L_08A327A4;
    case 463u: goto L_08A327B0;
    case 464u: goto L_08A327C4;
    case 465u: goto L_08A327E0;
    case 466u: goto L_08A327E8;
    case 467u: goto L_08A3281C;
    case 468u: goto L_08A32834;
    case 469u: goto L_08A32838;
    case 470u: goto L_08A32858;
    case 471u: goto L_08A3286C;
    case 472u: goto L_08A3287C;
    case 473u: goto L_08A328B0;
    case 474u: goto L_08A328B8;
    case 475u: goto L_08A328C8;
    case 476u: goto L_08A32900;
    case 477u: goto L_08A32914;
    case 478u: goto L_08A32938;
    case 479u: goto L_08A3295C;
    case 480u: goto L_08A32974;
    case 481u: goto L_08A32988;
    case 482u: goto L_08A3299C;
    case 483u: goto L_08A329B0;
    case 484u: goto L_08A329C0;
    case 485u: goto L_08A329D0;
    case 486u: goto L_08A329E4;
    case 487u: goto L_08A329F4;
    case 488u: goto L_08A32A08;
    case 489u: goto L_08A32A18;
    case 490u: goto L_08A32A28;
    case 491u: goto L_08A32A3C;
    case 492u: goto L_08A32A4C;
    case 493u: goto L_08A32A5C;
    case 494u: goto L_08A32A70;
    case 495u: goto L_08A32A84;
    case 496u: goto L_08A32A98;
    case 497u: goto L_08A32AAC;
    case 498u: goto L_08A32ABC;
    case 499u: goto L_08A32AD0;
    case 500u: goto L_08A32AE4;
    case 501u: goto L_08A32AF8;
    case 502u: goto L_08A32B0C;
    case 503u: goto L_08A32B1C;
    case 504u: goto L_08A32B2C;
    case 505u: goto L_08A32B40;
    case 506u: goto L_08A32B54;
    case 507u: goto L_08A32B68;
    case 508u: goto L_08A32B78;
    case 509u: goto L_08A32B8C;
    case 510u: goto L_08A32BA0;
    case 511u: goto L_08A32BB4;
    case 512u: goto L_08A32BC8;
    case 513u: goto L_08A32BDC;
    case 514u: goto L_08A32BE8;
    case 515u: goto L_08A32C04;
    case 516u: goto L_08A32C24;
    case 517u: goto L_08A32C2C;
    case 518u: goto L_08A32C3C;
    case 519u: goto L_08A32C44;
    case 520u: goto L_08A32C54;
    case 521u: goto L_08A32C64;
    case 522u: goto L_08A32C7C;
    case 523u: goto L_08A32C94;
    case 524u: goto L_08A32CA4;
    case 525u: goto L_08A32CBC;
    case 526u: goto L_08A32CC8;
    case 527u: goto L_08A32CD0;
    case 528u: goto L_08A32CF0;
    case 529u: goto L_08A32D0C;
    case 530u: goto L_08A32D14;
    case 531u: goto L_08A32D20;
    case 532u: goto L_08A32D2C;
    case 533u: goto L_08A32D40;
    case 534u: goto L_08A32D48;
    case 535u: goto L_08A32D54;
    case 536u: goto L_08A32D84;
    case 537u: goto L_08A32D9C;
    case 538u: goto L_08A32DA4;
    case 539u: goto L_08A32DA8;
    case 540u: goto L_08A32DB4;
    case 541u: goto L_08A32DC4;
    case 542u: goto L_08A32DD8;
    case 543u: goto L_08A32DE4;
    case 544u: goto L_08A32DFC;
    case 545u: goto L_08A32E14;
    case 546u: goto L_08A32E1C;
    case 547u: goto L_08A32E20;
    case 548u: goto L_08A32E2C;
    case 549u: goto L_08A32E3C;
    case 550u: goto L_08A32E50;
    case 551u: goto L_08A32E5C;
    case 552u: goto L_08A32E80;
    case 553u: goto L_08A32E9C;
    case 554u: goto L_08A32EA4;
    case 555u: goto L_08A32EAC;
    case 556u: goto L_08A32EBC;
    case 557u: goto L_08A32EC8;
    case 558u: goto L_08A32ED4;
    case 559u: goto L_08A32EE8;
    case 560u: goto L_08A32EF8;
    case 561u: goto L_08A32F04;
    case 562u: goto L_08A32F10;
    case 563u: goto L_08A32F20;
    case 564u: goto L_08A32F24;
    case 565u: goto L_08A32F38;
    case 566u: goto L_08A32F68;
    case 567u: goto L_08A32F6C;
    case 568u: goto L_08A32F78;
    case 569u: goto L_08A32F7C;
    case 570u: goto L_08A32F88;
    case 571u: goto L_08A32FA8;
    case 572u: goto L_08A32FBC;
    case 573u: goto L_08A32FC0;
    case 574u: goto L_08A32FCC;
    case 575u: goto L_08A32FEC;
    case 576u: goto L_08A33038;
    case 577u: goto L_08A33048;
    case 578u: goto L_08A33058;
    case 579u: goto L_08A33090;
    case 580u: goto L_08A33094;
    case 581u: goto L_08A330A0;
    case 582u: goto L_08A330BC;
    case 583u: goto L_08A330D4;
    case 584u: goto L_08A330DC;
    case 585u: goto L_08A330E0;
    case 586u: goto L_08A330EC;
    case 587u: goto L_08A330FC;
    case 588u: goto L_08A33110;
    case 589u: goto L_08A3311C;
    case 590u: goto L_08A33134;
    case 591u: goto L_08A3314C;
    case 592u: goto L_08A33154;
    case 593u: goto L_08A33158;
    case 594u: goto L_08A33164;
    case 595u: goto L_08A33174;
    case 596u: goto L_08A33188;
    case 597u: goto L_08A33194;
    case 598u: goto L_08A331A8;
    case 599u: goto L_08A331B4;
    case 600u: goto L_08A331C4;
    case 601u: goto L_08A331E0;
    case 602u: goto L_08A331E4;
    case 603u: goto L_08A331F0;
    case 604u: goto L_08A33220;
    case 605u: goto L_08A3322C;
    case 606u: goto L_08A3327C;
    case 607u: goto L_08A33284;
    case 608u: goto L_08A33290;
    case 609u: goto L_08A33294;
    case 610u: goto L_08A3329C;
    case 611u: goto L_08A332B4;
    case 612u: goto L_08A332C8;
    case 613u: goto L_08A332D8;
    case 614u: goto L_08A332E0;
    case 615u: goto L_08A332E8;
    case 616u: goto L_08A332F4;
    case 617u: goto L_08A33300;
    case 618u: goto L_08A33310;
    case 619u: goto L_08A3331C;
    case 620u: goto L_08A33328;
    case 621u: goto L_08A33338;
    case 622u: goto L_08A33344;
    case 623u: goto L_08A33350;
    case 624u: goto L_08A33360;
    case 625u: goto L_08A3336C;
    case 626u: goto L_08A33378;
    case 627u: goto L_08A33388;
    case 628u: goto L_08A33394;
    case 629u: goto L_08A333A0;
    case 630u: goto L_08A333B0;
    case 631u: goto L_08A333BC;
    case 632u: goto L_08A333C8;
    case 633u: goto L_08A333D8;
    case 634u: goto L_08A333E4;
    case 635u: goto L_08A333F0;
    case 636u: goto L_08A33400;
    case 637u: goto L_08A3340C;
    case 638u: goto L_08A33418;
    case 639u: goto L_08A33438;
    case 640u: goto L_08A33450;
    case 641u: goto L_08A33484;
    case 642u: goto L_08A334A0;
    case 643u: goto L_08A334BC;
    case 644u: goto L_08A334D8;
    case 645u: goto L_08A334F4;
    case 646u: goto L_08A33510;
    case 647u: goto L_08A3352C;
    case 648u: goto L_08A33548;
    case 649u: goto L_08A3355C;
    case 650u: goto L_08A3356C;
    case 651u: goto L_08A3358C;
    case 652u: goto L_08A3359C;
    case 653u: goto L_08A335A4;
    case 654u: goto L_08A335B4;
    case 655u: goto L_08A335D0;
    case 656u: goto L_08A335D8;
    case 657u: goto L_08A335E0;
    case 658u: goto L_08A335F0;
    case 659u: goto L_08A3360C;
    case 660u: goto L_08A33614;
    case 661u: goto L_08A3361C;
    case 662u: goto L_08A3362C;
    case 663u: goto L_08A33648;
    case 664u: goto L_08A33650;
    case 665u: goto L_08A33658;
    case 666u: goto L_08A33668;
    case 667u: goto L_08A33684;
    case 668u: goto L_08A3368C;
    case 669u: goto L_08A33694;
    case 670u: goto L_08A336A4;
    case 671u: goto L_08A336C0;
    case 672u: goto L_08A336C8;
    case 673u: goto L_08A336D0;
    case 674u: goto L_08A336E0;
    case 675u: goto L_08A336FC;
    case 676u: goto L_08A33704;
    case 677u: goto L_08A3370C;
    case 678u: goto L_08A3371C;
    case 679u: goto L_08A33738;
    case 680u: goto L_08A33740;
    case 681u: goto L_08A33748;
    case 682u: goto L_08A33758;
    case 683u: goto L_08A33774;
    case 684u: goto L_08A3377C;
    case 685u: goto L_08A33784;
    case 686u: goto L_08A33794;
    case 687u: goto L_08A337B0;
    case 688u: goto L_08A337B8;
    case 689u: goto L_08A337C0;
    case 690u: goto L_08A337CC;
    case 691u: goto L_08A337E0;
    case 692u: goto L_08A33814;
    case 693u: goto L_08A33824;
    case 694u: goto L_08A33834;
    case 695u: goto L_08A33850;
    case 696u: goto L_08A3385C;
    case 697u: goto L_08A3386C;
    case 698u: goto L_08A33894;
    case 699u: goto L_08A338B0;
    case 700u: goto L_08A338B8;
    case 701u: goto L_08A33910;
    case 702u: goto L_08A3391C;
    case 703u: goto L_08A33928;
    case 704u: goto L_08A33934;
    case 705u: goto L_08A339A0;
    case 706u: goto L_08A339D0;
    case 707u: goto L_08A339DC;
    case 708u: goto L_08A33A00;
    case 709u: goto L_08A33A10;
    case 710u: goto L_08A33A1C;
    case 711u: goto L_08A33A28;
    case 712u: goto L_08A33A54;
    case 713u: goto L_08A33A5C;
    case 714u: goto L_08A33A90;
    case 715u: goto L_08A33AAC;
    case 716u: goto L_08A33AC8;
    case 717u: goto L_08A33AE4;
    case 718u: goto L_08A33AF4;
    case 719u: goto L_08A33AFC;
    case 720u: goto L_08A33B08;
    case 721u: goto L_08A33B20;
    case 722u: goto L_08A33B38;
    case 723u: goto L_08A33BCC;
    case 724u: goto L_08A33BE0;
    case 725u: goto L_08A33CE4;
    case 726u: goto L_08A33CF0;
    case 727u: goto L_08A33CF8;
    case 728u: goto L_08A33D4C;
    case 729u: goto L_08A33DB0;
    case 730u: goto L_08A33DC4;
    case 731u: goto L_08A33E94;
    case 732u: goto L_08A33EA0;
    case 733u: goto L_08A33EBC;
    case 734u: goto L_08A33ED8;
    case 735u: goto L_08A33EF4;
    case 736u: goto L_08A33F10;
    case 737u: goto L_08A33F14;
    case 738u: goto L_08A33F24;
    case 739u: goto L_08A33F28;
    case 740u: goto L_08A33F38;
    case 741u: goto L_08A33F84;
    case 742u: goto L_08A33FC0;
    case 743u: goto L_08A33FD4;
    case 744u: goto L_08A33FE0;
    case 745u: goto L_08A33FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A30000:
    // nop
    goto L_08A30004;
L_08A30004:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_08A30008;
L_08A30008:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[1]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A30064;
      }
      goto L_08A30020;
    }
L_08A30020:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30064;
      }
      goto L_08A3002C;
    }
L_08A3002C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3004C;
      }
      goto L_08A30034;
    }
L_08A30034:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A30044u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 165u, 0x089FCE18u>(ctx, &aot_mem) && ctx.pc == 0x08A30044u) goto L_08A30044;
    return;
L_08A30044:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30064;
      }
      goto L_08A3004C;
    }
L_08A3004C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30064;
      }
      goto L_08A30054;
    }
L_08A30054:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A30064u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 378u, 0x089F9A94u>(ctx, &aot_mem) && ctx.pc == 0x08A30064u) goto L_08A30064;
    return;
L_08A30064:
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
L_08A30084:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A300B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 713u, 0x089FF72Cu>(ctx, &aot_mem) && ctx.pc == 0x08A300B8u) goto L_08A300B8;
    return;
L_08A300B8:
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A301A4;
      }
      goto L_08A300CC;
    }
L_08A300CC:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A301A4;
      }
      goto L_08A300D4;
    }
L_08A300D4:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30190;
      }
      goto L_08A300E0;
    }
L_08A300E0:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A300F8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A300F8u) goto L_08A300F8;
    return;
L_08A300F8:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A30110u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A30110u) goto L_08A30110;
    return;
L_08A30110:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-22272)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-22268)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22264)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30168;
      }
      goto L_08A3015C;
    }
L_08A3015C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A30168;
L_08A30168:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.set_gpr(31, 0x08A30178u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 720u, 0x08A2FEB8u>(ctx, &aot_mem) && ctx.pc == 0x08A30178u) goto L_08A30178;
    return;
L_08A30178:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3018C;
      }
      goto L_08A30184;
    }
L_08A30184:
    ctx.set_gpr(31, 0x08A3018Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A3018Cu) goto L_08A3018C;
    return;
L_08A3018C:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A30190;
L_08A30190:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A300E0;
      }
      goto L_08A3019C;
    }
L_08A3019C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A302A8;
      }
      goto L_08A301A4;
    }
L_08A301A4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x08A301B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 623u, 0x089B798Cu>(ctx, &aot_mem) && ctx.pc == 0x08A301B0u) goto L_08A301B0;
    return;
L_08A301B0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A301DCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A301DCu) goto L_08A301DC;
    return;
L_08A301DC:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3027C;
      }
      goto L_08A301E8;
    }
L_08A301E8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22272)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22268)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22264)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30254;
      }
      goto L_08A30248;
    }
L_08A30248:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A30254;
L_08A30254:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08A30264u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 720u, 0x08A2FEB8u>(ctx, &aot_mem) && ctx.pc == 0x08A30264u) goto L_08A30264;
    return;
L_08A30264:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30278;
      }
      goto L_08A30270;
    }
L_08A30270:
    ctx.set_gpr(31, 0x08A30278u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A30278u) goto L_08A30278;
    return;
L_08A30278:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A3027C;
L_08A3027C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[18] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A301E8;
      }
      goto L_08A3028C;
    }
L_08A3028C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A302A8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A302A8u) goto L_08A302A8;
    return;
L_08A302A8:
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A302C0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A302C0u) goto L_08A302C0;
    return;
L_08A302C0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 240u);
    ctx.set_gpr(2, (ctx.gpr[2] >> 4u) & 0x000000FFu);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A302D8;
      }
      goto L_08A302D4;
    }
L_08A302D4:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    goto L_08A302D8;
L_08A302D8:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A30304:
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
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30368;
      }
      goto L_08A30344;
    }
L_08A30344:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26768)));
    ctx.set_gpr(31, 0x08A30358u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A30358u) goto L_08A30358;
    return;
L_08A30358:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30368;
      }
      goto L_08A30360;
    }
L_08A30360:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3036C;
      }
      goto L_08A30368;
    }
L_08A30368:
    ctx.set_gpr(18, 0u + 0u);
    goto L_08A3036C;
L_08A3036C:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3039C;
      }
      goto L_08A30378;
    }
L_08A30378:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30016)));
    ctx.set_gpr(31, 0x08A3038Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3038Cu) goto L_08A3038C;
    return;
L_08A3038C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3039C;
      }
      goto L_08A30394;
    }
L_08A30394:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A303A0;
      }
      goto L_08A3039C;
    }
L_08A3039C:
    ctx.set_gpr(17, 0u + 0u);
    goto L_08A303A0;
L_08A303A0:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A303D0;
      }
      goto L_08A303AC;
    }
L_08A303AC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29952)));
    ctx.set_gpr(31, 0x08A303C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A303C0u) goto L_08A303C0;
    return;
L_08A303C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A303D0;
      }
      goto L_08A303C8;
    }
L_08A303C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A303D4;
      }
      goto L_08A303D0;
    }
L_08A303D0:
    ctx.set_gpr(16, 0u + 0u);
    goto L_08A303D4;
L_08A303D4:
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30404;
      }
      goto L_08A303E0;
    }
L_08A303E0:
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30004)));
    ctx.set_gpr(31, 0x08A303F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A303F4u) goto L_08A303F4;
    return;
L_08A303F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30404;
      }
      goto L_08A303FC;
    }
L_08A303FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30408;
      }
      goto L_08A30404;
    }
L_08A30404:
    ctx.set_gpr(23, 0u + 0u);
    goto L_08A30408;
L_08A30408:
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30438;
      }
      goto L_08A30414;
    }
L_08A30414:
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30028)));
    ctx.set_gpr(31, 0x08A30428u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A30428u) goto L_08A30428;
    return;
L_08A30428:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30438;
      }
      goto L_08A30430;
    }
L_08A30430:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3043C;
      }
      goto L_08A30438;
    }
L_08A30438:
    ctx.set_gpr(22, 0u + 0u);
    goto L_08A3043C;
L_08A3043C:
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27776)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27772)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-27768)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] << (ctx.gpr[4] & 31u));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.fpr[3] = ctx.fpr[0] / ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.fpr[4] = ctx.fpr[0] / ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(36)));
    ctx.fpr[5] = ctx.fpr[0] / ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(60)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(56)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A304D4;
      }
      goto L_08A304A0;
    }
L_08A304A0:
    ctx.set_gpr(3, ctx.gpr[20] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[20]);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[6] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[6]));
    ctx.fpr[6] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[6]));
    ctx.fpr[6] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[6]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3079C;
      }
      goto L_08A304D4;
    }
L_08A304D4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30550;
      }
      goto L_08A304DC;
    }
L_08A304DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A30550;
      }
      goto L_08A304EC;
    }
L_08A304EC:
    ctx.set_gpr(3, ctx.gpr[20] << 1u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[20]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.fpr[6] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[8] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(6)));
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.fpr[6] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[7] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(6)));
    ctx.set_gpr(3, ctx.gpr[5] << 1u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.fpr[6] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[6] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(6)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[6]));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[7]));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[8]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3079C;
      }
      goto L_08A30550;
    }
L_08A30550:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3064C;
      }
      goto L_08A30558;
    }
L_08A30558:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A3064C;
      }
      goto L_08A30568;
    }
L_08A30568:
    ctx.set_gpr(3, ctx.gpr[20] << 1u);
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[20]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[6] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A3059C;
      }
      goto L_08A3058C;
    }
L_08A3058C:
    ctx.fpr[6] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[7] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(6)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A305B4;
      }
      goto L_08A3059C;
    }
L_08A3059C:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[6] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[7] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(6)));
    ctx.fpr[7] = ctx.fpr[7] + ctx.fpr[7];
    goto L_08A305B4;
L_08A305B4:
    ctx.set_gpr(3, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A305DC;
      }
      goto L_08A305CC;
    }
L_08A305CC:
    ctx.fpr[6] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[8] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(6)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A305F4;
      }
      goto L_08A305DC;
    }
L_08A305DC:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[6] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[8] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(6)));
    ctx.fpr[8] = ctx.fpr[8] + ctx.fpr[8];
    goto L_08A305F4;
L_08A305F4:
    ctx.set_gpr(3, ctx.gpr[20] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[20]);
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A30620;
      }
      goto L_08A30610;
    }
L_08A30610:
    ctx.fpr[6] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[6] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(6)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30638;
      }
      goto L_08A30620;
    }
L_08A30620:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[6] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[6] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(6)));
    ctx.fpr[6] = ctx.fpr[6] + ctx.fpr[6];
    goto L_08A30638;
L_08A30638:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[6]));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[8]));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[7]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3079C;
      }
      goto L_08A3064C;
    }
L_08A3064C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A306BC;
      }
      goto L_08A30654;
    }
L_08A30654:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A306BC;
      }
      goto L_08A30664;
    }
L_08A30664:
    ctx.set_gpr(3, ctx.gpr[20] << 1u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[20]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.fpr[6] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[8] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(6)));
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.fpr[6] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[7] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(6)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0))))));
    ctx.fpr[6] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[6] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(6)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[6]));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[7]));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[8]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3079C;
      }
      goto L_08A306BC;
    }
L_08A306BC:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3079C;
      }
      goto L_08A306C4;
    }
L_08A306C4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A3079C;
      }
      goto L_08A306D4;
    }
L_08A306D4:
    ctx.set_gpr(3, ctx.gpr[20] << 1u);
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[20]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[6] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A30704;
      }
      goto L_08A306F4;
    }
L_08A306F4:
    ctx.fpr[6] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[7] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(6)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3071C;
      }
      goto L_08A30704;
    }
L_08A30704:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[6] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[7] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(6)));
    ctx.fpr[7] = ctx.fpr[7] + ctx.fpr[7];
    goto L_08A3071C;
L_08A3071C:
    ctx.set_gpr(3, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A30740;
      }
      goto L_08A30730;
    }
L_08A30730:
    ctx.fpr[6] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[8] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(6)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30758;
      }
      goto L_08A30740;
    }
L_08A30740:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[6] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[8] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(6)));
    ctx.fpr[8] = ctx.fpr[8] + ctx.fpr[8];
    goto L_08A30758;
L_08A30758:
    ctx.set_gpr(3, ctx.gpr[5] + ctx.gpr[6]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A30778;
      }
      goto L_08A30768;
    }
L_08A30768:
    ctx.fpr[6] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[6] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(6)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30790;
      }
      goto L_08A30778;
    }
L_08A30778:
    ctx.set_gpr(4, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    ctx.fpr[6] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[6] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(6)));
    ctx.fpr[6] = ctx.fpr[6] + ctx.fpr[6];
    goto L_08A30790;
L_08A30790:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[6]));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[8]));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[7]));
    goto L_08A3079C;
L_08A3079C:
    ctx.fpr[6] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[6]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(5, 0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[5]));
    ctx.fpr[5] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(4, 0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[4]));
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.fpr[2] = ctx.fpr[3] + ctx.fpr[2];
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[1] = ctx.fpr[2] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
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
L_08A30814:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A30848u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 713u, 0x089FF72Cu>(ctx, &aot_mem) && ctx.pc == 0x08A30848u) goto L_08A30848;
    return;
L_08A30848:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A30858u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 314u, 0x089F26D8u>(ctx, &aot_mem) && ctx.pc == 0x08A30858u) goto L_08A30858;
    return;
L_08A30858:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A3086Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 250u, 0x089B96A0u>(ctx, &aot_mem) && ctx.pc == 0x08A3086Cu) goto L_08A3086C;
    return;
L_08A3086C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30884;
      }
      goto L_08A3087C;
    }
L_08A3087C:
    ctx.set_gpr(31, 0x08A30884u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A30884u) goto L_08A30884;
    return;
L_08A30884:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A30894u);
    // nop
    goto L_08A30AC4;
L_08A30894:
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A308AC;
      }
      goto L_08A308A0;
    }
L_08A308A0:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A308ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A308ACu) goto L_08A308AC;
    return;
L_08A308AC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30A4C;
      }
      goto L_08A308B4;
    }
L_08A308B4:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3098C;
      }
      goto L_08A308C0;
    }
L_08A308C0:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30978;
      }
      goto L_08A308CC;
    }
L_08A308CC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A308E4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A308E4u) goto L_08A308E4;
    return;
L_08A308E4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(31, 0x08A308F8u);
    // nop
    goto L_08A30304;
L_08A308F8:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22272)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22268)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22264)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30950;
      }
      goto L_08A30944;
    }
L_08A30944:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A30950;
L_08A30950:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.set_gpr(31, 0x08A30960u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 720u, 0x08A2FEB8u>(ctx, &aot_mem) && ctx.pc == 0x08A30960u) goto L_08A30960;
    return;
L_08A30960:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30974;
      }
      goto L_08A3096C;
    }
L_08A3096C:
    ctx.set_gpr(31, 0x08A30974u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A30974u) goto L_08A30974;
    return;
L_08A30974:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A30978;
L_08A30978:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A308CC;
      }
      goto L_08A30984;
    }
L_08A30984:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30A4C;
      }
      goto L_08A3098C;
    }
L_08A3098C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A309A0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A309A0u) goto L_08A309A0;
    return;
L_08A309A0:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30A40;
      }
      goto L_08A309AC;
    }
L_08A309AC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(31, 0x08A309C0u);
    // nop
    goto L_08A30304;
L_08A309C0:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22272)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22268)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22264)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30A18;
      }
      goto L_08A30A0C;
    }
L_08A30A0C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_08A30A18;
L_08A30A18:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08A30A28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 720u, 0x08A2FEB8u>(ctx, &aot_mem) && ctx.pc == 0x08A30A28u) goto L_08A30A28;
    return;
L_08A30A28:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30A3C;
      }
      goto L_08A30A34;
    }
L_08A30A34:
    ctx.set_gpr(31, 0x08A30A3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A30A3Cu) goto L_08A30A3C;
    return;
L_08A30A3C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_08A30A40;
L_08A30A40:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A309AC;
      }
      goto L_08A30A4C;
    }
L_08A30A4C:
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A30A60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 314u, 0x089F26D8u>(ctx, &aot_mem) && ctx.pc == 0x08A30A60u) goto L_08A30A60;
    return;
L_08A30A60:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A30A74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 250u, 0x089B96A0u>(ctx, &aot_mem) && ctx.pc == 0x08A30A74u) goto L_08A30A74;
    return;
L_08A30A74:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30A8C;
      }
      goto L_08A30A84;
    }
L_08A30A84:
    ctx.set_gpr(31, 0x08A30A8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A30A8Cu) goto L_08A30A8C;
    return;
L_08A30A8C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30A98;
      }
      goto L_08A30A94;
    }
L_08A30A94:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    goto L_08A30A98;
L_08A30A98:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
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
L_08A30AC4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30AE0;
      }
      goto L_08A30AD4;
    }
L_08A30AD4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08A30AE0;
L_08A30AE0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A30AE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A30B14;
      }
      goto L_08A30AFC;
    }
L_08A30AFC:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(4, ctx.gpr[3] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A30B14u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A30B14u) goto L_08A30B14;
    return;
L_08A30B14:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A30B24:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08A30B44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 217u, 0x08A590A8u>(ctx, &aot_mem) && ctx.pc == 0x08A30B44u) goto L_08A30B44;
    return;
L_08A30B44:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A30B58;
      }
      goto L_08A30B4C;
    }
L_08A30B4C:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08A30B58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A30B58u) goto L_08A30B58;
    return;
L_08A30B58:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A30B6Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A30B6Cu) goto L_08A30B6C;
    return;
L_08A30B6C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A30B7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 118u, 0x089448B4u>(ctx, &aot_mem) && ctx.pc == 0x08A30B7Cu) goto L_08A30B7C;
    return;
L_08A30B7C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A313D4;
      }
      goto L_08A30B84;
    }
L_08A30B84:
    ctx.set_gpr(31, 0x08A30B8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A30B8Cu) goto L_08A30B8C;
    return;
L_08A30B8C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A30B98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A30B98u) goto L_08A30B98;
    return;
L_08A30B98:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A30BA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 298u, 0x088C1B10u>(ctx, &aot_mem) && ctx.pc == 0x08A30BA4u) goto L_08A30BA4;
    return;
L_08A30BA4:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-22260), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A30BB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A30BB4u) goto L_08A30BB4;
    return;
L_08A30BB4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A30BC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A30BC0u) goto L_08A30BC0;
    return;
L_08A30BC0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A30BCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 298u, 0x088C1B10u>(ctx, &aot_mem) && ctx.pc == 0x08A30BCCu) goto L_08A30BCC;
    return;
L_08A30BCC:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-22256), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A30BDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A30BDCu) goto L_08A30BDC;
    return;
L_08A30BDC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A30BE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A30BE8u) goto L_08A30BE8;
    return;
L_08A30BE8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A30BF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 298u, 0x088C1B10u>(ctx, &aot_mem) && ctx.pc == 0x08A30BF4u) goto L_08A30BF4;
    return;
L_08A30BF4:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-22252), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A30C04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A30C04u) goto L_08A30C04;
    return;
L_08A30C04:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A30C10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A30C10u) goto L_08A30C10;
    return;
L_08A30C10:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A30C1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 298u, 0x088C1B10u>(ctx, &aot_mem) && ctx.pc == 0x08A30C1Cu) goto L_08A30C1C;
    return;
L_08A30C1C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-22248), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A30C2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A30C2Cu) goto L_08A30C2C;
    return;
L_08A30C2C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A30C38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A30C38u) goto L_08A30C38;
    return;
L_08A30C38:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A30C44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 298u, 0x088C1B10u>(ctx, &aot_mem) && ctx.pc == 0x08A30C44u) goto L_08A30C44;
    return;
L_08A30C44:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-22244), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A30C54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A30C54u) goto L_08A30C54;
    return;
L_08A30C54:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A30C60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A30C60u) goto L_08A30C60;
    return;
L_08A30C60:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A30C6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 298u, 0x088C1B10u>(ctx, &aot_mem) && ctx.pc == 0x08A30C6Cu) goto L_08A30C6C;
    return;
L_08A30C6C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-22240), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A30C7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A30C7Cu) goto L_08A30C7C;
    return;
L_08A30C7C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A30C88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A30C88u) goto L_08A30C88;
    return;
L_08A30C88:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A30C94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 298u, 0x088C1B10u>(ctx, &aot_mem) && ctx.pc == 0x08A30C94u) goto L_08A30C94;
    return;
L_08A30C94:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-22236), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A30CA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A30CA4u) goto L_08A30CA4;
    return;
L_08A30CA4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A30CB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A30CB0u) goto L_08A30CB0;
    return;
L_08A30CB0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A30CBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 298u, 0x088C1B10u>(ctx, &aot_mem) && ctx.pc == 0x08A30CBCu) goto L_08A30CBC;
    return;
L_08A30CBC:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-22232), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A30CCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A30CCCu) goto L_08A30CCC;
    return;
L_08A30CCC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A30CD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A30CD8u) goto L_08A30CD8;
    return;
L_08A30CD8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A30CE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 298u, 0x088C1B10u>(ctx, &aot_mem) && ctx.pc == 0x08A30CE4u) goto L_08A30CE4;
    return;
L_08A30CE4:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-22228), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A30CF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A30CF4u) goto L_08A30CF4;
    return;
L_08A30CF4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A30D00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A30D00u) goto L_08A30D00;
    return;
L_08A30D00:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A30D0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 45u, 0x088B0444u>(ctx, &aot_mem) && ctx.pc == 0x08A30D0Cu) goto L_08A30D0C;
    return;
L_08A30D0C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-22224), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A30D1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A30D1Cu) goto L_08A30D1C;
    return;
L_08A30D1C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A30D28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A30D28u) goto L_08A30D28;
    return;
L_08A30D28:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A30D34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 45u, 0x088B0444u>(ctx, &aot_mem) && ctx.pc == 0x08A30D34u) goto L_08A30D34;
    return;
L_08A30D34:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-22208), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A30D44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A30D44u) goto L_08A30D44;
    return;
L_08A30D44:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A30D50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A30D50u) goto L_08A30D50;
    return;
L_08A30D50:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A30D5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 194u, 0x088C11E0u>(ctx, &aot_mem) && ctx.pc == 0x08A30D5Cu) goto L_08A30D5C;
    return;
L_08A30D5C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-22204), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A30D6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A30D6Cu) goto L_08A30D6C;
    return;
L_08A30D6C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A30D78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A30D78u) goto L_08A30D78;
    return;
L_08A30D78:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A30D84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 194u, 0x088C11E0u>(ctx, &aot_mem) && ctx.pc == 0x08A30D84u) goto L_08A30D84;
    return;
L_08A30D84:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-22200), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A30D94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A30D94u) goto L_08A30D94;
    return;
L_08A30D94:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A30DA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A30DA0u) goto L_08A30DA0;
    return;
L_08A30DA0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A30DACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 170u, 0x088B1000u>(ctx, &aot_mem) && ctx.pc == 0x08A30DACu) goto L_08A30DAC;
    return;
L_08A30DAC:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-22196), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A30DBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A30DBCu) goto L_08A30DBC;
    return;
L_08A30DBC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A30DC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A30DC8u) goto L_08A30DC8;
    return;
L_08A30DC8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A30DD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 170u, 0x088B1000u>(ctx, &aot_mem) && ctx.pc == 0x08A30DD4u) goto L_08A30DD4;
    return;
L_08A30DD4:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-22192), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A30DE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A30DE4u) goto L_08A30DE4;
    return;
L_08A30DE4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A30DF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A30DF0u) goto L_08A30DF0;
    return;
L_08A30DF0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A30DFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 170u, 0x088B1000u>(ctx, &aot_mem) && ctx.pc == 0x08A30DFCu) goto L_08A30DFC;
    return;
L_08A30DFC:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-22188), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A30E0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A30E0Cu) goto L_08A30E0C;
    return;
L_08A30E0C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A30E18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A30E18u) goto L_08A30E18;
    return;
L_08A30E18:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A30E24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 170u, 0x088B1000u>(ctx, &aot_mem) && ctx.pc == 0x08A30E24u) goto L_08A30E24;
    return;
L_08A30E24:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-22184), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A30E34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A30E34u) goto L_08A30E34;
    return;
L_08A30E34:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A30E40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A30E40u) goto L_08A30E40;
    return;
L_08A30E40:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A30E4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 170u, 0x088B1000u>(ctx, &aot_mem) && ctx.pc == 0x08A30E4Cu) goto L_08A30E4C;
    return;
L_08A30E4C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-22180), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A30E5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A30E5Cu) goto L_08A30E5C;
    return;
L_08A30E5C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A30E68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A30E68u) goto L_08A30E68;
    return;
L_08A30E68:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A30E74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 170u, 0x088B1000u>(ctx, &aot_mem) && ctx.pc == 0x08A30E74u) goto L_08A30E74;
    return;
L_08A30E74:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-22176), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A30E84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A30E84u) goto L_08A30E84;
    return;
L_08A30E84:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A30E90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A30E90u) goto L_08A30E90;
    return;
L_08A30E90:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A30E9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 45u, 0x088B0444u>(ctx, &aot_mem) && ctx.pc == 0x08A30E9Cu) goto L_08A30E9C;
    return;
L_08A30E9C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-22220), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A30EACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A30EACu) goto L_08A30EAC;
    return;
L_08A30EAC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A30EB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A30EB8u) goto L_08A30EB8;
    return;
L_08A30EB8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A30EC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 45u, 0x088B0444u>(ctx, &aot_mem) && ctx.pc == 0x08A30EC4u) goto L_08A30EC4;
    return;
L_08A30EC4:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-22216), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A30ED4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A30ED4u) goto L_08A30ED4;
    return;
L_08A30ED4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A30EE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A30EE0u) goto L_08A30EE0;
    return;
L_08A30EE0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A30EECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 45u, 0x088B0444u>(ctx, &aot_mem) && ctx.pc == 0x08A30EECu) goto L_08A30EEC;
    return;
L_08A30EEC:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-22212), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A30EFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A30EFCu) goto L_08A30EFC;
    return;
L_08A30EFC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A30F08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A30F08u) goto L_08A30F08;
    return;
L_08A30F08:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A30F14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 298u, 0x088B1C28u>(ctx, &aot_mem) && ctx.pc == 0x08A30F14u) goto L_08A30F14;
    return;
L_08A30F14:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-22172), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A30F24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A30F24u) goto L_08A30F24;
    return;
L_08A30F24:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A30F30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A30F30u) goto L_08A30F30;
    return;
L_08A30F30:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A30F3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 298u, 0x088B1C28u>(ctx, &aot_mem) && ctx.pc == 0x08A30F3Cu) goto L_08A30F3C;
    return;
L_08A30F3C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-22168), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A30F4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A30F4Cu) goto L_08A30F4C;
    return;
L_08A30F4C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A30F58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A30F58u) goto L_08A30F58;
    return;
L_08A30F58:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A30F64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 631u, 0x088BBA54u>(ctx, &aot_mem) && ctx.pc == 0x08A30F64u) goto L_08A30F64;
    return;
L_08A30F64:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-22164), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A30F74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A30F74u) goto L_08A30F74;
    return;
L_08A30F74:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A30F80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A30F80u) goto L_08A30F80;
    return;
L_08A30F80:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A30F8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 618u, 0x088C368Cu>(ctx, &aot_mem) && ctx.pc == 0x08A30F8Cu) goto L_08A30F8C;
    return;
L_08A30F8C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-22160), ctx.gpr[2]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22164)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A30FB0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A30FB0u) goto L_08A30FB0;
    return;
L_08A30FB0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22160)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A30FCCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A30FCCu) goto L_08A30FCC;
    return;
L_08A30FCC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22220)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A30FE8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A30FE8u) goto L_08A30FE8;
    return;
L_08A30FE8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22220)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A31004u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A31004u) goto L_08A31004;
    return;
L_08A31004:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22216)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A31020u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A31020u) goto L_08A31020;
    return;
L_08A31020:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22216)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3103Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3103Cu) goto L_08A3103C;
    return;
L_08A3103C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22212)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A31058u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A31058u) goto L_08A31058;
    return;
L_08A31058:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22212)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A31074u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A31074u) goto L_08A31074;
    return;
L_08A31074:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22196)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22192)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22188)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22184)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A310B8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A310B8u) goto L_08A310B8;
    return;
L_08A310B8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22184)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22176)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A310E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 213u, 0x088D107Cu>(ctx, &aot_mem) && ctx.pc == 0x08A310E0u) goto L_08A310E0;
    return;
L_08A310E0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22176)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A310F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 213u, 0x088D107Cu>(ctx, &aot_mem) && ctx.pc == 0x08A310F8u) goto L_08A310F8;
    return;
L_08A310F8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22176)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A31114u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A31114u) goto L_08A31114;
    return;
L_08A31114:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22172)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A31130u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A31130u) goto L_08A31130;
    return;
L_08A31130:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22168)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3114Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3114Cu) goto L_08A3114C;
    return;
L_08A3114C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22260)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22260)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A31178u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A31178u) goto L_08A31178;
    return;
L_08A31178:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22260)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A31194u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A31194u) goto L_08A31194;
    return;
L_08A31194:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22256)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A311B0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A311B0u) goto L_08A311B0;
    return;
L_08A311B0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22256)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A311CCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A311CCu) goto L_08A311CC;
    return;
L_08A311CC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22252)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A311E8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A311E8u) goto L_08A311E8;
    return;
L_08A311E8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22252)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A31204u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A31204u) goto L_08A31204;
    return;
L_08A31204:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22248)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A31220u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A31220u) goto L_08A31220;
    return;
L_08A31220:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22248)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3123Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3123Cu) goto L_08A3123C;
    return;
L_08A3123C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22244)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A31258u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A31258u) goto L_08A31258;
    return;
L_08A31258:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22244)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A31274u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A31274u) goto L_08A31274;
    return;
L_08A31274:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22240)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A31290u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A31290u) goto L_08A31290;
    return;
L_08A31290:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22240)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A312ACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A312ACu) goto L_08A312AC;
    return;
L_08A312AC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22236)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22236)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A312D8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A312D8u) goto L_08A312D8;
    return;
L_08A312D8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22236)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A312F4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A312F4u) goto L_08A312F4;
    return;
L_08A312F4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22232)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A31310u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A31310u) goto L_08A31310;
    return;
L_08A31310:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22232)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3132Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3132Cu) goto L_08A3132C;
    return;
L_08A3132C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22228)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A31348u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A31348u) goto L_08A31348;
    return;
L_08A31348:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22228)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A31364u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A31364u) goto L_08A31364;
    return;
L_08A31364:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22224)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A31380u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A31380u) goto L_08A31380;
    return;
L_08A31380:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22208)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3139Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3139Cu) goto L_08A3139C;
    return;
L_08A3139C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22204)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A313B8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A313B8u) goto L_08A313B8;
    return;
L_08A313B8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22200)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A313D4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A313D4u) goto L_08A313D4;
    return;
L_08A313D4:
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
L_08A313EC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23360)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A313FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3141Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3141Cu) goto L_08A3141C;
    return;
L_08A3141C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A3142Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 118u, 0x089448B4u>(ctx, &aot_mem) && ctx.pc == 0x08A3142Cu) goto L_08A3142C;
    return;
L_08A3142C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A31A4C;
      }
      goto L_08A31434;
    }
L_08A31434:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22260)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31468;
      }
      goto L_08A31444;
    }
L_08A31444:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A31468;
      }
      goto L_08A31460;
    }
L_08A31460:
    ctx.set_gpr(31, 0x08A31468u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A31468u) goto L_08A31468;
    return;
L_08A31468:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22260), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22256)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A314A4;
      }
      goto L_08A31480;
    }
L_08A31480:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A314A4;
      }
      goto L_08A3149C;
    }
L_08A3149C:
    ctx.set_gpr(31, 0x08A314A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A314A4u) goto L_08A314A4;
    return;
L_08A314A4:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22256), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22252)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A314E0;
      }
      goto L_08A314BC;
    }
L_08A314BC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A314E0;
      }
      goto L_08A314D8;
    }
L_08A314D8:
    ctx.set_gpr(31, 0x08A314E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A314E0u) goto L_08A314E0;
    return;
L_08A314E0:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22252), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22248)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3151C;
      }
      goto L_08A314F8;
    }
L_08A314F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3151C;
      }
      goto L_08A31514;
    }
L_08A31514:
    ctx.set_gpr(31, 0x08A3151Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A3151Cu) goto L_08A3151C;
    return;
L_08A3151C:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22248), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22244)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31558;
      }
      goto L_08A31534;
    }
L_08A31534:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A31558;
      }
      goto L_08A31550;
    }
L_08A31550:
    ctx.set_gpr(31, 0x08A31558u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A31558u) goto L_08A31558;
    return;
L_08A31558:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22244), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22240)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31594;
      }
      goto L_08A31570;
    }
L_08A31570:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A31594;
      }
      goto L_08A3158C;
    }
L_08A3158C:
    ctx.set_gpr(31, 0x08A31594u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A31594u) goto L_08A31594;
    return;
L_08A31594:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22240), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22236)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A315D0;
      }
      goto L_08A315AC;
    }
L_08A315AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A315D0;
      }
      goto L_08A315C8;
    }
L_08A315C8:
    ctx.set_gpr(31, 0x08A315D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A315D0u) goto L_08A315D0;
    return;
L_08A315D0:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22236), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22232)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3160C;
      }
      goto L_08A315E8;
    }
L_08A315E8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3160C;
      }
      goto L_08A31604;
    }
L_08A31604:
    ctx.set_gpr(31, 0x08A3160Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A3160Cu) goto L_08A3160C;
    return;
L_08A3160C:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22232), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22228)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31648;
      }
      goto L_08A31624;
    }
L_08A31624:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A31648;
      }
      goto L_08A31640;
    }
L_08A31640:
    ctx.set_gpr(31, 0x08A31648u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A31648u) goto L_08A31648;
    return;
L_08A31648:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22228), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22224)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31684;
      }
      goto L_08A31660;
    }
L_08A31660:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A31684;
      }
      goto L_08A3167C;
    }
L_08A3167C:
    ctx.set_gpr(31, 0x08A31684u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A31684u) goto L_08A31684;
    return;
L_08A31684:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22224), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22220)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A316C0;
      }
      goto L_08A3169C;
    }
L_08A3169C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A316C0;
      }
      goto L_08A316B8;
    }
L_08A316B8:
    ctx.set_gpr(31, 0x08A316C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A316C0u) goto L_08A316C0;
    return;
L_08A316C0:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22220), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22216)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A316FC;
      }
      goto L_08A316D8;
    }
L_08A316D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A316FC;
      }
      goto L_08A316F4;
    }
L_08A316F4:
    ctx.set_gpr(31, 0x08A316FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A316FCu) goto L_08A316FC;
    return;
L_08A316FC:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22216), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22212)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31738;
      }
      goto L_08A31714;
    }
L_08A31714:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A31738;
      }
      goto L_08A31730;
    }
L_08A31730:
    ctx.set_gpr(31, 0x08A31738u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A31738u) goto L_08A31738;
    return;
L_08A31738:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22212), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22208)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31774;
      }
      goto L_08A31750;
    }
L_08A31750:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A31774;
      }
      goto L_08A3176C;
    }
L_08A3176C:
    ctx.set_gpr(31, 0x08A31774u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A31774u) goto L_08A31774;
    return;
L_08A31774:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22208), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22204)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A317B0;
      }
      goto L_08A3178C;
    }
L_08A3178C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A317B0;
      }
      goto L_08A317A8;
    }
L_08A317A8:
    ctx.set_gpr(31, 0x08A317B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A317B0u) goto L_08A317B0;
    return;
L_08A317B0:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22204), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22200)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A317EC;
      }
      goto L_08A317C8;
    }
L_08A317C8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A317EC;
      }
      goto L_08A317E4;
    }
L_08A317E4:
    ctx.set_gpr(31, 0x08A317ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A317ECu) goto L_08A317EC;
    return;
L_08A317EC:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22200), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22196)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31828;
      }
      goto L_08A31804;
    }
L_08A31804:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A31828;
      }
      goto L_08A31820;
    }
L_08A31820:
    ctx.set_gpr(31, 0x08A31828u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A31828u) goto L_08A31828;
    return;
L_08A31828:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22196), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22192)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31864;
      }
      goto L_08A31840;
    }
L_08A31840:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A31864;
      }
      goto L_08A3185C;
    }
L_08A3185C:
    ctx.set_gpr(31, 0x08A31864u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A31864u) goto L_08A31864;
    return;
L_08A31864:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22192), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22188)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A318A0;
      }
      goto L_08A3187C;
    }
L_08A3187C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A318A0;
      }
      goto L_08A31898;
    }
L_08A31898:
    ctx.set_gpr(31, 0x08A318A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A318A0u) goto L_08A318A0;
    return;
L_08A318A0:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22188), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22184)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A318DC;
      }
      goto L_08A318B8;
    }
L_08A318B8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A318DC;
      }
      goto L_08A318D4;
    }
L_08A318D4:
    ctx.set_gpr(31, 0x08A318DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A318DCu) goto L_08A318DC;
    return;
L_08A318DC:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22184), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22180)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31918;
      }
      goto L_08A318F4;
    }
L_08A318F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A31918;
      }
      goto L_08A31910;
    }
L_08A31910:
    ctx.set_gpr(31, 0x08A31918u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A31918u) goto L_08A31918;
    return;
L_08A31918:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22180), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22176)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31954;
      }
      goto L_08A31930;
    }
L_08A31930:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A31954;
      }
      goto L_08A3194C;
    }
L_08A3194C:
    ctx.set_gpr(31, 0x08A31954u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A31954u) goto L_08A31954;
    return;
L_08A31954:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22176), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22172)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31990;
      }
      goto L_08A3196C;
    }
L_08A3196C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A31990;
      }
      goto L_08A31988;
    }
L_08A31988:
    ctx.set_gpr(31, 0x08A31990u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A31990u) goto L_08A31990;
    return;
L_08A31990:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22172), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22168)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A319CC;
      }
      goto L_08A319A8;
    }
L_08A319A8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A319CC;
      }
      goto L_08A319C4;
    }
L_08A319C4:
    ctx.set_gpr(31, 0x08A319CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A319CCu) goto L_08A319CC;
    return;
L_08A319CC:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22168), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22164)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31A08;
      }
      goto L_08A319E4;
    }
L_08A319E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A31A08;
      }
      goto L_08A31A00;
    }
L_08A31A00:
    ctx.set_gpr(31, 0x08A31A08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A31A08u) goto L_08A31A08;
    return;
L_08A31A08:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22164), 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22160)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31A44;
      }
      goto L_08A31A20;
    }
L_08A31A20:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A31A44;
      }
      goto L_08A31A3C;
    }
L_08A31A3C:
    ctx.set_gpr(31, 0x08A31A44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A31A44u) goto L_08A31A44;
    return;
L_08A31A44:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22160), 0u);
    goto L_08A31A4C;
L_08A31A4C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A31A58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 225u, 0x08A491B0u>(ctx, &aot_mem) && ctx.pc == 0x08A31A58u) goto L_08A31A58;
    return;
L_08A31A58:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A31A6C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08A31A90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A31A90u) goto L_08A31A90;
    return;
L_08A31A90:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31AB8;
      }
      goto L_08A31A98;
    }
L_08A31A98:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A31AA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 29u, 0x088D01E0u>(ctx, &aot_mem) && ctx.pc == 0x08A31AA8u) goto L_08A31AA8;
    return;
L_08A31AA8:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(160));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A31AB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A31AB8u) goto L_08A31AB8;
    return;
L_08A31AB8:
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
L_08A31AD0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x08A31AF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A31AF4u) goto L_08A31AF4;
    return;
L_08A31AF4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A31B04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A31B04u) goto L_08A31B04;
    return;
L_08A31B04:
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
L_08A31B1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(240)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A31BA4;
      }
      goto L_08A31B3C;
    }
L_08A31B3C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A31B94;
      }
      goto L_08A31B48;
    }
L_08A31B48:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31B6C;
      }
      goto L_08A31B54;
    }
L_08A31B54:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31B8C;
      }
      goto L_08A31B6C;
    }
L_08A31B6C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31436)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A31B84u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A31B84u) goto L_08A31B84;
    return;
L_08A31B84:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    goto L_08A31B8C;
L_08A31B8C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08A31B94;
L_08A31B94:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31BBC;
      }
      goto L_08A31BA4;
    }
L_08A31BA4:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    goto L_08A31BBC;
L_08A31BBC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A31BD0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-608));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[29]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[27]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[25]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[23]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(580));
    ctx.set_gpr(31, 0x08A31C38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 623u, 0x089B798Cu>(ctx, &aot_mem) && ctx.pc == 0x08A31C38u) goto L_08A31C38;
    return;
L_08A31C38:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(552));
    ctx.set_gpr(31, 0x08A31C44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 623u, 0x089B798Cu>(ctx, &aot_mem) && ctx.pc == 0x08A31C44u) goto L_08A31C44;
    return;
L_08A31C44:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(524));
    ctx.set_gpr(31, 0x08A31C50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 623u, 0x089B798Cu>(ctx, &aot_mem) && ctx.pc == 0x08A31C50u) goto L_08A31C50;
    return;
L_08A31C50:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(496));
    ctx.set_gpr(31, 0x08A31C5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 623u, 0x089B798Cu>(ctx, &aot_mem) && ctx.pc == 0x08A31C5Cu) goto L_08A31C5C;
    return;
L_08A31C5C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(468));
    ctx.set_gpr(31, 0x08A31C68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 623u, 0x089B798Cu>(ctx, &aot_mem) && ctx.pc == 0x08A31C68u) goto L_08A31C68;
    return;
L_08A31C68:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(440));
    ctx.set_gpr(31, 0x08A31C74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 623u, 0x089B798Cu>(ctx, &aot_mem) && ctx.pc == 0x08A31C74u) goto L_08A31C74;
    return;
L_08A31C74:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(412));
    ctx.set_gpr(31, 0x08A31C80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 623u, 0x089B798Cu>(ctx, &aot_mem) && ctx.pc == 0x08A31C80u) goto L_08A31C80;
    return;
L_08A31C80:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(584), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(580), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(588), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(556), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(560), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(528), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(524), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(532), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(496), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(504), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(468), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(476), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(7));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(444), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(412), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(164));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[3]);
    ctx.set_gpr(20, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A326D8;
      }
      goto L_08A31D14;
    }
L_08A31D14:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(16, ctx.gpr[20] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[2]);
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27480)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[25] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27476)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27472)));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27468)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(184)));
    ctx.set_gpr(2, ctx.gpr[20] >> 5u);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[20] & 31u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[2] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A31D9C;
      }
      goto L_08A31D88;
    }
L_08A31D88:
    ctx.fpr[24] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(156)));
    ctx.fpr[25] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(152)));
    ctx.fpr[26] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[23] = std::bit_cast<float>(ctx.gpr[2]);
    goto L_08A31D9C;
L_08A31D9C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(348));
    ctx.set_gpr(31, 0x08A31DA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A31DA8u) goto L_08A31DA8;
    return;
L_08A31DA8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(284));
    ctx.set_gpr(31, 0x08A31DB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A31DB4u) goto L_08A31DB4;
    return;
L_08A31DB4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(348));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.set_gpr(31, 0x08A31DD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08A31DD8u) goto L_08A31DD8;
    return;
L_08A31DD8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(284));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(348));
    ctx.set_gpr(31, 0x08A31DE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 124u, 0x08A019A0u>(ctx, &aot_mem) && ctx.pc == 0x08A31DE8u) goto L_08A31DE8;
    return;
L_08A31DE8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(284));
    ctx.set_gpr(31, 0x08A31DF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 725u, 0x089FF93Cu>(ctx, &aot_mem) && ctx.pc == 0x08A31DF4u) goto L_08A31DF4;
    return;
L_08A31DF4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A326C0;
      }
      goto L_08A31E00;
    }
L_08A31E00:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25092)));
    ctx.set_gpr(31, 0x08A31E30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A31E30u) goto L_08A31E30;
    return;
L_08A31E30:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A326B4;
      }
      goto L_08A31E38;
    }
L_08A31E38:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(508), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(564), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(592), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(580));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A31E78u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A31E78u) goto L_08A31E78;
    return;
L_08A31E78:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(552));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A31E94u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A31E94u) goto L_08A31E94;
    return;
L_08A31E94:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(468));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A31EB0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A31EB0u) goto L_08A31EB0;
    return;
L_08A31EB0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(524));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A31ECCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A31ECCu) goto L_08A31ECC;
    return;
L_08A31ECC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(496));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A31EE8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A31EE8u) goto L_08A31EE8;
    return;
L_08A31EE8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A31EFCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A31EFCu) goto L_08A31EFC;
    return;
L_08A31EFC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 64u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31F38;
      }
      goto L_08A31F10;
    }
L_08A31F10:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A31F24u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A31F24u) goto L_08A31F24;
    return;
L_08A31F24:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 128u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A31F40;
      }
      goto L_08A31F38;
    }
L_08A31F38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A326E8;
      }
      goto L_08A31F40;
    }
L_08A31F40:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(440));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A31F5Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A31F5Cu) goto L_08A31F5C;
    return;
L_08A31F5C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(412));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A31F78u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A31F78u) goto L_08A31F78;
    return;
L_08A31F78:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A31F94;
      }
      goto L_08A31F84;
    }
L_08A31F84:
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A31FAC;
      }
      goto L_08A31F94;
    }
L_08A31F94:
    ctx.set_gpr(3, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[1];
    goto L_08A31FAC;
L_08A31FAC:
    ctx.set_gpr(2, 17279u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[1] / ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(268));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A31FDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x08A31FDCu) goto L_08A31FDC;
    return;
L_08A31FDC:
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3203C;
      }
      goto L_08A31FE8;
    }
L_08A31FE8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(600)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(568)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(488)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(4, ctx.lo);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(484)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08A3203C;
L_08A3203C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A31FE8;
      }
      goto L_08A32048;
    }
L_08A32048:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A32060;
      }
      goto L_08A32058;
    }
L_08A32058:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    goto L_08A32060;
L_08A32060:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[30]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A32070;
      }
      goto L_08A3206C;
    }
L_08A3206C:
    ctx.set_gpr(30, 0u + static_cast<std::uint32_t>(8));
    goto L_08A32070;
L_08A32070:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(160)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.fpr[29] = ctx.fpr[0] / ctx.fpr[1];
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(204));
    ctx.set_gpr(31, 0x08A32090u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A32090u) goto L_08A32090;
    return;
L_08A32090:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(196)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A320D4;
      }
      goto L_08A3209C;
    }
L_08A3209C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A320B4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A320B4u) goto L_08A320B4;
    return;
L_08A320B4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(196)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(204));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A320D4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A320D4u) goto L_08A320D4;
    return;
L_08A320D4:
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.set_fpr_bits(21, ctx.fpr_bits(22));
    ctx.set_fpr_bits(20, ctx.fpr_bits(22));
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A325E4;
      }
      goto L_08A320EC;
    }
L_08A320EC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A320FCu);
    // nop
    goto L_08A32D14;
L_08A320FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A325E0;
      }
      goto L_08A32104;
    }
L_08A32104:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A32154;
      }
      goto L_08A32114;
    }
L_08A32114:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, ctx.gpr[19] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[19]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A321E8;
      }
      goto L_08A32154;
    }
L_08A32154:
    ctx.set_gpr(5, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[2]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A321C0;
      }
      goto L_08A32178;
    }
L_08A32178:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(132)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(136)));
    ctx.set_fpr_bits(4, ctx.fpr_bits(2) ^ 0x80000000u);
    ctx.set_fpr_bits(3, ctx.fpr_bits(1) ^ 0x80000000u);
    ctx.set_fpr_bits(2, ctx.fpr_bits(0) ^ 0x80000000u);
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[1] = std::sqrt(ctx.fpr[0]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[1];
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(22, 0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(21, 0x7FC00000u); else ctx.fpr[21] = fs * ft; }
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(20, 0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_08A321C0;
L_08A321C0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(116)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(120)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(124)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A321E8;
L_08A321E8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[28] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(196)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32224;
      }
      goto L_08A32208;
    }
L_08A32208:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(204));
    ctx.set_gpr(31, 0x08A3221Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x08A3221Cu) goto L_08A3221C;
    return;
L_08A3221C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32238;
      }
      goto L_08A32224;
    }
L_08A32224:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, ctx.gpr[21] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08A32238u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x08A32238u) goto L_08A32238;
    return;
L_08A32238:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A325D4;
      }
      goto L_08A32244;
    }
L_08A32244:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(568)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(544)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(540)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(516)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(512)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(488)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(484)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(428)));
    ctx.set_gpr(22, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(460)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(456)));
    ctx.set_gpr(23, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(180));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(348));
    ctx.set_gpr(31, 0x08A322D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x08A322D8u) goto L_08A322D8;
    return;
L_08A322D8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(168));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(284));
    ctx.set_gpr(31, 0x08A322ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 270u, 0x08A031C4u>(ctx, &aot_mem) && ctx.pc == 0x08A322ECu) goto L_08A322EC;
    return;
L_08A322EC:
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::sqrt(ctx.fpr[0]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[5] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[5] / ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A3239C;
      }
      goto L_08A32350;
    }
L_08A32350:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.fpr[4] = ctx.fpr[1] - ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.fpr[3] = ctx.fpr[1] - ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.fpr[2] = ctx.fpr[1] - ctx.fpr[0];
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::sqrt(ctx.fpr[0]);
    ctx.fpr[0] = ctx.fpr[5] / ctx.fpr[0];
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(22, 0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(21, 0x7FC00000u); else ctx.fpr[21] = fs * ft; }
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(20, 0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_08A3239C;
L_08A3239C:
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[21]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[27] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[27] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A325D0;
      }
      goto L_08A323D0;
    }
L_08A323D0:
    { const float fs = ctx.fpr[27]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[22] - ctx.fpr[0];
    { const float fs = ctx.fpr[27]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[21] - ctx.fpr[0];
    { const float fs = ctx.fpr[27]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[20] - ctx.fpr[0];
    ctx.set_gpr(2, 16128u << 16u);
    ctx.fpr[3] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[27] < ctx.fpr[3]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A32460;
      }
      goto L_08A32400;
    }
L_08A32400:
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[3] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[27]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[29]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(5, 0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(4, 0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[4] = ctx.fpr[4] + ctx.fpr[3];
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[3] = ctx.fpr[3] + ctx.fpr[4];
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(4, 0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[4] + ctx.fpr[1];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[2];
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A324A8;
      }
      goto L_08A32460;
    }
L_08A32460:
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(4, 0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[4] = ctx.fpr[4] + ctx.fpr[3];
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[3] = ctx.fpr[3] + ctx.fpr[4];
    { const float fs = ctx.fpr[29]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(4, 0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[4] + ctx.fpr[1];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[2];
    { const float fs = ctx.fpr[29]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    goto L_08A324A8;
L_08A324A8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[3];
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(152));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A324DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 308u, 0x08A037E4u>(ctx, &aot_mem) && ctx.pc == 0x08A324DCu) goto L_08A324DC;
    return;
L_08A324DC:
    { const float fs = ctx.fpr[27]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[25]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(13, 0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(14, 0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[23]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(15, 0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.set_gpr(31, 0x08A324FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 602u, 0x0883EA7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A324FCu) goto L_08A324FC;
    return;
L_08A324FC:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.fpr[2] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[0] = ctx.fpr[1] + ctx.fpr[0];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27480)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[2]) || std::isnan(ctx.fpr[0])) || ctx.fpr[2] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A32558;
      }
      goto L_08A32554;
    }
L_08A32554:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A32558;
L_08A32558:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27476)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) || ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A32578;
      }
      goto L_08A32574;
    }
L_08A32574:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_08A32578;
L_08A32578:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27472)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) || ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A32598;
      }
      goto L_08A32594;
    }
L_08A32594:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_08A32598;
L_08A32598:
    ctx.set_gpr(2, 2226u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-27468)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.set_fpu_condition(((std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) || ctx.fpr[0] <= ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A325B8;
      }
      goto L_08A325B4;
    }
L_08A325B4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_08A325B8;
L_08A325B8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(152));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A325C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 283u, 0x08A03440u>(ctx, &aot_mem) && ctx.pc == 0x08A325C8u) goto L_08A325C8;
    return;
L_08A325C8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_08A325D0;
L_08A325D0:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A325D4;
L_08A325D4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A32244;
      }
      goto L_08A325E0;
    }
L_08A325E0:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A325E4;
L_08A325E4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[30]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A320EC;
      }
      goto L_08A325F0;
    }
L_08A325F0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(580));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3260Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3260Cu) goto L_08A3260C;
    return;
L_08A3260C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(552));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A32628u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A32628u) goto L_08A32628;
    return;
L_08A32628:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(524));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A32644u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A32644u) goto L_08A32644;
    return;
L_08A32644:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(496));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A32660u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A32660u) goto L_08A32660;
    return;
L_08A32660:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(468));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3267Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3267Cu) goto L_08A3267C;
    return;
L_08A3267C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(440));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A32698u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A32698u) goto L_08A32698;
    return;
L_08A32698:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(412));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A326B4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A326B4u) goto L_08A326B4;
    return;
L_08A326B4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[3]);
    goto L_08A326C0;
L_08A326C0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A31E00;
      }
      goto L_08A326D4;
    }
L_08A326D4:
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08A326D8;
L_08A326D8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A31D14;
      }
      goto L_08A326E8;
    }
L_08A326E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[29] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[28] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[27] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[26] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[25] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[24] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(608));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A32744:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24744)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x08A32790u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A32790u) goto L_08A32790;
    return;
L_08A32790:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[4] ^ 0u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A327B0;
      }
      goto L_08A327A4;
    }
L_08A327A4:
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A327C4;
      }
      goto L_08A327B0;
    }
L_08A327B0:
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_08A327C4;
L_08A327C4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22156)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(164)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A327E0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A327E0u) goto L_08A327E0;
    return;
L_08A327E0:
    ctx.set_gpr(31, 0x08A327E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 364u, 0x088B21ECu>(ctx, &aot_mem) && ctx.pc == 0x08A327E8u) goto L_08A327E8;
    return;
L_08A327E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32834;
      }
      goto L_08A3281C;
    }
L_08A3281C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] ^ 0u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32838;
      }
      goto L_08A32834;
    }
L_08A32834:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A32838;
L_08A32838:
    ctx.set_gpr(16, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22156)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(184)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A32858u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890AF0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A32858u) goto L_08A32858;
    return;
L_08A32858:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22156)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(184)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A328B8;
      }
      goto L_08A3286C;
    }
L_08A3286C:
    ctx.set_gpr(16, ctx.gpr[18] >> 5u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A3287Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 454u, 0x088419CCu>(ctx, &aot_mem) && ctx.pc == 0x08A3287Cu) goto L_08A3287C;
    return;
L_08A3287C:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[18] & 31u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[2] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08A328B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 698u, 0x0890B07Cu>(ctx, &aot_mem) && ctx.pc == 0x08A328B0u) goto L_08A328B0;
    return;
L_08A328B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32900;
      }
      goto L_08A328B8;
    }
L_08A328B8:
    ctx.set_gpr(16, ctx.gpr[18] >> 5u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A328C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 454u, 0x088419CCu>(ctx, &aot_mem) && ctx.pc == 0x08A328C8u) goto L_08A328C8;
    return;
L_08A328C8:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[18] & 31u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(3, ~(ctx.gpr[2] | 0u));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08A32900u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 698u, 0x0890B07Cu>(ctx, &aot_mem) && ctx.pc == 0x08A32900u) goto L_08A32900;
    return;
L_08A32900:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A32914u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 147u, 0x08A48BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A32914u) goto L_08A32914;
    return;
L_08A32914:
    ctx.set_gpr(2, 0u + 0u);
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
L_08A32938:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08A3295Cu);
    // nop
    goto L_08A31BD0;
L_08A3295C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08A32974u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 505u, 0x08A627F8u>(ctx, &aot_mem) && ctx.pc == 0x08A32974u) goto L_08A32974;
    return;
L_08A32974:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22164)));
    ctx.set_gpr(31, 0x08A32988u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A32988u) goto L_08A32988;
    return;
L_08A32988:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22160)));
    ctx.set_gpr(31, 0x08A3299Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A3299Cu) goto L_08A3299C;
    return;
L_08A3299C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22224)));
    ctx.set_gpr(31, 0x08A329B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A329B0u) goto L_08A329B0;
    return;
L_08A329B0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x08A329C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A329C0u) goto L_08A329C0;
    return;
L_08A329C0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(176)));
    ctx.set_gpr(31, 0x08A329D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A329D0u) goto L_08A329D0;
    return;
L_08A329D0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22192)));
    ctx.set_gpr(31, 0x08A329E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A329E4u) goto L_08A329E4;
    return;
L_08A329E4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A329F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 354u, 0x08A69FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A329F4u) goto L_08A329F4;
    return;
L_08A329F4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22192)));
    ctx.set_gpr(31, 0x08A32A08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A32A08u) goto L_08A32A08;
    return;
L_08A32A08:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(176)));
    ctx.set_gpr(31, 0x08A32A18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A32A18u) goto L_08A32A18;
    return;
L_08A32A18:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x08A32A28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A32A28u) goto L_08A32A28;
    return;
L_08A32A28:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22224)));
    ctx.set_gpr(31, 0x08A32A3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A32A3Cu) goto L_08A32A3C;
    return;
L_08A32A3C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x08A32A4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A32A4Cu) goto L_08A32A4C;
    return;
L_08A32A4C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(180)));
    ctx.set_gpr(31, 0x08A32A5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A32A5Cu) goto L_08A32A5C;
    return;
L_08A32A5C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22224)));
    ctx.set_gpr(31, 0x08A32A70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A32A70u) goto L_08A32A70;
    return;
L_08A32A70:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22260)));
    ctx.set_gpr(31, 0x08A32A84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A32A84u) goto L_08A32A84;
    return;
L_08A32A84:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22204)));
    ctx.set_gpr(31, 0x08A32A98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A32A98u) goto L_08A32A98;
    return;
L_08A32A98:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22192)));
    ctx.set_gpr(31, 0x08A32AACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A32AACu) goto L_08A32AAC;
    return;
L_08A32AAC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A32ABCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 354u, 0x08A69FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A32ABCu) goto L_08A32ABC;
    return;
L_08A32ABC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22192)));
    ctx.set_gpr(31, 0x08A32AD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A32AD0u) goto L_08A32AD0;
    return;
L_08A32AD0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22204)));
    ctx.set_gpr(31, 0x08A32AE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A32AE4u) goto L_08A32AE4;
    return;
L_08A32AE4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22260)));
    ctx.set_gpr(31, 0x08A32AF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A32AF8u) goto L_08A32AF8;
    return;
L_08A32AF8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22224)));
    ctx.set_gpr(31, 0x08A32B0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A32B0Cu) goto L_08A32B0C;
    return;
L_08A32B0C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(180)));
    ctx.set_gpr(31, 0x08A32B1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A32B1Cu) goto L_08A32B1C;
    return;
L_08A32B1C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x08A32B2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A32B2Cu) goto L_08A32B2C;
    return;
L_08A32B2C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22256)));
    ctx.set_gpr(31, 0x08A32B40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A32B40u) goto L_08A32B40;
    return;
L_08A32B40:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22188)));
    ctx.set_gpr(31, 0x08A32B54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A32B54u) goto L_08A32B54;
    return;
L_08A32B54:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22204)));
    ctx.set_gpr(31, 0x08A32B68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 605u, 0x08A2EC74u>(ctx, &aot_mem) && ctx.pc == 0x08A32B68u) goto L_08A32B68;
    return;
L_08A32B68:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A32B78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 354u, 0x08A69FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A32B78u) goto L_08A32B78;
    return;
L_08A32B78:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22204)));
    ctx.set_gpr(31, 0x08A32B8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A32B8Cu) goto L_08A32B8C;
    return;
L_08A32B8C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22188)));
    ctx.set_gpr(31, 0x08A32BA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A32BA0u) goto L_08A32BA0;
    return;
L_08A32BA0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22256)));
    ctx.set_gpr(31, 0x08A32BB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A32BB4u) goto L_08A32BB4;
    return;
L_08A32BB4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22160)));
    ctx.set_gpr(31, 0x08A32BC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A32BC8u) goto L_08A32BC8;
    return;
L_08A32BC8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22164)));
    ctx.set_gpr(31, 0x08A32BDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 615u, 0x08A2ED9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A32BDCu) goto L_08A32BDC;
    return;
L_08A32BDC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(31, 0x08A32BE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 515u, 0x08A62900u>(ctx, &aot_mem) && ctx.pc == 0x08A32BE8u) goto L_08A32BE8;
    return;
L_08A32BE8:
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
L_08A32C04:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08A32C24u);
    // nop
    goto L_08A32E80;
L_08A32C24:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A32C44;
      }
      goto L_08A32C2C;
    }
L_08A32C2C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A32C3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 354u, 0x08A69FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A32C3Cu) goto L_08A32C3C;
    return;
L_08A32C3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32CA4;
      }
      goto L_08A32C44;
    }
L_08A32C44:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A32C54u);
    // nop
    goto L_08A32F38;
L_08A32C54:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A32C64u);
    // nop
    goto L_08A32FEC;
L_08A32C64:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(176)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A32C7Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A32C7Cu) goto L_08A32C7C;
    return;
L_08A32C7C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(180)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A32C94u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A32C94u) goto L_08A32C94;
    return;
L_08A32C94:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A32CA4u);
    // nop
    goto L_08A32938;
L_08A32CA4:
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
L_08A32CBC:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32D0C;
      }
      goto L_08A32CC8;
    }
L_08A32CC8:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32CF0;
      }
      goto L_08A32CD0;
    }
L_08A32CD0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] << (ctx.gpr[5] & 31u));
    ctx.set_gpr(5, ctx.gpr[3] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32D0C;
      }
      goto L_08A32CF0;
    }
L_08A32CF0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] << (ctx.gpr[5] & 31u));
    ctx.set_gpr(3, ~(ctx.gpr[3] | 0u));
    ctx.set_gpr(5, ctx.gpr[3] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_08A32D0C;
L_08A32D0C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A32D14:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A32D2C;
      }
      goto L_08A32D20;
    }
L_08A32D20:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32D40;
      }
      goto L_08A32D2C;
    }
L_08A32D2C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << (ctx.gpr[5] & 31u));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    goto L_08A32D40;
L_08A32D40:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A32D48:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A32D54:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32DA8;
      }
      goto L_08A32D84;
    }
L_08A32D84:
    ctx.set_gpr(4, ctx.gpr[18] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32DA4;
      }
      goto L_08A32D9C;
    }
L_08A32D9C:
    ctx.set_gpr(31, 0x08A32DA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A32DA4u) goto L_08A32DA4;
    return;
L_08A32DA4:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A32DA8;
L_08A32DA8:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A32D84;
      }
      goto L_08A32DB4;
    }
L_08A32DB4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32DD8;
      }
      goto L_08A32DC4;
    }
L_08A32DC4:
    ctx.set_gpr(4, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08A32DD8;
L_08A32DD8:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A32DC4;
      }
      goto L_08A32DE4;
    }
L_08A32DE4:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32E20;
      }
      goto L_08A32DFC;
    }
L_08A32DFC:
    ctx.set_gpr(4, ctx.gpr[18] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32E1C;
      }
      goto L_08A32E14;
    }
L_08A32E14:
    ctx.set_gpr(31, 0x08A32E1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A32E1Cu) goto L_08A32E1C;
    return;
L_08A32E1C:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A32E20;
L_08A32E20:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A32DFC;
      }
      goto L_08A32E2C;
    }
L_08A32E2C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32E50;
      }
      goto L_08A32E3C;
    }
L_08A32E3C:
    ctx.set_gpr(4, ctx.gpr[6] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_08A32E50;
L_08A32E50:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A32E3C;
      }
      goto L_08A32E5C;
    }
L_08A32E5C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), 0u);
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
L_08A32E80:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32EBC;
      }
      goto L_08A32E9C;
    }
L_08A32E9C:
    ctx.set_gpr(31, 0x08A32EA4u);
    // nop
    goto L_08A32D48;
L_08A32EA4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32EBC;
      }
      goto L_08A32EAC;
    }
L_08A32EAC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A32EC8;
      }
      goto L_08A32EBC;
    }
L_08A32EBC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32F24;
      }
      goto L_08A32EC8;
    }
L_08A32EC8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A32F10;
      }
      goto L_08A32ED4;
    }
L_08A32ED4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A32EE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0051_entry, 51u, 29u, 0x088D01E0u>(ctx, &aot_mem) && ctx.pc == 0x08A32EE8u) goto L_08A32EE8;
    return;
L_08A32EE8:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(160));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A32EF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x08A32EF8u) goto L_08A32EF8;
    return;
L_08A32EF8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A32F10;
      }
      goto L_08A32F04;
    }
L_08A32F04:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32F24;
      }
      goto L_08A32F10;
    }
L_08A32F10:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A32F24;
      }
      goto L_08A32F20;
    }
L_08A32F20:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08A32F24;
L_08A32F24:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A32F38:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32F6C;
      }
      goto L_08A32F68;
    }
L_08A32F68:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    goto L_08A32F6C;
L_08A32F6C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A32F7C;
      }
      goto L_08A32F78;
    }
L_08A32F78:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(8));
    goto L_08A32F7C;
L_08A32F7C:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A32FC0;
      }
      goto L_08A32F88;
    }
L_08A32F88:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A32FA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 572u, 0x08A2E89Cu>(ctx, &aot_mem) && ctx.pc == 0x08A32FA8u) goto L_08A32FA8;
    return;
L_08A32FA8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A32FBCu);
    // nop
    goto L_08A32CBC;
L_08A32FBC:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08A32FC0;
L_08A32FC0:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A32F88;
      }
      goto L_08A32FCC;
    }
L_08A32FCC:
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
L_08A32FEC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(23, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22064)));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24260)));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08A33038u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 225u, 0x089450D0u>(ctx, &aot_mem) && ctx.pc == 0x08A33038u) goto L_08A33038;
    return;
L_08A33038:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33094;
      }
      goto L_08A33048;
    }
L_08A33048:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A33058u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 212u, 0x08944FE0u>(ctx, &aot_mem) && ctx.pc == 0x08A33058u) goto L_08A33058;
    return;
L_08A33058:
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 2211u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(10052));
    ctx.set_gpr(31, 0x08A33090u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 339u, 0x08A69EF8u>(ctx, &aot_mem) && ctx.pc == 0x08A33090u) goto L_08A33090;
    return;
L_08A33090:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08A33094;
L_08A33094:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A33048;
      }
      goto L_08A330A0;
    }
L_08A330A0:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22156), ctx.gpr[21]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A330E0;
      }
      goto L_08A330BC;
    }
L_08A330BC:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A330DC;
      }
      goto L_08A330D4;
    }
L_08A330D4:
    ctx.set_gpr(31, 0x08A330DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A330DCu) goto L_08A330DC;
    return;
L_08A330DC:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A330E0;
L_08A330E0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A330BC;
      }
      goto L_08A330EC;
    }
L_08A330EC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33110;
      }
      goto L_08A330FC;
    }
L_08A330FC:
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08A33110;
L_08A33110:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A330FC;
      }
      goto L_08A3311C;
    }
L_08A3311C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33158;
      }
      goto L_08A33134;
    }
L_08A33134:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33154;
      }
      goto L_08A3314C;
    }
L_08A3314C:
    ctx.set_gpr(31, 0x08A33154u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A33154u) goto L_08A33154;
    return;
L_08A33154:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A33158;
L_08A33158:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A33134;
      }
      goto L_08A33164;
    }
L_08A33164:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33188;
      }
      goto L_08A33174;
    }
L_08A33174:
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08A33188;
L_08A33188:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A33174;
      }
      goto L_08A33194;
    }
L_08A33194:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, ctx.gpr[23] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A331A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 354u, 0x08A69FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A331A8u) goto L_08A331A8;
    return;
L_08A331A8:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A331E4;
      }
      goto L_08A331B4;
    }
L_08A331B4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A331C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 212u, 0x08944FE0u>(ctx, &aot_mem) && ctx.pc == 0x08A331C4u) goto L_08A331C4;
    return;
L_08A331C4:
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[29]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(31, 0x08A331E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 339u, 0x08A69EF8u>(ctx, &aot_mem) && ctx.pc == 0x08A331E0u) goto L_08A331E0;
    return;
L_08A331E0:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08A331E4;
L_08A331E4:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A331B4;
      }
      goto L_08A331F0;
    }
L_08A331F0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(176));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A33220:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3327C;
      }
      goto L_08A3322C;
    }
L_08A3322C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 49024u << 16u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(48), ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[28] + static_cast<std::uint32_t>(-32272)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08A3327C;
L_08A3327C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A33284:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33294;
      }
      goto L_08A33290;
    }
L_08A33290:
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    goto L_08A33294;
L_08A33294:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3329C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A332B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 217u, 0x08A590A8u>(ctx, &aot_mem) && ctx.pc == 0x08A332B4u) goto L_08A332B4;
    return;
L_08A332B4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A332C8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A332C8u) goto L_08A332C8;
    return;
L_08A332C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A332D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 118u, 0x089448B4u>(ctx, &aot_mem) && ctx.pc == 0x08A332D8u) goto L_08A332D8;
    return;
L_08A332D8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A33548;
      }
      goto L_08A332E0;
    }
L_08A332E0:
    ctx.set_gpr(31, 0x08A332E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A332E8u) goto L_08A332E8;
    return;
L_08A332E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A332F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A332F4u) goto L_08A332F4;
    return;
L_08A332F4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A33300u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 298u, 0x088C1B10u>(ctx, &aot_mem) && ctx.pc == 0x08A33300u) goto L_08A33300;
    return;
L_08A33300:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-22152), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A33310u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A33310u) goto L_08A33310;
    return;
L_08A33310:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A3331Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A3331Cu) goto L_08A3331C;
    return;
L_08A3331C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A33328u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 45u, 0x088B0444u>(ctx, &aot_mem) && ctx.pc == 0x08A33328u) goto L_08A33328;
    return;
L_08A33328:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-22148), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A33338u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A33338u) goto L_08A33338;
    return;
L_08A33338:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A33344u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A33344u) goto L_08A33344;
    return;
L_08A33344:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A33350u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 45u, 0x088B0444u>(ctx, &aot_mem) && ctx.pc == 0x08A33350u) goto L_08A33350;
    return;
L_08A33350:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-22144), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A33360u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A33360u) goto L_08A33360;
    return;
L_08A33360:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A3336Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A3336Cu) goto L_08A3336C;
    return;
L_08A3336C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A33378u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 194u, 0x088C11E0u>(ctx, &aot_mem) && ctx.pc == 0x08A33378u) goto L_08A33378;
    return;
L_08A33378:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-22140), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A33388u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A33388u) goto L_08A33388;
    return;
L_08A33388:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A33394u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A33394u) goto L_08A33394;
    return;
L_08A33394:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A333A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 170u, 0x088B1000u>(ctx, &aot_mem) && ctx.pc == 0x08A333A0u) goto L_08A333A0;
    return;
L_08A333A0:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-22136), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A333B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A333B0u) goto L_08A333B0;
    return;
L_08A333B0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A333BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A333BCu) goto L_08A333BC;
    return;
L_08A333BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A333C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 170u, 0x088B1000u>(ctx, &aot_mem) && ctx.pc == 0x08A333C8u) goto L_08A333C8;
    return;
L_08A333C8:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-22132), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A333D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A333D8u) goto L_08A333D8;
    return;
L_08A333D8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A333E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A333E4u) goto L_08A333E4;
    return;
L_08A333E4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A333F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 631u, 0x088BBA54u>(ctx, &aot_mem) && ctx.pc == 0x08A333F0u) goto L_08A333F0;
    return;
L_08A333F0:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-22124), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A33400u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 216u, 0x0893CDDCu>(ctx, &aot_mem) && ctx.pc == 0x08A33400u) goto L_08A33400;
    return;
L_08A33400:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A3340Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A3340Cu) goto L_08A3340C;
    return;
L_08A3340C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A33418u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 618u, 0x088C368Cu>(ctx, &aot_mem) && ctx.pc == 0x08A33418u) goto L_08A33418;
    return;
L_08A33418:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-22120), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A33438u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A33438u) goto L_08A33438;
    return;
L_08A33438:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(152)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A33450u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A33450u) goto L_08A33450;
    return;
L_08A33450:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22136)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22132)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22132)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A33484u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A33484u) goto L_08A33484;
    return;
L_08A33484:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22152)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A334A0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A334A0u) goto L_08A334A0;
    return;
L_08A334A0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22152)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A334BCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A334BCu) goto L_08A334BC;
    return;
L_08A334BC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22148)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A334D8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A334D8u) goto L_08A334D8;
    return;
L_08A334D8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22144)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A334F4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A334F4u) goto L_08A334F4;
    return;
L_08A334F4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22140)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A33510u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A33510u) goto L_08A33510;
    return;
L_08A33510:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22124)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3352Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3352Cu) goto L_08A3352C;
    return;
L_08A3352C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22120)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A33548u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A33548u) goto L_08A33548;
    return;
L_08A33548:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3355C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23488)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A3356C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A3358Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A3358Cu) goto L_08A3358C;
    return;
L_08A3358C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A3359Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 118u, 0x089448B4u>(ctx, &aot_mem) && ctx.pc == 0x08A3359Cu) goto L_08A3359C;
    return;
L_08A3359C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A337C0;
      }
      goto L_08A335A4;
    }
L_08A335A4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22152)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A335E0;
      }
      goto L_08A335B4;
    }
L_08A335B4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A335D8;
      }
      goto L_08A335D0;
    }
L_08A335D0:
    ctx.set_gpr(31, 0x08A335D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A335D8u) goto L_08A335D8;
    return;
L_08A335D8:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22152), 0u);
    goto L_08A335E0;
L_08A335E0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22148)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3361C;
      }
      goto L_08A335F0;
    }
L_08A335F0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A33614;
      }
      goto L_08A3360C;
    }
L_08A3360C:
    ctx.set_gpr(31, 0x08A33614u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A33614u) goto L_08A33614;
    return;
L_08A33614:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22148), 0u);
    goto L_08A3361C;
L_08A3361C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22144)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33658;
      }
      goto L_08A3362C;
    }
L_08A3362C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A33650;
      }
      goto L_08A33648;
    }
L_08A33648:
    ctx.set_gpr(31, 0x08A33650u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A33650u) goto L_08A33650;
    return;
L_08A33650:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22144), 0u);
    goto L_08A33658;
L_08A33658:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22140)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33694;
      }
      goto L_08A33668;
    }
L_08A33668:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3368C;
      }
      goto L_08A33684;
    }
L_08A33684:
    ctx.set_gpr(31, 0x08A3368Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A3368Cu) goto L_08A3368C;
    return;
L_08A3368C:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22140), 0u);
    goto L_08A33694;
L_08A33694:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22136)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A336D0;
      }
      goto L_08A336A4;
    }
L_08A336A4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A336C8;
      }
      goto L_08A336C0;
    }
L_08A336C0:
    ctx.set_gpr(31, 0x08A336C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A336C8u) goto L_08A336C8;
    return;
L_08A336C8:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22136), 0u);
    goto L_08A336D0;
L_08A336D0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22132)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A3370C;
      }
      goto L_08A336E0;
    }
L_08A336E0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A33704;
      }
      goto L_08A336FC;
    }
L_08A336FC:
    ctx.set_gpr(31, 0x08A33704u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A33704u) goto L_08A33704;
    return;
L_08A33704:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22132), 0u);
    goto L_08A3370C;
L_08A3370C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22128)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33748;
      }
      goto L_08A3371C;
    }
L_08A3371C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A33740;
      }
      goto L_08A33738;
    }
L_08A33738:
    ctx.set_gpr(31, 0x08A33740u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A33740u) goto L_08A33740;
    return;
L_08A33740:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22128), 0u);
    goto L_08A33748;
L_08A33748:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22124)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33784;
      }
      goto L_08A33758;
    }
L_08A33758:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A3377C;
      }
      goto L_08A33774;
    }
L_08A33774:
    ctx.set_gpr(31, 0x08A3377Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A3377Cu) goto L_08A3377C;
    return;
L_08A3377C:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22124), 0u);
    goto L_08A33784;
L_08A33784:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22120)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A337C0;
      }
      goto L_08A33794;
    }
L_08A33794:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A337B8;
      }
      goto L_08A337B0;
    }
L_08A337B0:
    ctx.set_gpr(31, 0x08A337B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A337B8u) goto L_08A337B8;
    return;
L_08A337B8:
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-22120), 0u);
    goto L_08A337C0;
L_08A337C0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A337CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 225u, 0x08A491B0u>(ctx, &aot_mem) && ctx.pc == 0x08A337CCu) goto L_08A337CC;
    return;
L_08A337CC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A337E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A33814u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 147u, 0x08A48BF4u>(ctx, &aot_mem) && ctx.pc == 0x08A33814u) goto L_08A33814;
    return;
L_08A33814:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A33824u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A33824u) goto L_08A33824;
    return;
L_08A33824:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A33834u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x08A33834u) goto L_08A33834;
    return;
L_08A33834:
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
L_08A33850:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A338B0;
      }
      goto L_08A3385C;
    }
L_08A3385C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A33894;
      }
      goto L_08A3386C;
    }
L_08A3386C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(116)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(120)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(124)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A338B0;
      }
      goto L_08A33894;
    }
L_08A33894:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(128)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(132)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(136)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), 0u);
    goto L_08A338B0;
L_08A338B0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A338B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-416));
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
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(388));
    ctx.set_gpr(31, 0x08A33910u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 623u, 0x089B798Cu>(ctx, &aot_mem) && ctx.pc == 0x08A33910u) goto L_08A33910;
    return;
L_08A33910:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(360));
    ctx.set_gpr(31, 0x08A3391Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 623u, 0x089B798Cu>(ctx, &aot_mem) && ctx.pc == 0x08A3391Cu) goto L_08A3391C;
    return;
L_08A3391C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(332));
    ctx.set_gpr(31, 0x08A33928u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 623u, 0x089B798Cu>(ctx, &aot_mem) && ctx.pc == 0x08A33928u) goto L_08A33928;
    return;
L_08A33928:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(304));
    ctx.set_gpr(31, 0x08A33934u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 623u, 0x089B798Cu>(ctx, &aot_mem) && ctx.pc == 0x08A33934u) goto L_08A33934;
    return;
L_08A33934:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[20] + static_cast<std::uint32_t>(164));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[3]);
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(212)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(216)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(220)));
    ctx.set_gpr(22, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33F28;
      }
      goto L_08A339A0;
    }
L_08A339A0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(16, ctx.gpr[22] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.set_gpr(31, 0x08A339D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A339D0u) goto L_08A339D0;
    return;
L_08A339D0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.set_gpr(31, 0x08A339DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A339DCu) goto L_08A339DC;
    return;
L_08A339DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(31, 0x08A33A00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 727u, 0x089FF9E0u>(ctx, &aot_mem) && ctx.pc == 0x08A33A00u) goto L_08A33A00;
    return;
L_08A33A00:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.set_gpr(31, 0x08A33A10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 124u, 0x08A019A0u>(ctx, &aot_mem) && ctx.pc == 0x08A33A10u) goto L_08A33A10;
    return;
L_08A33A10:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.set_gpr(31, 0x08A33A1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 725u, 0x089FF93Cu>(ctx, &aot_mem) && ctx.pc == 0x08A33A1Cu) goto L_08A33A1C;
    return;
L_08A33A1C:
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33F14;
      }
      goto L_08A33A28;
    }
L_08A33A28:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25092)));
    ctx.set_gpr(31, 0x08A33A54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A33A54u) goto L_08A33A54;
    return;
L_08A33A54:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33F10;
      }
      goto L_08A33A5C;
    }
L_08A33A5C:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(388));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A33A90u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A33A90u) goto L_08A33A90;
    return;
L_08A33A90:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(360));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A33AACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A33AACu) goto L_08A33AAC;
    return;
L_08A33AAC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(332));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A33AC8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A33AC8u) goto L_08A33AC8;
    return;
L_08A33AC8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(304));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A33AE4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A33AE4u) goto L_08A33AE4;
    return;
L_08A33AE4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(136)));
    ctx.set_gpr(31, 0x08A33AF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 572u, 0x08A2E89Cu>(ctx, &aot_mem) && ctx.pc == 0x08A33AF4u) goto L_08A33AF4;
    return;
L_08A33AF4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33B08;
      }
      goto L_08A33AFC;
    }
L_08A33AFC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08A33B08u);
    // nop
    goto L_08A33850;
L_08A33B08:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) && ctx.fpr[0] == ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A33CF8;
      }
      goto L_08A33B20;
    }
L_08A33B20:
    ctx.fpr[25] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(56)));
    ctx.fpr[24] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(60)));
    ctx.fpr[23] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33CE4;
      }
      goto L_08A33B38;
    }
L_08A33B38:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(404)));
    ctx.set_gpr(23, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(380)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    ctx.set_gpr(30, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(140));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(164));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.set_gpr(31, 0x08A33BCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x08A33BCCu) goto L_08A33BCC;
    return;
L_08A33BCC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(152));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.set_gpr(31, 0x08A33BE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 270u, 0x08A031C4u>(ctx, &aot_mem) && ctx.pc == 0x08A33BE0u) goto L_08A33BE0;
    return;
L_08A33BE0:
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::sqrt(ctx.fpr[0]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[3] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[4] = ctx.fpr[3] / ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[14] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.fpr[8] = ctx.fpr[25] - ctx.fpr[14];
    ctx.fpr[13] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[7] = ctx.fpr[24] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[6] = ctx.fpr[23] - ctx.fpr[12];
    { const float fs = ctx.fpr[8]; const float ft = ctx.fpr[8]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(5, 0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    { const float fs = ctx.fpr[7]; const float ft = ctx.fpr[7]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(4, 0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    ctx.fpr[5] = ctx.fpr[5] + ctx.fpr[4];
    { const float fs = ctx.fpr[6]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(4, 0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    ctx.fpr[4] = ctx.fpr[4] + ctx.fpr[5];
    ctx.fpr[4] = std::sqrt(ctx.fpr[4]);
    ctx.fpr[4] = ctx.fpr[3] / ctx.fpr[4];
    { const float fs = ctx.fpr[8]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(11, 0x7FC00000u); else ctx.fpr[11] = fs * ft; }
    { const float fs = ctx.fpr[7]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(10, 0x7FC00000u); else ctx.fpr[10] = fs * ft; }
    { const float fs = ctx.fpr[6]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(9, 0x7FC00000u); else ctx.fpr[9] = fs * ft; }
    ctx.fpr[8] = ctx.fpr[22] - ctx.fpr[14];
    ctx.fpr[7] = ctx.fpr[21] - ctx.fpr[13];
    ctx.fpr[6] = ctx.fpr[20] - ctx.fpr[12];
    { const float fs = ctx.fpr[8]; const float ft = ctx.fpr[8]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(5, 0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    { const float fs = ctx.fpr[7]; const float ft = ctx.fpr[7]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(4, 0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    ctx.fpr[5] = ctx.fpr[5] + ctx.fpr[4];
    { const float fs = ctx.fpr[6]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(4, 0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    ctx.fpr[4] = ctx.fpr[4] + ctx.fpr[5];
    ctx.fpr[4] = std::sqrt(ctx.fpr[4]);
    ctx.fpr[5] = ctx.fpr[3] / ctx.fpr[4];
    { const float fs = ctx.fpr[8]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(4, 0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    { const float fs = ctx.fpr[7]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    { const float fs = ctx.fpr[6]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(5, 0x7FC00000u); else ctx.fpr[5] = fs * ft; }
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(4, 0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[4] = ctx.fpr[4] + ctx.fpr[3];
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[3] = ctx.fpr[3] + ctx.fpr[4];
    { const float fs = ctx.fpr[11]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    { const float fs = ctx.fpr[10]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[2] + ctx.fpr[1];
    { const float fs = ctx.fpr[9]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    rt.memory().aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A33CE4;
L_08A33CE4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A33B38;
      }
      goto L_08A33CF0;
    }
L_08A33CF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33EA0;
      }
      goto L_08A33CF8;
    }
L_08A33CF8:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(56)));
    ctx.set_fpr_bits(4, ctx.fpr_bits(0) ^ 0x80000000u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(60)));
    ctx.set_fpr_bits(3, ctx.fpr_bits(0) ^ 0x80000000u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(64)));
    ctx.set_fpr_bits(2, ctx.fpr_bits(0) ^ 0x80000000u);
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[1] = std::sqrt(ctx.fpr[0]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[1];
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(25, 0x7FC00000u); else ctx.fpr[25] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(24, 0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(23, 0x7FC00000u); else ctx.fpr[23] = fs * ft; }
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33E94;
      }
      goto L_08A33D4C;
    }
L_08A33D4C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(404)));
    ctx.set_gpr(23, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(380)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    ctx.set_gpr(30, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.set_gpr(5, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(116));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.set_gpr(31, 0x08A33DB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 271u, 0x08A03244u>(ctx, &aot_mem) && ctx.pc == 0x08A33DB0u) goto L_08A33DB0;
    return;
L_08A33DB0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.set_gpr(31, 0x08A33DC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 270u, 0x08A031C4u>(ctx, &aot_mem) && ctx.pc == 0x08A33DC4u) goto L_08A33DC4;
    return;
L_08A33DC4:
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::sqrt(ctx.fpr[0]);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[1] = ctx.fpr[2] / ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(8, 0x7FC00000u); else ctx.fpr[8] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[8]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(7, 0x7FC00000u); else ctx.fpr[7] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[7]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(6, 0x7FC00000u); else ctx.fpr[6] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[6]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[5] = ctx.fpr[22] - ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[4] = ctx.fpr[21] - ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.fpr[3] = ctx.fpr[20] - ctx.fpr[0];
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[0] = std::sqrt(ctx.fpr[0]);
    ctx.fpr[2] = ctx.fpr[2] / ctx.fpr[0];
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[8]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[7]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[2] = ctx.fpr[0] + ctx.fpr[1];
    { const float fs = ctx.fpr[25]; const float ft = ctx.fpr[8]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[7]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    { const float fs = ctx.fpr[23]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    rt.memory().aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08A33E94;
L_08A33E94:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A33D4C;
      }
      goto L_08A33EA0;
    }
L_08A33EA0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(388));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A33EBCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A33EBCu) goto L_08A33EBC;
    return;
L_08A33EBC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(360));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A33ED8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A33ED8u) goto L_08A33ED8;
    return;
L_08A33ED8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(332));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A33EF4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A33EF4u) goto L_08A33EF4;
    return;
L_08A33EF4:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(304));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A33F10u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A33F10u) goto L_08A33F10;
    return;
L_08A33F10:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08A33F14;
L_08A33F14:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A33A28;
      }
      goto L_08A33F24;
    }
L_08A33F24:
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    goto L_08A33F28;
L_08A33F28:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A339A0;
      }
      goto L_08A33F38;
    }
L_08A33F38:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(416));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A33F84:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24744)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x08A33FC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 69u, 0x088443E8u>(ctx, &aot_mem) && ctx.pc == 0x08A33FC0u) goto L_08A33FC0;
    return;
L_08A33FC0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[4] ^ 0u);
    ctx.set_gpr(3, ctx.gpr[3] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33FE0;
      }
      goto L_08A33FD4;
    }
L_08A33FD4:
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A33FF4;
      }
      goto L_08A33FE0;
    }
L_08A33FE0:
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_08A33FF4;
L_08A33FF4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-22116)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.pc = 0x08A34000u; return;
}

void recomp_unit_0139(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0139_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_139(Runtime &runtime) {
    runtime.register_generated_unit(139u, 0x08A30000u, 16384u, &recomp_unit_0139, &recomp_unit_0139_entry);
    runtime.register_function(0x08A30000u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30004u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30008u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30020u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3002Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30034u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30044u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3004Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30054u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30064u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30084u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A300B8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A300CCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A300D4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A300E0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A300F8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30110u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3015Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30168u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30178u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30184u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3018Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30190u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3019Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A301A4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A301B0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A301DCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A301E8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30248u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30254u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30264u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30270u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30278u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3027Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3028Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A302A8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A302C0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A302D4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A302D8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30304u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30344u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30358u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30360u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30368u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3036Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30378u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3038Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30394u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3039Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A303A0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A303ACu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A303C0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A303C8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A303D0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A303D4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A303E0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A303F4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A303FCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30404u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30408u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30414u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30428u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30430u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30438u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3043Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A304A0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A304D4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A304DCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A304ECu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30550u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30558u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30568u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3058Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3059Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A305B4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A305CCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A305DCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A305F4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30610u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30620u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30638u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3064Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30654u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30664u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A306BCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A306C4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A306D4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A306F4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30704u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3071Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30730u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30740u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30758u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30768u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30778u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30790u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3079Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30814u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30848u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30858u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3086Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3087Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30884u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30894u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A308A0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A308ACu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A308B4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A308C0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A308CCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A308E4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A308F8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30944u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30950u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30960u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3096Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30974u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30978u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30984u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3098Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A309A0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A309ACu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A309C0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30A0Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30A18u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30A28u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30A34u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30A3Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30A40u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30A4Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30A60u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30A74u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30A84u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30A8Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30A94u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30A98u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30AC4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30AD4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30AE0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30AE8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30AFCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30B14u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30B24u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30B44u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30B4Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30B58u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30B6Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30B7Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30B84u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30B8Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30B98u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30BA4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30BB4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30BC0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30BCCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30BDCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30BE8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30BF4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30C04u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30C10u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30C1Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30C2Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30C38u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30C44u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30C54u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30C60u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30C6Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30C7Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30C88u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30C94u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30CA4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30CB0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30CBCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30CCCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30CD8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30CE4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30CF4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30D00u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30D0Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30D1Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30D28u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30D34u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30D44u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30D50u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30D5Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30D6Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30D78u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30D84u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30D94u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30DA0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30DACu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30DBCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30DC8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30DD4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30DE4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30DF0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30DFCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30E0Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30E18u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30E24u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30E34u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30E40u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30E4Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30E5Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30E68u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30E74u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30E84u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30E90u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30E9Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30EACu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30EB8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30EC4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30ED4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30EE0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30EECu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30EFCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30F08u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30F14u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30F24u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30F30u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30F3Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30F4Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30F58u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30F64u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30F74u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30F80u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30F8Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30FB0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30FCCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A30FE8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31004u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31020u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3103Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31058u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31074u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A310B8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A310E0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A310F8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31114u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31130u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3114Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31178u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31194u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A311B0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A311CCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A311E8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31204u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31220u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3123Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31258u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31274u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31290u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A312ACu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A312D8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A312F4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31310u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3132Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31348u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31364u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31380u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3139Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A313B8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A313D4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A313ECu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A313FCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3141Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3142Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31434u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31444u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31460u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31468u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31480u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3149Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A314A4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A314BCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A314D8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A314E0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A314F8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31514u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3151Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31534u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31550u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31558u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31570u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3158Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31594u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A315ACu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A315C8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A315D0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A315E8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31604u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3160Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31624u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31640u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31648u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31660u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3167Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31684u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3169Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A316B8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A316C0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A316D8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A316F4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A316FCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31714u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31730u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31738u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31750u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3176Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31774u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3178Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A317A8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A317B0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A317C8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A317E4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A317ECu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31804u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31820u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31828u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31840u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3185Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31864u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3187Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31898u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A318A0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A318B8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A318D4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A318DCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A318F4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31910u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31918u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31930u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3194Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31954u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3196Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31988u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31990u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A319A8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A319C4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A319CCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A319E4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31A00u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31A08u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31A20u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31A3Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31A44u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31A4Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31A58u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31A6Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31A90u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31A98u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31AA8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31AB8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31AD0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31AF4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31B04u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31B1Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31B3Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31B48u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31B54u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31B6Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31B84u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31B8Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31B94u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31BA4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31BBCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31BD0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31C38u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31C44u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31C50u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31C5Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31C68u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31C74u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31C80u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31D14u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31D88u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31D9Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31DA8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31DB4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31DD8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31DE8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31DF4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31E00u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31E30u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31E38u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31E78u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31E94u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31EB0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31ECCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31EE8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31EFCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31F10u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31F24u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31F38u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31F40u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31F5Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31F78u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31F84u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31F94u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31FACu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31FDCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A31FE8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3203Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32048u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32058u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32060u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3206Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32070u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32090u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3209Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A320B4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A320D4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A320ECu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A320FCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32104u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32114u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32154u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32178u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A321C0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A321E8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32208u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3221Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32224u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32238u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32244u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A322D8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A322ECu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32350u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3239Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A323D0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32400u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32460u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A324A8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A324DCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A324FCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32554u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32558u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32574u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32578u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32594u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32598u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A325B4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A325B8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A325C8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A325D0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A325D4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A325E0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A325E4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A325F0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3260Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32628u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32644u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32660u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3267Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32698u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A326B4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A326C0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A326D4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A326D8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A326E8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32744u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32790u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A327A4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A327B0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A327C4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A327E0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A327E8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3281Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32834u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32838u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32858u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3286Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3287Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A328B0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A328B8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A328C8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32900u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32914u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32938u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3295Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32974u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32988u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3299Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A329B0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A329C0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A329D0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A329E4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A329F4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32A08u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32A18u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32A28u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32A3Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32A4Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32A5Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32A70u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32A84u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32A98u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32AACu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32ABCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32AD0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32AE4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32AF8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32B0Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32B1Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32B2Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32B40u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32B54u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32B68u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32B78u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32B8Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32BA0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32BB4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32BC8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32BDCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32BE8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32C04u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32C24u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32C2Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32C3Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32C44u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32C54u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32C64u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32C7Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32C94u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32CA4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32CBCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32CC8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32CD0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32CF0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32D0Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32D14u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32D20u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32D2Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32D40u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32D48u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32D54u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32D84u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32D9Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32DA4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32DA8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32DB4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32DC4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32DD8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32DE4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32DFCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32E14u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32E1Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32E20u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32E2Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32E3Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32E50u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32E5Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32E80u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32E9Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32EA4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32EACu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32EBCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32EC8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32ED4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32EE8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32EF8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32F04u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32F10u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32F20u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32F24u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32F38u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32F68u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32F6Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32F78u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32F7Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32F88u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32FA8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32FBCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32FC0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32FCCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A32FECu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33038u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33048u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33058u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33090u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33094u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A330A0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A330BCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A330D4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A330DCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A330E0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A330ECu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A330FCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33110u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3311Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33134u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3314Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33154u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33158u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33164u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33174u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33188u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33194u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A331A8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A331B4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A331C4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A331E0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A331E4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A331F0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33220u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3322Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3327Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33284u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33290u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33294u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3329Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A332B4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A332C8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A332D8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A332E0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A332E8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A332F4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33300u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33310u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3331Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33328u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33338u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33344u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33350u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33360u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3336Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33378u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33388u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33394u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A333A0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A333B0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A333BCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A333C8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A333D8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A333E4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A333F0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33400u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3340Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33418u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33438u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33450u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33484u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A334A0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A334BCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A334D8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A334F4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33510u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3352Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33548u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3355Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3356Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3358Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3359Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A335A4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A335B4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A335D0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A335D8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A335E0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A335F0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3360Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33614u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3361Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3362Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33648u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33650u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33658u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33668u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33684u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3368Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33694u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A336A4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A336C0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A336C8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A336D0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A336E0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A336FCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33704u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3370Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3371Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33738u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33740u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33748u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33758u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33774u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3377Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33784u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33794u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A337B0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A337B8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A337C0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A337CCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A337E0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33814u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33824u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33834u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33850u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3385Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3386Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33894u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A338B0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A338B8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33910u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A3391Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33928u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33934u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A339A0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A339D0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A339DCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33A00u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33A10u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33A1Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33A28u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33A54u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33A5Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33A90u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33AACu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33AC8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33AE4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33AF4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33AFCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33B08u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33B20u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33B38u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33BCCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33BE0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33CE4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33CF0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33CF8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33D4Cu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33DB0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33DC4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33E94u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33EA0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33EBCu, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33ED8u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33EF4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33F10u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33F14u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33F24u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33F28u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33F38u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33F84u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33FC0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33FD4u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33FE0u, &recomp_unit_0139, "recomp_unit_0139");
    runtime.register_function(0x08A33FF4u, &recomp_unit_0139, "recomp_unit_0139");
}
} // namespace psprecomp
