#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0098[4080] = {
    1, 0, 2, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0,
    8, 0, 0, 0, 0, 9, 0, 10, 0, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0,
    0, 0, 14, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28,
    0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 31, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 34, 0,
    0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0,
    0, 0, 0, 0, 0, 49, 0, 0, 50, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 53, 0, 0, 0, 0, 54,
    0, 0, 0, 0, 0, 55, 0, 56, 0, 0, 57, 0, 0, 58, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0,
    62, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 72, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 0, 0, 78,
    0, 0, 0, 0, 79, 0, 0, 0, 0, 80, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 0,
    84, 0, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 0, 0,
    0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0,
    96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0,
    102, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 106, 0, 0, 0, 0, 107, 0, 0, 108, 0, 0, 0, 0,
    109, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 0, 0,
    117, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 124, 0, 0, 0,
    0, 0, 0, 125, 0, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 130, 0, 0, 0, 131, 0, 0,
    0, 132, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143,
    0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 145, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0,
    0, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0,
    0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 162, 0, 163, 0, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0,
    0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 171,
    0, 0, 0, 172, 0, 0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0,
    0, 0, 175, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180,
    0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 185,
    0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 191, 0,
    0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195,
    0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 202, 0, 0, 0,
    0, 0, 203, 0, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0,
    0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 212, 0,
    0, 0, 213, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0,
    0, 0, 0, 0, 220, 0, 0, 0, 0, 221, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0,
    0, 0, 0, 0, 0, 0, 0, 226, 0, 227, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 0, 231,
    0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 234, 0,
    0, 0, 235, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 239, 0, 0, 240, 0,
    0, 0, 0, 241, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0,
    0, 246, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 252, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 256,
    0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 262, 0, 263,
    0, 0, 264, 0, 0, 265, 0, 266, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 269, 0, 270, 0, 0, 0, 0, 0,
    271, 0, 0, 0, 0, 272, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 277,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0,
    281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 285, 0, 286, 0, 0, 287, 0, 0, 288, 0,
    289, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 292, 0, 293, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 295,
    0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 300, 0, 0,
    0, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 309,
    0, 0, 0, 310, 0, 0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0,
    0, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0, 0,
    0, 0, 0, 0, 0, 325, 0, 326, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 330, 0,
    0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 333, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 335, 0, 336, 0, 0, 337,
    0, 0, 338, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 342, 0, 343, 0, 0, 0, 0, 0, 344, 0, 0,
    0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 348, 0, 0, 349, 0, 350, 0, 0, 351,
    0, 352, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 0,
    361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 364, 0, 0, 365, 0, 0, 0, 0, 0, 0, 366,
    0, 0, 367, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 370, 0, 0, 0, 371, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 376, 0, 377, 0,
    0, 0, 0, 0, 378, 0, 0, 0, 0, 379, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 382, 0, 0, 0, 383,
    0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0,
    387, 0, 0, 0, 388, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 390, 0, 0, 0, 0, 391, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 393,
    0, 394, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 396, 0, 0, 0, 397, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 0, 402, 0, 0, 0, 403, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 406, 0, 0, 0, 0, 0, 407, 0, 0, 408, 0, 0, 0, 0,
    0, 0, 0, 0, 409, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 412, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0,
    0, 414, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 417, 0, 0, 0, 418, 0, 0, 0, 419, 0, 0, 0, 420, 0, 0, 0, 421, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 423, 0, 0, 0,
    0, 424, 0, 0, 0, 0, 0, 425, 0, 426, 0, 0, 427, 0, 0, 428, 0, 429, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 431, 0, 0,
    0, 0, 432, 0, 433, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 435, 0, 0, 0, 436, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 439, 0, 0, 0, 440, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 442, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 444, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 449, 0, 450, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0,
    452, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 455, 0, 0, 0, 456, 0, 0, 0, 457, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 459, 0, 0, 0, 460, 0, 0, 0, 461, 0, 0, 0, 0,
    0, 462, 0, 0, 0, 0, 463, 0, 464, 0, 0, 0, 0, 0, 465, 0, 0, 0, 0, 0, 466, 0, 0, 0, 467, 0, 0, 0, 468, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 470, 0, 0, 0, 471, 0, 0, 0, 472, 0, 0, 0, 473, 0,
    0, 0, 0, 0, 474, 0, 0, 0, 0, 475, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 477, 0, 478, 0, 0, 479, 0, 0, 480, 0, 481, 0,
    0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 484, 0, 485, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 487, 0, 0,
    0, 488, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 491,
    0, 0, 0, 492, 0, 0, 0, 493, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0,
    497, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 501,
    0, 0, 0, 502, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 504, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 507, 0,
    508, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 510, 0, 0, 0, 511, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 514, 0, 0, 0, 515, 0, 0, 0, 516, 0, 0, 0, 517, 0, 0, 0, 0, 0, 518, 0, 0, 0,
    0, 519, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 522, 0, 523, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 0, 525,
    0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 529, 0, 0, 0, 530, 0,
    0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 533, 0, 0, 0, 534, 0, 0,
    0, 535, 0, 0, 0, 536, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 538, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0,
    541, 0, 542, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 544, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0,
    0, 0, 0, 547, 0, 0, 0, 0, 0, 548, 0, 0, 0, 549, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 551, 0, 0, 0, 552, 0, 0, 0, 553, 0, 0, 0, 554, 0, 0, 0, 0, 0, 555, 0, 0, 0, 0, 556, 0, 557, 0, 0,
    0, 0, 0, 558, 0, 0, 0, 0, 0, 559, 0, 0, 0, 560, 0, 0, 0, 561, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 563, 0, 0, 0, 564, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 0, 0, 0, 566,
    0, 0, 0, 0, 0, 0, 567, 0, 0, 0, 568, 0, 0, 569, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 0, 0, 0, 571, 0, 0, 0,
    0, 0, 0, 572, 0, 0, 0, 573, 0, 0, 0, 574, 0, 0, 0, 575, 0, 0, 0, 576, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 578, 0,
    579, 0, 0, 0, 0, 0, 580, 0, 0, 0, 0, 0, 581, 0, 0, 0, 582, 0, 0, 0, 583, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 585, 0, 0, 0, 586, 0, 0, 0, 587, 0, 0, 0, 588, 0, 0, 0, 0, 0, 589, 0, 0, 0,
    0, 590, 0, 0, 0, 0, 591, 0, 0, 0, 0, 0, 592, 0, 593, 0, 0, 594, 0, 0, 595, 0, 596, 0, 0, 0, 0, 0, 597, 0, 0, 0,
    0, 0, 598, 0, 0, 0, 0, 599, 0, 600, 0, 0, 0, 0, 0, 601, 0, 0, 0, 0, 0, 602, 0, 0, 0, 0, 0, 0, 0, 0, 603, 0,
    0, 0, 0, 0, 0, 0, 0, 604, 0, 605, 0, 0, 606, 0, 607, 0, 0, 608, 0, 609, 0, 0, 0, 0, 0, 610, 0, 0, 0, 0, 0, 611,
    0, 0, 0, 0, 0, 612, 0, 0, 0, 613, 0, 0, 0, 614, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 615, 0, 0, 0, 616, 0, 0, 0, 617, 0, 0, 0, 618, 0, 0, 0, 0, 0, 0, 0, 0, 0, 619, 0, 0, 0, 0, 0,
    0, 620, 0, 0, 0, 621, 0, 0, 0, 0, 622, 0, 0, 0, 623, 0, 0, 0, 0, 0, 624, 0, 0, 0, 0, 0, 0, 625, 0, 0, 626, 0,
    0, 0, 0, 627, 0, 0, 628, 0, 0, 0, 0, 629, 0, 0, 0, 0, 0, 630, 0, 0, 0, 0, 0, 0, 631, 0, 0, 632, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 633, 0, 0, 0, 0, 0, 0, 634, 0, 0, 0, 0, 0, 635, 0, 0, 0, 0, 636, 0, 637, 0, 0,
    0, 0, 0, 638, 0, 0, 0, 0, 639, 0, 0, 0, 0, 640, 0, 0, 0, 0, 0, 0, 641, 0, 0, 0, 0, 0, 642, 0, 0, 0, 643, 0,
    0, 0, 644, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 645, 0, 0, 0, 646, 0, 0, 0, 647,
    0, 0, 0, 648, 0, 0, 0, 0, 0, 649, 0, 650, 0, 0, 651, 0, 0, 652, 0, 653, 0, 0, 0, 0, 0, 654, 0, 0, 0, 0, 0, 655,
    0, 0, 0, 0, 656, 0, 657, 0, 0, 0, 0, 0, 658, 0, 0, 0, 0, 0, 659, 0, 0, 0, 660, 0, 0, 0, 661, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 662, 0, 0, 0, 663, 0, 0, 0, 664, 0, 0, 0, 665, 0, 0, 0, 0, 0, 666, 0,
    0, 0, 0, 667, 0, 668, 0, 0, 0, 0, 0, 669, 0, 0, 0, 0, 670, 0, 0, 0, 0, 671, 0, 0, 0, 0, 0, 0, 672, 0, 0, 0,
    0, 0, 673, 0, 0, 0, 674, 0, 0, 0, 675, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 676,
    0, 0, 0, 677, 0, 0, 0, 678, 0, 0, 0, 679, 0, 0, 0, 680, 0, 0, 0, 681, 0, 0, 0, 0, 0, 682, 0, 0, 0, 0, 683, 0,
    684, 0, 0, 0, 0, 0, 685, 0, 0, 0, 0, 686, 0, 0, 0, 0, 687, 0, 0, 0, 0, 0, 0, 688, 0, 0, 0, 0, 0, 689, 0, 0,
    0, 690, 0, 0, 0, 691, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 692, 0, 0, 0, 693, 0,
    0, 0, 694, 0, 0, 0, 695, 0, 0, 0, 696, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 697, 0, 0, 0, 0, 698, 0, 0, 0, 0,
    0, 0, 699, 0, 0, 700, 0, 0, 0, 0, 0, 701, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 702, 0, 0, 0, 0, 0, 0, 703, 0,
    0, 704, 0, 0, 0, 0, 0, 0, 705, 0, 0, 0, 0, 0, 706, 0, 0, 0, 0, 707, 0, 0, 0, 0, 708, 0, 0, 0, 0, 0, 709, 0,
    710, 0, 0, 711, 0, 0, 712, 0, 713, 0, 0, 0, 0, 0, 714, 0, 0, 0, 0, 0, 715, 0, 0, 0, 0, 716, 0, 717, 0, 0, 0, 0,
    0, 718, 0, 0, 0, 0, 0, 719, 0, 0, 0, 720, 0, 0, 0, 721,
};
void recomp_unit_0098_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0898C000u;
        entry_id = (entry_delta < 16320u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0098[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0898C000;
    case 2u: goto L_0898C008;
    case 3u: goto L_0898C018;
    case 4u: goto L_0898C028;
    case 5u: goto L_0898C040;
    case 6u: goto L_0898C054;
    case 7u: goto L_0898C068;
    case 8u: goto L_0898C080;
    case 9u: goto L_0898C094;
    case 10u: goto L_0898C09C;
    case 11u: goto L_0898C0B4;
    case 12u: goto L_0898C0CC;
    case 13u: goto L_0898C0E4;
    case 14u: goto L_0898C108;
    case 15u: goto L_0898C110;
    case 16u: goto L_0898C128;
    case 17u: goto L_0898C140;
    case 18u: goto L_0898C150;
    case 19u: goto L_0898C160;
    case 20u: goto L_0898C1BC;
    case 21u: goto L_0898C1CC;
    case 22u: goto L_0898C1DC;
    case 23u: goto L_0898C1EC;
    case 24u: goto L_0898C214;
    case 25u: goto L_0898C230;
    case 26u: goto L_0898C240;
    case 27u: goto L_0898C24C;
    case 28u: goto L_0898C27C;
    case 29u: goto L_0898C298;
    case 30u: goto L_0898C2B0;
    case 31u: goto L_0898C2C4;
    case 32u: goto L_0898C2CC;
    case 33u: goto L_0898C2E4;
    case 34u: goto L_0898C2F8;
    case 35u: goto L_0898C30C;
    case 36u: goto L_0898C328;
    case 37u: goto L_0898C340;
    case 38u: goto L_0898C350;
    case 39u: goto L_0898C360;
    case 40u: goto L_0898C3B4;
    case 41u: goto L_0898C3C4;
    case 42u: goto L_0898C3D4;
    case 43u: goto L_0898C3E4;
    case 44u: goto L_0898C414;
    case 45u: goto L_0898C428;
    case 46u: goto L_0898C444;
    case 47u: goto L_0898C450;
    case 48u: goto L_0898C478;
    case 49u: goto L_0898C494;
    case 50u: goto L_0898C4A0;
    case 51u: goto L_0898C4BC;
    case 52u: goto L_0898C4D4;
    case 53u: goto L_0898C4E8;
    case 54u: goto L_0898C4FC;
    case 55u: goto L_0898C514;
    case 56u: goto L_0898C51C;
    case 57u: goto L_0898C528;
    case 58u: goto L_0898C534;
    case 59u: goto L_0898C53C;
    case 60u: goto L_0898C554;
    case 61u: goto L_0898C56C;
    case 62u: goto L_0898C580;
    case 63u: goto L_0898C588;
    case 64u: goto L_0898C5A0;
    case 65u: goto L_0898C5B8;
    case 66u: goto L_0898C5C8;
    case 67u: goto L_0898C5D8;
    case 68u: goto L_0898C630;
    case 69u: goto L_0898C640;
    case 70u: goto L_0898C650;
    case 71u: goto L_0898C660;
    case 72u: goto L_0898C688;
    case 73u: goto L_0898C6A4;
    case 74u: goto L_0898C6B4;
    case 75u: goto L_0898C6C4;
    case 76u: goto L_0898C6D4;
    case 77u: goto L_0898C6E0;
    case 78u: goto L_0898C6FC;
    case 79u: goto L_0898C710;
    case 80u: goto L_0898C724;
    case 81u: goto L_0898C730;
    case 82u: goto L_0898C758;
    case 83u: goto L_0898C76C;
    case 84u: goto L_0898C780;
    case 85u: goto L_0898C794;
    case 86u: goto L_0898C7A8;
    case 87u: goto L_0898C7C0;
    case 88u: goto L_0898C7D4;
    case 89u: goto L_0898C7EC;
    case 90u: goto L_0898C808;
    case 91u: goto L_0898C81C;
    case 92u: goto L_0898C830;
    case 93u: goto L_0898C844;
    case 94u: goto L_0898C858;
    case 95u: goto L_0898C86C;
    case 96u: goto L_0898C880;
    case 97u: goto L_0898C894;
    case 98u: goto L_0898C8A8;
    case 99u: goto L_0898C8B4;
    case 100u: goto L_0898C8D4;
    case 101u: goto L_0898C8E0;
    case 102u: goto L_0898C900;
    case 103u: goto L_0898C90C;
    case 104u: goto L_0898C92C;
    case 105u: goto L_0898C940;
    case 106u: goto L_0898C94C;
    case 107u: goto L_0898C960;
    case 108u: goto L_0898C96C;
    case 109u: goto L_0898C980;
    case 110u: goto L_0898C98C;
    case 111u: goto L_0898C9A0;
    case 112u: goto L_0898C9AC;
    case 113u: goto L_0898C9C0;
    case 114u: goto L_0898C9CC;
    case 115u: goto L_0898C9E0;
    case 116u: goto L_0898C9EC;
    case 117u: goto L_0898CA00;
    case 118u: goto L_0898CA0C;
    case 119u: goto L_0898CA20;
    case 120u: goto L_0898CA2C;
    case 121u: goto L_0898CA40;
    case 122u: goto L_0898CA4C;
    case 123u: goto L_0898CA64;
    case 124u: goto L_0898CA70;
    case 125u: goto L_0898CA8C;
    case 126u: goto L_0898CA98;
    case 127u: goto L_0898CAB4;
    case 128u: goto L_0898CAC4;
    case 129u: goto L_0898CAD4;
    case 130u: goto L_0898CAE4;
    case 131u: goto L_0898CAF4;
    case 132u: goto L_0898CB04;
    case 133u: goto L_0898CB14;
    case 134u: goto L_0898CB20;
    case 135u: goto L_0898CB34;
    case 136u: goto L_0898CB40;
    case 137u: goto L_0898CB6C;
    case 138u: goto L_0898CB9C;
    case 139u: goto L_0898CBAC;
    case 140u: goto L_0898CBBC;
    case 141u: goto L_0898CBD4;
    case 142u: goto L_0898CBE8;
    case 143u: goto L_0898CBFC;
    case 144u: goto L_0898CC14;
    case 145u: goto L_0898CC28;
    case 146u: goto L_0898CC30;
    case 147u: goto L_0898CC48;
    case 148u: goto L_0898CC5C;
    case 149u: goto L_0898CC70;
    case 150u: goto L_0898CC8C;
    case 151u: goto L_0898CCA4;
    case 152u: goto L_0898CCB4;
    case 153u: goto L_0898CCC4;
    case 154u: goto L_0898CD18;
    case 155u: goto L_0898CD28;
    case 156u: goto L_0898CD38;
    case 157u: goto L_0898CD48;
    case 158u: goto L_0898CD60;
    case 159u: goto L_0898CD74;
    case 160u: goto L_0898CD88;
    case 161u: goto L_0898CDA0;
    case 162u: goto L_0898CDB4;
    case 163u: goto L_0898CDBC;
    case 164u: goto L_0898CDD4;
    case 165u: goto L_0898CDEC;
    case 166u: goto L_0898CE08;
    case 167u: goto L_0898CE2C;
    case 168u: goto L_0898CE34;
    case 169u: goto L_0898CE4C;
    case 170u: goto L_0898CE64;
    case 171u: goto L_0898CE7C;
    case 172u: goto L_0898CE8C;
    case 173u: goto L_0898CE9C;
    case 174u: goto L_0898CEF8;
    case 175u: goto L_0898CF08;
    case 176u: goto L_0898CF18;
    case 177u: goto L_0898CF28;
    case 178u: goto L_0898CF50;
    case 179u: goto L_0898CF6C;
    case 180u: goto L_0898CF7C;
    case 181u: goto L_0898CF88;
    case 182u: goto L_0898CFB4;
    case 183u: goto L_0898CFD0;
    case 184u: goto L_0898CFE8;
    case 185u: goto L_0898CFFC;
    case 186u: goto L_0898D004;
    case 187u: goto L_0898D01C;
    case 188u: goto L_0898D030;
    case 189u: goto L_0898D044;
    case 190u: goto L_0898D060;
    case 191u: goto L_0898D078;
    case 192u: goto L_0898D088;
    case 193u: goto L_0898D098;
    case 194u: goto L_0898D0EC;
    case 195u: goto L_0898D0FC;
    case 196u: goto L_0898D10C;
    case 197u: goto L_0898D11C;
    case 198u: goto L_0898D12C;
    case 199u: goto L_0898D13C;
    case 200u: goto L_0898D154;
    case 201u: goto L_0898D168;
    case 202u: goto L_0898D170;
    case 203u: goto L_0898D188;
    case 204u: goto L_0898D19C;
    case 205u: goto L_0898D1B0;
    case 206u: goto L_0898D1CC;
    case 207u: goto L_0898D1E4;
    case 208u: goto L_0898D1F4;
    case 209u: goto L_0898D204;
    case 210u: goto L_0898D258;
    case 211u: goto L_0898D268;
    case 212u: goto L_0898D278;
    case 213u: goto L_0898D288;
    case 214u: goto L_0898D298;
    case 215u: goto L_0898D2A8;
    case 216u: goto L_0898D2B8;
    case 217u: goto L_0898D2D0;
    case 218u: goto L_0898D2E4;
    case 219u: goto L_0898D2F8;
    case 220u: goto L_0898D310;
    case 221u: goto L_0898D324;
    case 222u: goto L_0898D32C;
    case 223u: goto L_0898D344;
    case 224u: goto L_0898D35C;
    case 225u: goto L_0898D378;
    case 226u: goto L_0898D39C;
    case 227u: goto L_0898D3A4;
    case 228u: goto L_0898D3BC;
    case 229u: goto L_0898D3D4;
    case 230u: goto L_0898D3EC;
    case 231u: goto L_0898D3FC;
    case 232u: goto L_0898D40C;
    case 233u: goto L_0898D468;
    case 234u: goto L_0898D478;
    case 235u: goto L_0898D488;
    case 236u: goto L_0898D498;
    case 237u: goto L_0898D4C0;
    case 238u: goto L_0898D4DC;
    case 239u: goto L_0898D4EC;
    case 240u: goto L_0898D4F8;
    case 241u: goto L_0898D50C;
    case 242u: goto L_0898D524;
    case 243u: goto L_0898D540;
    case 244u: goto L_0898D550;
    case 245u: goto L_0898D560;
    case 246u: goto L_0898D584;
    case 247u: goto L_0898D594;
    case 248u: goto L_0898D5B4;
    case 249u: goto L_0898D5C4;
    case 250u: goto L_0898D5D4;
    case 251u: goto L_0898D5E4;
    case 252u: goto L_0898D5F8;
    case 253u: goto L_0898D624;
    case 254u: goto L_0898D640;
    case 255u: goto L_0898D658;
    case 256u: goto L_0898D67C;
    case 257u: goto L_0898D684;
    case 258u: goto L_0898D69C;
    case 259u: goto L_0898D6B4;
    case 260u: goto L_0898D6C8;
    case 261u: goto L_0898D6DC;
    case 262u: goto L_0898D6F4;
    case 263u: goto L_0898D6FC;
    case 264u: goto L_0898D708;
    case 265u: goto L_0898D714;
    case 266u: goto L_0898D71C;
    case 267u: goto L_0898D734;
    case 268u: goto L_0898D74C;
    case 269u: goto L_0898D760;
    case 270u: goto L_0898D768;
    case 271u: goto L_0898D780;
    case 272u: goto L_0898D794;
    case 273u: goto L_0898D7A8;
    case 274u: goto L_0898D7C4;
    case 275u: goto L_0898D7DC;
    case 276u: goto L_0898D7EC;
    case 277u: goto L_0898D7FC;
    case 278u: goto L_0898D850;
    case 279u: goto L_0898D860;
    case 280u: goto L_0898D870;
    case 281u: goto L_0898D880;
    case 282u: goto L_0898D898;
    case 283u: goto L_0898D8AC;
    case 284u: goto L_0898D8C0;
    case 285u: goto L_0898D8D8;
    case 286u: goto L_0898D8E0;
    case 287u: goto L_0898D8EC;
    case 288u: goto L_0898D8F8;
    case 289u: goto L_0898D900;
    case 290u: goto L_0898D918;
    case 291u: goto L_0898D930;
    case 292u: goto L_0898D944;
    case 293u: goto L_0898D94C;
    case 294u: goto L_0898D964;
    case 295u: goto L_0898D97C;
    case 296u: goto L_0898D998;
    case 297u: goto L_0898D9BC;
    case 298u: goto L_0898D9C4;
    case 299u: goto L_0898D9DC;
    case 300u: goto L_0898D9F4;
    case 301u: goto L_0898DA0C;
    case 302u: goto L_0898DA1C;
    case 303u: goto L_0898DA2C;
    case 304u: goto L_0898DA88;
    case 305u: goto L_0898DA98;
    case 306u: goto L_0898DAA8;
    case 307u: goto L_0898DAB8;
    case 308u: goto L_0898DAE0;
    case 309u: goto L_0898DAFC;
    case 310u: goto L_0898DB0C;
    case 311u: goto L_0898DB20;
    case 312u: goto L_0898DB34;
    case 313u: goto L_0898DB40;
    case 314u: goto L_0898DB54;
    case 315u: goto L_0898DB6C;
    case 316u: goto L_0898DB88;
    case 317u: goto L_0898DBA0;
    case 318u: goto L_0898DBBC;
    case 319u: goto L_0898DBD4;
    case 320u: goto L_0898DC08;
    case 321u: goto L_0898DC38;
    case 322u: goto L_0898DC48;
    case 323u: goto L_0898DC58;
    case 324u: goto L_0898DC70;
    case 325u: goto L_0898DC94;
    case 326u: goto L_0898DC9C;
    case 327u: goto L_0898DCB4;
    case 328u: goto L_0898DCCC;
    case 329u: goto L_0898DCF0;
    case 330u: goto L_0898DCF8;
    case 331u: goto L_0898DD10;
    case 332u: goto L_0898DD28;
    case 333u: goto L_0898DD3C;
    case 334u: goto L_0898DD50;
    case 335u: goto L_0898DD68;
    case 336u: goto L_0898DD70;
    case 337u: goto L_0898DD7C;
    case 338u: goto L_0898DD88;
    case 339u: goto L_0898DD90;
    case 340u: goto L_0898DDA8;
    case 341u: goto L_0898DDC0;
    case 342u: goto L_0898DDD4;
    case 343u: goto L_0898DDDC;
    case 344u: goto L_0898DDF4;
    case 345u: goto L_0898DE0C;
    case 346u: goto L_0898DE30;
    case 347u: goto L_0898DE54;
    case 348u: goto L_0898DE5C;
    case 349u: goto L_0898DE68;
    case 350u: goto L_0898DE70;
    case 351u: goto L_0898DE7C;
    case 352u: goto L_0898DE84;
    case 353u: goto L_0898DE9C;
    case 354u: goto L_0898DEB4;
    case 355u: goto L_0898DECC;
    case 356u: goto L_0898DEDC;
    case 357u: goto L_0898DEEC;
    case 358u: goto L_0898DF50;
    case 359u: goto L_0898DF60;
    case 360u: goto L_0898DF70;
    case 361u: goto L_0898DF80;
    case 362u: goto L_0898DFA8;
    case 363u: goto L_0898DFC4;
    case 364u: goto L_0898DFD4;
    case 365u: goto L_0898DFE0;
    case 366u: goto L_0898DFFC;
    case 367u: goto L_0898E008;
    case 368u: goto L_0898E01C;
    case 369u: goto L_0898E054;
    case 370u: goto L_0898E084;
    case 371u: goto L_0898E094;
    case 372u: goto L_0898E0A4;
    case 373u: goto L_0898E0B4;
    case 374u: goto L_0898E0C4;
    case 375u: goto L_0898E0DC;
    case 376u: goto L_0898E0F0;
    case 377u: goto L_0898E0F8;
    case 378u: goto L_0898E110;
    case 379u: goto L_0898E124;
    case 380u: goto L_0898E138;
    case 381u: goto L_0898E154;
    case 382u: goto L_0898E16C;
    case 383u: goto L_0898E17C;
    case 384u: goto L_0898E18C;
    case 385u: goto L_0898E1E0;
    case 386u: goto L_0898E1F0;
    case 387u: goto L_0898E200;
    case 388u: goto L_0898E210;
    case 389u: goto L_0898E228;
    case 390u: goto L_0898E23C;
    case 391u: goto L_0898E250;
    case 392u: goto L_0898E268;
    case 393u: goto L_0898E27C;
    case 394u: goto L_0898E284;
    case 395u: goto L_0898E29C;
    case 396u: goto L_0898E2B4;
    case 397u: goto L_0898E2C4;
    case 398u: goto L_0898E2D4;
    case 399u: goto L_0898E334;
    case 400u: goto L_0898E344;
    case 401u: goto L_0898E354;
    case 402u: goto L_0898E364;
    case 403u: goto L_0898E374;
    case 404u: goto L_0898E39C;
    case 405u: goto L_0898E3B8;
    case 406u: goto L_0898E3C8;
    case 407u: goto L_0898E3E0;
    case 408u: goto L_0898E3EC;
    case 409u: goto L_0898E410;
    case 410u: goto L_0898E41C;
    case 411u: goto L_0898E440;
    case 412u: goto L_0898E454;
    case 413u: goto L_0898E460;
    case 414u: goto L_0898E484;
    case 415u: goto L_0898E490;
    case 416u: goto L_0898E4D4;
    case 417u: goto L_0898E504;
    case 418u: goto L_0898E514;
    case 419u: goto L_0898E524;
    case 420u: goto L_0898E534;
    case 421u: goto L_0898E544;
    case 422u: goto L_0898E55C;
    case 423u: goto L_0898E570;
    case 424u: goto L_0898E584;
    case 425u: goto L_0898E59C;
    case 426u: goto L_0898E5A4;
    case 427u: goto L_0898E5B0;
    case 428u: goto L_0898E5BC;
    case 429u: goto L_0898E5C4;
    case 430u: goto L_0898E5DC;
    case 431u: goto L_0898E5F4;
    case 432u: goto L_0898E608;
    case 433u: goto L_0898E610;
    case 434u: goto L_0898E628;
    case 435u: goto L_0898E640;
    case 436u: goto L_0898E650;
    case 437u: goto L_0898E660;
    case 438u: goto L_0898E6B0;
    case 439u: goto L_0898E6C0;
    case 440u: goto L_0898E6D0;
    case 441u: goto L_0898E6E0;
    case 442u: goto L_0898E708;
    case 443u: goto L_0898E724;
    case 444u: goto L_0898E734;
    case 445u: goto L_0898E740;
    case 446u: goto L_0898E770;
    case 447u: goto L_0898E7A0;
    case 448u: goto L_0898E7B8;
    case 449u: goto L_0898E7CC;
    case 450u: goto L_0898E7D4;
    case 451u: goto L_0898E7EC;
    case 452u: goto L_0898E800;
    case 453u: goto L_0898E814;
    case 454u: goto L_0898E830;
    case 455u: goto L_0898E848;
    case 456u: goto L_0898E858;
    case 457u: goto L_0898E868;
    case 458u: goto L_0898E8BC;
    case 459u: goto L_0898E8CC;
    case 460u: goto L_0898E8DC;
    case 461u: goto L_0898E8EC;
    case 462u: goto L_0898E904;
    case 463u: goto L_0898E918;
    case 464u: goto L_0898E920;
    case 465u: goto L_0898E938;
    case 466u: goto L_0898E950;
    case 467u: goto L_0898E960;
    case 468u: goto L_0898E970;
    case 469u: goto L_0898E9B8;
    case 470u: goto L_0898E9C8;
    case 471u: goto L_0898E9D8;
    case 472u: goto L_0898E9E8;
    case 473u: goto L_0898E9F8;
    case 474u: goto L_0898EA10;
    case 475u: goto L_0898EA24;
    case 476u: goto L_0898EA38;
    case 477u: goto L_0898EA50;
    case 478u: goto L_0898EA58;
    case 479u: goto L_0898EA64;
    case 480u: goto L_0898EA70;
    case 481u: goto L_0898EA78;
    case 482u: goto L_0898EA90;
    case 483u: goto L_0898EAA8;
    case 484u: goto L_0898EABC;
    case 485u: goto L_0898EAC4;
    case 486u: goto L_0898EADC;
    case 487u: goto L_0898EAF4;
    case 488u: goto L_0898EB04;
    case 489u: goto L_0898EB14;
    case 490u: goto L_0898EB6C;
    case 491u: goto L_0898EB7C;
    case 492u: goto L_0898EB8C;
    case 493u: goto L_0898EB9C;
    case 494u: goto L_0898EBAC;
    case 495u: goto L_0898EBD4;
    case 496u: goto L_0898EBF0;
    case 497u: goto L_0898EC00;
    case 498u: goto L_0898EC0C;
    case 499u: goto L_0898EC3C;
    case 500u: goto L_0898EC6C;
    case 501u: goto L_0898EC7C;
    case 502u: goto L_0898EC8C;
    case 503u: goto L_0898ECA4;
    case 504u: goto L_0898ECB8;
    case 505u: goto L_0898ECCC;
    case 506u: goto L_0898ECE4;
    case 507u: goto L_0898ECF8;
    case 508u: goto L_0898ED00;
    case 509u: goto L_0898ED18;
    case 510u: goto L_0898ED30;
    case 511u: goto L_0898ED40;
    case 512u: goto L_0898ED50;
    case 513u: goto L_0898ED98;
    case 514u: goto L_0898EDA8;
    case 515u: goto L_0898EDB8;
    case 516u: goto L_0898EDC8;
    case 517u: goto L_0898EDD8;
    case 518u: goto L_0898EDF0;
    case 519u: goto L_0898EE04;
    case 520u: goto L_0898EE18;
    case 521u: goto L_0898EE30;
    case 522u: goto L_0898EE44;
    case 523u: goto L_0898EE4C;
    case 524u: goto L_0898EE64;
    case 525u: goto L_0898EE7C;
    case 526u: goto L_0898EE94;
    case 527u: goto L_0898EEB8;
    case 528u: goto L_0898EED0;
    case 529u: goto L_0898EEE8;
    case 530u: goto L_0898EEF8;
    case 531u: goto L_0898EF08;
    case 532u: goto L_0898EF54;
    case 533u: goto L_0898EF64;
    case 534u: goto L_0898EF74;
    case 535u: goto L_0898EF84;
    case 536u: goto L_0898EF94;
    case 537u: goto L_0898EFAC;
    case 538u: goto L_0898EFC0;
    case 539u: goto L_0898EFD4;
    case 540u: goto L_0898EFEC;
    case 541u: goto L_0898F000;
    case 542u: goto L_0898F008;
    case 543u: goto L_0898F020;
    case 544u: goto L_0898F038;
    case 545u: goto L_0898F050;
    case 546u: goto L_0898F074;
    case 547u: goto L_0898F08C;
    case 548u: goto L_0898F0A4;
    case 549u: goto L_0898F0B4;
    case 550u: goto L_0898F0C4;
    case 551u: goto L_0898F110;
    case 552u: goto L_0898F120;
    case 553u: goto L_0898F130;
    case 554u: goto L_0898F140;
    case 555u: goto L_0898F158;
    case 556u: goto L_0898F16C;
    case 557u: goto L_0898F174;
    case 558u: goto L_0898F18C;
    case 559u: goto L_0898F1A4;
    case 560u: goto L_0898F1B4;
    case 561u: goto L_0898F1C4;
    case 562u: goto L_0898F224;
    case 563u: goto L_0898F234;
    case 564u: goto L_0898F244;
    case 565u: goto L_0898F254;
    case 566u: goto L_0898F27C;
    case 567u: goto L_0898F298;
    case 568u: goto L_0898F2A8;
    case 569u: goto L_0898F2B4;
    case 570u: goto L_0898F2E0;
    case 571u: goto L_0898F2F0;
    case 572u: goto L_0898F30C;
    case 573u: goto L_0898F31C;
    case 574u: goto L_0898F32C;
    case 575u: goto L_0898F33C;
    case 576u: goto L_0898F34C;
    case 577u: goto L_0898F364;
    case 578u: goto L_0898F378;
    case 579u: goto L_0898F380;
    case 580u: goto L_0898F398;
    case 581u: goto L_0898F3B0;
    case 582u: goto L_0898F3C0;
    case 583u: goto L_0898F3D0;
    case 584u: goto L_0898F418;
    case 585u: goto L_0898F428;
    case 586u: goto L_0898F438;
    case 587u: goto L_0898F448;
    case 588u: goto L_0898F458;
    case 589u: goto L_0898F470;
    case 590u: goto L_0898F484;
    case 591u: goto L_0898F498;
    case 592u: goto L_0898F4B0;
    case 593u: goto L_0898F4B8;
    case 594u: goto L_0898F4C4;
    case 595u: goto L_0898F4D0;
    case 596u: goto L_0898F4D8;
    case 597u: goto L_0898F4F0;
    case 598u: goto L_0898F508;
    case 599u: goto L_0898F51C;
    case 600u: goto L_0898F524;
    case 601u: goto L_0898F53C;
    case 602u: goto L_0898F554;
    case 603u: goto L_0898F578;
    case 604u: goto L_0898F59C;
    case 605u: goto L_0898F5A4;
    case 606u: goto L_0898F5B0;
    case 607u: goto L_0898F5B8;
    case 608u: goto L_0898F5C4;
    case 609u: goto L_0898F5CC;
    case 610u: goto L_0898F5E4;
    case 611u: goto L_0898F5FC;
    case 612u: goto L_0898F614;
    case 613u: goto L_0898F624;
    case 614u: goto L_0898F634;
    case 615u: goto L_0898F690;
    case 616u: goto L_0898F6A0;
    case 617u: goto L_0898F6B0;
    case 618u: goto L_0898F6C0;
    case 619u: goto L_0898F6E8;
    case 620u: goto L_0898F704;
    case 621u: goto L_0898F714;
    case 622u: goto L_0898F728;
    case 623u: goto L_0898F738;
    case 624u: goto L_0898F750;
    case 625u: goto L_0898F76C;
    case 626u: goto L_0898F778;
    case 627u: goto L_0898F78C;
    case 628u: goto L_0898F798;
    case 629u: goto L_0898F7AC;
    case 630u: goto L_0898F7C4;
    case 631u: goto L_0898F7E0;
    case 632u: goto L_0898F7EC;
    case 633u: goto L_0898F824;
    case 634u: goto L_0898F840;
    case 635u: goto L_0898F858;
    case 636u: goto L_0898F86C;
    case 637u: goto L_0898F874;
    case 638u: goto L_0898F88C;
    case 639u: goto L_0898F8A0;
    case 640u: goto L_0898F8B4;
    case 641u: goto L_0898F8D0;
    case 642u: goto L_0898F8E8;
    case 643u: goto L_0898F8F8;
    case 644u: goto L_0898F908;
    case 645u: goto L_0898F95C;
    case 646u: goto L_0898F96C;
    case 647u: goto L_0898F97C;
    case 648u: goto L_0898F98C;
    case 649u: goto L_0898F9A4;
    case 650u: goto L_0898F9AC;
    case 651u: goto L_0898F9B8;
    case 652u: goto L_0898F9C4;
    case 653u: goto L_0898F9CC;
    case 654u: goto L_0898F9E4;
    case 655u: goto L_0898F9FC;
    case 656u: goto L_0898FA10;
    case 657u: goto L_0898FA18;
    case 658u: goto L_0898FA30;
    case 659u: goto L_0898FA48;
    case 660u: goto L_0898FA58;
    case 661u: goto L_0898FA68;
    case 662u: goto L_0898FAB0;
    case 663u: goto L_0898FAC0;
    case 664u: goto L_0898FAD0;
    case 665u: goto L_0898FAE0;
    case 666u: goto L_0898FAF8;
    case 667u: goto L_0898FB0C;
    case 668u: goto L_0898FB14;
    case 669u: goto L_0898FB2C;
    case 670u: goto L_0898FB40;
    case 671u: goto L_0898FB54;
    case 672u: goto L_0898FB70;
    case 673u: goto L_0898FB88;
    case 674u: goto L_0898FB98;
    case 675u: goto L_0898FBA8;
    case 676u: goto L_0898FBFC;
    case 677u: goto L_0898FC0C;
    case 678u: goto L_0898FC1C;
    case 679u: goto L_0898FC2C;
    case 680u: goto L_0898FC3C;
    case 681u: goto L_0898FC4C;
    case 682u: goto L_0898FC64;
    case 683u: goto L_0898FC78;
    case 684u: goto L_0898FC80;
    case 685u: goto L_0898FC98;
    case 686u: goto L_0898FCAC;
    case 687u: goto L_0898FCC0;
    case 688u: goto L_0898FCDC;
    case 689u: goto L_0898FCF4;
    case 690u: goto L_0898FD04;
    case 691u: goto L_0898FD14;
    case 692u: goto L_0898FD68;
    case 693u: goto L_0898FD78;
    case 694u: goto L_0898FD88;
    case 695u: goto L_0898FD98;
    case 696u: goto L_0898FDA8;
    case 697u: goto L_0898FDD8;
    case 698u: goto L_0898FDEC;
    case 699u: goto L_0898FE08;
    case 700u: goto L_0898FE14;
    case 701u: goto L_0898FE2C;
    case 702u: goto L_0898FE5C;
    case 703u: goto L_0898FE78;
    case 704u: goto L_0898FE84;
    case 705u: goto L_0898FEA0;
    case 706u: goto L_0898FEB8;
    case 707u: goto L_0898FECC;
    case 708u: goto L_0898FEE0;
    case 709u: goto L_0898FEF8;
    case 710u: goto L_0898FF00;
    case 711u: goto L_0898FF0C;
    case 712u: goto L_0898FF18;
    case 713u: goto L_0898FF20;
    case 714u: goto L_0898FF38;
    case 715u: goto L_0898FF50;
    case 716u: goto L_0898FF64;
    case 717u: goto L_0898FF6C;
    case 718u: goto L_0898FF84;
    case 719u: goto L_0898FF9C;
    case 720u: goto L_0898FFAC;
    case 721u: goto L_0898FFBC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0898C000:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898C008:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898C018u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 540u, 0x089BED78u>(ctx, &aot_mem) && ctx.pc == 0x0898C018u) goto L_0898C018;
    return;
L_0898C018:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898C028:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0898C040u);
    // nop
    goto L_0898C128;
L_0898C040:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32428)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898C054u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x0898C054u) goto L_0898C054;
    return;
L_0898C054:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898C068:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32428)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898C094;
      }
      goto L_0898C080;
    }
L_0898C080:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898C09C;
      }
      goto L_0898C094;
    }
L_0898C094:
    ctx.set_gpr(31, 0x0898C09Cu);
    // nop
    goto L_0898C128;
L_0898C09C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32428)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898C0B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x0898C0CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x0898C0CCu) goto L_0898C0CC;
    return;
L_0898C0CC:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(25364));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(31, 0x0898C0E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0898C0E4u) goto L_0898C0E4;
    return;
L_0898C0E4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(25364));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898C110;
      }
      goto L_0898C108;
    }
L_0898C108:
    ctx.set_gpr(31, 0x0898C110u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0898C110u) goto L_0898C110;
    return;
L_0898C110:
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
L_0898C128:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2201u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-16048));
    ctx.set_gpr(31, 0x0898C140u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x0898C140u) goto L_0898C140;
    return;
L_0898C140:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898C150:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898C160u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 541u, 0x0898ABD8u>(ctx, &aot_mem) && ctx.pc == 0x0898C160u) goto L_0898C160;
    return;
L_0898C160:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15892));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(27376));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32428));
    ctx.set_gpr(6, 2202u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-26836));
    ctx.set_gpr(7, 2201u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-17120));
    ctx.set_gpr(8, 2201u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-15924));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(27384));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(11, 2201u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-16204));
    ctx.set_gpr(31, 0x0898C1BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x0898C1BCu) goto L_0898C1BC;
    return;
L_0898C1BC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898C1CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898C1DCu);
    // nop
    goto L_0898C068;
L_0898C1DC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898C1EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32428)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0898C214u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x0898C214u) goto L_0898C214;
    return;
L_0898C214:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27420));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0898C230u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x0898C230u) goto L_0898C230;
    return;
L_0898C230:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0898C240u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898C240u) goto L_0898C240;
    return;
L_0898C240:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0898C24Cu);
    // nop
    goto L_0898C4FC;
L_0898C24C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27440));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(27444));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(27448));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0898C27Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0898C27Cu) goto L_0898C27C;
    return;
L_0898C27C:
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
L_0898C298:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32436)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898C2C4;
      }
      goto L_0898C2B0;
    }
L_0898C2B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898C2CC;
      }
      goto L_0898C2C4;
    }
L_0898C2C4:
    ctx.set_gpr(31, 0x0898C2CCu);
    // nop
    goto L_0898C328;
L_0898C2CC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32436)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898C2E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x0898C2F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x0898C2F8u) goto L_0898C2F8;
    return;
L_0898C2F8:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-28448));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0898C30Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0898C30Cu) goto L_0898C30C;
    return;
L_0898C30C:
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
L_0898C328:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2201u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-15536));
    ctx.set_gpr(31, 0x0898C340u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x0898C340u) goto L_0898C340;
    return;
L_0898C340:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898C350:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898C360u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 541u, 0x0898ABD8u>(ctx, &aot_mem) && ctx.pc == 0x0898C360u) goto L_0898C360;
    return;
L_0898C360:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15388));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32436));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(24296));
    ctx.set_gpr(7, 2189u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(23152));
    ctx.set_gpr(8, 2201u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-15420));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(27452));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2201u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-15644));
    ctx.set_gpr(31, 0x0898C3B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x0898C3B4u) goto L_0898C3B4;
    return;
L_0898C3B4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898C3C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898C3D4u);
    // nop
    goto L_0898C298;
L_0898C3D4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898C3E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32436)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27476));
    ctx.set_gpr(31, 0x0898C414u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x0898C414u) goto L_0898C414;
    return;
L_0898C414:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898C428u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 700u, 0x08927138u>(ctx, &aot_mem) && ctx.pc == 0x0898C428u) goto L_0898C428;
    return;
L_0898C428:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0898C444u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898C444u) goto L_0898C444;
    return;
L_0898C444:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0898C450u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 346u, 0x088DDCC4u>(ctx, &aot_mem) && ctx.pc == 0x0898C450u) goto L_0898C450;
    return;
L_0898C450:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(32440));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898C478u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 145u, 0x08944AF0u>(ctx, &aot_mem) && ctx.pc == 0x0898C478u) goto L_0898C478;
    return;
L_0898C478:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898C4A0;
      }
      goto L_0898C494;
    }
L_0898C494:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898C4A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x0898C4A0u) goto L_0898C4A0;
    return;
L_0898C4A0:
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
L_0898C4BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0898C4D4u);
    // nop
    goto L_0898C5A0;
L_0898C4D4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32444)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898C4E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x0898C4E8u) goto L_0898C4E8;
    return;
L_0898C4E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898C4FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32444)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898C53C;
      }
      goto L_0898C514;
    }
L_0898C514:
    ctx.set_gpr(31, 0x0898C51Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x0898C51Cu) goto L_0898C51C;
    return;
L_0898C51C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0898C528u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x0898C528u) goto L_0898C528;
    return;
L_0898C528:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0898C534u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x0898C534u) goto L_0898C534;
    return;
L_0898C534:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32444), ctx.gpr[2]);
    goto L_0898C53C;
L_0898C53C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32444)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898C554:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32444)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898C580;
      }
      goto L_0898C56C;
    }
L_0898C56C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898C588;
      }
      goto L_0898C580;
    }
L_0898C580:
    ctx.set_gpr(31, 0x0898C588u);
    // nop
    goto L_0898C5A0;
L_0898C588:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32444)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898C5A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2201u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-14904));
    ctx.set_gpr(31, 0x0898C5B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x0898C5B8u) goto L_0898C5B8;
    return;
L_0898C5B8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898C5C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898C5D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 541u, 0x0898ABD8u>(ctx, &aot_mem) && ctx.pc == 0x0898C5D8u) goto L_0898C5D8;
    return;
L_0898C5D8:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-14752));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(27484));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32444));
    ctx.set_gpr(6, 2192u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-24228));
    ctx.set_gpr(7, 2192u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-26024));
    ctx.set_gpr(8, 2201u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-14784));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(27528));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(368));
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x0898C630u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x0898C630u) goto L_0898C630;
    return;
L_0898C630:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898C640:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898C650u);
    // nop
    goto L_0898C554;
L_0898C650:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898C660:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32444)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898C688u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x0898C688u) goto L_0898C688;
    return;
L_0898C688:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27544));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(41));
    ctx.set_gpr(31, 0x0898C6A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x0898C6A4u) goto L_0898C6A4;
    return;
L_0898C6A4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0898C6B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898C6B4u) goto L_0898C6B4;
    return;
L_0898C6B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x0898C6C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x0898C6C4u) goto L_0898C6C4;
    return;
L_0898C6C4:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898C6D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898C6D4u) goto L_0898C6D4;
    return;
L_0898C6D4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0898C6E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 471u, 0x088E66E8u>(ctx, &aot_mem) && ctx.pc == 0x0898C6E0u) goto L_0898C6E0;
    return;
L_0898C6E0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898C6FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898C6FCu) goto L_0898C6FC;
    return;
L_0898C6FC:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898C710u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898C710u) goto L_0898C710;
    return;
L_0898C710:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898C724u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898C724u) goto L_0898C724;
    return;
L_0898C724:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0898C730u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 559u, 0x089F3B10u>(ctx, &aot_mem) && ctx.pc == 0x0898C730u) goto L_0898C730;
    return;
L_0898C730:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(9));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898C758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898C758u) goto L_0898C758;
    return;
L_0898C758:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(10));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898C76Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898C76Cu) goto L_0898C76C;
    return;
L_0898C76C:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(11));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898C780u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898C780u) goto L_0898C780;
    return;
L_0898C780:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0898C794u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 745u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x0898C794u) goto L_0898C794;
    return;
L_0898C794:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898C7A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898C7A8u) goto L_0898C7A8;
    return;
L_0898C7A8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x0898C7C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 63u, 0x089284A0u>(ctx, &aot_mem) && ctx.pc == 0x0898C7C0u) goto L_0898C7C0;
    return;
L_0898C7C0:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(13));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898C7D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898C7D4u) goto L_0898C7D4;
    return;
L_0898C7D4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(28908));
    ctx.set_gpr(31, 0x0898C7ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x0898C7ECu) goto L_0898C7EC;
    return;
L_0898C7EC:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18004));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(14));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898C808u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898C808u) goto L_0898C808;
    return;
L_0898C808:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(15));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898C81Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898C81Cu) goto L_0898C81C;
    return;
L_0898C81C:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898C830u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898C830u) goto L_0898C830;
    return;
L_0898C830:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0898C844u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 745u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x0898C844u) goto L_0898C844;
    return;
L_0898C844:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(17));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898C858u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898C858u) goto L_0898C858;
    return;
L_0898C858:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x0898C86Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x0898C86Cu) goto L_0898C86C;
    return;
L_0898C86C:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(18));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898C880u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898C880u) goto L_0898C880;
    return;
L_0898C880:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x0898C894u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x0898C894u) goto L_0898C894;
    return;
L_0898C894:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(19));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898C8A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898C8A8u) goto L_0898C8A8;
    return;
L_0898C8A8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0898C8B4u);
    // nop
    goto L_0898DD50;
L_0898C8B4:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(16));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898C8D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898C8D4u) goto L_0898C8D4;
    return;
L_0898C8D4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0898C8E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 565u, 0x0899723Cu>(ctx, &aot_mem) && ctx.pc == 0x0898C8E0u) goto L_0898C8E0;
    return;
L_0898C8E0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(21));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898C900u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898C900u) goto L_0898C900;
    return;
L_0898C900:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0898C90Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0100_entry, 100u, 614u, 0x089976A8u>(ctx, &aot_mem) && ctx.pc == 0x0898C90Cu) goto L_0898C90C;
    return;
L_0898C90C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(22));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898C92Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898C92Cu) goto L_0898C92C;
    return;
L_0898C92C:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(23));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898C940u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898C940u) goto L_0898C940;
    return;
L_0898C940:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0898C94Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 704u, 0x088DFA2Cu>(ctx, &aot_mem) && ctx.pc == 0x0898C94Cu) goto L_0898C94C;
    return;
L_0898C94C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898C960u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898C960u) goto L_0898C960;
    return;
L_0898C960:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0898C96Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 704u, 0x088DFA2Cu>(ctx, &aot_mem) && ctx.pc == 0x0898C96Cu) goto L_0898C96C;
    return;
L_0898C96C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(25));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898C980u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898C980u) goto L_0898C980;
    return;
L_0898C980:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0898C98Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 704u, 0x088DFA2Cu>(ctx, &aot_mem) && ctx.pc == 0x0898C98Cu) goto L_0898C98C;
    return;
L_0898C98C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(26));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898C9A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898C9A0u) goto L_0898C9A0;
    return;
L_0898C9A0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0898C9ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 704u, 0x088DFA2Cu>(ctx, &aot_mem) && ctx.pc == 0x0898C9ACu) goto L_0898C9AC;
    return;
L_0898C9AC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(27));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898C9C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898C9C0u) goto L_0898C9C0;
    return;
L_0898C9C0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0898C9CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 704u, 0x088DFA2Cu>(ctx, &aot_mem) && ctx.pc == 0x0898C9CCu) goto L_0898C9CC;
    return;
L_0898C9CC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898C9E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898C9E0u) goto L_0898C9E0;
    return;
L_0898C9E0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0898C9ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 704u, 0x088DFA2Cu>(ctx, &aot_mem) && ctx.pc == 0x0898C9ECu) goto L_0898C9EC;
    return;
L_0898C9EC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(29));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898CA00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898CA00u) goto L_0898CA00;
    return;
L_0898CA00:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0898CA0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 704u, 0x088DFA2Cu>(ctx, &aot_mem) && ctx.pc == 0x0898CA0Cu) goto L_0898CA0C;
    return;
L_0898CA0C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(30));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898CA20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898CA20u) goto L_0898CA20;
    return;
L_0898CA20:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0898CA2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 704u, 0x088DFA2Cu>(ctx, &aot_mem) && ctx.pc == 0x0898CA2Cu) goto L_0898CA2C;
    return;
L_0898CA2C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(31));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898CA40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898CA40u) goto L_0898CA40;
    return;
L_0898CA40:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0898CA4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 324u, 0x088E979Cu>(ctx, &aot_mem) && ctx.pc == 0x0898CA4Cu) goto L_0898CA4C;
    return;
L_0898CA4C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898CA64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898CA64u) goto L_0898CA64;
    return;
L_0898CA64:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0898CA70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 423u, 0x089F2F4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898CA70u) goto L_0898CA70;
    return;
L_0898CA70:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(33));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898CA8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898CA8Cu) goto L_0898CA8C;
    return;
L_0898CA8C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0898CA98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 590u, 0x089F73A0u>(ctx, &aot_mem) && ctx.pc == 0x0898CA98u) goto L_0898CA98;
    return;
L_0898CA98:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(34));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898CAB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898CAB4u) goto L_0898CAB4;
    return;
L_0898CAB4:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0898CAC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 643u, 0x0891EEE0u>(ctx, &aot_mem) && ctx.pc == 0x0898CAC4u) goto L_0898CAC4;
    return;
L_0898CAC4:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(35));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898CAD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898CAD4u) goto L_0898CAD4;
    return;
L_0898CAD4:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0898CAE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 643u, 0x0891EEE0u>(ctx, &aot_mem) && ctx.pc == 0x0898CAE4u) goto L_0898CAE4;
    return;
L_0898CAE4:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898CAF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898CAF4u) goto L_0898CAF4;
    return;
L_0898CAF4:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0898CB04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 643u, 0x0891EEE0u>(ctx, &aot_mem) && ctx.pc == 0x0898CB04u) goto L_0898CB04;
    return;
L_0898CB04:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(37));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898CB14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898CB14u) goto L_0898CB14;
    return;
L_0898CB14:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0898CB20u);
    // nop
    goto L_0898F498;
L_0898CB20:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898CB34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898CB34u) goto L_0898CB34;
    return;
L_0898CB34:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0898CB40u);
    // nop
    goto L_0898EA38;
L_0898CB40:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(28416));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(28580));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(28744));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0898CB6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0898CB6Cu) goto L_0898CB6C;
    return;
L_0898CB6C:
    ctx.set_gpr(4, 2201u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-13412));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(32444)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
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
L_0898CB9C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898CBACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 651u, 0x0899B74Cu>(ctx, &aot_mem) && ctx.pc == 0x0898CBACu) goto L_0898CBAC;
    return;
L_0898CBAC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898CBBC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0898CBD4u);
    // nop
    goto L_0898CC8C;
L_0898CBD4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32612)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898CBE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x0898CBE8u) goto L_0898CBE8;
    return;
L_0898CBE8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898CBFC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32612)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898CC28;
      }
      goto L_0898CC14;
    }
L_0898CC14:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898CC30;
      }
      goto L_0898CC28;
    }
L_0898CC28:
    ctx.set_gpr(31, 0x0898CC30u);
    // nop
    goto L_0898CC8C;
L_0898CC30:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32612)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898CC48:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x0898CC5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x0898CC5Cu) goto L_0898CC5C;
    return;
L_0898CC5C:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-28552));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0898CC70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0898CC70u) goto L_0898CC70;
    return;
L_0898CC70:
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
L_0898CC8C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2201u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-13132));
    ctx.set_gpr(31, 0x0898CCA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x0898CCA4u) goto L_0898CCA4;
    return;
L_0898CCA4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898CCB4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898CCC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 541u, 0x0898ABD8u>(ctx, &aot_mem) && ctx.pc == 0x0898CCC4u) goto L_0898CCC4;
    return;
L_0898CCC4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(28912));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32612));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-11416));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(13108));
    ctx.set_gpr(8, 2201u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-13016));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(28920));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2201u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-13240));
    ctx.set_gpr(31, 0x0898CD18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x0898CD18u) goto L_0898CD18;
    return;
L_0898CD18:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898CD28:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898CD38u);
    // nop
    goto L_0898CBFC;
L_0898CD38:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898CD48:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0898CD60u);
    // nop
    goto L_0898CE64;
L_0898CD60:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32616)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898CD74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x0898CD74u) goto L_0898CD74;
    return;
L_0898CD74:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898CD88:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32616)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898CDB4;
      }
      goto L_0898CDA0;
    }
L_0898CDA0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898CDBC;
      }
      goto L_0898CDB4;
    }
L_0898CDB4:
    ctx.set_gpr(31, 0x0898CDBCu);
    // nop
    goto L_0898CE64;
L_0898CDBC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32616)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898CDD4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0898CDECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x0898CDECu) goto L_0898CDEC;
    return;
L_0898CDEC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(26648));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(31, 0x0898CE08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0898CE08u) goto L_0898CE08;
    return;
L_0898CE08:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(26648));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898CE34;
      }
      goto L_0898CE2C;
    }
L_0898CE2C:
    ctx.set_gpr(31, 0x0898CE34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0898CE34u) goto L_0898CE34;
    return;
L_0898CE34:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15576));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0898CE4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 764u, 0x08853094u>(ctx, &aot_mem) && ctx.pc == 0x0898CE4Cu) goto L_0898CE4C;
    return;
L_0898CE4C:
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
L_0898CE64:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2201u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-12660));
    ctx.set_gpr(31, 0x0898CE7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x0898CE7Cu) goto L_0898CE7C;
    return;
L_0898CE7C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898CE8C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898CE9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 541u, 0x0898ABD8u>(ctx, &aot_mem) && ctx.pc == 0x0898CE9Cu) goto L_0898CE9C;
    return;
L_0898CE9C:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-12504));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(28940));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32616));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-10116));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(16508));
    ctx.set_gpr(8, 2201u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-12536));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(28948));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(11, 2201u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-12844));
    ctx.set_gpr(31, 0x0898CEF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x0898CEF8u) goto L_0898CEF8;
    return;
L_0898CEF8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898CF08:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898CF18u);
    // nop
    goto L_0898CD88;
L_0898CF18:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898CF28:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32616)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0898CF50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x0898CF50u) goto L_0898CF50;
    return;
L_0898CF50:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(28972));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0898CF6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x0898CF6Cu) goto L_0898CF6C;
    return;
L_0898CF6C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0898CF7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898CF7Cu) goto L_0898CF7C;
    return;
L_0898CF7C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0898CF88u);
    // nop
    goto L_0898DD50;
L_0898CF88:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(28992));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(28996));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(29000));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0898CFB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0898CFB4u) goto L_0898CFB4;
    return;
L_0898CFB4:
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
L_0898CFD0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32624)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898CFFC;
      }
      goto L_0898CFE8;
    }
L_0898CFE8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898D004;
      }
      goto L_0898CFFC;
    }
L_0898CFFC:
    ctx.set_gpr(31, 0x0898D004u);
    // nop
    goto L_0898D060;
L_0898D004:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32624)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898D01C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x0898D030u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x0898D030u) goto L_0898D030;
    return;
L_0898D030:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-28652));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0898D044u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0898D044u) goto L_0898D044;
    return;
L_0898D044:
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
L_0898D060:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2201u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-12152));
    ctx.set_gpr(31, 0x0898D078u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x0898D078u) goto L_0898D078;
    return;
L_0898D078:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898D088:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898D098u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 541u, 0x0898ABD8u>(ctx, &aot_mem) && ctx.pc == 0x0898D098u) goto L_0898D098;
    return;
L_0898D098:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-12004));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32624));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(29652));
    ctx.set_gpr(7, 2191u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(30492));
    ctx.set_gpr(8, 2201u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-12036));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(29004));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2201u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-12260));
    ctx.set_gpr(31, 0x0898D0ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x0898D0ECu) goto L_0898D0EC;
    return;
L_0898D0EC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898D0FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898D10Cu);
    // nop
    goto L_0898CFD0;
L_0898D10C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898D11C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898D12Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 195u, 0x089B9238u>(ctx, &aot_mem) && ctx.pc == 0x0898D12Cu) goto L_0898D12C;
    return;
L_0898D12C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898D13C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32628)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898D168;
      }
      goto L_0898D154;
    }
L_0898D154:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898D170;
      }
      goto L_0898D168;
    }
L_0898D168:
    ctx.set_gpr(31, 0x0898D170u);
    // nop
    goto L_0898D1CC;
L_0898D170:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32628)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898D188:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x0898D19Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x0898D19Cu) goto L_0898D19C;
    return;
L_0898D19C:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-28752));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0898D1B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0898D1B0u) goto L_0898D1B0;
    return;
L_0898D1B0:
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
L_0898D1CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2201u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-11788));
    ctx.set_gpr(31, 0x0898D1E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x0898D1E4u) goto L_0898D1E4;
    return;
L_0898D1E4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898D1F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898D204u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 541u, 0x0898ABD8u>(ctx, &aot_mem) && ctx.pc == 0x0898D204u) goto L_0898D204;
    return;
L_0898D204:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-11624));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32628));
    ctx.set_gpr(6, 2192u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-32564));
    ctx.set_gpr(7, 2201u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-11640));
    ctx.set_gpr(8, 2201u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-11672));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(29032));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2201u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-11896));
    ctx.set_gpr(31, 0x0898D258u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x0898D258u) goto L_0898D258;
    return;
L_0898D258:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898D268:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898D278u);
    // nop
    goto L_0898D13C;
L_0898D278:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898D288:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30028)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898D298:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898D2A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 205u, 0x089B92D8u>(ctx, &aot_mem) && ctx.pc == 0x0898D2A8u) goto L_0898D2A8;
    return;
L_0898D2A8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898D2B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0898D2D0u);
    // nop
    goto L_0898D3D4;
L_0898D2D0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32632)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898D2E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x0898D2E4u) goto L_0898D2E4;
    return;
L_0898D2E4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898D2F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32632)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898D324;
      }
      goto L_0898D310;
    }
L_0898D310:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898D32C;
      }
      goto L_0898D324;
    }
L_0898D324:
    ctx.set_gpr(31, 0x0898D32Cu);
    // nop
    goto L_0898D3D4;
L_0898D32C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32632)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898D344:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0898D35Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x0898D35Cu) goto L_0898D35C;
    return;
L_0898D35C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-28844));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(31, 0x0898D378u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0898D378u) goto L_0898D378;
    return;
L_0898D378:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-28844));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898D3A4;
      }
      goto L_0898D39C;
    }
L_0898D39C:
    ctx.set_gpr(31, 0x0898D3A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0898D3A4u) goto L_0898D3A4;
    return;
L_0898D3A4:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15576));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0898D3BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 764u, 0x08853094u>(ctx, &aot_mem) && ctx.pc == 0x0898D3BCu) goto L_0898D3BC;
    return;
L_0898D3BC:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898D3D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2201u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-11268));
    ctx.set_gpr(31, 0x0898D3ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x0898D3ECu) goto L_0898D3EC;
    return;
L_0898D3EC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898D3FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898D40Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 541u, 0x0898ABD8u>(ctx, &aot_mem) && ctx.pc == 0x0898D40Cu) goto L_0898D40C;
    return;
L_0898D40C:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-11112));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(29060));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32632));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-10116));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(16508));
    ctx.set_gpr(8, 2201u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-11144));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(29068));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(80));
    ctx.set_gpr(11, 2201u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-11452));
    ctx.set_gpr(31, 0x0898D468u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x0898D468u) goto L_0898D468;
    return;
L_0898D468:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898D478:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898D488u);
    // nop
    goto L_0898D2F8;
L_0898D488:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898D498:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32632)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0898D4C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x0898D4C0u) goto L_0898D4C0;
    return;
L_0898D4C0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29084));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(11));
    ctx.set_gpr(31, 0x0898D4DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x0898D4DCu) goto L_0898D4DC;
    return;
L_0898D4DC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898D4ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898D4ECu) goto L_0898D4EC;
    return;
L_0898D4EC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0898D4F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 362u, 0x088F5DD8u>(ctx, &aot_mem) && ctx.pc == 0x0898D4F8u) goto L_0898D4F8;
    return;
L_0898D4F8:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0898D50Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898D50Cu) goto L_0898D50C;
    return;
L_0898D50C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29428));
    ctx.set_gpr(31, 0x0898D524u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x0898D524u) goto L_0898D524;
    return;
L_0898D524:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-10688));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0898D540u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898D540u) goto L_0898D540;
    return;
L_0898D540:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0898D550u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 783u, 0x0895F488u>(ctx, &aot_mem) && ctx.pc == 0x0898D550u) goto L_0898D550;
    return;
L_0898D550:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0898D560u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898D560u) goto L_0898D560;
    return;
L_0898D560:
    ctx.set_gpr(3, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x0898D584u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 265u, 0x089FD724u>(ctx, &aot_mem) && ctx.pc == 0x0898D584u) goto L_0898D584;
    return;
L_0898D584:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0898D594u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898D594u) goto L_0898D594;
    return;
L_0898D594:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0898D5B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 265u, 0x089FD724u>(ctx, &aot_mem) && ctx.pc == 0x0898D5B4u) goto L_0898D5B4;
    return;
L_0898D5B4:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(9));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0898D5C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898D5C4u) goto L_0898D5C4;
    return;
L_0898D5C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x0898D5D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x0898D5D4u) goto L_0898D5D4;
    return;
L_0898D5D4:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(10));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0898D5E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898D5E4u) goto L_0898D5E4;
    return;
L_0898D5E4:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0898D5F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 745u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x0898D5F8u) goto L_0898D5F8;
    return;
L_0898D5F8:
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(29296));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(29340));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(29384));
    ctx.set_gpr(8, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898D624u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0898D624u) goto L_0898D624;
    return;
L_0898D624:
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
L_0898D640:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32680)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898D684;
      }
      goto L_0898D658;
    }
L_0898D658:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(30160));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(30008));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(30084));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(19));
    ctx.set_gpr(31, 0x0898D67Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x0898D67Cu) goto L_0898D67C;
    return;
L_0898D67C:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32680), ctx.gpr[2]);
    goto L_0898D684;
L_0898D684:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32680)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898D69C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0898D6B4u);
    // nop
    goto L_0898D7C4;
L_0898D6B4:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32684)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898D6C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x0898D6C8u) goto L_0898D6C8;
    return;
L_0898D6C8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898D6DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32684)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898D71C;
      }
      goto L_0898D6F4;
    }
L_0898D6F4:
    ctx.set_gpr(31, 0x0898D6FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x0898D6FCu) goto L_0898D6FC;
    return;
L_0898D6FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0898D708u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x0898D708u) goto L_0898D708;
    return;
L_0898D708:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0898D714u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x0898D714u) goto L_0898D714;
    return;
L_0898D714:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32684), ctx.gpr[2]);
    goto L_0898D71C;
L_0898D71C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32684)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898D734:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32684)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898D760;
      }
      goto L_0898D74C;
    }
L_0898D74C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898D768;
      }
      goto L_0898D760;
    }
L_0898D760:
    ctx.set_gpr(31, 0x0898D768u);
    // nop
    goto L_0898D7C4;
L_0898D768:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32684)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898D780:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x0898D794u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x0898D794u) goto L_0898D794;
    return;
L_0898D794:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-28948));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0898D7A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0898D7A8u) goto L_0898D7A8;
    return;
L_0898D7A8:
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
L_0898D7C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2201u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-10260));
    ctx.set_gpr(31, 0x0898D7DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x0898D7DCu) goto L_0898D7DC;
    return;
L_0898D7DC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898D7EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898D7FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 541u, 0x0898ABD8u>(ctx, &aot_mem) && ctx.pc == 0x0898D7FCu) goto L_0898D7FC;
    return;
L_0898D7FC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(30188));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32684));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2201u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-10144));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(30196));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2201u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-10368));
    ctx.set_gpr(31, 0x0898D850u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x0898D850u) goto L_0898D850;
    return;
L_0898D850:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898D860:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898D870u);
    // nop
    goto L_0898D734;
L_0898D870:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898D880:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0898D898u);
    // nop
    goto L_0898D9F4;
L_0898D898:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32688)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898D8ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x0898D8ACu) goto L_0898D8AC;
    return;
L_0898D8AC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898D8C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32688)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898D900;
      }
      goto L_0898D8D8;
    }
L_0898D8D8:
    ctx.set_gpr(31, 0x0898D8E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x0898D8E0u) goto L_0898D8E0;
    return;
L_0898D8E0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0898D8ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x0898D8ECu) goto L_0898D8EC;
    return;
L_0898D8EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0898D8F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x0898D8F8u) goto L_0898D8F8;
    return;
L_0898D8F8:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32688), ctx.gpr[2]);
    goto L_0898D900;
L_0898D900:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32688)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898D918:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32688)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898D944;
      }
      goto L_0898D930;
    }
L_0898D930:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898D94C;
      }
      goto L_0898D944;
    }
L_0898D944:
    ctx.set_gpr(31, 0x0898D94Cu);
    // nop
    goto L_0898D9F4;
L_0898D94C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32688)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898D964:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x0898D97Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x0898D97Cu) goto L_0898D97C;
    return;
L_0898D97C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(26760));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    ctx.set_gpr(31, 0x0898D998u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0898D998u) goto L_0898D998;
    return;
L_0898D998:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(26760));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898D9C4;
      }
      goto L_0898D9BC;
    }
L_0898D9BC:
    ctx.set_gpr(31, 0x0898D9C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0898D9C4u) goto L_0898D9C4;
    return;
L_0898D9C4:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15576));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(31, 0x0898D9DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 764u, 0x08853094u>(ctx, &aot_mem) && ctx.pc == 0x0898D9DCu) goto L_0898D9DC;
    return;
L_0898D9DC:
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
L_0898D9F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2201u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-9700));
    ctx.set_gpr(31, 0x0898DA0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x0898DA0Cu) goto L_0898DA0C;
    return;
L_0898DA0C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898DA1C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898DA2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 541u, 0x0898ABD8u>(ctx, &aot_mem) && ctx.pc == 0x0898DA2Cu) goto L_0898DA2C;
    return;
L_0898DA2C:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-9544));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(30216));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32688));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-10116));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(16508));
    ctx.set_gpr(8, 2201u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-9576));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(30224));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(36));
    ctx.set_gpr(11, 2201u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-9884));
    ctx.set_gpr(31, 0x0898DA88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x0898DA88u) goto L_0898DA88;
    return;
L_0898DA88:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898DA98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898DAA8u);
    // nop
    goto L_0898D918;
L_0898DAA8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898DAB8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32688)));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0898DAE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x0898DAE0u) goto L_0898DAE0;
    return;
L_0898DAE0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(30240));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x0898DAFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x0898DAFCu) goto L_0898DAFC;
    return;
L_0898DAFC:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898DB0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898DB0Cu) goto L_0898DB0C;
    return;
L_0898DB0C:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0898DB20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898DB20u) goto L_0898DB20;
    return;
L_0898DB20:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0898DB34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898DB34u) goto L_0898DB34;
    return;
L_0898DB34:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0898DB40u);
    // nop
    goto L_0898D6DC;
L_0898DB40:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0898DB54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898DB54u) goto L_0898DB54;
    return;
L_0898DB54:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(30412));
    ctx.set_gpr(31, 0x0898DB6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x0898DB6Cu) goto L_0898DB6C;
    return;
L_0898DB6C:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-9128));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0898DB88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898DB88u) goto L_0898DB88;
    return;
L_0898DB88:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(30416));
    ctx.set_gpr(31, 0x0898DBA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x0898DBA0u) goto L_0898DBA0;
    return;
L_0898DBA0:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-20212));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0898DBBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898DBBCu) goto L_0898DBBC;
    return;
L_0898DBBC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(30420));
    ctx.set_gpr(31, 0x0898DBD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x0898DBD4u) goto L_0898DBD4;
    return;
L_0898DBD4:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-9036));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(30340));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(30364));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(30388));
    ctx.set_gpr(8, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898DC08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0898DC08u) goto L_0898DC08;
    return;
L_0898DC08:
    ctx.set_gpr(4, 2201u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-9160));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(32688)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
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
L_0898DC38:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898DC48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 139u, 0x0899CBB8u>(ctx, &aot_mem) && ctx.pc == 0x0898DC48u) goto L_0898DC48;
    return;
L_0898DC48:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898DC58:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32716)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898DC9C;
      }
      goto L_0898DC70;
    }
L_0898DC70:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(30604));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(30564));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(30584));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x0898DC94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x0898DC94u) goto L_0898DC94;
    return;
L_0898DC94:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32716), ctx.gpr[2]);
    goto L_0898DC9C;
L_0898DC9C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32716)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898DCB4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32720)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898DCF8;
      }
      goto L_0898DCCC;
    }
L_0898DCCC:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(30760));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(30736));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(30748));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x0898DCF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 432u, 0x08941E90u>(ctx, &aot_mem) && ctx.pc == 0x0898DCF0u) goto L_0898DCF0;
    return;
L_0898DCF0:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32720), ctx.gpr[2]);
    goto L_0898DCF8;
L_0898DCF8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32720)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898DD10:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0898DD28u);
    // nop
    goto L_0898DEB4;
L_0898DD28:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32724)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898DD3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x0898DD3Cu) goto L_0898DD3C;
    return;
L_0898DD3C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898DD50:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32724)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898DD90;
      }
      goto L_0898DD68;
    }
L_0898DD68:
    ctx.set_gpr(31, 0x0898DD70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x0898DD70u) goto L_0898DD70;
    return;
L_0898DD70:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0898DD7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x0898DD7Cu) goto L_0898DD7C;
    return;
L_0898DD7C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0898DD88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x0898DD88u) goto L_0898DD88;
    return;
L_0898DD88:
    ctx.set_gpr(3, 2245u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(32724), ctx.gpr[2]);
    goto L_0898DD90;
L_0898DD90:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32724)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898DDA8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32724)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898DDD4;
      }
      goto L_0898DDC0;
    }
L_0898DDC0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898DDDC;
      }
      goto L_0898DDD4;
    }
L_0898DDD4:
    ctx.set_gpr(31, 0x0898DDDCu);
    // nop
    goto L_0898DEB4;
L_0898DDDC:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32724)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898DDF4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0898DE0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x0898DE0Cu) goto L_0898DE0C;
    return;
L_0898DE0C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(26872));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(31, 0x0898DE30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0898DE30u) goto L_0898DE30;
    return;
L_0898DE30:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(26872));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898DE5C;
      }
      goto L_0898DE54;
    }
L_0898DE54:
    ctx.set_gpr(31, 0x0898DE5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0898DE5Cu) goto L_0898DE5C;
    return;
L_0898DE5C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898DE70;
      }
      goto L_0898DE68;
    }
L_0898DE68:
    ctx.set_gpr(31, 0x0898DE70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0898DE70u) goto L_0898DE70;
    return;
L_0898DE70:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898DE84;
      }
      goto L_0898DE7C;
    }
L_0898DE7C:
    ctx.set_gpr(31, 0x0898DE84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0898DE84u) goto L_0898DE84;
    return;
L_0898DE84:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15576));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x0898DE9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 764u, 0x08853094u>(ctx, &aot_mem) && ctx.pc == 0x0898DE9Cu) goto L_0898DE9C;
    return;
L_0898DE9C:
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
L_0898DEB4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2201u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-8484));
    ctx.set_gpr(31, 0x0898DECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x0898DECCu) goto L_0898DECC;
    return;
L_0898DECC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898DEDC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898DEECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 541u, 0x0898ABD8u>(ctx, &aot_mem) && ctx.pc == 0x0898DEECu) goto L_0898DEEC;
    return;
L_0898DEEC:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-8320));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-8028));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(30792));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32724));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-10116));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(16508));
    ctx.set_gpr(8, 2201u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-8352));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(30808));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(11, 2201u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-8716));
    ctx.set_gpr(31, 0x0898DF50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x0898DF50u) goto L_0898DF50;
    return;
L_0898DF50:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898DF60:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898DF70u);
    // nop
    goto L_0898DDA8;
L_0898DF70:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898DF80:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32724)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898DFA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x0898DFA8u) goto L_0898DFA8;
    return;
L_0898DFA8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(30824));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x0898DFC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x0898DFC4u) goto L_0898DFC4;
    return;
L_0898DFC4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0898DFD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898DFD4u) goto L_0898DFD4;
    return;
L_0898DFD4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0898DFE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 122u, 0x088ECA9Cu>(ctx, &aot_mem) && ctx.pc == 0x0898DFE0u) goto L_0898DFE0;
    return;
L_0898DFE0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898DFFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898DFFCu) goto L_0898DFFC;
    return;
L_0898DFFC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0898E008u);
    // nop
    goto L_0898D8C0;
L_0898E008:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898E01Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898E01Cu) goto L_0898E01C;
    return;
L_0898E01C:
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(31368)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(52), ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(30880));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(30892));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(30904));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0898E054u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0898E054u) goto L_0898E054;
    return;
L_0898E054:
    ctx.set_gpr(4, 2201u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-8060));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(32724)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
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
L_0898E084:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898E094u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 121u, 0x0899C9F8u>(ctx, &aot_mem) && ctx.pc == 0x0898E094u) goto L_0898E094;
    return;
L_0898E094:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898E0A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898E0B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 248u, 0x089B9680u>(ctx, &aot_mem) && ctx.pc == 0x0898E0B4u) goto L_0898E0B4;
    return;
L_0898E0B4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898E0C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32740)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898E0F0;
      }
      goto L_0898E0DC;
    }
L_0898E0DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898E0F8;
      }
      goto L_0898E0F0;
    }
L_0898E0F0:
    ctx.set_gpr(31, 0x0898E0F8u);
    // nop
    goto L_0898E154;
L_0898E0F8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32740)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898E110:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x0898E124u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x0898E124u) goto L_0898E124;
    return;
L_0898E124:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-29052));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0898E138u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0898E138u) goto L_0898E138;
    return;
L_0898E138:
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
L_0898E154:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2201u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-7812));
    ctx.set_gpr(31, 0x0898E16Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x0898E16Cu) goto L_0898E16C;
    return;
L_0898E16C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898E17C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898E18Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 541u, 0x0898ABD8u>(ctx, &aot_mem) && ctx.pc == 0x0898E18Cu) goto L_0898E18C;
    return;
L_0898E18C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(30916));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32740));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2201u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-7696));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(30924));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2201u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-7920));
    ctx.set_gpr(31, 0x0898E1E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x0898E1E0u) goto L_0898E1E0;
    return;
L_0898E1E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898E1F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898E200u);
    // nop
    goto L_0898E0C4;
L_0898E200:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898E210:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0898E228u);
    // nop
    goto L_0898E29C;
L_0898E228:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32744)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898E23Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x0898E23Cu) goto L_0898E23C;
    return;
L_0898E23C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898E250:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32744)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898E27C;
      }
      goto L_0898E268;
    }
L_0898E268:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898E284;
      }
      goto L_0898E27C;
    }
L_0898E27C:
    ctx.set_gpr(31, 0x0898E284u);
    // nop
    goto L_0898E29C;
L_0898E284:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32744)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898E29C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2201u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-7484));
    ctx.set_gpr(31, 0x0898E2B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x0898E2B4u) goto L_0898E2B4;
    return;
L_0898E2B4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898E2C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898E2D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 541u, 0x0898ABD8u>(ctx, &aot_mem) && ctx.pc == 0x0898E2D4u) goto L_0898E2D4;
    return;
L_0898E2D4:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-7308));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-6876));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(30944));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 2245u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(32744));
    ctx.set_gpr(6, 2201u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-6576));
    ctx.set_gpr(7, 2201u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-7324));
    ctx.set_gpr(8, 2201u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-7356));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(30952));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(48));
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x0898E334u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x0898E334u) goto L_0898E334;
    return;
L_0898E334:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898E344:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898E354u);
    // nop
    goto L_0898E250;
L_0898E354:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898E364:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32764)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898E374:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32744)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898E39Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x0898E39Cu) goto L_0898E39C;
    return;
L_0898E39C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(30972));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(31, 0x0898E3B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x0898E3B8u) goto L_0898E3B8;
    return;
L_0898E3B8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0898E3C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898E3C8u) goto L_0898E3C8;
    return;
L_0898E3C8:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    rt.memory().aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898E3E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898E3E0u) goto L_0898E3E0;
    return;
L_0898E3E0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0898E3ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 328u, 0x088D9B14u>(ctx, &aot_mem) && ctx.pc == 0x0898E3ECu) goto L_0898E3EC;
    return;
L_0898E3EC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898E410u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898E410u) goto L_0898E410;
    return;
L_0898E410:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0898E41Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 416u, 0x088DE2D0u>(ctx, &aot_mem) && ctx.pc == 0x0898E41Cu) goto L_0898E41C;
    return;
L_0898E41C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898E440u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898E440u) goto L_0898E440;
    return;
L_0898E440:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898E454u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898E454u) goto L_0898E454;
    return;
L_0898E454:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0898E460u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 328u, 0x088D9B14u>(ctx, &aot_mem) && ctx.pc == 0x0898E460u) goto L_0898E460;
    return;
L_0898E460:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898E484u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898E484u) goto L_0898E484;
    return;
L_0898E484:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0898E490u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 704u, 0x088DFA2Cu>(ctx, &aot_mem) && ctx.pc == 0x0898E490u) goto L_0898E490;
    return;
L_0898E490:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(31076));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(31100));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(31124));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0898E4D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0898E4D4u) goto L_0898E4D4;
    return;
L_0898E4D4:
    ctx.set_gpr(4, 2201u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-6908));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(32744)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
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
L_0898E504:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898E514u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 185u, 0x0899CFCCu>(ctx, &aot_mem) && ctx.pc == 0x0898E514u) goto L_0898E514;
    return;
L_0898E514:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898E524:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898E534u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 670u, 0x089B7E18u>(ctx, &aot_mem) && ctx.pc == 0x0898E534u) goto L_0898E534;
    return;
L_0898E534:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898E544:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0898E55Cu);
    // nop
    goto L_0898E628;
L_0898E55C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32764)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898E570u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x0898E570u) goto L_0898E570;
    return;
L_0898E570:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898E584:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32764)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898E5C4;
      }
      goto L_0898E59C;
    }
L_0898E59C:
    ctx.set_gpr(31, 0x0898E5A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x0898E5A4u) goto L_0898E5A4;
    return;
L_0898E5A4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0898E5B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x0898E5B0u) goto L_0898E5B0;
    return;
L_0898E5B0:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0898E5BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x0898E5BCu) goto L_0898E5BC;
    return;
L_0898E5BC:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-32764), ctx.gpr[2]);
    goto L_0898E5C4;
L_0898E5C4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32764)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898E5DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32764)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898E608;
      }
      goto L_0898E5F4;
    }
L_0898E5F4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898E610;
      }
      goto L_0898E608;
    }
L_0898E608:
    ctx.set_gpr(31, 0x0898E610u);
    // nop
    goto L_0898E628;
L_0898E610:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32764)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898E628:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2201u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-6576));
    ctx.set_gpr(31, 0x0898E640u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x0898E640u) goto L_0898E640;
    return;
L_0898E640:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898E650:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898E660u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 541u, 0x0898ABD8u>(ctx, &aot_mem) && ctx.pc == 0x0898E660u) goto L_0898E660;
    return;
L_0898E660:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-6432));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-32764));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2201u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-6464));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(31148));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x0898E6B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x0898E6B0u) goto L_0898E6B0;
    return;
L_0898E6B0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898E6C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898E6D0u);
    // nop
    goto L_0898E5DC;
L_0898E6D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898E6E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32764)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0898E708u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x0898E708u) goto L_0898E708;
    return;
L_0898E708:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(31164));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x0898E724u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x0898E724u) goto L_0898E724;
    return;
L_0898E724:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0898E734u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898E734u) goto L_0898E734;
    return;
L_0898E734:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0898E740u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 607u, 0x088DB204u>(ctx, &aot_mem) && ctx.pc == 0x0898E740u) goto L_0898E740;
    return;
L_0898E740:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(31220));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(31236));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(31252));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0898E770u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0898E770u) goto L_0898E770;
    return;
L_0898E770:
    ctx.set_gpr(4, 2201u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-6908));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-32764)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
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
L_0898E7A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32744)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898E7CC;
      }
      goto L_0898E7B8;
    }
L_0898E7B8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898E7D4;
      }
      goto L_0898E7CC;
    }
L_0898E7CC:
    ctx.set_gpr(31, 0x0898E7D4u);
    // nop
    goto L_0898E830;
L_0898E7D4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32744)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898E7EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x0898E800u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x0898E800u) goto L_0898E800;
    return;
L_0898E800:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-29156));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0898E814u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0898E814u) goto L_0898E814;
    return;
L_0898E814:
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
L_0898E830:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2201u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-6056));
    ctx.set_gpr(31, 0x0898E848u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x0898E848u) goto L_0898E848;
    return;
L_0898E848:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898E858:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898E868u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 541u, 0x0898ABD8u>(ctx, &aot_mem) && ctx.pc == 0x0898E868u) goto L_0898E868;
    return;
L_0898E868:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31268));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-32744));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2201u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-5940));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(31276));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2201u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-6164));
    ctx.set_gpr(31, 0x0898E8BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x0898E8BCu) goto L_0898E8BC;
    return;
L_0898E8BC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898E8CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898E8DCu);
    // nop
    goto L_0898E7A0;
L_0898E8DC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898E8EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32740)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898E918;
      }
      goto L_0898E904;
    }
L_0898E904:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898E920;
      }
      goto L_0898E918;
    }
L_0898E918:
    ctx.set_gpr(31, 0x0898E920u);
    // nop
    goto L_0898E938;
L_0898E920:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32740)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898E938:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2201u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-5792));
    ctx.set_gpr(31, 0x0898E950u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x0898E950u) goto L_0898E950;
    return;
L_0898E950:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898E960:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898E970u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 541u, 0x0898ABD8u>(ctx, &aot_mem) && ctx.pc == 0x0898E970u) goto L_0898E970;
    return;
L_0898E970:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-32740));
    ctx.set_gpr(6, 2192u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-26160));
    ctx.set_gpr(7, 2201u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-5656));
    ctx.set_gpr(8, 2201u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-5688));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(31296));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x0898E9B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x0898E9B8u) goto L_0898E9B8;
    return;
L_0898E9B8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898E9C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898E9D8u);
    // nop
    goto L_0898E8EC;
L_0898E9D8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898E9E8:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30100)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898E9F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0898EA10u);
    // nop
    goto L_0898EADC;
L_0898EA10:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32736)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898EA24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x0898EA24u) goto L_0898EA24;
    return;
L_0898EA24:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898EA38:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32736)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898EA78;
      }
      goto L_0898EA50;
    }
L_0898EA50:
    ctx.set_gpr(31, 0x0898EA58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x0898EA58u) goto L_0898EA58;
    return;
L_0898EA58:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0898EA64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x0898EA64u) goto L_0898EA64;
    return;
L_0898EA64:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0898EA70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x0898EA70u) goto L_0898EA70;
    return;
L_0898EA70:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-32736), ctx.gpr[2]);
    goto L_0898EA78;
L_0898EA78:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32736)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898EA90:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32736)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898EABC;
      }
      goto L_0898EAA8;
    }
L_0898EAA8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898EAC4;
      }
      goto L_0898EABC;
    }
L_0898EABC:
    ctx.set_gpr(31, 0x0898EAC4u);
    // nop
    goto L_0898EADC;
L_0898EAC4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32736)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898EADC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2201u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-5372));
    ctx.set_gpr(31, 0x0898EAF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x0898EAF4u) goto L_0898EAF4;
    return;
L_0898EAF4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898EB04:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898EB14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 541u, 0x0898ABD8u>(ctx, &aot_mem) && ctx.pc == 0x0898EB14u) goto L_0898EB14;
    return;
L_0898EB14:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5204));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31312));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-32736));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(16716));
    ctx.set_gpr(7, 2201u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-5220));
    ctx.set_gpr(8, 2201u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-5252));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(31320));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(72));
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x0898EB6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x0898EB6Cu) goto L_0898EB6C;
    return;
L_0898EB6C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898EB7C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898EB8Cu);
    // nop
    goto L_0898EA90;
L_0898EB8C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898EB9C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(27952)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898EBAC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32736)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0898EBD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x0898EBD4u) goto L_0898EBD4;
    return;
L_0898EBD4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(31340));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0898EBF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x0898EBF0u) goto L_0898EBF0;
    return;
L_0898EBF0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0898EC00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898EC00u) goto L_0898EC00;
    return;
L_0898EC00:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0898EC0Cu);
    // nop
    goto L_0898C4FC;
L_0898EC0C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(31344));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(31348));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(31352));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0898EC3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0898EC3Cu) goto L_0898EC3C;
    return;
L_0898EC3C:
    ctx.set_gpr(4, 2201u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-5012));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-32736)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
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
L_0898EC6C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898EC7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 212u, 0x0899D270u>(ctx, &aot_mem) && ctx.pc == 0x0898EC7Cu) goto L_0898EC7C;
    return;
L_0898EC7C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898EC8C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0898ECA4u);
    // nop
    goto L_0898ED18;
L_0898ECA4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32728)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898ECB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x0898ECB8u) goto L_0898ECB8;
    return;
L_0898ECB8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898ECCC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32728)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898ECF8;
      }
      goto L_0898ECE4;
    }
L_0898ECE4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898ED00;
      }
      goto L_0898ECF8;
    }
L_0898ECF8:
    ctx.set_gpr(31, 0x0898ED00u);
    // nop
    goto L_0898ED18;
L_0898ED00:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32728)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898ED18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2201u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-4800));
    ctx.set_gpr(31, 0x0898ED30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x0898ED30u) goto L_0898ED30;
    return;
L_0898ED30:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898ED40:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898ED50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 541u, 0x0898ABD8u>(ctx, &aot_mem) && ctx.pc == 0x0898ED50u) goto L_0898ED50;
    return;
L_0898ED50:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-32728));
    ctx.set_gpr(6, 2201u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-3136));
    ctx.set_gpr(7, 2201u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-4664));
    ctx.set_gpr(8, 2201u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-4696));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(31356));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x0898ED98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x0898ED98u) goto L_0898ED98;
    return;
L_0898ED98:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898EDA8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898EDB8u);
    // nop
    goto L_0898ECCC;
L_0898EDB8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898EDC8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32708)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898EDD8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0898EDF0u);
    // nop
    goto L_0898EED0;
L_0898EDF0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32724)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898EE04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x0898EE04u) goto L_0898EE04;
    return;
L_0898EE04:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898EE18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32724)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898EE44;
      }
      goto L_0898EE30;
    }
L_0898EE30:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898EE4C;
      }
      goto L_0898EE44;
    }
L_0898EE44:
    ctx.set_gpr(31, 0x0898EE4Cu);
    // nop
    goto L_0898EED0;
L_0898EE4C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32724)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898EE64:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0898EE7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x0898EE7Cu) goto L_0898EE7C;
    return;
L_0898EE7C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(27380));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0898EE94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0898EE94u) goto L_0898EE94;
    return;
L_0898EE94:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(27612));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x0898EEB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x0898EEB8u) goto L_0898EEB8;
    return;
L_0898EEB8:
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
L_0898EED0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2201u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-4360));
    ctx.set_gpr(31, 0x0898EEE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x0898EEE8u) goto L_0898EEE8;
    return;
L_0898EEE8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898EEF8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898EF08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 541u, 0x0898ABD8u>(ctx, &aot_mem) && ctx.pc == 0x0898EF08u) goto L_0898EF08;
    return;
L_0898EF08:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-32724));
    ctx.set_gpr(6, 2201u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-3660));
    ctx.set_gpr(7, 2201u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-4220));
    ctx.set_gpr(8, 2201u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-4252));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(31376));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(11, 2201u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-4508));
    ctx.set_gpr(31, 0x0898EF54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x0898EF54u) goto L_0898EF54;
    return;
L_0898EF54:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898EF64:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898EF74u);
    // nop
    goto L_0898EE18;
L_0898EF74:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898EF84:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32716)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898EF94:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0898EFACu);
    // nop
    goto L_0898F08C;
L_0898EFAC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32720)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898EFC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x0898EFC0u) goto L_0898EFC0;
    return;
L_0898EFC0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898EFD4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32720)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898F000;
      }
      goto L_0898EFEC;
    }
L_0898EFEC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898F008;
      }
      goto L_0898F000;
    }
L_0898F000:
    ctx.set_gpr(31, 0x0898F008u);
    // nop
    goto L_0898F08C;
L_0898F008:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32720)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898F020:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x0898F038u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x0898F038u) goto L_0898F038;
    return;
L_0898F038:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(27496));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0898F050u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0898F050u) goto L_0898F050;
    return;
L_0898F050:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(27612));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x0898F074u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x0898F074u) goto L_0898F074;
    return;
L_0898F074:
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
L_0898F08C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2201u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-3916));
    ctx.set_gpr(31, 0x0898F0A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x0898F0A4u) goto L_0898F0A4;
    return;
L_0898F0A4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898F0B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898F0C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 541u, 0x0898ABD8u>(ctx, &aot_mem) && ctx.pc == 0x0898F0C4u) goto L_0898F0C4;
    return;
L_0898F0C4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-32720));
    ctx.set_gpr(6, 2201u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-3660));
    ctx.set_gpr(7, 2201u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-4220));
    ctx.set_gpr(8, 2201u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-3808));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(31396));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(11, 2201u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-4064));
    ctx.set_gpr(31, 0x0898F110u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x0898F110u) goto L_0898F110;
    return;
L_0898F110:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898F120:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898F130u);
    // nop
    goto L_0898EFD4;
L_0898F130:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898F140:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32716)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898F16C;
      }
      goto L_0898F158;
    }
L_0898F158:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898F174;
      }
      goto L_0898F16C;
    }
L_0898F16C:
    ctx.set_gpr(31, 0x0898F174u);
    // nop
    goto L_0898F18C;
L_0898F174:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32716)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898F18C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2201u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-3660));
    ctx.set_gpr(31, 0x0898F1A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x0898F1A4u) goto L_0898F1A4;
    return;
L_0898F1A4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898F1B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898F1C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 541u, 0x0898ABD8u>(ctx, &aot_mem) && ctx.pc == 0x0898F1C4u) goto L_0898F1C4;
    return;
L_0898F1C4:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-3500));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-3316));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31416));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-32716));
    ctx.set_gpr(6, 2201u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-3136));
    ctx.set_gpr(7, 2201u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-4664));
    ctx.set_gpr(8, 2201u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-3532));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(31424));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x0898F224u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x0898F224u) goto L_0898F224;
    return;
L_0898F224:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898F234:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898F244u);
    // nop
    goto L_0898F140;
L_0898F244:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898F254:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32716)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0898F27Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x0898F27Cu) goto L_0898F27C;
    return;
L_0898F27C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(31448));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x0898F298u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x0898F298u) goto L_0898F298;
    return;
L_0898F298:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0898F2A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898F2A8u) goto L_0898F2A8;
    return;
L_0898F2A8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0898F2B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 432u, 0x0899258Cu>(ctx, &aot_mem) && ctx.pc == 0x0898F2B4u) goto L_0898F2B4;
    return;
L_0898F2B4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(31468));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(31472));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(31476));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x0898F2E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0898F2E0u) goto L_0898F2E0;
    return;
L_0898F2E0:
    ctx.set_gpr(4, 2201u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-3284));
    ctx.set_gpr(31, 0x0898F2F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 237u, 0x089451B8u>(ctx, &aot_mem) && ctx.pc == 0x0898F2F0u) goto L_0898F2F0;
    return;
L_0898F2F0:
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
L_0898F30C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898F31Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 584u, 0x089B76D0u>(ctx, &aot_mem) && ctx.pc == 0x0898F31Cu) goto L_0898F31C;
    return;
L_0898F31C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898F32C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898F33Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 597u, 0x089B77A0u>(ctx, &aot_mem) && ctx.pc == 0x0898F33Cu) goto L_0898F33C;
    return;
L_0898F33C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898F34C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32708)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898F378;
      }
      goto L_0898F364;
    }
L_0898F364:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898F380;
      }
      goto L_0898F378;
    }
L_0898F378:
    ctx.set_gpr(31, 0x0898F380u);
    // nop
    goto L_0898F398;
L_0898F380:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32708)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898F398:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2201u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-3136));
    ctx.set_gpr(31, 0x0898F3B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x0898F3B0u) goto L_0898F3B0;
    return;
L_0898F3B0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898F3C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898F3D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 541u, 0x0898ABD8u>(ctx, &aot_mem) && ctx.pc == 0x0898F3D0u) goto L_0898F3D0;
    return;
L_0898F3D0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-32708));
    ctx.set_gpr(6, 2190u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(17664));
    ctx.set_gpr(7, 2201u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-3000));
    ctx.set_gpr(8, 2201u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-3032));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(31480));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x0898F418u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x0898F418u) goto L_0898F418;
    return;
L_0898F418:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898F428:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898F438u);
    // nop
    goto L_0898F34C;
L_0898F438:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898F448:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28016)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898F458:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0898F470u);
    // nop
    goto L_0898F5FC;
L_0898F470:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32704)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898F484u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x0898F484u) goto L_0898F484;
    return;
L_0898F484:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898F498:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32704)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898F4D8;
      }
      goto L_0898F4B0;
    }
L_0898F4B0:
    ctx.set_gpr(31, 0x0898F4B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x0898F4B8u) goto L_0898F4B8;
    return;
L_0898F4B8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0898F4C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x0898F4C4u) goto L_0898F4C4;
    return;
L_0898F4C4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0898F4D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x0898F4D0u) goto L_0898F4D0;
    return;
L_0898F4D0:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-32704), ctx.gpr[2]);
    goto L_0898F4D8;
L_0898F4D8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32704)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898F4F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32704)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898F51C;
      }
      goto L_0898F508;
    }
L_0898F508:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898F524;
      }
      goto L_0898F51C;
    }
L_0898F51C:
    ctx.set_gpr(31, 0x0898F524u);
    // nop
    goto L_0898F5FC;
L_0898F524:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32704)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898F53C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0898F554u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x0898F554u) goto L_0898F554;
    return;
L_0898F554:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(27728));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.set_gpr(31, 0x0898F578u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0898F578u) goto L_0898F578;
    return;
L_0898F578:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(27728));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898F5A4;
      }
      goto L_0898F59C;
    }
L_0898F59C:
    ctx.set_gpr(31, 0x0898F5A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0898F5A4u) goto L_0898F5A4;
    return;
L_0898F5A4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898F5B8;
      }
      goto L_0898F5B0;
    }
L_0898F5B0:
    ctx.set_gpr(31, 0x0898F5B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0898F5B8u) goto L_0898F5B8;
    return;
L_0898F5B8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898F5CC;
      }
      goto L_0898F5C4;
    }
L_0898F5C4:
    ctx.set_gpr(31, 0x0898F5CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x0898F5CCu) goto L_0898F5CC;
    return;
L_0898F5CC:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15576));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x0898F5E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 764u, 0x08853094u>(ctx, &aot_mem) && ctx.pc == 0x0898F5E4u) goto L_0898F5E4;
    return;
L_0898F5E4:
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
L_0898F5FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2201u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-2524));
    ctx.set_gpr(31, 0x0898F614u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x0898F614u) goto L_0898F614;
    return;
L_0898F614:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898F624:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898F634u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 541u, 0x0898ABD8u>(ctx, &aot_mem) && ctx.pc == 0x0898F634u) goto L_0898F634;
    return;
L_0898F634:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2368));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31496));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-32704));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-10116));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(16508));
    ctx.set_gpr(8, 2201u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-2400));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(31512));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(40));
    ctx.set_gpr(11, 2201u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-2756));
    ctx.set_gpr(31, 0x0898F690u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x0898F690u) goto L_0898F690;
    return;
L_0898F690:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898F6A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898F6B0u);
    // nop
    goto L_0898F4F0;
L_0898F6B0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898F6C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32704)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898F6E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x0898F6E8u) goto L_0898F6E8;
    return;
L_0898F6E8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(31528));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(31, 0x0898F704u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x0898F704u) goto L_0898F704;
    return;
L_0898F704:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0898F714u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898F714u) goto L_0898F714;
    return;
L_0898F714:
    ctx.set_gpr(3, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0898F728u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 643u, 0x0891EEE0u>(ctx, &aot_mem) && ctx.pc == 0x0898F728u) goto L_0898F728;
    return;
L_0898F728:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898F738u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898F738u) goto L_0898F738;
    return;
L_0898F738:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(31740));
    ctx.set_gpr(31, 0x0898F750u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x0898F750u) goto L_0898F750;
    return;
L_0898F750:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-17636));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898F76Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898F76Cu) goto L_0898F76C;
    return;
L_0898F76C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0898F778u);
    // nop
    goto L_0898DD50;
L_0898F778:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898F78Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898F78Cu) goto L_0898F78C;
    return;
L_0898F78C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0898F798u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 371u, 0x08992004u>(ctx, &aot_mem) && ctx.pc == 0x0898F798u) goto L_0898F798;
    return;
L_0898F798:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898F7ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898F7ACu) goto L_0898F7AC;
    return;
L_0898F7AC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(31744));
    ctx.set_gpr(31, 0x0898F7C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 457u, 0x08915924u>(ctx, &aot_mem) && ctx.pc == 0x0898F7C4u) goto L_0898F7C4;
    return;
L_0898F7C4:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-20212));
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898F7E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x0898F7E0u) goto L_0898F7E0;
    return;
L_0898F7E0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0898F7ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 204u, 0x089F5114u>(ctx, &aot_mem) && ctx.pc == 0x0898F7ECu) goto L_0898F7EC;
    return;
L_0898F7EC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(31656));
    ctx.set_gpr(6, 2228u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(31684));
    ctx.set_gpr(7, 2228u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(31712));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0898F824u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0898F824u) goto L_0898F824;
    return;
L_0898F824:
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
L_0898F840:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32672)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898F86C;
      }
      goto L_0898F858;
    }
L_0898F858:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898F874;
      }
      goto L_0898F86C;
    }
L_0898F86C:
    ctx.set_gpr(31, 0x0898F874u);
    // nop
    goto L_0898F8D0;
L_0898F874:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32672)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898F88C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x0898F8A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x0898F8A0u) goto L_0898F8A0;
    return;
L_0898F8A0:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-29260));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0898F8B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0898F8B4u) goto L_0898F8B4;
    return;
L_0898F8B4:
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
L_0898F8D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2201u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1800));
    ctx.set_gpr(31, 0x0898F8E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x0898F8E8u) goto L_0898F8E8;
    return;
L_0898F8E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898F8F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898F908u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 541u, 0x0898ABD8u>(ctx, &aot_mem) && ctx.pc == 0x0898F908u) goto L_0898F908;
    return;
L_0898F908:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2228u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(31748));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-32672));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2201u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-1684));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(31756));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2201u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-1908));
    ctx.set_gpr(31, 0x0898F95Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x0898F95Cu) goto L_0898F95C;
    return;
L_0898F95C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898F96C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898F97Cu);
    // nop
    goto L_0898F840;
L_0898F97C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898F98C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32668)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898F9CC;
      }
      goto L_0898F9A4;
    }
L_0898F9A4:
    ctx.set_gpr(31, 0x0898F9ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x0898F9ACu) goto L_0898F9AC;
    return;
L_0898F9AC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0898F9B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x0898F9B8u) goto L_0898F9B8;
    return;
L_0898F9B8:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0898F9C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x0898F9C4u) goto L_0898F9C4;
    return;
L_0898F9C4:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-32668), ctx.gpr[2]);
    goto L_0898F9CC;
L_0898F9CC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32668)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898F9E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32668)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898FA10;
      }
      goto L_0898F9FC;
    }
L_0898F9FC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898FA18;
      }
      goto L_0898FA10;
    }
L_0898FA10:
    ctx.set_gpr(31, 0x0898FA18u);
    // nop
    goto L_0898FA30;
L_0898FA18:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32668)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898FA30:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2201u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1448));
    ctx.set_gpr(31, 0x0898FA48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x0898FA48u) goto L_0898FA48;
    return;
L_0898FA48:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898FA58:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898FA68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 541u, 0x0898ABD8u>(ctx, &aot_mem) && ctx.pc == 0x0898FA68u) goto L_0898FA68;
    return;
L_0898FA68:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-32668));
    ctx.set_gpr(6, 2192u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-26160));
    ctx.set_gpr(7, 2201u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-5656));
    ctx.set_gpr(8, 2201u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-1344));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(31776));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x0898FAB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x0898FAB0u) goto L_0898FAB0;
    return;
L_0898FAB0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898FAC0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898FAD0u);
    // nop
    goto L_0898F9E4;
L_0898FAD0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898FAE0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32664)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898FB0C;
      }
      goto L_0898FAF8;
    }
L_0898FAF8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898FB14;
      }
      goto L_0898FB0C;
    }
L_0898FB0C:
    ctx.set_gpr(31, 0x0898FB14u);
    // nop
    goto L_0898FB70;
L_0898FB14:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32664)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898FB2C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x0898FB40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x0898FB40u) goto L_0898FB40;
    return;
L_0898FB40:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(27864));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0898FB54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0898FB54u) goto L_0898FB54;
    return;
L_0898FB54:
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
L_0898FB70:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2201u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-1128));
    ctx.set_gpr(31, 0x0898FB88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x0898FB88u) goto L_0898FB88;
    return;
L_0898FB88:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898FB98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898FBA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 541u, 0x0898ABD8u>(ctx, &aot_mem) && ctx.pc == 0x0898FBA8u) goto L_0898FBA8;
    return;
L_0898FBA8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-980));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-32664));
    ctx.set_gpr(6, 2202u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-26836));
    ctx.set_gpr(7, 2201u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-17120));
    ctx.set_gpr(8, 2201u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-1012));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(31792));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(11, 2201u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-1236));
    ctx.set_gpr(31, 0x0898FBFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x0898FBFCu) goto L_0898FBFC;
    return;
L_0898FBFC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898FC0C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898FC1Cu);
    // nop
    goto L_0898FAE0;
L_0898FC1C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898FC2C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898FC3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 188u, 0x089B531Cu>(ctx, &aot_mem) && ctx.pc == 0x0898FC3Cu) goto L_0898FC3C;
    return;
L_0898FC3C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898FC4C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32660)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898FC78;
      }
      goto L_0898FC64;
    }
L_0898FC64:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898FC80;
      }
      goto L_0898FC78;
    }
L_0898FC78:
    ctx.set_gpr(31, 0x0898FC80u);
    // nop
    goto L_0898FCDC;
L_0898FC80:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32660)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898FC98:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x0898FCACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x0898FCACu) goto L_0898FCAC;
    return;
L_0898FCAC:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(27964));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x0898FCC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x0898FCC0u) goto L_0898FCC0;
    return;
L_0898FCC0:
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
L_0898FCDC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2201u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-764));
    ctx.set_gpr(31, 0x0898FCF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x0898FCF4u) goto L_0898FCF4;
    return;
L_0898FCF4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898FD04:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898FD14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 541u, 0x0898ABD8u>(ctx, &aot_mem) && ctx.pc == 0x0898FD14u) goto L_0898FD14;
    return;
L_0898FD14:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-600));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-32660));
    ctx.set_gpr(6, 2201u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-84));
    ctx.set_gpr(7, 2201u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-616));
    ctx.set_gpr(8, 2201u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-648));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(31816));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2201u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-872));
    ctx.set_gpr(31, 0x0898FD68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x0898FD68u) goto L_0898FD68;
    return;
L_0898FD68:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898FD78:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898FD88u);
    // nop
    goto L_0898FC4C;
L_0898FD88:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898FD98:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32652)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898FDA8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32660)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(31840));
    ctx.set_gpr(31, 0x0898FDD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x0898FDD8u) goto L_0898FDD8;
    return;
L_0898FDD8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898FDECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 700u, 0x08927138u>(ctx, &aot_mem) && ctx.pc == 0x0898FDECu) goto L_0898FDEC;
    return;
L_0898FDEC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0898FE08u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0898FE08u) goto L_0898FE08;
    return;
L_0898FE08:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0898FE14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 503u, 0x088DE9D8u>(ctx, &aot_mem) && ctx.pc == 0x0898FE14u) goto L_0898FE14;
    return;
L_0898FE14:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x0898FE2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 68u, 0x08940534u>(ctx, &aot_mem) && ctx.pc == 0x0898FE2Cu) goto L_0898FE2C;
    return;
L_0898FE2C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(61), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-32656));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898FE5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 145u, 0x08944AF0u>(ctx, &aot_mem) && ctx.pc == 0x0898FE5Cu) goto L_0898FE5C;
    return;
L_0898FE5C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898FE84;
      }
      goto L_0898FE78;
    }
L_0898FE78:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898FE84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x0898FE84u) goto L_0898FE84;
    return;
L_0898FE84:
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
L_0898FEA0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x0898FEB8u);
    // nop
    goto L_0898FF84;
L_0898FEB8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32652)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x0898FECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x0898FECCu) goto L_0898FECC;
    return;
L_0898FECC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898FEE0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32652)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898FF20;
      }
      goto L_0898FEF8;
    }
L_0898FEF8:
    ctx.set_gpr(31, 0x0898FF00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x0898FF00u) goto L_0898FF00;
    return;
L_0898FF00:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x0898FF0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x0898FF0Cu) goto L_0898FF0C;
    return;
L_0898FF0C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x0898FF18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x0898FF18u) goto L_0898FF18;
    return;
L_0898FF18:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-32652), ctx.gpr[2]);
    goto L_0898FF20;
L_0898FF20:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32652)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898FF38:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32652)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898FF64;
      }
      goto L_0898FF50;
    }
L_0898FF50:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898FF6C;
      }
      goto L_0898FF64;
    }
L_0898FF64:
    ctx.set_gpr(31, 0x0898FF6Cu);
    // nop
    goto L_0898FF84;
L_0898FF6C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-32652)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898FF84:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2201u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-84));
    ctx.set_gpr(31, 0x0898FF9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x0898FF9Cu) goto L_0898FF9C;
    return;
L_0898FF9C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898FFAC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x0898FFBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 541u, 0x0898ABD8u>(ctx, &aot_mem) && ctx.pc == 0x0898FFBCu) goto L_0898FFBC;
    return;
L_0898FFBC:
    ctx.set_gpr(2, 2201u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(60));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-32652));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2201u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(31852));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.pc = 0x08990000u; return;
}

void recomp_unit_0098(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0098_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_98(Runtime &runtime) {
    runtime.register_generated_unit(98u, 0x0898C000u, 16384u, &recomp_unit_0098, &recomp_unit_0098_entry);
    runtime.register_function(0x0898C000u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C008u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C018u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C028u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C040u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C054u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C068u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C080u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C094u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C09Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C0B4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C0CCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C0E4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C108u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C110u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C128u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C140u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C150u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C160u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C1BCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C1CCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C1DCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C1ECu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C214u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C230u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C240u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C24Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C27Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C298u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C2B0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C2C4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C2CCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C2E4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C2F8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C30Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C328u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C340u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C350u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C360u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C3B4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C3C4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C3D4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C3E4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C414u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C428u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C444u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C450u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C478u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C494u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C4A0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C4BCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C4D4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C4E8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C4FCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C514u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C51Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C528u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C534u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C53Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C554u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C56Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C580u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C588u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C5A0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C5B8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C5C8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C5D8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C630u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C640u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C650u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C660u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C688u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C6A4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C6B4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C6C4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C6D4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C6E0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C6FCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C710u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C724u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C730u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C758u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C76Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C780u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C794u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C7A8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C7C0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C7D4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C7ECu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C808u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C81Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C830u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C844u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C858u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C86Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C880u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C894u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C8A8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C8B4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C8D4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C8E0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C900u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C90Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C92Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C940u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C94Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C960u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C96Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C980u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C98Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C9A0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C9ACu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C9C0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C9CCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C9E0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C9ECu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CA00u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CA0Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CA20u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CA2Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CA40u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CA4Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CA64u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CA70u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CA8Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CA98u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CAB4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CAC4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CAD4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CAE4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CAF4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CB04u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CB14u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CB20u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CB34u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CB40u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CB6Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CB9Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CBACu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CBBCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CBD4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CBE8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CBFCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CC14u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CC28u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CC30u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CC48u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CC5Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CC70u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CC8Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CCA4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CCB4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CCC4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CD18u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CD28u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CD38u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CD48u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CD60u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CD74u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CD88u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CDA0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CDB4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CDBCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CDD4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CDECu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CE08u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CE2Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CE34u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CE4Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CE64u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CE7Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CE8Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CE9Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CEF8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CF08u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CF18u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CF28u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CF50u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CF6Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CF7Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CF88u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CFB4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CFD0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CFE8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CFFCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D004u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D01Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D030u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D044u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D060u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D078u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D088u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D098u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D0ECu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D0FCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D10Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D11Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D12Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D13Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D154u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D168u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D170u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D188u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D19Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D1B0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D1CCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D1E4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D1F4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D204u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D258u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D268u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D278u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D288u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D298u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D2A8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D2B8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D2D0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D2E4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D2F8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D310u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D324u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D32Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D344u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D35Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D378u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D39Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D3A4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D3BCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D3D4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D3ECu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D3FCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D40Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D468u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D478u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D488u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D498u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D4C0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D4DCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D4ECu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D4F8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D50Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D524u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D540u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D550u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D560u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D584u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D594u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D5B4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D5C4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D5D4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D5E4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D5F8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D624u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D640u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D658u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D67Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D684u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D69Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D6B4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D6C8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D6DCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D6F4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D6FCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D708u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D714u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D71Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D734u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D74Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D760u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D768u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D780u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D794u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D7A8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D7C4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D7DCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D7ECu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D7FCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D850u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D860u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D870u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D880u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D898u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D8ACu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D8C0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D8D8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D8E0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D8ECu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D8F8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D900u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D918u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D930u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D944u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D94Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D964u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D97Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D998u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D9BCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D9C4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D9DCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D9F4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DA0Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DA1Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DA2Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DA88u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DA98u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DAA8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DAB8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DAE0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DAFCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DB0Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DB20u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DB34u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DB40u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DB54u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DB6Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DB88u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DBA0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DBBCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DBD4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DC08u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DC38u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DC48u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DC58u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DC70u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DC94u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DC9Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DCB4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DCCCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DCF0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DCF8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DD10u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DD28u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DD3Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DD50u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DD68u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DD70u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DD7Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DD88u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DD90u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DDA8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DDC0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DDD4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DDDCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DDF4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DE0Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DE30u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DE54u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DE5Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DE68u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DE70u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DE7Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DE84u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DE9Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DEB4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DECCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DEDCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DEECu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DF50u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DF60u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DF70u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DF80u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DFA8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DFC4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DFD4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DFE0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DFFCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E008u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E01Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E054u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E084u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E094u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E0A4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E0B4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E0C4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E0DCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E0F0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E0F8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E110u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E124u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E138u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E154u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E16Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E17Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E18Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E1E0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E1F0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E200u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E210u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E228u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E23Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E250u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E268u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E27Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E284u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E29Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E2B4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E2C4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E2D4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E334u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E344u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E354u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E364u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E374u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E39Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E3B8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E3C8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E3E0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E3ECu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E410u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E41Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E440u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E454u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E460u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E484u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E490u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E4D4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E504u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E514u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E524u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E534u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E544u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E55Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E570u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E584u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E59Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E5A4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E5B0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E5BCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E5C4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E5DCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E5F4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E608u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E610u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E628u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E640u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E650u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E660u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E6B0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E6C0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E6D0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E6E0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E708u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E724u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E734u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E740u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E770u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E7A0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E7B8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E7CCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E7D4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E7ECu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E800u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E814u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E830u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E848u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E858u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E868u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E8BCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E8CCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E8DCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E8ECu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E904u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E918u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E920u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E938u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E950u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E960u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E970u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E9B8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E9C8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E9D8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E9E8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E9F8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EA10u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EA24u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EA38u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EA50u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EA58u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EA64u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EA70u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EA78u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EA90u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EAA8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EABCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EAC4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EADCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EAF4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EB04u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EB14u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EB6Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EB7Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EB8Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EB9Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EBACu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EBD4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EBF0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EC00u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EC0Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EC3Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EC6Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EC7Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EC8Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898ECA4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898ECB8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898ECCCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898ECE4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898ECF8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898ED00u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898ED18u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898ED30u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898ED40u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898ED50u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898ED98u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EDA8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EDB8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EDC8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EDD8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EDF0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EE04u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EE18u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EE30u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EE44u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EE4Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EE64u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EE7Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EE94u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EEB8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EED0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EEE8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EEF8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EF08u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EF54u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EF64u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EF74u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EF84u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EF94u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EFACu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EFC0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EFD4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EFECu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F000u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F008u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F020u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F038u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F050u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F074u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F08Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F0A4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F0B4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F0C4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F110u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F120u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F130u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F140u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F158u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F16Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F174u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F18Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F1A4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F1B4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F1C4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F224u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F234u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F244u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F254u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F27Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F298u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F2A8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F2B4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F2E0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F2F0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F30Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F31Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F32Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F33Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F34Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F364u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F378u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F380u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F398u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F3B0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F3C0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F3D0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F418u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F428u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F438u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F448u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F458u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F470u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F484u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F498u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F4B0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F4B8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F4C4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F4D0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F4D8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F4F0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F508u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F51Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F524u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F53Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F554u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F578u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F59Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F5A4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F5B0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F5B8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F5C4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F5CCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F5E4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F5FCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F614u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F624u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F634u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F690u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F6A0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F6B0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F6C0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F6E8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F704u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F714u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F728u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F738u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F750u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F76Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F778u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F78Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F798u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F7ACu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F7C4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F7E0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F7ECu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F824u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F840u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F858u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F86Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F874u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F88Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F8A0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F8B4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F8D0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F8E8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F8F8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F908u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F95Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F96Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F97Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F98Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F9A4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F9ACu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F9B8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F9C4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F9CCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F9E4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F9FCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FA10u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FA18u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FA30u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FA48u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FA58u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FA68u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FAB0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FAC0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FAD0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FAE0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FAF8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FB0Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FB14u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FB2Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FB40u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FB54u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FB70u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FB88u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FB98u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FBA8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FBFCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FC0Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FC1Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FC2Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FC3Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FC4Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FC64u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FC78u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FC80u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FC98u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FCACu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FCC0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FCDCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FCF4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FD04u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FD14u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FD68u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FD78u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FD88u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FD98u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FDA8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FDD8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FDECu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FE08u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FE14u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FE2Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FE5Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FE78u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FE84u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FEA0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FEB8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FECCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FEE0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FEF8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FF00u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FF0Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FF18u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FF20u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FF38u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FF50u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FF64u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FF6Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FF84u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FF9Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FFACu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FFBCu, &recomp_unit_0098, "recomp_unit_0098");
}
} // namespace psprecomp
