#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0001[4092] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 0,
    7, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0,
    0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0,
    0, 0, 18, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0,
    0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0,
    0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0,
    0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0,
    0, 38, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0,
    0, 48, 0, 49, 0, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 0,
    54, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0,
    0, 59, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 63, 0, 64, 65, 0, 0,
    0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0,
    0, 0, 68, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 73,
    0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0,
    78, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0,
    83, 0, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 0,
    89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 0, 0, 0,
    94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 98, 99, 0, 0, 0, 100, 0, 0,
    101, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 105, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 108, 0, 109, 0, 0,
    0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0,
    116, 0, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 119, 120, 0, 0, 121, 0, 0, 0, 0, 122, 0, 123, 0, 124, 0, 0, 0, 125, 0, 0,
    0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 130, 0,
    0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0,
    0, 0, 136, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 139, 0, 0, 140, 0, 141, 0, 0, 0, 0, 0,
    142, 0, 0, 143, 0, 0, 0, 144, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0,
    0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 152, 0,
    0, 0, 0, 0, 153, 0, 154, 0, 0, 155, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 158,
    0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0,
    0, 0, 0, 163, 0, 0, 164, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 168, 0,
    0, 0, 0, 169, 0, 170, 0, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0,
    0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0,
    0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0,
    184, 0, 0, 0, 0, 185, 0, 0, 0, 0, 186, 0, 0, 187, 0, 0, 0, 188, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 191,
    0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 201, 0,
    202, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 207, 0, 208, 0, 0,
    0, 0, 0, 0, 0, 209, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 212, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 0, 0, 0, 0, 217, 0,
    218, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 222, 0,
    0, 223, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 225, 226, 0, 227, 0, 228, 229, 0, 0, 0, 230, 0, 0, 0, 0, 231, 232,
    0, 0, 0, 233, 0, 234, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 238,
    0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 242, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0,
    245, 246, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 249, 0, 0, 250, 0, 251, 0, 0, 0, 0, 252, 0, 0, 0, 253, 254, 0, 0, 0, 0,
    0, 255, 0, 256, 0, 0, 257, 0, 258, 0, 0, 0, 0, 0, 259, 0, 260, 0, 0, 0, 0, 261, 0, 0, 262, 0, 0, 263, 0, 0, 0, 0,
    264, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 266, 0, 267, 0, 0, 268, 0, 0, 0, 0, 269, 0, 0, 270, 0, 0, 271, 0, 0,
    0, 0, 0, 0, 0, 0, 272, 0, 0, 273, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 276, 0, 277, 0, 0, 0, 0, 0, 0, 278, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 280, 0, 0, 281, 0, 0, 282, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 284, 0, 0, 0, 0, 0, 0, 285, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287,
    0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 291, 292, 293, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0,
    0, 0, 0, 0, 0, 0, 296, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 299, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 300, 0, 301, 0, 302, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 306, 0, 0, 307, 0, 0, 0, 308, 0, 309, 0, 310, 0,
    311, 0, 0, 0, 312, 0, 313, 0, 0, 314, 0, 315, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0, 0, 318, 319, 0, 0, 0, 320, 0, 0, 321,
    0, 322, 0, 323, 0, 324, 0, 0, 0, 325, 0, 326, 0, 0, 0, 0, 327, 0, 328, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0, 0, 0, 331,
    0, 0, 0, 0, 0, 332, 0, 333, 0, 334, 0, 335, 0, 336, 0, 337, 0, 0, 338, 0, 339, 0, 340, 0, 341, 0, 342, 0, 0, 0, 0, 0,
    0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 345, 0, 346, 0, 347, 0, 348, 0, 0, 0, 0, 0, 349, 0, 350, 0, 351, 0, 0,
    0, 0, 0, 352, 0, 353, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 356, 0, 357, 0, 0, 0, 0, 0, 358, 0,
    0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 360, 361, 0, 362, 0, 0, 363, 0, 0, 364, 0, 365, 0, 0, 0, 0, 366, 0, 0, 367,
    0, 0, 368, 0, 0, 0, 0, 0, 369, 0, 0, 370, 0, 0, 371, 0, 0, 372, 0, 0, 373, 0, 0, 374, 0, 0, 375, 0, 376, 0, 377, 0,
    0, 378, 0, 379, 0, 380, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 383, 0, 384, 0, 0, 385, 0, 0, 386, 0,
    0, 0, 387, 0, 0, 0, 0, 0, 388, 389, 0, 390, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 393, 0, 0, 394, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 396, 0, 0, 0, 397, 0, 0, 0, 398, 0, 0, 0,
    0, 399, 0, 400, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 403, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 405, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 409, 0, 0, 0, 0, 0, 410, 0,
    0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 414, 0, 0,
    0, 0, 415, 416, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 418, 0, 419, 0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 0, 0,
    0, 0, 0, 0, 425, 0, 426, 0, 427, 0, 428, 0, 429, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0,
    0, 432, 0, 0, 433, 0, 0, 434, 0, 435, 0, 0, 0, 0, 0, 436, 0, 437, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 439, 0, 440,
    0, 0, 0, 441, 0, 0, 442, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 444, 0, 445, 0, 446, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 450, 0,
    0, 0, 0, 0, 451, 0, 0, 0, 0, 452, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 456,
    0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 459, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0,
    0, 0, 462, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 466, 0, 0, 0, 0, 467,
    0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0,
    0, 0, 0, 472, 0, 0, 0, 0, 473, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0,
    481, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 483, 0, 0, 0, 484, 0, 485, 0, 486, 0, 0, 0, 0, 0, 0, 487, 0,
    0, 0, 488, 0, 0, 0, 489, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 493, 0,
    0, 0, 0, 0, 0, 494, 0, 0, 495, 0, 0, 0, 0, 496, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 498, 0, 0, 499, 0, 500, 0, 0,
    0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 502, 0, 0, 503, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 506,
    0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 508, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 510, 0, 0, 0, 0, 511, 0, 0, 512, 0, 0,
    0, 0, 513, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 516, 0, 0, 0,
    0, 0, 517, 0, 0, 0, 0, 0, 518, 0, 519, 0, 520, 0, 0, 0, 521, 0, 522, 0, 0, 0, 0, 0, 523, 0, 0, 524, 0, 0, 525, 0,
    526, 0, 0, 0, 527, 528, 0, 0, 0, 529, 0, 530, 531, 0, 0, 0, 0, 532, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 534, 0, 535, 0,
    0, 0, 0, 536, 0, 537, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 540, 0,
    0, 0, 541, 0, 0, 0, 542, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 0, 544, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 546, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 547, 0, 548, 0, 0, 0, 0, 0, 0, 549, 0, 0, 550, 0, 0, 0, 551, 0, 0, 0, 0, 552,
    0, 0, 0, 0, 0, 0, 553, 0, 554, 555, 0, 0, 0, 556, 0, 0, 0, 0, 0, 0, 0, 557, 0, 558, 0, 0, 0, 0, 559, 0, 0, 0,
    560, 561, 0, 0, 0, 562, 0, 0, 0, 563, 0, 0, 0, 0, 0, 0, 0, 564, 0, 0, 0, 565, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0,
    0, 0, 0, 567, 0, 0, 0, 568, 0, 569, 0, 0, 0, 0, 0, 570, 0, 0, 0, 0, 0, 571, 0, 572, 0, 0, 0, 0, 0, 573, 0, 0,
    0, 0, 0, 574, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 576, 0, 577, 0, 0, 0, 0, 0, 578, 0, 0, 0, 579, 0, 580, 0, 0,
    581, 0, 0, 0, 0, 582, 0, 0, 0, 0, 583, 0, 0, 0, 0, 584, 0, 0, 0, 585, 0, 0, 586, 0, 0, 0, 0, 0, 0, 0, 587, 0,
    0, 0, 588, 0, 589, 0, 0, 0, 0, 590, 0, 0, 0, 0, 0, 0, 591, 0, 0, 592, 0, 0, 593, 0, 594, 595, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 596, 0, 0, 597, 0, 0, 0, 0, 0, 0, 598, 0, 0, 0, 0, 0, 0, 0, 599, 0, 0, 0, 0, 0, 0, 600,
    0, 0, 0, 0, 0, 601, 0, 602, 0, 0, 603, 0, 0, 0, 0, 0, 0, 604, 0, 605, 0, 0, 0, 0, 0, 0, 0, 0, 606, 0, 607, 0,
    0, 608, 0, 0, 609, 0, 0, 0, 0, 0, 610, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 611, 0, 0, 0, 0, 0, 0,
    612, 0, 0, 0, 0, 613, 0, 0, 0, 0, 0, 0, 0, 614, 0, 0, 0, 0, 615, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 616, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 617, 0, 0, 0, 0, 0, 0, 618, 0, 0, 0, 0, 619, 0, 0, 0, 0, 0, 0, 0, 620, 0, 0,
    0, 621, 0, 0, 0, 0, 622, 0, 0, 0, 0, 0, 623, 0, 0, 624, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 625,
    0, 0, 0, 0, 626, 0, 0, 627, 0, 628, 0, 0, 0, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0, 0, 630, 0, 0, 0, 0, 0, 0, 631,
    0, 0, 0, 0, 0, 0, 632, 0, 633, 0, 0, 634, 0, 635, 0, 0, 0, 636, 0, 0, 0, 0, 637, 0, 0, 0, 0, 638, 0, 0, 0, 0,
    639, 0, 0, 640, 0, 0, 0, 641, 0, 0, 642, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 644, 0, 645, 0, 646, 0, 0, 0, 0, 647, 0, 0, 0, 0, 0, 0, 648, 0, 0, 0, 0, 0,
    0, 0, 649, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 651, 0, 0, 0, 0, 0, 652, 0, 0, 0, 0, 653, 0, 0, 0, 0, 0, 654, 0,
    0, 0, 0, 655, 0, 0, 0, 0, 0, 656, 0, 0, 0, 0, 0, 0, 657, 0, 0, 0, 658, 0, 0, 0, 0, 0, 0, 659, 0, 0, 0, 0,
    660, 0, 0, 0, 0, 661, 0, 0, 0, 0, 662, 0, 0, 0, 0, 0, 0, 0, 663, 0, 0, 0, 0, 664, 0, 0, 0, 0, 665, 0, 0, 666,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 667, 0, 0, 668, 0, 0, 0, 0, 0, 669, 0, 0, 0, 0, 670, 0, 0, 0, 0, 671, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 672, 0, 0, 0, 0, 0, 0, 0, 0, 673, 0, 0, 0, 674, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 675, 0, 0, 0, 676, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 677, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 678, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 679,
    0, 680, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 681, 0, 0, 0, 0, 0, 682, 0, 0, 0, 0, 683, 0, 0, 0, 684, 0, 685, 0, 0, 0, 0, 686, 0, 0, 687, 0, 688, 0,
    0, 0, 0, 0, 689, 0, 0, 0, 0, 0, 0, 0, 0, 690, 0, 0, 0, 0, 691, 0, 692, 0, 0, 693, 0, 0, 0, 0, 0, 0, 0, 694,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 695, 0, 696, 0, 0, 0, 0, 697, 0, 0, 0, 0, 0, 0, 0, 0, 698, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 699, 0, 700, 0, 0, 701, 0, 0, 0, 0, 702, 0, 703, 0, 704, 0, 0, 705, 0, 706, 0, 0,
    0, 0, 707, 0, 708, 0, 709, 0, 710, 0, 0, 711, 712, 0, 0, 0, 713, 714, 0, 0, 715, 0, 0, 0, 716, 0, 0, 0, 0, 0, 717, 0,
    718, 0, 0, 0, 719, 0, 720, 0, 0, 0, 721, 0, 0, 0, 0, 722, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 723,
};
void recomp_unit_0001_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08808000u;
        entry_id = (entry_delta < 16368u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0001[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08808000;
    case 2u: goto L_08808014;
    case 3u: goto L_08808030;
    case 4u: goto L_08808044;
    case 5u: goto L_08808058;
    case 6u: goto L_0880806C;
    case 7u: goto L_08808080;
    case 8u: goto L_0880809C;
    case 9u: goto L_088080B8;
    case 10u: goto L_088080D8;
    case 11u: goto L_088080F0;
    case 12u: goto L_08808104;
    case 13u: goto L_0880811C;
    case 14u: goto L_08808130;
    case 15u: goto L_08808148;
    case 16u: goto L_0880815C;
    case 17u: goto L_08808174;
    case 18u: goto L_08808188;
    case 19u: goto L_088081A0;
    case 20u: goto L_088081B4;
    case 21u: goto L_088081D0;
    case 22u: goto L_088081E4;
    case 23u: goto L_088081F8;
    case 24u: goto L_08808214;
    case 25u: goto L_0880823C;
    case 26u: goto L_08808250;
    case 27u: goto L_08808270;
    case 28u: goto L_0880828C;
    case 29u: goto L_088082A8;
    case 30u: goto L_088082BC;
    case 31u: goto L_088082D0;
    case 32u: goto L_088082E4;
    case 33u: goto L_088082F8;
    case 34u: goto L_08808314;
    case 35u: goto L_08808334;
    case 36u: goto L_08808354;
    case 37u: goto L_08808370;
    case 38u: goto L_08808384;
    case 39u: goto L_0880839C;
    case 40u: goto L_088083B0;
    case 41u: goto L_088083D4;
    case 42u: goto L_088083E4;
    case 43u: goto L_08808418;
    case 44u: goto L_0880842C;
    case 45u: goto L_08808440;
    case 46u: goto L_0880845C;
    case 47u: goto L_08808470;
    case 48u: goto L_08808484;
    case 49u: goto L_0880848C;
    case 50u: goto L_08808498;
    case 51u: goto L_088084B4;
    case 52u: goto L_088084C8;
    case 53u: goto L_088084EC;
    case 54u: goto L_08808500;
    case 55u: goto L_0880851C;
    case 56u: goto L_08808530;
    case 57u: goto L_0880854C;
    case 58u: goto L_08808568;
    case 59u: goto L_08808584;
    case 60u: goto L_08808598;
    case 61u: goto L_088085B8;
    case 62u: goto L_088085D4;
    case 63u: goto L_088085E8;
    case 64u: goto L_088085F0;
    case 65u: goto L_088085F4;
    case 66u: goto L_08808608;
    case 67u: goto L_0880866C;
    case 68u: goto L_08808688;
    case 69u: goto L_08808694;
    case 70u: goto L_088086B4;
    case 71u: goto L_088086D0;
    case 72u: goto L_088086E4;
    case 73u: goto L_088086FC;
    case 74u: goto L_08808720;
    case 75u: goto L_08808734;
    case 76u: goto L_08808750;
    case 77u: goto L_0880876C;
    case 78u: goto L_08808780;
    case 79u: goto L_0880879C;
    case 80u: goto L_088087BC;
    case 81u: goto L_088087D4;
    case 82u: goto L_088087E8;
    case 83u: goto L_08808800;
    case 84u: goto L_08808814;
    case 85u: goto L_0880882C;
    case 86u: goto L_08808840;
    case 87u: goto L_08808858;
    case 88u: goto L_0880886C;
    case 89u: goto L_08808880;
    case 90u: goto L_0880889C;
    case 91u: goto L_088088BC;
    case 92u: goto L_088088D0;
    case 93u: goto L_088088EC;
    case 94u: goto L_08808900;
    case 95u: goto L_08808914;
    case 96u: goto L_08808928;
    case 97u: goto L_08808940;
    case 98u: goto L_08808960;
    case 99u: goto L_08808964;
    case 100u: goto L_08808974;
    case 101u: goto L_08808980;
    case 102u: goto L_08808988;
    case 103u: goto L_0880899C;
    case 104u: goto L_088089B0;
    case 105u: goto L_088089BC;
    case 106u: goto L_088089C8;
    case 107u: goto L_088089E0;
    case 108u: goto L_088089EC;
    case 109u: goto L_088089F4;
    case 110u: goto L_08808A10;
    case 111u: goto L_08808A20;
    case 112u: goto L_08808A2C;
    case 113u: goto L_08808A40;
    case 114u: goto L_08808A4C;
    case 115u: goto L_08808A68;
    case 116u: goto L_08808A80;
    case 117u: goto L_08808A94;
    case 118u: goto L_08808AA8;
    case 119u: goto L_08808AB0;
    case 120u: goto L_08808AB4;
    case 121u: goto L_08808AC0;
    case 122u: goto L_08808AD4;
    case 123u: goto L_08808ADC;
    case 124u: goto L_08808AE4;
    case 125u: goto L_08808AF4;
    case 126u: goto L_08808B04;
    case 127u: goto L_08808B1C;
    case 128u: goto L_08808B3C;
    case 129u: goto L_08808B5C;
    case 130u: goto L_08808B78;
    case 131u: goto L_08808B98;
    case 132u: goto L_08808BB0;
    case 133u: goto L_08808BC4;
    case 134u: goto L_08808BDC;
    case 135u: goto L_08808BF0;
    case 136u: goto L_08808C08;
    case 137u: goto L_08808C1C;
    case 138u: goto L_08808C38;
    case 139u: goto L_08808C54;
    case 140u: goto L_08808C60;
    case 141u: goto L_08808C68;
    case 142u: goto L_08808C80;
    case 143u: goto L_08808C8C;
    case 144u: goto L_08808C9C;
    case 145u: goto L_08808CA4;
    case 146u: goto L_08808CF0;
    case 147u: goto L_08808D04;
    case 148u: goto L_08808D38;
    case 149u: goto L_08808D4C;
    case 150u: goto L_08808D5C;
    case 151u: goto L_08808D6C;
    case 152u: goto L_08808D78;
    case 153u: goto L_08808D90;
    case 154u: goto L_08808D98;
    case 155u: goto L_08808DA4;
    case 156u: goto L_08808DB8;
    case 157u: goto L_08808DE0;
    case 158u: goto L_08808DFC;
    case 159u: goto L_08808E10;
    case 160u: goto L_08808E4C;
    case 161u: goto L_08808E54;
    case 162u: goto L_08808E74;
    case 163u: goto L_08808E8C;
    case 164u: goto L_08808E98;
    case 165u: goto L_08808EA4;
    case 166u: goto L_08808EC4;
    case 167u: goto L_08808ED8;
    case 168u: goto L_08808EF8;
    case 169u: goto L_08808F0C;
    case 170u: goto L_08808F14;
    case 171u: goto L_08808F20;
    case 172u: goto L_08808F3C;
    case 173u: goto L_08808F54;
    case 174u: goto L_08808F70;
    case 175u: goto L_08808F90;
    case 176u: goto L_08808FAC;
    case 177u: goto L_08808FC0;
    case 178u: goto L_08808FD4;
    case 179u: goto L_08808FF0;
    case 180u: goto L_08809010;
    case 181u: goto L_08809028;
    case 182u: goto L_08809044;
    case 183u: goto L_08809064;
    case 184u: goto L_08809080;
    case 185u: goto L_08809094;
    case 186u: goto L_088090A8;
    case 187u: goto L_088090B4;
    case 188u: goto L_088090C4;
    case 189u: goto L_088090CC;
    case 190u: goto L_088090E8;
    case 191u: goto L_088090FC;
    case 192u: goto L_0880910C;
    case 193u: goto L_08809138;
    case 194u: goto L_08809144;
    case 195u: goto L_08809158;
    case 196u: goto L_08809180;
    case 197u: goto L_0880919C;
    case 198u: goto L_088091B0;
    case 199u: goto L_088091BC;
    case 200u: goto L_088091EC;
    case 201u: goto L_088091F8;
    case 202u: goto L_08809200;
    case 203u: goto L_0880921C;
    case 204u: goto L_08809230;
    case 205u: goto L_08809240;
    case 206u: goto L_08809250;
    case 207u: goto L_0880926C;
    case 208u: goto L_08809274;
    case 209u: goto L_08809294;
    case 210u: goto L_0880929C;
    case 211u: goto L_088092D8;
    case 212u: goto L_088092F8;
    case 213u: goto L_08809320;
    case 214u: goto L_0880933C;
    case 215u: goto L_08809350;
    case 216u: goto L_0880935C;
    case 217u: goto L_08809378;
    case 218u: goto L_08809380;
    case 219u: goto L_088093A0;
    case 220u: goto L_088093C8;
    case 221u: goto L_088093E4;
    case 222u: goto L_088093F8;
    case 223u: goto L_08809404;
    case 224u: goto L_08809434;
    case 225u: goto L_0880943C;
    case 226u: goto L_08809440;
    case 227u: goto L_08809448;
    case 228u: goto L_08809450;
    case 229u: goto L_08809454;
    case 230u: goto L_08809464;
    case 231u: goto L_08809478;
    case 232u: goto L_0880947C;
    case 233u: goto L_0880948C;
    case 234u: goto L_08809494;
    case 235u: goto L_088094AC;
    case 236u: goto L_088094C0;
    case 237u: goto L_088094E4;
    case 238u: goto L_088094FC;
    case 239u: goto L_08809508;
    case 240u: goto L_08809518;
    case 241u: goto L_08809530;
    case 242u: goto L_08809538;
    case 243u: goto L_0880954C;
    case 244u: goto L_08809568;
    case 245u: goto L_08809580;
    case 246u: goto L_08809584;
    case 247u: goto L_0880958C;
    case 248u: goto L_088095A4;
    case 249u: goto L_088095B0;
    case 250u: goto L_088095BC;
    case 251u: goto L_088095C4;
    case 252u: goto L_088095D8;
    case 253u: goto L_088095E8;
    case 254u: goto L_088095EC;
    case 255u: goto L_08809604;
    case 256u: goto L_0880960C;
    case 257u: goto L_08809618;
    case 258u: goto L_08809620;
    case 259u: goto L_08809638;
    case 260u: goto L_08809640;
    case 261u: goto L_08809654;
    case 262u: goto L_08809660;
    case 263u: goto L_0880966C;
    case 264u: goto L_08809680;
    case 265u: goto L_088096A4;
    case 266u: goto L_088096B4;
    case 267u: goto L_088096BC;
    case 268u: goto L_088096C8;
    case 269u: goto L_088096DC;
    case 270u: goto L_088096E8;
    case 271u: goto L_088096F4;
    case 272u: goto L_08809718;
    case 273u: goto L_08809724;
    case 274u: goto L_0880972C;
    case 275u: goto L_08809740;
    case 276u: goto L_08809750;
    case 277u: goto L_08809758;
    case 278u: goto L_08809774;
    case 279u: goto L_08809854;
    case 280u: goto L_0880985C;
    case 281u: goto L_08809868;
    case 282u: goto L_08809874;
    case 283u: goto L_08809950;
    case 284u: goto L_0880995C;
    case 285u: goto L_08809978;
    case 286u: goto L_08809A48;
    case 287u: goto L_08809A7C;
    case 288u: goto L_08809A88;
    case 289u: goto L_08809A9C;
    case 290u: goto L_08809AAC;
    case 291u: goto L_08809B88;
    case 292u: goto L_08809B8C;
    case 293u: goto L_08809B90;
    case 294u: goto L_08809BB4;
    case 295u: goto L_08809BF8;
    case 296u: goto L_08809C18;
    case 297u: goto L_08809C20;
    case 298u: goto L_08809CD8;
    case 299u: goto L_08809CEC;
    case 300u: goto L_08809D14;
    case 301u: goto L_08809D1C;
    case 302u: goto L_08809D24;
    case 303u: goto L_08809D2C;
    case 304u: goto L_08809D8C;
    case 305u: goto L_08809DC0;
    case 306u: goto L_08809DCC;
    case 307u: goto L_08809DD8;
    case 308u: goto L_08809DE8;
    case 309u: goto L_08809DF0;
    case 310u: goto L_08809DF8;
    case 311u: goto L_08809E00;
    case 312u: goto L_08809E10;
    case 313u: goto L_08809E18;
    case 314u: goto L_08809E24;
    case 315u: goto L_08809E2C;
    case 316u: goto L_08809E34;
    case 317u: goto L_08809E4C;
    case 318u: goto L_08809E5C;
    case 319u: goto L_08809E60;
    case 320u: goto L_08809E70;
    case 321u: goto L_08809E7C;
    case 322u: goto L_08809E84;
    case 323u: goto L_08809E8C;
    case 324u: goto L_08809E94;
    case 325u: goto L_08809EA4;
    case 326u: goto L_08809EAC;
    case 327u: goto L_08809EC0;
    case 328u: goto L_08809EC8;
    case 329u: goto L_08809ED4;
    case 330u: goto L_08809EE4;
    case 331u: goto L_08809EFC;
    case 332u: goto L_08809F14;
    case 333u: goto L_08809F1C;
    case 334u: goto L_08809F24;
    case 335u: goto L_08809F2C;
    case 336u: goto L_08809F34;
    case 337u: goto L_08809F3C;
    case 338u: goto L_08809F48;
    case 339u: goto L_08809F50;
    case 340u: goto L_08809F58;
    case 341u: goto L_08809F60;
    case 342u: goto L_08809F68;
    case 343u: goto L_08809F88;
    case 344u: goto L_08809FAC;
    case 345u: goto L_08809FB4;
    case 346u: goto L_08809FBC;
    case 347u: goto L_08809FC4;
    case 348u: goto L_08809FCC;
    case 349u: goto L_08809FE4;
    case 350u: goto L_08809FEC;
    case 351u: goto L_08809FF4;
    case 352u: goto L_0880A00C;
    case 353u: goto L_0880A014;
    case 354u: goto L_0880A028;
    case 355u: goto L_0880A040;
    case 356u: goto L_0880A058;
    case 357u: goto L_0880A060;
    case 358u: goto L_0880A078;
    case 359u: goto L_0880A09C;
    case 360u: goto L_0880A0B0;
    case 361u: goto L_0880A0B4;
    case 362u: goto L_0880A0BC;
    case 363u: goto L_0880A0C8;
    case 364u: goto L_0880A0D4;
    case 365u: goto L_0880A0DC;
    case 366u: goto L_0880A0F0;
    case 367u: goto L_0880A0FC;
    case 368u: goto L_0880A108;
    case 369u: goto L_0880A120;
    case 370u: goto L_0880A12C;
    case 371u: goto L_0880A138;
    case 372u: goto L_0880A144;
    case 373u: goto L_0880A150;
    case 374u: goto L_0880A15C;
    case 375u: goto L_0880A168;
    case 376u: goto L_0880A170;
    case 377u: goto L_0880A178;
    case 378u: goto L_0880A184;
    case 379u: goto L_0880A18C;
    case 380u: goto L_0880A194;
    case 381u: goto L_0880A1A4;
    case 382u: goto L_0880A1C0;
    case 383u: goto L_0880A1D8;
    case 384u: goto L_0880A1E0;
    case 385u: goto L_0880A1EC;
    case 386u: goto L_0880A1F8;
    case 387u: goto L_0880A208;
    case 388u: goto L_0880A220;
    case 389u: goto L_0880A224;
    case 390u: goto L_0880A22C;
    case 391u: goto L_0880A24C;
    case 392u: goto L_0880A260;
    case 393u: goto L_0880A294;
    case 394u: goto L_0880A2A0;
    case 395u: goto L_0880A2BC;
    case 396u: goto L_0880A2D0;
    case 397u: goto L_0880A2E0;
    case 398u: goto L_0880A2F0;
    case 399u: goto L_0880A304;
    case 400u: goto L_0880A30C;
    case 401u: goto L_0880A328;
    case 402u: goto L_0880A364;
    case 403u: goto L_0880A36C;
    case 404u: goto L_0880A3B4;
    case 405u: goto L_0880A3B8;
    case 406u: goto L_0880A3D4;
    case 407u: goto L_0880A41C;
    case 408u: goto L_0880A44C;
    case 409u: goto L_0880A460;
    case 410u: goto L_0880A478;
    case 411u: goto L_0880A494;
    case 412u: goto L_0880A4B8;
    case 413u: goto L_0880A4D8;
    case 414u: goto L_0880A4F4;
    case 415u: goto L_0880A508;
    case 416u: goto L_0880A50C;
    case 417u: goto L_0880A524;
    case 418u: goto L_0880A53C;
    case 419u: goto L_0880A544;
    case 420u: goto L_0880A564;
    case 421u: goto L_0880A594;
    case 422u: goto L_0880A5B8;
    case 423u: goto L_0880A5C0;
    case 424u: goto L_0880A5F0;
    case 425u: goto L_0880A610;
    case 426u: goto L_0880A618;
    case 427u: goto L_0880A620;
    case 428u: goto L_0880A628;
    case 429u: goto L_0880A630;
    case 430u: goto L_0880A640;
    case 431u: goto L_0880A674;
    case 432u: goto L_0880A684;
    case 433u: goto L_0880A690;
    case 434u: goto L_0880A69C;
    case 435u: goto L_0880A6A4;
    case 436u: goto L_0880A6BC;
    case 437u: goto L_0880A6C4;
    case 438u: goto L_0880A6E4;
    case 439u: goto L_0880A6F4;
    case 440u: goto L_0880A6FC;
    case 441u: goto L_0880A70C;
    case 442u: goto L_0880A718;
    case 443u: goto L_0880A728;
    case 444u: goto L_0880A788;
    case 445u: goto L_0880A790;
    case 446u: goto L_0880A798;
    case 447u: goto L_0880A7AC;
    case 448u: goto L_0880A7CC;
    case 449u: goto L_0880A7E4;
    case 450u: goto L_0880A7F8;
    case 451u: goto L_0880A810;
    case 452u: goto L_0880A824;
    case 453u: goto L_0880A83C;
    case 454u: goto L_0880A850;
    case 455u: goto L_0880A868;
    case 456u: goto L_0880A87C;
    case 457u: goto L_0880A894;
    case 458u: goto L_0880A8A8;
    case 459u: goto L_0880A8C0;
    case 460u: goto L_0880A8D0;
    case 461u: goto L_0880A8F0;
    case 462u: goto L_0880A908;
    case 463u: goto L_0880A91C;
    case 464u: goto L_0880A938;
    case 465u: goto L_0880A954;
    case 466u: goto L_0880A968;
    case 467u: goto L_0880A97C;
    case 468u: goto L_0880A990;
    case 469u: goto L_0880A9BC;
    case 470u: goto L_0880A9D4;
    case 471u: goto L_0880A9F0;
    case 472u: goto L_0880AA0C;
    case 473u: goto L_0880AA20;
    case 474u: goto L_0880AA34;
    case 475u: goto L_0880AA4C;
    case 476u: goto L_0880AA78;
    case 477u: goto L_0880AAA8;
    case 478u: goto L_0880AAB4;
    case 479u: goto L_0880AAE8;
    case 480u: goto L_0880AB70;
    case 481u: goto L_0880AB80;
    case 482u: goto L_0880ABA8;
    case 483u: goto L_0880ABBC;
    case 484u: goto L_0880ABCC;
    case 485u: goto L_0880ABD4;
    case 486u: goto L_0880ABDC;
    case 487u: goto L_0880ABF8;
    case 488u: goto L_0880AC08;
    case 489u: goto L_0880AC18;
    case 490u: goto L_0880AC30;
    case 491u: goto L_0880AC4C;
    case 492u: goto L_0880AC60;
    case 493u: goto L_0880AC78;
    case 494u: goto L_0880AC94;
    case 495u: goto L_0880ACA0;
    case 496u: goto L_0880ACB4;
    case 497u: goto L_0880ACC4;
    case 498u: goto L_0880ACE0;
    case 499u: goto L_0880ACEC;
    case 500u: goto L_0880ACF4;
    case 501u: goto L_0880AD18;
    case 502u: goto L_0880AD2C;
    case 503u: goto L_0880AD38;
    case 504u: goto L_0880AD50;
    case 505u: goto L_0880AD6C;
    case 506u: goto L_0880AD7C;
    case 507u: goto L_0880AD9C;
    case 508u: goto L_0880ADA8;
    case 509u: goto L_0880ADC0;
    case 510u: goto L_0880ADD4;
    case 511u: goto L_0880ADE8;
    case 512u: goto L_0880ADF4;
    case 513u: goto L_0880AE08;
    case 514u: goto L_0880AE18;
    case 515u: goto L_0880AE64;
    case 516u: goto L_0880AE70;
    case 517u: goto L_0880AE88;
    case 518u: goto L_0880AEA0;
    case 519u: goto L_0880AEA8;
    case 520u: goto L_0880AEB0;
    case 521u: goto L_0880AEC0;
    case 522u: goto L_0880AEC8;
    case 523u: goto L_0880AEE0;
    case 524u: goto L_0880AEEC;
    case 525u: goto L_0880AEF8;
    case 526u: goto L_0880AF00;
    case 527u: goto L_0880AF10;
    case 528u: goto L_0880AF14;
    case 529u: goto L_0880AF24;
    case 530u: goto L_0880AF2C;
    case 531u: goto L_0880AF30;
    case 532u: goto L_0880AF44;
    case 533u: goto L_0880AF58;
    case 534u: goto L_0880AF70;
    case 535u: goto L_0880AF78;
    case 536u: goto L_0880AF8C;
    case 537u: goto L_0880AF94;
    case 538u: goto L_0880AFA4;
    case 539u: goto L_0880AFC0;
    case 540u: goto L_0880AFF8;
    case 541u: goto L_0880B008;
    case 542u: goto L_0880B018;
    case 543u: goto L_0880B030;
    case 544u: goto L_0880B04C;
    case 545u: goto L_0880B060;
    case 546u: goto L_0880B078;
    case 547u: goto L_0880B0A8;
    case 548u: goto L_0880B0B0;
    case 549u: goto L_0880B0CC;
    case 550u: goto L_0880B0D8;
    case 551u: goto L_0880B0E8;
    case 552u: goto L_0880B0FC;
    case 553u: goto L_0880B118;
    case 554u: goto L_0880B120;
    case 555u: goto L_0880B124;
    case 556u: goto L_0880B134;
    case 557u: goto L_0880B154;
    case 558u: goto L_0880B15C;
    case 559u: goto L_0880B170;
    case 560u: goto L_0880B180;
    case 561u: goto L_0880B184;
    case 562u: goto L_0880B194;
    case 563u: goto L_0880B1A4;
    case 564u: goto L_0880B1C4;
    case 565u: goto L_0880B1D4;
    case 566u: goto L_0880B1E8;
    case 567u: goto L_0880B20C;
    case 568u: goto L_0880B21C;
    case 569u: goto L_0880B224;
    case 570u: goto L_0880B23C;
    case 571u: goto L_0880B254;
    case 572u: goto L_0880B25C;
    case 573u: goto L_0880B274;
    case 574u: goto L_0880B28C;
    case 575u: goto L_0880B2A0;
    case 576u: goto L_0880B2BC;
    case 577u: goto L_0880B2C4;
    case 578u: goto L_0880B2DC;
    case 579u: goto L_0880B2EC;
    case 580u: goto L_0880B2F4;
    case 581u: goto L_0880B300;
    case 582u: goto L_0880B314;
    case 583u: goto L_0880B328;
    case 584u: goto L_0880B33C;
    case 585u: goto L_0880B34C;
    case 586u: goto L_0880B358;
    case 587u: goto L_0880B378;
    case 588u: goto L_0880B388;
    case 589u: goto L_0880B390;
    case 590u: goto L_0880B3A4;
    case 591u: goto L_0880B3C0;
    case 592u: goto L_0880B3CC;
    case 593u: goto L_0880B3D8;
    case 594u: goto L_0880B3E0;
    case 595u: goto L_0880B3E4;
    case 596u: goto L_0880B418;
    case 597u: goto L_0880B424;
    case 598u: goto L_0880B440;
    case 599u: goto L_0880B460;
    case 600u: goto L_0880B47C;
    case 601u: goto L_0880B494;
    case 602u: goto L_0880B49C;
    case 603u: goto L_0880B4A8;
    case 604u: goto L_0880B4C4;
    case 605u: goto L_0880B4CC;
    case 606u: goto L_0880B4F0;
    case 607u: goto L_0880B4F8;
    case 608u: goto L_0880B504;
    case 609u: goto L_0880B510;
    case 610u: goto L_0880B528;
    case 611u: goto L_0880B564;
    case 612u: goto L_0880B580;
    case 613u: goto L_0880B594;
    case 614u: goto L_0880B5B4;
    case 615u: goto L_0880B5C8;
    case 616u: goto L_0880B5F8;
    case 617u: goto L_0880B624;
    case 618u: goto L_0880B640;
    case 619u: goto L_0880B654;
    case 620u: goto L_0880B674;
    case 621u: goto L_0880B684;
    case 622u: goto L_0880B698;
    case 623u: goto L_0880B6B0;
    case 624u: goto L_0880B6BC;
    case 625u: goto L_0880B6FC;
    case 626u: goto L_0880B710;
    case 627u: goto L_0880B71C;
    case 628u: goto L_0880B724;
    case 629u: goto L_0880B74C;
    case 630u: goto L_0880B760;
    case 631u: goto L_0880B77C;
    case 632u: goto L_0880B798;
    case 633u: goto L_0880B7A0;
    case 634u: goto L_0880B7AC;
    case 635u: goto L_0880B7B4;
    case 636u: goto L_0880B7C4;
    case 637u: goto L_0880B7D8;
    case 638u: goto L_0880B7EC;
    case 639u: goto L_0880B800;
    case 640u: goto L_0880B80C;
    case 641u: goto L_0880B81C;
    case 642u: goto L_0880B828;
    case 643u: goto L_0880B854;
    case 644u: goto L_0880B8A8;
    case 645u: goto L_0880B8B0;
    case 646u: goto L_0880B8B8;
    case 647u: goto L_0880B8CC;
    case 648u: goto L_0880B8E8;
    case 649u: goto L_0880B908;
    case 650u: goto L_0880B920;
    case 651u: goto L_0880B934;
    case 652u: goto L_0880B94C;
    case 653u: goto L_0880B960;
    case 654u: goto L_0880B978;
    case 655u: goto L_0880B98C;
    case 656u: goto L_0880B9A4;
    case 657u: goto L_0880B9C0;
    case 658u: goto L_0880B9D0;
    case 659u: goto L_0880B9EC;
    case 660u: goto L_0880BA00;
    case 661u: goto L_0880BA14;
    case 662u: goto L_0880BA28;
    case 663u: goto L_0880BA48;
    case 664u: goto L_0880BA5C;
    case 665u: goto L_0880BA70;
    case 666u: goto L_0880BA7C;
    case 667u: goto L_0880BAAC;
    case 668u: goto L_0880BAB8;
    case 669u: goto L_0880BAD0;
    case 670u: goto L_0880BAE4;
    case 671u: goto L_0880BAF8;
    case 672u: goto L_0880BB34;
    case 673u: goto L_0880BB58;
    case 674u: goto L_0880BB68;
    case 675u: goto L_0880BBD4;
    case 676u: goto L_0880BBE4;
    case 677u: goto L_0880BC1C;
    case 678u: goto L_0880BC48;
    case 679u: goto L_0880BC7C;
    case 680u: goto L_0880BC84;
    case 681u: goto L_0880BD0C;
    case 682u: goto L_0880BD24;
    case 683u: goto L_0880BD38;
    case 684u: goto L_0880BD48;
    case 685u: goto L_0880BD50;
    case 686u: goto L_0880BD64;
    case 687u: goto L_0880BD70;
    case 688u: goto L_0880BD78;
    case 689u: goto L_0880BD90;
    case 690u: goto L_0880BDB4;
    case 691u: goto L_0880BDC8;
    case 692u: goto L_0880BDD0;
    case 693u: goto L_0880BDDC;
    case 694u: goto L_0880BDFC;
    case 695u: goto L_0880BE30;
    case 696u: goto L_0880BE38;
    case 697u: goto L_0880BE4C;
    case 698u: goto L_0880BE70;
    case 699u: goto L_0880BEA8;
    case 700u: goto L_0880BEB0;
    case 701u: goto L_0880BEBC;
    case 702u: goto L_0880BED0;
    case 703u: goto L_0880BED8;
    case 704u: goto L_0880BEE0;
    case 705u: goto L_0880BEEC;
    case 706u: goto L_0880BEF4;
    case 707u: goto L_0880BF08;
    case 708u: goto L_0880BF10;
    case 709u: goto L_0880BF18;
    case 710u: goto L_0880BF20;
    case 711u: goto L_0880BF2C;
    case 712u: goto L_0880BF30;
    case 713u: goto L_0880BF40;
    case 714u: goto L_0880BF44;
    case 715u: goto L_0880BF50;
    case 716u: goto L_0880BF60;
    case 717u: goto L_0880BF78;
    case 718u: goto L_0880BF80;
    case 719u: goto L_0880BF90;
    case 720u: goto L_0880BF98;
    case 721u: goto L_0880BFA8;
    case 722u: goto L_0880BFBC;
    case 723u: goto L_0880BFEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08808000:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x08808014u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08808014u) goto L_08808014;
    return;
L_08808014:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08808030u);
    ctx.set_gpr(23, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08808030u) goto L_08808030;
    return;
L_08808030:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08808044u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08808044u) goto L_08808044;
    return;
L_08808044:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08808058u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08808058u) goto L_08808058;
    return;
L_08808058:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x0880806Cu);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x0880806Cu) goto L_0880806C;
    return;
L_0880806C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08808080u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08808080u) goto L_08808080;
    return;
L_08808080:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[4] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x0880809Cu);
    ctx.set_gpr(21, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880809Cu) goto L_0880809C;
    return;
L_0880809C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088080B8u);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x088080B8u) goto L_088080B8;
    return;
L_088080B8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2984)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2980)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088080D8u);
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x088080D8u) goto L_088080D8;
    return;
L_088080D8:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2976)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2972)));
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x088080F0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x088080F0u) goto L_088080F0;
    return;
L_088080F0:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08808104u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08808104u) goto L_08808104;
    return;
L_08808104:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2968)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2964)));
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0880811Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0880811Cu) goto L_0880811C;
    return;
L_0880811C:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08808130u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08808130u) goto L_08808130;
    return;
L_08808130:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2960)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2956)));
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08808148u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08808148u) goto L_08808148;
    return;
L_08808148:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0880815Cu);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880815Cu) goto L_0880815C;
    return;
L_0880815C:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2952)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2948)));
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08808174u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08808174u) goto L_08808174;
    return;
L_08808174:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08808188u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08808188u) goto L_08808188;
    return;
L_08808188:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2944)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2940)));
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x088081A0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x088081A0u) goto L_088081A0;
    return;
L_088081A0:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x088081B4u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x088081B4u) goto L_088081B4;
    return;
L_088081B4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088081D0u);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x088081D0u) goto L_088081D0;
    return;
L_088081D0:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x088081E4u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x088081E4u) goto L_088081E4;
    return;
L_088081E4:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088081F8u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x088081F8u) goto L_088081F8;
    return;
L_088081F8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[4] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(31, 0x08808214u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08808214u) goto L_08808214;
    return;
L_08808214:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2936)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2932)));
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0880823Cu);
    ctx.set_gpr(23, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0880823Cu) goto L_0880823C;
    return;
L_0880823C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08808250u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08808250u) goto L_08808250;
    return;
L_08808250:
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08808270u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08808270u) goto L_08808270;
    return;
L_08808270:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0880828Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880828Cu) goto L_0880828C;
    return;
L_0880828C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088082A8u);
    ctx.set_gpr(21, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x088082A8u) goto L_088082A8;
    return;
L_088082A8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(7, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x088082BCu);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x088082BCu) goto L_088082BC;
    return;
L_088082BC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088082D0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x088082D0u) goto L_088082D0;
    return;
L_088082D0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088082E4u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x088082E4u) goto L_088082E4;
    return;
L_088082E4:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x088082F8u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x088082F8u) goto L_088082F8;
    return;
L_088082F8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08808314u);
    ctx.set_gpr(21, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08808314u) goto L_08808314;
    return;
L_08808314:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2928)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2924)));
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08808334u);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08808334u) goto L_08808334;
    return;
L_08808334:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2920)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2916)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08808354u);
    ctx.set_gpr(23, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08808354u) goto L_08808354;
    return;
L_08808354:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08808370u);
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08808370u) goto L_08808370;
    return;
L_08808370:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08808384u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08808384u) goto L_08808384;
    return;
L_08808384:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2912)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2908)));
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0880839Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880839Cu) goto L_0880839C;
    return;
L_0880839C:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x088083B0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x088083B0u) goto L_088083B0;
    return;
L_088083B0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-3088));
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x088083D4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x088083D4u) goto L_088083D4;
    return;
L_088083D4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088083E4u);
    ctx.set_gpr(21, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x088083E4u) goto L_088083E4;
    return;
L_088083E4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-3104));
    ctx.set_gpr(4, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08808418u);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08808418u) goto L_08808418;
    return;
L_08808418:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0880842Cu);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0880842Cu) goto L_0880842C;
    return;
L_0880842C:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08808440u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08808440u) goto L_08808440;
    return;
L_08808440:
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.set_gpr(31, 0x0880845Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x0880845Cu) goto L_0880845C;
    return;
L_0880845C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08808470u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08808470u) goto L_08808470;
    return;
L_08808470:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x08808484u);
    ctx.set_gpr(7, ctx.gpr[23] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08808484u) goto L_08808484;
    return;
L_08808484:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    goto L_0880848C;
L_0880848C:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08808498u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08808498u) goto L_08808498;
    return;
L_08808498:
    ctx.set_gpr(21, ctx.gpr[3] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[30] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(3, 2225u << 16u);
      if (branch_taken) {
          goto L_08808AC0;
      }
      goto L_088084B4;
    }
L_088084B4:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2904)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2900)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    goto L_088084C8;
L_088084C8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088084ECu);
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x088084ECu) goto L_088084EC;
    return;
L_088084EC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08808500u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08808500u) goto L_08808500;
    return;
L_08808500:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0880851Cu);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880851Cu) goto L_0880851C;
    return;
L_0880851C:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08808530u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08808530u) goto L_08808530;
    return;
L_08808530:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0880854Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880854Cu) goto L_0880854C;
    return;
L_0880854C:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08808568u);
    ctx.set_gpr(21, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08808568u) goto L_08808568;
    return;
L_08808568:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16527u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(22, ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_08808A4C;
      }
      goto L_08808584;
    }
L_08808584:
    ctx.set_gpr(2, 49008u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[18] | ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_08808980;
      }
      goto L_08808598;
    }
L_08808598:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2888)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2884)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(23, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x088085B8u);
    ctx.set_gpr(23, (ctx.gpr[23] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x088085B8u) goto L_088085B8;
    return;
L_088085B8:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[21] + 0u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088085D4u);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x088085D4u) goto L_088085D4;
    return;
L_088085D4:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088085E8u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 913u, 0x0881FCCCu>(ctx, &aot_mem) && ctx.pc == 0x088085E8u) goto L_088085E8;
    return;
L_088085E8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_08808980;
      }
      goto L_088085F0;
    }
L_088085F0:
    ctx.set_gpr(2, 16352u << 16u);
    goto L_088085F4;
L_088085F4:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[23]) >> 20u));
    ctx.set_gpr(30, 0u + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
      if (branch_taken) {
          goto L_08808694;
      }
      goto L_08808608;
    }
L_08808608:
    ctx.set_gpr(7, 16u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1022));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> (ctx.gpr[3] & 31u)));
    ctx.set_gpr(3, ctx.gpr[22] + ctx.gpr[3]);
    ctx.set_gpr(6, (ctx.gpr[3] >> 20u) & 0x000007FFu);
    ctx.set_gpr(2, 15u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1023));
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> (ctx.gpr[6] & 31u)));
    ctx.set_gpr(2, ~(0u | ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(3, (ctx.gpr[3] & ~0xFFF00000u) | ((0u & 0x00000FFFu) << 20u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[7]);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[6]);
    ctx.set_gpr(30, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> (ctx.gpr[2] & 31u)));
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[4] + 0u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[22]) < 0 ? 1u : 0u);
    ctx.set_gpr(2, 0u - ctx.gpr[30]);
    ctx.set_gpr(31, 0x0880866Cu);
    if (ctx.gpr[3] != 0u) ctx.set_gpr(30, ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x0880866Cu) goto L_0880866C;
    return;
L_0880866C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08808688u);
    ctx.set_gpr(21, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08808688u) goto L_08808688;
    return;
L_08808688:
    ctx.set_gpr(4, ctx.gpr[30] << 20u);
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    goto L_08808694;
L_08808694:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2872)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2868)));
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x088086B4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x088086B4u) goto L_088086B4;
    return;
L_088086B4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[21] + 0u);
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088086D0u);
    ctx.set_gpr(23, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x088086D0u) goto L_088086D0;
    return;
L_088086D0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088086E4u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x088086E4u) goto L_088086E4;
    return;
L_088086E4:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2864)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2860)));
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x088086FCu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x088086FCu) goto L_088086FC;
    return;
L_088086FC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2856)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2852)));
    ctx.set_gpr(17, ctx.gpr[19] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08808720u);
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08808720u) goto L_08808720;
    return;
L_08808720:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08808734u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08808734u) goto L_08808734;
    return;
L_08808734:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08808750u);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08808750u) goto L_08808750;
    return;
L_08808750:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(7, ctx.gpr[23] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0880876Cu);
    ctx.set_gpr(21, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x0880876Cu) goto L_0880876C;
    return;
L_0880876C:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08808780u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08808780u) goto L_08808780;
    return;
L_08808780:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[21] + 0u);
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0880879Cu);
    ctx.set_gpr(23, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880879Cu) goto L_0880879C;
    return;
L_0880879C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2848)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2844)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x088087BCu);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x088087BCu) goto L_088087BC;
    return;
L_088087BC:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2840)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2836)));
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x088087D4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x088087D4u) goto L_088087D4;
    return;
L_088087D4:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088087E8u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x088087E8u) goto L_088087E8;
    return;
L_088087E8:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2832)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2828)));
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08808800u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08808800u) goto L_08808800;
    return;
L_08808800:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08808814u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08808814u) goto L_08808814;
    return;
L_08808814:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2824)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2820)));
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0880882Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x0880882Cu) goto L_0880882C;
    return;
L_0880882C:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08808840u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08808840u) goto L_08808840;
    return;
L_08808840:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2816)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2812)));
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08808858u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08808858u) goto L_08808858;
    return;
L_08808858:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0880886Cu);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880886Cu) goto L_0880886C;
    return;
L_0880886C:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08808880u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08808880u) goto L_08808880;
    return;
L_08808880:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0880889Cu);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880889Cu) goto L_0880889C;
    return;
L_0880889C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2808)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2804)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088088BCu);
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x088088BCu) goto L_088088BC;
    return;
L_088088BC:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x088088D0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x088088D0u) goto L_088088D0;
    return;
L_088088D0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(7, ctx.gpr[23] + 0u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088088ECu);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x088088ECu) goto L_088088EC;
    return;
L_088088EC:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x08808900u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08808900u) goto L_08808900;
    return;
L_08808900:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08808914u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08808914u) goto L_08808914;
    return;
L_08808914:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08808928u);
    ctx.set_gpr(7, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08808928u) goto L_08808928;
    return;
L_08808928:
    ctx.set_gpr(6, 2225u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-3056)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-3052)));
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08808940u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08808940u) goto L_08808940;
    return;
L_08808940:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(5, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 20u));
    ctx.set_gpr(2, ctx.gpr[6] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.set_gpr(3, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08808C8C;
      }
      goto L_08808960;
    }
L_08808960:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_08808964;
L_08808964:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08808974u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08808974u) goto L_08808974;
    return;
L_08808974:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    (void)rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 904u, 0x08807B90u>(ctx, &aot_mem); return;
L_08808980:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2896)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2892)));
    goto L_08808988;
L_08808988:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0880899Cu);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880899Cu) goto L_0880899C;
    return;
L_0880899C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088089B0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x088089B0u) goto L_088089B0;
    return;
L_088089B0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    (void)rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 904u, 0x08807B90u>(ctx, &aot_mem); return;
L_088089BC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) >= 0;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 904u, 0x08807B90u>(ctx, &aot_mem); return;
      }
      goto L_088089C8;
    }
L_088089C8:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-3056)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-3052)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088089E0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x088089E0u) goto L_088089E0;
    return;
L_088089E0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    (void)rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 904u, 0x08807B90u>(ctx, &aot_mem); return;
L_088089EC:
    if (static_cast<std::int32_t>(ctx.gpr[19]) >= 0) {
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 959u, 0x08807E80u>(ctx, &aot_mem); return;
    }
    goto L_088089F4;
L_088089F4:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(4, 32768u << 16u);
    ctx.set_gpr(3, ctx.gpr[6] ^ ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    (void)rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 904u, 0x08807B90u>(ctx, &aot_mem); return;
L_08808A10:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-3056)));
    ctx.set_gpr(31, 0x08808A20u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-3052)));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08808A20u) goto L_08808A20;
    return;
L_08808A20:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 928u, 0x08807CDCu>(ctx, &aot_mem); return;
L_08808A2C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08808A40u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08808A40u) goto L_08808A40;
    return;
L_08808A40:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    (void)rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 904u, 0x08807B90u>(ctx, &aot_mem); return;
L_08808A4C:
    ctx.set_gpr(23, ctx.gpr[3] + 0u);
    ctx.set_gpr(2, 16528u << 16u);
    ctx.set_gpr(23, (ctx.gpr[23] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    ctx.set_gpr(2, ctx.gpr[2] | 52223u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, 16352u << 16u);
      if (branch_taken) {
          goto L_088085F4;
      }
      goto L_08808A68;
    }
L_08808A68:
    ctx.set_gpr(2, 16239u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 13312u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_08808AB4;
      }
      goto L_08808A80;
    }
L_08808A80:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08808A94u);
    ctx.set_gpr(7, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08808A94u) goto L_08808A94;
    return;
L_08808A94:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08808AA8u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 934u, 0x0881FE94u>(ctx, &aot_mem) && ctx.pc == 0x08808AA8u) goto L_08808AA8;
    return;
L_08808AA8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    ctx.set_gpr(2, 16352u << 16u);
      if (branch_taken) {
          goto L_088085F4;
      }
      goto L_08808AB0;
    }
L_08808AB0:
    ctx.set_gpr(2, 2225u << 16u);
    goto L_08808AB4;
L_08808AB4:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2880)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2876)));
    goto L_08808988;
L_08808AC0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-3056)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-3052)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    goto L_088084C8;
L_08808AD4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) >= 0;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 904u, 0x08807B90u>(ctx, &aot_mem); return;
      }
      goto L_08808ADC;
    }
L_08808ADC:
    ctx.set_gpr(2, 2225u << 16u);
    (void)rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 955u, 0x08807E50u>(ctx, &aot_mem); return;
L_08808AE4:
    ctx.set_gpr(2, ctx.gpr[2] | 65534u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    if (ctx.gpr[2] == 0u) {
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
        goto L_08808AD4;
    }
    goto L_08808AF4;
L_08808AF4:
    ctx.set_gpr(2, 16368u << 16u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 953u, 0x08807E44u>(ctx, &aot_mem); return;
    }
    goto L_08808B04;
L_08808B04:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-3056)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-3052)));
    ctx.set_gpr(4, ctx.gpr[8] + 0u);
    ctx.set_gpr(31, 0x08808B1Cu);
    ctx.set_gpr(5, ctx.gpr[9] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08808B1Cu) goto L_08808B1C;
    return;
L_08808B1C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-3040)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-3036)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08808B3Cu);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08808B3Cu) goto L_08808B3C;
    return;
L_08808B3C:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-3032)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-3028)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08808B5Cu);
    ctx.set_gpr(21, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08808B5Cu) goto L_08808B5C;
    return;
L_08808B5C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08808B78u);
    ctx.set_gpr(23, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08808B78u) goto L_08808B78;
    return;
L_08808B78:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-3024)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-3020)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08808B98u);
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08808B98u) goto L_08808B98;
    return;
L_08808B98:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-3016)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-3012)));
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08808BB0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08808BB0u) goto L_08808BB0;
    return;
L_08808BB0:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08808BC4u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08808BC4u) goto L_08808BC4;
    return;
L_08808BC4:
    ctx.set_gpr(6, 2225u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-3008)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-3004)));
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08808BDCu);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08808BDCu) goto L_08808BDC;
    return;
L_08808BDC:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08808BF0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08808BF0u) goto L_08808BF0;
    return;
L_08808BF0:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-3000)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2996)));
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08808C08u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08808C08u) goto L_08808C08;
    return;
L_08808C08:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x08808C1Cu);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08808C1Cu) goto L_08808C1C;
    return;
L_08808C1C:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08808C38u);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08808C38u) goto L_08808C38;
    return;
L_08808C38:
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[21] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.set_gpr(31, 0x08808C54u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08808C54u) goto L_08808C54;
    return;
L_08808C54:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    goto L_0880848C;
L_08808C60:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.set_gpr(30, 0u + 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 920u, 0x08807CA0u>(ctx, &aot_mem); return;
      }
      goto L_08808C68;
    }
L_08808C68:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[6]);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> (ctx.gpr[2] & 31u)));
    ctx.set_gpr(2, ctx.gpr[3] << (ctx.gpr[2] & 31u));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[2];
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 913u, 0x08807C08u>(ctx, &aot_mem); return;
      }
      goto L_08808C80;
    }
L_08808C80:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(30, ctx.gpr[2] - ctx.gpr[3]);
    (void)rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 913u, 0x08807C08u>(ctx, &aot_mem); return;
L_08808C8C:
    ctx.set_gpr(4, ctx.gpr[6] + 0u);
    ctx.set_gpr(5, ctx.gpr[7] + 0u);
    ctx.set_gpr(31, 0x08808C9Cu);
    ctx.set_gpr(6, ctx.gpr[30] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 280u, 0x0880D72Cu>(ctx, &aot_mem) && ctx.pc == 0x08808C9Cu) goto L_08808C9C;
    return;
L_08808C9C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_08808964;
L_08808CA4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    ctx.set_gpr(2, 16361u << 16u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    ctx.set_gpr(20, (ctx.gpr[20] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    ctx.set_gpr(2, ctx.gpr[2] | 8699u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[30]);
    ctx.set_gpr(30, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[21]);
    ctx.set_gpr(21, ctx.gpr[6] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08808D38;
      }
      goto L_08808CF0;
    }
L_08808CF0:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), 0u);
    goto L_08808D04;
L_08808D04:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08808D38:
    ctx.set_gpr(2, 16386u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 55675u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, 16697u << 16u);
      if (branch_taken) {
          goto L_08808D90;
      }
      goto L_08808D4C;
    }
L_08808D4C:
    ctx.set_gpr(2, ctx.gpr[2] | 8699u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, 32751u << 16u);
      if (branch_taken) {
          goto L_08808E4C;
      }
      goto L_08808D5C;
    }
L_08808D5C:
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 20u));
      if (branch_taken) {
          goto L_088091BC;
      }
      goto L_08808D6C;
    }
L_08808D6C:
    ctx.set_gpr(6, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08808D78u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08808D78u) goto L_08808D78;
    return;
L_08808D78:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    goto L_08808D04;
L_08808D90:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_08809138;
      }
      goto L_08808D98;
    }
L_08808D98:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2408)));
    ctx.set_gpr(31, 0x08808DA4u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2404)));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08808DA4u) goto L_08808DA4;
    return;
L_08808DA4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16377u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 8699u);
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[2];
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_088092D8;
      }
      goto L_08808DB8;
    }
L_08808DB8:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2400)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2396)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08808DE0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08808DE0u) goto L_08808DE0;
    return;
L_08808DE0:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08808DFCu);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08808DFCu) goto L_08808DFC;
    return;
L_08808DFC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08808E10u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08808E10u) goto L_08808E10;
    return;
L_08808E10:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08808E4C:
    ctx.set_gpr(31, 0x08808E54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 219u, 0x0880D210u>(ctx, &aot_mem) && ctx.pc == 0x08808E54u) goto L_08808E54;
    return;
L_08808E54:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2376)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2372)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08808E74u);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08808E74u) goto L_08808E74;
    return;
L_08808E74:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2368)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2364)));
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08808E8Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08808E8Cu) goto L_08808E8C;
    return;
L_08808E8C:
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x08808E98u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 2u, 0x08820004u>(ctx, &aot_mem) && ctx.pc == 0x08808E98u) goto L_08808E98;
    return;
L_08808E98:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08808EA4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08808EA4u) goto L_08808EA4;
    return;
L_08808EA4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(2, 2225u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2360)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2356)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(31, 0x08808EC4u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08808EC4u) goto L_08808EC4;
    return;
L_08808EC4:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08808ED8u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08808ED8u) goto L_08808ED8;
    return;
L_08808ED8:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2400)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2396)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x08808EF8u);
    ctx.set_gpr(23, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08808EF8u) goto L_08808EF8;
    return;
L_08808EF8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_0880935C;
      }
      goto L_08808F0C;
    }
L_08808F0C:
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    goto L_08808F14;
L_08808F14:
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08808F20u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08808F20u) goto L_08808F20;
    return;
L_08808F20:
    ctx.set_gpr(20, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 20u));
    ctx.set_gpr(4, (ctx.gpr[3] >> 20u) & 0x000007FFu);
    ctx.set_gpr(4, ctx.gpr[20] - ctx.gpr[4]);
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[4]) < 17 ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
      if (branch_taken) {
          goto L_088090CC;
      }
      goto L_08808F3C;
    }
L_08808F3C:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2392)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2388)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(31, 0x08808F54u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08808F54u) goto L_08808F54;
    return;
L_08808F54:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08808F70u);
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08808F70u) goto L_08808F70;
    return;
L_08808F70:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2384)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2380)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x08808F90u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08808F90u) goto L_08808F90;
    return;
L_08808F90:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08808FACu);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08808FACu) goto L_08808FAC;
    return;
L_08808FAC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08808FC0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08808FC0u) goto L_08808FC0;
    return;
L_08808FC0:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08808FD4u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08808FD4u) goto L_08808FD4;
    return;
L_08808FD4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08808FF0u);
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08808FF0u) goto L_08808FF0;
    return;
L_08808FF0:
    ctx.set_gpr(6, (ctx.gpr[3] >> 20u) & 0x000007FFu);
    ctx.set_gpr(6, ctx.gpr[20] - ctx.gpr[6]);
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[6]) < 50 ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_088090CC;
      }
      goto L_08809010;
    }
L_08809010:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2352)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2348)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(31, 0x08809028u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08809028u) goto L_08809028;
    return;
L_08809028:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08809044u);
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08809044u) goto L_08809044;
    return;
L_08809044:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2344)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2340)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(31, 0x08809064u);
    ctx.set_gpr(23, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08809064u) goto L_08809064;
    return;
L_08809064:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(7, ctx.gpr[23] + 0u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08809080u);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08809080u) goto L_08809080;
    return;
L_08809080:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08809094u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08809094u) goto L_08809094;
    return;
L_08809094:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088090A8u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x088090A8u) goto L_088090A8;
    return;
L_088090A8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    goto L_088090B4;
L_088090B4:
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088090C4u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x088090C4u) goto L_088090C4;
    return;
L_088090C4:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_088090CC;
L_088090CC:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088090E8u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x088090E8u) goto L_088090E8;
    return;
L_088090E8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088090FCu);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x088090FCu) goto L_088090FC;
    return;
L_088090FC:
    ctx.set_gpr(8, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[30]) >= 0;
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08808D04;
      }
      goto L_0880910C;
    }
L_0880910C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(6, 32768u << 16u);
    ctx.set_gpr(5, ctx.gpr[17] ^ ctx.gpr[6]);
    ctx.set_gpr(2, 0u - ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] ^ ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    goto L_08808D04;
L_08809138:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2408)));
    ctx.set_gpr(31, 0x08809144u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2404)));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08809144u) goto L_08809144;
    return;
L_08809144:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16377u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 8699u);
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[2];
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_08809380;
      }
      goto L_08809158;
    }
L_08809158:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2400)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2396)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08809180u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08809180u) goto L_08809180;
    return;
L_08809180:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0880919Cu);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x0880919Cu) goto L_0880919C;
    return;
L_0880919C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x088091B0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x088091B0u) goto L_088091B0;
    return;
L_088091B0:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    goto L_08808D04;
L_088091BC:
    ctx.set_gpr(2, ctx.gpr[4] + 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-1046));
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[6] << 20u);
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2336)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2332)));
    ctx.set_gpr(3, ctx.gpr[20] - ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    ctx.set_gpr(18, ctx.gpr[29] + 0u);
    ctx.set_gpr(19, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_088091EC;
L_088091EC:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x088091F8u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 2u, 0x08820004u>(ctx, &aot_mem) && ctx.pc == 0x088091F8u) goto L_088091F8;
    return;
L_088091F8:
    ctx.set_gpr(31, 0x08809200u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08809200u) goto L_08809200;
    return;
L_08809200:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0880921Cu);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x0880921Cu) goto L_0880921C;
    return;
L_0880921C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x08809230u);
    ctx.set_gpr(7, ctx.gpr[23] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x08809230u) goto L_08809230;
    return;
L_08809230:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[19];
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_088091EC;
      }
      goto L_08809240;
    }
L_08809240:
    ctx.set_gpr(17, ctx.gpr[18] + 0u);
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    goto L_08809250;
L_08809250:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x0880926Cu);
    ctx.set_gpr(16, ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 899u, 0x0881FBBCu>(ctx, &aot_mem) && ctx.pc == 0x0880926Cu) goto L_0880926C;
    return;
L_0880926C:
    if (ctx.gpr[2] == 0u) {
    ctx.set_gpr(18, ctx.gpr[16] + 0u);
        goto L_08809250;
    }
    goto L_08809274;
L_08809274:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(9, 2225u << 16u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-2800));
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08809294u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(2));
    goto L_0880AAE8;
L_08809294:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[30]) >= 0;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08808D04;
      }
      goto L_0880929C;
    }
L_0880929C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.set_gpr(6, 32768u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] ^ ctx.gpr[6]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[5] ^ ctx.gpr[6]);
    ctx.set_gpr(4, 0u - ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_08808D04;
L_088092D8:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2392)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2388)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x088092F8u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x088092F8u) goto L_088092F8;
    return;
L_088092F8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2384)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2380)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08809320u);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08809320u) goto L_08809320;
    return;
L_08809320:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0880933Cu);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x0880933Cu) goto L_0880933C;
    return;
L_0880933C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08809350u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x08809350u) goto L_08809350;
    return;
L_08809350:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    goto L_08808D04;
L_0880935C:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-2536));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[4];
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
      if (branch_taken) {
          goto L_088090B4;
      }
      goto L_08809378;
    }
L_08809378:
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    goto L_08808F14;
L_08809380:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2392)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2388)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x088093A0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x088093A0u) goto L_088093A0;
    return;
L_088093A0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2384)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2380)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x088093C8u);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x088093C8u) goto L_088093C8;
    return;
L_088093C8:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(31, 0x088093E4u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x088093E4u) goto L_088093E4;
    return;
L_088093E4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x088093F8u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x088093F8u) goto L_088093F8;
    return;
L_088093F8:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    goto L_08808D04;
L_08809404:
    ctx.set_gpr(6, 32752u << 16u);
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(7, ctx.gpr[5] & ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.set_gpr(10, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(9, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[6];
    ctx.set_gpr(8, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_08809660;
      }
      goto L_08809434;
    }
L_08809434:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
      if (branch_taken) {
          goto L_088096A4;
      }
      goto L_0880943C;
    }
L_0880943C:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 20u));
    goto L_08809440;
L_08809440:
    if (ctx.gpr[3] != 0u) {
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-1023));
        goto L_088094AC;
    }
    goto L_08809448;
L_08809448:
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.set_gpr(3, 0u + 0u);
      if (branch_taken) {
          goto L_08809464;
      }
      goto L_08809450;
    }
L_08809450:
    ctx.set_gpr(3, 0u + 0u);
    goto L_08809454;
L_08809454:
    ctx.set_gpr(8, ctx.gpr[9] >> 11u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-21));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.set_gpr(9, ctx.gpr[9] << 21u);
      if (branch_taken) {
          goto L_08809454;
      }
      goto L_08809464;
    }
L_08809464:
    ctx.set_gpr(2, 16u << 16u);
    ctx.set_gpr(2, ctx.gpr[8] & ctx.gpr[2]);
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08809494;
      }
      goto L_08809478;
    }
L_08809478:
    ctx.set_gpr(4, 16u << 16u);
    goto L_0880947C;
L_0880947C:
    ctx.set_gpr(8, ctx.gpr[8] << 1u);
    ctx.set_gpr(2, ctx.gpr[8] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0880947C;
      }
      goto L_0880948C;
    }
L_0880948C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(4, ctx.gpr[2] - ctx.gpr[5]);
    goto L_08809494;
L_08809494:
    ctx.set_gpr(2, ctx.gpr[9] >> (ctx.gpr[4] & 31u));
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(8, ctx.gpr[8] | ctx.gpr[2]);
    ctx.set_gpr(9, ctx.gpr[9] << (ctx.gpr[5] & 31u));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-1023));
    goto L_088094AC;
L_088094AC:
    ctx.set_gpr(8, (ctx.gpr[8] & ~0xFFF00000u) | ((0u & 0x00000FFFu) << 20u));
    ctx.set_gpr(2, 16u << 16u);
    ctx.set_gpr(3, ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(4, ctx.gpr[8] | ctx.gpr[2]);
      if (branch_taken) {
          goto L_08809640;
      }
      goto L_088094C0;
    }
L_088094C0:
    ctx.set_gpr(2, ctx.gpr[9] >> 31u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(15, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[9] << 1u);
    ctx.set_gpr(12, 0u + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(6, 32u << 16u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(22));
    goto L_088094E4;
L_088094E4:
    ctx.set_gpr(4, ctx.gpr[9] + ctx.gpr[6]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.set_gpr(8, ctx.gpr[5] >> 31u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(5, ctx.gpr[5] << 1u);
      if (branch_taken) {
          goto L_08809508;
      }
      goto L_088094FC;
    }
L_088094FC:
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(12, ctx.gpr[12] + ctx.gpr[6]);
    ctx.set_gpr(9, ctx.gpr[4] + ctx.gpr[6]);
    goto L_08809508;
L_08809508:
    ctx.set_gpr(2, ctx.gpr[8] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.set_gpr(6, ctx.gpr[6] >> 1u);
      if (branch_taken) {
          goto L_088094E4;
      }
      goto L_08809518;
    }
L_08809518:
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(13, 0u + 0u);
    ctx.set_gpr(7, 32768u << 16u);
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(14, 32768u << 16u);
    goto L_0880954C;
L_08809530:
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[3];
    ctx.set_gpr(2, ctx.gpr[5] >> 31u);
      if (branch_taken) {
          goto L_08809618;
      }
      goto L_08809538;
    }
L_08809538:
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(7, ctx.gpr[7] >> 1u);
    ctx.set_gpr(5, ctx.gpr[5] << 1u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_088095A4;
      }
      goto L_0880954C;
    }
L_0880954C:
    ctx.set_gpr(4, ctx.gpr[7] + ctx.gpr[11]);
    ctx.set_gpr(8, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    ctx.set_gpr(10, ctx.gpr[10] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(8, (ctx.gpr[8] & ~0x7FFFFFFFu) | ((0u & 0x7FFFFFFFu) << 0u));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(6, ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08809530;
      }
      goto L_08809568;
    }
L_08809568:
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[9]);
    ctx.set_gpr(5, ctx.gpr[5] - ctx.gpr[4]);
    ctx.set_gpr(13, ctx.gpr[13] + ctx.gpr[7]);
    ctx.set_gpr(11, ctx.gpr[4] + ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[14];
    ctx.set_gpr(2, ctx.gpr[9] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08809604;
      }
      goto L_08809580;
    }
L_08809580:
    ctx.set_gpr(2, ctx.gpr[9] + 0u);
    goto L_08809584;
L_08809584:
    ctx.set_gpr(9, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[6]);
    goto L_0880958C;
L_0880958C:
    ctx.set_gpr(2, ctx.gpr[5] >> 31u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(7, ctx.gpr[7] >> 1u);
    ctx.set_gpr(5, ctx.gpr[5] << 1u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_0880954C;
      }
      goto L_088095A4;
    }
L_088095A4:
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(5, ctx.gpr[13] >> 1u);
      if (branch_taken) {
          goto L_088095C4;
      }
      goto L_088095B0;
    }
L_088095B0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[13] == ctx.gpr[2];
    ctx.set_gpr(2, ctx.gpr[13] & 1u);
      if (branch_taken) {
          goto L_088096E8;
      }
      goto L_088095BC;
    }
L_088095BC:
    ctx.set_gpr(2, ctx.gpr[13] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[2] >> 1u);
    goto L_088095C4;
L_088095C4:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[12]) >> 1u));
    ctx.set_gpr(2, 16352u << 16u);
    ctx.set_gpr(4, ctx.gpr[12] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_08809654;
      }
      goto L_088095D8;
    }
L_088095D8:
    ctx.set_gpr(2, ctx.gpr[15] << 20u);
    ctx.set_gpr(25, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[25] + 0u);
    goto L_088095E8;
L_088095E8:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_088095EC;
L_088095EC:
    ctx.set_gpr(3, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08809604:
    if (static_cast<std::int32_t>(ctx.gpr[11]) < 0) {
    ctx.set_gpr(2, ctx.gpr[9] + 0u);
        goto L_08809584;
    }
    goto L_0880960C;
L_0880960C:
    ctx.set_gpr(9, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[6]);
    goto L_0880958C;
L_08809618:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08809538;
      }
      goto L_08809620;
    }
L_08809620:
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[9]);
    ctx.set_gpr(5, ctx.gpr[5] - ctx.gpr[4]);
    ctx.set_gpr(13, ctx.gpr[13] + ctx.gpr[7]);
    ctx.set_gpr(11, ctx.gpr[4] + ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[14];
    ctx.set_gpr(2, ctx.gpr[9] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08809580;
      }
      goto L_08809638;
    }
L_08809638:
    // nop
    goto L_08809604;
L_08809640:
    ctx.set_gpr(2, ctx.gpr[9] >> 31u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(9, ctx.gpr[9] << 1u);
    goto L_088094C0;
L_08809654:
    ctx.set_gpr(2, 32768u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[2]);
    goto L_088095D8;
L_08809660:
    ctx.set_gpr(6, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0880966Cu);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880966Cu) goto L_0880966C;
    return;
L_0880966C:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08809680u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x08809680u) goto L_08809680;
    return;
L_08809680:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(3, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088096A4:
    ctx.set_gpr(2, (ctx.gpr[2] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    ctx.set_gpr(2, ctx.gpr[4] | ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_088095EC;
      }
      goto L_088096B4;
    }
L_088096B4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 20u));
      if (branch_taken) {
          goto L_08809440;
      }
      goto L_088096BC;
    }
L_088096BC:
    ctx.set_gpr(6, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x088096C8u);
    ctx.set_gpr(7, ctx.gpr[5] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x088096C8u) goto L_088096C8;
    return;
L_088096C8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x088096DCu);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 827u, 0x0881F7D8u>(ctx, &aot_mem) && ctx.pc == 0x088096DCu) goto L_088096DC;
    return;
L_088096DC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    goto L_088095E8;
L_088096E8:
    ctx.set_gpr(12, ctx.gpr[12] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 0u + 0u);
    goto L_088095C4;
L_088096F4:
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.set_gpr(2, 16256u << 16u);
    ctx.set_gpr(3, (ctx.gpr[3] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08809854;
      }
      goto L_08809718;
    }
L_08809718:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, 16127u << 16u);
      if (branch_taken) {
          goto L_08809740;
      }
      goto L_08809724;
    }
L_08809724:
    ctx.fpr[0] = ctx.fpr[12] - ctx.fpr[12];
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[0];
    goto L_0880972C;
L_0880972C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08809740:
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, 8960u << 16u);
      if (branch_taken) {
          goto L_08809868;
      }
      goto L_08809750;
    }
L_08809750:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_0880995C;
      }
      goto L_08809758;
    }
L_08809758:
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2280)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2268)));
    ctx.fpr[20] = ctx.fpr[21] - ctx.fpr[12];
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(20, 0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.set_gpr(31, 0x08809774u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    goto L_0880A5F0;
L_08809774:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2320)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2316)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2296)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[2];
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2312)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(4, 0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    ctx.set_gpr(2, 2225u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[2];
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2292)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[4] = ctx.fpr[4] - ctx.fpr[2];
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2308)));
    ctx.set_gpr(2, 2225u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(4, 0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[2];
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2288)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[4] = ctx.fpr[4] + ctx.fpr[2];
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2304)));
    ctx.set_gpr(2, 2225u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(4, 0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[2];
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2284)));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[4] = ctx.fpr[4] - ctx.fpr[2];
    ctx.set_gpr(2, (ctx.gpr[2] & ~0x00000FFFu) | ((0u & 0x00000FFFu) << 0u));
    ctx.fpr[5] = std::bit_cast<float>(ctx.gpr[2]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2300)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(4, 0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[3];
    ctx.fpr[3] = ctx.fpr[0] + ctx.fpr[5];
    ctx.fpr[4] = ctx.fpr[4] + ctx.fpr[21];
    ctx.fpr[2] = ctx.fpr[20] - ctx.fpr[2];
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(20, 0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[2] = ctx.fpr[2] / ctx.fpr[3];
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[4];
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[0];
    ctx.fpr[5] = ctx.fpr[5] + ctx.fpr[2];
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = ctx.fpr[5] + ctx.fpr[5];
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08809854:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.fpr[0] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0880972C;
      }
      goto L_0880985C;
    }
L_0880985C:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2328)));
    goto L_0880972C;
L_08809868:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_08809950;
      }
      goto L_08809874;
    }
L_08809874:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2320)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2316)));
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2296)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2312)));
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[2];
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2292)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[2];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2308)));
    ctx.set_gpr(2, 2225u << 16u);
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[2];
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2288)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[2];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2304)));
    ctx.set_gpr(2, 2225u << 16u);
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[2];
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2284)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[2];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2300)));
    ctx.set_gpr(2, 2225u << 16u);
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[2];
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2280)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[2];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2276)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[3] = ctx.fpr[3] / ctx.fpr[1];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2272)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[3];
    ctx.fpr[0] = ctx.fpr[12] - ctx.fpr[0];
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08809950:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2324)));
    goto L_0880972C;
L_0880995C:
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2280)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2268)));
    ctx.fpr[20] = ctx.fpr[12] + ctx.fpr[21];
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(20, 0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.set_gpr(31, 0x08809978u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    goto L_0880A5F0;
L_08809978:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2320)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2316)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[2];
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2296)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2312)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[3];
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2292)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[2] = ctx.fpr[2] - ctx.fpr[3];
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2308)));
    ctx.set_gpr(2, 2225u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[3];
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2288)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[3];
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2304)));
    ctx.set_gpr(2, 2225u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[3];
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2284)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[2] = ctx.fpr[2] - ctx.fpr[3];
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2300)));
    ctx.set_gpr(2, 2225u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[3];
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[21];
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(20, 0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2276)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[2];
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(20, 0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[1];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2264)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[20];
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2260)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    goto L_0880972C;
L_08809A48:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    ctx.set_gpr(16, (ctx.gpr[16] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    ctx.set_gpr(18, std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[21]));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08809BB4;
      }
      goto L_08809A7C;
    }
L_08809A7C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.fpr[0] = ctx.fpr[12] - ctx.fpr[12];
        goto L_08809B88;
    }
    goto L_08809A88;
L_08809A88:
    ctx.set_gpr(2, 16127u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, 12799u << 16u);
      if (branch_taken) {
          goto L_08809D24;
      }
      goto L_08809A9C;
    }
L_08809A9C:
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_08809BF8;
      }
      goto L_08809AAC;
    }
L_08809AAC:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2240)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2236)));
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2216)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2232)));
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[2];
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2212)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[2];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2228)));
    ctx.set_gpr(2, 2225u << 16u);
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[2];
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2208)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[2];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2224)));
    ctx.set_gpr(2, 2225u << 16u);
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[2];
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2204)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[2];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2220)));
    ctx.set_gpr(2, 2225u << 16u);
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[2];
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2244)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[2];
    ctx.fpr[3] = ctx.fpr[3] / ctx.fpr[1];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[3];
    jump_target = ctx.gpr[31];
    ctx.set_fpr_bits(0, ctx.fpr_bits(12));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08809B88:
    ctx.fpr[12] = ctx.fpr[0] / ctx.fpr[0];
    goto L_08809B8C;
L_08809B8C:
    ctx.set_fpr_bits(0, ctx.fpr_bits(12));
    goto L_08809B90;
L_08809B90:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08809BB4:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2256)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2252)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[1] + ctx.fpr[0];
    ctx.fpr[22] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[21] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_fpr_bits(0, ctx.fpr_bits(12));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08809BF8:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2248)));
    ctx.set_gpr(17, 2225u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2244)));
    ctx.fpr[0] = ctx.fpr[12] + ctx.fpr[0];
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.set_fpr_bits(0, ctx.fpr_bits(12));
      if (branch_taken) {
          goto L_08809B90;
      }
      goto L_08809C18;
    }
L_08809C18:
    ctx.set_gpr(31, 0x08809C20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 378u, 0x0880DEE0u>(ctx, &aot_mem) && ctx.pc == 0x08809C20u) goto L_08809C20;
    return;
L_08809C20:
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2244)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2200)));
    ctx.fpr[0] = ctx.fpr[3] - ctx.fpr[0];
    ctx.set_gpr(2, 2225u << 16u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(20, 0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2240)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2236)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2216)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2212)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 2225u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[2];
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2232)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[2];
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2208)));
    ctx.set_gpr(2, 2225u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[2];
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2228)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[2];
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2204)));
    ctx.set_gpr(2, 2225u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[2];
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2224)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[2];
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[22] = ctx.fpr[1] + ctx.fpr[3];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2220)));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.set_gpr(31, 0x08809CD8u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(21, 0x7FC00000u); else ctx.fpr[21] = fs * ft; }
    goto L_0880A5F0;
L_08809CD8:
    ctx.set_gpr(2, 16249u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 39321u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_fpr_bits(5, ctx.fpr_bits(0));
      if (branch_taken) {
          goto L_08809D2C;
      }
      goto L_08809CEC;
    }
L_08809CEC:
    ctx.fpr[0] = ctx.fpr[21] / ctx.fpr[22];
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2196)));
    ctx.set_gpr(2, 2225u << 16u);
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[5] + ctx.fpr[0];
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[0];
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2256)));
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    goto L_08809D14;
L_08809D14:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) > 0;
    ctx.set_fpr_bits(12, ctx.fpr_bits(0));
      if (branch_taken) {
          goto L_08809B8C;
      }
      goto L_08809D1C;
    }
L_08809D1C:
    ctx.set_fpr_bits(12, ctx.fpr_bits(0) ^ 0x80000000u);
    goto L_08809B8C;
L_08809D24:
    ctx.set_gpr(17, 2225u << 16u);
    goto L_08809C18;
L_08809D2C:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[6] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2192)));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[3] = ctx.fpr[21] / ctx.fpr[22];
    ctx.set_gpr(2, (ctx.gpr[2] & ~0x00000FFFu) | ((0u & 0x00000FFFu) << 0u));
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2188)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[5] + ctx.fpr[2];
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[5] = ctx.fpr[5] + ctx.fpr[5];
    ctx.fpr[0] = ctx.fpr[20] - ctx.fpr[0];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[1];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2196)));
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[4];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    ctx.fpr[3] = ctx.fpr[3] - ctx.fpr[0];
    ctx.fpr[3] = ctx.fpr[3] - ctx.fpr[2];
    ctx.fpr[0] = ctx.fpr[4] - ctx.fpr[3];
    goto L_08809D14;
L_08809D8C:
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_gpr(7, std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(3, 32640u << 16u);
    ctx.set_gpr(4, (ctx.gpr[4] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    ctx.set_fpr_bits(0, ctx.fpr_bits(12));
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(7, (ctx.gpr[7] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
      if (branch_taken) {
          goto L_08809E5C;
      }
      goto L_08809DC0;
    }
L_08809DC0:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[13];
        goto L_08809E60;
    }
    goto L_08809DCC;
L_08809DCC:
    ctx.set_gpr(2, 16256u << 16u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[2];
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 30u));
      if (branch_taken) {
          goto L_08809ED4;
      }
      goto L_08809DD8;
    }
L_08809DD8:
    ctx.set_gpr(2, ctx.gpr[2] & 2u);
    ctx.set_gpr(3, ctx.gpr[6] >> 31u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.set_gpr(16, ctx.gpr[3] | ctx.gpr[2]);
      if (branch_taken) {
          goto L_08809E70;
      }
      goto L_08809DE8;
    }
L_08809DE8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(2, 32640u << 16u);
      if (branch_taken) {
          goto L_08809EA4;
      }
      goto L_08809DF0;
    }
L_08809DF0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08809F14;
      }
      goto L_08809DF8;
    }
L_08809DF8:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[2];
    ctx.set_gpr(2, ctx.gpr[7] - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08809EA4;
      }
      goto L_08809E00;
    }
L_08809E00:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 23u));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < 61 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08809F48;
      }
      goto L_08809E10;
    }
L_08809E10:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2148)));
    goto L_08809E18;
L_08809E18:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08809F68;
      }
      goto L_08809E24;
    }
L_08809E24:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_08809F88;
      }
      goto L_08809E2C;
    }
L_08809E2C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_fpr_bits(0, ctx.fpr_bits(1));
      if (branch_taken) {
          goto L_08809E4C;
      }
      goto L_08809E34;
    }
L_08809E34:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2144)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2184)));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    goto L_08809E4C;
L_08809E4C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08809E5C:
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[13];
    goto L_08809E60;
L_08809E60:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08809E70:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08809EE4;
      }
      goto L_08809E7C;
    }
L_08809E7C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08809EC0;
      }
      goto L_08809E84;
    }
L_08809E84:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08809DE8;
      }
      goto L_08809E8C;
    }
L_08809E8C:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2180)));
    goto L_08809E94;
L_08809E94:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08809EA4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_08809EFC;
      }
      goto L_08809EAC;
    }
L_08809EAC:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2172)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08809EC0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08809DE8;
      }
      goto L_08809EC8;
    }
L_08809EC8:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08809ED4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    (void)rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 321u, 0x0880DA2Cu>(ctx, &aot_mem); return;
L_08809EE4:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2184)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08809EFC:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2176)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08809F14:
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[4];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08809FAC;
      }
      goto L_08809F1C;
    }
L_08809F1C:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08809FF4;
      }
      goto L_08809F24;
    }
L_08809F24:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0880A00C;
      }
      goto L_08809F2C;
    }
L_08809F2C:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08809EE4;
      }
      goto L_08809F34;
    }
L_08809F34:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    ctx.set_gpr(2, 32640u << 16u);
      if (branch_taken) {
          goto L_08809DF8;
      }
      goto L_08809F3C;
    }
L_08809F3C:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2180)));
    goto L_08809E94;
L_08809F48:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < -60 ? 1u : 0u);
      if (branch_taken) {
          goto L_08809FE4;
      }
      goto L_08809F50;
    }
L_08809F50:
    ctx.set_gpr(31, 0x08809F58u);
    ctx.fpr[12] = ctx.fpr[0] / ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 378u, 0x0880DEE0u>(ctx, &aot_mem) && ctx.pc == 0x08809F58u) goto L_08809F58;
    return;
L_08809F58:
    ctx.set_gpr(31, 0x08809F60u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(0));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 321u, 0x0880DA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08809F60u) goto L_08809F60;
    return;
L_08809F60:
    ctx.set_fpr_bits(1, ctx.fpr_bits(0));
    goto L_08809E18;
L_08809F68:
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, 32768u << 16u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] ^ ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08809F88:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2144)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2184)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08809FAC:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0880A028;
      }
      goto L_08809FB4;
    }
L_08809FB4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0880A058;
      }
      goto L_08809FBC;
    }
L_08809FBC:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0880A040;
      }
      goto L_08809FC4;
    }
L_08809FC4:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    ctx.set_gpr(2, 32640u << 16u);
      if (branch_taken) {
          goto L_08809DF8;
      }
      goto L_08809FCC;
    }
L_08809FCC:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2164)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08809FE4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.fpr[1] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08809E18;
      }
      goto L_08809FEC;
    }
L_08809FEC:
    // nop
    goto L_08809F50;
L_08809FF4:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2152)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880A00C:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.set_gpr(2, 32640u << 16u);
      if (branch_taken) {
          goto L_08809DF8;
      }
      goto L_0880A014;
    }
L_0880A014:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880A028:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2156)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880A040:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2168)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880A058:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.set_gpr(2, 32640u << 16u);
      if (branch_taken) {
          goto L_08809DF8;
      }
      goto L_0880A060;
    }
L_0880A060:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-2160)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880A078:
    ctx.set_gpr(9, std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(9, (ctx.gpr[9] & ~0x7FFFFFFFu) | ((0u & 0x7FFFFFFFu) << 0u));
    ctx.set_gpr(4, (ctx.gpr[4] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    ctx.set_fpr_bits(0, ctx.fpr_bits(12));
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(5, ctx.gpr[2] ^ ctx.gpr[9]);
      if (branch_taken) {
          goto L_0880A0B0;
      }
      goto L_0880A09C;
    }
L_0880A09C:
    ctx.set_gpr(2, 32639u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, 32640u << 16u);
      if (branch_taken) {
          goto L_0880A0BC;
      }
      goto L_0880A0B0;
    }
L_0880A0B0:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    goto L_0880A0B4;
L_0880A0B4:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = ctx.fpr[0] / ctx.fpr[0];
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880A0BC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
        goto L_0880A0B4;
    }
    goto L_0880A0C8;
L_0880A0C8:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880A1D8;
      }
      goto L_0880A0D4;
    }
L_0880A0D4:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.set_gpr(2, 127u << 16u);
      if (branch_taken) {
          goto L_0880A1A4;
      }
      goto L_0880A0DC;
    }
L_0880A0DC:
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 23u));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(7, ctx.gpr[3] + static_cast<std::uint32_t>(-127));
      if (branch_taken) {
          goto L_0880A108;
      }
      goto L_0880A0F0;
    }
L_0880A0F0:
    ctx.set_gpr(2, ctx.gpr[5] << 8u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(-126));
      if (branch_taken) {
          goto L_0880A108;
      }
      goto L_0880A0FC;
    }
L_0880A0FC:
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0880A0FC;
      }
      goto L_0880A108;
    }
L_0880A108:
    ctx.set_gpr(2, 127u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 23u));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(8, ctx.gpr[3] + static_cast<std::uint32_t>(-127));
      if (branch_taken) {
          goto L_0880A138;
      }
      goto L_0880A120;
    }
L_0880A120:
    ctx.set_gpr(2, ctx.gpr[4] << 8u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(-126));
      if (branch_taken) {
          goto L_0880A138;
      }
      goto L_0880A12C;
    }
L_0880A12C:
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0880A12C;
      }
      goto L_0880A138;
    }
L_0880A138:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[7]) < -126 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-126));
      if (branch_taken) {
          goto L_0880A1E0;
      }
      goto L_0880A144;
    }
L_0880A144:
    ctx.set_gpr(5, (ctx.gpr[5] & ~0xFF800000u) | ((0u & 0x000001FFu) << 23u));
    ctx.set_gpr(2, 128u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[2]);
    goto L_0880A150;
L_0880A150:
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[8]) < -126 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-126));
      if (branch_taken) {
          goto L_0880A1EC;
      }
      goto L_0880A15C;
    }
L_0880A15C:
    ctx.set_gpr(6, (ctx.gpr[6] & ~0xFF800000u) | ((0u & 0x000001FFu) << 23u));
    ctx.set_gpr(2, 128u << 16u);
    ctx.set_gpr(2, ctx.gpr[6] | ctx.gpr[2]);
    goto L_0880A168;
L_0880A168:
    ctx.set_gpr(3, ctx.gpr[7] - ctx.gpr[8]);
    ctx.set_gpr(6, 0u + 0u);
    goto L_0880A170;
L_0880A170:
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[6];
    ctx.set_gpr(4, ctx.gpr[5] - ctx.gpr[2]);
      if (branch_taken) {
          goto L_0880A194;
      }
      goto L_0880A178;
    }
L_0880A178:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.set_gpr(5, ctx.gpr[5] << 1u);
      if (branch_taken) {
          goto L_0880A170;
      }
      goto L_0880A184;
    }
L_0880A184:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(5, ctx.gpr[4] << 1u);
      if (branch_taken) {
          goto L_0880A1C0;
      }
      goto L_0880A18C;
    }
L_0880A18C:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[6];
    ctx.set_gpr(4, ctx.gpr[5] - ctx.gpr[2]);
      if (branch_taken) {
          goto L_0880A178;
      }
      goto L_0880A194;
    }
L_0880A194:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    if (ctx.gpr[2] == 0u) ctx.set_gpr(5, ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(2, 127u << 16u);
      if (branch_taken) {
          goto L_0880A1F8;
      }
      goto L_0880A1A4;
    }
L_0880A1A4:
    ctx.set_gpr(3, ctx.gpr[9] >> 31u);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2140));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880A1C0:
    ctx.set_gpr(3, ctx.gpr[9] >> 31u);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2140));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    goto L_0880A1D8;
L_0880A1D8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880A1E0:
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[7]);
    ctx.set_gpr(5, ctx.gpr[5] << (ctx.gpr[2] & 31u));
    goto L_0880A150;
L_0880A1EC:
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[8]);
    ctx.set_gpr(2, ctx.gpr[4] << (ctx.gpr[2] & 31u));
    goto L_0880A168;
L_0880A1F8:
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0880A224;
      }
      goto L_0880A208;
    }
L_0880A208:
    ctx.set_gpr(2, 127u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0880A208;
      }
      goto L_0880A220;
    }
L_0880A220:
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[8]) < -126 ? 1u : 0u);
    goto L_0880A224;
L_0880A224:
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-126));
      if (branch_taken) {
          goto L_0880A24C;
      }
      goto L_0880A22C;
    }
L_0880A22C:
    ctx.set_gpr(3, ctx.gpr[8] + static_cast<std::uint32_t>(127));
    ctx.set_gpr(2, 65408u << 16u);
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[3] << 23u);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    ctx.set_gpr(9, ctx.gpr[9] | ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[9]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880A24C:
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[8]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> (ctx.gpr[2] & 31u)));
    ctx.set_gpr(9, ctx.gpr[9] | ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[9]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880A260:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.set_gpr(16, std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(2, 16201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 4056u);
    ctx.set_gpr(16, (ctx.gpr[16] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.set_gpr(18, std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
      if (branch_taken) {
          goto L_0880A2BC;
      }
      goto L_0880A294;
    }
L_0880A294:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(5, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    goto L_0880A2A0;
L_0880A2A0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880A2BC:
    ctx.set_gpr(2, 16406u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 52195u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, 17225u << 16u);
      if (branch_taken) {
          goto L_0880A304;
      }
      goto L_0880A2D0;
    }
L_0880A2D0:
    ctx.set_gpr(2, ctx.gpr[2] | 3968u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, 32639u << 16u);
      if (branch_taken) {
          goto L_0880A364;
      }
      goto L_0880A2E0;
    }
L_0880A2E0:
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 23u));
      if (branch_taken) {
          goto L_0880A4B8;
      }
      goto L_0880A2F0;
    }
L_0880A2F0:
    ctx.fpr[0] = ctx.fpr[12] - ctx.fpr[12];
    ctx.set_gpr(5, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0880A2A0;
L_0880A304:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_0880A478;
      }
      goto L_0880A30C;
    }
L_0880A30C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1212)));
    ctx.set_gpr(3, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 16329u << 16u);
    ctx.set_gpr(3, (ctx.gpr[3] & ~0x0000000Fu) | ((0u & 0x0000000Fu) << 0u));
    ctx.set_gpr(2, ctx.gpr[2] | 4048u);
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[0];
      if (branch_taken) {
          goto L_0880A564;
      }
      goto L_0880A328;
    }
L_0880A328:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1208)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    ctx.fpr[1] = ctx.fpr[12] - ctx.fpr[2];
    ctx.fpr[0] = ctx.fpr[12] - ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[2];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880A364:
    ctx.set_gpr(31, 0x0880A36Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 378u, 0x0880DEE0u>(ctx, &aot_mem) && ctx.pc == 0x0880A36Cu) goto L_0880A36C;
    return;
L_0880A36C:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1196)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1192)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[2];
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1188)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_fpr_bits(1, ctx.fpu_float_to_word(ctx.fpr[1], 1u));
    ctx.fpr[5] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    ctx.set_gpr(5, std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1208)));
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[5]) < 32 ? 1u : 0u);
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.fpr[4] = ctx.fpr[0] + ctx.fpr[2];
      if (branch_taken) {
          goto L_0880A594;
      }
      goto L_0880A3B4;
    }
L_0880A3B4:
    ctx.fpr[0] = ctx.fpr[4] - ctx.fpr[3];
    goto L_0880A3B8;
L_0880A3B8:
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 23u));
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, (ctx.gpr[4] >> 23u) & 0x000000FFu);
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_0880A44C;
      }
      goto L_0880A3D4;
    }
L_0880A3D4:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1204)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1200)));
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[6] = ctx.fpr[4] - ctx.fpr[1];
    ctx.fpr[0] = ctx.fpr[4] - ctx.fpr[6];
    ctx.set_fpr_bits(4, ctx.fpr_bits(6));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    ctx.fpr[3] = ctx.fpr[2] - ctx.fpr[0];
    ctx.fpr[1] = ctx.fpr[6] - ctx.fpr[3];
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, (ctx.gpr[4] >> 23u) & 0x000000FFu);
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 26 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
      if (branch_taken) {
          goto L_0880A44C;
      }
      goto L_0880A41C;
    }
L_0880A41C:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1184)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1180)));
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[4] = ctx.fpr[6] - ctx.fpr[1];
    ctx.fpr[0] = ctx.fpr[6] - ctx.fpr[4];
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    ctx.fpr[3] = ctx.fpr[2] - ctx.fpr[0];
    ctx.fpr[1] = ctx.fpr[4] - ctx.fpr[3];
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_0880A44C;
L_0880A44C:
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[4] - ctx.fpr[2];
    ctx.fpr[1] = ctx.fpr[0] - ctx.fpr[3];
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) >= 0;
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
      if (branch_taken) {
          goto L_0880A2A0;
      }
      goto L_0880A460;
    }
L_0880A460:
    ctx.set_fpr_bits(0, ctx.fpr_bits(2) ^ 0x80000000u);
    ctx.set_fpr_bits(1, ctx.fpr_bits(1) ^ 0x80000000u);
    ctx.set_gpr(5, 0u - ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_0880A2A0;
L_0880A478:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1212)));
    ctx.set_gpr(3, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 16329u << 16u);
    ctx.set_gpr(3, (ctx.gpr[3] & ~0x0000000Fu) | ((0u & 0x0000000Fu) << 0u));
    ctx.set_gpr(2, ctx.gpr[2] | 4048u);
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
      if (branch_taken) {
          goto L_0880A5C0;
      }
      goto L_0880A494;
    }
L_0880A494:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1208)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.fpr[1] = ctx.fpr[12] + ctx.fpr[2];
    ctx.fpr[0] = ctx.fpr[12] - ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[2];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0880A2A0;
L_0880A4B8:
    ctx.set_gpr(6, ctx.gpr[2] + static_cast<std::uint32_t>(-134));
    ctx.set_gpr(2, ctx.gpr[6] << 23u);
    ctx.set_gpr(16, ctx.gpr[16] - ctx.gpr[2]);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.set_gpr(3, 2225u << 16u);
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1176)));
    ctx.set_gpr(2, ctx.gpr[29] + 0u);
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(8));
    goto L_0880A4D8;
L_0880A4D8:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[2], 1u));
    ctx.fpr[1] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    ctx.fpr[2] = ctx.fpr[2] - ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
      if (branch_taken) {
          goto L_0880A4D8;
      }
      goto L_0880A4F4;
    }
L_0880A4F4:
    ctx.fpr[1] = std::bit_cast<float>(0u);
    ctx.set_gpr(3, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    goto L_0880A50C;
L_0880A508:
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    goto L_0880A50C;
L_0880A50C:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[1])) && ctx.fpr[0] == ctx.fpr[1]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_0880A508;
      }
      goto L_0880A524;
    }
L_0880A524:
    ctx.set_gpr(9, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-2132));
    ctx.set_gpr(4, ctx.gpr[29] + 0u);
    ctx.set_gpr(31, 0x0880A53Cu);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(2));
    goto L_0880BC84;
L_0880A53C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) >= 0;
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_0880A2A0;
      }
      goto L_0880A544;
    }
L_0880A544:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(5, 0u - ctx.gpr[2]);
    ctx.set_fpr_bits(0, ctx.fpr_bits(0) ^ 0x80000000u);
    ctx.set_fpr_bits(1, ctx.fpr_bits(1) ^ 0x80000000u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_0880A2A0;
L_0880A564:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1204)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1200)));
    ctx.fpr[0] = ctx.fpr[12] - ctx.fpr[0];
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.fpr[1] = ctx.fpr[0] - ctx.fpr[2];
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[2];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0880A2A0;
L_0880A594:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1340));
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, (ctx.gpr[2] & ~0x000000FFu) | ((0u & 0x000000FFu) << 0u));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.fpr[0] = ctx.fpr[4] - ctx.fpr[3];
      if (branch_taken) {
          goto L_0880A3B8;
      }
      goto L_0880A5B8;
    }
L_0880A5B8:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0880A44C;
L_0880A5C0:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1204)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1200)));
    ctx.fpr[0] = ctx.fpr[12] + ctx.fpr[0];
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.fpr[1] = ctx.fpr[0] + ctx.fpr[2];
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[2];
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0880A2A0;
L_0880A5F0:
    ctx.set_gpr(3, std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(2, 32639u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(3, (ctx.gpr[3] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(6, std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0880A620;
      }
      goto L_0880A610;
    }
L_0880A610:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    goto L_0880A618;
L_0880A618:
    jump_target = ctx.gpr[31];
    ctx.set_fpr_bits(0, ctx.fpr_bits(12));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880A620:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0880A618;
      }
      goto L_0880A628;
    }
L_0880A628:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.set_gpr(2, 127u << 16u);
      if (branch_taken) {
          goto L_0880A718;
      }
      goto L_0880A630;
    }
L_0880A630:
    ctx.set_gpr(2, ctx.gpr[2] | 65535u);
    ctx.set_gpr(2, ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 23u));
      if (branch_taken) {
          goto L_0880A6E4;
      }
      goto L_0880A640;
    }
L_0880A640:
    ctx.set_gpr(6, (ctx.gpr[6] & ~0xFF800000u) | ((0u & 0x000001FFu) << 23u));
    ctx.set_gpr(2, 128u << 16u);
    ctx.set_gpr(2, ctx.gpr[6] | ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[3] + static_cast<std::uint32_t>(-127));
    ctx.set_gpr(4, ctx.gpr[5] & 1u);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    if (ctx.gpr[4] != 0u) ctx.set_gpr(2, ctx.gpr[3]);
    ctx.set_gpr(6, ctx.gpr[2] << 1u);
    ctx.set_gpr(4, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(7, 256u << 16u);
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(25));
    goto L_0880A674;
L_0880A674:
    ctx.set_gpr(3, ctx.gpr[9] + ctx.gpr[7]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0880A690;
      }
      goto L_0880A684;
    }
L_0880A684:
    ctx.set_gpr(6, ctx.gpr[6] - ctx.gpr[3]);
    ctx.set_gpr(10, ctx.gpr[10] + ctx.gpr[7]);
    ctx.set_gpr(9, ctx.gpr[3] + ctx.gpr[7]);
    goto L_0880A690;
L_0880A690:
    ctx.set_gpr(6, ctx.gpr[6] << 1u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.set_gpr(7, ctx.gpr[7] >> 1u);
      if (branch_taken) {
          goto L_0880A674;
      }
      goto L_0880A69C;
    }
L_0880A69C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(2, ctx.gpr[10] & 1u);
      if (branch_taken) {
          goto L_0880A6C4;
      }
      goto L_0880A6A4;
    }
L_0880A6A4:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 1u));
    ctx.set_gpr(3, 16128u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[4] << 23u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    goto L_0880A6BC;
L_0880A6BC:
    jump_target = ctx.gpr[31];
    ctx.set_fpr_bits(0, ctx.fpr_bits(12));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880A6C4:
    ctx.set_gpr(10, ctx.gpr[10] + ctx.gpr[2]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 1u));
    ctx.set_gpr(3, 16128u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[4] << 23u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    goto L_0880A6BC;
L_0880A6E4:
    ctx.set_gpr(2, 128u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(5, 0u + 0u);
      if (branch_taken) {
          goto L_0880A70C;
      }
      goto L_0880A6F4;
    }
L_0880A6F4:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(4, 128u << 16u);
    goto L_0880A6FC;
L_0880A6FC:
    ctx.set_gpr(6, ctx.gpr[6] << 1u);
    ctx.set_gpr(2, ctx.gpr[6] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0880A6FC;
      }
      goto L_0880A70C;
    }
L_0880A70C:
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_0880A640;
L_0880A718:
    ctx.fpr[0] = ctx.fpr[12] - ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[0] / ctx.fpr[0];
    jump_target = ctx.gpr[31];
    ctx.set_fpr_bits(0, ctx.fpr_bits(12));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880A728:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.set_gpr(8, 15935u << 16u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, (ctx.gpr[18] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    ctx.set_gpr(8, ctx.gpr[8] | 65535u);
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(3, 0u + 0u);
    ctx.set_gpr(8, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    ctx.set_gpr(21, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0880A798;
      }
      goto L_0880A788;
    }
L_0880A788:
    ctx.set_gpr(31, 0x0880A790u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 2u, 0x08820004u>(ctx, &aot_mem) && ctx.pc == 0x0880A790u) goto L_0880A790;
    return;
L_0880A790:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_0880AAB4;
      }
      goto L_0880A798;
    }
L_0880A798:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0880A7ACu);
    ctx.set_gpr(7, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880A7ACu) goto L_0880A7AC;
    return;
L_0880A7AC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1160)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1156)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0880A7CCu);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880A7CCu) goto L_0880A7CC;
    return;
L_0880A7CC:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1152)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1148)));
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0880A7E4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0880A7E4u) goto L_0880A7E4;
    return;
L_0880A7E4:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0880A7F8u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880A7F8u) goto L_0880A7F8;
    return;
L_0880A7F8:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1144)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1140)));
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0880A810u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x0880A810u) goto L_0880A810;
    return;
L_0880A810:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0880A824u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880A824u) goto L_0880A824;
    return;
L_0880A824:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1136)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1132)));
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0880A83Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0880A83Cu) goto L_0880A83C;
    return;
L_0880A83C:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0880A850u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880A850u) goto L_0880A850;
    return;
L_0880A850:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1128)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1124)));
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0880A868u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x0880A868u) goto L_0880A868;
    return;
L_0880A868:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0880A87Cu);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880A87Cu) goto L_0880A87C;
    return;
L_0880A87C:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1120)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-1116)));
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0880A894u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0880A894u) goto L_0880A894;
    return;
L_0880A894:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0880A8A8u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880A8A8u) goto L_0880A8A8;
    return;
L_0880A8A8:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 16339u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 13106u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(23, ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_0880A9BC;
      }
      goto L_0880A8C0;
    }
L_0880A8C0:
    ctx.set_gpr(2, 16361u << 16u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, 65504u << 16u);
      if (branch_taken) {
          goto L_0880AA78;
      }
      goto L_0880A8D0;
    }
L_0880A8D0:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1096)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1092)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1104)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1100)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    goto L_0880A8F0;
L_0880A8F0:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1112)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1108)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0880A908u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880A908u) goto L_0880A908;
    return;
L_0880A908:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0880A91Cu);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x0880A91Cu) goto L_0880A91C;
    return;
L_0880A91C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(7, ctx.gpr[23] + 0u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0880A938u);
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880A938u) goto L_0880A938;
    return;
L_0880A938:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0880A954u);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880A954u) goto L_0880A954;
    return;
L_0880A954:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0880A968u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x0880A968u) goto L_0880A968;
    return;
L_0880A968:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0880A97Cu);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x0880A97Cu) goto L_0880A97C;
    return;
L_0880A97C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0880A990u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x0880A990u) goto L_0880A990;
    return;
L_0880A990:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880A9BC:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1112)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1108)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0880A9D4u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880A9D4u) goto L_0880A9D4;
    return;
L_0880A9D4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(7, ctx.gpr[23] + 0u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0880A9F0u);
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880A9F0u) goto L_0880A9F0;
    return;
L_0880A9F0:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0880AA0Cu);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880AA0Cu) goto L_0880AA0C;
    return;
L_0880AA0C:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0880AA20u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x0880AA20u) goto L_0880AA20;
    return;
L_0880AA20:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0880AA34u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x0880AA34u) goto L_0880AA34;
    return;
L_0880AA34:
    ctx.set_gpr(6, 2225u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-1168)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-1164)));
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0880AA4Cu);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x0880AA4Cu) goto L_0880AA4C;
    return;
L_0880AA4C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880AA78:
    ctx.set_gpr(18, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(2, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    ctx.set_gpr(3, 2225u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1168)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-1164)));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0880AAA8u);
    ctx.set_gpr(7, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x0880AAA8u) goto L_0880AAA8;
    return;
L_0880AAA8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    goto L_0880A8F0;
L_0880AAB4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1164)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1168)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880AAE8:
    ctx.set_gpr(3, 10922u << 16u);
    ctx.set_gpr(10, ctx.gpr[6] + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(3, ctx.gpr[3] | 43691u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[10])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(11, ctx.gpr[6] + 0u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1024));
    ctx.set_gpr(6, ctx.gpr[8] << 2u);
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.hi);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(10, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 31u));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 2u));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-688));
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[10]);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(676), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(672), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(668), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(664), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(656), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(652), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(648), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(644), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(640), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(612), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(592), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(604), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(608), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(616), ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(588), ctx.gpr[6]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(596), ctx.gpr[7]);
      if (branch_taken) {
          goto L_0880B7A0;
      }
      goto L_0880AB70;
    }
L_0880AB70:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] << 5u);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[2]);
    goto L_0880AB80;
L_0880AB80:
    ctx.set_gpr(11, ctx.gpr[11] + ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(588)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
    ctx.set_gpr(5, ctx.gpr[11] + static_cast<std::uint32_t>(-24));
    ctx.set_gpr(20, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(580), ctx.gpr[11]);
    ctx.set_gpr(17, ctx.gpr[6] - ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) < 0;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(560), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0880ABF8;
      }
      goto L_0880ABA8;
    }
L_0880ABA8:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(616)));
    ctx.set_gpr(2, ctx.gpr[17] << 2u);
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(16, ctx.gpr[8] + ctx.gpr[2]);
    ctx.set_gpr(18, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    goto L_0880ABBC;
L_0880ABBC:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, 0u + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    ctx.set_gpr(5, 0u + 0u);
      if (branch_taken) {
          goto L_0880ABDC;
      }
      goto L_0880ABCC;
    }
L_0880ABCC:
    ctx.set_gpr(31, 0x0880ABD4u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x0880ABD4u) goto L_0880ABD4;
    return;
L_0880ABD4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    goto L_0880ABDC;
L_0880ABDC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0880ABBC;
      }
      goto L_0880ABF8;
    }
L_0880ABF8:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(588)));
    ctx.set_gpr(21, 0u + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[9]) < 0;
    ctx.set_gpr(22, ctx.gpr[29] + static_cast<std::uint32_t>(400));
      if (branch_taken) {
          goto L_0880AC94;
      }
      goto L_0880AC08;
    }
L_0880AC08:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_0880AC78;
      }
      goto L_0880AC18;
    }
L_0880AC18:
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(604)));
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(20, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(18, 0u + 0u);
    goto L_0880AC30;
L_0880AC30:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0880AC4Cu);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880AC4Cu) goto L_0880AC4C;
    return;
L_0880AC4C:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0880AC60u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0880AC60u) goto L_0880AC60;
    return;
L_0880AC60:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(-8));
      if (branch_taken) {
          goto L_0880AC30;
      }
      goto L_0880AC78;
    }
L_0880AC78:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(588)));
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0880AC08;
      }
      goto L_0880AC94;
    }
L_0880AC94:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(588)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(600), ctx.gpr[3]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(600)));
    goto L_0880ACA0;
L_0880ACA0:
    ctx.set_gpr(21, ctx.gpr[4] << 3u);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[29]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(400)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(404)));
      if (branch_taken) {
          goto L_0880AD6C;
      }
      goto L_0880ACB4;
    }
L_0880ACB4:
    ctx.set_gpr(3, ctx.gpr[29] + ctx.gpr[21]);
    ctx.set_gpr(20, ctx.gpr[3] + static_cast<std::uint32_t>(392));
    ctx.set_gpr(22, 0u + 0u);
    ctx.set_gpr(21, ctx.gpr[29] + 0u);
    goto L_0880ACC4;
L_0880ACC4:
    ctx.set_gpr(5, 2225u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-1008));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0880ACE0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880ACE0u) goto L_0880ACE0;
    return;
L_0880ACE0:
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0880ACECu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 2u, 0x08820004u>(ctx, &aot_mem) && ctx.pc == 0x0880ACECu) goto L_0880ACEC;
    return;
L_0880ACEC:
    ctx.set_gpr(31, 0x0880ACF4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x0880ACF4u) goto L_0880ACF4;
    return;
L_0880ACF4:
    ctx.set_gpr(8, 2225u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-1000));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0880AD18u);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880AD18u) goto L_0880AD18;
    return;
L_0880AD18:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0880AD2Cu);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0880AD2Cu) goto L_0880AD2C;
    return;
L_0880AD2C:
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0880AD38u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 2u, 0x08820004u>(ctx, &aot_mem) && ctx.pc == 0x0880AD38u) goto L_0880AD38;
    return;
L_0880AD38:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0880AD50u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0880AD50u) goto L_0880AD50;
    return;
L_0880AD50:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(600)));
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[9];
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(-8));
      if (branch_taken) {
          goto L_0880ACC4;
      }
      goto L_0880AD6C;
    }
L_0880AD6C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(560)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0880AD7Cu);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 280u, 0x0880D72Cu>(ctx, &aot_mem) && ctx.pc == 0x0880AD7Cu) goto L_0880AD7C;
    return;
L_0880AD7C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-992)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-988)));
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0880AD9Cu);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880AD9Cu) goto L_0880AD9C;
    return;
L_0880AD9C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0880ADA8u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 221u, 0x0880D238u>(ctx, &aot_mem) && ctx.pc == 0x0880ADA8u) goto L_0880ADA8;
    return;
L_0880ADA8:
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-984)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-980)));
    ctx.set_gpr(31, 0x0880ADC0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880ADC0u) goto L_0880ADC0;
    return;
L_0880ADC0:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0880ADD4u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0880ADD4u) goto L_0880ADD4;
    return;
L_0880ADD4:
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0880ADE8u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 2u, 0x08820004u>(ctx, &aot_mem) && ctx.pc == 0x0880ADE8u) goto L_0880ADE8;
    return;
L_0880ADE8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0880ADF4u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(584), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x0880ADF4u) goto L_0880ADF4;
    return;
L_0880ADF4:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0880AE08u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x0880AE08u) goto L_0880AE08;
    return;
L_0880AE08:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(560)));
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_0880B418;
      }
      goto L_0880AE18;
    }
L_0880AE18:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(600)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(560)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, ctx.gpr[5] << 2u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[29]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[8]);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> (ctx.gpr[3] & 31u)));
    ctx.set_gpr(3, ctx.gpr[6] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(23));
    ctx.set_gpr(4, ctx.gpr[4] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[8]);
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> (ctx.gpr[2] & 31u)));
    ctx.set_gpr(9, ctx.gpr[9] + ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(584), ctx.gpr[9]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_0880AE64;
L_0880AE64:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_0880AF14;
      }
      goto L_0880AE70;
    }
L_0880AE70:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(600)));
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) <= 0;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(584), ctx.gpr[6]);
      if (branch_taken) {
          goto L_0880AEE0;
      }
      goto L_0880AE88;
    }
L_0880AE88:
    ctx.set_gpr(2, 255u << 16u);
    ctx.set_gpr(7, ctx.gpr[2] | 65535u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(3, ctx.gpr[29] + 0u);
    ctx.set_gpr(6, 256u << 16u);
    goto L_0880AEC0;
L_0880AEA0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, ctx.gpr[6] - ctx.gpr[2]);
      if (branch_taken) {
          goto L_0880AEB0;
      }
      goto L_0880AEA8;
    }
L_0880AEA8:
    ctx.set_gpr(20, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_0880AEB0;
L_0880AEB0:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(600)));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[9];
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0880AEE0;
      }
      goto L_0880AEC0;
    }
L_0880AEC0:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0880AEA0;
      }
      goto L_0880AEC8;
    }
L_0880AEC8:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(600)));
    ctx.set_gpr(2, ctx.gpr[7] - ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[9];
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0880AEC0;
      }
      goto L_0880AEE0;
    }
L_0880AEE0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(560)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(560)));
      if (branch_taken) {
          goto L_0880AF00;
      }
      goto L_0880AEEC;
    }
L_0880AEEC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0880B440;
      }
      goto L_0880AEF8;
    }
L_0880AEF8:
    if (ctx.gpr[3] == ctx.gpr[2]) {
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(600)));
        goto L_0880B460;
    }
    goto L_0880AF00;
L_0880AF00:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    ctx.set_gpr(8, 2225u << 16u);
      if (branch_taken) {
          goto L_0880B0B0;
      }
      goto L_0880AF10;
    }
L_0880AF10:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    goto L_0880AF14;
L_0880AF14:
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0880AF24u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 899u, 0x0881FBBCu>(ctx, &aot_mem) && ctx.pc == 0x0880AF24u) goto L_0880AF24;
    return;
L_0880AF24:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(560)));
      if (branch_taken) {
          goto L_0880B124;
      }
      goto L_0880AF2C;
    }
L_0880AF2C:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(600)));
    goto L_0880AF30;
L_0880AF30:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(588)));
    ctx.set_gpr(7, ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(588)));
      if (branch_taken) {
          goto L_0880AF78;
      }
      goto L_0880AF44;
    }
L_0880AF44:
    ctx.set_gpr(8, ctx.gpr[7] << 2u);
    ctx.set_gpr(5, ctx.gpr[29] + ctx.gpr[8]);
    ctx.set_gpr(4, ctx.gpr[7] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(588)));
    goto L_0880AF58;
L_0880AF58:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_0880AF58;
      }
      goto L_0880AF70;
    }
L_0880AF70:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(588)));
      if (branch_taken) {
          goto L_0880B4A8;
      }
      goto L_0880AF78;
    }
L_0880AF78:
    ctx.set_gpr(5, ctx.gpr[6] << 2u);
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[29]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0880AFA4;
      }
      goto L_0880AF8C;
    }
L_0880AF8C:
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, ctx.gpr[29] + ctx.gpr[2]);
    goto L_0880AF94;
L_0880AF94:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_0880AF94;
      }
      goto L_0880AFA4;
    }
L_0880AFA4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(600)));
    ctx.set_gpr(19, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(600), ctx.gpr[2]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(600)));
      if (branch_taken) {
          goto L_0880ACA0;
      }
      goto L_0880AFC0;
    }
L_0880AFC0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(616)));
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[19]);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[19]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(5, ctx.gpr[6] << 3u);
    ctx.set_gpr(4, ctx.gpr[19] << 3u);
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(400));
    ctx.set_gpr(9, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(30, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(23, ctx.gpr[8] + ctx.gpr[3]);
    ctx.set_gpr(22, ctx.gpr[9] + ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(564), ctx.gpr[6]);
    goto L_0880AFF8;
L_0880AFF8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(31, 0x0880B008u);
    ctx.set_gpr(21, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x0880B008u) goto L_0880B008;
    return;
L_0880B008:
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
      if (branch_taken) {
          goto L_0880B078;
      }
      goto L_0880B018;
    }
L_0880B018:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(604)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(2, ctx.gpr[3] << 3u);
    ctx.set_gpr(17, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(18, 0u + 0u);
    goto L_0880B030;
L_0880B030:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0880B04Cu);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880B04Cu) goto L_0880B04C;
    return;
L_0880B04C:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0880B060u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0880B060u) goto L_0880B060;
    return;
L_0880B060:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(21, ctx.gpr[3] + 0u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-8));
      if (branch_taken) {
          goto L_0880B030;
      }
      goto L_0880B078;
    }
L_0880B078:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(600)));
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    ctx.set_gpr(23, ctx.gpr[23] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(4), ctx.gpr[21]);
    ctx.set_gpr(30, ctx.gpr[30] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(564), ctx.gpr[8]);
      if (branch_taken) {
          goto L_0880AFF8;
      }
      goto L_0880B0A8;
    }
L_0880B0A8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(600)));
    goto L_0880ACA0;
L_0880B0B0:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-968)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-964)));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0880B0CCu);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x0880B0CCu) goto L_0880B0CC;
    return;
L_0880B0CC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_0880AF10;
      }
      goto L_0880B0D8;
    }
L_0880B0D8:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(560)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0880B0E8u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 280u, 0x0880D72Cu>(ctx, &aot_mem) && ctx.pc == 0x0880B0E8u) goto L_0880B0E8;
    return;
L_0880B0E8:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0880B0FCu);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x0880B0FCu) goto L_0880B0FC;
    return;
L_0880B0FC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0880B118u);
    ctx.set_gpr(7, 0u + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 899u, 0x0881FBBCu>(ctx, &aot_mem) && ctx.pc == 0x0880B118u) goto L_0880B118;
    return;
L_0880B118:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(600)));
      if (branch_taken) {
          goto L_0880AF30;
      }
      goto L_0880B120;
    }
L_0880B120:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(560)));
    goto L_0880B124;
L_0880B124:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0880B134u);
    ctx.set_gpr(6, 0u - ctx.gpr[8]);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 280u, 0x0880D72Cu>(ctx, &aot_mem) && ctx.pc == 0x0880B134u) goto L_0880B134;
    return;
L_0880B134:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-960)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-956)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0880B154u);
    ctx.set_gpr(21, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 920u, 0x0881FD6Cu>(ctx, &aot_mem) && ctx.pc == 0x0880B154u) goto L_0880B154;
    return;
L_0880B154:
    if (static_cast<std::int32_t>(ctx.gpr[2]) >= 0) {
    ctx.set_gpr(6, 2225u << 16u);
        goto L_0880B6FC;
    }
    goto L_0880B15C;
L_0880B15C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(600)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0880B170u);
    ctx.set_gpr(16, ctx.gpr[6] << 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 2u, 0x08820004u>(ctx, &aot_mem) && ctx.pc == 0x0880B170u) goto L_0880B170;
    return;
L_0880B170:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(560)));
    ctx.set_gpr(16, ctx.gpr[16] + ctx.gpr[29]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(580), ctx.gpr[8]);
    goto L_0880B180;
L_0880B180:
    ctx.set_gpr(9, 2225u << 16u);
    goto L_0880B184;
L_0880B184:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-968)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-964)));
    ctx.set_gpr(31, 0x0880B194u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(580)));
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 280u, 0x0880D72Cu>(ctx, &aot_mem) && ctx.pc == 0x0880B194u) goto L_0880B194;
    return;
L_0880B194:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_0880B2DC;
      }
      goto L_0880B1A4;
    }
L_0880B1A4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(600)));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(23, ctx.gpr[29] + static_cast<std::uint32_t>(400));
    ctx.set_gpr(21, ctx.gpr[3] << 3u);
    ctx.set_gpr(18, ctx.gpr[29] + ctx.gpr[2]);
    ctx.set_gpr(20, ctx.gpr[23] + ctx.gpr[21]);
    ctx.set_gpr(22, 0u + 0u);
    ctx.set_gpr(19, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    goto L_0880B1C4;
L_0880B1C4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(22, ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0880B1D4u);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(-4));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x0880B1D4u) goto L_0880B1D4;
    return;
L_0880B1D4:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0880B1E8u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880B1E8u) goto L_0880B1E8;
    return;
L_0880B1E8:
    ctx.set_gpr(8, 2225u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-1008));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0880B20Cu);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880B20Cu) goto L_0880B20C;
    return;
L_0880B20C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[19];
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(-8));
      if (branch_taken) {
          goto L_0880B1C4;
      }
      goto L_0880B21C;
    }
L_0880B21C:
    ctx.set_gpr(21, 0u + 0u);
    goto L_0880B23C;
L_0880B224:
    ctx.set_gpr(2, ctx.gpr[21] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(240), ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[22];
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(244), ctx.gpr[17]);
      if (branch_taken) {
          goto L_0880B2DC;
      }
      goto L_0880B23C;
    }
L_0880B23C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(600)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(588)));
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[21]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.set_gpr(17, 0u + 0u);
      if (branch_taken) {
          goto L_0880B224;
      }
      goto L_0880B254;
    }
L_0880B254:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) < 0;
    // nop
      if (branch_taken) {
          goto L_0880B224;
      }
      goto L_0880B25C;
    }
L_0880B25C:
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(3, 2225u << 16u);
    ctx.set_gpr(20, ctx.gpr[23] + ctx.gpr[2]);
    ctx.set_gpr(19, ctx.gpr[3] + static_cast<std::uint32_t>(-1088));
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    goto L_0880B274;
L_0880B274:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0880B28Cu);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880B28Cu) goto L_0880B28C;
    return;
L_0880B28C:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0880B2A0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0880B2A0u) goto L_0880B2A0;
    return;
L_0880B2A0:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(588)));
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0880B224;
      }
      goto L_0880B2BC;
    }
L_0880B2BC:
    if (ctx.gpr[3] == 0u) {
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
        goto L_0880B274;
    }
    goto L_0880B2C4;
L_0880B2C4:
    ctx.set_gpr(2, ctx.gpr[21] << 3u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(240), ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[22];
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(244), ctx.gpr[17]);
      if (branch_taken) {
          goto L_0880B23C;
      }
      goto L_0880B2DC;
    }
L_0880B2DC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(612)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(612)));
      if (branch_taken) {
          goto L_0880B4F8;
      }
      goto L_0880B2EC;
    }
L_0880B2EC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(600)));
      if (branch_taken) {
          goto L_0880B7AC;
      }
      goto L_0880B2F4;
    }
L_0880B2F4:
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.set_gpr(9, 0u + 0u);
      if (branch_taken) {
          goto L_0880B33C;
      }
      goto L_0880B300;
    }
L_0880B300:
    ctx.set_gpr(3, ctx.gpr[4] << 3u);
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.set_gpr(17, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(19, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_0880B314;
L_0880B314:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[8] + 0u);
    ctx.set_gpr(31, 0x0880B328u);
    ctx.set_gpr(5, ctx.gpr[9] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0880B328u) goto L_0880B328;
    return;
L_0880B328:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(8, ctx.gpr[2] + 0u);
    ctx.set_gpr(9, ctx.gpr[3] + 0u);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[16];
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-8));
      if (branch_taken) {
          goto L_0880B314;
      }
      goto L_0880B33C;
    }
L_0880B33C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
    ctx.set_gpr(6, ctx.gpr[8] + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.set_gpr(7, ctx.gpr[9] + 0u);
      if (branch_taken) {
          goto L_0880B358;
      }
      goto L_0880B34C;
    }
L_0880B34C:
    ctx.set_gpr(2, 32768u << 16u);
    ctx.set_gpr(6, ctx.gpr[8] + 0u);
    ctx.set_gpr(7, ctx.gpr[9] ^ ctx.gpr[2]);
    goto L_0880B358;
L_0880B358:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(608)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.set_gpr(6, ctx.gpr[8] + 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.set_gpr(31, 0x0880B378u);
    ctx.set_gpr(7, ctx.gpr[9] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x0880B378u) goto L_0880B378;
    return;
L_0880B378:
    ctx.set_gpr(9, ctx.gpr[3] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    ctx.set_gpr(8, ctx.gpr[2] + 0u);
      if (branch_taken) {
          goto L_0880B3C0;
      }
      goto L_0880B388;
    }
L_0880B388:
    ctx.set_gpr(17, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(248));
    goto L_0880B390;
L_0880B390:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[8] + 0u);
    ctx.set_gpr(31, 0x0880B3A4u);
    ctx.set_gpr(5, ctx.gpr[9] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0880B3A4u) goto L_0880B3A4;
    return;
L_0880B3A4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(600)));
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(8, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    ctx.set_gpr(9, ctx.gpr[3] + 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0880B390;
      }
      goto L_0880B3C0;
    }
L_0880B3C0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(608)));
      if (branch_taken) {
          goto L_0880B3D8;
      }
      goto L_0880B3CC;
    }
L_0880B3CC:
    ctx.set_gpr(4, 32768u << 16u);
    ctx.set_gpr(3, ctx.gpr[9] ^ ctx.gpr[4]);
    ctx.set_gpr(9, ctx.gpr[3] + 0u);
    goto L_0880B3D8;
L_0880B3D8:
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[9]);
    goto L_0880B3E0;
L_0880B3E0:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    goto L_0880B3E4;
L_0880B3E4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(676)));
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(672)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(668)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(664)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(660)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(652)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    ctx.set_gpr(2, ctx.gpr[8] & 7u);
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(688));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880B418:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(560)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_0880B47C;
      }
      goto L_0880B424;
    }
L_0880B424:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(600)));
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(3, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 23u));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), ctx.gpr[3]);
    goto L_0880AE64;
L_0880B440:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(600)));
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, (ctx.gpr[2] & ~0xFF800000u) | ((0u & 0x000001FFu) << 23u));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_0880AF00;
L_0880B460:
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[29]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, (ctx.gpr[2] & ~0xFFC00000u) | ((0u & 0x000003FFu) << 22u));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_0880AF00;
L_0880B47C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-976)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-972)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0880B494u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 920u, 0x0881FD6Cu>(ctx, &aot_mem) && ctx.pc == 0x0880B494u) goto L_0880B494;
    return;
L_0880B494:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
      if (branch_taken) {
          goto L_0880AF14;
      }
      goto L_0880B49C;
    }
L_0880B49C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), ctx.gpr[4]);
    goto L_0880AE70;
L_0880B4A8:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(580)));
    ctx.set_gpr(2, ctx.gpr[8] + ctx.gpr[29]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(580), ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(600), ctx.gpr[7]);
      if (branch_taken) {
          goto L_0880B180;
      }
      goto L_0880B4C4;
    }
L_0880B4C4:
    ctx.set_gpr(2, ctx.gpr[8] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(3, ctx.gpr[29] + ctx.gpr[2]);
    goto L_0880B4CC;
L_0880B4CC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(600)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(580)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(600), ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(580), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0880B4CC;
      }
      goto L_0880B4F0;
    }
L_0880B4F0:
    ctx.set_gpr(9, 2225u << 16u);
    goto L_0880B184;
L_0880B4F8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[2];
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
      if (branch_taken) {
          goto L_0880B3E4;
      }
      goto L_0880B504;
    }
L_0880B504:
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[9]) <= 0;
    ctx.set_gpr(2, ctx.gpr[9] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0880B5B4;
      }
      goto L_0880B510;
    }
L_0880B510:
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(240));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(624), ctx.gpr[2]);
    ctx.set_gpr(30, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(21, ctx.gpr[9] << 3u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(568), 0u);
    goto L_0880B528;
L_0880B528:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(624)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(20, ctx.gpr[21] - ctx.gpr[8]);
    ctx.set_gpr(20, ctx.gpr[30] + ctx.gpr[20]);
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(568)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(7, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x0880B564u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(568), ctx.gpr[9]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0880B564u) goto L_0880B564;
    return;
L_0880B564:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0880B580u);
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x0880B580u) goto L_0880B580;
    return;
L_0880B580:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[22] + 0u);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(31, 0x0880B594u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0880B594u) goto L_0880B594;
    return;
L_0880B594:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(568)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(600)));
    rt.memory().aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    ctx.set_gpr(30, ctx.gpr[30] + static_cast<std::uint32_t>(-8));
      if (branch_taken) {
          goto L_0880B528;
      }
      goto L_0880B5B4;
    }
L_0880B5B4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(600)));
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.set_gpr(11, 0u + 0u);
      if (branch_taken) {
          goto L_0880B6B0;
      }
      goto L_0880B5C8;
    }
L_0880B5C8:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(21, ctx.gpr[4] << 3u);
    ctx.set_gpr(2, ctx.gpr[5] << 3u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.set_gpr(6, ctx.gpr[6] + ctx.gpr[21]);
    ctx.set_gpr(23, ctx.gpr[8] + ctx.gpr[2]);
    ctx.set_gpr(9, ctx.gpr[6] - ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(628), ctx.gpr[5]);
    ctx.set_gpr(30, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(572), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(620), ctx.gpr[9]);
    goto L_0880B5F8;
L_0880B5F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(620)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(22, ctx.gpr[2] + ctx.gpr[23]);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0880B624u);
    ctx.set_gpr(7, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0880B624u) goto L_0880B624;
    return;
L_0880B624:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0880B640u);
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x0880B640u) goto L_0880B640;
    return;
L_0880B640:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0880B654u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0880B654u) goto L_0880B654;
    return;
L_0880B654:
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(30, ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(628)));
    rt.memory().aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[30];
    ctx.set_gpr(23, ctx.gpr[23] + static_cast<std::uint32_t>(-8));
      if (branch_taken) {
          goto L_0880B5F8;
      }
      goto L_0880B674;
    }
L_0880B674:
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.set_gpr(10, 0u + 0u);
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(16, 0u + 0u);
    goto L_0880B684;
L_0880B684:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[10] + 0u);
    ctx.set_gpr(31, 0x0880B698u);
    ctx.set_gpr(5, ctx.gpr[11] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0880B698u) goto L_0880B698;
    return;
L_0880B698:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(628)));
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(10, ctx.gpr[2] + 0u);
    ctx.set_gpr(11, ctx.gpr[3] + 0u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    ctx.set_gpr(20, ctx.gpr[20] + static_cast<std::uint32_t>(-8));
      if (branch_taken) {
          goto L_0880B684;
      }
      goto L_0880B6B0;
    }
L_0880B6B0:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
      if (branch_taken) {
          goto L_0880B828;
      }
      goto L_0880B6BC;
    }
L_0880B6BC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.set_gpr(8, 32768u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.set_gpr(5, ctx.gpr[5] ^ ctx.gpr[8]);
    ctx.set_gpr(7, ctx.gpr[7] ^ ctx.gpr[8]);
    ctx.set_gpr(3, ctx.gpr[11] ^ ctx.gpr[8]);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(608)));
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(16), ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(20), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    goto L_0880B3E0;
L_0880B6FC:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-1004)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-1008)));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0880B710u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880B710u) goto L_0880B710;
    return;
L_0880B710:
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0880B71Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 2u, 0x08820004u>(ctx, &aot_mem) && ctx.pc == 0x0880B71Cu) goto L_0880B71C;
    return;
L_0880B71C:
    ctx.set_gpr(31, 0x0880B724u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 941u, 0x0881FF1Cu>(ctx, &aot_mem) && ctx.pc == 0x0880B724u) goto L_0880B724;
    return;
L_0880B724:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(600)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-1000)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-996)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(17, ctx.gpr[9] << 2u);
    ctx.set_gpr(31, 0x0880B74Cu);
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880B74Cu) goto L_0880B74C;
    return;
L_0880B74C:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0880B760u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0880B760u) goto L_0880B760;
    return;
L_0880B760:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(600)));
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[29]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0880B77Cu);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(600), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 2u, 0x08820004u>(ctx, &aot_mem) && ctx.pc == 0x0880B77Cu) goto L_0880B77C;
    return;
L_0880B77C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(600)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[3] << 2u);
    ctx.set_gpr(31, 0x0880B798u);
    ctx.set_gpr(16, ctx.gpr[16] + ctx.gpr[29]);
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 2u, 0x08820004u>(ctx, &aot_mem) && ctx.pc == 0x0880B798u) goto L_0880B798;
    return;
L_0880B798:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_0880B180;
L_0880B7A0:
    ctx.set_gpr(3, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(592), 0u);
    goto L_0880AB80;
L_0880B7AC:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
      if (branch_taken) {
          goto L_0880B3E4;
      }
      goto L_0880B7B4;
    }
L_0880B7B4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(600)));
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    ctx.set_gpr(9, 0u + 0u);
      if (branch_taken) {
          goto L_0880B800;
      }
      goto L_0880B7C4;
    }
L_0880B7C4:
    ctx.set_gpr(3, ctx.gpr[5] << 3u);
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.set_gpr(17, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(19, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, 0u + 0u);
    goto L_0880B7D8;
L_0880B7D8:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(4, ctx.gpr[8] + 0u);
    ctx.set_gpr(31, 0x0880B7ECu);
    ctx.set_gpr(5, ctx.gpr[9] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0880B7ECu) goto L_0880B7EC;
    return;
L_0880B7EC:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(8, ctx.gpr[2] + 0u);
    ctx.set_gpr(9, ctx.gpr[3] + 0u);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[16];
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-8));
      if (branch_taken) {
          goto L_0880B7D8;
      }
      goto L_0880B800;
    }
L_0880B800:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(608)));
      if (branch_taken) {
          goto L_0880B81C;
      }
      goto L_0880B80C;
    }
L_0880B80C:
    ctx.set_gpr(4, 32768u << 16u);
    ctx.set_gpr(3, ctx.gpr[9] ^ ctx.gpr[4]);
    ctx.set_gpr(9, ctx.gpr[3] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(608)));
    goto L_0880B81C;
L_0880B81C:
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    goto L_0880B3E0;
L_0880B828:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(608)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(16), ctx.gpr[10]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), ctx.gpr[11]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    goto L_0880B3E0;
L_0880B854:
    ctx.set_gpr(10, ctx.gpr[5] + 0u);
    ctx.set_gpr(9, 15935u << 16u);
    ctx.set_gpr(10, (ctx.gpr[10] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    ctx.set_gpr(9, ctx.gpr[9] | 65535u);
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.set_gpr(10, static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    ctx.set_gpr(21, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[8] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
      if (branch_taken) {
          goto L_0880B8B8;
      }
      goto L_0880B8A8;
    }
L_0880B8A8:
    ctx.set_gpr(31, 0x0880B8B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 2u, 0x08820004u>(ctx, &aot_mem) && ctx.pc == 0x0880B8B0u) goto L_0880B8B0;
    return;
L_0880B8B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, ctx.gpr[20] + 0u);
      if (branch_taken) {
          goto L_0880BA7C;
      }
      goto L_0880B8B8;
    }
L_0880B8B8:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x0880B8CCu);
    ctx.set_gpr(7, ctx.gpr[21] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880B8CCu) goto L_0880B8CC;
    return;
L_0880B8CC:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0880B8E8u);
    ctx.set_gpr(19, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880B8E8u) goto L_0880B8E8;
    return;
L_0880B8E8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-952)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-948)));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0880B908u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880B908u) goto L_0880B908;
    return;
L_0880B908:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-944)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-940)));
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0880B920u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x0880B920u) goto L_0880B920;
    return;
L_0880B920:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0880B934u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880B934u) goto L_0880B934;
    return;
L_0880B934:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-936)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-932)));
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0880B94Cu);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0880B94Cu) goto L_0880B94C;
    return;
L_0880B94C:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0880B960u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880B960u) goto L_0880B960;
    return;
L_0880B960:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-928)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-924)));
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0880B978u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x0880B978u) goto L_0880B978;
    return;
L_0880B978:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0880B98Cu);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880B98Cu) goto L_0880B98C;
    return;
L_0880B98C:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-920)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-916)));
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0880B9A4u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0880B9A4u) goto L_0880B9A4;
    return;
L_0880B9A4:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(23, ctx.gpr[3] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
      if (branch_taken) {
          goto L_0880BAAC;
      }
      goto L_0880B9C0;
    }
L_0880B9C0:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-904)));
    ctx.set_gpr(31, 0x0880B9D0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-900)));
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880B9D0u) goto L_0880B9D0;
    return;
L_0880B9D0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, ctx.gpr[22] + 0u);
    ctx.set_gpr(7, ctx.gpr[23] + 0u);
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0880B9ECu);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880B9ECu) goto L_0880B9EC;
    return;
L_0880B9EC:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0880BA00u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x0880BA00u) goto L_0880BA00;
    return;
L_0880BA00:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0880BA14u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880BA14u) goto L_0880BA14;
    return;
L_0880BA14:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0880BA28u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x0880BA28u) goto L_0880BA28;
    return;
L_0880BA28:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-912)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-908)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(31, 0x0880BA48u);
    ctx.set_gpr(17, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880BA48u) goto L_0880BA48;
    return;
L_0880BA48:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0880BA5Cu);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0880BA5Cu) goto L_0880BA5C;
    return;
L_0880BA5C:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0880BA70u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x0880BA70u) goto L_0880BA70;
    return;
L_0880BA70:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(21, ctx.gpr[3] + 0u);
    ctx.set_gpr(2, ctx.gpr[20] + 0u);
    goto L_0880BA7C;
L_0880BA7C:
    ctx.set_gpr(3, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880BAAC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0880BAB8u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880BAB8u) goto L_0880BAB8;
    return;
L_0880BAB8:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-912)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-908)));
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0880BAD0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 768u, 0x0881F368u>(ctx, &aot_mem) && ctx.pc == 0x0880BAD0u) goto L_0880BAD0;
    return;
L_0880BAD0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0880BAE4u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 778u, 0x0881F44Cu>(ctx, &aot_mem) && ctx.pc == 0x0880BAE4u) goto L_0880BAE4;
    return;
L_0880BAE4:
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x0880BAF8u);
    ctx.set_gpr(7, ctx.gpr[3] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0006_entry, 6u, 773u, 0x0881F3E0u>(ctx, &aot_mem) && ctx.pc == 0x0880BAF8u) goto L_0880BAF8;
    return;
L_0880BAF8:
    ctx.set_gpr(20, ctx.gpr[2] + 0u);
    ctx.set_gpr(21, ctx.gpr[3] + 0u);
    ctx.set_gpr(2, ctx.gpr[20] + 0u);
    ctx.set_gpr(3, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(23, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880BB34:
    ctx.set_gpr(4, std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_gpr(3, 12799u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 65535u);
    ctx.set_gpr(4, (ctx.gpr[4] & ~0x80000000u) | ((0u & 0x00000001u) << 31u));
    ctx.set_gpr(2, 16025u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 39321u);
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(5, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_0880BB68;
      }
      goto L_0880BB58;
    }
L_0880BB58:
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[12], 1u));
    ctx.set_gpr(2, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          goto L_0880BC7C;
      }
      goto L_0880BB68;
    }
L_0880BB68:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(3, 0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-892)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-888)));
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(3, 16200u << 16u);
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-884)));
    ctx.set_gpr(2, 2225u << 16u);
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-880)));
    ctx.set_gpr(2, 2225u << 16u);
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-876)));
    ctx.set_gpr(2, 2225u << 16u);
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-872)));
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[1];
    { const bool branch_taken = ctx.gpr[5] == 0u;
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
      if (branch_taken) {
          goto L_0880BC1C;
      }
      goto L_0880BBD4;
    }
L_0880BBD4:
    ctx.set_gpr(2, 65280u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.fpr[4] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0880BC48;
      }
      goto L_0880BBE4;
    }
L_0880BBE4:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-864)));
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-868)));
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(3, 2225u << 16u);
    ctx.fpr[5] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-860)));
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[2];
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[4];
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = ctx.fpr[5] - ctx.fpr[0];
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880BC1C:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[0];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-868)));
    ctx.set_gpr(2, 2225u << 16u);
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-896)));
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = ctx.fpr[1] - ctx.fpr[0];
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880BC48:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-896)));
    ctx.set_gpr(2, 2225u << 16u);
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[5] = ctx.fpr[0] - ctx.fpr[4];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-868)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(2, 0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[1] = ctx.fpr[1] - ctx.fpr[2];
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[4];
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[1];
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = ctx.fpr[5] - ctx.fpr[0];
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880BC7C:
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-896)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0880BC84:
    ctx.set_gpr(2, ctx.gpr[6] + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < 0 ? 1u : 0u);
    ctx.set_gpr(10, ctx.gpr[6] + 0u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(4));
    if (ctx.gpr[3] != 0u) ctx.set_gpr(2, ctx.gpr[6]);
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-400));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 3u));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[2]);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-812));
    ctx.set_gpr(3, ctx.gpr[8] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[18]);
    ctx.set_gpr(6, ctx.gpr[2] << 3u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), ctx.gpr[23]);
    ctx.set_gpr(2, 0u - ctx.gpr[6]);
    ctx.set_gpr(23, ctx.gpr[4] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[17]);
    ctx.set_gpr(17, ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[30]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[22]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[8]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[9]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 62u, 0x0880C458u>(ctx, &aot_mem); return;
      }
      goto L_0880BD0C;
    }
L_0880BD0C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.set_gpr(30, ctx.gpr[10] + ctx.gpr[2]);
    ctx.set_gpr(7, ctx.gpr[18] + ctx.gpr[17]);
    ctx.set_gpr(19, ctx.gpr[30] + static_cast<std::uint32_t>(-8));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) < 0;
    ctx.set_gpr(3, ctx.gpr[4] - ctx.gpr[17]);
      if (branch_taken) {
          goto L_0880BD64;
      }
      goto L_0880BD24;
    }
L_0880BD24:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    ctx.set_gpr(2, ctx.gpr[3] << 2u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    goto L_0880BD38;
L_0880BD38:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) < 0;
    ctx.fpr[0] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0880BD50;
      }
      goto L_0880BD48;
    }
L_0880BD48:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    goto L_0880BD50;
L_0880BD50:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0880BD38;
      }
      goto L_0880BD64;
    }
L_0880BD64:
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(240));
      if (branch_taken) {
          goto L_0880BDC8;
      }
      goto L_0880BD70;
    }
L_0880BD70:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    ctx.fpr[2] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0880BDB4;
      }
      goto L_0880BD78;
    }
L_0880BD78:
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(4, 0u + 0u);
    goto L_0880BD90;
L_0880BD90:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.fpr[2] = ctx.fpr[2] + ctx.fpr[0];
      if (branch_taken) {
          goto L_0880BD90;
      }
      goto L_0880BDB4;
    }
L_0880BDB4:
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0880BD70;
      }
      goto L_0880BDC8;
    }
L_0880BDC8:
    ctx.set_gpr(16, ctx.gpr[18] + 0u);
    ctx.set_gpr(20, ctx.gpr[16] << 2u);
    goto L_0880BDD0;
L_0880BDD0:
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[29]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(240)));
      if (branch_taken) {
          goto L_0880BE30;
      }
      goto L_0880BDDC;
    }
L_0880BDDC:
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[5] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-800)));
    ctx.set_gpr(3, ctx.gpr[29] + ctx.gpr[20]);
    ctx.set_gpr(2, 2225u << 16u);
    ctx.fpr[4] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-796)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(236));
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(2, ctx.gpr[29] + 0u);
    goto L_0880BDFC;
L_0880BDFC:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[3] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
    ctx.set_fpr_bits(1, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    ctx.fpr[2] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[12] + ctx.fpr[0];
    ctx.fpr[12] = ctx.fpr[2] + ctx.fpr[3];
    ctx.set_fpr_bits(1, ctx.fpu_float_to_word(ctx.fpr[0], 1u));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0880BDFC;
      }
      goto L_0880BE30;
    }
L_0880BE30:
    ctx.set_gpr(31, 0x0880BE38u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 396u, 0x0880DFF0u>(ctx, &aot_mem) && ctx.pc == 0x0880BE38u) goto L_0880BE38;
    return;
L_0880BE38:
    ctx.set_gpr(3, 2225u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-792)));
    ctx.set_fpr_bits(20, ctx.fpr_bits(0));
    ctx.set_gpr(31, 0x0880BE4Cu);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(12, 0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 379u, 0x0880DEF0u>(ctx, &aot_mem) && ctx.pc == 0x0880BE4Cu) goto L_0880BE4C;
    return;
L_0880BE4C:
    ctx.set_gpr(4, 2225u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-788)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[0];
    ctx.set_fpr_bits(0, ctx.fpu_float_to_word(ctx.fpr[20], 1u));
    ctx.set_gpr(21, std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[0];
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 40u, 0x0880C274u>(ctx, &aot_mem); return;
      }
      goto L_0880BE70;
    }
L_0880BE70:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, ctx.gpr[5] << 2u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[29]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[19]);
    ctx.set_gpr(6, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> (ctx.gpr[3] & 31u)));
    ctx.set_gpr(3, ctx.gpr[6] << (ctx.gpr[3] & 31u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(4, ctx.gpr[4] - ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[19]);
    ctx.set_gpr(22, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> (ctx.gpr[2] & 31u)));
    ctx.set_gpr(21, ctx.gpr[21] + ctx.gpr[6]);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_0880BEA8;
L_0880BEA8:
    if (static_cast<std::int32_t>(ctx.gpr[22]) <= 0) {
    ctx.fpr[0] = std::bit_cast<float>(0u);
        goto L_0880BF30;
    }
    goto L_0880BEB0;
L_0880BEB0:
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    ctx.set_gpr(8, 0u + 0u);
      if (branch_taken) {
          goto L_0880BF08;
      }
      goto L_0880BEBC;
    }
L_0880BEBC:
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(3, ctx.gpr[29] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(256));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(255));
    goto L_0880BEEC;
L_0880BED0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(4, ctx.gpr[7] - ctx.gpr[2]);
      if (branch_taken) {
          goto L_0880BEE0;
      }
      goto L_0880BED8;
    }
L_0880BED8:
    ctx.set_gpr(8, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_0880BEE0;
L_0880BEE0:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[16];
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0880BF08;
      }
      goto L_0880BEEC;
    }
L_0880BEEC:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0880BED0;
      }
      goto L_0880BEF4;
    }
L_0880BEF4:
    ctx.set_gpr(2, ctx.gpr[6] - ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0880BEEC;
      }
      goto L_0880BF08;
    }
L_0880BF08:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0880BF20;
      }
      goto L_0880BF10;
    }
L_0880BF10:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[2];
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 42u, 0x0880C28Cu>(ctx, &aot_mem); return;
      }
      goto L_0880BF18;
    }
L_0880BF18:
    if (ctx.gpr[19] == ctx.gpr[2]) {
    ctx.set_gpr(3, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
        (void)rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 43u, 0x0880C2A8u>(ctx, &aot_mem); return;
    }
    goto L_0880BF20;
L_0880BF20:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[2];
    ctx.set_gpr(2, 2225u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 5u, 0x0880C05Cu>(ctx, &aot_mem); return;
      }
      goto L_0880BF2C;
    }
L_0880BF2C:
    ctx.fpr[0] = std::bit_cast<float>(0u);
    goto L_0880BF30;
L_0880BF30:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[0])) && ctx.fpr[20] == ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.set_fpr_bits(12, ctx.fpr_bits(20));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 9u, 0x0880C08Cu>(ctx, &aot_mem); return;
      }
      goto L_0880BF40;
    }
L_0880BF40:
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    goto L_0880BF44;
L_0880BF44:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(5, ctx.gpr[18] << 2u);
        goto L_0880BF80;
    }
    goto L_0880BF50;
L_0880BF50:
    ctx.set_gpr(8, ctx.gpr[7] << 2u);
    ctx.set_gpr(5, ctx.gpr[29] + ctx.gpr[8]);
    ctx.set_gpr(4, ctx.gpr[7] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    goto L_0880BF60;
L_0880BF60:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    ctx.set_gpr(6, ctx.gpr[6] | ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_0880BF60;
      }
      goto L_0880BF78;
    }
L_0880BF78:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.set_gpr(5, ctx.gpr[18] << 2u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 46u, 0x0880C2DCu>(ctx, &aot_mem); return;
      }
      goto L_0880BF80;
    }
L_0880BF80:
    ctx.set_gpr(2, ctx.gpr[5] + ctx.gpr[29]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-4)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0880BFA8;
      }
      goto L_0880BF90;
    }
L_0880BF90:
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, ctx.gpr[29] + ctx.gpr[2]);
    goto L_0880BF98;
L_0880BF98:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_0880BF98;
      }
      goto L_0880BFA8;
    }
L_0880BFA8:
    ctx.set_gpr(7, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(16, ctx.gpr[16] + ctx.gpr[4]);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    if (ctx.gpr[2] != 0u) {
    ctx.set_gpr(20, ctx.gpr[16] << 2u);
        goto L_0880BDD0;
    }
    goto L_0880BFBC;
L_0880BFBC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.set_gpr(2, ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.set_gpr(6, ctx.gpr[17] + ctx.gpr[7]);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[7]);
    ctx.set_gpr(4, ctx.gpr[7] << 2u);
    ctx.set_gpr(10, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(11, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(5, ctx.gpr[6] << 2u);
    ctx.set_gpr(9, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(8, ctx.gpr[11] + ctx.gpr[5]);
    goto L_0880BFEC;
L_0880BFEC:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.fpr[2] = std::bit_cast<float>(0u);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(ctx.fpr_bits(1)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 3u, 0x0880C034u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 1u, 0x0880C000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0001(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0001_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_1(Runtime &runtime) {
    runtime.register_generated_unit(1u, 0x08808000u, 16384u, &recomp_unit_0001, &recomp_unit_0001_entry);
    runtime.register_function(0x08808000u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808014u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808030u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808044u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808058u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880806Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808080u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880809Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088080B8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088080D8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088080F0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808104u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880811Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808130u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808148u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880815Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808174u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808188u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088081A0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088081B4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088081D0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088081E4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088081F8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808214u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880823Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808250u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808270u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880828Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088082A8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088082BCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088082D0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088082E4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088082F8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808314u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808334u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808354u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808370u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808384u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880839Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088083B0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088083D4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088083E4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808418u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880842Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808440u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880845Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808470u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808484u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880848Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808498u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088084B4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088084C8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088084ECu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808500u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880851Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808530u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880854Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808568u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808584u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808598u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088085B8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088085D4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088085E8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088085F0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088085F4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808608u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880866Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808688u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808694u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088086B4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088086D0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088086E4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088086FCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808720u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808734u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808750u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880876Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808780u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880879Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088087BCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088087D4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088087E8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808800u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808814u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880882Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808840u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808858u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880886Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808880u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880889Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088088BCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088088D0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088088ECu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808900u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808914u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808928u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808940u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808960u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808964u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808974u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808980u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808988u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880899Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088089B0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088089BCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088089C8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088089E0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088089ECu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088089F4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808A10u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808A20u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808A2Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808A40u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808A4Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808A68u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808A80u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808A94u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808AA8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808AB0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808AB4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808AC0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808AD4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808ADCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808AE4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808AF4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808B04u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808B1Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808B3Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808B5Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808B78u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808B98u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808BB0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808BC4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808BDCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808BF0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808C08u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808C1Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808C38u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808C54u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808C60u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808C68u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808C80u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808C8Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808C9Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808CA4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808CF0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808D04u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808D38u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808D4Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808D5Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808D6Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808D78u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808D90u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808D98u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808DA4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808DB8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808DE0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808DFCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808E10u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808E4Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808E54u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808E74u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808E8Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808E98u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808EA4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808EC4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808ED8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808EF8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808F0Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808F14u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808F20u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808F3Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808F54u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808F70u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808F90u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808FACu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808FC0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808FD4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08808FF0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809010u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809028u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809044u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809064u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809080u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809094u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088090A8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088090B4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088090C4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088090CCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088090E8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088090FCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880910Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809138u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809144u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809158u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809180u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880919Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088091B0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088091BCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088091ECu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088091F8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809200u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880921Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809230u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809240u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809250u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880926Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809274u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809294u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880929Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088092D8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088092F8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809320u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880933Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809350u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880935Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809378u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809380u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088093A0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088093C8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088093E4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088093F8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809404u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809434u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880943Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809440u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809448u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809450u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809454u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809464u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809478u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880947Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880948Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809494u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088094ACu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088094C0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088094E4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088094FCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809508u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809518u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809530u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809538u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880954Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809568u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809580u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809584u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880958Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088095A4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088095B0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088095BCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088095C4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088095D8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088095E8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088095ECu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809604u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880960Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809618u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809620u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809638u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809640u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809654u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809660u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880966Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809680u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088096A4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088096B4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088096BCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088096C8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088096DCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088096E8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x088096F4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809718u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809724u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880972Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809740u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809750u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809758u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809774u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809854u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880985Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809868u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809874u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809950u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880995Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809978u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809A48u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809A7Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809A88u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809A9Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809AACu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809B88u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809B8Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809B90u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809BB4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809BF8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809C18u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809C20u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809CD8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809CECu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809D14u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809D1Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809D24u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809D2Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809D8Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809DC0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809DCCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809DD8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809DE8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809DF0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809DF8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809E00u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809E10u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809E18u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809E24u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809E2Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809E34u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809E4Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809E5Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809E60u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809E70u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809E7Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809E84u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809E8Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809E94u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809EA4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809EACu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809EC0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809EC8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809ED4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809EE4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809EFCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809F14u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809F1Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809F24u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809F2Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809F34u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809F3Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809F48u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809F50u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809F58u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809F60u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809F68u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809F88u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809FACu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809FB4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809FBCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809FC4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809FCCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809FE4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809FECu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x08809FF4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A00Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A014u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A028u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A040u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A058u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A060u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A078u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A09Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A0B0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A0B4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A0BCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A0C8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A0D4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A0DCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A0F0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A0FCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A108u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A120u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A12Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A138u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A144u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A150u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A15Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A168u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A170u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A178u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A184u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A18Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A194u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A1A4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A1C0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A1D8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A1E0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A1ECu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A1F8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A208u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A220u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A224u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A22Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A24Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A260u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A294u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A2A0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A2BCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A2D0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A2E0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A2F0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A304u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A30Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A328u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A364u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A36Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A3B4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A3B8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A3D4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A41Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A44Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A460u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A478u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A494u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A4B8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A4D8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A4F4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A508u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A50Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A524u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A53Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A544u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A564u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A594u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A5B8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A5C0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A5F0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A610u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A618u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A620u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A628u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A630u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A640u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A674u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A684u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A690u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A69Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A6A4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A6BCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A6C4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A6E4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A6F4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A6FCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A70Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A718u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A728u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A788u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A790u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A798u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A7ACu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A7CCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A7E4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A7F8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A810u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A824u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A83Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A850u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A868u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A87Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A894u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A8A8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A8C0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A8D0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A8F0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A908u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A91Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A938u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A954u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A968u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A97Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A990u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A9BCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A9D4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880A9F0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AA0Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AA20u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AA34u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AA4Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AA78u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AAA8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AAB4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AAE8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AB70u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AB80u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880ABA8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880ABBCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880ABCCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880ABD4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880ABDCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880ABF8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AC08u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AC18u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AC30u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AC4Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AC60u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AC78u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AC94u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880ACA0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880ACB4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880ACC4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880ACE0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880ACECu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880ACF4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AD18u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AD2Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AD38u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AD50u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AD6Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AD7Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AD9Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880ADA8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880ADC0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880ADD4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880ADE8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880ADF4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AE08u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AE18u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AE64u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AE70u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AE88u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AEA0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AEA8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AEB0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AEC0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AEC8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AEE0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AEECu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AEF8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AF00u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AF10u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AF14u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AF24u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AF2Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AF30u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AF44u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AF58u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AF70u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AF78u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AF8Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AF94u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AFA4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AFC0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880AFF8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B008u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B018u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B030u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B04Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B060u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B078u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B0A8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B0B0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B0CCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B0D8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B0E8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B0FCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B118u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B120u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B124u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B134u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B154u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B15Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B170u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B180u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B184u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B194u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B1A4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B1C4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B1D4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B1E8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B20Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B21Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B224u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B23Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B254u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B25Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B274u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B28Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B2A0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B2BCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B2C4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B2DCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B2ECu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B2F4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B300u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B314u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B328u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B33Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B34Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B358u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B378u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B388u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B390u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B3A4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B3C0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B3CCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B3D8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B3E0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B3E4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B418u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B424u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B440u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B460u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B47Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B494u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B49Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B4A8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B4C4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B4CCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B4F0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B4F8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B504u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B510u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B528u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B564u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B580u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B594u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B5B4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B5C8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B5F8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B624u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B640u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B654u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B674u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B684u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B698u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B6B0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B6BCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B6FCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B710u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B71Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B724u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B74Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B760u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B77Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B798u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B7A0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B7ACu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B7B4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B7C4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B7D8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B7ECu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B800u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B80Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B81Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B828u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B854u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B8A8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B8B0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B8B8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B8CCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B8E8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B908u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B920u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B934u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B94Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B960u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B978u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B98Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B9A4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B9C0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B9D0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880B9ECu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BA00u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BA14u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BA28u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BA48u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BA5Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BA70u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BA7Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BAACu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BAB8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BAD0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BAE4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BAF8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BB34u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BB58u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BB68u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BBD4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BBE4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BC1Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BC48u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BC7Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BC84u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BD0Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BD24u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BD38u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BD48u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BD50u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BD64u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BD70u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BD78u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BD90u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BDB4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BDC8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BDD0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BDDCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BDFCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BE30u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BE38u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BE4Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BE70u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BEA8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BEB0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BEBCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BED0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BED8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BEE0u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BEECu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BEF4u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BF08u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BF10u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BF18u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BF20u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BF2Cu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BF30u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BF40u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BF44u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BF50u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BF60u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BF78u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BF80u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BF90u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BF98u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BFA8u, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BFBCu, &recomp_unit_0001, "recomp_unit_0001");
    runtime.register_function(0x0880BFECu, &recomp_unit_0001, "recomp_unit_0001");
}
} // namespace psprecomp
