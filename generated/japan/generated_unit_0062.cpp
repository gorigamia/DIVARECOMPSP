#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0062[4095] = {
    1, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0,
    0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0,
    0, 0, 20, 0, 21, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0,
    0, 29, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0,
    33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 36, 0, 37, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0,
    0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0,
    50, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 55, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0,
    0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 68, 0, 69,
    0, 0, 0, 70, 0, 71, 0, 72, 0, 0, 0, 0, 73, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 77, 0,
    0, 0, 0, 78, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 84,
    0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 93,
    0, 0, 94, 0, 95, 0, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 99, 0, 0, 0, 100, 101, 0, 0, 0, 0, 102, 0,
    0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 106, 0, 107, 0, 0, 0, 108, 0, 109, 0, 110,
    0, 0, 0, 0, 111, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 116, 0, 117, 0, 0,
    0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0,
    0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0,
    0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 0, 0, 0, 131, 0, 0,
    0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 0,
    0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 139, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 142,
    0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0,
    148, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0,
    0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 0, 156,
    0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 162, 0,
    0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 167, 0, 0, 0, 168,
    0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0,
    172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0,
    0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 179, 0, 0, 180, 0, 0, 181, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0,
    184, 0, 0, 0, 0, 185, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0,
    0, 190, 0, 0, 191, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0,
    0, 0, 0, 205, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 207, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0,
    0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215, 0,
    0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 219,
    0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 222, 0, 223, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 227,
    0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 230, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 233, 0,
    0, 0, 0, 0, 234, 0, 235, 0, 0, 0, 0, 0, 236, 0, 0, 237, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 0, 0, 240,
    0, 0, 241, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0, 244, 0, 0, 0, 245, 0, 0, 246, 0, 247, 0, 0, 248, 0, 249, 0, 0, 0, 0,
    0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 0, 253, 254, 0, 255, 0, 0, 0, 0, 0, 256, 0, 0, 257, 0, 0, 0,
    258, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 260, 0, 0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 263, 0, 264, 0, 0, 265,
    0, 0, 266, 0, 267, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 271, 0, 0, 0, 0, 0, 272, 0, 0,
    0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 276, 0, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 285, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 287, 0, 0, 0, 0, 0, 0, 288, 0, 0, 289, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 292, 0,
    0, 0, 0, 293, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 295, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 0, 298, 0, 0, 0,
    0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 0, 300, 0, 301, 0, 0, 0, 0, 0, 302, 0, 0, 303, 0, 0, 0, 0, 0, 304, 0, 0, 0,
    0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 308, 0, 0, 0, 309, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 313, 0,
    0, 0, 314, 0, 0, 315, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 318,
    0, 0, 0, 0, 319, 0, 320, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0,
    0, 0, 324, 0, 325, 0, 0, 0, 326, 0, 0, 327, 0, 328, 0, 329, 0, 0, 0, 330, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 332,
    0, 0, 0, 333, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0,
    0, 0, 336, 0, 0, 0, 337, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 340, 0,
    0, 0, 341, 0, 0, 0, 0, 342, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 345, 0,
    0, 0, 0, 0, 346, 0, 0, 0, 0, 347, 0, 348, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 351, 0,
    0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 353, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 0, 357, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 0, 361,
    0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 365, 0, 0, 0, 0, 0,
    0, 366, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 371, 0,
    0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 375, 0, 0,
    0, 0, 0, 376, 0, 0, 0, 0, 377, 0, 378, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 381,
    0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 383, 0, 0, 384, 0, 385, 0, 0, 386, 0, 387, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0,
    389, 0, 0, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 393, 0, 0, 0, 394, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 397, 0,
    0, 0, 398, 0, 0, 399, 0, 0, 0, 0, 0, 0, 400, 0, 0, 401, 0, 0, 0, 0, 0, 0, 402, 0, 0, 403, 0, 0, 0, 0, 0, 0,
    404, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0,
    408, 0, 0, 0, 0, 409, 0, 410, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0,
    0, 0, 414, 0, 415, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 417, 0, 0, 0, 418, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 421, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 423, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0, 425, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 430, 0, 0, 431, 0, 0, 432, 0, 0,
    0, 433, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 435, 0, 0, 436, 0, 0, 437, 0, 438, 0, 0, 0, 439, 0, 0, 0, 0, 0, 440, 0,
    0, 0, 441, 0, 0, 442, 0, 0, 0, 443, 0, 444, 0, 0, 445, 0, 0, 446, 0, 447, 0, 448, 0, 449, 0, 0, 450, 0, 0, 451, 0, 0,
    0, 0, 0, 452, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 455, 0, 0, 456, 0, 0, 0, 0, 0, 457,
    0, 0, 0, 458, 0, 0, 0, 459, 0, 460, 461, 0, 0, 0, 0, 462, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 465, 0, 0, 466, 467, 0, 0, 0,
    0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 470, 0, 0, 0, 471, 0, 472, 0, 0, 473, 0, 0, 474, 0,
    475, 0, 476, 0, 477, 0, 0, 478, 0, 0, 479, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 482, 0, 0, 0,
    0, 0, 0, 483, 0, 0, 484, 0, 0, 0, 0, 0, 485, 0, 0, 0, 486, 0, 0, 0, 487, 0, 488, 489, 0, 0, 0, 0, 490, 0, 491, 0,
    0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 493, 0, 0, 0, 0, 494, 495, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 498, 0, 0,
    0, 499, 0, 0, 500, 0, 0, 0, 501, 0, 0, 502, 0, 0, 0, 503, 0, 0, 504, 0, 0, 0, 505, 0, 506, 0, 507, 0, 0, 0, 0, 0,
    508, 0, 0, 509, 0, 510, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 511, 512, 0, 513, 0, 514, 0, 0, 0, 515, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 518, 0, 0, 0, 519, 0,
    0, 0, 520, 0, 0, 0, 0, 0, 521, 0, 0, 0, 522, 0, 523, 524, 0, 0, 0, 0, 0, 525, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0,
    0, 527, 0, 0, 528, 0, 529, 0, 0, 0, 530, 531, 0, 0, 0, 0, 0, 532, 0, 0, 533, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0,
    535, 0, 0, 0, 0, 536, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 538, 0, 0, 539, 0, 0, 540, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 541, 0, 0, 542, 0, 0, 0, 0, 543, 0,
    544, 0, 0, 545, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0, 0,
    0, 0, 0, 0, 0, 549, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 0, 0, 0,
    552, 0, 0, 0, 553, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 554, 0, 0, 555, 0, 0, 0, 0, 556, 0, 557, 0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 559, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0, 561, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 563, 0, 0, 0, 0, 0, 0, 0, 0, 0, 564, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 566, 0, 0, 567, 0, 0, 0, 0, 568, 0, 569, 0, 0, 0,
    0, 570, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 571, 0, 0, 0, 0, 0, 0, 0, 0, 572, 0, 0, 0, 573, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 576, 0, 577, 0, 0, 0,
    0, 578, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 580, 0, 0, 581, 0, 582, 0, 0, 0, 0, 583, 0, 584, 0, 0, 0, 0, 585, 0, 586, 0, 0,
    0, 0, 587, 0, 0, 0, 0, 0, 588, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 589, 0, 0, 0, 0, 0, 0, 0, 0, 590,
    0, 0, 0, 591, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 592, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 593, 0, 0,
    594, 0, 595, 0, 0, 0, 0, 596, 0, 0, 0, 0, 0, 0, 597, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 598, 0, 0, 599, 0, 600, 0, 0, 0, 0, 601, 0, 602, 0, 0, 0, 0, 603, 0, 604, 0,
    0, 0, 0, 605, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 606, 0, 0, 0, 0, 0, 0, 0, 0, 607, 0, 0, 0, 608,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 609, 0, 0, 0, 0, 0, 0, 610, 0, 0, 0, 611, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 612, 0, 0, 0, 613, 0, 614, 0, 0, 615, 0, 0, 0, 0, 0, 616, 0, 0, 0, 0,
    0, 617, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 0, 0, 0, 619, 0, 0, 0, 620, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 621, 0, 0, 622, 0, 0, 0, 0, 623, 0, 624, 0, 0, 0, 0, 625, 0, 0, 0, 0,
    0, 626, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 627, 0, 0, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 629, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 630, 0, 0, 0, 0, 0, 631, 0, 0, 0, 632, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 633, 0, 0, 0, 634, 0, 635, 0, 0, 636, 0, 0, 0, 0, 0, 637, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 638, 0, 0, 0, 0, 0, 0, 0, 0, 639, 0, 0, 0, 640, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 641, 0, 0, 642, 0, 0, 0, 0, 643, 0, 644, 0, 0, 0, 0, 645, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 646, 0, 0, 0, 0, 0, 0, 0, 0, 647, 0, 0, 0, 648, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 649, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 651, 0, 0, 0, 0, 652, 0, 653, 0, 0, 0, 0, 654, 0, 655, 0, 0, 0, 0, 656, 0, 0, 0, 0, 0, 657, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 658, 0, 0, 0, 0, 0, 0, 0, 659, 0, 0, 0, 660, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 661, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 662, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 663, 0, 0, 0, 0, 664, 0, 665, 0, 0, 0, 0, 666, 0, 667, 0, 0, 668, 0, 0,
    0, 0, 0, 669, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 670, 0, 0, 0, 0, 0, 0, 0, 0, 671, 0, 0, 0, 672,
};
void recomp_unit_0062_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088FC000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0062[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088FC000;
    case 2u: goto L_088FC00C;
    case 3u: goto L_088FC018;
    case 4u: goto L_088FC034;
    case 5u: goto L_088FC04C;
    case 6u: goto L_088FC064;
    case 7u: goto L_088FC074;
    case 8u: goto L_088FC084;
    case 9u: goto L_088FC0E0;
    case 10u: goto L_088FC0F0;
    case 11u: goto L_088FC118;
    case 12u: goto L_088FC134;
    case 13u: goto L_088FC144;
    case 14u: goto L_088FC150;
    case 15u: goto L_088FC18C;
    case 16u: goto L_088FC1BC;
    case 17u: goto L_088FC1CC;
    case 18u: goto L_088FC1DC;
    case 19u: goto L_088FC1F4;
    case 20u: goto L_088FC208;
    case 21u: goto L_088FC210;
    case 22u: goto L_088FC228;
    case 23u: goto L_088FC240;
    case 24u: goto L_088FC264;
    case 25u: goto L_088FC28C;
    case 26u: goto L_088FC2A4;
    case 27u: goto L_088FC2BC;
    case 28u: goto L_088FC2EC;
    case 29u: goto L_088FC304;
    case 30u: goto L_088FC314;
    case 31u: goto L_088FC324;
    case 32u: goto L_088FC370;
    case 33u: goto L_088FC380;
    case 34u: goto L_088FC390;
    case 35u: goto L_088FC3A8;
    case 36u: goto L_088FC3BC;
    case 37u: goto L_088FC3C4;
    case 38u: goto L_088FC3DC;
    case 39u: goto L_088FC3F0;
    case 40u: goto L_088FC404;
    case 41u: goto L_088FC420;
    case 42u: goto L_088FC438;
    case 43u: goto L_088FC448;
    case 44u: goto L_088FC458;
    case 45u: goto L_088FC4A4;
    case 46u: goto L_088FC4B4;
    case 47u: goto L_088FC4C4;
    case 48u: goto L_088FC4D4;
    case 49u: goto L_088FC4EC;
    case 50u: goto L_088FC500;
    case 51u: goto L_088FC508;
    case 52u: goto L_088FC520;
    case 53u: goto L_088FC538;
    case 54u: goto L_088FC55C;
    case 55u: goto L_088FC584;
    case 56u: goto L_088FC59C;
    case 57u: goto L_088FC5B4;
    case 58u: goto L_088FC5C4;
    case 59u: goto L_088FC5D4;
    case 60u: goto L_088FC628;
    case 61u: goto L_088FC638;
    case 62u: goto L_088FC648;
    case 63u: goto L_088FC66C;
    case 64u: goto L_088FC688;
    case 65u: goto L_088FC6B0;
    case 66u: goto L_088FC6C8;
    case 67u: goto L_088FC6E8;
    case 68u: goto L_088FC6F4;
    case 69u: goto L_088FC6FC;
    case 70u: goto L_088FC70C;
    case 71u: goto L_088FC714;
    case 72u: goto L_088FC71C;
    case 73u: goto L_088FC730;
    case 74u: goto L_088FC738;
    case 75u: goto L_088FC748;
    case 76u: goto L_088FC760;
    case 77u: goto L_088FC778;
    case 78u: goto L_088FC78C;
    case 79u: goto L_088FC794;
    case 80u: goto L_088FC7AC;
    case 81u: goto L_088FC7C4;
    case 82u: goto L_088FC7CC;
    case 83u: goto L_088FC7F0;
    case 84u: goto L_088FC7FC;
    case 85u: goto L_088FC814;
    case 86u: goto L_088FC82C;
    case 87u: goto L_088FC83C;
    case 88u: goto L_088FC898;
    case 89u: goto L_088FC8A8;
    case 90u: goto L_088FC8B8;
    case 91u: goto L_088FC8C8;
    case 92u: goto L_088FC8E4;
    case 93u: goto L_088FC8FC;
    case 94u: goto L_088FC908;
    case 95u: goto L_088FC910;
    case 96u: goto L_088FC924;
    case 97u: goto L_088FC930;
    case 98u: goto L_088FC944;
    case 99u: goto L_088FC950;
    case 100u: goto L_088FC960;
    case 101u: goto L_088FC964;
    case 102u: goto L_088FC978;
    case 103u: goto L_088FC990;
    case 104u: goto L_088FC9A8;
    case 105u: goto L_088FC9C8;
    case 106u: goto L_088FC9D4;
    case 107u: goto L_088FC9DC;
    case 108u: goto L_088FC9EC;
    case 109u: goto L_088FC9F4;
    case 110u: goto L_088FC9FC;
    case 111u: goto L_088FCA10;
    case 112u: goto L_088FCA18;
    case 113u: goto L_088FCA28;
    case 114u: goto L_088FCA40;
    case 115u: goto L_088FCA58;
    case 116u: goto L_088FCA6C;
    case 117u: goto L_088FCA74;
    case 118u: goto L_088FCA8C;
    case 119u: goto L_088FCAA4;
    case 120u: goto L_088FCAAC;
    case 121u: goto L_088FCAD0;
    case 122u: goto L_088FCADC;
    case 123u: goto L_088FCAF4;
    case 124u: goto L_088FCB0C;
    case 125u: goto L_088FCB1C;
    case 126u: goto L_088FCB78;
    case 127u: goto L_088FCB88;
    case 128u: goto L_088FCBAC;
    case 129u: goto L_088FCBC8;
    case 130u: goto L_088FCBD8;
    case 131u: goto L_088FCBF4;
    case 132u: goto L_088FCC04;
    case 133u: goto L_088FCC2C;
    case 134u: goto L_088FCC58;
    case 135u: goto L_088FCC70;
    case 136u: goto L_088FCC84;
    case 137u: goto L_088FCC98;
    case 138u: goto L_088FCCB0;
    case 139u: goto L_088FCCC4;
    case 140u: goto L_088FCCCC;
    case 141u: goto L_088FCCE4;
    case 142u: goto L_088FCCFC;
    case 143u: goto L_088FCD10;
    case 144u: goto L_088FCD34;
    case 145u: goto L_088FCD40;
    case 146u: goto L_088FCD58;
    case 147u: goto L_088FCD70;
    case 148u: goto L_088FCD80;
    case 149u: goto L_088FCD90;
    case 150u: goto L_088FCDE4;
    case 151u: goto L_088FCDF4;
    case 152u: goto L_088FCE04;
    case 153u: goto L_088FCE14;
    case 154u: goto L_088FCE38;
    case 155u: goto L_088FCE54;
    case 156u: goto L_088FCE7C;
    case 157u: goto L_088FCE94;
    case 158u: goto L_088FCEAC;
    case 159u: goto L_088FCEC0;
    case 160u: goto L_088FCEC8;
    case 161u: goto L_088FCEE0;
    case 162u: goto L_088FCEF8;
    case 163u: goto L_088FCF0C;
    case 164u: goto L_088FCF30;
    case 165u: goto L_088FCF3C;
    case 166u: goto L_088FCF54;
    case 167u: goto L_088FCF6C;
    case 168u: goto L_088FCF7C;
    case 169u: goto L_088FCF8C;
    case 170u: goto L_088FCFE0;
    case 171u: goto L_088FCFF0;
    case 172u: goto L_088FD000;
    case 173u: goto L_088FD010;
    case 174u: goto L_088FD034;
    case 175u: goto L_088FD050;
    case 176u: goto L_088FD078;
    case 177u: goto L_088FD090;
    case 178u: goto L_088FD0A8;
    case 179u: goto L_088FD0B0;
    case 180u: goto L_088FD0BC;
    case 181u: goto L_088FD0C8;
    case 182u: goto L_088FD0D0;
    case 183u: goto L_088FD0E8;
    case 184u: goto L_088FD100;
    case 185u: goto L_088FD114;
    case 186u: goto L_088FD11C;
    case 187u: goto L_088FD134;
    case 188u: goto L_088FD14C;
    case 189u: goto L_088FD160;
    case 190u: goto L_088FD184;
    case 191u: goto L_088FD190;
    case 192u: goto L_088FD1A8;
    case 193u: goto L_088FD1C0;
    case 194u: goto L_088FD1D0;
    case 195u: goto L_088FD1E0;
    case 196u: goto L_088FD234;
    case 197u: goto L_088FD244;
    case 198u: goto L_088FD254;
    case 199u: goto L_088FD264;
    case 200u: goto L_088FD28C;
    case 201u: goto L_088FD2A8;
    case 202u: goto L_088FD2B8;
    case 203u: goto L_088FD2C4;
    case 204u: goto L_088FD2F0;
    case 205u: goto L_088FD30C;
    case 206u: goto L_088FD324;
    case 207u: goto L_088FD338;
    case 208u: goto L_088FD340;
    case 209u: goto L_088FD358;
    case 210u: goto L_088FD370;
    case 211u: goto L_088FD388;
    case 212u: goto L_088FD3AC;
    case 213u: goto L_088FD3C8;
    case 214u: goto L_088FD3E0;
    case 215u: goto L_088FD3F8;
    case 216u: goto L_088FD408;
    case 217u: goto L_088FD418;
    case 218u: goto L_088FD46C;
    case 219u: goto L_088FD47C;
    case 220u: goto L_088FD48C;
    case 221u: goto L_088FD49C;
    case 222u: goto L_088FD4B8;
    case 223u: goto L_088FD4C0;
    case 224u: goto L_088FD4CC;
    case 225u: goto L_088FD4E0;
    case 226u: goto L_088FD4F4;
    case 227u: goto L_088FD4FC;
    case 228u: goto L_088FD50C;
    case 229u: goto L_088FD530;
    case 230u: goto L_088FD538;
    case 231u: goto L_088FD540;
    case 232u: goto L_088FD564;
    case 233u: goto L_088FD578;
    case 234u: goto L_088FD590;
    case 235u: goto L_088FD598;
    case 236u: goto L_088FD5B0;
    case 237u: goto L_088FD5BC;
    case 238u: goto L_088FD5D0;
    case 239u: goto L_088FD5E0;
    case 240u: goto L_088FD5FC;
    case 241u: goto L_088FD608;
    case 242u: goto L_088FD614;
    case 243u: goto L_088FD628;
    case 244u: goto L_088FD634;
    case 245u: goto L_088FD644;
    case 246u: goto L_088FD650;
    case 247u: goto L_088FD658;
    case 248u: goto L_088FD664;
    case 249u: goto L_088FD66C;
    case 250u: goto L_088FD684;
    case 251u: goto L_088FD698;
    case 252u: goto L_088FD6A8;
    case 253u: goto L_088FD6C0;
    case 254u: goto L_088FD6C4;
    case 255u: goto L_088FD6CC;
    case 256u: goto L_088FD6E4;
    case 257u: goto L_088FD6F0;
    case 258u: goto L_088FD700;
    case 259u: goto L_088FD710;
    case 260u: goto L_088FD72C;
    case 261u: goto L_088FD738;
    case 262u: goto L_088FD750;
    case 263u: goto L_088FD768;
    case 264u: goto L_088FD770;
    case 265u: goto L_088FD77C;
    case 266u: goto L_088FD788;
    case 267u: goto L_088FD790;
    case 268u: goto L_088FD7A8;
    case 269u: goto L_088FD7C0;
    case 270u: goto L_088FD7D4;
    case 271u: goto L_088FD7DC;
    case 272u: goto L_088FD7F4;
    case 273u: goto L_088FD808;
    case 274u: goto L_088FD81C;
    case 275u: goto L_088FD838;
    case 276u: goto L_088FD850;
    case 277u: goto L_088FD860;
    case 278u: goto L_088FD870;
    case 279u: goto L_088FD8C4;
    case 280u: goto L_088FD8D4;
    case 281u: goto L_088FD8E4;
    case 282u: goto L_088FD8F4;
    case 283u: goto L_088FD924;
    case 284u: goto L_088FD938;
    case 285u: goto L_088FD954;
    case 286u: goto L_088FD960;
    case 287u: goto L_088FD988;
    case 288u: goto L_088FD9A4;
    case 289u: goto L_088FD9B0;
    case 290u: goto L_088FD9CC;
    case 291u: goto L_088FD9E4;
    case 292u: goto L_088FD9F8;
    case 293u: goto L_088FDA0C;
    case 294u: goto L_088FDA24;
    case 295u: goto L_088FDA38;
    case 296u: goto L_088FDA40;
    case 297u: goto L_088FDA58;
    case 298u: goto L_088FDA70;
    case 299u: goto L_088FDA88;
    case 300u: goto L_088FDAAC;
    case 301u: goto L_088FDAB4;
    case 302u: goto L_088FDACC;
    case 303u: goto L_088FDAD8;
    case 304u: goto L_088FDAF0;
    case 305u: goto L_088FDB08;
    case 306u: goto L_088FDB18;
    case 307u: goto L_088FDB28;
    case 308u: goto L_088FDB84;
    case 309u: goto L_088FDB94;
    case 310u: goto L_088FDBA4;
    case 311u: goto L_088FDBB4;
    case 312u: goto L_088FDBDC;
    case 313u: goto L_088FDBF8;
    case 314u: goto L_088FDC08;
    case 315u: goto L_088FDC14;
    case 316u: goto L_088FDC48;
    case 317u: goto L_088FDC64;
    case 318u: goto L_088FDC7C;
    case 319u: goto L_088FDC90;
    case 320u: goto L_088FDC98;
    case 321u: goto L_088FDCB0;
    case 322u: goto L_088FDCC8;
    case 323u: goto L_088FDCE4;
    case 324u: goto L_088FDD08;
    case 325u: goto L_088FDD10;
    case 326u: goto L_088FDD20;
    case 327u: goto L_088FDD2C;
    case 328u: goto L_088FDD34;
    case 329u: goto L_088FDD3C;
    case 330u: goto L_088FDD4C;
    case 331u: goto L_088FDD64;
    case 332u: goto L_088FDD7C;
    case 333u: goto L_088FDD8C;
    case 334u: goto L_088FDD9C;
    case 335u: goto L_088FDDF8;
    case 336u: goto L_088FDE08;
    case 337u: goto L_088FDE18;
    case 338u: goto L_088FDE28;
    case 339u: goto L_088FDE5C;
    case 340u: goto L_088FDE78;
    case 341u: goto L_088FDE88;
    case 342u: goto L_088FDE9C;
    case 343u: goto L_088FDEA8;
    case 344u: goto L_088FDEDC;
    case 345u: goto L_088FDEF8;
    case 346u: goto L_088FDF10;
    case 347u: goto L_088FDF24;
    case 348u: goto L_088FDF2C;
    case 349u: goto L_088FDF44;
    case 350u: goto L_088FDF5C;
    case 351u: goto L_088FDF78;
    case 352u: goto L_088FDF9C;
    case 353u: goto L_088FDFA8;
    case 354u: goto L_088FDFC0;
    case 355u: goto L_088FDFD8;
    case 356u: goto L_088FDFE8;
    case 357u: goto L_088FDFF8;
    case 358u: goto L_088FE04C;
    case 359u: goto L_088FE05C;
    case 360u: goto L_088FE06C;
    case 361u: goto L_088FE07C;
    case 362u: goto L_088FE08C;
    case 363u: goto L_088FE0BC;
    case 364u: goto L_088FE0D8;
    case 365u: goto L_088FE0E8;
    case 366u: goto L_088FE104;
    case 367u: goto L_088FE118;
    case 368u: goto L_088FE134;
    case 369u: goto L_088FE148;
    case 370u: goto L_088FE164;
    case 371u: goto L_088FE178;
    case 372u: goto L_088FE194;
    case 373u: goto L_088FE1A8;
    case 374u: goto L_088FE1DC;
    case 375u: goto L_088FE1F4;
    case 376u: goto L_088FE20C;
    case 377u: goto L_088FE220;
    case 378u: goto L_088FE228;
    case 379u: goto L_088FE240;
    case 380u: goto L_088FE258;
    case 381u: goto L_088FE27C;
    case 382u: goto L_088FE2A0;
    case 383u: goto L_088FE2A8;
    case 384u: goto L_088FE2B4;
    case 385u: goto L_088FE2BC;
    case 386u: goto L_088FE2C8;
    case 387u: goto L_088FE2D0;
    case 388u: goto L_088FE2E8;
    case 389u: goto L_088FE300;
    case 390u: goto L_088FE318;
    case 391u: goto L_088FE328;
    case 392u: goto L_088FE338;
    case 393u: goto L_088FE394;
    case 394u: goto L_088FE3A4;
    case 395u: goto L_088FE3B4;
    case 396u: goto L_088FE3DC;
    case 397u: goto L_088FE3F8;
    case 398u: goto L_088FE408;
    case 399u: goto L_088FE414;
    case 400u: goto L_088FE430;
    case 401u: goto L_088FE43C;
    case 402u: goto L_088FE458;
    case 403u: goto L_088FE464;
    case 404u: goto L_088FE480;
    case 405u: goto L_088FE490;
    case 406u: goto L_088FE4B8;
    case 407u: goto L_088FE4E8;
    case 408u: goto L_088FE500;
    case 409u: goto L_088FE514;
    case 410u: goto L_088FE51C;
    case 411u: goto L_088FE534;
    case 412u: goto L_088FE54C;
    case 413u: goto L_088FE564;
    case 414u: goto L_088FE588;
    case 415u: goto L_088FE590;
    case 416u: goto L_088FE5A8;
    case 417u: goto L_088FE5C0;
    case 418u: goto L_088FE5D0;
    case 419u: goto L_088FE5E0;
    case 420u: goto L_088FE63C;
    case 421u: goto L_088FE64C;
    case 422u: goto L_088FE65C;
    case 423u: goto L_088FE684;
    case 424u: goto L_088FE6A0;
    case 425u: goto L_088FE6B0;
    case 426u: goto L_088FE6BC;
    case 427u: goto L_088FE6F8;
    case 428u: goto L_088FE728;
    case 429u: goto L_088FE754;
    case 430u: goto L_088FE75C;
    case 431u: goto L_088FE768;
    case 432u: goto L_088FE774;
    case 433u: goto L_088FE784;
    case 434u: goto L_088FE79C;
    case 435u: goto L_088FE7B0;
    case 436u: goto L_088FE7BC;
    case 437u: goto L_088FE7C8;
    case 438u: goto L_088FE7D0;
    case 439u: goto L_088FE7E0;
    case 440u: goto L_088FE7F8;
    case 441u: goto L_088FE808;
    case 442u: goto L_088FE814;
    case 443u: goto L_088FE824;
    case 444u: goto L_088FE82C;
    case 445u: goto L_088FE838;
    case 446u: goto L_088FE844;
    case 447u: goto L_088FE84C;
    case 448u: goto L_088FE854;
    case 449u: goto L_088FE85C;
    case 450u: goto L_088FE868;
    case 451u: goto L_088FE874;
    case 452u: goto L_088FE88C;
    case 453u: goto L_088FE8A4;
    case 454u: goto L_088FE8BC;
    case 455u: goto L_088FE8D8;
    case 456u: goto L_088FE8E4;
    case 457u: goto L_088FE8FC;
    case 458u: goto L_088FE90C;
    case 459u: goto L_088FE91C;
    case 460u: goto L_088FE924;
    case 461u: goto L_088FE928;
    case 462u: goto L_088FE93C;
    case 463u: goto L_088FE950;
    case 464u: goto L_088FE9CC;
    case 465u: goto L_088FE9E0;
    case 466u: goto L_088FE9EC;
    case 467u: goto L_088FE9F0;
    case 468u: goto L_088FEA10;
    case 469u: goto L_088FEA3C;
    case 470u: goto L_088FEA48;
    case 471u: goto L_088FEA58;
    case 472u: goto L_088FEA60;
    case 473u: goto L_088FEA6C;
    case 474u: goto L_088FEA78;
    case 475u: goto L_088FEA80;
    case 476u: goto L_088FEA88;
    case 477u: goto L_088FEA90;
    case 478u: goto L_088FEA9C;
    case 479u: goto L_088FEAA8;
    case 480u: goto L_088FEAC0;
    case 481u: goto L_088FEAD8;
    case 482u: goto L_088FEAF0;
    case 483u: goto L_088FEB0C;
    case 484u: goto L_088FEB18;
    case 485u: goto L_088FEB30;
    case 486u: goto L_088FEB40;
    case 487u: goto L_088FEB50;
    case 488u: goto L_088FEB58;
    case 489u: goto L_088FEB5C;
    case 490u: goto L_088FEB70;
    case 491u: goto L_088FEB78;
    case 492u: goto L_088FEB8C;
    case 493u: goto L_088FEC08;
    case 494u: goto L_088FEC1C;
    case 495u: goto L_088FEC20;
    case 496u: goto L_088FEC40;
    case 497u: goto L_088FEC6C;
    case 498u: goto L_088FEC74;
    case 499u: goto L_088FEC84;
    case 500u: goto L_088FEC90;
    case 501u: goto L_088FECA0;
    case 502u: goto L_088FECAC;
    case 503u: goto L_088FECBC;
    case 504u: goto L_088FECC8;
    case 505u: goto L_088FECD8;
    case 506u: goto L_088FECE0;
    case 507u: goto L_088FECE8;
    case 508u: goto L_088FED00;
    case 509u: goto L_088FED0C;
    case 510u: goto L_088FED14;
    case 511u: goto L_088FED84;
    case 512u: goto L_088FED88;
    case 513u: goto L_088FED90;
    case 514u: goto L_088FED98;
    case 515u: goto L_088FEDA8;
    case 516u: goto L_088FEDBC;
    case 517u: goto L_088FEDE0;
    case 518u: goto L_088FEDE8;
    case 519u: goto L_088FEDF8;
    case 520u: goto L_088FEE08;
    case 521u: goto L_088FEE20;
    case 522u: goto L_088FEE30;
    case 523u: goto L_088FEE38;
    case 524u: goto L_088FEE3C;
    case 525u: goto L_088FEE54;
    case 526u: goto L_088FEE60;
    case 527u: goto L_088FEE84;
    case 528u: goto L_088FEE90;
    case 529u: goto L_088FEE98;
    case 530u: goto L_088FEEA8;
    case 531u: goto L_088FEEAC;
    case 532u: goto L_088FEEC4;
    case 533u: goto L_088FEED0;
    case 534u: goto L_088FEEEC;
    case 535u: goto L_088FEF00;
    case 536u: goto L_088FEF14;
    case 537u: goto L_088FEF28;
    case 538u: goto L_088FEF40;
    case 539u: goto L_088FEF4C;
    case 540u: goto L_088FEF58;
    case 541u: goto L_088FEFD8;
    case 542u: goto L_088FEFE4;
    case 543u: goto L_088FEFF8;
    case 544u: goto L_088FF000;
    case 545u: goto L_088FF00C;
    case 546u: goto L_088FF024;
    case 547u: goto L_088FF03C;
    case 548u: goto L_088FF074;
    case 549u: goto L_088FF094;
    case 550u: goto L_088FF0A4;
    case 551u: goto L_088FF0DC;
    case 552u: goto L_088FF100;
    case 553u: goto L_088FF110;
    case 554u: goto L_088FF194;
    case 555u: goto L_088FF1A0;
    case 556u: goto L_088FF1B4;
    case 557u: goto L_088FF1BC;
    case 558u: goto L_088FF1D0;
    case 559u: goto L_088FF1E8;
    case 560u: goto L_088FF220;
    case 561u: goto L_088FF240;
    case 562u: goto L_088FF250;
    case 563u: goto L_088FF288;
    case 564u: goto L_088FF2B0;
    case 565u: goto L_088FF2C0;
    case 566u: goto L_088FF348;
    case 567u: goto L_088FF354;
    case 568u: goto L_088FF368;
    case 569u: goto L_088FF370;
    case 570u: goto L_088FF384;
    case 571u: goto L_088FF3BC;
    case 572u: goto L_088FF3E0;
    case 573u: goto L_088FF3F0;
    case 574u: goto L_088FF428;
    case 575u: goto L_088FF45C;
    case 576u: goto L_088FF468;
    case 577u: goto L_088FF470;
    case 578u: goto L_088FF484;
    case 579u: goto L_088FF4A0;
    case 580u: goto L_088FF528;
    case 581u: goto L_088FF534;
    case 582u: goto L_088FF53C;
    case 583u: goto L_088FF550;
    case 584u: goto L_088FF558;
    case 585u: goto L_088FF56C;
    case 586u: goto L_088FF574;
    case 587u: goto L_088FF588;
    case 588u: goto L_088FF5A0;
    case 589u: goto L_088FF5D8;
    case 590u: goto L_088FF5FC;
    case 591u: goto L_088FF60C;
    case 592u: goto L_088FF644;
    case 593u: goto L_088FF674;
    case 594u: goto L_088FF680;
    case 595u: goto L_088FF688;
    case 596u: goto L_088FF69C;
    case 597u: goto L_088FF6B8;
    case 598u: goto L_088FF72C;
    case 599u: goto L_088FF738;
    case 600u: goto L_088FF740;
    case 601u: goto L_088FF754;
    case 602u: goto L_088FF75C;
    case 603u: goto L_088FF770;
    case 604u: goto L_088FF778;
    case 605u: goto L_088FF78C;
    case 606u: goto L_088FF7C8;
    case 607u: goto L_088FF7EC;
    case 608u: goto L_088FF7FC;
    case 609u: goto L_088FF830;
    case 610u: goto L_088FF84C;
    case 611u: goto L_088FF85C;
    case 612u: goto L_088FF8B0;
    case 613u: goto L_088FF8C0;
    case 614u: goto L_088FF8C8;
    case 615u: goto L_088FF8D4;
    case 616u: goto L_088FF8EC;
    case 617u: goto L_088FF904;
    case 618u: goto L_088FF93C;
    case 619u: goto L_088FF960;
    case 620u: goto L_088FF970;
    case 621u: goto L_088FF9B0;
    case 622u: goto L_088FF9BC;
    case 623u: goto L_088FF9D0;
    case 624u: goto L_088FF9D8;
    case 625u: goto L_088FF9EC;
    case 626u: goto L_088FFA04;
    case 627u: goto L_088FFA3C;
    case 628u: goto L_088FFA60;
    case 629u: goto L_088FFA70;
    case 630u: goto L_088FFAA8;
    case 631u: goto L_088FFAC0;
    case 632u: goto L_088FFAD0;
    case 633u: goto L_088FFB24;
    case 634u: goto L_088FFB34;
    case 635u: goto L_088FFB3C;
    case 636u: goto L_088FFB48;
    case 637u: goto L_088FFB60;
    case 638u: goto L_088FFB9C;
    case 639u: goto L_088FFBC0;
    case 640u: goto L_088FFBD0;
    case 641u: goto L_088FFC14;
    case 642u: goto L_088FFC20;
    case 643u: goto L_088FFC34;
    case 644u: goto L_088FFC3C;
    case 645u: goto L_088FFC50;
    case 646u: goto L_088FFC8C;
    case 647u: goto L_088FFCB0;
    case 648u: goto L_088FFCC0;
    case 649u: goto L_088FFCF8;
    case 650u: goto L_088FFD50;
    case 651u: goto L_088FFD94;
    case 652u: goto L_088FFDA8;
    case 653u: goto L_088FFDB0;
    case 654u: goto L_088FFDC4;
    case 655u: goto L_088FFDCC;
    case 656u: goto L_088FFDE0;
    case 657u: goto L_088FFDF8;
    case 658u: goto L_088FFE30;
    case 659u: goto L_088FFE50;
    case 660u: goto L_088FFE60;
    case 661u: goto L_088FFE98;
    case 662u: goto L_088FFEF0;
    case 663u: goto L_088FFF30;
    case 664u: goto L_088FFF44;
    case 665u: goto L_088FFF4C;
    case 666u: goto L_088FFF60;
    case 667u: goto L_088FFF68;
    case 668u: goto L_088FFF74;
    case 669u: goto L_088FFF8C;
    case 670u: goto L_088FFFC4;
    case 671u: goto L_088FFFE8;
    case 672u: goto L_088FFFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088FC000:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(31, 0x088FC00Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 764u, 0x08853094u>(ctx, &aot_mem) && ctx.pc == 0x088FC00Cu) goto L_088FC00C;
    return;
L_088FC00C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x088FC018u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 764u, 0x08853094u>(ctx, &aot_mem) && ctx.pc == 0x088FC018u) goto L_088FC018;
    return;
L_088FC018:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15576));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088FC034u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 288u, 0x088555D0u>(ctx, &aot_mem) && ctx.pc == 0x088FC034u) goto L_088FC034;
    return;
L_088FC034:
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
L_088FC04C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2192u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-16268));
    ctx.set_gpr(31, 0x088FC064u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088FC064u) goto L_088FC064;
    return;
L_088FC064:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FC074:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088FC084u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088FC084u) goto L_088FC084;
    return;
L_088FC084:
    ctx.set_gpr(2, 2192u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-16144));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2192u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15940));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(30308));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(6704));
    ctx.set_gpr(7, 2191u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-2956));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(7248));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-16552));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(60));
    ctx.set_gpr(11, 2192u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-16464));
    ctx.set_gpr(31, 0x088FC0E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088FC0E0u) goto L_088FC0E0;
    return;
L_088FC0E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FC0F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30308)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088FC118u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088FC118u) goto L_088FC118;
    return;
L_088FC118:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-16540));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088FC134u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088FC134u) goto L_088FC134;
    return;
L_088FC134:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088FC144u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088FC144u) goto L_088FC144;
    return;
L_088FC144:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088FC150u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 58u, 0x088D8444u>(ctx, &aot_mem) && ctx.pc == 0x088FC150u) goto L_088FC150;
    return;
L_088FC150:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-16524));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-16508));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-16492));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088FC18Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088FC18Cu) goto L_088FC18C;
    return;
L_088FC18C:
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-2776));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30308)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
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
L_088FC1BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088FC1CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 905u, 0x0897FCC0u>(ctx, &aot_mem) && ctx.pc == 0x088FC1CCu) goto L_088FC1CC;
    return;
L_088FC1CC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FC1DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30328)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FC208;
      }
      goto L_088FC1F4;
    }
L_088FC1F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FC210;
      }
      goto L_088FC208;
    }
L_088FC208:
    ctx.set_gpr(31, 0x088FC210u);
    // nop
    goto L_088FC2EC;
L_088FC210:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30328)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FC228:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088FC240u);
    // nop
    goto L_088FC2A4;
L_088FC240:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), 0u);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-14628));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088FC264u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088FC264u) goto L_088FC264;
    return;
L_088FC264:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(2640));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088FC28Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 339u, 0x088E5C68u>(ctx, &aot_mem) && ctx.pc == 0x088FC28Cu) goto L_088FC28C;
    return;
L_088FC28C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FC2A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088FC2BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088FC2BCu) goto L_088FC2BC;
    return;
L_088FC2BC:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(3008));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), 0u);
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
L_088FC2EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2192u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15596));
    ctx.set_gpr(31, 0x088FC304u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088FC304u) goto L_088FC304;
    return;
L_088FC304:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FC314:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088FC324u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088FC324u) goto L_088FC324;
    return;
L_088FC324:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(30328));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(24172));
    ctx.set_gpr(7, 2192u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-15488));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(24516));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-16476));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(104));
    ctx.set_gpr(11, 2192u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-15832));
    ctx.set_gpr(31, 0x088FC370u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088FC370u) goto L_088FC370;
    return;
L_088FC370:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FC380:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28204)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FC390:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30332)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FC3BC;
      }
      goto L_088FC3A8;
    }
L_088FC3A8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FC3C4;
      }
      goto L_088FC3BC;
    }
L_088FC3BC:
    ctx.set_gpr(31, 0x088FC3C4u);
    // nop
    goto L_088FC420;
L_088FC3C4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30332)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FC3DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088FC3F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088FC3F0u) goto L_088FC3F0;
    return;
L_088FC3F0:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4588));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088FC404u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088FC404u) goto L_088FC404;
    return;
L_088FC404:
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
L_088FC420:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2192u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15288));
    ctx.set_gpr(31, 0x088FC438u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088FC438u) goto L_088FC438;
    return;
L_088FC438:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FC448:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088FC458u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088FC458u) goto L_088FC458;
    return;
L_088FC458:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(30332));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2192u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-15180));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-16444));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(11, 2192u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-15396));
    ctx.set_gpr(31, 0x088FC4A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088FC4A4u) goto L_088FC4A4;
    return;
L_088FC4A4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FC4B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088FC4C4u);
    // nop
    goto L_088FC390;
L_088FC4C4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FC4D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30336)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FC500;
      }
      goto L_088FC4EC;
    }
L_088FC4EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FC508;
      }
      goto L_088FC500;
    }
L_088FC500:
    ctx.set_gpr(31, 0x088FC508u);
    // nop
    goto L_088FC59C;
L_088FC508:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30336)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FC520:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088FC538u);
    // nop
    goto L_088FC2A4;
L_088FC538:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), 0u);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-13868));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088FC55Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088FC55Cu) goto L_088FC55C;
    return;
L_088FC55C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(2444));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088FC584u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 339u, 0x088E5C68u>(ctx, &aot_mem) && ctx.pc == 0x088FC584u) goto L_088FC584;
    return;
L_088FC584:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FC59C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2192u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-14908));
    ctx.set_gpr(31, 0x088FC5B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088FC5B4u) goto L_088FC5B4;
    return;
L_088FC5B4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FC5C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088FC5D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088FC5D4u) goto L_088FC5D4;
    return;
L_088FC5D4:
    ctx.set_gpr(2, 2192u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-14776));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(30336));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(24800));
    ctx.set_gpr(7, 2192u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-14792));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(25096));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-16424));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(120));
    ctx.set_gpr(11, 2192u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-15072));
    ctx.set_gpr(31, 0x088FC628u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088FC628u) goto L_088FC628;
    return;
L_088FC628:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FC638:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28212)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FC648:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30336)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088FC66Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088FC66Cu) goto L_088FC66C;
    return;
L_088FC66C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-16392));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088FC688u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088FC688u) goto L_088FC688;
    return;
L_088FC688:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-16356));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-16348));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-16340));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088FC6B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088FC6B0u) goto L_088FC6B0;
    return;
L_088FC6B0:
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
L_088FC6C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x088FC6E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088FC6E8u) goto L_088FC6E8;
    return;
L_088FC6E8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FC714;
      }
      goto L_088FC6F4;
    }
L_088FC6F4:
    ctx.set_gpr(31, 0x088FC6FCu);
    // nop
    goto L_088FC814;
L_088FC6FC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088FC70Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 848u, 0x08947E90u>(ctx, &aot_mem) && ctx.pc == 0x088FC70Cu) goto L_088FC70C;
    return;
L_088FC70C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FC748;
      }
      goto L_088FC714;
    }
L_088FC714:
    ctx.set_gpr(31, 0x088FC71Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 428u, 0x0892DD50u>(ctx, &aot_mem) && ctx.pc == 0x088FC71Cu) goto L_088FC71C;
    return;
L_088FC71C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(340));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088FC730u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 290u, 0x0892D40Cu>(ctx, &aot_mem) && ctx.pc == 0x088FC730u) goto L_088FC730;
    return;
L_088FC730:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FC748;
      }
      goto L_088FC738;
    }
L_088FC738:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088FC748u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 826u, 0x089776FCu>(ctx, &aot_mem) && ctx.pc == 0x088FC748u) goto L_088FC748;
    return;
L_088FC748:
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
L_088FC760:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30348)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FC78C;
      }
      goto L_088FC778;
    }
L_088FC778:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FC794;
      }
      goto L_088FC78C;
    }
L_088FC78C:
    ctx.set_gpr(31, 0x088FC794u);
    // nop
    goto L_088FC814;
L_088FC794:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30348)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FC7AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-368));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088FC7C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 824u, 0x089776C0u>(ctx, &aot_mem) && ctx.pc == 0x088FC7C4u) goto L_088FC7C4;
    return;
L_088FC7C4:
    ctx.set_gpr(31, 0x088FC7CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088FC7CCu) goto L_088FC7CC;
    return;
L_088FC7CC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4296));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.set_gpr(31, 0x088FC7F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x088FC7F0u) goto L_088FC7F0;
    return;
L_088FC7F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(31, 0x088FC7FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x088FC7FCu) goto L_088FC7FC;
    return;
L_088FC7FC:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(368));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FC814:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2192u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-14276));
    ctx.set_gpr(31, 0x088FC82Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088FC82Cu) goto L_088FC82C;
    return;
L_088FC82C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FC83C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(2, 2192u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-14136));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(30348));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1288));
    ctx.set_gpr(7, 2190u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(25964));
    ctx.set_gpr(8, 2192u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-14168));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-16332));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(340));
    ctx.set_gpr(11, 2192u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-14420));
    ctx.set_gpr(31, 0x088FC898u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088FC898u) goto L_088FC898;
    return;
L_088FC898:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FC8A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088FC8B8u);
    // nop
    goto L_088FC760;
L_088FC8B8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FC8C8:
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1176));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30348)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FC8E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088FC8FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088FC8FCu) goto L_088FC8FC;
    return;
L_088FC8FC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FC930;
      }
      goto L_088FC908;
    }
L_088FC908:
    ctx.set_gpr(31, 0x088FC910u);
    // nop
    goto L_088FCAF4;
L_088FC910:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30352)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088FC924u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088FC924u) goto L_088FC924;
    return;
L_088FC924:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FC990;
      }
      goto L_088FC930;
    }
L_088FC930:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088FC944u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 290u, 0x0892D40Cu>(ctx, &aot_mem) && ctx.pc == 0x088FC944u) goto L_088FC944;
    return;
L_088FC944:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FC964;
      }
      goto L_088FC950;
    }
L_088FC950:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088FC960u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 217u, 0x089715FCu>(ctx, &aot_mem) && ctx.pc == 0x088FC960u) goto L_088FC960;
    return;
L_088FC960:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_088FC964;
L_088FC964:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FC978u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FC978u) goto L_088FC978;
    return;
L_088FC978:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FC990u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FC990u) goto L_088FC990;
    return;
L_088FC990:
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
L_088FC9A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x088FC9C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088FC9C8u) goto L_088FC9C8;
    return;
L_088FC9C8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FC9F4;
      }
      goto L_088FC9D4;
    }
L_088FC9D4:
    ctx.set_gpr(31, 0x088FC9DCu);
    // nop
    goto L_088FCAF4;
L_088FC9DC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088FC9ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 848u, 0x08947E90u>(ctx, &aot_mem) && ctx.pc == 0x088FC9ECu) goto L_088FC9EC;
    return;
L_088FC9EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FCA28;
      }
      goto L_088FC9F4;
    }
L_088FC9F4:
    ctx.set_gpr(31, 0x088FC9FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 428u, 0x0892DD50u>(ctx, &aot_mem) && ctx.pc == 0x088FC9FCu) goto L_088FC9FC;
    return;
L_088FC9FC:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088FCA10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 290u, 0x0892D40Cu>(ctx, &aot_mem) && ctx.pc == 0x088FCA10u) goto L_088FCA10;
    return;
L_088FCA10:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FCA28;
      }
      goto L_088FCA18;
    }
L_088FCA18:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088FCA28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 221u, 0x0897164Cu>(ctx, &aot_mem) && ctx.pc == 0x088FCA28u) goto L_088FCA28;
    return;
L_088FCA28:
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
L_088FCA40:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30352)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FCA6C;
      }
      goto L_088FCA58;
    }
L_088FCA58:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FCA74;
      }
      goto L_088FCA6C;
    }
L_088FCA6C:
    ctx.set_gpr(31, 0x088FCA74u);
    // nop
    goto L_088FCAF4;
L_088FCA74:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30352)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FCA8C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-240));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x088FCAA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 215u, 0x089715C0u>(ctx, &aot_mem) && ctx.pc == 0x088FCAA4u) goto L_088FCAA4;
    return;
L_088FCAA4:
    ctx.set_gpr(31, 0x088FCAACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088FCAACu) goto L_088FCAAC;
    return;
L_088FCAAC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4296));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(31, 0x088FCAD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x088FCAD0u) goto L_088FCAD0;
    return;
L_088FCAD0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(31, 0x088FCADCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x088FCADCu) goto L_088FCADC;
    return;
L_088FCADC:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(240));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FCAF4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2192u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-13540));
    ctx.set_gpr(31, 0x088FCB0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088FCB0Cu) goto L_088FCB0C;
    return;
L_088FCB0C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FCB1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(2, 2192u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-13432));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(30352));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1288));
    ctx.set_gpr(7, 2190u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(25964));
    ctx.set_gpr(8, 2190u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-480));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-16312));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(220));
    ctx.set_gpr(11, 2192u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-13684));
    ctx.set_gpr(31, 0x088FCB78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088FCB78u) goto L_088FCB78;
    return;
L_088FCB78:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FCB88:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30352)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088FCBACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088FCBACu) goto L_088FCBAC;
    return;
L_088FCBAC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-16292));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088FCBC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088FCBC8u) goto L_088FCBC8;
    return;
L_088FCBC8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088FCBD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088FCBD8u) goto L_088FCBD8;
    return;
L_088FCBD8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088FCBF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088FCBF4u) goto L_088FCBF4;
    return;
L_088FCBF4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088FCC04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 783u, 0x0895F488u>(ctx, &aot_mem) && ctx.pc == 0x088FCC04u) goto L_088FCC04;
    return;
L_088FCC04:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-16252));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-16244));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-16236));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088FCC2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088FCC2Cu) goto L_088FCC2C;
    return;
L_088FCC2C:
    ctx.set_gpr(4, 2190u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1176));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30352)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
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
L_088FCC58:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088FCC70u);
    // nop
    goto L_088FCD58;
L_088FCC70:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30364)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088FCC84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088FCC84u) goto L_088FCC84;
    return;
L_088FCC84:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FCC98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30364)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FCCC4;
      }
      goto L_088FCCB0;
    }
L_088FCCB0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FCCCC;
      }
      goto L_088FCCC4;
    }
L_088FCCC4:
    ctx.set_gpr(31, 0x088FCCCCu);
    // nop
    goto L_088FCD58;
L_088FCCCC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30364)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FCCE4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-240));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x088FCCFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 282u, 0x0892D320u>(ctx, &aot_mem) && ctx.pc == 0x088FCCFCu) goto L_088FCCFC;
    return;
L_088FCCFC:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-13336));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088FCD10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088FCD10u) goto L_088FCD10;
    return;
L_088FCD10:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4296));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.set_gpr(31, 0x088FCD34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x088FCD34u) goto L_088FCD34;
    return;
L_088FCD34:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(31, 0x088FCD40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x088FCD40u) goto L_088FCD40;
    return;
L_088FCD40:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(240));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FCD58:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2192u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-12928));
    ctx.set_gpr(31, 0x088FCD70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088FCD70u) goto L_088FCD70;
    return;
L_088FCD70:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FCD80:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088FCD90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088FCD90u) goto L_088FCD90;
    return;
L_088FCD90:
    ctx.set_gpr(2, 2192u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-12780));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(30364));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1288));
    ctx.set_gpr(7, 2190u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(25964));
    ctx.set_gpr(8, 2192u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-12812));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-16228));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(220));
    ctx.set_gpr(11, 2192u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-13084));
    ctx.set_gpr(31, 0x088FCDE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088FCDE4u) goto L_088FCDE4;
    return;
L_088FCDE4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FCDF4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088FCE04u);
    // nop
    goto L_088FCC98;
L_088FCE04:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FCE14:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30364)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088FCE38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088FCE38u) goto L_088FCE38;
    return;
L_088FCE38:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-16208));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088FCE54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088FCE54u) goto L_088FCE54;
    return;
L_088FCE54:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-16176));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-16168));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-16160));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088FCE7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088FCE7Cu) goto L_088FCE7C;
    return;
L_088FCE7C:
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
L_088FCE94:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30376)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FCEC0;
      }
      goto L_088FCEAC;
    }
L_088FCEAC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FCEC8;
      }
      goto L_088FCEC0;
    }
L_088FCEC0:
    ctx.set_gpr(31, 0x088FCEC8u);
    // nop
    goto L_088FCF54;
L_088FCEC8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30376)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FCEE0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-240));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088FCEF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 282u, 0x0892D320u>(ctx, &aot_mem) && ctx.pc == 0x088FCEF8u) goto L_088FCEF8;
    return;
L_088FCEF8:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-12080));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088FCF0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088FCF0Cu) goto L_088FCF0C;
    return;
L_088FCF0C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4296));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.set_gpr(31, 0x088FCF30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x088FCF30u) goto L_088FCF30;
    return;
L_088FCF30:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(31, 0x088FCF3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x088FCF3Cu) goto L_088FCF3C;
    return;
L_088FCF3C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(240));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FCF54:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2192u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-12420));
    ctx.set_gpr(31, 0x088FCF6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088FCF6Cu) goto L_088FCF6C;
    return;
L_088FCF6C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FCF7C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088FCF8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088FCF8Cu) goto L_088FCF8C;
    return;
L_088FCF8C:
    ctx.set_gpr(2, 2192u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-12272));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(30376));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1288));
    ctx.set_gpr(7, 2190u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(25964));
    ctx.set_gpr(8, 2192u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-12304));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-16152));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(216));
    ctx.set_gpr(11, 2192u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-12576));
    ctx.set_gpr(31, 0x088FCFE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088FCFE0u) goto L_088FCFE0;
    return;
L_088FCFE0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FCFF0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088FD000u);
    // nop
    goto L_088FCE94;
L_088FD000:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FD010:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30376)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088FD034u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088FD034u) goto L_088FD034;
    return;
L_088FD034:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-16128));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088FD050u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088FD050u) goto L_088FD050;
    return;
L_088FD050:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-16124));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-16120));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-16116));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088FD078u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088FD078u) goto L_088FD078;
    return;
L_088FD078:
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
L_088FD090:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30384)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FD0D0;
      }
      goto L_088FD0A8;
    }
L_088FD0A8:
    ctx.set_gpr(31, 0x088FD0B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088FD0B0u) goto L_088FD0B0;
    return;
L_088FD0B0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088FD0BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088FD0BCu) goto L_088FD0BC;
    return;
L_088FD0BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088FD0C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088FD0C8u) goto L_088FD0C8;
    return;
L_088FD0C8:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30384), ctx.gpr[2]);
    goto L_088FD0D0;
L_088FD0D0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30384)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FD0E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30384)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FD114;
      }
      goto L_088FD100;
    }
L_088FD100:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FD11C;
      }
      goto L_088FD114;
    }
L_088FD114:
    ctx.set_gpr(31, 0x088FD11Cu);
    // nop
    goto L_088FD1A8;
L_088FD11C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30384)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FD134:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-256));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088FD14Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 282u, 0x0892D320u>(ctx, &aot_mem) && ctx.pc == 0x088FD14Cu) goto L_088FD14C;
    return;
L_088FD14C:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-12588));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088FD160u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088FD160u) goto L_088FD160;
    return;
L_088FD160:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4296));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.set_gpr(31, 0x088FD184u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x088FD184u) goto L_088FD184;
    return;
L_088FD184:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.set_gpr(31, 0x088FD190u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x088FD190u) goto L_088FD190;
    return;
L_088FD190:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(256));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FD1A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2192u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-11824));
    ctx.set_gpr(31, 0x088FD1C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088FD1C0u) goto L_088FD1C0;
    return;
L_088FD1C0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FD1D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088FD1E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088FD1E0u) goto L_088FD1E0;
    return;
L_088FD1E0:
    ctx.set_gpr(2, 2192u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-11676));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(30384));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1288));
    ctx.set_gpr(7, 2190u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(25964));
    ctx.set_gpr(8, 2192u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-11708));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-16112));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(228));
    ctx.set_gpr(11, 2192u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-11980));
    ctx.set_gpr(31, 0x088FD234u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088FD234u) goto L_088FD234;
    return;
L_088FD234:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FD244:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088FD254u);
    // nop
    goto L_088FD0E8;
L_088FD254:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FD264:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30384)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088FD28Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088FD28Cu) goto L_088FD28C;
    return;
L_088FD28C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-16088));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088FD2A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088FD2A8u) goto L_088FD2A8;
    return;
L_088FD2A8:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088FD2B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088FD2B8u) goto L_088FD2B8;
    return;
L_088FD2B8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088FD2C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 416u, 0x088DE2D0u>(ctx, &aot_mem) && ctx.pc == 0x088FD2C4u) goto L_088FD2C4;
    return;
L_088FD2C4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-16032));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-16016));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-16000));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088FD2F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088FD2F0u) goto L_088FD2F0;
    return;
L_088FD2F0:
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
L_088FD30C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30404)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FD338;
      }
      goto L_088FD324;
    }
L_088FD324:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FD340;
      }
      goto L_088FD338;
    }
L_088FD338:
    ctx.set_gpr(31, 0x088FD340u);
    // nop
    goto L_088FD3E0;
L_088FD340:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30404)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FD358:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088FD370u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 505u, 0x089422D0u>(ctx, &aot_mem) && ctx.pc == 0x088FD370u) goto L_088FD370;
    return;
L_088FD370:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(3268));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088FD388u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088FD388u) goto L_088FD388;
    return;
L_088FD388:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(18204));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(31, 0x088FD3ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x088FD3ACu) goto L_088FD3AC;
    return;
L_088FD3AC:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5492));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088FD3C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 288u, 0x088555D0u>(ctx, &aot_mem) && ctx.pc == 0x088FD3C8u) goto L_088FD3C8;
    return;
L_088FD3C8:
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
L_088FD3E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2192u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-11256));
    ctx.set_gpr(31, 0x088FD3F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088FD3F8u) goto L_088FD3F8;
    return;
L_088FD3F8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FD408:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088FD418u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088FD418u) goto L_088FD418;
    return;
L_088FD418:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15984));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(30404));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-31504));
    ctx.set_gpr(7, 2190u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2684));
    ctx.set_gpr(8, 2192u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-11140));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-15976));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(11, 2192u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-11432));
    ctx.set_gpr(31, 0x088FD46Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088FD46Cu) goto L_088FD46C;
    return;
L_088FD46C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FD47C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088FD48Cu);
    // nop
    goto L_088FD30C;
L_088FD48C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FD49C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30408)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FD564;
      }
      goto L_088FD4B8;
    }
L_088FD4B8:
    ctx.set_gpr(31, 0x088FD4C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088FD4C0u) goto L_088FD4C0;
    return;
L_088FD4C0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088FD4CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088FD4CCu) goto L_088FD4CC;
    return;
L_088FD4CC:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30404)));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088FD4E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088FD4E0u) goto L_088FD4E0;
    return;
L_088FD4E0:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30408), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FD564;
      }
      goto L_088FD4F4;
    }
L_088FD4F4:
    ctx.set_gpr(31, 0x088FD4FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088FD4FCu) goto L_088FD4FC;
    return;
L_088FD4FC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088FD50Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 751u, 0x08927514u>(ctx, &aot_mem) && ctx.pc == 0x088FD50Cu) goto L_088FD50C;
    return;
L_088FD50C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30408)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FD538;
      }
      goto L_088FD530;
    }
L_088FD530:
    ctx.set_gpr(31, 0x088FD538u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088FD538u) goto L_088FD538;
    return;
L_088FD538:
    ctx.set_gpr(31, 0x088FD540u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 538u, 0x089425E0u>(ctx, &aot_mem) && ctx.pc == 0x088FD540u) goto L_088FD540;
    return;
L_088FD540:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30408)));
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30408)));
    ctx.set_gpr(31, 0x088FD564u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x088FD564u) goto L_088FD564;
    return;
L_088FD564:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FD578:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30408)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FD598;
      }
      goto L_088FD590;
    }
L_088FD590:
    ctx.set_gpr(31, 0x088FD598u);
    // nop
    goto L_088FD3E0;
L_088FD598:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30408)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FD5B0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FD5BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(31, 0x088FD5D0u);
    // nop
    goto L_088FD5E0;
L_088FD5D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FD5E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088FD5FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088FD5FCu) goto L_088FD5FC;
    return;
L_088FD5FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088FD608u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088FD608u) goto L_088FD608;
    return;
L_088FD608:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088FD614u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 456u, 0x088DE650u>(ctx, &aot_mem) && ctx.pc == 0x088FD614u) goto L_088FD614;
    return;
L_088FD614:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15948));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FD634;
      }
      goto L_088FD628;
    }
L_088FD628:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FD684;
      }
      goto L_088FD634;
    }
L_088FD634:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FD66C;
      }
      goto L_088FD644;
    }
L_088FD644:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088FD650u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 788u, 0x089277A0u>(ctx, &aot_mem) && ctx.pc == 0x088FD650u) goto L_088FD650;
    return;
L_088FD650:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FD664;
      }
      goto L_088FD658;
    }
L_088FD658:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088FD664u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 762u, 0x089275E8u>(ctx, &aot_mem) && ctx.pc == 0x088FD664u) goto L_088FD664;
    return;
L_088FD664:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30776), ctx.gpr[2]);
    goto L_088FD66C;
L_088FD66C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30776)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-15948));
    ctx.set_gpr(31, 0x088FD684u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 784u, 0x08927768u>(ctx, &aot_mem) && ctx.pc == 0x088FD684u) goto L_088FD684;
    return;
L_088FD684:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088FD698u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 564u, 0x089427C4u>(ctx, &aot_mem) && ctx.pc == 0x088FD698u) goto L_088FD698;
    return;
L_088FD698:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FD6C4;
      }
      goto L_088FD6A8;
    }
L_088FD6A8:
    ctx.set_gpr(2, ctx.gpr[3] & 1u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FD6C4;
      }
      goto L_088FD6C0;
    }
L_088FD6C0:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    goto L_088FD6C4;
L_088FD6C4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FD6F0;
      }
      goto L_088FD6CC;
    }
L_088FD6CC:
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FD6F0;
      }
      goto L_088FD6E4;
    }
L_088FD6E4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088FD6F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 887u, 0x0895BD2Cu>(ctx, &aot_mem) && ctx.pc == 0x088FD6F0u) goto L_088FD6F0;
    return;
L_088FD6F0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088FD700u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 598u, 0x08942A18u>(ctx, &aot_mem) && ctx.pc == 0x088FD700u) goto L_088FD700;
    return;
L_088FD700:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088FD710u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x088FD710u) goto L_088FD710;
    return;
L_088FD710:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FD738;
      }
      goto L_088FD72C;
    }
L_088FD72C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088FD738u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088FD738u) goto L_088FD738;
    return;
L_088FD738:
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
L_088FD750:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30412)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FD790;
      }
      goto L_088FD768;
    }
L_088FD768:
    ctx.set_gpr(31, 0x088FD770u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088FD770u) goto L_088FD770;
    return;
L_088FD770:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088FD77Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088FD77Cu) goto L_088FD77C;
    return;
L_088FD77C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088FD788u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088FD788u) goto L_088FD788;
    return;
L_088FD788:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(30412), ctx.gpr[2]);
    goto L_088FD790;
L_088FD790:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30412)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FD7A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30412)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FD7D4;
      }
      goto L_088FD7C0;
    }
L_088FD7C0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FD7DC;
      }
      goto L_088FD7D4;
    }
L_088FD7D4:
    ctx.set_gpr(31, 0x088FD7DCu);
    // nop
    goto L_088FD838;
L_088FD7DC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30412)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FD7F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088FD808u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088FD808u) goto L_088FD808;
    return;
L_088FD808:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(3168));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088FD81Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088FD81Cu) goto L_088FD81C;
    return;
L_088FD81C:
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
L_088FD838:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2192u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-10144));
    ctx.set_gpr(31, 0x088FD850u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088FD850u) goto L_088FD850;
    return;
L_088FD850:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FD860:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088FD870u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088FD870u) goto L_088FD870;
    return;
L_088FD870:
    ctx.set_gpr(2, 2192u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-9996));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(30412));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(24296));
    ctx.set_gpr(7, 2189u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(23152));
    ctx.set_gpr(8, 2192u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-10028));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-15932));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2192u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-10252));
    ctx.set_gpr(31, 0x088FD8C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088FD8C4u) goto L_088FD8C4;
    return;
L_088FD8C4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FD8D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088FD8E4u);
    // nop
    goto L_088FD7A8;
L_088FD8E4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FD8F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30412)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27040));
    ctx.set_gpr(31, 0x088FD924u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x088FD924u) goto L_088FD924;
    return;
L_088FD924:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088FD938u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 700u, 0x08927138u>(ctx, &aot_mem) && ctx.pc == 0x088FD938u) goto L_088FD938;
    return;
L_088FD938:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FD954u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FD954u) goto L_088FD954;
    return;
L_088FD954:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088FD960u);
    // nop
    goto L_088FD578;
L_088FD960:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(30416));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088FD988u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 145u, 0x08944AF0u>(ctx, &aot_mem) && ctx.pc == 0x088FD988u) goto L_088FD988;
    return;
L_088FD988:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FD9B0;
      }
      goto L_088FD9A4;
    }
L_088FD9A4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088FD9B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088FD9B0u) goto L_088FD9B0;
    return;
L_088FD9B0:
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
L_088FD9CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088FD9E4u);
    // nop
    goto L_088FDAF0;
L_088FD9E4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30420)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088FD9F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088FD9F8u) goto L_088FD9F8;
    return;
L_088FD9F8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FDA0C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30420)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FDA38;
      }
      goto L_088FDA24;
    }
L_088FDA24:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FDA40;
      }
      goto L_088FDA38;
    }
L_088FDA38:
    ctx.set_gpr(31, 0x088FDA40u);
    // nop
    goto L_088FDAF0;
L_088FDA40:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30420)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FDA58:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-240));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088FDA70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 282u, 0x0892D320u>(ctx, &aot_mem) && ctx.pc == 0x088FDA70u) goto L_088FDA70;
    return;
L_088FDA70:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-11440));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), 0u);
    ctx.set_gpr(31, 0x088FDA88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088FDA88u) goto L_088FDA88;
    return;
L_088FDA88:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-11440));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FDAB4;
      }
      goto L_088FDAAC;
    }
L_088FDAAC:
    ctx.set_gpr(31, 0x088FDAB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088FDAB4u) goto L_088FDAB4;
    return;
L_088FDAB4:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4296));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.set_gpr(31, 0x088FDACCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x088FDACCu) goto L_088FDACC;
    return;
L_088FDACC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.set_gpr(31, 0x088FDAD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x088FDAD8u) goto L_088FDAD8;
    return;
L_088FDAD8:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(240));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FDAF0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2192u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-9448));
    ctx.set_gpr(31, 0x088FDB08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088FDB08u) goto L_088FDB08;
    return;
L_088FDB08:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FDB18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088FDB28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088FDB28u) goto L_088FDB28;
    return;
L_088FDB28:
    ctx.set_gpr(2, 2192u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-9292));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15908));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(30420));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1288));
    ctx.set_gpr(7, 2190u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(25964));
    ctx.set_gpr(8, 2192u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-9324));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-15900));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(216));
    ctx.set_gpr(11, 2192u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-9640));
    ctx.set_gpr(31, 0x088FDB84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088FDB84u) goto L_088FDB84;
    return;
L_088FDB84:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FDB94:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088FDBA4u);
    // nop
    goto L_088FDA0C;
L_088FDBA4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FDBB4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30420)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088FDBDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088FDBDCu) goto L_088FDBDC;
    return;
L_088FDBDC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-15880));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088FDBF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088FDBF8u) goto L_088FDBF8;
    return;
L_088FDBF8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088FDC08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088FDC08u) goto L_088FDC08;
    return;
L_088FDC08:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088FDC14u);
    // nop
    goto L_088FD750;
L_088FDC14:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-15860));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-15856));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-15852));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088FDC48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088FDC48u) goto L_088FDC48;
    return;
L_088FDC48:
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
L_088FDC64:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30428)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FDC90;
      }
      goto L_088FDC7C;
    }
L_088FDC7C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FDC98;
      }
      goto L_088FDC90;
    }
L_088FDC90:
    ctx.set_gpr(31, 0x088FDC98u);
    // nop
    goto L_088FDD64;
L_088FDC98:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30428)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FDCB0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088FDCC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088FDCC8u) goto L_088FDCC8;
    return;
L_088FDCC8:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-12720));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(31, 0x088FDCE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088FDCE4u) goto L_088FDCE4;
    return;
L_088FDCE4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-12720));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FDD10;
      }
      goto L_088FDD08;
    }
L_088FDD08:
    ctx.set_gpr(31, 0x088FDD10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088FDD10u) goto L_088FDD10;
    return;
L_088FDD10:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FDD34;
      }
      goto L_088FDD20;
    }
L_088FDD20:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088FDD2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x088FDD2Cu) goto L_088FDD2C;
    return;
L_088FDD2C:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_088FDD34;
L_088FDD34:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FDD4C;
      }
      goto L_088FDD3C;
    }
L_088FDD3C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x088FDD4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x088FDD4Cu) goto L_088FDD4C;
    return;
L_088FDD4C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FDD64:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2192u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-8820));
    ctx.set_gpr(31, 0x088FDD7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088FDD7Cu) goto L_088FDD7C;
    return;
L_088FDD7C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FDD8C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088FDD9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088FDD9Cu) goto L_088FDD9C;
    return;
L_088FDD9C:
    ctx.set_gpr(2, 2192u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-8664));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15848));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(30428));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2192u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-8696));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-15840));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(11, 2192u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-9040));
    ctx.set_gpr(31, 0x088FDDF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088FDDF8u) goto L_088FDDF8;
    return;
L_088FDDF8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FDE08:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088FDE18u);
    // nop
    goto L_088FDC64;
L_088FDE18:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FDE28:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30428)));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30428)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088FDE5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088FDE5Cu) goto L_088FDE5C;
    return;
L_088FDE5C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-15824));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088FDE78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088FDE78u) goto L_088FDE78;
    return;
L_088FDE78:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088FDE88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088FDE88u) goto L_088FDE88;
    return;
L_088FDE88:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088FDE9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088FDE9Cu) goto L_088FDE9C;
    return;
L_088FDE9C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088FDEA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0059_entry, 59u, 298u, 0x088F1964u>(ctx, &aot_mem) && ctx.pc == 0x088FDEA8u) goto L_088FDEA8;
    return;
L_088FDEA8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-15816));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-15808));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-15800));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088FDEDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088FDEDCu) goto L_088FDEDC;
    return;
L_088FDEDC:
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
L_088FDEF8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30440)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FDF24;
      }
      goto L_088FDF10;
    }
L_088FDF10:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FDF2C;
      }
      goto L_088FDF24;
    }
L_088FDF24:
    ctx.set_gpr(31, 0x088FDF2Cu);
    // nop
    goto L_088FDFC0;
L_088FDF2C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30440)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FDF44:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088FDF5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088FDF5Cu) goto L_088FDF5C;
    return;
L_088FDF5C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-11572));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088FDF78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088FDF78u) goto L_088FDF78;
    return;
L_088FDF78:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-12720));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(31, 0x088FDF9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x088FDF9Cu) goto L_088FDF9C;
    return;
L_088FDF9C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x088FDFA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 764u, 0x08853094u>(ctx, &aot_mem) && ctx.pc == 0x088FDFA8u) goto L_088FDFA8;
    return;
L_088FDFA8:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FDFC0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2192u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-8216));
    ctx.set_gpr(31, 0x088FDFD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088FDFD8u) goto L_088FDFD8;
    return;
L_088FDFD8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FDFE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088FDFF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088FDFF8u) goto L_088FDFF8;
    return;
L_088FDFF8:
    ctx.set_gpr(2, 2192u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-8052));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(30440));
    ctx.set_gpr(6, 2192u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8820));
    ctx.set_gpr(7, 2192u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-8068));
    ctx.set_gpr(8, 2192u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-8100));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-15792));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(100));
    ctx.set_gpr(11, 2192u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-8380));
    ctx.set_gpr(31, 0x088FE04Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088FE04Cu) goto L_088FE04C;
    return;
L_088FE04C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FE05C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088FE06Cu);
    // nop
    goto L_088FDEF8;
L_088FE06C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FE07C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30428)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FE08C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30440)));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30440)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088FE0BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088FE0BCu) goto L_088FE0BC;
    return;
L_088FE0BC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-15780));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(31, 0x088FE0D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088FE0D8u) goto L_088FE0D8;
    return;
L_088FE0D8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088FE0E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088FE0E8u) goto L_088FE0E8;
    return;
L_088FE0E8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(52));
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088FE104u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088FE104u) goto L_088FE104;
    return;
L_088FE104:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088FE118u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088FE118u) goto L_088FE118;
    return;
L_088FE118:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088FE134u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088FE134u) goto L_088FE134;
    return;
L_088FE134:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088FE148u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088FE148u) goto L_088FE148;
    return;
L_088FE148:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088FE164u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088FE164u) goto L_088FE164;
    return;
L_088FE164:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088FE178u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088FE178u) goto L_088FE178;
    return;
L_088FE178:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088FE194u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088FE194u) goto L_088FE194;
    return;
L_088FE194:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088FE1A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088FE1A8u) goto L_088FE1A8;
    return;
L_088FE1A8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-15580));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-15544));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-15508));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088FE1DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088FE1DCu) goto L_088FE1DC;
    return;
L_088FE1DC:
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
L_088FE1F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30480)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FE220;
      }
      goto L_088FE20C;
    }
L_088FE20C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FE228;
      }
      goto L_088FE220;
    }
L_088FE220:
    ctx.set_gpr(31, 0x088FE228u);
    // nop
    goto L_088FE300;
L_088FE228:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30480)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FE240:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x088FE258u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088FE258u) goto L_088FE258;
    return;
L_088FE258:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-13464));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.set_gpr(31, 0x088FE27Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088FE27Cu) goto L_088FE27C;
    return;
L_088FE27C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-13464));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FE2A8;
      }
      goto L_088FE2A0;
    }
L_088FE2A0:
    ctx.set_gpr(31, 0x088FE2A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088FE2A8u) goto L_088FE2A8;
    return;
L_088FE2A8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FE2BC;
      }
      goto L_088FE2B4;
    }
L_088FE2B4:
    ctx.set_gpr(31, 0x088FE2BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088FE2BCu) goto L_088FE2BC;
    return;
L_088FE2BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FE2D0;
      }
      goto L_088FE2C8;
    }
L_088FE2C8:
    ctx.set_gpr(31, 0x088FE2D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088FE2D0u) goto L_088FE2D0;
    return;
L_088FE2D0:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-6764));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x088FE2E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x088FE2E8u) goto L_088FE2E8;
    return;
L_088FE2E8:
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
L_088FE300:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2192u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-7384));
    ctx.set_gpr(31, 0x088FE318u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088FE318u) goto L_088FE318;
    return;
L_088FE318:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FE328:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088FE338u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088FE338u) goto L_088FE338;
    return;
L_088FE338:
    ctx.set_gpr(2, 2192u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-7244));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15472));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(30480));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-17556));
    ctx.set_gpr(7, 2192u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-7260));
    ctx.set_gpr(8, 2191u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-17208));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-15460));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(44));
    ctx.set_gpr(11, 2192u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-7616));
    ctx.set_gpr(31, 0x088FE394u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088FE394u) goto L_088FE394;
    return;
L_088FE394:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FE3A4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28748)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FE3B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30480)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088FE3DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088FE3DCu) goto L_088FE3DC;
    return;
L_088FE3DC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-15444));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(31, 0x088FE3F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088FE3F8u) goto L_088FE3F8;
    return;
L_088FE3F8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088FE408u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088FE408u) goto L_088FE408;
    return;
L_088FE408:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088FE414u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 389u, 0x088E9D38u>(ctx, &aot_mem) && ctx.pc == 0x088FE414u) goto L_088FE414;
    return;
L_088FE414:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088FE430u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088FE430u) goto L_088FE430;
    return;
L_088FE430:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088FE43Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 389u, 0x088E9D38u>(ctx, &aot_mem) && ctx.pc == 0x088FE43Cu) goto L_088FE43C;
    return;
L_088FE43C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088FE458u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088FE458u) goto L_088FE458;
    return;
L_088FE458:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088FE464u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 114u, 0x088F8A48u>(ctx, &aot_mem) && ctx.pc == 0x088FE464u) goto L_088FE464;
    return;
L_088FE464:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088FE480u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088FE480u) goto L_088FE480;
    return;
L_088FE480:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(512));
    ctx.set_gpr(31, 0x088FE490u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x088FE490u) goto L_088FE490;
    return;
L_088FE490:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-15340));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-15312));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-15284));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088FE4B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088FE4B8u) goto L_088FE4B8;
    return;
L_088FE4B8:
    ctx.set_gpr(4, 2191u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-17436));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30480)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
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
L_088FE4E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30512)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FE514;
      }
      goto L_088FE500;
    }
L_088FE500:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FE51C;
      }
      goto L_088FE514;
    }
L_088FE514:
    ctx.set_gpr(31, 0x088FE51Cu);
    // nop
    goto L_088FE5A8;
L_088FE51C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30512)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FE534:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088FE54Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088FE54Cu) goto L_088FE54C;
    return;
L_088FE54C:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-12828));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.set_gpr(31, 0x088FE564u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088FE564u) goto L_088FE564;
    return;
L_088FE564:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-12828));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FE590;
      }
      goto L_088FE588;
    }
L_088FE588:
    ctx.set_gpr(31, 0x088FE590u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088FE590u) goto L_088FE590;
    return;
L_088FE590:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FE5A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2192u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-6704));
    ctx.set_gpr(31, 0x088FE5C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088FE5C0u) goto L_088FE5C0;
    return;
L_088FE5C0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FE5D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088FE5E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 154u, 0x088D49C4u>(ctx, &aot_mem) && ctx.pc == 0x088FE5E0u) goto L_088FE5E0;
    return;
L_088FE5E0:
    ctx.set_gpr(2, 2192u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-6564));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15256));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(30512));
    ctx.set_gpr(6, 2192u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-19500));
    ctx.set_gpr(7, 2192u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-6580));
    ctx.set_gpr(8, 2192u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-19208));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-15248));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(11, 2192u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-6860));
    ctx.set_gpr(31, 0x088FE63Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088FE63Cu) goto L_088FE63C;
    return;
L_088FE63C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FE64C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30224)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FE65C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30512)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088FE684u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088FE684u) goto L_088FE684;
    return;
L_088FE684:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-15232));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088FE6A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088FE6A0u) goto L_088FE6A0;
    return;
L_088FE6A0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088FE6B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088FE6B0u) goto L_088FE6B0;
    return;
L_088FE6B0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088FE6BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 566u, 0x088E6F08u>(ctx, &aot_mem) && ctx.pc == 0x088FE6BCu) goto L_088FE6BC;
    return;
L_088FE6BC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-15216));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-15208));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-15200));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088FE6F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088FE6F8u) goto L_088FE6F8;
    return;
L_088FE6F8:
    ctx.set_gpr(4, 2192u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-19388));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30512)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
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
L_088FE728:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(216)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088FE9EC;
      }
      goto L_088FE754;
    }
L_088FE754:
    ctx.set_gpr(31, 0x088FE75Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088FE75Cu) goto L_088FE75C;
    return;
L_088FE75C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FE9EC;
      }
      goto L_088FE768;
    }
L_088FE768:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(212)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FE7C8;
      }
      goto L_088FE774;
    }
L_088FE774:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(212));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088FE784u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x088FE784u) goto L_088FE784;
    return;
L_088FE784:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(480)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FE79Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FE79Cu) goto L_088FE79C;
    return;
L_088FE79C:
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(220), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, 0u | 65535u);
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088FE7BC;
      }
      goto L_088FE7B0;
    }
L_088FE7B0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x088FE7BCu);
    // nop
    goto L_088FEC40;
L_088FE7BC:
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FE9F0;
      }
      goto L_088FE7C8;
    }
L_088FE7C8:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088FE814;
      }
      goto L_088FE7D0;
    }
L_088FE7D0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, 0u | 65535u);
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088FE808;
      }
      goto L_088FE7E0;
    }
L_088FE7E0:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(480)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FE7F8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FE7F8u) goto L_088FE7F8;
    return;
L_088FE7F8:
    rt.memory().aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(220), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x088FE808u);
    // nop
    goto L_088FEC40;
L_088FE808:
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FE9F0;
      }
      goto L_088FE814;
    }
L_088FE814:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(224)));
    ctx.set_gpr(16, ctx.gpr[17] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FE84C;
      }
      goto L_088FE824;
    }
L_088FE824:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088FE844;
      }
      goto L_088FE82C;
    }
L_088FE82C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(212)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088FE844;
      }
      goto L_088FE838;
    }
L_088FE838:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FE9F0;
      }
      goto L_088FE844;
    }
L_088FE844:
    ctx.set_gpr(16, ctx.gpr[17] + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(228)));
    goto L_088FE84C;
L_088FE84C:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FE824;
      }
      goto L_088FE854;
    }
L_088FE854:
    ctx.set_gpr(31, 0x088FE85Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 214u, 0x0893CDBCu>(ctx, &aot_mem) && ctx.pc == 0x088FE85Cu) goto L_088FE85C;
    return;
L_088FE85C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088FE868u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088FE868u) goto L_088FE868;
    return;
L_088FE868:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088FE874u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 410u, 0x088E6228u>(ctx, &aot_mem) && ctx.pc == 0x088FE874u) goto L_088FE874;
    return;
L_088FE874:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FE88Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FE88Cu) goto L_088FE88C;
    return;
L_088FE88C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(468)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FE8A4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FE8A4u) goto L_088FE8A4;
    return;
L_088FE8A4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(216)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(216), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(212));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088FE8BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x088FE8BCu) goto L_088FE8BC;
    return;
L_088FE8BC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FE8E4;
      }
      goto L_088FE8D8;
    }
L_088FE8D8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088FE8E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088FE8E4u) goto L_088FE8E4;
    return;
L_088FE8E4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(480)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FE8FCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FE8FCu) goto L_088FE8FC;
    return;
L_088FE8FC:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(220), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(224)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FE91C;
      }
      goto L_088FE90C;
    }
L_088FE90C:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(224), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(228), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FE928;
      }
      goto L_088FE91C;
    }
L_088FE91C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FE928;
      }
      goto L_088FE924;
    }
L_088FE924:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(228), ctx.gpr[17]);
    goto L_088FE928;
L_088FE928:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(224)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(224), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088FE93Cu);
    // nop
    goto L_088FEC40;
L_088FE93C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(260)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FE950u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FE950u) goto L_088FE950;
    return;
L_088FE950:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(156)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(156), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(164)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(164), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(168)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(168), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(172)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(172), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(180)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(180), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(184)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(184), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(188)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(188), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(196)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(196), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(200)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(200), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(160)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(160), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(176)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(176), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(192)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(192), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(204)));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(205)));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(205), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FE9E0;
      }
      goto L_088FE9CC;
    }
L_088FE9CC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(452)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FE9E0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FE9E0u) goto L_088FE9E0;
    return;
L_088FE9E0:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FE9F0;
      }
      goto L_088FE9EC;
    }
L_088FE9EC:
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
    goto L_088FE9F0;
L_088FE9F0:
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
L_088FEA10:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088FEA48;
      }
      goto L_088FEA3C;
    }
L_088FEA3C:
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FEC20;
      }
      goto L_088FEA48;
    }
L_088FEA48:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(224)));
    ctx.set_gpr(16, ctx.gpr[17] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FEA80;
      }
      goto L_088FEA58;
    }
L_088FEA58:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088FEA78;
      }
      goto L_088FEA60;
    }
L_088FEA60:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(212)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088FEA78;
      }
      goto L_088FEA6C;
    }
L_088FEA6C:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FEC20;
      }
      goto L_088FEA78;
    }
L_088FEA78:
    ctx.set_gpr(16, ctx.gpr[17] + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(228)));
    goto L_088FEA80;
L_088FEA80:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FEA58;
      }
      goto L_088FEA88;
    }
L_088FEA88:
    ctx.set_gpr(31, 0x088FEA90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 214u, 0x0893CDBCu>(ctx, &aot_mem) && ctx.pc == 0x088FEA90u) goto L_088FEA90;
    return;
L_088FEA90:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088FEA9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088FEA9Cu) goto L_088FEA9C;
    return;
L_088FEA9C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088FEAA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 410u, 0x088E6228u>(ctx, &aot_mem) && ctx.pc == 0x088FEAA8u) goto L_088FEAA8;
    return;
L_088FEAA8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FEAC0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FEAC0u) goto L_088FEAC0;
    return;
L_088FEAC0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(468)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FEAD8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FEAD8u) goto L_088FEAD8;
    return;
L_088FEAD8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(216)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(216), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(212));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088FEAF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x088FEAF0u) goto L_088FEAF0;
    return;
L_088FEAF0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FEB18;
      }
      goto L_088FEB0C;
    }
L_088FEB0C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088FEB18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x088FEB18u) goto L_088FEB18;
    return;
L_088FEB18:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(480)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FEB30u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FEB30u) goto L_088FEB30;
    return;
L_088FEB30:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(220), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(224)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FEB50;
      }
      goto L_088FEB40;
    }
L_088FEB40:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(224), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(228), ctx.gpr[17]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FEB5C;
      }
      goto L_088FEB50;
    }
L_088FEB50:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FEB5C;
      }
      goto L_088FEB58;
    }
L_088FEB58:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(228), ctx.gpr[17]);
    goto L_088FEB5C;
L_088FEB5C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(224)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(224), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088FEB70u);
    // nop
    goto L_088FEC40;
L_088FEB70:
    ctx.set_gpr(31, 0x088FEB78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 502u, 0x0892E2C8u>(ctx, &aot_mem) && ctx.pc == 0x088FEB78u) goto L_088FEB78;
    return;
L_088FEB78:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(260)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FEB8Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FEB8Cu) goto L_088FEB8C;
    return;
L_088FEB8C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(156)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(156), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(164)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(164), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(168)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(168), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(172)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(172), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(180)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(180), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(184)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(184), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(188)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(188), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(196)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(196), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(200)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(200), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(160)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(160), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(176)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(176), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(192)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(192), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(204)));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(205)));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(205), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(152)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FEC1C;
      }
      goto L_088FEC08;
    }
L_088FEC08:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(452)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FEC1Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FEC1Cu) goto L_088FEC1C;
    return;
L_088FEC1C:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    goto L_088FEC20;
L_088FEC20:
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
L_088FEC40:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28220)));
    ctx.set_gpr(31, 0x088FEC6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x088FEC6Cu) goto L_088FEC6C;
    return;
L_088FEC6C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FECBC;
      }
      goto L_088FEC74;
    }
L_088FEC74:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, 0u | 65535u);
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088FEC90;
      }
      goto L_088FEC84;
    }
L_088FEC84:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088FEC90u);
    // nop
    goto L_088FEC40;
L_088FEC90:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, 0u | 65535u);
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088FECAC;
      }
      goto L_088FECA0;
    }
L_088FECA0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FECE0;
      }
      goto L_088FECAC;
    }
L_088FECAC:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FECE0;
      }
      goto L_088FECBC;
    }
L_088FECBC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(220)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FECD8;
      }
      goto L_088FECC8;
    }
L_088FECC8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8192));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FECE0;
      }
      goto L_088FECD8;
    }
L_088FECD8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16384));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    goto L_088FECE0;
L_088FECE0:
    ctx.set_gpr(31, 0x088FECE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 502u, 0x0892E2C8u>(ctx, &aot_mem) && ctx.pc == 0x088FECE8u) goto L_088FECE8;
    return;
L_088FECE8:
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
L_088FED00:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FED88;
      }
      goto L_088FED0C;
    }
L_088FED0C:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088FED84;
      }
      goto L_088FED14;
    }
L_088FED14:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(156)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(156), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(164)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(164), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(168)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(168), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(172)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(172), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(180)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(180), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(184), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(188), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(196)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(196), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(200), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(160)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(160), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(176), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(192)));
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(192), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(204)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(204), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(205)));
    rt.memory().aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(205), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_088FED84;
L_088FED84:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(228)));
    goto L_088FED88;
L_088FED88:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088FED0C;
      }
      goto L_088FED90;
    }
L_088FED90:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FED98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088FEDA8u);
    // nop
    goto L_088FE728;
L_088FEDA8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FEDBC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(224)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088FEDE8;
      }
      goto L_088FEDE0;
    }
L_088FEDE0:
    ctx.set_gpr(31, 0x088FEDE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 217u, 0x089013F0u>(ctx, &aot_mem) && ctx.pc == 0x088FEDE8u) goto L_088FEDE8;
    return;
L_088FEDE8:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(212));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088FEDF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x088FEDF8u) goto L_088FEDF8;
    return;
L_088FEDF8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(216), ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FEE38;
      }
      goto L_088FEE08;
    }
L_088FEE08:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(480)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FEE20u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FEE20u) goto L_088FEE20;
    return;
L_088FEE20:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(220), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088FEE30u);
    // nop
    goto L_088FEC40;
L_088FEE30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088FEE3C;
      }
      goto L_088FEE38;
    }
L_088FEE38:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(220), static_cast<std::uint8_t>(0u));
    goto L_088FEE3C;
L_088FEE3C:
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
L_088FEE54:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(216)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FEE60:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(216)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088FEEAC;
      }
      goto L_088FEE84;
    }
L_088FEE84:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(224)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088FEE98;
      }
      goto L_088FEE90;
    }
L_088FEE90:
    ctx.set_gpr(31, 0x088FEE98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 217u, 0x089013F0u>(ctx, &aot_mem) && ctx.pc == 0x088FEE98u) goto L_088FEE98;
    return;
L_088FEE98:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(212));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088FEEA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x088FEEA8u) goto L_088FEEA8;
    return;
L_088FEEA8:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(216), ctx.gpr[16]);
    goto L_088FEEAC;
L_088FEEAC:
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
L_088FEEC4:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FEED0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088FEF28;
      }
      goto L_088FEEEC;
    }
L_088FEEEC:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FEF00u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FEF00u) goto L_088FEF00;
    return;
L_088FEF00:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FEF14u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FEF14u) goto L_088FEF14;
    return;
L_088FEF14:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15092));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088FEF28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x088FEF28u) goto L_088FEF28;
    return;
L_088FEF28:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FEF40:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FEF4C:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FEF58:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-224));
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
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_gpr(22, ctx.gpr[9] + 0u);
    ctx.set_gpr(23, ctx.gpr[10] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    ctx.set_gpr(2, ctx.gpr[23] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(8, ctx.gpr[20] + 0u);
    ctx.set_gpr(9, ctx.gpr[19] + 0u);
    ctx.set_gpr(10, ctx.gpr[18] + 0u);
    ctx.set_gpr(11, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(528)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FEFD8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FEFD8u) goto L_088FEFD8;
    return;
L_088FEFD8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FF0A4;
      }
      goto L_088FEFE4;
    }
L_088FEFE4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(448)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FEFF8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FEFF8u) goto L_088FEFF8;
    return;
L_088FEFF8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FF0A4;
      }
      goto L_088FF000;
    }
L_088FF000:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088FF00Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 442u, 0x08929F30u>(ctx, &aot_mem) && ctx.pc == 0x088FF00Cu) goto L_088FF00C;
    return;
L_088FF00C:
    ctx.set_gpr(30, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(300)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FF024u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FF024u) goto L_088FF024;
    return;
L_088FF024:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FF03Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FF03Cu) goto L_088FF03C;
    return;
L_088FF03C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[30] + 0u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(9, ctx.gpr[19] + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x088FF074u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 1009u, 0x0891BF54u>(ctx, &aot_mem) && ctx.pc == 0x088FF074u) goto L_088FF074;
    return;
L_088FF074:
    ctx.set_gpr(7, ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FF094u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FF094u) goto L_088FF094;
    return;
L_088FF094:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088FF0A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 4u, 0x0891C0CCu>(ctx, &aot_mem) && ctx.pc == 0x088FF0A4u) goto L_088FF0A4;
    return;
L_088FF0A4:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FF0DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(524)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FF100u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FF100u) goto L_088FF100;
    return;
L_088FF100:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FF110:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-224));
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
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    ctx.set_gpr(18, ctx.gpr[8] + 0u);
    ctx.set_gpr(17, ctx.gpr[9] + 0u);
    ctx.set_gpr(22, ctx.gpr[10] + 0u);
    ctx.set_gpr(23, ctx.gpr[11] + 0u);
    ctx.set_gpr(30, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    ctx.set_gpr(2, ctx.gpr[23] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[30] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(8, ctx.gpr[20] + 0u);
    ctx.set_gpr(9, ctx.gpr[19] + 0u);
    ctx.set_gpr(10, ctx.gpr[18] + 0u);
    ctx.set_gpr(11, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(528)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FF194u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FF194u) goto L_088FF194;
    return;
L_088FF194:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FF250;
      }
      goto L_088FF1A0;
    }
L_088FF1A0:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(448)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FF1B4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FF1B4u) goto L_088FF1B4;
    return;
L_088FF1B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FF250;
      }
      goto L_088FF1BC;
    }
L_088FF1BC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(300)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FF1D0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FF1D0u) goto L_088FF1D0;
    return;
L_088FF1D0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FF1E8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FF1E8u) goto L_088FF1E8;
    return;
L_088FF1E8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[30] + 0u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(9, ctx.gpr[19] + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x088FF220u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 1009u, 0x0891BF54u>(ctx, &aot_mem) && ctx.pc == 0x088FF220u) goto L_088FF220;
    return;
L_088FF220:
    ctx.set_gpr(7, ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FF240u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FF240u) goto L_088FF240;
    return;
L_088FF240:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088FF250u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 4u, 0x0891C0CCu>(ctx, &aot_mem) && ctx.pc == 0x088FF250u) goto L_088FF250;
    return;
L_088FF250:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FF288:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(524)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FF2B0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FF2B0u) goto L_088FF2B0;
    return;
L_088FF2B0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FF2C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-224));
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
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    ctx.set_gpr(18, ctx.gpr[8] + 0u);
    ctx.set_gpr(17, ctx.gpr[9] + 0u);
    ctx.set_gpr(22, ctx.gpr[10] + 0u);
    ctx.set_gpr(23, ctx.gpr[11] + 0u);
    ctx.set_gpr(30, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[30] + 0u);
    ctx.set_gpr(7, ctx.gpr[20] + 0u);
    ctx.set_gpr(8, ctx.gpr[19] + 0u);
    ctx.set_gpr(9, ctx.gpr[18] + 0u);
    ctx.set_gpr(10, ctx.gpr[17] + 0u);
    ctx.set_gpr(11, ctx.gpr[22] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(528)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FF348u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FF348u) goto L_088FF348;
    return;
L_088FF348:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FF3F0;
      }
      goto L_088FF354;
    }
L_088FF354:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(448)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FF368u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FF368u) goto L_088FF368;
    return;
L_088FF368:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FF3F0;
      }
      goto L_088FF370;
    }
L_088FF370:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FF384u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FF384u) goto L_088FF384;
    return;
L_088FF384:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[30] + 0u);
    ctx.set_gpr(8, ctx.gpr[20] + 0u);
    ctx.set_gpr(9, ctx.gpr[18] + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x088FF3BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 1009u, 0x0891BF54u>(ctx, &aot_mem) && ctx.pc == 0x088FF3BCu) goto L_088FF3BC;
    return;
L_088FF3BC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FF3E0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FF3E0u) goto L_088FF3E0;
    return;
L_088FF3E0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088FF3F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 4u, 0x0891C0CCu>(ctx, &aot_mem) && ctx.pc == 0x088FF3F0u) goto L_088FF3F0;
    return;
L_088FF3F0:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FF428:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(17, ctx.lo);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(524)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FF45Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FF45Cu) goto L_088FF45C;
    return;
L_088FF45C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FF484;
      }
      goto L_088FF468;
    }
L_088FF468:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FF484;
      }
      goto L_088FF470;
    }
L_088FF470:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088FF484u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x088FF484u) goto L_088FF484;
    return;
L_088FF484:
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
L_088FF4A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-224));
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
    ctx.set_gpr(18, ctx.gpr[9] + 0u);
    ctx.set_gpr(22, ctx.gpr[10] + 0u);
    ctx.set_gpr(23, ctx.gpr[11] + 0u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(16, ctx.lo);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(8, ctx.gpr[20] + 0u);
    ctx.set_gpr(9, ctx.gpr[19] + 0u);
    ctx.set_gpr(10, ctx.gpr[18] + 0u);
    ctx.set_gpr(11, ctx.gpr[22] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(528)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FF528u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FF528u) goto L_088FF528;
    return;
L_088FF528:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FF550;
      }
      goto L_088FF534;
    }
L_088FF534:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FF550;
      }
      goto L_088FF53C;
    }
L_088FF53C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088FF550u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x088FF550u) goto L_088FF550;
    return;
L_088FF550:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FF60C;
      }
      goto L_088FF558;
    }
L_088FF558:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(448)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FF56Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FF56Cu) goto L_088FF56C;
    return;
L_088FF56C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FF60C;
      }
      goto L_088FF574;
    }
L_088FF574:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(300)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FF588u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FF588u) goto L_088FF588;
    return;
L_088FF588:
    ctx.set_gpr(30, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FF5A0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FF5A0u) goto L_088FF5A0;
    return;
L_088FF5A0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(8, ctx.gpr[30] + 0u);
    ctx.set_gpr(9, ctx.gpr[19] + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x088FF5D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 1009u, 0x0891BF54u>(ctx, &aot_mem) && ctx.pc == 0x088FF5D8u) goto L_088FF5D8;
    return;
L_088FF5D8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FF5FCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FF5FCu) goto L_088FF5FC;
    return;
L_088FF5FC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088FF60Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 4u, 0x0891C0CCu>(ctx, &aot_mem) && ctx.pc == 0x088FF60Cu) goto L_088FF60C;
    return;
L_088FF60C:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FF644:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(17, ctx.lo);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(524)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FF674u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FF674u) goto L_088FF674;
    return;
L_088FF674:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FF69C;
      }
      goto L_088FF680;
    }
L_088FF680:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FF69C;
      }
      goto L_088FF688;
    }
L_088FF688:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088FF69Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x088FF69Cu) goto L_088FF69C;
    return;
L_088FF69C:
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
L_088FF6B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[7] + 0u);
    ctx.set_gpr(19, ctx.gpr[8] + 0u);
    ctx.set_gpr(18, ctx.gpr[9] + 0u);
    ctx.set_gpr(22, ctx.gpr[10] + 0u);
    ctx.set_gpr(23, ctx.gpr[11] + 0u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(16, ctx.lo);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(528)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FF72Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FF72Cu) goto L_088FF72C;
    return;
L_088FF72C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FF754;
      }
      goto L_088FF738;
    }
L_088FF738:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FF754;
      }
      goto L_088FF740;
    }
L_088FF740:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088FF754u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x088FF754u) goto L_088FF754;
    return;
L_088FF754:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FF7FC;
      }
      goto L_088FF75C;
    }
L_088FF75C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(448)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FF770u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FF770u) goto L_088FF770;
    return;
L_088FF770:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FF7FC;
      }
      goto L_088FF778;
    }
L_088FF778:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FF78Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FF78Cu) goto L_088FF78C;
    return;
L_088FF78C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(8, ctx.gpr[20] + 0u);
    ctx.set_gpr(9, ctx.gpr[18] + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x088FF7C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 1009u, 0x0891BF54u>(ctx, &aot_mem) && ctx.pc == 0x088FF7C8u) goto L_088FF7C8;
    return;
L_088FF7C8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FF7ECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FF7ECu) goto L_088FF7EC;
    return;
L_088FF7EC:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088FF7FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 4u, 0x0891C0CCu>(ctx, &aot_mem) && ctx.pc == 0x088FF7FCu) goto L_088FF7FC;
    return;
L_088FF7FC:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FF830:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(524)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FF84Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FF84Cu) goto L_088FF84C;
    return;
L_088FF84C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FF85C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-368));
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
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(23, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    ctx.set_gpr(18, ctx.gpr[8] + 0u);
    ctx.set_gpr(17, ctx.gpr[9] + 0u);
    ctx.set_gpr(16, ctx.gpr[10] + 0u);
    ctx.set_gpr(22, ctx.gpr[11] + 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FF970;
      }
      goto L_088FF8B0;
    }
L_088FF8B0:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(448)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FF8C0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FF8C0u) goto L_088FF8C0;
    return;
L_088FF8C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FF970;
      }
      goto L_088FF8C8;
    }
L_088FF8C8:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x088FF8D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 442u, 0x08929F30u>(ctx, &aot_mem) && ctx.pc == 0x088FF8D4u) goto L_088FF8D4;
    return;
L_088FF8D4:
    ctx.set_gpr(30, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(300)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FF8ECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FF8ECu) goto L_088FF8EC;
    return;
L_088FF8EC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FF904u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FF904u) goto L_088FF904;
    return;
L_088FF904:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[30] + 0u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(9, ctx.gpr[18] + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x088FF93Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 1009u, 0x0891BF54u>(ctx, &aot_mem) && ctx.pc == 0x088FF93Cu) goto L_088FF93C;
    return;
L_088FF93C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FF960u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FF960u) goto L_088FF960;
    return;
L_088FF960:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088FF970u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 4u, 0x0891C0CCu>(ctx, &aot_mem) && ctx.pc == 0x088FF970u) goto L_088FF970;
    return;
L_088FF970:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[23] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(8, ctx.gpr[19] + 0u);
    ctx.set_gpr(9, ctx.gpr[18] + 0u);
    ctx.set_gpr(10, ctx.gpr[17] + 0u);
    ctx.set_gpr(11, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(528)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FF9B0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FF9B0u) goto L_088FF9B0;
    return;
L_088FF9B0:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FFA70;
      }
      goto L_088FF9BC;
    }
L_088FF9BC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(448)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FF9D0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FF9D0u) goto L_088FF9D0;
    return;
L_088FF9D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FFA70;
      }
      goto L_088FF9D8;
    }
L_088FF9D8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(300)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FF9ECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FF9ECu) goto L_088FF9EC;
    return;
L_088FF9EC:
    ctx.set_gpr(30, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FFA04u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FFA04u) goto L_088FFA04;
    return;
L_088FFA04:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[23] + 0u);
    ctx.set_gpr(8, ctx.gpr[30] + 0u);
    ctx.set_gpr(9, ctx.gpr[18] + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x088FFA3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 1009u, 0x0891BF54u>(ctx, &aot_mem) && ctx.pc == 0x088FFA3Cu) goto L_088FFA3C;
    return;
L_088FFA3C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FFA60u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FFA60u) goto L_088FFA60;
    return;
L_088FFA60:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088FFA70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 4u, 0x0891C0CCu>(ctx, &aot_mem) && ctx.pc == 0x088FFA70u) goto L_088FFA70;
    return;
L_088FFA70:
    ctx.set_gpr(2, ctx.gpr[20] + 0u);
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(368));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FFAA8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(524)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FFAC0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FFAC0u) goto L_088FFAC0;
    return;
L_088FFAC0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FFAD0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-368));
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
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(22, ctx.gpr[6] + 0u);
    ctx.set_gpr(23, ctx.gpr[7] + 0u);
    ctx.set_gpr(19, ctx.gpr[8] + 0u);
    ctx.set_gpr(18, ctx.gpr[9] + 0u);
    ctx.set_gpr(17, ctx.gpr[10] + 0u);
    ctx.set_gpr(16, ctx.gpr[11] + 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FFBD0;
      }
      goto L_088FFB24;
    }
L_088FFB24:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(448)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FFB34u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FFB34u) goto L_088FFB34;
    return;
L_088FFB34:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FFBD0;
      }
      goto L_088FFB3C;
    }
L_088FFB3C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x088FFB48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 442u, 0x08929F30u>(ctx, &aot_mem) && ctx.pc == 0x088FFB48u) goto L_088FFB48;
    return;
L_088FFB48:
    ctx.set_gpr(30, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FFB60u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FFB60u) goto L_088FFB60;
    return;
L_088FFB60:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[30] + 0u);
    ctx.set_gpr(8, 0u + 0u);
    ctx.set_gpr(9, ctx.gpr[18] + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x088FFB9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 1009u, 0x0891BF54u>(ctx, &aot_mem) && ctx.pc == 0x088FFB9Cu) goto L_088FFB9C;
    return;
L_088FFB9C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FFBC0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FFBC0u) goto L_088FFBC0;
    return;
L_088FFBC0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(220));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088FFBD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 4u, 0x0891C0CCu>(ctx, &aot_mem) && ctx.pc == 0x088FFBD0u) goto L_088FFBD0;
    return;
L_088FFBD0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(7, ctx.gpr[23] + 0u);
    ctx.set_gpr(8, ctx.gpr[19] + 0u);
    ctx.set_gpr(9, ctx.gpr[18] + 0u);
    ctx.set_gpr(10, ctx.gpr[17] + 0u);
    ctx.set_gpr(11, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(528)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FFC14u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FFC14u) goto L_088FFC14;
    return;
L_088FFC14:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FFCC0;
      }
      goto L_088FFC20;
    }
L_088FFC20:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(448)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FFC34u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FFC34u) goto L_088FFC34;
    return;
L_088FFC34:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FFCC0;
      }
      goto L_088FFC3C;
    }
L_088FFC3C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FFC50u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FFC50u) goto L_088FFC50;
    return;
L_088FFC50:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[22] + 0u);
    ctx.set_gpr(8, ctx.gpr[23] + 0u);
    ctx.set_gpr(9, ctx.gpr[18] + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x088FFC8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 1009u, 0x0891BF54u>(ctx, &aot_mem) && ctx.pc == 0x088FFC8Cu) goto L_088FFC8C;
    return;
L_088FFC8C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FFCB0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FFCB0u) goto L_088FFCB0;
    return;
L_088FFCB0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088FFCC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 4u, 0x0891C0CCu>(ctx, &aot_mem) && ctx.pc == 0x088FFCC0u) goto L_088FFCC0;
    return;
L_088FFCC0:
    ctx.set_gpr(2, ctx.gpr[20] + 0u);
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(368));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FFCF8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-224));
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
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_gpr(22, ctx.gpr[9] + 0u);
    ctx.set_gpr(23, ctx.gpr[10] + 0u);
    ctx.set_gpr(30, ctx.gpr[11] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x088FFD50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x088FFD50u) goto L_088FFD50;
    return;
L_088FFD50:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    ctx.set_gpr(2, ctx.gpr[30] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(8, ctx.gpr[19] + 0u);
    ctx.set_gpr(9, ctx.gpr[18] + 0u);
    ctx.set_gpr(10, ctx.gpr[17] + 0u);
    ctx.set_gpr(11, ctx.gpr[22] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(528)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FFD94u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FFD94u) goto L_088FFD94;
    return;
L_088FFD94:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x088FFDA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x088FFDA8u) goto L_088FFDA8;
    return;
L_088FFDA8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FFE60;
      }
      goto L_088FFDB0;
    }
L_088FFDB0:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(448)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FFDC4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FFDC4u) goto L_088FFDC4;
    return;
L_088FFDC4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FFE60;
      }
      goto L_088FFDCC;
    }
L_088FFDCC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(300)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FFDE0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FFDE0u) goto L_088FFDE0;
    return;
L_088FFDE0:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FFDF8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FFDF8u) goto L_088FFDF8;
    return;
L_088FFDF8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(8, ctx.gpr[20] + 0u);
    ctx.set_gpr(9, ctx.gpr[18] + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x088FFE30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 1009u, 0x0891BF54u>(ctx, &aot_mem) && ctx.pc == 0x088FFE30u) goto L_088FFE30;
    return;
L_088FFE30:
    ctx.set_gpr(7, ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FFE50u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FFE50u) goto L_088FFE50;
    return;
L_088FFE50:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088FFE60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 4u, 0x0891C0CCu>(ctx, &aot_mem) && ctx.pc == 0x088FFE60u) goto L_088FFE60;
    return;
L_088FFE60:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(224));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088FFE98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-224));
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
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_gpr(22, ctx.gpr[9] + 0u);
    ctx.set_gpr(23, ctx.gpr[10] + 0u);
    ctx.set_gpr(30, ctx.gpr[11] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x088FFEF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x088FFEF0u) goto L_088FFEF0;
    return;
L_088FFEF0:
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(9, ctx.gpr[17] + 0u);
    ctx.set_gpr(10, ctx.gpr[22] + 0u);
    ctx.set_gpr(11, ctx.gpr[23] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(528)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FFF30u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FFF30u) goto L_088FFF30;
    return;
L_088FFF30:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x088FFF44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 490u, 0x0881667Cu>(ctx, &aot_mem) && ctx.pc == 0x088FFF44u) goto L_088FFF44;
    return;
L_088FFF44:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FFFF8;
      }
      goto L_088FFF4C;
    }
L_088FFF4C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(448)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FFF60u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FFF60u) goto L_088FFF60;
    return;
L_088FFF60:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088FFFF8;
      }
      goto L_088FFF68;
    }
L_088FFF68:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x088FFF74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0004_entry, 4u, 508u, 0x08816764u>(ctx, &aot_mem) && ctx.pc == 0x088FFF74u) goto L_088FFF74;
    return;
L_088FFF74:
    ctx.set_gpr(20, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FFF8Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FFF8Cu) goto L_088FFF8C;
    return;
L_088FFF8C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[20] + 0u);
    ctx.set_gpr(8, ctx.gpr[19] + 0u);
    ctx.set_gpr(9, ctx.gpr[17] + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x088FFFC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 1009u, 0x0891BF54u>(ctx, &aot_mem) && ctx.pc == 0x088FFFC4u) goto L_088FFFC4;
    return;
L_088FFFC4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.set_gpr(7, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x088FFFE8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088FFFE8u) goto L_088FFFE8;
    return;
L_088FFFE8:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088FFFF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 4u, 0x0891C0CCu>(ctx, &aot_mem) && ctx.pc == 0x088FFFF8u) goto L_088FFFF8;
    return;
L_088FFFF8:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.pc = 0x08900000u; return;
}

void recomp_unit_0062(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0062_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_62(Runtime &runtime) {
    runtime.register_generated_unit(62u, 0x088FC000u, 16384u, &recomp_unit_0062, &recomp_unit_0062_entry);
    runtime.register_function(0x088FC000u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC00Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC018u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC034u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC04Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC064u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC074u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC084u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC0E0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC0F0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC118u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC134u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC144u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC150u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC18Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC1BCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC1CCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC1DCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC1F4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC208u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC210u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC228u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC240u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC264u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC28Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC2A4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC2BCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC2ECu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC304u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC314u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC324u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC370u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC380u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC390u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC3A8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC3BCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC3C4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC3DCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC3F0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC404u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC420u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC438u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC448u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC458u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC4A4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC4B4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC4C4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC4D4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC4ECu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC500u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC508u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC520u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC538u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC55Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC584u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC59Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC5B4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC5C4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC5D4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC628u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC638u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC648u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC66Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC688u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC6B0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC6C8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC6E8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC6F4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC6FCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC70Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC714u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC71Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC730u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC738u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC748u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC760u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC778u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC78Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC794u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC7ACu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC7C4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC7CCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC7F0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC7FCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC814u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC82Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC83Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC898u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC8A8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC8B8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC8C8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC8E4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC8FCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC908u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC910u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC924u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC930u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC944u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC950u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC960u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC964u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC978u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC990u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC9A8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC9C8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC9D4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC9DCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC9ECu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC9F4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FC9FCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCA10u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCA18u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCA28u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCA40u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCA58u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCA6Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCA74u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCA8Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCAA4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCAACu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCAD0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCADCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCAF4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCB0Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCB1Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCB78u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCB88u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCBACu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCBC8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCBD8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCBF4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCC04u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCC2Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCC58u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCC70u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCC84u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCC98u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCCB0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCCC4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCCCCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCCE4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCCFCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCD10u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCD34u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCD40u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCD58u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCD70u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCD80u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCD90u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCDE4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCDF4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCE04u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCE14u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCE38u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCE54u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCE7Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCE94u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCEACu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCEC0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCEC8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCEE0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCEF8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCF0Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCF30u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCF3Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCF54u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCF6Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCF7Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCF8Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCFE0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FCFF0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD000u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD010u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD034u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD050u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD078u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD090u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD0A8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD0B0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD0BCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD0C8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD0D0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD0E8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD100u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD114u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD11Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD134u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD14Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD160u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD184u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD190u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD1A8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD1C0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD1D0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD1E0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD234u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD244u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD254u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD264u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD28Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD2A8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD2B8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD2C4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD2F0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD30Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD324u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD338u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD340u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD358u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD370u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD388u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD3ACu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD3C8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD3E0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD3F8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD408u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD418u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD46Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD47Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD48Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD49Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD4B8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD4C0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD4CCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD4E0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD4F4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD4FCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD50Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD530u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD538u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD540u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD564u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD578u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD590u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD598u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD5B0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD5BCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD5D0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD5E0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD5FCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD608u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD614u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD628u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD634u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD644u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD650u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD658u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD664u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD66Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD684u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD698u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD6A8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD6C0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD6C4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD6CCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD6E4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD6F0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD700u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD710u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD72Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD738u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD750u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD768u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD770u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD77Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD788u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD790u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD7A8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD7C0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD7D4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD7DCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD7F4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD808u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD81Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD838u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD850u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD860u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD870u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD8C4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD8D4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD8E4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD8F4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD924u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD938u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD954u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD960u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD988u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD9A4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD9B0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD9CCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD9E4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FD9F8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDA0Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDA24u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDA38u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDA40u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDA58u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDA70u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDA88u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDAACu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDAB4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDACCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDAD8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDAF0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDB08u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDB18u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDB28u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDB84u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDB94u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDBA4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDBB4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDBDCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDBF8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDC08u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDC14u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDC48u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDC64u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDC7Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDC90u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDC98u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDCB0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDCC8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDCE4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDD08u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDD10u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDD20u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDD2Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDD34u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDD3Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDD4Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDD64u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDD7Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDD8Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDD9Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDDF8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDE08u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDE18u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDE28u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDE5Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDE78u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDE88u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDE9Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDEA8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDEDCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDEF8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDF10u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDF24u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDF2Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDF44u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDF5Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDF78u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDF9Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDFA8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDFC0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDFD8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDFE8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FDFF8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE04Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE05Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE06Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE07Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE08Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE0BCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE0D8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE0E8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE104u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE118u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE134u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE148u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE164u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE178u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE194u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE1A8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE1DCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE1F4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE20Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE220u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE228u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE240u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE258u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE27Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE2A0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE2A8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE2B4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE2BCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE2C8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE2D0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE2E8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE300u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE318u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE328u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE338u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE394u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE3A4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE3B4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE3DCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE3F8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE408u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE414u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE430u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE43Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE458u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE464u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE480u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE490u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE4B8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE4E8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE500u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE514u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE51Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE534u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE54Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE564u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE588u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE590u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE5A8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE5C0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE5D0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE5E0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE63Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE64Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE65Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE684u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE6A0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE6B0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE6BCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE6F8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE728u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE754u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE75Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE768u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE774u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE784u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE79Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE7B0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE7BCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE7C8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE7D0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE7E0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE7F8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE808u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE814u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE824u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE82Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE838u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE844u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE84Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE854u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE85Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE868u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE874u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE88Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE8A4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE8BCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE8D8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE8E4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE8FCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE90Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE91Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE924u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE928u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE93Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE950u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE9CCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE9E0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE9ECu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FE9F0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEA10u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEA3Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEA48u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEA58u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEA60u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEA6Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEA78u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEA80u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEA88u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEA90u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEA9Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEAA8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEAC0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEAD8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEAF0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEB0Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEB18u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEB30u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEB40u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEB50u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEB58u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEB5Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEB70u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEB78u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEB8Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEC08u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEC1Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEC20u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEC40u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEC6Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEC74u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEC84u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEC90u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FECA0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FECACu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FECBCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FECC8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FECD8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FECE0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FECE8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FED00u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FED0Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FED14u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FED84u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FED88u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FED90u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FED98u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEDA8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEDBCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEDE0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEDE8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEDF8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEE08u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEE20u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEE30u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEE38u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEE3Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEE54u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEE60u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEE84u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEE90u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEE98u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEEA8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEEACu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEEC4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEED0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEEECu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEF00u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEF14u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEF28u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEF40u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEF4Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEF58u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEFD8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEFE4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FEFF8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF000u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF00Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF024u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF03Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF074u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF094u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF0A4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF0DCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF100u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF110u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF194u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF1A0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF1B4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF1BCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF1D0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF1E8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF220u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF240u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF250u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF288u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF2B0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF2C0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF348u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF354u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF368u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF370u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF384u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF3BCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF3E0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF3F0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF428u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF45Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF468u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF470u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF484u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF4A0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF528u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF534u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF53Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF550u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF558u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF56Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF574u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF588u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF5A0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF5D8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF5FCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF60Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF644u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF674u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF680u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF688u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF69Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF6B8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF72Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF738u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF740u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF754u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF75Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF770u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF778u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF78Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF7C8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF7ECu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF7FCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF830u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF84Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF85Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF8B0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF8C0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF8C8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF8D4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF8ECu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF904u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF93Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF960u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF970u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF9B0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF9BCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF9D0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF9D8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FF9ECu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFA04u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFA3Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFA60u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFA70u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFAA8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFAC0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFAD0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFB24u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFB34u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFB3Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFB48u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFB60u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFB9Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFBC0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFBD0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFC14u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFC20u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFC34u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFC3Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFC50u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFC8Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFCB0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFCC0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFCF8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFD50u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFD94u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFDA8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFDB0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFDC4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFDCCu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFDE0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFDF8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFE30u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFE50u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFE60u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFE98u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFEF0u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFF30u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFF44u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFF4Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFF60u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFF68u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFF74u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFF8Cu, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFFC4u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFFE8u, &recomp_unit_0062, "recomp_unit_0062");
    runtime.register_function(0x088FFFF8u, &recomp_unit_0062, "recomp_unit_0062");
}
} // namespace psprecomp
