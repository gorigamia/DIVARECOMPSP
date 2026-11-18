#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0047[4095] = {
    1, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0,
    0, 7, 0, 0, 0, 0, 0, 0, 8, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 18, 0,
    0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 22, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 24, 0, 0, 0,
    0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38,
    0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 0, 0,
    0, 44, 0, 45, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0,
    50, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0,
    0, 54, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0,
    0, 60, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 64, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 0, 0, 0, 69, 0, 70, 0, 0, 71, 0, 0, 72, 0, 73, 0, 0, 0, 0, 0, 74,
    0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0,
    0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 0, 86, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0,
    0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 99, 0, 0,
    0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 102, 0, 103, 0, 0, 104, 0, 0, 105, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0,
    0, 108, 0, 0, 0, 0, 109, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 114,
    0, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 123, 0,
    0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0,
    0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 132, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0,
    0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 149, 0, 0, 0, 0,
    0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 0, 0, 0, 0,
    156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 161,
    0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0,
    167, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0,
    0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175,
    0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0,
    0, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0,
    0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0,
    0, 0, 0, 196, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 199, 0, 0, 200, 0, 0, 201, 0, 202, 0, 0, 0, 0, 0, 203, 0,
    0, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 0, 209, 0, 0, 0, 0,
    0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0,
    0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 223, 0, 0, 0,
    0, 224, 0, 0, 0, 0, 0, 225, 0, 226, 0, 0, 227, 0, 0, 228, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0,
    0, 0, 232, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0,
    0, 238, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0,
    0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 247,
    0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0,
    0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 253, 0, 254, 0, 0, 255, 0, 0, 256, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0,
    259, 0, 0, 0, 0, 260, 0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 263, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 265, 0,
    0, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 269, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 274, 0, 0, 275, 0, 0, 276, 0, 277, 0, 0,
    0, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 0,
    284, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    293, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 295, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0,
    0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 302, 0, 303, 0, 0, 304,
    0, 0, 305, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 309, 0, 310, 0, 0, 0, 0, 0, 311, 0, 0,
    0, 0, 0, 312, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 315, 0, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0,
    317, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320,
    0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 325, 0, 0, 0,
    326, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0,
    331, 0, 0, 0, 0, 0, 0, 332, 0, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 0,
    0, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 341, 0, 0,
    0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 346, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0,
    350, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 355, 0, 0, 0, 0, 0, 356,
    0, 0, 0, 0, 0, 357, 0, 358, 0, 0, 359, 0, 0, 360, 0, 361, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0,
    364, 0, 365, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 367, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 370,
    0, 0, 0, 371, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0,
    374, 0, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 378, 0, 379, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0,
    381, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 384, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 389, 0, 0, 0, 390, 0, 0, 0, 0,
    0, 391, 0, 392, 0, 0, 393, 0, 0, 394, 0, 395, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 398, 0, 399, 0,
    0, 0, 0, 0, 400, 0, 0, 0, 0, 401, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 404, 0, 0, 0, 405,
    0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 408, 0, 0, 0,
    409, 0, 0, 0, 410, 0, 0, 0, 0, 0, 411, 0, 412, 0, 0, 413, 0, 0, 414, 0, 415, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0,
    417, 0, 0, 0, 0, 418, 0, 419, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 421, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 423, 0,
    0, 0, 0, 0, 424, 0, 0, 0, 425, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 427, 0, 0, 0, 428, 0, 0, 0, 429, 0, 0, 0, 430, 0, 0, 0, 0, 0, 431, 0, 432, 0, 0, 433, 0, 0, 434, 0, 435, 0, 0,
    0, 0, 0, 436, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 438, 0, 439, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 441, 0, 0, 0, 0,
    442, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 444, 0, 0, 0, 445, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 448, 0, 0, 0, 449, 0, 0, 0, 450, 0, 0, 0, 0, 0, 451, 0, 0, 0,
    0, 452, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 455, 0, 456, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 458,
    0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 461, 0, 0, 462, 0, 463, 0, 0, 464, 0, 465, 0, 0, 0,
    0, 0, 466, 0, 0, 0, 0, 0, 467, 0, 0, 0, 468, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 471, 0, 0, 0, 472, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474,
    0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 476, 0, 0, 477, 0, 0, 0, 0, 0, 0, 478, 0, 0, 479, 0, 0, 0, 0, 0, 0, 480, 0,
    0, 481, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 485, 0, 0,
    0, 486, 0, 0, 0, 487, 0, 0, 0, 488, 0, 0, 0, 0, 0, 489, 0, 490, 0, 0, 491, 0, 0, 492, 0, 493, 0, 0, 0, 0, 0, 494,
    0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 496, 0, 497, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 499, 0, 0, 0, 500, 0, 0, 0,
    501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 503, 0, 0, 0, 504, 0, 0, 0, 505, 0,
    0, 0, 0, 0, 506, 0, 507, 0, 0, 508, 0, 0, 509, 0, 510, 0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 513,
    0, 514, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 516, 0, 0, 0, 517, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 520, 0, 0, 0, 521, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 523, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 525, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0,
    528, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 530, 0, 0, 0, 531, 0, 0, 0, 532, 0, 0, 0, 533, 0, 0, 0, 534, 0, 0, 0, 0,
    0, 535, 0, 0, 0, 0, 536, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 538, 0, 539, 0, 0, 540, 0, 0, 541, 0, 542, 0, 0, 0, 0,
    0, 543, 0, 0, 0, 0, 0, 544, 0, 0, 0, 0, 545, 0, 546, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 548, 0, 0, 0, 0, 549, 0,
    0, 0, 0, 0, 0, 550, 0, 0, 0, 0, 0, 551, 0, 0, 0, 552, 0, 0, 0, 553, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 554, 0, 0, 0, 555, 0, 0, 0, 556, 0, 0, 0, 557, 0, 0, 0, 0, 0, 558, 0, 0, 0, 0, 559,
    0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 561, 0, 562, 0, 0, 563, 0, 0, 564, 0, 565, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0,
    567, 0, 0, 0, 0, 568, 0, 569, 0, 0, 0, 0, 0, 570, 0, 0, 0, 0, 571, 0, 0, 0, 0, 572, 0, 0, 0, 0, 0, 0, 573, 0,
    0, 0, 0, 0, 574, 0, 0, 0, 575, 0, 0, 0, 576, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 577, 0, 0, 0, 578, 0, 0, 0, 579, 0, 0, 0, 580, 0, 0, 0, 581, 0, 0, 0, 0, 0, 582, 0, 583, 0, 0, 584, 0, 0, 585,
    0, 586, 0, 0, 0, 0, 0, 587, 0, 0, 0, 0, 0, 588, 0, 0, 0, 0, 589, 0, 590, 0, 0, 0, 0, 0, 591, 0, 0, 0, 0, 592,
    0, 0, 0, 0, 593, 0, 0, 0, 0, 0, 0, 594, 0, 0, 0, 0, 0, 595, 0, 0, 0, 596, 0, 0, 0, 597, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 598, 0, 0, 0, 599, 0, 0, 0, 600, 0, 0, 0, 601, 0, 0, 0, 0, 0,
    602, 0, 0, 0, 0, 603, 0, 604, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 606, 0, 0, 0, 0, 607, 0, 0, 0, 0, 0, 0, 608, 0,
    0, 0, 0, 0, 609, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 610, 0, 0, 0, 0, 0, 611, 0, 0, 0, 612, 0, 0, 0, 613, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 614, 0, 0, 0, 615, 0, 0, 0, 616, 0, 0, 0, 617,
    0, 0, 0, 618, 0, 0, 0, 0, 0, 619, 0, 0, 0, 0, 620, 0, 0, 0, 0, 621, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 623, 0,
    624, 0, 0, 0, 0, 0, 625, 0, 0, 0, 0, 626, 0, 0, 0, 0, 627, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 629, 0, 0,
    0, 630, 0, 0, 0, 631, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 632, 0, 0, 0, 633, 0,
    0, 0, 634, 0, 0, 0, 635, 0, 0, 0, 0, 0, 0, 0, 0, 636, 0, 0, 0, 0, 0, 0, 637, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    638, 0, 0, 0, 0, 0, 639, 0, 0, 0, 0, 0, 640, 0, 0, 0, 0, 641, 0, 0, 0, 0, 642, 0, 0, 0, 0, 0, 643, 0, 0, 0,
    0, 644, 0, 645, 0, 0, 0, 0, 0, 646, 0, 0, 0, 0, 647, 0, 0, 0, 0, 648, 0, 0, 0, 0, 0, 0, 649, 0, 0, 0, 0, 0,
    650, 0, 0, 0, 651, 0, 0, 0, 652, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 653, 0, 0,
    0, 654, 0, 0, 0, 655, 0, 0, 0, 656, 0, 0, 0, 0, 0, 0, 0, 0, 0, 657, 0, 0, 0, 0, 0, 0, 658, 0, 0, 0, 659, 0,
    0, 0, 0, 0, 660, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 661, 0, 0, 0, 0, 0, 0, 662, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 663, 0, 0, 0, 664, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 665, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 666, 0, 0, 0, 0, 0, 0, 0, 0, 667, 0, 0, 0, 668,
    0, 0, 0, 0, 0, 669, 0, 0, 0, 0, 670, 0, 0, 0, 0, 0, 0, 0, 671, 0, 0, 672, 673, 0, 674, 0, 0, 0, 675, 0, 0, 0,
    0, 676, 0, 0, 0, 0, 677, 0, 0, 0, 0, 0, 678, 0, 0, 0, 0, 0, 0, 0, 0, 679, 0, 0, 0, 0, 0, 0, 0, 0, 0, 680,
    0, 0, 0, 0, 0, 0, 0, 681, 0, 0, 0, 0, 0, 0, 0, 0, 682, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 683, 0, 0, 0, 0,
    0, 0, 684, 0, 0, 685, 0, 0, 686, 0, 0, 687, 0, 0, 0, 688, 0, 0, 689, 0, 0, 0, 690, 0, 0, 691, 0, 0, 0, 692, 0, 0,
    693, 0, 0, 0, 0, 0, 694, 0, 0, 695, 0, 0, 0, 696, 0, 0, 697, 0, 0, 0, 698, 0, 0, 699, 0, 0, 0, 0, 0, 700, 0, 0,
    701, 0, 0, 0, 0, 0, 702, 0, 0, 703, 0, 0, 0, 0, 0, 704, 0, 0, 705, 0, 0, 0, 0, 0, 0, 0, 706, 0, 0, 707, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 708, 0, 0, 709, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 710,
};
void recomp_unit_0047_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088C0000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0047[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088C0000;
    case 2u: goto L_088C0008;
    case 3u: goto L_088C0018;
    case 4u: goto L_088C0040;
    case 5u: goto L_088C005C;
    case 6u: goto L_088C006C;
    case 7u: goto L_088C0084;
    case 8u: goto L_088C00A0;
    case 9u: goto L_088C00AC;
    case 10u: goto L_088C00C0;
    case 11u: goto L_088C00CC;
    case 12u: goto L_088C00E0;
    case 13u: goto L_088C00EC;
    case 14u: goto L_088C0118;
    case 15u: goto L_088C0134;
    case 16u: goto L_088C014C;
    case 17u: goto L_088C0170;
    case 18u: goto L_088C0178;
    case 19u: goto L_088C0190;
    case 20u: goto L_088C01A8;
    case 21u: goto L_088C01BC;
    case 22u: goto L_088C01C4;
    case 23u: goto L_088C01DC;
    case 24u: goto L_088C01F0;
    case 25u: goto L_088C0204;
    case 26u: goto L_088C0220;
    case 27u: goto L_088C0238;
    case 28u: goto L_088C0248;
    case 29u: goto L_088C0258;
    case 30u: goto L_088C02AC;
    case 31u: goto L_088C02BC;
    case 32u: goto L_088C02CC;
    case 33u: goto L_088C02DC;
    case 34u: goto L_088C0304;
    case 35u: goto L_088C0320;
    case 36u: goto L_088C0330;
    case 37u: goto L_088C0348;
    case 38u: goto L_088C037C;
    case 39u: goto L_088C0398;
    case 40u: goto L_088C03B0;
    case 41u: goto L_088C03C4;
    case 42u: goto L_088C03D8;
    case 43u: goto L_088C03F0;
    case 44u: goto L_088C0404;
    case 45u: goto L_088C040C;
    case 46u: goto L_088C0424;
    case 47u: goto L_088C0438;
    case 48u: goto L_088C044C;
    case 49u: goto L_088C0468;
    case 50u: goto L_088C0480;
    case 51u: goto L_088C0490;
    case 52u: goto L_088C04A0;
    case 53u: goto L_088C04F4;
    case 54u: goto L_088C0504;
    case 55u: goto L_088C0514;
    case 56u: goto L_088C0524;
    case 57u: goto L_088C0548;
    case 58u: goto L_088C0564;
    case 59u: goto L_088C0574;
    case 60u: goto L_088C0584;
    case 61u: goto L_088C0594;
    case 62u: goto L_088C05A4;
    case 63u: goto L_088C05B4;
    case 64u: goto L_088C05C4;
    case 65u: goto L_088C05D4;
    case 66u: goto L_088C05E4;
    case 67u: goto L_088C060C;
    case 68u: goto L_088C0624;
    case 69u: goto L_088C063C;
    case 70u: goto L_088C0644;
    case 71u: goto L_088C0650;
    case 72u: goto L_088C065C;
    case 73u: goto L_088C0664;
    case 74u: goto L_088C067C;
    case 75u: goto L_088C0694;
    case 76u: goto L_088C06A8;
    case 77u: goto L_088C06B0;
    case 78u: goto L_088C06C8;
    case 79u: goto L_088C06DC;
    case 80u: goto L_088C06F0;
    case 81u: goto L_088C070C;
    case 82u: goto L_088C0724;
    case 83u: goto L_088C0734;
    case 84u: goto L_088C0744;
    case 85u: goto L_088C07A0;
    case 86u: goto L_088C07B0;
    case 87u: goto L_088C07C0;
    case 88u: goto L_088C07D0;
    case 89u: goto L_088C07F8;
    case 90u: goto L_088C0814;
    case 91u: goto L_088C0824;
    case 92u: goto L_088C084C;
    case 93u: goto L_088C0868;
    case 94u: goto L_088C087C;
    case 95u: goto L_088C08A8;
    case 96u: goto L_088C08B8;
    case 97u: goto L_088C08D4;
    case 98u: goto L_088C08E4;
    case 99u: goto L_088C08F4;
    case 100u: goto L_088C0904;
    case 101u: goto L_088C0914;
    case 102u: goto L_088C092C;
    case 103u: goto L_088C0934;
    case 104u: goto L_088C0940;
    case 105u: goto L_088C094C;
    case 106u: goto L_088C0954;
    case 107u: goto L_088C096C;
    case 108u: goto L_088C0984;
    case 109u: goto L_088C0998;
    case 110u: goto L_088C09A0;
    case 111u: goto L_088C09B8;
    case 112u: goto L_088C09CC;
    case 113u: goto L_088C09E0;
    case 114u: goto L_088C09FC;
    case 115u: goto L_088C0A14;
    case 116u: goto L_088C0A24;
    case 117u: goto L_088C0A34;
    case 118u: goto L_088C0A88;
    case 119u: goto L_088C0A98;
    case 120u: goto L_088C0AA8;
    case 121u: goto L_088C0AB8;
    case 122u: goto L_088C0ADC;
    case 123u: goto L_088C0AF8;
    case 124u: goto L_088C0B08;
    case 125u: goto L_088C0B18;
    case 126u: goto L_088C0B40;
    case 127u: goto L_088C0B58;
    case 128u: goto L_088C0B70;
    case 129u: goto L_088C0B84;
    case 130u: goto L_088C0B98;
    case 131u: goto L_088C0BB0;
    case 132u: goto L_088C0BC4;
    case 133u: goto L_088C0BCC;
    case 134u: goto L_088C0BE4;
    case 135u: goto L_088C0BF8;
    case 136u: goto L_088C0C0C;
    case 137u: goto L_088C0C28;
    case 138u: goto L_088C0C40;
    case 139u: goto L_088C0C50;
    case 140u: goto L_088C0C60;
    case 141u: goto L_088C0CB4;
    case 142u: goto L_088C0CC4;
    case 143u: goto L_088C0CD4;
    case 144u: goto L_088C0CE4;
    case 145u: goto L_088C0D0C;
    case 146u: goto L_088C0D28;
    case 147u: goto L_088C0D38;
    case 148u: goto L_088C0D5C;
    case 149u: goto L_088C0D6C;
    case 150u: goto L_088C0D8C;
    case 151u: goto L_088C0D9C;
    case 152u: goto L_088C0DB0;
    case 153u: goto L_088C0DC0;
    case 154u: goto L_088C0DD4;
    case 155u: goto L_088C0DE8;
    case 156u: goto L_088C0E00;
    case 157u: goto L_088C0E2C;
    case 158u: goto L_088C0E48;
    case 159u: goto L_088C0E60;
    case 160u: goto L_088C0E74;
    case 161u: goto L_088C0E7C;
    case 162u: goto L_088C0E94;
    case 163u: goto L_088C0EA8;
    case 164u: goto L_088C0EBC;
    case 165u: goto L_088C0ED8;
    case 166u: goto L_088C0EF0;
    case 167u: goto L_088C0F00;
    case 168u: goto L_088C0F10;
    case 169u: goto L_088C0F64;
    case 170u: goto L_088C0F74;
    case 171u: goto L_088C0F84;
    case 172u: goto L_088C0F94;
    case 173u: goto L_088C0FB8;
    case 174u: goto L_088C0FD4;
    case 175u: goto L_088C0FFC;
    case 176u: goto L_088C1014;
    case 177u: goto L_088C102C;
    case 178u: goto L_088C1040;
    case 179u: goto L_088C1048;
    case 180u: goto L_088C1060;
    case 181u: goto L_088C1074;
    case 182u: goto L_088C1088;
    case 183u: goto L_088C10A4;
    case 184u: goto L_088C10BC;
    case 185u: goto L_088C10CC;
    case 186u: goto L_088C10DC;
    case 187u: goto L_088C1130;
    case 188u: goto L_088C1140;
    case 189u: goto L_088C1150;
    case 190u: goto L_088C1160;
    case 191u: goto L_088C1184;
    case 192u: goto L_088C11A0;
    case 193u: goto L_088C11C8;
    case 194u: goto L_088C11E0;
    case 195u: goto L_088C11F8;
    case 196u: goto L_088C120C;
    case 197u: goto L_088C1220;
    case 198u: goto L_088C1238;
    case 199u: goto L_088C1240;
    case 200u: goto L_088C124C;
    case 201u: goto L_088C1258;
    case 202u: goto L_088C1260;
    case 203u: goto L_088C1278;
    case 204u: goto L_088C1290;
    case 205u: goto L_088C12A4;
    case 206u: goto L_088C12AC;
    case 207u: goto L_088C12C4;
    case 208u: goto L_088C12D8;
    case 209u: goto L_088C12EC;
    case 210u: goto L_088C1308;
    case 211u: goto L_088C1320;
    case 212u: goto L_088C1330;
    case 213u: goto L_088C1340;
    case 214u: goto L_088C1394;
    case 215u: goto L_088C13A4;
    case 216u: goto L_088C13B4;
    case 217u: goto L_088C13C4;
    case 218u: goto L_088C13E8;
    case 219u: goto L_088C1404;
    case 220u: goto L_088C142C;
    case 221u: goto L_088C1444;
    case 222u: goto L_088C145C;
    case 223u: goto L_088C1470;
    case 224u: goto L_088C1484;
    case 225u: goto L_088C149C;
    case 226u: goto L_088C14A4;
    case 227u: goto L_088C14B0;
    case 228u: goto L_088C14BC;
    case 229u: goto L_088C14C4;
    case 230u: goto L_088C14DC;
    case 231u: goto L_088C14F4;
    case 232u: goto L_088C1508;
    case 233u: goto L_088C1510;
    case 234u: goto L_088C1528;
    case 235u: goto L_088C153C;
    case 236u: goto L_088C1550;
    case 237u: goto L_088C156C;
    case 238u: goto L_088C1584;
    case 239u: goto L_088C1594;
    case 240u: goto L_088C15A4;
    case 241u: goto L_088C15F8;
    case 242u: goto L_088C1608;
    case 243u: goto L_088C1618;
    case 244u: goto L_088C1628;
    case 245u: goto L_088C1650;
    case 246u: goto L_088C166C;
    case 247u: goto L_088C167C;
    case 248u: goto L_088C1688;
    case 249u: goto L_088C16AC;
    case 250u: goto L_088C16B8;
    case 251u: goto L_088C16F4;
    case 252u: goto L_088C1710;
    case 253u: goto L_088C1728;
    case 254u: goto L_088C1730;
    case 255u: goto L_088C173C;
    case 256u: goto L_088C1748;
    case 257u: goto L_088C1750;
    case 258u: goto L_088C1768;
    case 259u: goto L_088C1780;
    case 260u: goto L_088C1794;
    case 261u: goto L_088C179C;
    case 262u: goto L_088C17B4;
    case 263u: goto L_088C17C8;
    case 264u: goto L_088C17DC;
    case 265u: goto L_088C17F8;
    case 266u: goto L_088C1810;
    case 267u: goto L_088C1820;
    case 268u: goto L_088C1830;
    case 269u: goto L_088C1884;
    case 270u: goto L_088C1894;
    case 271u: goto L_088C18A4;
    case 272u: goto L_088C18B4;
    case 273u: goto L_088C18CC;
    case 274u: goto L_088C18D4;
    case 275u: goto L_088C18E0;
    case 276u: goto L_088C18EC;
    case 277u: goto L_088C18F4;
    case 278u: goto L_088C190C;
    case 279u: goto L_088C1924;
    case 280u: goto L_088C1938;
    case 281u: goto L_088C1940;
    case 282u: goto L_088C1958;
    case 283u: goto L_088C196C;
    case 284u: goto L_088C1980;
    case 285u: goto L_088C199C;
    case 286u: goto L_088C19B4;
    case 287u: goto L_088C19C4;
    case 288u: goto L_088C19D4;
    case 289u: goto L_088C1A28;
    case 290u: goto L_088C1A38;
    case 291u: goto L_088C1A48;
    case 292u: goto L_088C1A58;
    case 293u: goto L_088C1A80;
    case 294u: goto L_088C1A9C;
    case 295u: goto L_088C1AAC;
    case 296u: goto L_088C1AB8;
    case 297u: goto L_088C1AF4;
    case 298u: goto L_088C1B10;
    case 299u: goto L_088C1B28;
    case 300u: goto L_088C1B3C;
    case 301u: goto L_088C1B50;
    case 302u: goto L_088C1B68;
    case 303u: goto L_088C1B70;
    case 304u: goto L_088C1B7C;
    case 305u: goto L_088C1B88;
    case 306u: goto L_088C1B90;
    case 307u: goto L_088C1BA8;
    case 308u: goto L_088C1BC0;
    case 309u: goto L_088C1BD4;
    case 310u: goto L_088C1BDC;
    case 311u: goto L_088C1BF4;
    case 312u: goto L_088C1C0C;
    case 313u: goto L_088C1C24;
    case 314u: goto L_088C1C48;
    case 315u: goto L_088C1C50;
    case 316u: goto L_088C1C68;
    case 317u: goto L_088C1C80;
    case 318u: goto L_088C1C90;
    case 319u: goto L_088C1CA0;
    case 320u: goto L_088C1CFC;
    case 321u: goto L_088C1D0C;
    case 322u: goto L_088C1D1C;
    case 323u: goto L_088C1D2C;
    case 324u: goto L_088C1D54;
    case 325u: goto L_088C1D70;
    case 326u: goto L_088C1D80;
    case 327u: goto L_088C1D98;
    case 328u: goto L_088C1DB4;
    case 329u: goto L_088C1DCC;
    case 330u: goto L_088C1DE8;
    case 331u: goto L_088C1E00;
    case 332u: goto L_088C1E1C;
    case 333u: goto L_088C1E28;
    case 334u: goto L_088C1E50;
    case 335u: goto L_088C1E60;
    case 336u: goto L_088C1E70;
    case 337u: goto L_088C1E8C;
    case 338u: goto L_088C1EA0;
    case 339u: goto L_088C1EC0;
    case 340u: goto L_088C1ED8;
    case 341u: goto L_088C1EF4;
    case 342u: goto L_088C1F0C;
    case 343u: goto L_088C1F28;
    case 344u: goto L_088C1F40;
    case 345u: goto L_088C1F5C;
    case 346u: goto L_088C1F74;
    case 347u: goto L_088C1FA8;
    case 348u: goto L_088C1FC4;
    case 349u: goto L_088C1FDC;
    case 350u: goto L_088C2000;
    case 351u: goto L_088C2008;
    case 352u: goto L_088C2020;
    case 353u: goto L_088C2038;
    case 354u: goto L_088C205C;
    case 355u: goto L_088C2064;
    case 356u: goto L_088C207C;
    case 357u: goto L_088C2094;
    case 358u: goto L_088C209C;
    case 359u: goto L_088C20A8;
    case 360u: goto L_088C20B4;
    case 361u: goto L_088C20BC;
    case 362u: goto L_088C20D4;
    case 363u: goto L_088C20EC;
    case 364u: goto L_088C2100;
    case 365u: goto L_088C2108;
    case 366u: goto L_088C2120;
    case 367u: goto L_088C2134;
    case 368u: goto L_088C2148;
    case 369u: goto L_088C2164;
    case 370u: goto L_088C217C;
    case 371u: goto L_088C218C;
    case 372u: goto L_088C219C;
    case 373u: goto L_088C21F0;
    case 374u: goto L_088C2200;
    case 375u: goto L_088C2210;
    case 376u: goto L_088C2220;
    case 377u: goto L_088C2238;
    case 378u: goto L_088C224C;
    case 379u: goto L_088C2254;
    case 380u: goto L_088C226C;
    case 381u: goto L_088C2280;
    case 382u: goto L_088C2294;
    case 383u: goto L_088C22B0;
    case 384u: goto L_088C22C8;
    case 385u: goto L_088C22D8;
    case 386u: goto L_088C22E8;
    case 387u: goto L_088C233C;
    case 388u: goto L_088C234C;
    case 389u: goto L_088C235C;
    case 390u: goto L_088C236C;
    case 391u: goto L_088C2384;
    case 392u: goto L_088C238C;
    case 393u: goto L_088C2398;
    case 394u: goto L_088C23A4;
    case 395u: goto L_088C23AC;
    case 396u: goto L_088C23C4;
    case 397u: goto L_088C23DC;
    case 398u: goto L_088C23F0;
    case 399u: goto L_088C23F8;
    case 400u: goto L_088C2410;
    case 401u: goto L_088C2424;
    case 402u: goto L_088C2438;
    case 403u: goto L_088C2454;
    case 404u: goto L_088C246C;
    case 405u: goto L_088C247C;
    case 406u: goto L_088C248C;
    case 407u: goto L_088C24E0;
    case 408u: goto L_088C24F0;
    case 409u: goto L_088C2500;
    case 410u: goto L_088C2510;
    case 411u: goto L_088C2528;
    case 412u: goto L_088C2530;
    case 413u: goto L_088C253C;
    case 414u: goto L_088C2548;
    case 415u: goto L_088C2550;
    case 416u: goto L_088C2568;
    case 417u: goto L_088C2580;
    case 418u: goto L_088C2594;
    case 419u: goto L_088C259C;
    case 420u: goto L_088C25B4;
    case 421u: goto L_088C25C8;
    case 422u: goto L_088C25DC;
    case 423u: goto L_088C25F8;
    case 424u: goto L_088C2610;
    case 425u: goto L_088C2620;
    case 426u: goto L_088C2630;
    case 427u: goto L_088C2684;
    case 428u: goto L_088C2694;
    case 429u: goto L_088C26A4;
    case 430u: goto L_088C26B4;
    case 431u: goto L_088C26CC;
    case 432u: goto L_088C26D4;
    case 433u: goto L_088C26E0;
    case 434u: goto L_088C26EC;
    case 435u: goto L_088C26F4;
    case 436u: goto L_088C270C;
    case 437u: goto L_088C2724;
    case 438u: goto L_088C2738;
    case 439u: goto L_088C2740;
    case 440u: goto L_088C2758;
    case 441u: goto L_088C276C;
    case 442u: goto L_088C2780;
    case 443u: goto L_088C279C;
    case 444u: goto L_088C27B4;
    case 445u: goto L_088C27C4;
    case 446u: goto L_088C27D4;
    case 447u: goto L_088C2828;
    case 448u: goto L_088C2838;
    case 449u: goto L_088C2848;
    case 450u: goto L_088C2858;
    case 451u: goto L_088C2870;
    case 452u: goto L_088C2884;
    case 453u: goto L_088C2898;
    case 454u: goto L_088C28B0;
    case 455u: goto L_088C28C4;
    case 456u: goto L_088C28CC;
    case 457u: goto L_088C28E4;
    case 458u: goto L_088C28FC;
    case 459u: goto L_088C291C;
    case 460u: goto L_088C2940;
    case 461u: goto L_088C2948;
    case 462u: goto L_088C2954;
    case 463u: goto L_088C295C;
    case 464u: goto L_088C2968;
    case 465u: goto L_088C2970;
    case 466u: goto L_088C2988;
    case 467u: goto L_088C29A0;
    case 468u: goto L_088C29B0;
    case 469u: goto L_088C29C0;
    case 470u: goto L_088C2A24;
    case 471u: goto L_088C2A34;
    case 472u: goto L_088C2A44;
    case 473u: goto L_088C2A54;
    case 474u: goto L_088C2A7C;
    case 475u: goto L_088C2A98;
    case 476u: goto L_088C2AA8;
    case 477u: goto L_088C2AB4;
    case 478u: goto L_088C2AD0;
    case 479u: goto L_088C2ADC;
    case 480u: goto L_088C2AF8;
    case 481u: goto L_088C2B04;
    case 482u: goto L_088C2B38;
    case 483u: goto L_088C2B48;
    case 484u: goto L_088C2B64;
    case 485u: goto L_088C2B74;
    case 486u: goto L_088C2B84;
    case 487u: goto L_088C2B94;
    case 488u: goto L_088C2BA4;
    case 489u: goto L_088C2BBC;
    case 490u: goto L_088C2BC4;
    case 491u: goto L_088C2BD0;
    case 492u: goto L_088C2BDC;
    case 493u: goto L_088C2BE4;
    case 494u: goto L_088C2BFC;
    case 495u: goto L_088C2C14;
    case 496u: goto L_088C2C28;
    case 497u: goto L_088C2C30;
    case 498u: goto L_088C2C48;
    case 499u: goto L_088C2C60;
    case 500u: goto L_088C2C70;
    case 501u: goto L_088C2C80;
    case 502u: goto L_088C2CC8;
    case 503u: goto L_088C2CD8;
    case 504u: goto L_088C2CE8;
    case 505u: goto L_088C2CF8;
    case 506u: goto L_088C2D10;
    case 507u: goto L_088C2D18;
    case 508u: goto L_088C2D24;
    case 509u: goto L_088C2D30;
    case 510u: goto L_088C2D38;
    case 511u: goto L_088C2D50;
    case 512u: goto L_088C2D68;
    case 513u: goto L_088C2D7C;
    case 514u: goto L_088C2D84;
    case 515u: goto L_088C2D9C;
    case 516u: goto L_088C2DB4;
    case 517u: goto L_088C2DC4;
    case 518u: goto L_088C2DD4;
    case 519u: goto L_088C2E2C;
    case 520u: goto L_088C2E3C;
    case 521u: goto L_088C2E4C;
    case 522u: goto L_088C2E5C;
    case 523u: goto L_088C2E84;
    case 524u: goto L_088C2EA0;
    case 525u: goto L_088C2EB0;
    case 526u: goto L_088C2EC4;
    case 527u: goto L_088C2EF0;
    case 528u: goto L_088C2F00;
    case 529u: goto L_088C2F1C;
    case 530u: goto L_088C2F2C;
    case 531u: goto L_088C2F3C;
    case 532u: goto L_088C2F4C;
    case 533u: goto L_088C2F5C;
    case 534u: goto L_088C2F6C;
    case 535u: goto L_088C2F84;
    case 536u: goto L_088C2F98;
    case 537u: goto L_088C2FAC;
    case 538u: goto L_088C2FC4;
    case 539u: goto L_088C2FCC;
    case 540u: goto L_088C2FD8;
    case 541u: goto L_088C2FE4;
    case 542u: goto L_088C2FEC;
    case 543u: goto L_088C3004;
    case 544u: goto L_088C301C;
    case 545u: goto L_088C3030;
    case 546u: goto L_088C3038;
    case 547u: goto L_088C3050;
    case 548u: goto L_088C3064;
    case 549u: goto L_088C3078;
    case 550u: goto L_088C3094;
    case 551u: goto L_088C30AC;
    case 552u: goto L_088C30BC;
    case 553u: goto L_088C30CC;
    case 554u: goto L_088C3120;
    case 555u: goto L_088C3130;
    case 556u: goto L_088C3140;
    case 557u: goto L_088C3150;
    case 558u: goto L_088C3168;
    case 559u: goto L_088C317C;
    case 560u: goto L_088C3190;
    case 561u: goto L_088C31A8;
    case 562u: goto L_088C31B0;
    case 563u: goto L_088C31BC;
    case 564u: goto L_088C31C8;
    case 565u: goto L_088C31D0;
    case 566u: goto L_088C31E8;
    case 567u: goto L_088C3200;
    case 568u: goto L_088C3214;
    case 569u: goto L_088C321C;
    case 570u: goto L_088C3234;
    case 571u: goto L_088C3248;
    case 572u: goto L_088C325C;
    case 573u: goto L_088C3278;
    case 574u: goto L_088C3290;
    case 575u: goto L_088C32A0;
    case 576u: goto L_088C32B0;
    case 577u: goto L_088C3304;
    case 578u: goto L_088C3314;
    case 579u: goto L_088C3324;
    case 580u: goto L_088C3334;
    case 581u: goto L_088C3344;
    case 582u: goto L_088C335C;
    case 583u: goto L_088C3364;
    case 584u: goto L_088C3370;
    case 585u: goto L_088C337C;
    case 586u: goto L_088C3384;
    case 587u: goto L_088C339C;
    case 588u: goto L_088C33B4;
    case 589u: goto L_088C33C8;
    case 590u: goto L_088C33D0;
    case 591u: goto L_088C33E8;
    case 592u: goto L_088C33FC;
    case 593u: goto L_088C3410;
    case 594u: goto L_088C342C;
    case 595u: goto L_088C3444;
    case 596u: goto L_088C3454;
    case 597u: goto L_088C3464;
    case 598u: goto L_088C34B8;
    case 599u: goto L_088C34C8;
    case 600u: goto L_088C34D8;
    case 601u: goto L_088C34E8;
    case 602u: goto L_088C3500;
    case 603u: goto L_088C3514;
    case 604u: goto L_088C351C;
    case 605u: goto L_088C3534;
    case 606u: goto L_088C3548;
    case 607u: goto L_088C355C;
    case 608u: goto L_088C3578;
    case 609u: goto L_088C3590;
    case 610u: goto L_088C35C0;
    case 611u: goto L_088C35D8;
    case 612u: goto L_088C35E8;
    case 613u: goto L_088C35F8;
    case 614u: goto L_088C364C;
    case 615u: goto L_088C365C;
    case 616u: goto L_088C366C;
    case 617u: goto L_088C367C;
    case 618u: goto L_088C368C;
    case 619u: goto L_088C36A4;
    case 620u: goto L_088C36B8;
    case 621u: goto L_088C36CC;
    case 622u: goto L_088C36E4;
    case 623u: goto L_088C36F8;
    case 624u: goto L_088C3700;
    case 625u: goto L_088C3718;
    case 626u: goto L_088C372C;
    case 627u: goto L_088C3740;
    case 628u: goto L_088C375C;
    case 629u: goto L_088C3774;
    case 630u: goto L_088C3784;
    case 631u: goto L_088C3794;
    case 632u: goto L_088C37E8;
    case 633u: goto L_088C37F8;
    case 634u: goto L_088C3808;
    case 635u: goto L_088C3818;
    case 636u: goto L_088C383C;
    case 637u: goto L_088C3858;
    case 638u: goto L_088C3880;
    case 639u: goto L_088C3898;
    case 640u: goto L_088C38B0;
    case 641u: goto L_088C38C4;
    case 642u: goto L_088C38D8;
    case 643u: goto L_088C38F0;
    case 644u: goto L_088C3904;
    case 645u: goto L_088C390C;
    case 646u: goto L_088C3924;
    case 647u: goto L_088C3938;
    case 648u: goto L_088C394C;
    case 649u: goto L_088C3968;
    case 650u: goto L_088C3980;
    case 651u: goto L_088C3990;
    case 652u: goto L_088C39A0;
    case 653u: goto L_088C39F4;
    case 654u: goto L_088C3A04;
    case 655u: goto L_088C3A14;
    case 656u: goto L_088C3A24;
    case 657u: goto L_088C3A4C;
    case 658u: goto L_088C3A68;
    case 659u: goto L_088C3A78;
    case 660u: goto L_088C3A90;
    case 661u: goto L_088C3AC4;
    case 662u: goto L_088C3AE0;
    case 663u: goto L_088C3BCC;
    case 664u: goto L_088C3BDC;
    case 665u: goto L_088C3C10;
    case 666u: goto L_088C3C48;
    case 667u: goto L_088C3C6C;
    case 668u: goto L_088C3C7C;
    case 669u: goto L_088C3C94;
    case 670u: goto L_088C3CA8;
    case 671u: goto L_088C3CC8;
    case 672u: goto L_088C3CD4;
    case 673u: goto L_088C3CD8;
    case 674u: goto L_088C3CE0;
    case 675u: goto L_088C3CF0;
    case 676u: goto L_088C3D04;
    case 677u: goto L_088C3D18;
    case 678u: goto L_088C3D30;
    case 679u: goto L_088C3D54;
    case 680u: goto L_088C3D7C;
    case 681u: goto L_088C3D9C;
    case 682u: goto L_088C3DC0;
    case 683u: goto L_088C3DEC;
    case 684u: goto L_088C3E08;
    case 685u: goto L_088C3E14;
    case 686u: goto L_088C3E20;
    case 687u: goto L_088C3E2C;
    case 688u: goto L_088C3E3C;
    case 689u: goto L_088C3E48;
    case 690u: goto L_088C3E58;
    case 691u: goto L_088C3E64;
    case 692u: goto L_088C3E74;
    case 693u: goto L_088C3E80;
    case 694u: goto L_088C3E98;
    case 695u: goto L_088C3EA4;
    case 696u: goto L_088C3EB4;
    case 697u: goto L_088C3EC0;
    case 698u: goto L_088C3ED0;
    case 699u: goto L_088C3EDC;
    case 700u: goto L_088C3EF4;
    case 701u: goto L_088C3F00;
    case 702u: goto L_088C3F18;
    case 703u: goto L_088C3F24;
    case 704u: goto L_088C3F3C;
    case 705u: goto L_088C3F48;
    case 706u: goto L_088C3F68;
    case 707u: goto L_088C3F74;
    case 708u: goto L_088C3FAC;
    case 709u: goto L_088C3FB8;
    case 710u: goto L_088C3FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088C0000:
    ctx.set_gpr(31, 0x088C0008u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 683u, 0x088BFE64u>(ctx, &aot_mem) && ctx.pc == 0x088C0008u) goto L_088C0008;
    return;
L_088C0008:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C0018:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25324)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088C0040u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088C0040u) goto L_088C0040;
    return;
L_088C0040:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(17396));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(10));
    ctx.set_gpr(31, 0x088C005Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088C005Cu) goto L_088C005C;
    return;
L_088C005C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088C006Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088C006Cu) goto L_088C006C;
    return;
L_088C006C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(17664));
    ctx.set_gpr(31, 0x088C0084u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x088C0084u) goto L_088C0084;
    return;
L_088C0084:
    ctx.set_gpr(2, 2188u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(308));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088C00A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088C00A0u) goto L_088C00A0;
    return;
L_088C00A0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088C00ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 406u, 0x088B66F4u>(ctx, &aot_mem) && ctx.pc == 0x088C00ACu) goto L_088C00AC;
    return;
L_088C00AC:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088C00C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088C00C0u) goto L_088C00C0;
    return;
L_088C00C0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088C00CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 260u, 0x089957D0u>(ctx, &aot_mem) && ctx.pc == 0x088C00CCu) goto L_088C00CC;
    return;
L_088C00CC:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088C00E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088C00E0u) goto L_088C00E0;
    return;
L_088C00E0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088C00ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 412u, 0x088B2640u>(ctx, &aot_mem) && ctx.pc == 0x088C00ECu) goto L_088C00EC;
    return;
L_088C00EC:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(17544));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(17584));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(17624));
    ctx.set_gpr(8, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088C0118u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088C0118u) goto L_088C0118;
    return;
L_088C0118:
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
L_088C0134:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25368)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C0178;
      }
      goto L_088C014C;
    }
L_088C014C:
    ctx.set_gpr(4, 2227u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(17860));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(17820));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(17840));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x088C0170u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x088C0170u) goto L_088C0170;
    return;
L_088C0170:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(25368), ctx.gpr[2]);
    goto L_088C0178;
L_088C0178:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25368)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C0190:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25372)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C01BC;
      }
      goto L_088C01A8;
    }
L_088C01A8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C01C4;
      }
      goto L_088C01BC;
    }
L_088C01BC:
    ctx.set_gpr(31, 0x088C01C4u);
    // nop
    goto L_088C0220;
L_088C01C4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25372)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C01DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088C01F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088C01F0u) goto L_088C01F0;
    return;
L_088C01F0:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-20304));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088C0204u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088C0204u) goto L_088C0204;
    return;
L_088C0204:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C0220:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2188u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(584));
    ctx.set_gpr(31, 0x088C0238u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088C0238u) goto L_088C0238;
    return;
L_088C0238:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C0248:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C0258u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 385u, 0x088AD3A8u>(ctx, &aot_mem) && ctx.pc == 0x088C0258u) goto L_088C0258;
    return;
L_088C0258:
    ctx.set_gpr(2, 2188u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(732));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(25372));
    ctx.set_gpr(6, 2187u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8216));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9720));
    ctx.set_gpr(8, 2188u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(700));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(17872));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(11, 2188u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(476));
    ctx.set_gpr(31, 0x088C02ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088C02ACu) goto L_088C02AC;
    return;
L_088C02AC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C02BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C02CCu);
    // nop
    goto L_088C0190;
L_088C02CC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C02DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25372)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088C0304u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088C0304u) goto L_088C0304;
    return;
L_088C0304:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(17896));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088C0320u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088C0320u) goto L_088C0320;
    return;
L_088C0320:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088C0330u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088C0330u) goto L_088C0330;
    return;
L_088C0330:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(17912));
    ctx.set_gpr(31, 0x088C0348u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x088C0348u) goto L_088C0348;
    return;
L_088C0348:
    ctx.set_gpr(2, 2192u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(24480));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(17900));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(17904));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(17908));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088C037Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088C037Cu) goto L_088C037C;
    return;
L_088C037C:
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
L_088C0398:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088C03B0u);
    // nop
    goto L_088C0468;
L_088C03B0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25380)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088C03C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088C03C4u) goto L_088C03C4;
    return;
L_088C03C4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C03D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25380)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C0404;
      }
      goto L_088C03F0;
    }
L_088C03F0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C040C;
      }
      goto L_088C0404;
    }
L_088C0404:
    ctx.set_gpr(31, 0x088C040Cu);
    // nop
    goto L_088C0468;
L_088C040C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25380)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C0424:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088C0438u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088C0438u) goto L_088C0438;
    return;
L_088C0438:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-20168));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088C044Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088C044Cu) goto L_088C044C;
    return;
L_088C044C:
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
L_088C0468:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2188u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1168));
    ctx.set_gpr(31, 0x088C0480u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088C0480u) goto L_088C0480;
    return;
L_088C0480:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C0490:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C04A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 385u, 0x088AD3A8u>(ctx, &aot_mem) && ctx.pc == 0x088C04A0u) goto L_088C04A0;
    return;
L_088C04A0:
    ctx.set_gpr(2, 2188u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1316));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(25380));
    ctx.set_gpr(6, 2187u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8216));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9720));
    ctx.set_gpr(8, 2188u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1284));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(17916));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2188u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1060));
    ctx.set_gpr(31, 0x088C04F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088C04F4u) goto L_088C04F4;
    return;
L_088C04F4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C0504:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C0514u);
    // nop
    goto L_088C03D8;
L_088C0514:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C0524:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25380)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088C0548u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088C0548u) goto L_088C0548;
    return;
L_088C0548:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(17932));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x088C0564u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088C0564u) goto L_088C0564;
    return;
L_088C0564:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088C0574u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088C0574u) goto L_088C0574;
    return;
L_088C0574:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088C0584u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 745u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x088C0584u) goto L_088C0584;
    return;
L_088C0584:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088C0594u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088C0594u) goto L_088C0594;
    return;
L_088C0594:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088C05A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 745u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x088C05A4u) goto L_088C05A4;
    return;
L_088C05A4:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088C05B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088C05B4u) goto L_088C05B4;
    return;
L_088C05B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088C05C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 745u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x088C05C4u) goto L_088C05C4;
    return;
L_088C05C4:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088C05D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088C05D4u) goto L_088C05D4;
    return;
L_088C05D4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088C05E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 745u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x088C05E4u) goto L_088C05E4;
    return;
L_088C05E4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(17976));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(17996));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(18016));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088C060Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088C060Cu) goto L_088C060C;
    return;
L_088C060C:
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
L_088C0624:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25404)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C0664;
      }
      goto L_088C063C;
    }
L_088C063C:
    ctx.set_gpr(31, 0x088C0644u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088C0644u) goto L_088C0644;
    return;
L_088C0644:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088C0650u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088C0650u) goto L_088C0650;
    return;
L_088C0650:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088C065Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088C065Cu) goto L_088C065C;
    return;
L_088C065C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(25404), ctx.gpr[2]);
    goto L_088C0664;
L_088C0664:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25404)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C067C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25404)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C06A8;
      }
      goto L_088C0694;
    }
L_088C0694:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C06B0;
      }
      goto L_088C06A8;
    }
L_088C06A8:
    ctx.set_gpr(31, 0x088C06B0u);
    // nop
    goto L_088C070C;
L_088C06B0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25404)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C06C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088C06DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088C06DCu) goto L_088C06DC;
    return;
L_088C06DC:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-20028));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088C06F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088C06F0u) goto L_088C06F0;
    return;
L_088C06F0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C070C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2188u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1844));
    ctx.set_gpr(31, 0x088C0724u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088C0724u) goto L_088C0724;
    return;
L_088C0724:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C0734:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C0744u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 385u, 0x088AD3A8u>(ctx, &aot_mem) && ctx.pc == 0x088C0744u) goto L_088C0744;
    return;
L_088C0744:
    ctx.set_gpr(2, 2188u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(2000));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2188u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(2260));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(25404));
    ctx.set_gpr(6, 2187u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8216));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9720));
    ctx.set_gpr(8, 2188u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1968));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(18036));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(11, 2188u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(1736));
    ctx.set_gpr(31, 0x088C07A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088C07A0u) goto L_088C07A0;
    return;
L_088C07A0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C07B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C07C0u);
    // nop
    goto L_088C067C;
L_088C07C0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C07D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25404)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088C07F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088C07F8u) goto L_088C07F8;
    return;
L_088C07F8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(18048));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088C0814u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088C0814u) goto L_088C0814;
    return;
L_088C0814:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088C0824u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088C0824u) goto L_088C0824;
    return;
L_088C0824:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088C084Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 265u, 0x089FD724u>(ctx, &aot_mem) && ctx.pc == 0x088C084Cu) goto L_088C084C;
    return;
L_088C084C:
    ctx.set_gpr(2, 2188u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(24896));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088C0868u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088C0868u) goto L_088C0868;
    return;
L_088C0868:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088C087Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 783u, 0x0895F488u>(ctx, &aot_mem) && ctx.pc == 0x088C087Cu) goto L_088C087C;
    return;
L_088C087C:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(18072));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(18080));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(18088));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088C08A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088C08A8u) goto L_088C08A8;
    return;
L_088C08A8:
    ctx.set_gpr(4, 2188u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2292));
    ctx.set_gpr(31, 0x088C08B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 237u, 0x089451B8u>(ctx, &aot_mem) && ctx.pc == 0x088C08B8u) goto L_088C08B8;
    return;
L_088C08B8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C08D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C08E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 386u, 0x088C603Cu>(ctx, &aot_mem) && ctx.pc == 0x088C08E4u) goto L_088C08E4;
    return;
L_088C08E4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C08F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C0904u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 387u, 0x088C6044u>(ctx, &aot_mem) && ctx.pc == 0x088C0904u) goto L_088C0904;
    return;
L_088C0904:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C0914:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25416)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C0954;
      }
      goto L_088C092C;
    }
L_088C092C:
    ctx.set_gpr(31, 0x088C0934u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088C0934u) goto L_088C0934;
    return;
L_088C0934:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088C0940u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088C0940u) goto L_088C0940;
    return;
L_088C0940:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088C094Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088C094Cu) goto L_088C094C;
    return;
L_088C094C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(25416), ctx.gpr[2]);
    goto L_088C0954;
L_088C0954:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25416)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C096C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25416)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C0998;
      }
      goto L_088C0984;
    }
L_088C0984:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C09A0;
      }
      goto L_088C0998;
    }
L_088C0998:
    ctx.set_gpr(31, 0x088C09A0u);
    // nop
    goto L_088C09FC;
L_088C09A0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25416)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C09B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088C09CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088C09CCu) goto L_088C09CC;
    return;
L_088C09CC:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-19888));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088C09E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088C09E0u) goto L_088C09E0;
    return;
L_088C09E0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C09FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2188u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(2596));
    ctx.set_gpr(31, 0x088C0A14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088C0A14u) goto L_088C0A14;
    return;
L_088C0A14:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C0A24:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C0A34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 385u, 0x088AD3A8u>(ctx, &aot_mem) && ctx.pc == 0x088C0A34u) goto L_088C0A34;
    return;
L_088C0A34:
    ctx.set_gpr(2, 2188u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(2744));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(25416));
    ctx.set_gpr(6, 2187u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8216));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9720));
    ctx.set_gpr(8, 2188u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(2712));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(18096));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(11, 2188u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(2488));
    ctx.set_gpr(31, 0x088C0A88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088C0A88u) goto L_088C0A88;
    return;
L_088C0A88:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C0A98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C0AA8u);
    // nop
    goto L_088C096C;
L_088C0AA8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C0AB8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25416)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088C0ADCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088C0ADCu) goto L_088C0ADC;
    return;
L_088C0ADC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(18116));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088C0AF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088C0AF8u) goto L_088C0AF8;
    return;
L_088C0AF8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088C0B08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088C0B08u) goto L_088C0B08;
    return;
L_088C0B08:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088C0B18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 745u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x088C0B18u) goto L_088C0B18;
    return;
L_088C0B18:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(18120));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(18124));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(18128));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088C0B40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088C0B40u) goto L_088C0B40;
    return;
L_088C0B40:
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
L_088C0B58:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088C0B70u);
    // nop
    goto L_088C0C28;
L_088C0B70:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25424)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088C0B84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088C0B84u) goto L_088C0B84;
    return;
L_088C0B84:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C0B98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25424)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C0BC4;
      }
      goto L_088C0BB0;
    }
L_088C0BB0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C0BCC;
      }
      goto L_088C0BC4;
    }
L_088C0BC4:
    ctx.set_gpr(31, 0x088C0BCCu);
    // nop
    goto L_088C0C28;
L_088C0BCC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25424)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C0BE4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088C0BF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088C0BF8u) goto L_088C0BF8;
    return;
L_088C0BF8:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-19748));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088C0C0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088C0C0Cu) goto L_088C0C0C;
    return;
L_088C0C0C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C0C28:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2188u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(3152));
    ctx.set_gpr(31, 0x088C0C40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088C0C40u) goto L_088C0C40;
    return;
L_088C0C40:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C0C50:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C0C60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 385u, 0x088AD3A8u>(ctx, &aot_mem) && ctx.pc == 0x088C0C60u) goto L_088C0C60;
    return;
L_088C0C60:
    ctx.set_gpr(2, 2188u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(3300));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(25424));
    ctx.set_gpr(6, 2187u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8216));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9720));
    ctx.set_gpr(8, 2188u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(3268));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(18132));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(72));
    ctx.set_gpr(11, 2188u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(3044));
    ctx.set_gpr(31, 0x088C0CB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088C0CB4u) goto L_088C0CB4;
    return;
L_088C0CB4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C0CC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C0CD4u);
    // nop
    goto L_088C0B98;
L_088C0CD4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C0CE4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25424)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088C0D0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088C0D0Cu) goto L_088C0D0C;
    return;
L_088C0D0C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(18144));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(31, 0x088C0D28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088C0D28u) goto L_088C0D28;
    return;
L_088C0D28:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088C0D38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088C0D38u) goto L_088C0D38;
    return;
L_088C0D38:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.set_gpr(3, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x088C0D5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 265u, 0x089FD724u>(ctx, &aot_mem) && ctx.pc == 0x088C0D5Cu) goto L_088C0D5C;
    return;
L_088C0D5C:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088C0D6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088C0D6Cu) goto L_088C0D6C;
    return;
L_088C0D6C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088C0D8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 265u, 0x089FD724u>(ctx, &aot_mem) && ctx.pc == 0x088C0D8Cu) goto L_088C0D8C;
    return;
L_088C0D8C:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088C0D9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088C0D9Cu) goto L_088C0D9C;
    return;
L_088C0D9C:
    ctx.set_gpr(7, 16368u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x088C0DB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 587u, 0x089126B4u>(ctx, &aot_mem) && ctx.pc == 0x088C0DB0u) goto L_088C0DB0;
    return;
L_088C0DB0:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088C0DC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088C0DC0u) goto L_088C0DC0;
    return;
L_088C0DC0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088C0DD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 783u, 0x0895F488u>(ctx, &aot_mem) && ctx.pc == 0x088C0DD4u) goto L_088C0DD4;
    return;
L_088C0DD4:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088C0DE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088C0DE8u) goto L_088C0DE8;
    return;
L_088C0DE8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088C0E00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 643u, 0x0891EEE0u>(ctx, &aot_mem) && ctx.pc == 0x088C0E00u) goto L_088C0E00;
    return;
L_088C0E00:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(18220));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(18248));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(18276));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088C0E2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088C0E2Cu) goto L_088C0E2C;
    return;
L_088C0E2C:
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
L_088C0E48:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25456)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C0E74;
      }
      goto L_088C0E60;
    }
L_088C0E60:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C0E7C;
      }
      goto L_088C0E74;
    }
L_088C0E74:
    ctx.set_gpr(31, 0x088C0E7Cu);
    // nop
    goto L_088C0ED8;
L_088C0E7C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25456)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C0E94:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088C0EA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088C0EA8u) goto L_088C0EA8;
    return;
L_088C0EA8:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-19612));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088C0EBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088C0EBCu) goto L_088C0EBC;
    return;
L_088C0EBC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C0ED8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2188u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(3840));
    ctx.set_gpr(31, 0x088C0EF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088C0EF0u) goto L_088C0EF0;
    return;
L_088C0EF0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C0F00:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C0F10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 385u, 0x088AD3A8u>(ctx, &aot_mem) && ctx.pc == 0x088C0F10u) goto L_088C0F10;
    return;
L_088C0F10:
    ctx.set_gpr(2, 2188u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(3988));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(25456));
    ctx.set_gpr(6, 2187u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8216));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9720));
    ctx.set_gpr(8, 2188u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(3956));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(18304));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(11, 2188u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(3732));
    ctx.set_gpr(31, 0x088C0F64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088C0F64u) goto L_088C0F64;
    return;
L_088C0F64:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C0F74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C0F84u);
    // nop
    goto L_088C0E48;
L_088C0F84:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C0F94:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25456)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088C0FB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088C0FB8u) goto L_088C0FB8;
    return;
L_088C0FB8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(18336));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088C0FD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088C0FD4u) goto L_088C0FD4;
    return;
L_088C0FD4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(18340));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(18344));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(18348));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088C0FFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088C0FFCu) goto L_088C0FFC;
    return;
L_088C0FFC:
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
L_088C1014:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25464)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C1040;
      }
      goto L_088C102C;
    }
L_088C102C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C1048;
      }
      goto L_088C1040;
    }
L_088C1040:
    ctx.set_gpr(31, 0x088C1048u);
    // nop
    goto L_088C10A4;
L_088C1048:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25464)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1060:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088C1074u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088C1074u) goto L_088C1074;
    return;
L_088C1074:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-19476));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088C1088u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088C1088u) goto L_088C1088;
    return;
L_088C1088:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C10A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2188u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4300));
    ctx.set_gpr(31, 0x088C10BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088C10BCu) goto L_088C10BC;
    return;
L_088C10BC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C10CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C10DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 385u, 0x088AD3A8u>(ctx, &aot_mem) && ctx.pc == 0x088C10DCu) goto L_088C10DC;
    return;
L_088C10DC:
    ctx.set_gpr(2, 2188u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4448));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(25464));
    ctx.set_gpr(6, 2187u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8216));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9720));
    ctx.set_gpr(8, 2188u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(4416));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(18352));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(11, 2188u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(4192));
    ctx.set_gpr(31, 0x088C1130u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088C1130u) goto L_088C1130;
    return;
L_088C1130:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1140:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C1150u);
    // nop
    goto L_088C1014;
L_088C1150:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1160:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25464)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088C1184u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088C1184u) goto L_088C1184;
    return;
L_088C1184:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(18380));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088C11A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088C11A0u) goto L_088C11A0;
    return;
L_088C11A0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(18384));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(18388));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(18392));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088C11C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088C11C8u) goto L_088C11C8;
    return;
L_088C11C8:
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
L_088C11E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088C11F8u);
    // nop
    goto L_088C1308;
L_088C11F8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25472)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088C120Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088C120Cu) goto L_088C120C;
    return;
L_088C120C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1220:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25472)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C1260;
      }
      goto L_088C1238;
    }
L_088C1238:
    ctx.set_gpr(31, 0x088C1240u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088C1240u) goto L_088C1240;
    return;
L_088C1240:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088C124Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088C124Cu) goto L_088C124C;
    return;
L_088C124C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088C1258u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088C1258u) goto L_088C1258;
    return;
L_088C1258:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(25472), ctx.gpr[2]);
    goto L_088C1260;
L_088C1260:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25472)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1278:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25472)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C12A4;
      }
      goto L_088C1290;
    }
L_088C1290:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C12AC;
      }
      goto L_088C12A4;
    }
L_088C12A4:
    ctx.set_gpr(31, 0x088C12ACu);
    // nop
    goto L_088C1308;
L_088C12AC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25472)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C12C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088C12D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088C12D8u) goto L_088C12D8;
    return;
L_088C12D8:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-19340));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088C12ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088C12ECu) goto L_088C12EC;
    return;
L_088C12EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1308:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2188u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4912));
    ctx.set_gpr(31, 0x088C1320u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088C1320u) goto L_088C1320;
    return;
L_088C1320:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1330:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C1340u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 385u, 0x088AD3A8u>(ctx, &aot_mem) && ctx.pc == 0x088C1340u) goto L_088C1340;
    return;
L_088C1340:
    ctx.set_gpr(2, 2188u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(5060));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(25472));
    ctx.set_gpr(6, 2187u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8216));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9720));
    ctx.set_gpr(8, 2188u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(5028));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(18396));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(11, 2188u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(4804));
    ctx.set_gpr(31, 0x088C1394u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088C1394u) goto L_088C1394;
    return;
L_088C1394:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C13A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C13B4u);
    // nop
    goto L_088C1278;
L_088C13B4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C13C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25472)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088C13E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088C13E8u) goto L_088C13E8;
    return;
L_088C13E8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(18416));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088C1404u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088C1404u) goto L_088C1404;
    return;
L_088C1404:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(18420));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(18424));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(18428));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088C142Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088C142Cu) goto L_088C142C;
    return;
L_088C142C:
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
L_088C1444:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088C145Cu);
    // nop
    goto L_088C156C;
L_088C145C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25480)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088C1470u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088C1470u) goto L_088C1470;
    return;
L_088C1470:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1484:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25480)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C14C4;
      }
      goto L_088C149C;
    }
L_088C149C:
    ctx.set_gpr(31, 0x088C14A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088C14A4u) goto L_088C14A4;
    return;
L_088C14A4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088C14B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088C14B0u) goto L_088C14B0;
    return;
L_088C14B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088C14BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088C14BCu) goto L_088C14BC;
    return;
L_088C14BC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(25480), ctx.gpr[2]);
    goto L_088C14C4;
L_088C14C4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25480)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C14DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25480)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C1508;
      }
      goto L_088C14F4;
    }
L_088C14F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C1510;
      }
      goto L_088C1508;
    }
L_088C1508:
    ctx.set_gpr(31, 0x088C1510u);
    // nop
    goto L_088C156C;
L_088C1510:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25480)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1528:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x088C153Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088C153Cu) goto L_088C153C;
    return;
L_088C153C:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-19200));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088C1550u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088C1550u) goto L_088C1550;
    return;
L_088C1550:
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
L_088C156C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2188u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(5524));
    ctx.set_gpr(31, 0x088C1584u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088C1584u) goto L_088C1584;
    return;
L_088C1584:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1594:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C15A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 385u, 0x088AD3A8u>(ctx, &aot_mem) && ctx.pc == 0x088C15A4u) goto L_088C15A4;
    return;
L_088C15A4:
    ctx.set_gpr(2, 2188u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(5672));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(25480));
    ctx.set_gpr(6, 2187u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8216));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9720));
    ctx.set_gpr(8, 2188u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(5640));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(18432));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(28));
    ctx.set_gpr(11, 2188u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(5416));
    ctx.set_gpr(31, 0x088C15F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088C15F8u) goto L_088C15F8;
    return;
L_088C15F8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1608:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C1618u);
    // nop
    goto L_088C14DC;
L_088C1618:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1628:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25480)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088C1650u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088C1650u) goto L_088C1650;
    return;
L_088C1650:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(18460));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088C166Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088C166Cu) goto L_088C166C;
    return;
L_088C166C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088C167Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088C167Cu) goto L_088C167C;
    return;
L_088C167C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088C1688u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 559u, 0x089F3B10u>(ctx, &aot_mem) && ctx.pc == 0x088C1688u) goto L_088C1688;
    return;
L_088C1688:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088C16ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088C16ACu) goto L_088C16AC;
    return;
L_088C16AC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088C16B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 503u, 0x088DE9D8u>(ctx, &aot_mem) && ctx.pc == 0x088C16B8u) goto L_088C16B8;
    return;
L_088C16B8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(18504));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(18520));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(18536));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088C16F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088C16F4u) goto L_088C16F4;
    return;
L_088C16F4:
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
L_088C1710:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25500)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C1750;
      }
      goto L_088C1728;
    }
L_088C1728:
    ctx.set_gpr(31, 0x088C1730u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088C1730u) goto L_088C1730;
    return;
L_088C1730:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088C173Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088C173Cu) goto L_088C173C;
    return;
L_088C173C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088C1748u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088C1748u) goto L_088C1748;
    return;
L_088C1748:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(25500), ctx.gpr[2]);
    goto L_088C1750;
L_088C1750:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25500)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1768:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25500)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C1794;
      }
      goto L_088C1780;
    }
L_088C1780:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C179C;
      }
      goto L_088C1794;
    }
L_088C1794:
    ctx.set_gpr(31, 0x088C179Cu);
    // nop
    goto L_088C17F8;
L_088C179C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25500)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C17B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088C17C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x088C17C8u) goto L_088C17C8;
    return;
L_088C17C8:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-17128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088C17DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088C17DCu) goto L_088C17DC;
    return;
L_088C17DC:
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
L_088C17F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2188u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(6176));
    ctx.set_gpr(31, 0x088C1810u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088C1810u) goto L_088C1810;
    return;
L_088C1810:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1820:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C1830u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 385u, 0x088AD3A8u>(ctx, &aot_mem) && ctx.pc == 0x088C1830u) goto L_088C1830;
    return;
L_088C1830:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(18552));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(25500));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2188u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(6292));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(18560));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2188u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(6068));
    ctx.set_gpr(31, 0x088C1884u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088C1884u) goto L_088C1884;
    return;
L_088C1884:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1894:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C18A4u);
    // nop
    goto L_088C1768;
L_088C18A4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C18B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25504)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C18F4;
      }
      goto L_088C18CC;
    }
L_088C18CC:
    ctx.set_gpr(31, 0x088C18D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088C18D4u) goto L_088C18D4;
    return;
L_088C18D4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088C18E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088C18E0u) goto L_088C18E0;
    return;
L_088C18E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088C18ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088C18ECu) goto L_088C18EC;
    return;
L_088C18EC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(25504), ctx.gpr[2]);
    goto L_088C18F4;
L_088C18F4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25504)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C190C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25504)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C1938;
      }
      goto L_088C1924;
    }
L_088C1924:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C1940;
      }
      goto L_088C1938;
    }
L_088C1938:
    ctx.set_gpr(31, 0x088C1940u);
    // nop
    goto L_088C199C;
L_088C1940:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25504)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1958:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x088C196Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088C196Cu) goto L_088C196C;
    return;
L_088C196C:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-19064));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088C1980u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088C1980u) goto L_088C1980;
    return;
L_088C1980:
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
L_088C199C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2188u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(6596));
    ctx.set_gpr(31, 0x088C19B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088C19B4u) goto L_088C19B4;
    return;
L_088C19B4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C19C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C19D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 385u, 0x088AD3A8u>(ctx, &aot_mem) && ctx.pc == 0x088C19D4u) goto L_088C19D4;
    return;
L_088C19D4:
    ctx.set_gpr(2, 2188u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(6744));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(25504));
    ctx.set_gpr(6, 2187u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8216));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9720));
    ctx.set_gpr(8, 2188u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(6712));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(18592));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(11, 2188u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(6488));
    ctx.set_gpr(31, 0x088C1A28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088C1A28u) goto L_088C1A28;
    return;
L_088C1A28:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1A38:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C1A48u);
    // nop
    goto L_088C190C;
L_088C1A48:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1A58:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25504)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088C1A80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088C1A80u) goto L_088C1A80;
    return;
L_088C1A80:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(18612));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x088C1A9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088C1A9Cu) goto L_088C1A9C;
    return;
L_088C1A9C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088C1AACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088C1AACu) goto L_088C1AAC;
    return;
L_088C1AAC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088C1AB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 559u, 0x089F3B10u>(ctx, &aot_mem) && ctx.pc == 0x088C1AB8u) goto L_088C1AB8;
    return;
L_088C1AB8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(18648));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(18660));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(18672));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088C1AF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088C1AF4u) goto L_088C1AF4;
    return;
L_088C1AF4:
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
L_088C1B10:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088C1B28u);
    // nop
    goto L_088C1C68;
L_088C1B28:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25520)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088C1B3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088C1B3Cu) goto L_088C1B3C;
    return;
L_088C1B3C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1B50:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25520)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C1B90;
      }
      goto L_088C1B68;
    }
L_088C1B68:
    ctx.set_gpr(31, 0x088C1B70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088C1B70u) goto L_088C1B70;
    return;
L_088C1B70:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088C1B7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088C1B7Cu) goto L_088C1B7C;
    return;
L_088C1B7C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088C1B88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088C1B88u) goto L_088C1B88;
    return;
L_088C1B88:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(25520), ctx.gpr[2]);
    goto L_088C1B90;
L_088C1B90:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25520)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1BA8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25520)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C1BD4;
      }
      goto L_088C1BC0;
    }
L_088C1BC0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C1BDC;
      }
      goto L_088C1BD4;
    }
L_088C1BD4:
    ctx.set_gpr(31, 0x088C1BDCu);
    // nop
    goto L_088C1C68;
L_088C1BDC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25520)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1BF4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088C1C0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088C1C0Cu) goto L_088C1C0C;
    return;
L_088C1C0C:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18928));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(31, 0x088C1C24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088C1C24u) goto L_088C1C24;
    return;
L_088C1C24:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18928));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C1C50;
      }
      goto L_088C1C48;
    }
L_088C1C48:
    ctx.set_gpr(31, 0x088C1C50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088C1C50u) goto L_088C1C50;
    return;
L_088C1C50:
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
L_088C1C68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2188u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(7312));
    ctx.set_gpr(31, 0x088C1C80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088C1C80u) goto L_088C1C80;
    return;
L_088C1C80:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1C90:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C1CA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 385u, 0x088AD3A8u>(ctx, &aot_mem) && ctx.pc == 0x088C1CA0u) goto L_088C1CA0;
    return;
L_088C1CA0:
    ctx.set_gpr(2, 2188u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7468));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(18684));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(6, 2187u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8216));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9720));
    ctx.set_gpr(8, 2188u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(7436));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(18692));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(11, 2188u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(7156));
    ctx.set_gpr(31, 0x088C1CFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088C1CFCu) goto L_088C1CFC;
    return;
L_088C1CFC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1D0C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C1D1Cu);
    // nop
    goto L_088C1BA8;
L_088C1D1C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C1D2C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25520)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088C1D54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088C1D54u) goto L_088C1D54;
    return;
L_088C1D54:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(18712));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x088C1D70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088C1D70u) goto L_088C1D70;
    return;
L_088C1D70:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088C1D80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088C1D80u) goto L_088C1D80;
    return;
L_088C1D80:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(19008));
    ctx.set_gpr(31, 0x088C1D98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x088C1D98u) goto L_088C1D98;
    return;
L_088C1D98:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18924));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088C1DB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088C1DB4u) goto L_088C1DB4;
    return;
L_088C1DB4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(19012));
    ctx.set_gpr(31, 0x088C1DCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x088C1DCCu) goto L_088C1DCC;
    return;
L_088C1DCC:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18924));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088C1DE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088C1DE8u) goto L_088C1DE8;
    return;
L_088C1DE8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(19016));
    ctx.set_gpr(31, 0x088C1E00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x088C1E00u) goto L_088C1E00;
    return;
L_088C1E00:
    ctx.set_gpr(2, 2192u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(24480));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088C1E1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088C1E1Cu) goto L_088C1E1C;
    return;
L_088C1E1C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088C1E28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 260u, 0x089997B4u>(ctx, &aot_mem) && ctx.pc == 0x088C1E28u) goto L_088C1E28;
    return;
L_088C1E28:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088C1E50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088C1E50u) goto L_088C1E50;
    return;
L_088C1E50:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x088C1E60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 748u, 0x0895F1D0u>(ctx, &aot_mem) && ctx.pc == 0x088C1E60u) goto L_088C1E60;
    return;
L_088C1E60:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088C1E70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088C1E70u) goto L_088C1E70;
    return;
L_088C1E70:
    ctx.set_gpr(3, 2188u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(22848));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088C1E8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088C1E8Cu) goto L_088C1E8C;
    return;
L_088C1E8C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088C1EA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 643u, 0x0891EEE0u>(ctx, &aot_mem) && ctx.pc == 0x088C1EA0u) goto L_088C1EA0;
    return;
L_088C1EA0:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 2188u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(22960));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088C1EC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088C1EC0u) goto L_088C1EC0;
    return;
L_088C1EC0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(19020));
    ctx.set_gpr(31, 0x088C1ED8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x088C1ED8u) goto L_088C1ED8;
    return;
L_088C1ED8:
    ctx.set_gpr(2, 2188u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8132));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088C1EF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088C1EF4u) goto L_088C1EF4;
    return;
L_088C1EF4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(19024));
    ctx.set_gpr(31, 0x088C1F0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x088C1F0Cu) goto L_088C1F0C;
    return;
L_088C1F0C:
    ctx.set_gpr(2, 2188u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8132));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(9));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088C1F28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088C1F28u) goto L_088C1F28;
    return;
L_088C1F28:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(19028));
    ctx.set_gpr(31, 0x088C1F40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x088C1F40u) goto L_088C1F40;
    return;
L_088C1F40:
    ctx.set_gpr(2, 2188u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8224));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(10));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088C1F5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088C1F5Cu) goto L_088C1F5C;
    return;
L_088C1F5C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(19032));
    ctx.set_gpr(31, 0x088C1F74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x088C1F74u) goto L_088C1F74;
    return;
L_088C1F74:
    ctx.set_gpr(2, 2188u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8132));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(18876));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(18920));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(18964));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088C1FA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088C1FA8u) goto L_088C1FA8;
    return;
L_088C1FA8:
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
L_088C1FC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25568)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C2008;
      }
      goto L_088C1FDC;
    }
L_088C1FDC:
    ctx.set_gpr(4, 2227u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(19144));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(19120));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(19132));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x088C2000u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x088C2000u) goto L_088C2000;
    return;
L_088C2000:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(25568), ctx.gpr[2]);
    goto L_088C2008;
L_088C2008:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25568)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2020:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25572)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C2064;
      }
      goto L_088C2038;
    }
L_088C2038:
    ctx.set_gpr(4, 2227u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(19284));
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(19260));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(19272));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x088C205Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x088C205Cu) goto L_088C205C;
    return;
L_088C205C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(25572), ctx.gpr[2]);
    goto L_088C2064;
L_088C2064:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25572)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C207C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25576)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C20BC;
      }
      goto L_088C2094;
    }
L_088C2094:
    ctx.set_gpr(31, 0x088C209Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088C209Cu) goto L_088C209C;
    return;
L_088C209C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088C20A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088C20A8u) goto L_088C20A8;
    return;
L_088C20A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088C20B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088C20B4u) goto L_088C20B4;
    return;
L_088C20B4:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(25576), ctx.gpr[2]);
    goto L_088C20BC;
L_088C20BC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25576)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C20D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25576)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C2100;
      }
      goto L_088C20EC;
    }
L_088C20EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C2108;
      }
      goto L_088C2100;
    }
L_088C2100:
    ctx.set_gpr(31, 0x088C2108u);
    // nop
    goto L_088C2164;
L_088C2108:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25576)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2120:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088C2134u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x088C2134u) goto L_088C2134;
    return;
L_088C2134:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-17232));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088C2148u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088C2148u) goto L_088C2148;
    return;
L_088C2148:
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
L_088C2164:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2188u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8588));
    ctx.set_gpr(31, 0x088C217Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088C217Cu) goto L_088C217C;
    return;
L_088C217C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C218C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C219Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 385u, 0x088AD3A8u>(ctx, &aot_mem) && ctx.pc == 0x088C219Cu) goto L_088C219C;
    return;
L_088C219C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(19316));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(25576));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2188u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(8704));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(19324));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2188u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(8480));
    ctx.set_gpr(31, 0x088C21F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088C21F0u) goto L_088C21F0;
    return;
L_088C21F0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2200:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C2210u);
    // nop
    goto L_088C20D4;
L_088C2210:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2220:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25580)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C224C;
      }
      goto L_088C2238;
    }
L_088C2238:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C2254;
      }
      goto L_088C224C;
    }
L_088C224C:
    ctx.set_gpr(31, 0x088C2254u);
    // nop
    goto L_088C22B0;
L_088C2254:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25580)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C226C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088C2280u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x088C2280u) goto L_088C2280;
    return;
L_088C2280:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-17336));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088C2294u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088C2294u) goto L_088C2294;
    return;
L_088C2294:
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
L_088C22B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2188u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8920));
    ctx.set_gpr(31, 0x088C22C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088C22C8u) goto L_088C22C8;
    return;
L_088C22C8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C22D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C22E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 385u, 0x088AD3A8u>(ctx, &aot_mem) && ctx.pc == 0x088C22E8u) goto L_088C22E8;
    return;
L_088C22E8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(19344));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(25580));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2188u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(9036));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(19352));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2188u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(8812));
    ctx.set_gpr(31, 0x088C233Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088C233Cu) goto L_088C233C;
    return;
L_088C233C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C234C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C235Cu);
    // nop
    goto L_088C2220;
L_088C235C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C236C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25584)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C23AC;
      }
      goto L_088C2384;
    }
L_088C2384:
    ctx.set_gpr(31, 0x088C238Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088C238Cu) goto L_088C238C;
    return;
L_088C238C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088C2398u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088C2398u) goto L_088C2398;
    return;
L_088C2398:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088C23A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088C23A4u) goto L_088C23A4;
    return;
L_088C23A4:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(25584), ctx.gpr[2]);
    goto L_088C23AC;
L_088C23AC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25584)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C23C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25584)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C23F0;
      }
      goto L_088C23DC;
    }
L_088C23DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C23F8;
      }
      goto L_088C23F0;
    }
L_088C23F0:
    ctx.set_gpr(31, 0x088C23F8u);
    // nop
    goto L_088C2454;
L_088C23F8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25584)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2410:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088C2424u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x088C2424u) goto L_088C2424;
    return;
L_088C2424:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-17440));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088C2438u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088C2438u) goto L_088C2438;
    return;
L_088C2438:
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
L_088C2454:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2188u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(9340));
    ctx.set_gpr(31, 0x088C246Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088C246Cu) goto L_088C246C;
    return;
L_088C246C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C247C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C248Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 385u, 0x088AD3A8u>(ctx, &aot_mem) && ctx.pc == 0x088C248Cu) goto L_088C248C;
    return;
L_088C248C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(19372));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(25584));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2188u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(9456));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(19380));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2188u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(9232));
    ctx.set_gpr(31, 0x088C24E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088C24E0u) goto L_088C24E0;
    return;
L_088C24E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C24F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C2500u);
    // nop
    goto L_088C23C4;
L_088C2500:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2510:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25588)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C2550;
      }
      goto L_088C2528;
    }
L_088C2528:
    ctx.set_gpr(31, 0x088C2530u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088C2530u) goto L_088C2530;
    return;
L_088C2530:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088C253Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088C253Cu) goto L_088C253C;
    return;
L_088C253C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088C2548u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088C2548u) goto L_088C2548;
    return;
L_088C2548:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(25588), ctx.gpr[2]);
    goto L_088C2550;
L_088C2550:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25588)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2568:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25588)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C2594;
      }
      goto L_088C2580;
    }
L_088C2580:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C259C;
      }
      goto L_088C2594;
    }
L_088C2594:
    ctx.set_gpr(31, 0x088C259Cu);
    // nop
    goto L_088C25F8;
L_088C259C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25588)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C25B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088C25C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x088C25C8u) goto L_088C25C8;
    return;
L_088C25C8:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-17544));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088C25DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088C25DCu) goto L_088C25DC;
    return;
L_088C25DC:
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
L_088C25F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2188u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(9760));
    ctx.set_gpr(31, 0x088C2610u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088C2610u) goto L_088C2610;
    return;
L_088C2610:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2620:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C2630u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 385u, 0x088AD3A8u>(ctx, &aot_mem) && ctx.pc == 0x088C2630u) goto L_088C2630;
    return;
L_088C2630:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(19396));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(25588));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2188u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(9876));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(19404));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2188u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(9652));
    ctx.set_gpr(31, 0x088C2684u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088C2684u) goto L_088C2684;
    return;
L_088C2684:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2694:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C26A4u);
    // nop
    goto L_088C2568;
L_088C26A4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C26B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25592)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C26F4;
      }
      goto L_088C26CC;
    }
L_088C26CC:
    ctx.set_gpr(31, 0x088C26D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088C26D4u) goto L_088C26D4;
    return;
L_088C26D4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088C26E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088C26E0u) goto L_088C26E0;
    return;
L_088C26E0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088C26ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088C26ECu) goto L_088C26EC;
    return;
L_088C26EC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(25592), ctx.gpr[2]);
    goto L_088C26F4;
L_088C26F4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25592)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C270C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25592)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C2738;
      }
      goto L_088C2724;
    }
L_088C2724:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C2740;
      }
      goto L_088C2738;
    }
L_088C2738:
    ctx.set_gpr(31, 0x088C2740u);
    // nop
    goto L_088C279C;
L_088C2740:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25592)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2758:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088C276Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x088C276Cu) goto L_088C276C;
    return;
L_088C276C:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-17648));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088C2780u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088C2780u) goto L_088C2780;
    return;
L_088C2780:
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
L_088C279C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2188u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(10180));
    ctx.set_gpr(31, 0x088C27B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088C27B4u) goto L_088C27B4;
    return;
L_088C27B4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C27C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C27D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 385u, 0x088AD3A8u>(ctx, &aot_mem) && ctx.pc == 0x088C27D4u) goto L_088C27D4;
    return;
L_088C27D4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(19428));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(25592));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2188u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(10296));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(19436));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2188u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(10072));
    ctx.set_gpr(31, 0x088C2828u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088C2828u) goto L_088C2828;
    return;
L_088C2828:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2838:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C2848u);
    // nop
    goto L_088C270C;
L_088C2848:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2858:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088C2870u);
    // nop
    goto L_088C2988;
L_088C2870:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25596)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088C2884u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088C2884u) goto L_088C2884;
    return;
L_088C2884:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2898:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25596)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C28C4;
      }
      goto L_088C28B0;
    }
L_088C28B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C28CC;
      }
      goto L_088C28C4;
    }
L_088C28C4:
    ctx.set_gpr(31, 0x088C28CCu);
    // nop
    goto L_088C2988;
L_088C28CC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25596)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C28E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088C28FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088C28FCu) goto L_088C28FC;
    return;
L_088C28FC:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18784));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(31, 0x088C291Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088C291Cu) goto L_088C291C;
    return;
L_088C291C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18784));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C2948;
      }
      goto L_088C2940;
    }
L_088C2940:
    ctx.set_gpr(31, 0x088C2948u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088C2948u) goto L_088C2948;
    return;
L_088C2948:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C295C;
      }
      goto L_088C2954;
    }
L_088C2954:
    ctx.set_gpr(31, 0x088C295Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088C295Cu) goto L_088C295C;
    return;
L_088C295C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C2970;
      }
      goto L_088C2968;
    }
L_088C2968:
    ctx.set_gpr(31, 0x088C2970u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x088C2970u) goto L_088C2970;
    return;
L_088C2970:
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
L_088C2988:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2188u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(10672));
    ctx.set_gpr(31, 0x088C29A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088C29A0u) goto L_088C29A0;
    return;
L_088C29A0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C29B0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C29C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 385u, 0x088AD3A8u>(ctx, &aot_mem) && ctx.pc == 0x088C29C0u) goto L_088C29C0;
    return;
L_088C29C0:
    ctx.set_gpr(2, 2188u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(10836));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2188u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(11108));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(19460));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(25596));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2188u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(10804));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(19472));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2188u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(10468));
    ctx.set_gpr(31, 0x088C2A24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088C2A24u) goto L_088C2A24;
    return;
L_088C2A24:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2A34:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C2A44u);
    // nop
    goto L_088C2898;
L_088C2A44:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2A54:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25596)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088C2A7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088C2A7Cu) goto L_088C2A7C;
    return;
L_088C2A7C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(19484));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x088C2A98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088C2A98u) goto L_088C2A98;
    return;
L_088C2A98:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088C2AA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088C2AA8u) goto L_088C2AA8;
    return;
L_088C2AA8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088C2AB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 165u, 0x088F8EA8u>(ctx, &aot_mem) && ctx.pc == 0x088C2AB4u) goto L_088C2AB4;
    return;
L_088C2AB4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088C2AD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088C2AD0u) goto L_088C2AD0;
    return;
L_088C2AD0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088C2ADCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0061_entry, 61u, 165u, 0x088F8EA8u>(ctx, &aot_mem) && ctx.pc == 0x088C2ADCu) goto L_088C2ADC;
    return;
L_088C2ADC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088C2AF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088C2AF8u) goto L_088C2AF8;
    return;
L_088C2AF8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088C2B04u);
    // nop
    goto L_088C3344;
L_088C2B04:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(19548));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(19560));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(19572));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088C2B38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088C2B38u) goto L_088C2B38;
    return;
L_088C2B38:
    ctx.set_gpr(4, 2188u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(11140));
    ctx.set_gpr(31, 0x088C2B48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 237u, 0x089451B8u>(ctx, &aot_mem) && ctx.pc == 0x088C2B48u) goto L_088C2B48;
    return;
L_088C2B48:
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
L_088C2B64:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C2B74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 272u, 0x088C5684u>(ctx, &aot_mem) && ctx.pc == 0x088C2B74u) goto L_088C2B74;
    return;
L_088C2B74:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2B84:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C2B94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 270u, 0x088C5658u>(ctx, &aot_mem) && ctx.pc == 0x088C2B94u) goto L_088C2B94;
    return;
L_088C2B94:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2BA4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25612)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C2BE4;
      }
      goto L_088C2BBC;
    }
L_088C2BBC:
    ctx.set_gpr(31, 0x088C2BC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088C2BC4u) goto L_088C2BC4;
    return;
L_088C2BC4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088C2BD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088C2BD0u) goto L_088C2BD0;
    return;
L_088C2BD0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088C2BDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088C2BDCu) goto L_088C2BDC;
    return;
L_088C2BDC:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(25612), ctx.gpr[2]);
    goto L_088C2BE4;
L_088C2BE4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25612)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2BFC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25612)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C2C28;
      }
      goto L_088C2C14;
    }
L_088C2C14:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C2C30;
      }
      goto L_088C2C28;
    }
L_088C2C28:
    ctx.set_gpr(31, 0x088C2C30u);
    // nop
    goto L_088C2C48;
L_088C2C30:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25612)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2C48:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2188u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(11376));
    ctx.set_gpr(31, 0x088C2C60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088C2C60u) goto L_088C2C60;
    return;
L_088C2C60:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2C70:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C2C80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 385u, 0x088AD3A8u>(ctx, &aot_mem) && ctx.pc == 0x088C2C80u) goto L_088C2C80;
    return;
L_088C2C80:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(25612));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2188u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(11480));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(19584));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x088C2CC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088C2CC8u) goto L_088C2CC8;
    return;
L_088C2CC8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2CD8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C2CE8u);
    // nop
    goto L_088C2BFC;
L_088C2CE8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2CF8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25616)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C2D38;
      }
      goto L_088C2D10;
    }
L_088C2D10:
    ctx.set_gpr(31, 0x088C2D18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088C2D18u) goto L_088C2D18;
    return;
L_088C2D18:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088C2D24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088C2D24u) goto L_088C2D24;
    return;
L_088C2D24:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088C2D30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088C2D30u) goto L_088C2D30;
    return;
L_088C2D30:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(25616), ctx.gpr[2]);
    goto L_088C2D38;
L_088C2D38:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25616)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2D50:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25616)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C2D7C;
      }
      goto L_088C2D68;
    }
L_088C2D68:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C2D84;
      }
      goto L_088C2D7C;
    }
L_088C2D7C:
    ctx.set_gpr(31, 0x088C2D84u);
    // nop
    goto L_088C2D9C;
L_088C2D84:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25616)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2D9C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2188u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(11716));
    ctx.set_gpr(31, 0x088C2DB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088C2DB4u) goto L_088C2DB4;
    return;
L_088C2DB4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2DC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C2DD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 385u, 0x088AD3A8u>(ctx, &aot_mem) && ctx.pc == 0x088C2DD4u) goto L_088C2DD4;
    return;
L_088C2DD4:
    ctx.set_gpr(2, 2188u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(11868));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2188u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(12060));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(25616));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2188u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(11836));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(19608));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x088C2E2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088C2E2Cu) goto L_088C2E2C;
    return;
L_088C2E2C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2E3C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C2E4Cu);
    // nop
    goto L_088C2D50;
L_088C2E4C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2E5C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25616)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088C2E84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088C2E84u) goto L_088C2E84;
    return;
L_088C2E84:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(19616));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088C2EA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088C2EA0u) goto L_088C2EA0;
    return;
L_088C2EA0:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088C2EB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088C2EB0u) goto L_088C2EB0;
    return;
L_088C2EB0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088C2EC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 58u, 0x08958488u>(ctx, &aot_mem) && ctx.pc == 0x088C2EC4u) goto L_088C2EC4;
    return;
L_088C2EC4:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(19660));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(19668));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(19676));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088C2EF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088C2EF0u) goto L_088C2EF0;
    return;
L_088C2EF0:
    ctx.set_gpr(4, 2188u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12108));
    ctx.set_gpr(31, 0x088C2F00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 237u, 0x089451B8u>(ctx, &aot_mem) && ctx.pc == 0x088C2F00u) goto L_088C2F00;
    return;
L_088C2F00:
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
L_088C2F1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C2F2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 117u, 0x088C4C30u>(ctx, &aot_mem) && ctx.pc == 0x088C2F2Cu) goto L_088C2F2C;
    return;
L_088C2F2C:
    ctx.set_gpr(4, 2188u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(20412));
    ctx.set_gpr(31, 0x088C2F3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 240u, 0x089451F4u>(ctx, &aot_mem) && ctx.pc == 0x088C2F3Cu) goto L_088C2F3C;
    return;
L_088C2F3C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2F4C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C2F5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 115u, 0x088C4C04u>(ctx, &aot_mem) && ctx.pc == 0x088C2F5Cu) goto L_088C2F5C;
    return;
L_088C2F5C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2F6C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088C2F84u);
    // nop
    goto L_088C3094;
L_088C2F84:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25628)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088C2F98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088C2F98u) goto L_088C2F98;
    return;
L_088C2F98:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C2FAC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25628)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C2FEC;
      }
      goto L_088C2FC4;
    }
L_088C2FC4:
    ctx.set_gpr(31, 0x088C2FCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088C2FCCu) goto L_088C2FCC;
    return;
L_088C2FCC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088C2FD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088C2FD8u) goto L_088C2FD8;
    return;
L_088C2FD8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088C2FE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088C2FE4u) goto L_088C2FE4;
    return;
L_088C2FE4:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(25628), ctx.gpr[2]);
    goto L_088C2FEC;
L_088C2FEC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25628)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C3004:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25628)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3030;
      }
      goto L_088C301C;
    }
L_088C301C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C3038;
      }
      goto L_088C3030;
    }
L_088C3030:
    ctx.set_gpr(31, 0x088C3038u);
    // nop
    goto L_088C3094;
L_088C3038:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25628)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C3050:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088C3064u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x088C3064u) goto L_088C3064;
    return;
L_088C3064:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-17752));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088C3078u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088C3078u) goto L_088C3078;
    return;
L_088C3078:
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
L_088C3094:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2188u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12476));
    ctx.set_gpr(31, 0x088C30ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088C30ACu) goto L_088C30AC;
    return;
L_088C30AC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C30BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C30CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 385u, 0x088AD3A8u>(ctx, &aot_mem) && ctx.pc == 0x088C30CCu) goto L_088C30CC;
    return;
L_088C30CC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(19684));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(25628));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2188u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(12592));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(19692));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2188u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(12368));
    ctx.set_gpr(31, 0x088C3120u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088C3120u) goto L_088C3120;
    return;
L_088C3120:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C3130:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C3140u);
    // nop
    goto L_088C3004;
L_088C3140:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C3150:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088C3168u);
    // nop
    goto L_088C3278;
L_088C3168:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25632)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088C317Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088C317Cu) goto L_088C317C;
    return;
L_088C317C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C3190:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25632)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C31D0;
      }
      goto L_088C31A8;
    }
L_088C31A8:
    ctx.set_gpr(31, 0x088C31B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088C31B0u) goto L_088C31B0;
    return;
L_088C31B0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088C31BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088C31BCu) goto L_088C31BC;
    return;
L_088C31BC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088C31C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088C31C8u) goto L_088C31C8;
    return;
L_088C31C8:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(25632), ctx.gpr[2]);
    goto L_088C31D0;
L_088C31D0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25632)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C31E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25632)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3214;
      }
      goto L_088C3200;
    }
L_088C3200:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C321C;
      }
      goto L_088C3214;
    }
L_088C3214:
    ctx.set_gpr(31, 0x088C321Cu);
    // nop
    goto L_088C3278;
L_088C321C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25632)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C3234:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088C3248u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x088C3248u) goto L_088C3248;
    return;
L_088C3248:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-17960));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088C325Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088C325Cu) goto L_088C325C;
    return;
L_088C325C:
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
L_088C3278:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2188u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.set_gpr(31, 0x088C3290u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088C3290u) goto L_088C3290;
    return;
L_088C3290:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C32A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C32B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 385u, 0x088AD3A8u>(ctx, &aot_mem) && ctx.pc == 0x088C32B0u) goto L_088C32B0;
    return;
L_088C32B0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(19704));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(25632));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-11416));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(13108));
    ctx.set_gpr(8, 2188u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(13076));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(19712));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2188u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(12852));
    ctx.set_gpr(31, 0x088C3304u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088C3304u) goto L_088C3304;
    return;
L_088C3304:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C3314:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C3324u);
    // nop
    goto L_088C31E8;
L_088C3324:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C3334:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28872)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C3344:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25636)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C3384;
      }
      goto L_088C335C;
    }
L_088C335C:
    ctx.set_gpr(31, 0x088C3364u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x088C3364u) goto L_088C3364;
    return;
L_088C3364:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x088C3370u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x088C3370u) goto L_088C3370;
    return;
L_088C3370:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088C337Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x088C337Cu) goto L_088C337C;
    return;
L_088C337C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(25636), ctx.gpr[2]);
    goto L_088C3384;
L_088C3384:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25636)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C339C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25636)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C33C8;
      }
      goto L_088C33B4;
    }
L_088C33B4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C33D0;
      }
      goto L_088C33C8;
    }
L_088C33C8:
    ctx.set_gpr(31, 0x088C33D0u);
    // nop
    goto L_088C342C;
L_088C33D0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25636)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C33E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088C33FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x088C33FCu) goto L_088C33FC;
    return;
L_088C33FC:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18064));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088C3410u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088C3410u) goto L_088C3410;
    return;
L_088C3410:
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
L_088C342C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2188u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(13396));
    ctx.set_gpr(31, 0x088C3444u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088C3444u) goto L_088C3444;
    return;
L_088C3444:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C3454:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C3464u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 385u, 0x088AD3A8u>(ctx, &aot_mem) && ctx.pc == 0x088C3464u) goto L_088C3464;
    return;
L_088C3464:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(19736));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(25636));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2188u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(13512));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(19744));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2188u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(13288));
    ctx.set_gpr(31, 0x088C34B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088C34B8u) goto L_088C34B8;
    return;
L_088C34B8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C34C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C34D8u);
    // nop
    goto L_088C339C;
L_088C34D8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C34E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25640)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3514;
      }
      goto L_088C3500;
    }
L_088C3500:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C351C;
      }
      goto L_088C3514;
    }
L_088C3514:
    ctx.set_gpr(31, 0x088C351Cu);
    // nop
    goto L_088C35C0;
L_088C351C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25640)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C3534:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088C3548u);
    // nop
    goto L_088C3578;
L_088C3548:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18272));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088C355Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088C355Cu) goto L_088C355C;
    return;
L_088C355C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C3578:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088C3590u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088C3590u) goto L_088C3590;
    return;
L_088C3590:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1096));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15276));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
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
L_088C35C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2188u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(13800));
    ctx.set_gpr(31, 0x088C35D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088C35D8u) goto L_088C35D8;
    return;
L_088C35D8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C35E8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C35F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 385u, 0x088AD3A8u>(ctx, &aot_mem) && ctx.pc == 0x088C35F8u) goto L_088C35F8;
    return;
L_088C35F8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2227u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(19760));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(25640));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(29800));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(13948));
    ctx.set_gpr(8, 2188u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(13916));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(19768));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(11, 2188u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(13620));
    ctx.set_gpr(31, 0x088C364Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088C364Cu) goto L_088C364C;
    return;
L_088C364C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C365C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C366Cu);
    // nop
    goto L_088C34E8;
L_088C366C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C367C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28336)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C368C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088C36A4u);
    // nop
    goto L_088C375C;
L_088C36A4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25644)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088C36B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088C36B8u) goto L_088C36B8;
    return;
L_088C36B8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C36CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25644)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C36F8;
      }
      goto L_088C36E4;
    }
L_088C36E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C3700;
      }
      goto L_088C36F8;
    }
L_088C36F8:
    ctx.set_gpr(31, 0x088C3700u);
    // nop
    goto L_088C375C;
L_088C3700:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25644)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C3718:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088C372Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088C372Cu) goto L_088C372C;
    return;
L_088C372C:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18556));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088C3740u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088C3740u) goto L_088C3740;
    return;
L_088C3740:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C375C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2188u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(14212));
    ctx.set_gpr(31, 0x088C3774u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088C3774u) goto L_088C3774;
    return;
L_088C3774:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C3784:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C3794u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 385u, 0x088AD3A8u>(ctx, &aot_mem) && ctx.pc == 0x088C3794u) goto L_088C3794;
    return;
L_088C3794:
    ctx.set_gpr(2, 2188u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(14360));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(25644));
    ctx.set_gpr(6, 2187u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8216));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9720));
    ctx.set_gpr(8, 2188u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(14328));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(19784));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(11, 2188u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(14104));
    ctx.set_gpr(31, 0x088C37E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088C37E8u) goto L_088C37E8;
    return;
L_088C37E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C37F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C3808u);
    // nop
    goto L_088C36CC;
L_088C3808:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C3818:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25644)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088C383Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088C383Cu) goto L_088C383C;
    return;
L_088C383C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(19804));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088C3858u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088C3858u) goto L_088C3858;
    return;
L_088C3858:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(19808));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(19812));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(19816));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088C3880u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088C3880u) goto L_088C3880;
    return;
L_088C3880:
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
L_088C3898:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088C38B0u);
    // nop
    goto L_088C3968;
L_088C38B0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25652)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088C38C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x088C38C4u) goto L_088C38C4;
    return;
L_088C38C4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C38D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25652)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3904;
      }
      goto L_088C38F0;
    }
L_088C38F0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C390C;
      }
      goto L_088C3904;
    }
L_088C3904:
    ctx.set_gpr(31, 0x088C390Cu);
    // nop
    goto L_088C3968;
L_088C390C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25652)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C3924:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x088C3938u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x088C3938u) goto L_088C3938;
    return;
L_088C3938:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18416));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088C394Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x088C394Cu) goto L_088C394C;
    return;
L_088C394C:
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
L_088C3968:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2188u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(14736));
    ctx.set_gpr(31, 0x088C3980u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x088C3980u) goto L_088C3980;
    return;
L_088C3980:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C3990:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C39A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 385u, 0x088AD3A8u>(ctx, &aot_mem) && ctx.pc == 0x088C39A0u) goto L_088C39A0;
    return;
L_088C39A0:
    ctx.set_gpr(2, 2188u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(14884));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(25652));
    ctx.set_gpr(6, 2187u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-8216));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9720));
    ctx.set_gpr(8, 2188u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(14852));
    ctx.set_gpr(9, 2227u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(19820));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2188u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(14628));
    ctx.set_gpr(31, 0x088C39F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x088C39F4u) goto L_088C39F4;
    return;
L_088C39F4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C3A04:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x088C3A14u);
    // nop
    goto L_088C38D8;
L_088C3A14:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C3A24:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(25652)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088C3A4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x088C3A4Cu) goto L_088C3A4C;
    return;
L_088C3A4C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(19840));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088C3A68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x088C3A68u) goto L_088C3A68;
    return;
L_088C3A68:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088C3A78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x088C3A78u) goto L_088C3A78;
    return;
L_088C3A78:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(19872));
    ctx.set_gpr(31, 0x088C3A90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x088C3A90u) goto L_088C3A90;
    return;
L_088C3A90:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18740));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2227u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(19848));
    ctx.set_gpr(6, 2227u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(19856));
    ctx.set_gpr(7, 2227u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(19864));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088C3AC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x088C3AC4u) goto L_088C3AC4;
    return;
L_088C3AC4:
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
L_088C3AE0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(0u));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(0u));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(14), static_cast<std::uint16_t>(0u));
    rt.memory().aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(0u));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(116), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(120), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(124), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(128), 0u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(116)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(88)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(148), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(144), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(140), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(136), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(132), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(152), 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(156), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(224));
    ctx.set_gpr(5, 2226u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-28056));
    ctx.set_gpr(31, 0x088C3BCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x088C3BCCu) goto L_088C3BCC;
    return;
L_088C3BCC:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(224));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(160));
    ctx.set_gpr(31, 0x088C3BDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 747u, 0x089FFC4Cu>(ctx, &aot_mem) && ctx.pc == 0x088C3BDCu) goto L_088C3BDC;
    return;
L_088C3BDC:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(292), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(288), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(296), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(316), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(304), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(308), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(320), 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C3C10:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(308)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(300)));
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(304)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3C94;
      }
      goto L_088C3C48;
    }
L_088C3C48:
    ctx.set_gpr(2, ctx.gpr[4] << 1u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(304)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(308)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x088C3C6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 424u, 0x08929E04u>(ctx, &aot_mem) && ctx.pc == 0x088C3C6Cu) goto L_088C3C6C;
    return;
L_088C3C6C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(304)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088C3C94;
      }
      goto L_088C3C7C;
    }
L_088C3C7C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(300)));
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(300), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(304)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_088C3C94;
L_088C3C94:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C3CA8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C3CD4;
      }
      goto L_088C3CC8;
    }
L_088C3CC8:
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3CD8;
      }
      goto L_088C3CD4;
    }
L_088C3CD4:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(1));
    goto L_088C3CD8;
L_088C3CD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C3D04;
      }
      goto L_088C3CE0;
    }
L_088C3CE0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088C3CF0u);
    // nop
    goto L_088C3C10;
L_088C3CF0:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(300)));
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(300), ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_088C3D04;
L_088C3D04:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(300)));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_088C3CE0;
      }
      goto L_088C3D18;
    }
L_088C3D18:
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
L_088C3D30:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088C3D54u);
    // nop
    goto L_088C3C10;
L_088C3D54:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(300)));
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(300), ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[16]));
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
L_088C3D7C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x088C3D9Cu);
    // nop
    goto L_088C3C10;
L_088C3D9C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(300)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(300), ctx.gpr[3]);
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
L_088C3DC0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(1, ctx.gpr[3] < static_cast<std::uint32_t>(56) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 87u, 0x088C4950u>(ctx, &aot_mem); return;
      }
      goto L_088C3DEC;
    }
L_088C3DEC:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(31596));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[3];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C3E08:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088C3E14u);
    // nop
    goto L_088C3D7C;
L_088C3E14:
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 87u, 0x088C4950u>(ctx, &aot_mem); return;
      }
      goto L_088C3E20;
    }
L_088C3E20:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088C3E2Cu);
    // nop
    goto L_088C3D7C;
L_088C3E2C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 87u, 0x088C4950u>(ctx, &aot_mem); return;
      }
      goto L_088C3E3C;
    }
L_088C3E3C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088C3E48u);
    // nop
    goto L_088C3D7C;
L_088C3E48:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(132)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 87u, 0x088C4950u>(ctx, &aot_mem); return;
      }
      goto L_088C3E58;
    }
L_088C3E58:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088C3E64u);
    // nop
    goto L_088C3D7C;
L_088C3E64:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(5))))));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 87u, 0x088C4950u>(ctx, &aot_mem); return;
      }
      goto L_088C3E74;
    }
L_088C3E74:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x088C3E80u);
    // nop
    goto L_088C3D7C;
L_088C3E80:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(5))))));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 87u, 0x088C4950u>(ctx, &aot_mem); return;
      }
      goto L_088C3E98;
    }
L_088C3E98:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088C3EA4u);
    // nop
    goto L_088C3D7C;
L_088C3EA4:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(rt.memory().aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(12))))));
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 87u, 0x088C4950u>(ctx, &aot_mem); return;
      }
      goto L_088C3EB4;
    }
L_088C3EB4:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x088C3EC0u);
    // nop
    goto L_088C3D7C;
L_088C3EC0:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 87u, 0x088C4950u>(ctx, &aot_mem); return;
      }
      goto L_088C3ED0;
    }
L_088C3ED0:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x088C3EDCu);
    // nop
    goto L_088C3D7C;
L_088C3EDC:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 87u, 0x088C4950u>(ctx, &aot_mem); return;
      }
      goto L_088C3EF4;
    }
L_088C3EF4:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x088C3F00u);
    // nop
    goto L_088C3D7C;
L_088C3F00:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(5))))));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 87u, 0x088C4950u>(ctx, &aot_mem); return;
      }
      goto L_088C3F18;
    }
L_088C3F18:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x088C3F24u);
    // nop
    goto L_088C3D7C;
L_088C3F24:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(5))))));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 87u, 0x088C4950u>(ctx, &aot_mem); return;
      }
      goto L_088C3F3C;
    }
L_088C3F3C:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x088C3F48u);
    // nop
    goto L_088C3D7C;
L_088C3F48:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(5))))));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(6))))));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 87u, 0x088C4950u>(ctx, &aot_mem); return;
      }
      goto L_088C3F68;
    }
L_088C3F68:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x088C3F74u);
    // nop
    goto L_088C3D7C;
L_088C3F74:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(5))))));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(6))))));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(7))))));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(8))))));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(9))))));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 87u, 0x088C4950u>(ctx, &aot_mem); return;
      }
      goto L_088C3FAC;
    }
L_088C3FAC:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(31, 0x088C3FB8u);
    // nop
    goto L_088C3D7C;
L_088C3FB8:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(5))))));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(6))))));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(7))))));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(8))))));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(9))))));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 87u, 0x088C4950u>(ctx, &aot_mem); return;
      }
      goto L_088C3FF8;
    }
L_088C3FF8:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(31, 0x088C4004u);
    // nop
    goto L_088C3D7C;
}

void recomp_unit_0047(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0047_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_47(Runtime &runtime) {
    runtime.register_generated_unit(47u, 0x088C0000u, 16384u, &recomp_unit_0047, &recomp_unit_0047_entry);
    runtime.register_function(0x088C0000u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0008u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0018u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0040u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C005Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C006Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0084u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C00A0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C00ACu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C00C0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C00CCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C00E0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C00ECu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0118u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0134u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C014Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0170u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0178u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0190u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C01A8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C01BCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C01C4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C01DCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C01F0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0204u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0220u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0238u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0248u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0258u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C02ACu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C02BCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C02CCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C02DCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0304u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0320u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0330u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0348u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C037Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0398u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C03B0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C03C4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C03D8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C03F0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0404u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C040Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0424u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0438u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C044Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0468u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0480u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0490u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C04A0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C04F4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0504u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0514u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0524u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0548u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0564u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0574u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0584u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0594u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C05A4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C05B4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C05C4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C05D4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C05E4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C060Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0624u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C063Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0644u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0650u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C065Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0664u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C067Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0694u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C06A8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C06B0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C06C8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C06DCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C06F0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C070Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0724u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0734u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0744u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C07A0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C07B0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C07C0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C07D0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C07F8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0814u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0824u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C084Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0868u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C087Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C08A8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C08B8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C08D4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C08E4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C08F4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0904u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0914u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C092Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0934u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0940u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C094Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0954u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C096Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0984u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0998u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C09A0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C09B8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C09CCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C09E0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C09FCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0A14u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0A24u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0A34u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0A88u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0A98u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0AA8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0AB8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0ADCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0AF8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0B08u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0B18u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0B40u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0B58u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0B70u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0B84u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0B98u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0BB0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0BC4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0BCCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0BE4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0BF8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0C0Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0C28u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0C40u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0C50u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0C60u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0CB4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0CC4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0CD4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0CE4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0D0Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0D28u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0D38u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0D5Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0D6Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0D8Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0D9Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0DB0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0DC0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0DD4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0DE8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0E00u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0E2Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0E48u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0E60u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0E74u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0E7Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0E94u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0EA8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0EBCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0ED8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0EF0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0F00u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0F10u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0F64u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0F74u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0F84u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0F94u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0FB8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0FD4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C0FFCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1014u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C102Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1040u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1048u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1060u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1074u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1088u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C10A4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C10BCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C10CCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C10DCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1130u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1140u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1150u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1160u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1184u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C11A0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C11C8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C11E0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C11F8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C120Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1220u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1238u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1240u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C124Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1258u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1260u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1278u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1290u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C12A4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C12ACu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C12C4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C12D8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C12ECu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1308u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1320u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1330u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1340u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1394u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C13A4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C13B4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C13C4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C13E8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1404u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C142Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1444u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C145Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1470u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1484u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C149Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C14A4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C14B0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C14BCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C14C4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C14DCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C14F4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1508u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1510u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1528u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C153Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1550u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C156Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1584u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1594u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C15A4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C15F8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1608u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1618u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1628u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1650u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C166Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C167Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1688u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C16ACu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C16B8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C16F4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1710u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1728u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1730u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C173Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1748u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1750u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1768u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1780u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1794u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C179Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C17B4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C17C8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C17DCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C17F8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1810u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1820u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1830u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1884u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1894u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C18A4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C18B4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C18CCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C18D4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C18E0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C18ECu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C18F4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C190Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1924u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1938u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1940u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1958u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C196Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1980u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C199Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C19B4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C19C4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C19D4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1A28u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1A38u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1A48u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1A58u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1A80u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1A9Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1AACu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1AB8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1AF4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1B10u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1B28u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1B3Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1B50u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1B68u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1B70u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1B7Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1B88u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1B90u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1BA8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1BC0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1BD4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1BDCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1BF4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1C0Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1C24u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1C48u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1C50u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1C68u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1C80u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1C90u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1CA0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1CFCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1D0Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1D1Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1D2Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1D54u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1D70u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1D80u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1D98u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1DB4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1DCCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1DE8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1E00u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1E1Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1E28u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1E50u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1E60u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1E70u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1E8Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1EA0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1EC0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1ED8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1EF4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1F0Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1F28u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1F40u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1F5Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1F74u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1FA8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1FC4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C1FDCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2000u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2008u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2020u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2038u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C205Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2064u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C207Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2094u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C209Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C20A8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C20B4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C20BCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C20D4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C20ECu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2100u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2108u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2120u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2134u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2148u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2164u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C217Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C218Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C219Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C21F0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2200u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2210u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2220u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2238u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C224Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2254u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C226Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2280u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2294u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C22B0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C22C8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C22D8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C22E8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C233Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C234Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C235Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C236Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2384u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C238Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2398u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C23A4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C23ACu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C23C4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C23DCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C23F0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C23F8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2410u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2424u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2438u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2454u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C246Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C247Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C248Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C24E0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C24F0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2500u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2510u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2528u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2530u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C253Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2548u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2550u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2568u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2580u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2594u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C259Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C25B4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C25C8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C25DCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C25F8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2610u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2620u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2630u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2684u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2694u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C26A4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C26B4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C26CCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C26D4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C26E0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C26ECu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C26F4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C270Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2724u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2738u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2740u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2758u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C276Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2780u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C279Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C27B4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C27C4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C27D4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2828u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2838u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2848u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2858u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2870u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2884u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2898u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C28B0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C28C4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C28CCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C28E4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C28FCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C291Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2940u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2948u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2954u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C295Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2968u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2970u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2988u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C29A0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C29B0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C29C0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2A24u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2A34u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2A44u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2A54u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2A7Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2A98u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2AA8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2AB4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2AD0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2ADCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2AF8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2B04u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2B38u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2B48u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2B64u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2B74u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2B84u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2B94u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2BA4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2BBCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2BC4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2BD0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2BDCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2BE4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2BFCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2C14u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2C28u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2C30u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2C48u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2C60u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2C70u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2C80u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2CC8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2CD8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2CE8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2CF8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2D10u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2D18u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2D24u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2D30u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2D38u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2D50u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2D68u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2D7Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2D84u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2D9Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2DB4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2DC4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2DD4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2E2Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2E3Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2E4Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2E5Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2E84u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2EA0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2EB0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2EC4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2EF0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2F00u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2F1Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2F2Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2F3Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2F4Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2F5Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2F6Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2F84u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2F98u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2FACu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2FC4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2FCCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2FD8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2FE4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C2FECu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3004u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C301Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3030u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3038u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3050u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3064u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3078u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3094u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C30ACu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C30BCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C30CCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3120u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3130u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3140u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3150u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3168u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C317Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3190u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C31A8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C31B0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C31BCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C31C8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C31D0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C31E8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3200u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3214u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C321Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3234u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3248u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C325Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3278u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3290u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C32A0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C32B0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3304u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3314u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3324u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3334u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3344u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C335Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3364u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3370u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C337Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3384u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C339Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C33B4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C33C8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C33D0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C33E8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C33FCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3410u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C342Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3444u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3454u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3464u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C34B8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C34C8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C34D8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C34E8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3500u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3514u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C351Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3534u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3548u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C355Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3578u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3590u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C35C0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C35D8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C35E8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C35F8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C364Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C365Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C366Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C367Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C368Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C36A4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C36B8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C36CCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C36E4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C36F8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3700u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3718u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C372Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3740u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C375Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3774u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3784u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3794u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C37E8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C37F8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3808u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3818u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C383Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3858u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3880u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3898u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C38B0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C38C4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C38D8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C38F0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3904u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C390Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3924u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3938u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C394Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3968u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3980u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3990u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C39A0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C39F4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3A04u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3A14u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3A24u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3A4Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3A68u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3A78u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3A90u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3AC4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3AE0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3BCCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3BDCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3C10u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3C48u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3C6Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3C7Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3C94u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3CA8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3CC8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3CD4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3CD8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3CE0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3CF0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3D04u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3D18u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3D30u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3D54u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3D7Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3D9Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3DC0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3DECu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3E08u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3E14u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3E20u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3E2Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3E3Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3E48u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3E58u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3E64u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3E74u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3E80u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3E98u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3EA4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3EB4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3EC0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3ED0u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3EDCu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3EF4u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3F00u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3F18u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3F24u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3F3Cu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3F48u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3F68u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3F74u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3FACu, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3FB8u, &recomp_unit_0047, "recomp_unit_0047");
    runtime.register_function(0x088C3FF8u, &recomp_unit_0047, "recomp_unit_0047");
}
} // namespace psprecomp
