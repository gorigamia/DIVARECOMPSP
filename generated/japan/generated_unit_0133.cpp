#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0133[4091] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0,
    5, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0,
    0, 10, 0, 0, 0, 0, 0, 11, 0, 12, 0, 0, 13, 0, 0, 14, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0,
    0, 0, 18, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0,
    0, 23, 0, 24, 0, 0, 25, 0, 26, 0, 0, 27, 0, 28, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0,
    0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0,
    35, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 40, 0, 0, 0,
    0, 41, 0, 0, 42, 0, 0, 0, 0, 0, 0, 43, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0,
    0, 0, 46, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 48, 0, 49, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 54, 0, 0, 55, 0, 56, 0, 0, 57, 0, 58, 0, 0, 59, 0,
    60, 0, 0, 61, 0, 62, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 0, 0, 67,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0,
    70, 0, 0, 0, 71, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 75, 0, 0,
    76, 0, 0, 0, 0, 0, 0, 77, 0, 0, 78, 0, 0, 0, 0, 0, 0, 79, 0, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 82,
    0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 92, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0,
    0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 100, 0, 101, 0,
    0, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107,
    0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 111, 0,
    0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 114, 0, 0, 115, 0, 0, 116, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 119, 0,
    0, 0, 0, 120, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0,
    0, 0, 0, 0, 0, 125, 0, 126, 0, 0, 127, 0, 128, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130, 0, 0, 0, 0, 0, 131,
    0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0,
    0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 0, 0, 0, 140,
    0, 0, 0, 141, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0,
    0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0,
    0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0,
    0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0,
    0, 160, 0, 0, 0, 161, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0,
    0, 165, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 170, 0, 0,
    0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176, 0, 0, 0,
    0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186,
    0, 0, 0, 187, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 193, 0,
    0, 0, 0, 194, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 202, 0, 0, 203, 0, 204, 0, 0, 205,
    0, 206, 0, 0, 207, 0, 208, 0, 0, 0, 209, 0, 0, 210, 0, 211, 0, 212, 0, 0, 0, 213, 0, 0, 214, 0, 215, 0, 0, 216, 0, 217,
    0, 0, 0, 218, 0, 0, 219, 0, 220, 0, 221, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0,
    0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 0, 0, 240, 0, 0, 0, 0,
    0, 241, 0, 0, 242, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 247, 0,
    0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 250, 0, 0, 0, 0, 0, 251, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 253, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 256, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0,
    259, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 0, 263, 0, 0, 0, 264, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 268, 0, 0, 0, 0,
    0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0,
    0, 273, 0, 274, 0, 0, 275, 0, 0, 276, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 281, 0,
    0, 0, 0, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 286, 0, 0, 0, 287,
    0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0,
    291, 0, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 294, 0, 295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 297, 0, 0,
    0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 300, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0,
    0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0,
    0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 312, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 316, 0, 317, 0,
    0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 322, 0, 0,
    0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0, 331, 0, 0, 0, 332, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 335, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 337, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 342,
    0, 343, 0, 0, 344, 0, 0, 345, 0, 346, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 349, 0, 350, 0, 0, 0,
    0, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 355, 0, 0, 0,
    0, 0, 356, 0, 0, 357, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0,
    362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 364, 0, 0, 0, 365,
    0, 0, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 369, 0, 0, 370, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 374,
    0, 375, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 380, 0,
    0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 382, 0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389,
    0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 394, 0, 0,
    0, 395, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 399, 0, 400,
    0, 0, 401, 0, 0, 402, 0, 403, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 406, 0, 407, 0, 0, 0, 0, 0,
    408, 0, 0, 0, 0, 409, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 412, 0, 0, 0, 413, 0, 0, 0, 414,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 416, 0, 0, 0, 417, 0, 0, 0,
    418, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 420, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 422, 0, 423, 0, 0, 424, 0, 0, 425, 0,
    426, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 429, 0, 430, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 432,
    0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 435, 0, 0, 436, 0, 437, 0, 0, 0, 0, 0, 438, 0,
    0, 0, 439, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 441, 0, 0, 0, 442, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 445, 0, 0, 0, 446, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 450, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0,
    0, 453, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 455, 0, 0, 456, 0, 0, 0, 457, 0, 0, 458, 0, 0, 0, 0, 0,
    459, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 463,
    0, 464, 0, 0, 465, 0, 0, 466, 0, 467, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 470, 0, 471, 0, 0, 0,
    0, 0, 472, 0, 0, 0, 0, 473, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 476, 0, 0, 0, 477, 0, 0,
    0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 480, 0, 0, 0, 481, 0,
    0, 0, 482, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 484, 0, 485, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0,
    0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 490, 0, 0, 0, 491, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 493,
    0, 0, 0, 494, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 497, 0,
    0, 0, 498, 0, 0, 0, 499, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 501, 0, 502, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0,
    504, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 508, 0, 0, 509, 0, 510, 0, 0,
    511, 0, 512, 0, 0, 513, 0, 514, 0, 0, 515, 0, 516, 0, 0, 0, 517, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 519, 0,
    0, 0, 0, 0, 520, 0, 0, 521, 0, 522, 0, 0, 523, 0, 0, 524, 0, 525, 0, 0, 526, 0, 0, 527, 0, 528, 0, 0, 529, 0, 0, 530,
    0, 531, 0, 0, 532, 0, 0, 533, 0, 534, 0, 0, 535, 0, 0, 536, 0, 537, 0, 0, 538, 0, 0, 539, 0, 540, 0, 0, 541, 0, 0, 542,
    0, 543, 0, 0, 544, 0, 0, 545, 0, 546, 0, 0, 547, 0, 0, 548, 0, 549, 0, 0, 550, 0, 0, 551, 0, 552, 0, 0, 553, 0, 0, 554,
    0, 555, 0, 0, 556, 0, 0, 557, 0, 558, 0, 0, 559, 0, 0, 560, 0, 561, 0, 0, 562, 0, 0, 563, 0, 564, 0, 0, 565, 0, 0, 566,
    0, 567, 0, 0, 568, 0, 0, 569, 0, 570, 0, 0, 571, 0, 0, 572, 0, 573, 0, 0, 574, 0, 0, 575, 0, 576, 0, 0, 577, 0, 0, 578,
    0, 579, 0, 0, 580, 0, 0, 581, 0, 582, 0, 0, 583, 0, 0, 584, 0, 585, 0, 0, 586, 0, 0, 587, 0, 588, 0, 0, 589, 0, 0, 590,
    0, 591, 0, 0, 592, 0, 0, 593, 0, 594, 0, 0, 595, 0, 0, 596, 0, 597, 0, 598, 0, 0, 0, 0, 0, 599, 0, 0, 600, 0, 601, 0,
    0, 602, 0, 0, 603, 0, 0, 0, 0, 0, 0, 604, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 606, 0, 0, 607, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 608, 0, 0, 0, 609, 0, 0,
    610, 0, 0, 0, 0, 0, 0, 611, 0, 0, 0, 0, 0, 612, 0, 0, 0, 613, 0, 0, 0, 614, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 615, 0, 0, 0, 616, 0, 0, 0, 617, 0, 0, 0, 618, 0, 0, 0, 619, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 0, 621, 0, 0, 0, 622, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 623, 0, 0, 0, 624, 0, 0, 0, 625, 0, 0, 0, 626, 0, 0, 0, 627, 0, 0, 0, 628, 0, 0,
    629, 0, 0, 0, 0, 0, 0, 630, 0, 0, 0, 0, 631, 0, 0, 0, 632, 0, 0, 0, 0, 633, 0, 0, 0, 634, 0, 0, 635, 0, 0, 0,
    0, 0, 0, 636, 0, 0, 637, 0, 0, 0, 0, 0, 0, 638, 0, 0, 0, 639, 0, 0, 0, 640, 0, 0, 641, 0, 0, 0, 0, 0, 0, 642,
    0, 0, 643, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 644, 0, 0, 0, 645, 0, 0, 0, 0, 0, 0, 646, 0, 0, 0, 647, 0,
    0, 0, 648, 0, 0, 0, 649, 0, 0, 0, 650, 0, 0, 0, 651, 0, 0, 0, 0, 0, 652, 0, 0, 0, 0, 653, 0, 654, 0, 0, 0, 0,
    0, 655, 0, 0, 0, 0, 0, 656, 0, 0, 0, 657, 0, 0, 0, 658, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 659, 0, 0, 0, 660, 0, 0, 0, 661, 0, 0, 0, 662, 0, 0, 0, 0, 0, 0, 0, 0, 0, 663, 0, 0, 0, 0,
    0, 0, 664, 0, 0, 0, 665, 0, 0, 666, 0, 0, 0, 0, 667, 0, 0, 668, 0, 0, 0, 0, 669, 0, 0, 0, 0, 670, 0, 0, 0, 671,
    0, 0, 672, 0, 0, 0, 0, 673, 0, 0, 0, 0, 674, 0, 0, 675, 0, 0, 0, 0, 0, 0, 0, 676, 0, 0, 677, 0, 0, 0, 0, 0,
    0, 0, 678, 0, 0, 0, 0, 679, 0, 0, 0, 0, 680, 0, 0, 681, 0, 0, 0, 0, 0, 682, 0, 0, 683, 0, 0, 0, 0, 0, 684, 0,
    0, 685, 0, 0, 0, 0, 0, 686, 0, 0, 687, 0, 0, 0, 0, 0, 688, 0, 0, 689, 0, 0, 0, 0, 0, 690, 0, 0, 691, 0, 0, 0,
    0, 0, 692, 0, 0, 693, 0, 0, 0, 0, 0, 694, 0, 0, 695, 0, 0, 0, 0, 0, 696, 0, 0, 697, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 698, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 699, 0, 0, 0, 700, 0, 0, 0, 701, 0, 0, 0, 0, 0, 702, 0, 703,
    0, 0, 704, 0, 0, 705, 0, 706, 0, 0, 0, 0, 0, 707, 0, 0, 0, 0, 0, 708, 0, 0, 0, 0, 709, 0, 710, 0, 0, 0, 0, 0,
    711, 0, 0, 0, 0, 712, 0, 0, 0, 0, 713, 0, 0, 0, 0, 0, 0, 714, 0, 0, 0, 0, 0, 715, 0, 0, 0, 716, 0, 0, 0, 717,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 718, 0, 0, 0, 719, 0, 0, 0, 720, 0, 0, 0,
    721, 0, 0, 0, 0, 0, 722, 0, 0, 0, 0, 723, 0, 724, 0, 0, 0, 0, 0, 725, 0, 0, 0, 0, 0, 726, 0, 0, 0, 0, 0, 727,
    0, 0, 0, 0, 0, 0, 0, 0, 728, 0, 729, 0, 0, 0, 0, 0, 730, 0, 0, 0, 0, 0, 731, 0, 0, 0, 732, 0, 0, 0, 733, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 734, 0, 0, 0, 735, 0, 0, 0, 736, 0, 0,
    0, 737, 0, 0, 0, 0, 0, 0, 0, 0, 0, 738, 0, 0, 0, 0, 0, 0, 739, 0, 0, 0, 740, 0, 0, 0, 741, 0, 0, 0, 742, 0,
    0, 743, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 744, 0, 0, 0, 0, 0, 0, 745, 0, 0, 0, 0, 0, 746, 0, 0, 0, 0, 747, 0,
    0, 0, 0, 748, 0, 0, 0, 0, 0, 749, 0, 0, 0, 0, 750, 0, 751, 0, 0, 0, 0, 0, 752, 0, 0, 0, 0, 0, 753, 0, 0, 0,
    0, 0, 0, 0, 754, 0, 0, 0, 0, 0, 0, 0, 0, 755, 0, 756, 0, 0, 757, 0, 758, 0, 0, 759, 0, 760, 0, 0, 0, 0, 0, 761,
    0, 0, 0, 0, 0, 762, 0, 0, 0, 763, 0, 0, 0, 764, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 765, 0, 0, 0, 766, 0, 0, 0, 767, 0, 0, 0, 768, 0, 0, 0, 0, 0, 0, 0, 0, 0, 769,
};
void recomp_unit_0133_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A18000u;
        entry_id = (entry_delta < 16364u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0133[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A18000;
    case 2u: goto L_08A18050;
    case 3u: goto L_08A18060;
    case 4u: goto L_08A18070;
    case 5u: goto L_08A18080;
    case 6u: goto L_08A18090;
    case 7u: goto L_08A180A0;
    case 8u: goto L_08A180C0;
    case 9u: goto L_08A180E8;
    case 10u: goto L_08A18104;
    case 11u: goto L_08A1811C;
    case 12u: goto L_08A18124;
    case 13u: goto L_08A18130;
    case 14u: goto L_08A1813C;
    case 15u: goto L_08A18144;
    case 16u: goto L_08A1815C;
    case 17u: goto L_08A18174;
    case 18u: goto L_08A18188;
    case 19u: goto L_08A18190;
    case 20u: goto L_08A181A8;
    case 21u: goto L_08A181C0;
    case 22u: goto L_08A181E0;
    case 23u: goto L_08A18204;
    case 24u: goto L_08A1820C;
    case 25u: goto L_08A18218;
    case 26u: goto L_08A18220;
    case 27u: goto L_08A1822C;
    case 28u: goto L_08A18234;
    case 29u: goto L_08A1824C;
    case 30u: goto L_08A18264;
    case 31u: goto L_08A18274;
    case 32u: goto L_08A18284;
    case 33u: goto L_08A182E0;
    case 34u: goto L_08A182F0;
    case 35u: goto L_08A18300;
    case 36u: goto L_08A18310;
    case 37u: goto L_08A18338;
    case 38u: goto L_08A18354;
    case 39u: goto L_08A18364;
    case 40u: goto L_08A18370;
    case 41u: goto L_08A18384;
    case 42u: goto L_08A18390;
    case 43u: goto L_08A183AC;
    case 44u: goto L_08A183B8;
    case 45u: goto L_08A183EC;
    case 46u: goto L_08A18408;
    case 47u: goto L_08A18420;
    case 48u: goto L_08A18434;
    case 49u: goto L_08A1843C;
    case 50u: goto L_08A18454;
    case 51u: goto L_08A1846C;
    case 52u: goto L_08A18498;
    case 53u: goto L_08A184BC;
    case 54u: goto L_08A184C4;
    case 55u: goto L_08A184D0;
    case 56u: goto L_08A184D8;
    case 57u: goto L_08A184E4;
    case 58u: goto L_08A184EC;
    case 59u: goto L_08A184F8;
    case 60u: goto L_08A18500;
    case 61u: goto L_08A1850C;
    case 62u: goto L_08A18514;
    case 63u: goto L_08A1852C;
    case 64u: goto L_08A18544;
    case 65u: goto L_08A1855C;
    case 66u: goto L_08A1856C;
    case 67u: goto L_08A1857C;
    case 68u: goto L_08A185E0;
    case 69u: goto L_08A185F0;
    case 70u: goto L_08A18600;
    case 71u: goto L_08A18610;
    case 72u: goto L_08A18620;
    case 73u: goto L_08A18648;
    case 74u: goto L_08A18664;
    case 75u: goto L_08A18674;
    case 76u: goto L_08A18680;
    case 77u: goto L_08A1869C;
    case 78u: goto L_08A186A8;
    case 79u: goto L_08A186C4;
    case 80u: goto L_08A186D0;
    case 81u: goto L_08A186EC;
    case 82u: goto L_08A186FC;
    case 83u: goto L_08A1870C;
    case 84u: goto L_08A18720;
    case 85u: goto L_08A1872C;
    case 86u: goto L_08A18744;
    case 87u: goto L_08A18750;
    case 88u: goto L_08A18788;
    case 89u: goto L_08A18798;
    case 90u: goto L_08A187B4;
    case 91u: goto L_08A187C4;
    case 92u: goto L_08A187D4;
    case 93u: goto L_08A187E4;
    case 94u: goto L_08A187F4;
    case 95u: goto L_08A18804;
    case 96u: goto L_08A1881C;
    case 97u: goto L_08A18830;
    case 98u: goto L_08A18844;
    case 99u: goto L_08A1885C;
    case 100u: goto L_08A18870;
    case 101u: goto L_08A18878;
    case 102u: goto L_08A18890;
    case 103u: goto L_08A188A4;
    case 104u: goto L_08A188B8;
    case 105u: goto L_08A188D4;
    case 106u: goto L_08A188EC;
    case 107u: goto L_08A188FC;
    case 108u: goto L_08A1890C;
    case 109u: goto L_08A18958;
    case 110u: goto L_08A18968;
    case 111u: goto L_08A18978;
    case 112u: goto L_08A18988;
    case 113u: goto L_08A189A0;
    case 114u: goto L_08A189A8;
    case 115u: goto L_08A189B4;
    case 116u: goto L_08A189C0;
    case 117u: goto L_08A189C8;
    case 118u: goto L_08A189E0;
    case 119u: goto L_08A189F8;
    case 120u: goto L_08A18A0C;
    case 121u: goto L_08A18A14;
    case 122u: goto L_08A18A2C;
    case 123u: goto L_08A18A44;
    case 124u: goto L_08A18A70;
    case 125u: goto L_08A18A94;
    case 126u: goto L_08A18A9C;
    case 127u: goto L_08A18AA8;
    case 128u: goto L_08A18AB0;
    case 129u: goto L_08A18ACC;
    case 130u: goto L_08A18AE4;
    case 131u: goto L_08A18AFC;
    case 132u: goto L_08A18B0C;
    case 133u: goto L_08A18B1C;
    case 134u: goto L_08A18B78;
    case 135u: goto L_08A18B88;
    case 136u: goto L_08A18B98;
    case 137u: goto L_08A18BA8;
    case 138u: goto L_08A18BB8;
    case 139u: goto L_08A18BE0;
    case 140u: goto L_08A18BFC;
    case 141u: goto L_08A18C0C;
    case 142u: goto L_08A18C18;
    case 143u: goto L_08A18C2C;
    case 144u: goto L_08A18C38;
    case 145u: goto L_08A18C6C;
    case 146u: goto L_08A18C88;
    case 147u: goto L_08A18CA0;
    case 148u: goto L_08A18CB4;
    case 149u: goto L_08A18CBC;
    case 150u: goto L_08A18CD4;
    case 151u: goto L_08A18CEC;
    case 152u: goto L_08A18D10;
    case 153u: goto L_08A18D38;
    case 154u: goto L_08A18D50;
    case 155u: goto L_08A18D68;
    case 156u: goto L_08A18D78;
    case 157u: goto L_08A18D88;
    case 158u: goto L_08A18DE4;
    case 159u: goto L_08A18DF4;
    case 160u: goto L_08A18E04;
    case 161u: goto L_08A18E14;
    case 162u: goto L_08A18E24;
    case 163u: goto L_08A18E54;
    case 164u: goto L_08A18E68;
    case 165u: goto L_08A18E84;
    case 166u: goto L_08A18E90;
    case 167u: goto L_08A18EA4;
    case 168u: goto L_08A18ECC;
    case 169u: goto L_08A18EE8;
    case 170u: goto L_08A18EF4;
    case 171u: goto L_08A18F10;
    case 172u: goto L_08A18F28;
    case 173u: goto L_08A18F3C;
    case 174u: goto L_08A18F44;
    case 175u: goto L_08A18F5C;
    case 176u: goto L_08A18F70;
    case 177u: goto L_08A18F84;
    case 178u: goto L_08A18FA0;
    case 179u: goto L_08A18FB8;
    case 180u: goto L_08A18FC8;
    case 181u: goto L_08A18FD8;
    case 182u: goto L_08A19034;
    case 183u: goto L_08A19044;
    case 184u: goto L_08A19054;
    case 185u: goto L_08A19064;
    case 186u: goto L_08A1907C;
    case 187u: goto L_08A1908C;
    case 188u: goto L_08A1909C;
    case 189u: goto L_08A190AC;
    case 190u: goto L_08A190BC;
    case 191u: goto L_08A190CC;
    case 192u: goto L_08A190E4;
    case 193u: goto L_08A190F8;
    case 194u: goto L_08A1910C;
    case 195u: goto L_08A19124;
    case 196u: goto L_08A19138;
    case 197u: goto L_08A19140;
    case 198u: goto L_08A19158;
    case 199u: goto L_08A19170;
    case 200u: goto L_08A191B0;
    case 201u: goto L_08A191D4;
    case 202u: goto L_08A191DC;
    case 203u: goto L_08A191E8;
    case 204u: goto L_08A191F0;
    case 205u: goto L_08A191FC;
    case 206u: goto L_08A19204;
    case 207u: goto L_08A19210;
    case 208u: goto L_08A19218;
    case 209u: goto L_08A19228;
    case 210u: goto L_08A19234;
    case 211u: goto L_08A1923C;
    case 212u: goto L_08A19244;
    case 213u: goto L_08A19254;
    case 214u: goto L_08A19260;
    case 215u: goto L_08A19268;
    case 216u: goto L_08A19274;
    case 217u: goto L_08A1927C;
    case 218u: goto L_08A1928C;
    case 219u: goto L_08A19298;
    case 220u: goto L_08A192A0;
    case 221u: goto L_08A192A8;
    case 222u: goto L_08A192B8;
    case 223u: goto L_08A192D0;
    case 224u: goto L_08A192DC;
    case 225u: goto L_08A192F8;
    case 226u: goto L_08A19310;
    case 227u: goto L_08A19328;
    case 228u: goto L_08A19338;
    case 229u: goto L_08A19348;
    case 230u: goto L_08A193A4;
    case 231u: goto L_08A193B4;
    case 232u: goto L_08A193C4;
    case 233u: goto L_08A193D4;
    case 234u: goto L_08A193E4;
    case 235u: goto L_08A1940C;
    case 236u: goto L_08A19428;
    case 237u: goto L_08A19438;
    case 238u: goto L_08A19444;
    case 239u: goto L_08A19460;
    case 240u: goto L_08A1946C;
    case 241u: goto L_08A19484;
    case 242u: goto L_08A19490;
    case 243u: goto L_08A194A8;
    case 244u: goto L_08A194BC;
    case 245u: goto L_08A194D0;
    case 246u: goto L_08A194E4;
    case 247u: goto L_08A194F8;
    case 248u: goto L_08A19504;
    case 249u: goto L_08A1951C;
    case 250u: goto L_08A19528;
    case 251u: goto L_08A19540;
    case 252u: goto L_08A1954C;
    case 253u: goto L_08A19584;
    case 254u: goto L_08A195A0;
    case 255u: goto L_08A195B8;
    case 256u: goto L_08A195CC;
    case 257u: goto L_08A195D4;
    case 258u: goto L_08A195EC;
    case 259u: goto L_08A19600;
    case 260u: goto L_08A19614;
    case 261u: goto L_08A19630;
    case 262u: goto L_08A19648;
    case 263u: goto L_08A19658;
    case 264u: goto L_08A19668;
    case 265u: goto L_08A196BC;
    case 266u: goto L_08A196CC;
    case 267u: goto L_08A196DC;
    case 268u: goto L_08A196EC;
    case 269u: goto L_08A19710;
    case 270u: goto L_08A1972C;
    case 271u: goto L_08A19754;
    case 272u: goto L_08A1976C;
    case 273u: goto L_08A19784;
    case 274u: goto L_08A1978C;
    case 275u: goto L_08A19798;
    case 276u: goto L_08A197A4;
    case 277u: goto L_08A197AC;
    case 278u: goto L_08A197C4;
    case 279u: goto L_08A197DC;
    case 280u: goto L_08A197F0;
    case 281u: goto L_08A197F8;
    case 282u: goto L_08A19810;
    case 283u: goto L_08A19824;
    case 284u: goto L_08A19838;
    case 285u: goto L_08A19854;
    case 286u: goto L_08A1986C;
    case 287u: goto L_08A1987C;
    case 288u: goto L_08A1988C;
    case 289u: goto L_08A198E0;
    case 290u: goto L_08A198F0;
    case 291u: goto L_08A19900;
    case 292u: goto L_08A19910;
    case 293u: goto L_08A19928;
    case 294u: goto L_08A1993C;
    case 295u: goto L_08A19944;
    case 296u: goto L_08A1995C;
    case 297u: goto L_08A19974;
    case 298u: goto L_08A1998C;
    case 299u: goto L_08A199B0;
    case 300u: goto L_08A199B8;
    case 301u: goto L_08A199D0;
    case 302u: goto L_08A199E8;
    case 303u: goto L_08A199F8;
    case 304u: goto L_08A19A08;
    case 305u: goto L_08A19A64;
    case 306u: goto L_08A19A74;
    case 307u: goto L_08A19A84;
    case 308u: goto L_08A19A94;
    case 309u: goto L_08A19ABC;
    case 310u: goto L_08A19AD8;
    case 311u: goto L_08A19AE8;
    case 312u: goto L_08A19AF4;
    case 313u: goto L_08A19B28;
    case 314u: goto L_08A19B44;
    case 315u: goto L_08A19B5C;
    case 316u: goto L_08A19B70;
    case 317u: goto L_08A19B78;
    case 318u: goto L_08A19B90;
    case 319u: goto L_08A19BA8;
    case 320u: goto L_08A19BC8;
    case 321u: goto L_08A19BEC;
    case 322u: goto L_08A19BF4;
    case 323u: goto L_08A19C0C;
    case 324u: goto L_08A19C1C;
    case 325u: goto L_08A19C34;
    case 326u: goto L_08A19C4C;
    case 327u: goto L_08A19C5C;
    case 328u: goto L_08A19C6C;
    case 329u: goto L_08A19CC8;
    case 330u: goto L_08A19CD8;
    case 331u: goto L_08A19CE8;
    case 332u: goto L_08A19CF8;
    case 333u: goto L_08A19D20;
    case 334u: goto L_08A19D3C;
    case 335u: goto L_08A19D4C;
    case 336u: goto L_08A19D58;
    case 337u: goto L_08A19D88;
    case 338u: goto L_08A19DA4;
    case 339u: goto L_08A19DBC;
    case 340u: goto L_08A19DD0;
    case 341u: goto L_08A19DE4;
    case 342u: goto L_08A19DFC;
    case 343u: goto L_08A19E04;
    case 344u: goto L_08A19E10;
    case 345u: goto L_08A19E1C;
    case 346u: goto L_08A19E24;
    case 347u: goto L_08A19E3C;
    case 348u: goto L_08A19E54;
    case 349u: goto L_08A19E68;
    case 350u: goto L_08A19E70;
    case 351u: goto L_08A19E88;
    case 352u: goto L_08A19EA0;
    case 353u: goto L_08A19EC4;
    case 354u: goto L_08A19EE8;
    case 355u: goto L_08A19EF0;
    case 356u: goto L_08A19F08;
    case 357u: goto L_08A19F14;
    case 358u: goto L_08A19F30;
    case 359u: goto L_08A19F48;
    case 360u: goto L_08A19F60;
    case 361u: goto L_08A19F70;
    case 362u: goto L_08A19F80;
    case 363u: goto L_08A19FDC;
    case 364u: goto L_08A19FEC;
    case 365u: goto L_08A19FFC;
    case 366u: goto L_08A1A00C;
    case 367u: goto L_08A1A034;
    case 368u: goto L_08A1A050;
    case 369u: goto L_08A1A060;
    case 370u: goto L_08A1A06C;
    case 371u: goto L_08A1A0B4;
    case 372u: goto L_08A1A0D0;
    case 373u: goto L_08A1A0E8;
    case 374u: goto L_08A1A0FC;
    case 375u: goto L_08A1A104;
    case 376u: goto L_08A1A11C;
    case 377u: goto L_08A1A134;
    case 378u: goto L_08A1A14C;
    case 379u: goto L_08A1A170;
    case 380u: goto L_08A1A178;
    case 381u: goto L_08A1A190;
    case 382u: goto L_08A1A1A8;
    case 383u: goto L_08A1A1B8;
    case 384u: goto L_08A1A1C8;
    case 385u: goto L_08A1A224;
    case 386u: goto L_08A1A234;
    case 387u: goto L_08A1A244;
    case 388u: goto L_08A1A254;
    case 389u: goto L_08A1A27C;
    case 390u: goto L_08A1A298;
    case 391u: goto L_08A1A2A8;
    case 392u: goto L_08A1A2B4;
    case 393u: goto L_08A1A2D8;
    case 394u: goto L_08A1A2F4;
    case 395u: goto L_08A1A304;
    case 396u: goto L_08A1A318;
    case 397u: goto L_08A1A340;
    case 398u: goto L_08A1A35C;
    case 399u: goto L_08A1A374;
    case 400u: goto L_08A1A37C;
    case 401u: goto L_08A1A388;
    case 402u: goto L_08A1A394;
    case 403u: goto L_08A1A39C;
    case 404u: goto L_08A1A3B4;
    case 405u: goto L_08A1A3CC;
    case 406u: goto L_08A1A3E0;
    case 407u: goto L_08A1A3E8;
    case 408u: goto L_08A1A400;
    case 409u: goto L_08A1A414;
    case 410u: goto L_08A1A428;
    case 411u: goto L_08A1A444;
    case 412u: goto L_08A1A45C;
    case 413u: goto L_08A1A46C;
    case 414u: goto L_08A1A47C;
    case 415u: goto L_08A1A4D0;
    case 416u: goto L_08A1A4E0;
    case 417u: goto L_08A1A4F0;
    case 418u: goto L_08A1A500;
    case 419u: goto L_08A1A518;
    case 420u: goto L_08A1A52C;
    case 421u: goto L_08A1A540;
    case 422u: goto L_08A1A558;
    case 423u: goto L_08A1A560;
    case 424u: goto L_08A1A56C;
    case 425u: goto L_08A1A578;
    case 426u: goto L_08A1A580;
    case 427u: goto L_08A1A598;
    case 428u: goto L_08A1A5B0;
    case 429u: goto L_08A1A5C4;
    case 430u: goto L_08A1A5CC;
    case 431u: goto L_08A1A5E4;
    case 432u: goto L_08A1A5FC;
    case 433u: goto L_08A1A620;
    case 434u: goto L_08A1A644;
    case 435u: goto L_08A1A64C;
    case 436u: goto L_08A1A658;
    case 437u: goto L_08A1A660;
    case 438u: goto L_08A1A678;
    case 439u: goto L_08A1A688;
    case 440u: goto L_08A1A6A0;
    case 441u: goto L_08A1A6B8;
    case 442u: goto L_08A1A6C8;
    case 443u: goto L_08A1A6D8;
    case 444u: goto L_08A1A734;
    case 445u: goto L_08A1A744;
    case 446u: goto L_08A1A754;
    case 447u: goto L_08A1A764;
    case 448u: goto L_08A1A790;
    case 449u: goto L_08A1A7AC;
    case 450u: goto L_08A1A7C0;
    case 451u: goto L_08A1A7D4;
    case 452u: goto L_08A1A7F0;
    case 453u: goto L_08A1A804;
    case 454u: goto L_08A1A824;
    case 455u: goto L_08A1A840;
    case 456u: goto L_08A1A84C;
    case 457u: goto L_08A1A85C;
    case 458u: goto L_08A1A868;
    case 459u: goto L_08A1A880;
    case 460u: goto L_08A1A88C;
    case 461u: goto L_08A1A8C4;
    case 462u: goto L_08A1A8E4;
    case 463u: goto L_08A1A8FC;
    case 464u: goto L_08A1A904;
    case 465u: goto L_08A1A910;
    case 466u: goto L_08A1A91C;
    case 467u: goto L_08A1A924;
    case 468u: goto L_08A1A93C;
    case 469u: goto L_08A1A954;
    case 470u: goto L_08A1A968;
    case 471u: goto L_08A1A970;
    case 472u: goto L_08A1A988;
    case 473u: goto L_08A1A99C;
    case 474u: goto L_08A1A9B0;
    case 475u: goto L_08A1A9CC;
    case 476u: goto L_08A1A9E4;
    case 477u: goto L_08A1A9F4;
    case 478u: goto L_08A1AA04;
    case 479u: goto L_08A1AA58;
    case 480u: goto L_08A1AA68;
    case 481u: goto L_08A1AA78;
    case 482u: goto L_08A1AA88;
    case 483u: goto L_08A1AAA0;
    case 484u: goto L_08A1AAB4;
    case 485u: goto L_08A1AABC;
    case 486u: goto L_08A1AAD4;
    case 487u: goto L_08A1AAEC;
    case 488u: goto L_08A1AB0C;
    case 489u: goto L_08A1AB30;
    case 490u: goto L_08A1AB3C;
    case 491u: goto L_08A1AB4C;
    case 492u: goto L_08A1AB64;
    case 493u: goto L_08A1AB7C;
    case 494u: goto L_08A1AB8C;
    case 495u: goto L_08A1AB9C;
    case 496u: goto L_08A1ABE8;
    case 497u: goto L_08A1ABF8;
    case 498u: goto L_08A1AC08;
    case 499u: goto L_08A1AC18;
    case 500u: goto L_08A1AC30;
    case 501u: goto L_08A1AC44;
    case 502u: goto L_08A1AC4C;
    case 503u: goto L_08A1AC64;
    case 504u: goto L_08A1AC80;
    case 505u: goto L_08A1AC9C;
    case 506u: goto L_08A1ACB4;
    case 507u: goto L_08A1ACD8;
    case 508u: goto L_08A1ACE0;
    case 509u: goto L_08A1ACEC;
    case 510u: goto L_08A1ACF4;
    case 511u: goto L_08A1AD00;
    case 512u: goto L_08A1AD08;
    case 513u: goto L_08A1AD14;
    case 514u: goto L_08A1AD1C;
    case 515u: goto L_08A1AD28;
    case 516u: goto L_08A1AD30;
    case 517u: goto L_08A1AD40;
    case 518u: goto L_08A1AD58;
    case 519u: goto L_08A1AD78;
    case 520u: goto L_08A1AD90;
    case 521u: goto L_08A1AD9C;
    case 522u: goto L_08A1ADA4;
    case 523u: goto L_08A1ADB0;
    case 524u: goto L_08A1ADBC;
    case 525u: goto L_08A1ADC4;
    case 526u: goto L_08A1ADD0;
    case 527u: goto L_08A1ADDC;
    case 528u: goto L_08A1ADE4;
    case 529u: goto L_08A1ADF0;
    case 530u: goto L_08A1ADFC;
    case 531u: goto L_08A1AE04;
    case 532u: goto L_08A1AE10;
    case 533u: goto L_08A1AE1C;
    case 534u: goto L_08A1AE24;
    case 535u: goto L_08A1AE30;
    case 536u: goto L_08A1AE3C;
    case 537u: goto L_08A1AE44;
    case 538u: goto L_08A1AE50;
    case 539u: goto L_08A1AE5C;
    case 540u: goto L_08A1AE64;
    case 541u: goto L_08A1AE70;
    case 542u: goto L_08A1AE7C;
    case 543u: goto L_08A1AE84;
    case 544u: goto L_08A1AE90;
    case 545u: goto L_08A1AE9C;
    case 546u: goto L_08A1AEA4;
    case 547u: goto L_08A1AEB0;
    case 548u: goto L_08A1AEBC;
    case 549u: goto L_08A1AEC4;
    case 550u: goto L_08A1AED0;
    case 551u: goto L_08A1AEDC;
    case 552u: goto L_08A1AEE4;
    case 553u: goto L_08A1AEF0;
    case 554u: goto L_08A1AEFC;
    case 555u: goto L_08A1AF04;
    case 556u: goto L_08A1AF10;
    case 557u: goto L_08A1AF1C;
    case 558u: goto L_08A1AF24;
    case 559u: goto L_08A1AF30;
    case 560u: goto L_08A1AF3C;
    case 561u: goto L_08A1AF44;
    case 562u: goto L_08A1AF50;
    case 563u: goto L_08A1AF5C;
    case 564u: goto L_08A1AF64;
    case 565u: goto L_08A1AF70;
    case 566u: goto L_08A1AF7C;
    case 567u: goto L_08A1AF84;
    case 568u: goto L_08A1AF90;
    case 569u: goto L_08A1AF9C;
    case 570u: goto L_08A1AFA4;
    case 571u: goto L_08A1AFB0;
    case 572u: goto L_08A1AFBC;
    case 573u: goto L_08A1AFC4;
    case 574u: goto L_08A1AFD0;
    case 575u: goto L_08A1AFDC;
    case 576u: goto L_08A1AFE4;
    case 577u: goto L_08A1AFF0;
    case 578u: goto L_08A1AFFC;
    case 579u: goto L_08A1B004;
    case 580u: goto L_08A1B010;
    case 581u: goto L_08A1B01C;
    case 582u: goto L_08A1B024;
    case 583u: goto L_08A1B030;
    case 584u: goto L_08A1B03C;
    case 585u: goto L_08A1B044;
    case 586u: goto L_08A1B050;
    case 587u: goto L_08A1B05C;
    case 588u: goto L_08A1B064;
    case 589u: goto L_08A1B070;
    case 590u: goto L_08A1B07C;
    case 591u: goto L_08A1B084;
    case 592u: goto L_08A1B090;
    case 593u: goto L_08A1B09C;
    case 594u: goto L_08A1B0A4;
    case 595u: goto L_08A1B0B0;
    case 596u: goto L_08A1B0BC;
    case 597u: goto L_08A1B0C4;
    case 598u: goto L_08A1B0CC;
    case 599u: goto L_08A1B0E4;
    case 600u: goto L_08A1B0F0;
    case 601u: goto L_08A1B0F8;
    case 602u: goto L_08A1B104;
    case 603u: goto L_08A1B110;
    case 604u: goto L_08A1B12C;
    case 605u: goto L_08A1B144;
    case 606u: goto L_08A1B1A4;
    case 607u: goto L_08A1B1B0;
    case 608u: goto L_08A1B1E4;
    case 609u: goto L_08A1B1F4;
    case 610u: goto L_08A1B200;
    case 611u: goto L_08A1B21C;
    case 612u: goto L_08A1B234;
    case 613u: goto L_08A1B244;
    case 614u: goto L_08A1B254;
    case 615u: goto L_08A1B2B8;
    case 616u: goto L_08A1B2C8;
    case 617u: goto L_08A1B2D8;
    case 618u: goto L_08A1B2E8;
    case 619u: goto L_08A1B2F8;
    case 620u: goto L_08A1B320;
    case 621u: goto L_08A1B33C;
    case 622u: goto L_08A1B34C;
    case 623u: goto L_08A1B3A4;
    case 624u: goto L_08A1B3B4;
    case 625u: goto L_08A1B3C4;
    case 626u: goto L_08A1B3D4;
    case 627u: goto L_08A1B3E4;
    case 628u: goto L_08A1B3F4;
    case 629u: goto L_08A1B400;
    case 630u: goto L_08A1B41C;
    case 631u: goto L_08A1B430;
    case 632u: goto L_08A1B440;
    case 633u: goto L_08A1B454;
    case 634u: goto L_08A1B464;
    case 635u: goto L_08A1B470;
    case 636u: goto L_08A1B48C;
    case 637u: goto L_08A1B498;
    case 638u: goto L_08A1B4B4;
    case 639u: goto L_08A1B4C4;
    case 640u: goto L_08A1B4D4;
    case 641u: goto L_08A1B4E0;
    case 642u: goto L_08A1B4FC;
    case 643u: goto L_08A1B508;
    case 644u: goto L_08A1B53C;
    case 645u: goto L_08A1B54C;
    case 646u: goto L_08A1B568;
    case 647u: goto L_08A1B578;
    case 648u: goto L_08A1B588;
    case 649u: goto L_08A1B598;
    case 650u: goto L_08A1B5A8;
    case 651u: goto L_08A1B5B8;
    case 652u: goto L_08A1B5D0;
    case 653u: goto L_08A1B5E4;
    case 654u: goto L_08A1B5EC;
    case 655u: goto L_08A1B604;
    case 656u: goto L_08A1B61C;
    case 657u: goto L_08A1B62C;
    case 658u: goto L_08A1B63C;
    case 659u: goto L_08A1B694;
    case 660u: goto L_08A1B6A4;
    case 661u: goto L_08A1B6B4;
    case 662u: goto L_08A1B6C4;
    case 663u: goto L_08A1B6EC;
    case 664u: goto L_08A1B708;
    case 665u: goto L_08A1B718;
    case 666u: goto L_08A1B724;
    case 667u: goto L_08A1B738;
    case 668u: goto L_08A1B744;
    case 669u: goto L_08A1B758;
    case 670u: goto L_08A1B76C;
    case 671u: goto L_08A1B77C;
    case 672u: goto L_08A1B788;
    case 673u: goto L_08A1B79C;
    case 674u: goto L_08A1B7B0;
    case 675u: goto L_08A1B7BC;
    case 676u: goto L_08A1B7DC;
    case 677u: goto L_08A1B7E8;
    case 678u: goto L_08A1B808;
    case 679u: goto L_08A1B81C;
    case 680u: goto L_08A1B830;
    case 681u: goto L_08A1B83C;
    case 682u: goto L_08A1B854;
    case 683u: goto L_08A1B860;
    case 684u: goto L_08A1B878;
    case 685u: goto L_08A1B884;
    case 686u: goto L_08A1B89C;
    case 687u: goto L_08A1B8A8;
    case 688u: goto L_08A1B8C0;
    case 689u: goto L_08A1B8CC;
    case 690u: goto L_08A1B8E4;
    case 691u: goto L_08A1B8F0;
    case 692u: goto L_08A1B908;
    case 693u: goto L_08A1B914;
    case 694u: goto L_08A1B92C;
    case 695u: goto L_08A1B938;
    case 696u: goto L_08A1B950;
    case 697u: goto L_08A1B95C;
    case 698u: goto L_08A1B98C;
    case 699u: goto L_08A1B9BC;
    case 700u: goto L_08A1B9CC;
    case 701u: goto L_08A1B9DC;
    case 702u: goto L_08A1B9F4;
    case 703u: goto L_08A1B9FC;
    case 704u: goto L_08A1BA08;
    case 705u: goto L_08A1BA14;
    case 706u: goto L_08A1BA1C;
    case 707u: goto L_08A1BA34;
    case 708u: goto L_08A1BA4C;
    case 709u: goto L_08A1BA60;
    case 710u: goto L_08A1BA68;
    case 711u: goto L_08A1BA80;
    case 712u: goto L_08A1BA94;
    case 713u: goto L_08A1BAA8;
    case 714u: goto L_08A1BAC4;
    case 715u: goto L_08A1BADC;
    case 716u: goto L_08A1BAEC;
    case 717u: goto L_08A1BAFC;
    case 718u: goto L_08A1BB50;
    case 719u: goto L_08A1BB60;
    case 720u: goto L_08A1BB70;
    case 721u: goto L_08A1BB80;
    case 722u: goto L_08A1BB98;
    case 723u: goto L_08A1BBAC;
    case 724u: goto L_08A1BBB4;
    case 725u: goto L_08A1BBCC;
    case 726u: goto L_08A1BBE4;
    case 727u: goto L_08A1BBFC;
    case 728u: goto L_08A1BC20;
    case 729u: goto L_08A1BC28;
    case 730u: goto L_08A1BC40;
    case 731u: goto L_08A1BC58;
    case 732u: goto L_08A1BC68;
    case 733u: goto L_08A1BC78;
    case 734u: goto L_08A1BCD4;
    case 735u: goto L_08A1BCE4;
    case 736u: goto L_08A1BCF4;
    case 737u: goto L_08A1BD04;
    case 738u: goto L_08A1BD2C;
    case 739u: goto L_08A1BD48;
    case 740u: goto L_08A1BD58;
    case 741u: goto L_08A1BD68;
    case 742u: goto L_08A1BD78;
    case 743u: goto L_08A1BD84;
    case 744u: goto L_08A1BDB0;
    case 745u: goto L_08A1BDCC;
    case 746u: goto L_08A1BDE4;
    case 747u: goto L_08A1BDF8;
    case 748u: goto L_08A1BE0C;
    case 749u: goto L_08A1BE24;
    case 750u: goto L_08A1BE38;
    case 751u: goto L_08A1BE40;
    case 752u: goto L_08A1BE58;
    case 753u: goto L_08A1BE70;
    case 754u: goto L_08A1BE90;
    case 755u: goto L_08A1BEB4;
    case 756u: goto L_08A1BEBC;
    case 757u: goto L_08A1BEC8;
    case 758u: goto L_08A1BED0;
    case 759u: goto L_08A1BEDC;
    case 760u: goto L_08A1BEE4;
    case 761u: goto L_08A1BEFC;
    case 762u: goto L_08A1BF14;
    case 763u: goto L_08A1BF24;
    case 764u: goto L_08A1BF34;
    case 765u: goto L_08A1BF90;
    case 766u: goto L_08A1BFA0;
    case 767u: goto L_08A1BFB0;
    case 768u: goto L_08A1BFC0;
    case 769u: goto L_08A1BFE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A18000:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08A18050u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 860u, 0x0883FF48u>(ctx, &aot_mem) && ctx.pc == 0x08A18050u) goto L_08A18050;
    return;
L_08A18050:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08A18060u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 860u, 0x0883FF48u>(ctx, &aot_mem) && ctx.pc == 0x08A18060u) goto L_08A18060;
    return;
L_08A18060:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08A18070u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 860u, 0x0883FF48u>(ctx, &aot_mem) && ctx.pc == 0x08A18070u) goto L_08A18070;
    return;
L_08A18070:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08A18080u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 860u, 0x0883FF48u>(ctx, &aot_mem) && ctx.pc == 0x08A18080u) goto L_08A18080;
    return;
L_08A18080:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(31, 0x08A18090u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 575u, 0x089FAB04u>(ctx, &aot_mem) && ctx.pc == 0x08A18090u) goto L_08A18090;
    return;
L_08A18090:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(9));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A180A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A180A0u) goto L_08A180A0;
    return;
L_08A180A0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(3, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x08A180C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 223u, 0x089FD39Cu>(ctx, &aot_mem) && ctx.pc == 0x08A180C0u) goto L_08A180C0;
    return;
L_08A180C0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5252));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(5296));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(5340));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A180E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A180E8u) goto L_08A180E8;
    return;
L_08A180E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(160));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A18104:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24436)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A18144;
      }
      goto L_08A1811C;
    }
L_08A1811C:
    ctx.set_gpr(31, 0x08A18124u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A18124u) goto L_08A18124;
    return;
L_08A18124:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A18130u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A18130u) goto L_08A18130;
    return;
L_08A18130:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1813Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A1813Cu) goto L_08A1813C;
    return;
L_08A1813C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-24436), ctx.gpr[2]);
    goto L_08A18144;
L_08A18144:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24436)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1815C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24436)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A18188;
      }
      goto L_08A18174;
    }
L_08A18174:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A18190;
      }
      goto L_08A18188;
    }
L_08A18188:
    ctx.set_gpr(31, 0x08A18190u);
    // nop
    goto L_08A1824C;
L_08A18190:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24436)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A181A8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A181C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A181C0u) goto L_08A181C0;
    return;
L_08A181C0:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-7480));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(31, 0x08A181E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A181E0u) goto L_08A181E0;
    return;
L_08A181E0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-7480));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1820C;
      }
      goto L_08A18204;
    }
L_08A18204:
    ctx.set_gpr(31, 0x08A1820Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1820Cu) goto L_08A1820C;
    return;
L_08A1820C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A18220;
      }
      goto L_08A18218;
    }
L_08A18218:
    ctx.set_gpr(31, 0x08A18220u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A18220u) goto L_08A18220;
    return;
L_08A18220:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A18234;
      }
      goto L_08A1822C;
    }
L_08A1822C:
    ctx.set_gpr(31, 0x08A18234u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A18234u) goto L_08A18234;
    return;
L_08A18234:
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
L_08A1824C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-32140));
    ctx.set_gpr(31, 0x08A18264u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A18264u) goto L_08A18264;
    return;
L_08A18264:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A18274:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A18284u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A18284u) goto L_08A18284;
    return;
L_08A18284:
    ctx.set_gpr(2, 2210u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-31984));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(5384));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24436));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2210u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-32016));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(5400));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2210u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-32344));
    ctx.set_gpr(31, 0x08A182E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A182E0u) goto L_08A182E0;
    return;
L_08A182E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A182F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A18300u);
    // nop
    goto L_08A1815C;
L_08A18300:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A18310:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24436)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A18338u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A18338u) goto L_08A18338;
    return;
L_08A18338:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5408));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A18354u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A18354u) goto L_08A18354;
    return;
L_08A18354:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A18364u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A18364u) goto L_08A18364;
    return;
L_08A18364:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A18370u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 364u, 0x089F2A58u>(ctx, &aot_mem) && ctx.pc == 0x08A18370u) goto L_08A18370;
    return;
L_08A18370:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A18384u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A18384u) goto L_08A18384;
    return;
L_08A18384:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A18390u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 482u, 0x089F3478u>(ctx, &aot_mem) && ctx.pc == 0x08A18390u) goto L_08A18390;
    return;
L_08A18390:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A183ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A183ACu) goto L_08A183AC;
    return;
L_08A183AC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A183B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0060_entry, 60u, 488u, 0x088F68E4u>(ctx, &aot_mem) && ctx.pc == 0x08A183B8u) goto L_08A183B8;
    return;
L_08A183B8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5456));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(5468));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(5480));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A183ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A183ECu) goto L_08A183EC;
    return;
L_08A183EC:
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
L_08A18408:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24420)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A18434;
      }
      goto L_08A18420;
    }
L_08A18420:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1843C;
      }
      goto L_08A18434;
    }
L_08A18434:
    ctx.set_gpr(31, 0x08A1843Cu);
    // nop
    goto L_08A18544;
L_08A1843C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24420)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A18454:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A1846Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A1846Cu) goto L_08A1846C;
    return;
L_08A1846C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-17496));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), 0u);
    ctx.set_gpr(31, 0x08A18498u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A18498u) goto L_08A18498;
    return;
L_08A18498:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-17496));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A184C4;
      }
      goto L_08A184BC;
    }
L_08A184BC:
    ctx.set_gpr(31, 0x08A184C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A184C4u) goto L_08A184C4;
    return;
L_08A184C4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A184D8;
      }
      goto L_08A184D0;
    }
L_08A184D0:
    ctx.set_gpr(31, 0x08A184D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A184D8u) goto L_08A184D8;
    return;
L_08A184D8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A184EC;
      }
      goto L_08A184E4;
    }
L_08A184E4:
    ctx.set_gpr(31, 0x08A184ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A184ECu) goto L_08A184EC;
    return;
L_08A184EC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A18500;
      }
      goto L_08A184F8;
    }
L_08A184F8:
    ctx.set_gpr(31, 0x08A18500u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A18500u) goto L_08A18500;
    return;
L_08A18500:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A18514;
      }
      goto L_08A1850C;
    }
L_08A1850C:
    ctx.set_gpr(31, 0x08A18514u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A18514u) goto L_08A18514;
    return;
L_08A18514:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-23268));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(31, 0x08A1852Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1852Cu) goto L_08A1852C;
    return;
L_08A1852C:
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
L_08A18544:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-31380));
    ctx.set_gpr(31, 0x08A1855Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A1855Cu) goto L_08A1855C;
    return;
L_08A1855C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1856C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1857Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A1857Cu) goto L_08A1857C;
    return;
L_08A1857C:
    ctx.set_gpr(2, 2210u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-31200));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2210u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-30796));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(5492));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24420));
    ctx.set_gpr(6, 2208u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(21204));
    ctx.set_gpr(7, 2210u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-31216));
    ctx.set_gpr(8, 2210u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-31248));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(5516));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(64));
    ctx.set_gpr(11, 2210u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-31660));
    ctx.set_gpr(31, 0x08A185E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A185E0u) goto L_08A185E0;
    return;
L_08A185E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A185F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A18600u);
    // nop
    goto L_08A18408;
L_08A18600:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A18610:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26572)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A18620:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24420)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A18648u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A18648u) goto L_08A18648;
    return;
L_08A18648:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5540));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(31, 0x08A18664u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A18664u) goto L_08A18664;
    return;
L_08A18664:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A18674u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A18674u) goto L_08A18674;
    return;
L_08A18674:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A18680u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0155_entry, 155u, 560u, 0x08A734D8u>(ctx, &aot_mem) && ctx.pc == 0x08A18680u) goto L_08A18680;
    return;
L_08A18680:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1869Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1869Cu) goto L_08A1869C;
    return;
L_08A1869C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A186A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 506u, 0x08A128BCu>(ctx, &aot_mem) && ctx.pc == 0x08A186A8u) goto L_08A186A8;
    return;
L_08A186A8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A186C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A186C4u) goto L_08A186C4;
    return;
L_08A186C4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A186D0u);
    // nop
    goto L_08A18104;
L_08A186D0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A186ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A186ECu) goto L_08A186EC;
    return;
L_08A186EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(31, 0x08A186FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x08A186FCu) goto L_08A186FC;
    return;
L_08A186FC:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1870Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1870Cu) goto L_08A1870C;
    return;
L_08A1870C:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A18720u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A18720u) goto L_08A18720;
    return;
L_08A18720:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1872Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 344u, 0x089F28B4u>(ctx, &aot_mem) && ctx.pc == 0x08A1872Cu) goto L_08A1872C;
    return;
L_08A1872C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A18744u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A18744u) goto L_08A18744;
    return;
L_08A18744:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A18750u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 454u, 0x089F31F8u>(ctx, &aot_mem) && ctx.pc == 0x08A18750u) goto L_08A18750;
    return;
L_08A18750:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5632));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(5660));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(5688));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A18788u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A18788u) goto L_08A18788;
    return;
L_08A18788:
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-30748));
    ctx.set_gpr(31, 0x08A18798u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 237u, 0x089451B8u>(ctx, &aot_mem) && ctx.pc == 0x08A18798u) goto L_08A18798;
    return;
L_08A18798:
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
L_08A187B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A187C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 813u, 0x08A53A40u>(ctx, &aot_mem) && ctx.pc == 0x08A187C4u) goto L_08A187C4;
    return;
L_08A187C4:
    ctx.set_gpr(4, 2213u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(14772));
    ctx.set_gpr(31, 0x08A187D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 240u, 0x089451F4u>(ctx, &aot_mem) && ctx.pc == 0x08A187D4u) goto L_08A187D4;
    return;
L_08A187D4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A187E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A187F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 817u, 0x08A53A80u>(ctx, &aot_mem) && ctx.pc == 0x08A187F4u) goto L_08A187F4;
    return;
L_08A187F4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A18804:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A1881Cu);
    // nop
    goto L_08A188D4;
L_08A1881C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24388)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A18830u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x08A18830u) goto L_08A18830;
    return;
L_08A18830:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A18844:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24388)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A18870;
      }
      goto L_08A1885C;
    }
L_08A1885C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A18878;
      }
      goto L_08A18870;
    }
L_08A18870:
    ctx.set_gpr(31, 0x08A18878u);
    // nop
    goto L_08A188D4;
L_08A18878:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24388)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A18890:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08A188A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A188A4u) goto L_08A188A4;
    return;
L_08A188A4:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-16784));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A188B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A188B8u) goto L_08A188B8;
    return;
L_08A188B8:
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
L_08A188D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-30468));
    ctx.set_gpr(31, 0x08A188ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A188ECu) goto L_08A188EC;
    return;
L_08A188EC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A188FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1890Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A1890Cu) goto L_08A1890C;
    return;
L_08A1890C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24388));
    ctx.set_gpr(6, 2209u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-14180));
    ctx.set_gpr(7, 2209u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27884));
    ctx.set_gpr(8, 2210u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-30360));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(5716));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(11, 2210u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-30576));
    ctx.set_gpr(31, 0x08A18958u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A18958u) goto L_08A18958;
    return;
L_08A18958:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A18968:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A18978u);
    // nop
    goto L_08A18844;
L_08A18978:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A18988:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24384)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A189C8;
      }
      goto L_08A189A0;
    }
L_08A189A0:
    ctx.set_gpr(31, 0x08A189A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A189A8u) goto L_08A189A8;
    return;
L_08A189A8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A189B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A189B4u) goto L_08A189B4;
    return;
L_08A189B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A189C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A189C0u) goto L_08A189C0;
    return;
L_08A189C0:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-24384), ctx.gpr[2]);
    goto L_08A189C8;
L_08A189C8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24384)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A189E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24384)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A18A0C;
      }
      goto L_08A189F8;
    }
L_08A189F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A18A14;
      }
      goto L_08A18A0C;
    }
L_08A18A0C:
    ctx.set_gpr(31, 0x08A18A14u);
    // nop
    goto L_08A18AE4;
L_08A18A14:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24384)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A18A2C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A18A44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A18A44u) goto L_08A18A44;
    return;
L_08A18A44:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-7584));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(31, 0x08A18A70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A18A70u) goto L_08A18A70;
    return;
L_08A18A70:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-7584));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A18A9C;
      }
      goto L_08A18A94;
    }
L_08A18A94:
    ctx.set_gpr(31, 0x08A18A9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A18A9Cu) goto L_08A18A9C;
    return;
L_08A18A9C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A18AB0;
      }
      goto L_08A18AA8;
    }
L_08A18AA8:
    ctx.set_gpr(31, 0x08A18AB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A18AB0u) goto L_08A18AB0;
    return;
L_08A18AB0:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(208));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A18ACCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 410u, 0x08A0558Cu>(ctx, &aot_mem) && ctx.pc == 0x08A18ACCu) goto L_08A18ACC;
    return;
L_08A18ACC:
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
L_08A18AE4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-29940));
    ctx.set_gpr(31, 0x08A18AFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A18AFCu) goto L_08A18AFC;
    return;
L_08A18AFC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A18B0C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A18B1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A18B1Cu) goto L_08A18B1C;
    return;
L_08A18B1C:
    ctx.set_gpr(2, 2210u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-29768));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(5748));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24384));
    ctx.set_gpr(6, 2208u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(22164));
    ctx.set_gpr(7, 2210u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-29784));
    ctx.set_gpr(8, 2210u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-29816));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(5760));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(11, 2210u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-30164));
    ctx.set_gpr(31, 0x08A18B78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A18B78u) goto L_08A18B78;
    return;
L_08A18B78:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A18B88:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A18B98u);
    // nop
    goto L_08A189E0;
L_08A18B98:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A18BA8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26548)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A18BB8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24384)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A18BE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A18BE0u) goto L_08A18BE0;
    return;
L_08A18BE0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5784));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08A18BFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A18BFCu) goto L_08A18BFC;
    return;
L_08A18BFC:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A18C0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A18C0Cu) goto L_08A18C0C;
    return;
L_08A18C0C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A18C18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 180u, 0x08A0CF80u>(ctx, &aot_mem) && ctx.pc == 0x08A18C18u) goto L_08A18C18;
    return;
L_08A18C18:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A18C2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A18C2Cu) goto L_08A18C2C;
    return;
L_08A18C2C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A18C38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 85u, 0x088EC770u>(ctx, &aot_mem) && ctx.pc == 0x08A18C38u) goto L_08A18C38;
    return;
L_08A18C38:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5820));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(5828));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(5836));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A18C6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A18C6Cu) goto L_08A18C6C;
    return;
L_08A18C6C:
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
L_08A18C88:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24372)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A18CB4;
      }
      goto L_08A18CA0;
    }
L_08A18CA0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A18CBC;
      }
      goto L_08A18CB4;
    }
L_08A18CB4:
    ctx.set_gpr(31, 0x08A18CBCu);
    // nop
    goto L_08A18D50;
L_08A18CBC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24372)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A18CD4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A18CECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 727u, 0x08A0720Cu>(ctx, &aot_mem) && ctx.pc == 0x08A18CECu) goto L_08A18CEC;
    return;
L_08A18CEC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-16676));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A18D10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A18D10u) goto L_08A18D10;
    return;
L_08A18D10:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-16676));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A18D38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 50u, 0x08A0C424u>(ctx, &aot_mem) && ctx.pc == 0x08A18D38u) goto L_08A18D38;
    return;
L_08A18D38:
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
L_08A18D50:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-29320));
    ctx.set_gpr(31, 0x08A18D68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A18D68u) goto L_08A18D68;
    return;
L_08A18D68:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A18D78:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A18D88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A18D88u) goto L_08A18D88;
    return;
L_08A18D88:
    ctx.set_gpr(2, 2210u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-29148));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(5844));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24372));
    ctx.set_gpr(6, 2209u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-14980));
    ctx.set_gpr(7, 2210u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-29164));
    ctx.set_gpr(8, 2210u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-29196));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(5852));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(52));
    ctx.set_gpr(11, 2210u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-29484));
    ctx.set_gpr(31, 0x08A18DE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A18DE4u) goto L_08A18DE4;
    return;
L_08A18DE4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A18DF4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A18E04u);
    // nop
    goto L_08A18C88;
L_08A18E04:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A18E14:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25856)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A18E24:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24372)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-4848));
    ctx.set_gpr(31, 0x08A18E54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x08A18E54u) goto L_08A18E54;
    return;
L_08A18E54:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A18E68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 700u, 0x08927138u>(ctx, &aot_mem) && ctx.pc == 0x08A18E68u) goto L_08A18E68;
    return;
L_08A18E68:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A18E84u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A18E84u) goto L_08A18E84;
    return;
L_08A18E84:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A18E90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 94u, 0x08A0C78Cu>(ctx, &aot_mem) && ctx.pc == 0x08A18E90u) goto L_08A18E90;
    return;
L_08A18E90:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A18EA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 626u, 0x0894AD9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A18EA4u) goto L_08A18EA4;
    return;
L_08A18EA4:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-24368));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A18ECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 145u, 0x08944AF0u>(ctx, &aot_mem) && ctx.pc == 0x08A18ECCu) goto L_08A18ECC;
    return;
L_08A18ECC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 10u);
    ctx.set_gpr(3, ctx.gpr[3] >> 10u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A18EF4;
      }
      goto L_08A18EE8;
    }
L_08A18EE8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A18EF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A18EF4u) goto L_08A18EF4;
    return;
L_08A18EF4:
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
L_08A18F10:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24364)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A18F3C;
      }
      goto L_08A18F28;
    }
L_08A18F28:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A18F44;
      }
      goto L_08A18F3C;
    }
L_08A18F3C:
    ctx.set_gpr(31, 0x08A18F44u);
    // nop
    goto L_08A18FA0;
L_08A18F44:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24364)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A18F5C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08A18F70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A18F70u) goto L_08A18F70;
    return;
L_08A18F70:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-7676));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A18F84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A18F84u) goto L_08A18F84;
    return;
L_08A18F84:
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
L_08A18FA0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-28728));
    ctx.set_gpr(31, 0x08A18FB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A18FB8u) goto L_08A18FB8;
    return;
L_08A18FB8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A18FC8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A18FD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A18FD8u) goto L_08A18FD8;
    return;
L_08A18FD8:
    ctx.set_gpr(2, 2210u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-28572));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2210u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-28532));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24364));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2210u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-28604));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(5872));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(11, 2210u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-28836));
    ctx.set_gpr(31, 0x08A19034u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A19034u) goto L_08A19034;
    return;
L_08A19034:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A19044:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A19054u);
    // nop
    goto L_08A18F10;
L_08A19054:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A19064:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-28500));
    ctx.set_gpr(31, 0x08A1907Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 237u, 0x089451B8u>(ctx, &aot_mem) && ctx.pc == 0x08A1907Cu) goto L_08A1907C;
    return;
L_08A1907C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1908C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1909Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 337u, 0x08A51290u>(ctx, &aot_mem) && ctx.pc == 0x08A1909Cu) goto L_08A1909C;
    return;
L_08A1909C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A190AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A190BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0147_entry, 147u, 400u, 0x08A51620u>(ctx, &aot_mem) && ctx.pc == 0x08A190BCu) goto L_08A190BC;
    return;
L_08A190BC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A190CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A190E4u);
    // nop
    goto L_08A19310;
L_08A190E4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24360)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A190F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x08A190F8u) goto L_08A190F8;
    return;
L_08A190F8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1910C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24360)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A19138;
      }
      goto L_08A19124;
    }
L_08A19124:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A19140;
      }
      goto L_08A19138;
    }
L_08A19138:
    ctx.set_gpr(31, 0x08A19140u);
    // nop
    goto L_08A19310;
L_08A19140:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24360)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A19158:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x08A19170u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A19170u) goto L_08A19170;
    return;
L_08A19170:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-16492));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    ctx.set_gpr(31, 0x08A191B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A191B0u) goto L_08A191B0;
    return;
L_08A191B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-16492));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A191DC;
      }
      goto L_08A191D4;
    }
L_08A191D4:
    ctx.set_gpr(31, 0x08A191DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A191DCu) goto L_08A191DC;
    return;
L_08A191DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A191F0;
      }
      goto L_08A191E8;
    }
L_08A191E8:
    ctx.set_gpr(31, 0x08A191F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A191F0u) goto L_08A191F0;
    return;
L_08A191F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A19204;
      }
      goto L_08A191FC;
    }
L_08A191FC:
    ctx.set_gpr(31, 0x08A19204u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A19204u) goto L_08A19204;
    return;
L_08A19204:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A19218;
      }
      goto L_08A19210;
    }
L_08A19210:
    ctx.set_gpr(31, 0x08A19218u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A19218u) goto L_08A19218;
    return;
L_08A19218:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1923C;
      }
      goto L_08A19228;
    }
L_08A19228:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.set_gpr(31, 0x08A19234u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08A19234u) goto L_08A19234;
    return;
L_08A19234:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08A1923C;
L_08A1923C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A19254;
      }
      goto L_08A19244;
    }
L_08A19244:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08A19254u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08A19254u) goto L_08A19254;
    return;
L_08A19254:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A19268;
      }
      goto L_08A19260;
    }
L_08A19260:
    ctx.set_gpr(31, 0x08A19268u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A19268u) goto L_08A19268;
    return;
L_08A19268:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1927C;
      }
      goto L_08A19274;
    }
L_08A19274:
    ctx.set_gpr(31, 0x08A1927Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1927Cu) goto L_08A1927C;
    return;
L_08A1927C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A192A0;
      }
      goto L_08A1928C;
    }
L_08A1928C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x08A19298u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 781u, 0x0885315Cu>(ctx, &aot_mem) && ctx.pc == 0x08A19298u) goto L_08A19298;
    return;
L_08A19298:
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    goto L_08A192A0;
L_08A192A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A192B8;
      }
      goto L_08A192A8;
    }
L_08A192A8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(31, 0x08A192B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 770u, 0x088530D0u>(ctx, &aot_mem) && ctx.pc == 0x08A192B8u) goto L_08A192B8;
    return;
L_08A192B8:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-20024));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(31, 0x08A192D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A192D0u) goto L_08A192D0;
    return;
L_08A192D0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x08A192DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A192DCu) goto L_08A192DC;
    return;
L_08A192DC:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15576));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08A192F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 288u, 0x088555D0u>(ctx, &aot_mem) && ctx.pc == 0x08A192F8u) goto L_08A192F8;
    return;
L_08A192F8:
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
L_08A19310:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-27848));
    ctx.set_gpr(31, 0x08A19328u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A19328u) goto L_08A19328;
    return;
L_08A19328:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A19338:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A19348u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A19348u) goto L_08A19348;
    return;
L_08A19348:
    ctx.set_gpr(2, 2210u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-27676));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(5892));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24360));
    ctx.set_gpr(6, 2209u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-12044));
    ctx.set_gpr(7, 2210u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27692));
    ctx.set_gpr(8, 2210u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-27724));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(5912));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(60));
    ctx.set_gpr(11, 2210u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-28328));
    ctx.set_gpr(31, 0x08A193A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A193A4u) goto L_08A193A4;
    return;
L_08A193A4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A193B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A193C4u);
    // nop
    goto L_08A1910C;
L_08A193C4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A193D4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-25812)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A193E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24360)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1940Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A1940Cu) goto L_08A1940C;
    return;
L_08A1940C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(5932));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(31, 0x08A19428u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A19428u) goto L_08A19428;
    return;
L_08A19428:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A19438u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A19438u) goto L_08A19438;
    return;
L_08A19438:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A19444u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 85u, 0x088EC770u>(ctx, &aot_mem) && ctx.pc == 0x08A19444u) goto L_08A19444;
    return;
L_08A19444:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A19460u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A19460u) goto L_08A19460;
    return;
L_08A19460:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1946Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 730u, 0x088EB744u>(ctx, &aot_mem) && ctx.pc == 0x08A1946Cu) goto L_08A1946C;
    return;
L_08A1946C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A19484u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A19484u) goto L_08A19484;
    return;
L_08A19484:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A19490u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 730u, 0x088EB744u>(ctx, &aot_mem) && ctx.pc == 0x08A19490u) goto L_08A19490;
    return;
L_08A19490:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A194A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A194A8u) goto L_08A194A8;
    return;
L_08A194A8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A194BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 280u, 0x08959444u>(ctx, &aot_mem) && ctx.pc == 0x08A194BCu) goto L_08A194BC;
    return;
L_08A194BC:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A194D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A194D0u) goto L_08A194D0;
    return;
L_08A194D0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08A194E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x08A194E4u) goto L_08A194E4;
    return;
L_08A194E4:
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A194F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A194F8u) goto L_08A194F8;
    return;
L_08A194F8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A19504u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 704u, 0x088DFA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A19504u) goto L_08A19504;
    return;
L_08A19504:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1951Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1951Cu) goto L_08A1951C;
    return;
L_08A1951C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A19528u);
    // nop
    goto L_08A18988;
L_08A19528:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A19540u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A19540u) goto L_08A19540;
    return;
L_08A19540:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1954Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 85u, 0x088EC770u>(ctx, &aot_mem) && ctx.pc == 0x08A1954Cu) goto L_08A1954C;
    return;
L_08A1954C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6096));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(6132));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(6168));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A19584u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A19584u) goto L_08A19584;
    return;
L_08A19584:
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
L_08A195A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24320)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A195CC;
      }
      goto L_08A195B8;
    }
L_08A195B8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A195D4;
      }
      goto L_08A195CC;
    }
L_08A195CC:
    ctx.set_gpr(31, 0x08A195D4u);
    // nop
    goto L_08A19630;
L_08A195D4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24320)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A195EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A19600u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A19600u) goto L_08A19600;
    return;
L_08A19600:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-5680));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A19614u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A19614u) goto L_08A19614;
    return;
L_08A19614:
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
L_08A19630:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-27048));
    ctx.set_gpr(31, 0x08A19648u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A19648u) goto L_08A19648;
    return;
L_08A19648:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A19658:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A19668u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A19668u) goto L_08A19668;
    return;
L_08A19668:
    ctx.set_gpr(2, 2210u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-26900));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24320));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2210u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-26932));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(6204));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(11, 2210u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-27156));
    ctx.set_gpr(31, 0x08A196BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A196BCu) goto L_08A196BC;
    return;
L_08A196BC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A196CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A196DCu);
    // nop
    goto L_08A195A0;
L_08A196DC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A196EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24320)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A19710u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A19710u) goto L_08A19710;
    return;
L_08A19710:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6216));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08A1972Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A1972Cu) goto L_08A1972C;
    return;
L_08A1972C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6252));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(6260));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(6268));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A19754u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A19754u) goto L_08A19754;
    return;
L_08A19754:
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
L_08A1976C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24308)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A197AC;
      }
      goto L_08A19784;
    }
L_08A19784:
    ctx.set_gpr(31, 0x08A1978Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A1978Cu) goto L_08A1978C;
    return;
L_08A1978C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A19798u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A19798u) goto L_08A19798;
    return;
L_08A19798:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A197A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A197A4u) goto L_08A197A4;
    return;
L_08A197A4:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-24308), ctx.gpr[2]);
    goto L_08A197AC;
L_08A197AC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24308)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A197C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24308)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A197F0;
      }
      goto L_08A197DC;
    }
L_08A197DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A197F8;
      }
      goto L_08A197F0;
    }
L_08A197F0:
    ctx.set_gpr(31, 0x08A197F8u);
    // nop
    goto L_08A19854;
L_08A197F8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24308)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A19810:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A19824u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x08A19824u) goto L_08A19824;
    return;
L_08A19824:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-7780));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A19838u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A19838u) goto L_08A19838;
    return;
L_08A19838:
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
L_08A19854:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-26500));
    ctx.set_gpr(31, 0x08A1986Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A1986Cu) goto L_08A1986C;
    return;
L_08A1986C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1987C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1988Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A1988Cu) goto L_08A1988C;
    return;
L_08A1988C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(6276));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24308));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2210u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-26384));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(6284));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2210u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-26608));
    ctx.set_gpr(31, 0x08A198E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A198E0u) goto L_08A198E0;
    return;
L_08A198E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A198F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A19900u);
    // nop
    goto L_08A197C4;
L_08A19900:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A19910:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24304)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1993C;
      }
      goto L_08A19928;
    }
L_08A19928:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A19944;
      }
      goto L_08A1993C;
    }
L_08A1993C:
    ctx.set_gpr(31, 0x08A19944u);
    // nop
    goto L_08A199D0;
L_08A19944:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24304)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1995C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x08A19974u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A19974u) goto L_08A19974;
    return;
L_08A19974:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-16380));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(31, 0x08A1998Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A1998Cu) goto L_08A1998C;
    return;
L_08A1998C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-16380));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A199B8;
      }
      goto L_08A199B0;
    }
L_08A199B0:
    ctx.set_gpr(31, 0x08A199B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A199B8u) goto L_08A199B8;
    return;
L_08A199B8:
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
L_08A199D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-26120));
    ctx.set_gpr(31, 0x08A199E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A199E8u) goto L_08A199E8;
    return;
L_08A199E8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A199F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A19A08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A19A08u) goto L_08A19A08;
    return;
L_08A19A08:
    ctx.set_gpr(2, 2210u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-25964));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(6300));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24304));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2210u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-25996));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(6308));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(12));
    ctx.set_gpr(11, 2210u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-26276));
    ctx.set_gpr(31, 0x08A19A64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A19A64u) goto L_08A19A64;
    return;
L_08A19A64:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A19A74:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A19A84u);
    // nop
    goto L_08A19910;
L_08A19A84:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A19A94:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24304)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A19ABCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A19ABCu) goto L_08A19ABC;
    return;
L_08A19ABC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6316));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A19AD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A19AD8u) goto L_08A19AD8;
    return;
L_08A19AD8:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A19AE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A19AE8u) goto L_08A19AE8;
    return;
L_08A19AE8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A19AF4u);
    // nop
    goto L_08A1976C;
L_08A19AF4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6328));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(6332));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(6336));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A19B28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A19B28u) goto L_08A19B28;
    return;
L_08A19B28:
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
L_08A19B44:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24296)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A19B70;
      }
      goto L_08A19B5C;
    }
L_08A19B5C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A19B78;
      }
      goto L_08A19B70;
    }
L_08A19B70:
    ctx.set_gpr(31, 0x08A19B78u);
    // nop
    goto L_08A19C34;
L_08A19B78:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24296)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A19B90:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08A19BA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 646u, 0x08A06A18u>(ctx, &aot_mem) && ctx.pc == 0x08A19BA8u) goto L_08A19BA8;
    return;
L_08A19BA8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-16288));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.set_gpr(31, 0x08A19BC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A19BC8u) goto L_08A19BC8;
    return;
L_08A19BC8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-16288));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A19BF4;
      }
      goto L_08A19BEC;
    }
L_08A19BEC:
    ctx.set_gpr(31, 0x08A19BF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A19BF4u) goto L_08A19BF4;
    return;
L_08A19BF4:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-2540));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(31, 0x08A19C0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A19C0Cu) goto L_08A19C0C;
    return;
L_08A19C0C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A19C1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 278u, 0x089F24C0u>(ctx, &aot_mem) && ctx.pc == 0x08A19C1Cu) goto L_08A19C1C;
    return;
L_08A19C1C:
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
L_08A19C34:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-25508));
    ctx.set_gpr(31, 0x08A19C4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A19C4Cu) goto L_08A19C4C;
    return;
L_08A19C4C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A19C5C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A19C6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A19C6Cu) goto L_08A19C6C;
    return;
L_08A19C6C:
    ctx.set_gpr(2, 2210u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-25352));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(6340));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24296));
    ctx.set_gpr(6, 2208u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(20632));
    ctx.set_gpr(7, 2209u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-15636));
    ctx.set_gpr(8, 2210u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-25384));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(6348));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(40));
    ctx.set_gpr(11, 2210u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-25712));
    ctx.set_gpr(31, 0x08A19CC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A19CC8u) goto L_08A19CC8;
    return;
L_08A19CC8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A19CD8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A19CE8u);
    // nop
    goto L_08A19B44;
L_08A19CE8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A19CF8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24296)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A19D20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A19D20u) goto L_08A19D20;
    return;
L_08A19D20:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6368));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A19D3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A19D3Cu) goto L_08A19D3C;
    return;
L_08A19D3C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A19D4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A19D4Cu) goto L_08A19D4C;
    return;
L_08A19D4C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A19D58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 56u, 0x08A104A4u>(ctx, &aot_mem) && ctx.pc == 0x08A19D58u) goto L_08A19D58;
    return;
L_08A19D58:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6388));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(6392));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(6396));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A19D88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A19D88u) goto L_08A19D88;
    return;
L_08A19D88:
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
L_08A19DA4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A19DBCu);
    // nop
    goto L_08A19F48;
L_08A19DBC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24288)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A19DD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x08A19DD0u) goto L_08A19DD0;
    return;
L_08A19DD0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A19DE4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24288)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A19E24;
      }
      goto L_08A19DFC;
    }
L_08A19DFC:
    ctx.set_gpr(31, 0x08A19E04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A19E04u) goto L_08A19E04;
    return;
L_08A19E04:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A19E10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A19E10u) goto L_08A19E10;
    return;
L_08A19E10:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A19E1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A19E1Cu) goto L_08A19E1C;
    return;
L_08A19E1C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-24288), ctx.gpr[2]);
    goto L_08A19E24;
L_08A19E24:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24288)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A19E3C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24288)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A19E68;
      }
      goto L_08A19E54;
    }
L_08A19E54:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A19E70;
      }
      goto L_08A19E68;
    }
L_08A19E68:
    ctx.set_gpr(31, 0x08A19E70u);
    // nop
    goto L_08A19F48;
L_08A19E70:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24288)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A19E88:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A19EA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A19EA0u) goto L_08A19EA0;
    return;
L_08A19EA0:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-16128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    ctx.set_gpr(31, 0x08A19EC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A19EC4u) goto L_08A19EC4;
    return;
L_08A19EC4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-16128));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A19EF0;
      }
      goto L_08A19EE8;
    }
L_08A19EE8:
    ctx.set_gpr(31, 0x08A19EF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A19EF0u) goto L_08A19EF0;
    return;
L_08A19EF0:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18596));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(31, 0x08A19F08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A19F08u) goto L_08A19F08;
    return;
L_08A19F08:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(31, 0x08A19F14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A19F14u) goto L_08A19F14;
    return;
L_08A19F14:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15576));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08A19F30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 288u, 0x088555D0u>(ctx, &aot_mem) && ctx.pc == 0x08A19F30u) goto L_08A19F30;
    return;
L_08A19F30:
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
L_08A19F48:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-24720));
    ctx.set_gpr(31, 0x08A19F60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A19F60u) goto L_08A19F60;
    return;
L_08A19F60:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A19F70:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A19F80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A19F80u) goto L_08A19F80;
    return;
L_08A19F80:
    ctx.set_gpr(2, 2210u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-24564));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(6400));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24288));
    ctx.set_gpr(6, 2209u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(9936));
    ctx.set_gpr(7, 2209u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(26880));
    ctx.set_gpr(8, 2210u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-24596));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(6408));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(11, 2210u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-24952));
    ctx.set_gpr(31, 0x08A19FDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A19FDCu) goto L_08A19FDC;
    return;
L_08A19FDC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A19FEC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A19FFCu);
    // nop
    goto L_08A19E3C;
L_08A19FFC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1A00C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24288)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A1A034u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A1A034u) goto L_08A1A034;
    return;
L_08A1A034:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6416));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A1A050u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A1A050u) goto L_08A1A050;
    return;
L_08A1A050:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A1A060u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1A060u) goto L_08A1A060;
    return;
L_08A1A060:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1A06Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 506u, 0x08A128BCu>(ctx, &aot_mem) && ctx.pc == 0x08A1A06Cu) goto L_08A1A06C;
    return;
L_08A1A06C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6432));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(6436));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(6440));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A1A0B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1A0B4u) goto L_08A1A0B4;
    return;
L_08A1A0B4:
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
L_08A1A0D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24280)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1A0FC;
      }
      goto L_08A1A0E8;
    }
L_08A1A0E8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1A104;
      }
      goto L_08A1A0FC;
    }
L_08A1A0FC:
    ctx.set_gpr(31, 0x08A1A104u);
    // nop
    goto L_08A1A190;
L_08A1A104:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24280)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1A11C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x08A1A134u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A1A134u) goto L_08A1A134;
    return;
L_08A1A134:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-7872));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(31, 0x08A1A14Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A1A14Cu) goto L_08A1A14C;
    return;
L_08A1A14C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-7872));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1A178;
      }
      goto L_08A1A170;
    }
L_08A1A170:
    ctx.set_gpr(31, 0x08A1A178u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1A178u) goto L_08A1A178;
    return;
L_08A1A178:
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
L_08A1A190:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-24136));
    ctx.set_gpr(31, 0x08A1A1A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A1A1A8u) goto L_08A1A1A8;
    return;
L_08A1A1A8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1A1B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1A1C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A1A1C8u) goto L_08A1A1C8;
    return;
L_08A1A1C8:
    ctx.set_gpr(2, 2210u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-23980));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(6444));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24280));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2210u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-24012));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(6452));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(28));
    ctx.set_gpr(11, 2210u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-24292));
    ctx.set_gpr(31, 0x08A1A224u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A1A224u) goto L_08A1A224;
    return;
L_08A1A224:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1A234:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1A244u);
    // nop
    goto L_08A1A0D0;
L_08A1A244:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1A254:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24280)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A1A27Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A1A27Cu) goto L_08A1A27C;
    return;
L_08A1A27C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6464));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(31, 0x08A1A298u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A1A298u) goto L_08A1A298;
    return;
L_08A1A298:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A1A2A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1A2A8u) goto L_08A1A2A8;
    return;
L_08A1A2A8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1A2B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 506u, 0x08A128BCu>(ctx, &aot_mem) && ctx.pc == 0x08A1A2B4u) goto L_08A1A2B4;
    return;
L_08A1A2B4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(3));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A1A2D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1A2D8u) goto L_08A1A2D8;
    return;
L_08A1A2D8:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(31, 0x08A1A2F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 223u, 0x089FD39Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1A2F4u) goto L_08A1A2F4;
    return;
L_08A1A2F4:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A1A304u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1A304u) goto L_08A1A304;
    return;
L_08A1A304:
    ctx.set_gpr(3, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1A318u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 643u, 0x0891EEE0u>(ctx, &aot_mem) && ctx.pc == 0x08A1A318u) goto L_08A1A318;
    return;
L_08A1A318:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6492));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(6504));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(6516));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A1A340u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1A340u) goto L_08A1A340;
    return;
L_08A1A340:
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
L_08A1A35C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24264)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1A39C;
      }
      goto L_08A1A374;
    }
L_08A1A374:
    ctx.set_gpr(31, 0x08A1A37Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A1A37Cu) goto L_08A1A37C;
    return;
L_08A1A37C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A1A388u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A1A388u) goto L_08A1A388;
    return;
L_08A1A388:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1A394u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A1A394u) goto L_08A1A394;
    return;
L_08A1A394:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-24264), ctx.gpr[2]);
    goto L_08A1A39C;
L_08A1A39C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24264)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1A3B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24264)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1A3E0;
      }
      goto L_08A1A3CC;
    }
L_08A1A3CC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1A3E8;
      }
      goto L_08A1A3E0;
    }
L_08A1A3E0:
    ctx.set_gpr(31, 0x08A1A3E8u);
    // nop
    goto L_08A1A444;
L_08A1A3E8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24264)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1A400:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A1A414u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x08A1A414u) goto L_08A1A414;
    return;
L_08A1A414:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-7976));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A1A428u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A1A428u) goto L_08A1A428;
    return;
L_08A1A428:
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
L_08A1A444:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-23444));
    ctx.set_gpr(31, 0x08A1A45Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A1A45Cu) goto L_08A1A45C;
    return;
L_08A1A45C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1A46C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1A47Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A1A47Cu) goto L_08A1A47C;
    return;
L_08A1A47C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(6528));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24264));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2210u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-23328));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(6536));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2210u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-23552));
    ctx.set_gpr(31, 0x08A1A4D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A1A4D0u) goto L_08A1A4D0;
    return;
L_08A1A4D0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1A4E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1A4F0u);
    // nop
    goto L_08A1A3B4;
L_08A1A4F0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1A500:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A1A518u);
    // nop
    goto L_08A1A6A0;
L_08A1A518:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24260)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1A52Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x08A1A52Cu) goto L_08A1A52C;
    return;
L_08A1A52C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1A540:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24260)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1A580;
      }
      goto L_08A1A558;
    }
L_08A1A558:
    ctx.set_gpr(31, 0x08A1A560u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A1A560u) goto L_08A1A560;
    return;
L_08A1A560:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A1A56Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A1A56Cu) goto L_08A1A56C;
    return;
L_08A1A56C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1A578u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A1A578u) goto L_08A1A578;
    return;
L_08A1A578:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-24260), ctx.gpr[2]);
    goto L_08A1A580;
L_08A1A580:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24260)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1A598:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24260)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1A5C4;
      }
      goto L_08A1A5B0;
    }
L_08A1A5B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1A5CC;
      }
      goto L_08A1A5C4;
    }
L_08A1A5C4:
    ctx.set_gpr(31, 0x08A1A5CCu);
    // nop
    goto L_08A1A6A0;
L_08A1A5CC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24260)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1A5E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A1A5FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 646u, 0x08A06A18u>(ctx, &aot_mem) && ctx.pc == 0x08A1A5FCu) goto L_08A1A5FC;
    return;
L_08A1A5FC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15980));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.set_gpr(31, 0x08A1A620u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A1A620u) goto L_08A1A620;
    return;
L_08A1A620:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15980));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1A64C;
      }
      goto L_08A1A644;
    }
L_08A1A644:
    ctx.set_gpr(31, 0x08A1A64Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1A64Cu) goto L_08A1A64C;
    return;
L_08A1A64C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1A660;
      }
      goto L_08A1A658;
    }
L_08A1A658:
    ctx.set_gpr(31, 0x08A1A660u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1A660u) goto L_08A1A660;
    return;
L_08A1A660:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-13116));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(31, 0x08A1A678u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1A678u) goto L_08A1A678;
    return;
L_08A1A678:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A1A688u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 278u, 0x089F24C0u>(ctx, &aot_mem) && ctx.pc == 0x08A1A688u) goto L_08A1A688;
    return;
L_08A1A688:
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
L_08A1A6A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-22840));
    ctx.set_gpr(31, 0x08A1A6B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A1A6B8u) goto L_08A1A6B8;
    return;
L_08A1A6B8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1A6C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1A6D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A1A6D8u) goto L_08A1A6D8;
    return;
L_08A1A6D8:
    ctx.set_gpr(2, 2210u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-22684));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(6552));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24260));
    ctx.set_gpr(6, 2210u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(10072));
    ctx.set_gpr(7, 2209u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-24808));
    ctx.set_gpr(8, 2210u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-22716));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(6564));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(48));
    ctx.set_gpr(11, 2210u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-23068));
    ctx.set_gpr(31, 0x08A1A734u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A1A734u) goto L_08A1A734;
    return;
L_08A1A734:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1A744:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1A754u);
    // nop
    goto L_08A1A598;
L_08A1A754:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1A764:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24260)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1A790u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A1A790u) goto L_08A1A790;
    return;
L_08A1A790:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6576));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08A1A7ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A1A7ACu) goto L_08A1A7AC;
    return;
L_08A1A7AC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6628));
    ctx.set_gpr(31, 0x08A1A7C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x08A1A7C0u) goto L_08A1A7C0;
    return;
L_08A1A7C0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A1A7D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 700u, 0x08927138u>(ctx, &aot_mem) && ctx.pc == 0x08A1A7D4u) goto L_08A1A7D4;
    return;
L_08A1A7D4:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08A1A7F0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A1A7F0u) goto L_08A1A7F0;
    return;
L_08A1A7F0:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A1A804u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 745u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A1A804u) goto L_08A1A804;
    return;
L_08A1A804:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-24256));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A1A824u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 145u, 0x08944AF0u>(ctx, &aot_mem) && ctx.pc == 0x08A1A824u) goto L_08A1A824;
    return;
L_08A1A824:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 10u);
    ctx.set_gpr(2, ctx.gpr[2] >> 10u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1A84C;
      }
      goto L_08A1A840;
    }
L_08A1A840:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A1A84Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 556u, 0x089467C8u>(ctx, &aot_mem) && ctx.pc == 0x08A1A84Cu) goto L_08A1A84C;
    return;
L_08A1A84C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A1A85Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1A85Cu) goto L_08A1A85C;
    return;
L_08A1A85C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1A868u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 373u, 0x088B63F0u>(ctx, &aot_mem) && ctx.pc == 0x08A1A868u) goto L_08A1A868;
    return;
L_08A1A868:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1A880u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1A880u) goto L_08A1A880;
    return;
L_08A1A880:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1A88Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0046_entry, 46u, 109u, 0x088BCA64u>(ctx, &aot_mem) && ctx.pc == 0x08A1A88Cu) goto L_08A1A88C;
    return;
L_08A1A88C:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6604));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(6612));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(6620));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A1A8C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1A8C4u) goto L_08A1A8C4;
    return;
L_08A1A8C4:
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
L_08A1A8E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24244)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1A924;
      }
      goto L_08A1A8FC;
    }
L_08A1A8FC:
    ctx.set_gpr(31, 0x08A1A904u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A1A904u) goto L_08A1A904;
    return;
L_08A1A904:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A1A910u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A1A910u) goto L_08A1A910;
    return;
L_08A1A910:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1A91Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A1A91Cu) goto L_08A1A91C;
    return;
L_08A1A91C:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-24244), ctx.gpr[2]);
    goto L_08A1A924;
L_08A1A924:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24244)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1A93C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24244)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1A968;
      }
      goto L_08A1A954;
    }
L_08A1A954:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1A970;
      }
      goto L_08A1A968;
    }
L_08A1A968:
    ctx.set_gpr(31, 0x08A1A970u);
    // nop
    goto L_08A1A9CC;
L_08A1A970:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24244)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1A988:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A1A99Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x08A1A99Cu) goto L_08A1A99C;
    return;
L_08A1A99C:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-8080));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A1A9B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A1A9B0u) goto L_08A1A9B0;
    return;
L_08A1A9B0:
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
L_08A1A9CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-22028));
    ctx.set_gpr(31, 0x08A1A9E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A1A9E4u) goto L_08A1A9E4;
    return;
L_08A1A9E4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1A9F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1AA04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A1AA04u) goto L_08A1AA04;
    return;
L_08A1AA04:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(6640));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24244));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2210u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-21912));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(6648));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2210u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-22136));
    ctx.set_gpr(31, 0x08A1AA58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A1AA58u) goto L_08A1AA58;
    return;
L_08A1AA58:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1AA68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1AA78u);
    // nop
    goto L_08A1A93C;
L_08A1AA78:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1AA88:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24240)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1AAB4;
      }
      goto L_08A1AAA0;
    }
L_08A1AAA0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1AABC;
      }
      goto L_08A1AAB4;
    }
L_08A1AAB4:
    ctx.set_gpr(31, 0x08A1AABCu);
    // nop
    goto L_08A1AB64;
L_08A1AABC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24240)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1AAD4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A1AAECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 727u, 0x08A0720Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1AAECu) goto L_08A1AAEC;
    return;
L_08A1AAEC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-8256));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A1AB0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A1AB0Cu) goto L_08A1AB0C;
    return;
L_08A1AB0C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15980));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(31, 0x08A1AB30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1AB30u) goto L_08A1AB30;
    return;
L_08A1AB30:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(31, 0x08A1AB3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 253u, 0x0883D42Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1AB3Cu) goto L_08A1AB3C;
    return;
L_08A1AB3C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A1AB4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 320u, 0x08A09D30u>(ctx, &aot_mem) && ctx.pc == 0x08A1AB4Cu) goto L_08A1AB4C;
    return;
L_08A1AB4C:
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
L_08A1AB64:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-21620));
    ctx.set_gpr(31, 0x08A1AB7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A1AB7Cu) goto L_08A1AB7C;
    return;
L_08A1AB7C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1AB8C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1AB9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A1AB9Cu) goto L_08A1AB9C;
    return;
L_08A1AB9C:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24240));
    ctx.set_gpr(6, 2210u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-22840));
    ctx.set_gpr(7, 2209u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(18436));
    ctx.set_gpr(8, 2210u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-21512));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(6664));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(48));
    ctx.set_gpr(11, 2210u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-21804));
    ctx.set_gpr(31, 0x08A1ABE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A1ABE8u) goto L_08A1ABE8;
    return;
L_08A1ABE8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1ABF8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1AC08u);
    // nop
    goto L_08A1AA88;
L_08A1AC08:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1AC18:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24236)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1AC44;
      }
      goto L_08A1AC30;
    }
L_08A1AC30:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1AC4C;
      }
      goto L_08A1AC44;
    }
L_08A1AC44:
    ctx.set_gpr(31, 0x08A1AC4Cu);
    // nop
    goto L_08A1B21C;
L_08A1AC4C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24236)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1AC64:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-624));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1AC80u);
    // nop
    goto L_08A1B12C;
L_08A1AC80:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15804));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(516));
    ctx.set_gpr(31, 0x08A1AC9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A1AC9Cu) goto L_08A1AC9C;
    return;
L_08A1AC9C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(572), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(576), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(584), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(588), 0u);
    ctx.set_gpr(31, 0x08A1ACB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A1ACB4u) goto L_08A1ACB4;
    return;
L_08A1ACB4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15804));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(604)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1ACE0;
      }
      goto L_08A1ACD8;
    }
L_08A1ACD8:
    ctx.set_gpr(31, 0x08A1ACE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1ACE0u) goto L_08A1ACE0;
    return;
L_08A1ACE0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1ACF4;
      }
      goto L_08A1ACEC;
    }
L_08A1ACEC:
    ctx.set_gpr(31, 0x08A1ACF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1ACF4u) goto L_08A1ACF4;
    return;
L_08A1ACF4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1AD08;
      }
      goto L_08A1AD00;
    }
L_08A1AD00:
    ctx.set_gpr(31, 0x08A1AD08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1AD08u) goto L_08A1AD08;
    return;
L_08A1AD08:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(588)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1AD1C;
      }
      goto L_08A1AD14;
    }
L_08A1AD14:
    ctx.set_gpr(31, 0x08A1AD1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1AD1Cu) goto L_08A1AD1C;
    return;
L_08A1AD1C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(512)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1AD30;
      }
      goto L_08A1AD28;
    }
L_08A1AD28:
    ctx.set_gpr(31, 0x08A1AD30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1AD30u) goto L_08A1AD30;
    return;
L_08A1AD30:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x08A1AD40u);
    // nop
    goto L_08A1AD58;
L_08A1AD40:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(624));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1AD58:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1B110;
      }
      goto L_08A1AD78;
    }
L_08A1AD78:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-14060));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(472));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1ADA4;
      }
      goto L_08A1AD90;
    }
L_08A1AD90:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(472)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1ADA4;
      }
      goto L_08A1AD9C;
    }
L_08A1AD9C:
    ctx.set_gpr(31, 0x08A1ADA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1ADA4u) goto L_08A1ADA4;
    return;
L_08A1ADA4:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(336));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1ADC4;
      }
      goto L_08A1ADB0;
    }
L_08A1ADB0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1ADC4;
      }
      goto L_08A1ADBC;
    }
L_08A1ADBC:
    ctx.set_gpr(31, 0x08A1ADC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1ADC4u) goto L_08A1ADC4;
    return;
L_08A1ADC4:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(268));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1ADE4;
      }
      goto L_08A1ADD0;
    }
L_08A1ADD0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(268)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1ADE4;
      }
      goto L_08A1ADDC;
    }
L_08A1ADDC:
    ctx.set_gpr(31, 0x08A1ADE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1ADE4u) goto L_08A1ADE4;
    return;
L_08A1ADE4:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(264));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1AE04;
      }
      goto L_08A1ADF0;
    }
L_08A1ADF0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(264)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1AE04;
      }
      goto L_08A1ADFC;
    }
L_08A1ADFC:
    ctx.set_gpr(31, 0x08A1AE04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1AE04u) goto L_08A1AE04;
    return;
L_08A1AE04:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(260));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1AE24;
      }
      goto L_08A1AE10;
    }
L_08A1AE10:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(260)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1AE24;
      }
      goto L_08A1AE1C;
    }
L_08A1AE1C:
    ctx.set_gpr(31, 0x08A1AE24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1AE24u) goto L_08A1AE24;
    return;
L_08A1AE24:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(256));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1AE44;
      }
      goto L_08A1AE30;
    }
L_08A1AE30:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(256)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1AE44;
      }
      goto L_08A1AE3C;
    }
L_08A1AE3C:
    ctx.set_gpr(31, 0x08A1AE44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1AE44u) goto L_08A1AE44;
    return;
L_08A1AE44:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(252));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1AE64;
      }
      goto L_08A1AE50;
    }
L_08A1AE50:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(252)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1AE64;
      }
      goto L_08A1AE5C;
    }
L_08A1AE5C:
    ctx.set_gpr(31, 0x08A1AE64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1AE64u) goto L_08A1AE64;
    return;
L_08A1AE64:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(248));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1AE84;
      }
      goto L_08A1AE70;
    }
L_08A1AE70:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(248)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1AE84;
      }
      goto L_08A1AE7C;
    }
L_08A1AE7C:
    ctx.set_gpr(31, 0x08A1AE84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1AE84u) goto L_08A1AE84;
    return;
L_08A1AE84:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(244));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1AEA4;
      }
      goto L_08A1AE90;
    }
L_08A1AE90:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(244)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1AEA4;
      }
      goto L_08A1AE9C;
    }
L_08A1AE9C:
    ctx.set_gpr(31, 0x08A1AEA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1AEA4u) goto L_08A1AEA4;
    return;
L_08A1AEA4:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(240));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1AEC4;
      }
      goto L_08A1AEB0;
    }
L_08A1AEB0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(240)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1AEC4;
      }
      goto L_08A1AEBC;
    }
L_08A1AEBC:
    ctx.set_gpr(31, 0x08A1AEC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1AEC4u) goto L_08A1AEC4;
    return;
L_08A1AEC4:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(236));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1AEE4;
      }
      goto L_08A1AED0;
    }
L_08A1AED0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(236)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1AEE4;
      }
      goto L_08A1AEDC;
    }
L_08A1AEDC:
    ctx.set_gpr(31, 0x08A1AEE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1AEE4u) goto L_08A1AEE4;
    return;
L_08A1AEE4:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(232));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1AF04;
      }
      goto L_08A1AEF0;
    }
L_08A1AEF0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(232)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1AF04;
      }
      goto L_08A1AEFC;
    }
L_08A1AEFC:
    ctx.set_gpr(31, 0x08A1AF04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1AF04u) goto L_08A1AF04;
    return;
L_08A1AF04:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(96));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1AF24;
      }
      goto L_08A1AF10;
    }
L_08A1AF10:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1AF24;
      }
      goto L_08A1AF1C;
    }
L_08A1AF1C:
    ctx.set_gpr(31, 0x08A1AF24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1AF24u) goto L_08A1AF24;
    return;
L_08A1AF24:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(92));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1AF44;
      }
      goto L_08A1AF30;
    }
L_08A1AF30:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1AF44;
      }
      goto L_08A1AF3C;
    }
L_08A1AF3C:
    ctx.set_gpr(31, 0x08A1AF44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1AF44u) goto L_08A1AF44;
    return;
L_08A1AF44:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(88));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1AF64;
      }
      goto L_08A1AF50;
    }
L_08A1AF50:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1AF64;
      }
      goto L_08A1AF5C;
    }
L_08A1AF5C:
    ctx.set_gpr(31, 0x08A1AF64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1AF64u) goto L_08A1AF64;
    return;
L_08A1AF64:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(84));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1AF84;
      }
      goto L_08A1AF70;
    }
L_08A1AF70:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1AF84;
      }
      goto L_08A1AF7C;
    }
L_08A1AF7C:
    ctx.set_gpr(31, 0x08A1AF84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1AF84u) goto L_08A1AF84;
    return;
L_08A1AF84:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(80));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1AFA4;
      }
      goto L_08A1AF90;
    }
L_08A1AF90:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1AFA4;
      }
      goto L_08A1AF9C;
    }
L_08A1AF9C:
    ctx.set_gpr(31, 0x08A1AFA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1AFA4u) goto L_08A1AFA4;
    return;
L_08A1AFA4:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(76));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1AFC4;
      }
      goto L_08A1AFB0;
    }
L_08A1AFB0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1AFC4;
      }
      goto L_08A1AFBC;
    }
L_08A1AFBC:
    ctx.set_gpr(31, 0x08A1AFC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1AFC4u) goto L_08A1AFC4;
    return;
L_08A1AFC4:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(72));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1AFE4;
      }
      goto L_08A1AFD0;
    }
L_08A1AFD0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1AFE4;
      }
      goto L_08A1AFDC;
    }
L_08A1AFDC:
    ctx.set_gpr(31, 0x08A1AFE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1AFE4u) goto L_08A1AFE4;
    return;
L_08A1AFE4:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(68));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1B004;
      }
      goto L_08A1AFF0;
    }
L_08A1AFF0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1B004;
      }
      goto L_08A1AFFC;
    }
L_08A1AFFC:
    ctx.set_gpr(31, 0x08A1B004u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1B004u) goto L_08A1B004;
    return;
L_08A1B004:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1B024;
      }
      goto L_08A1B010;
    }
L_08A1B010:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1B024;
      }
      goto L_08A1B01C;
    }
L_08A1B01C:
    ctx.set_gpr(31, 0x08A1B024u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1B024u) goto L_08A1B024;
    return;
L_08A1B024:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(60));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1B044;
      }
      goto L_08A1B030;
    }
L_08A1B030:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1B044;
      }
      goto L_08A1B03C;
    }
L_08A1B03C:
    ctx.set_gpr(31, 0x08A1B044u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1B044u) goto L_08A1B044;
    return;
L_08A1B044:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(56));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1B064;
      }
      goto L_08A1B050;
    }
L_08A1B050:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1B064;
      }
      goto L_08A1B05C;
    }
L_08A1B05C:
    ctx.set_gpr(31, 0x08A1B064u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1B064u) goto L_08A1B064;
    return;
L_08A1B064:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(52));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1B084;
      }
      goto L_08A1B070;
    }
L_08A1B070:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1B084;
      }
      goto L_08A1B07C;
    }
L_08A1B07C:
    ctx.set_gpr(31, 0x08A1B084u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1B084u) goto L_08A1B084;
    return;
L_08A1B084:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(36));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1B0A4;
      }
      goto L_08A1B090;
    }
L_08A1B090:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1B0A4;
      }
      goto L_08A1B09C;
    }
L_08A1B09C:
    ctx.set_gpr(31, 0x08A1B0A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1B0A4u) goto L_08A1B0A4;
    return;
L_08A1B0A4:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1B0C4;
      }
      goto L_08A1B0B0;
    }
L_08A1B0B0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1B0C4;
      }
      goto L_08A1B0BC;
    }
L_08A1B0BC:
    ctx.set_gpr(31, 0x08A1B0C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1B0C4u) goto L_08A1B0C4;
    return;
L_08A1B0C4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1B0F8;
      }
      goto L_08A1B0CC;
    }
L_08A1B0CC:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-23268));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(28));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1B0F8;
      }
      goto L_08A1B0E4;
    }
L_08A1B0E4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1B0F8;
      }
      goto L_08A1B0F0;
    }
L_08A1B0F0:
    ctx.set_gpr(31, 0x08A1B0F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1B0F8u) goto L_08A1B0F8;
    return;
L_08A1B0F8:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(ctx.gpr[16]))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A1B110;
      }
      goto L_08A1B104;
    }
L_08A1B104:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A1B110u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 554u, 0x089467A8u>(ctx, &aot_mem) && ctx.pc == 0x08A1B110u) goto L_08A1B110;
    return;
L_08A1B110:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
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
L_08A1B12C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A1B144u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A1B144u) goto L_08A1B144;
    return;
L_08A1B144:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-23268));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-14060));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(100));
    ctx.set_gpr(31, 0x08A1B1A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A1B1A4u) goto L_08A1B1A4;
    return;
L_08A1B1A4:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(164));
    ctx.set_gpr(31, 0x08A1B1B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A1B1B0u) goto L_08A1B1B0;
    return;
L_08A1B1B0:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(232), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(236), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(240), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(244), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(248), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(252), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(256), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(260), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(264), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(268), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(272));
    ctx.set_gpr(31, 0x08A1B1E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A1B1E4u) goto L_08A1B1E4;
    return;
L_08A1B1E4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(336), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(344));
    ctx.set_gpr(31, 0x08A1B1F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A1B1F4u) goto L_08A1B1F4;
    return;
L_08A1B1F4:
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(408));
    ctx.set_gpr(31, 0x08A1B200u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 723u, 0x089FF868u>(ctx, &aot_mem) && ctx.pc == 0x08A1B200u) goto L_08A1B200;
    return;
L_08A1B200:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(472), 0u);
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
L_08A1B21C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-19900));
    ctx.set_gpr(31, 0x08A1B234u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A1B234u) goto L_08A1B234;
    return;
L_08A1B234:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1B244:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1B254u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A1B254u) goto L_08A1B254;
    return;
L_08A1B254:
    ctx.set_gpr(2, 2210u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-19720));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, 2210u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-19096));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(6684));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24236));
    ctx.set_gpr(6, 2210u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-4912));
    ctx.set_gpr(7, 2210u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-19736));
    ctx.set_gpr(8, 2210u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-19768));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(6704));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(608));
    ctx.set_gpr(11, 2210u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-21404));
    ctx.set_gpr(31, 0x08A1B2B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A1B2B8u) goto L_08A1B2B8;
    return;
L_08A1B2B8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1B2C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1B2D8u);
    // nop
    goto L_08A1AC18;
L_08A1B2D8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1B2E8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-23672)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1B2F8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24236)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1B320u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A1B320u) goto L_08A1B320;
    return;
L_08A1B320:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(6728));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(13));
    ctx.set_gpr(31, 0x08A1B33Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A1B33Cu) goto L_08A1B33C;
    return;
L_08A1B33C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A1B34Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1B34Cu) goto L_08A1B34C;
    return;
L_08A1B34C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    ctx.set_gpr(2, 16256u << 16u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.set_gpr(31, 0x08A1B3A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 860u, 0x0883FF48u>(ctx, &aot_mem) && ctx.pc == 0x08A1B3A4u) goto L_08A1B3A4;
    return;
L_08A1B3A4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.set_gpr(31, 0x08A1B3B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 860u, 0x0883FF48u>(ctx, &aot_mem) && ctx.pc == 0x08A1B3B4u) goto L_08A1B3B4;
    return;
L_08A1B3B4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x08A1B3C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 860u, 0x0883FF48u>(ctx, &aot_mem) && ctx.pc == 0x08A1B3C4u) goto L_08A1B3C4;
    return;
L_08A1B3C4:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A1B3D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 860u, 0x0883FF48u>(ctx, &aot_mem) && ctx.pc == 0x08A1B3D4u) goto L_08A1B3D4;
    return;
L_08A1B3D4:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.set_gpr(31, 0x08A1B3E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 575u, 0x089FAB04u>(ctx, &aot_mem) && ctx.pc == 0x08A1B3E4u) goto L_08A1B3E4;
    return;
L_08A1B3E4:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1B3F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1B3F4u) goto L_08A1B3F4;
    return;
L_08A1B3F4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1B400u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 101u, 0x088C0914u>(ctx, &aot_mem) && ctx.pc == 0x08A1B400u) goto L_08A1B400;
    return;
L_08A1B400:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1B41Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1B41Cu) goto L_08A1B41C;
    return;
L_08A1B41C:
    ctx.set_gpr(3, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1B430u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 643u, 0x0891EEE0u>(ctx, &aot_mem) && ctx.pc == 0x08A1B430u) goto L_08A1B430;
    return;
L_08A1B430:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1B440u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1B440u) goto L_08A1B440;
    return;
L_08A1B440:
    ctx.set_gpr(3, 16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1B454u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 643u, 0x0891EEE0u>(ctx, &aot_mem) && ctx.pc == 0x08A1B454u) goto L_08A1B454;
    return;
L_08A1B454:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(6));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1B464u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1B464u) goto L_08A1B464;
    return;
L_08A1B464:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1B470u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 631u, 0x089F7758u>(ctx, &aot_mem) && ctx.pc == 0x08A1B470u) goto L_08A1B470;
    return;
L_08A1B470:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1B48Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1B48Cu) goto L_08A1B48C;
    return;
L_08A1B48C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1B498u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0123_entry, 123u, 423u, 0x089F2F4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1B498u) goto L_08A1B498;
    return;
L_08A1B498:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1B4B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1B4B4u) goto L_08A1B4B4;
    return;
L_08A1B4B4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08A1B4C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 745u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x08A1B4C4u) goto L_08A1B4C4;
    return;
L_08A1B4C4:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(10));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1B4D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1B4D4u) goto L_08A1B4D4;
    return;
L_08A1B4D4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1B4E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 590u, 0x089F73A0u>(ctx, &aot_mem) && ctx.pc == 0x08A1B4E0u) goto L_08A1B4E0;
    return;
L_08A1B4E0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(11));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1B4FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1B4FCu) goto L_08A1B4FC;
    return;
L_08A1B4FC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1B508u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0124_entry, 124u, 590u, 0x089F73A0u>(ctx, &aot_mem) && ctx.pc == 0x08A1B508u) goto L_08A1B508;
    return;
L_08A1B508:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7024));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(7076));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(7128));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A1B53Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1B53Cu) goto L_08A1B53C;
    return;
L_08A1B53C:
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-19048));
    ctx.set_gpr(31, 0x08A1B54Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 237u, 0x089451B8u>(ctx, &aot_mem) && ctx.pc == 0x08A1B54Cu) goto L_08A1B54C;
    return;
L_08A1B54C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(144));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1B568:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1B578u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 378u, 0x08A45C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1B578u) goto L_08A1B578;
    return;
L_08A1B578:
    ctx.set_gpr(4, 2212u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(23632));
    ctx.set_gpr(31, 0x08A1B588u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 240u, 0x089451F4u>(ctx, &aot_mem) && ctx.pc == 0x08A1B588u) goto L_08A1B588;
    return;
L_08A1B588:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1B598:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1B5A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 382u, 0x08A45CBCu>(ctx, &aot_mem) && ctx.pc == 0x08A1B5A8u) goto L_08A1B5A8;
    return;
L_08A1B5A8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1B5B8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24180)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1B5E4;
      }
      goto L_08A1B5D0;
    }
L_08A1B5D0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1B5EC;
      }
      goto L_08A1B5E4;
    }
L_08A1B5E4:
    ctx.set_gpr(31, 0x08A1B5ECu);
    // nop
    goto L_08A1B604;
L_08A1B5EC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24180)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1B604:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-18900));
    ctx.set_gpr(31, 0x08A1B61Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A1B61Cu) goto L_08A1B61C;
    return;
L_08A1B61C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1B62C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1B63Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A1B63Cu) goto L_08A1B63C;
    return;
L_08A1B63C:
    ctx.set_gpr(2, 2210u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-18748));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7180));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24180));
    ctx.set_gpr(6, 2210u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-24720));
    ctx.set_gpr(7, 2181u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-26096));
    ctx.set_gpr(8, 2210u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-18780));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(7216));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(112));
    ctx.set_gpr(11, 0u + 0u);
    ctx.set_gpr(31, 0x08A1B694u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A1B694u) goto L_08A1B694;
    return;
L_08A1B694:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1B6A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1B6B4u);
    // nop
    goto L_08A1B5B8;
L_08A1B6B4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1B6C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24180)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1B6ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A1B6ECu) goto L_08A1B6EC;
    return;
L_08A1B6EC:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7240));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(21));
    ctx.set_gpr(31, 0x08A1B708u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A1B708u) goto L_08A1B708;
    return;
L_08A1B708:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A1B718u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1B718u) goto L_08A1B718;
    return;
L_08A1B718:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1B724u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 259u, 0x088B1888u>(ctx, &aot_mem) && ctx.pc == 0x08A1B724u) goto L_08A1B724;
    return;
L_08A1B724:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1B738u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1B738u) goto L_08A1B738;
    return;
L_08A1B738:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1B744u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 358u, 0x088B2194u>(ctx, &aot_mem) && ctx.pc == 0x08A1B744u) goto L_08A1B744;
    return;
L_08A1B744:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1B758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1B758u) goto L_08A1B758;
    return;
L_08A1B758:
    ctx.set_gpr(3, 16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1B76Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0070_entry, 70u, 643u, 0x0891EEE0u>(ctx, &aot_mem) && ctx.pc == 0x08A1B76Cu) goto L_08A1B76C;
    return;
L_08A1B76C:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1B77Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1B77Cu) goto L_08A1B77C;
    return;
L_08A1B77C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1B788u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 412u, 0x088B2640u>(ctx, &aot_mem) && ctx.pc == 0x08A1B788u) goto L_08A1B788;
    return;
L_08A1B788:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1B79Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1B79Cu) goto L_08A1B79C;
    return;
L_08A1B79C:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1B7B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1B7B0u) goto L_08A1B7B0;
    return;
L_08A1B7B0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1B7BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 581u, 0x088C3344u>(ctx, &aot_mem) && ctx.pc == 0x08A1B7BCu) goto L_08A1B7BC;
    return;
L_08A1B7BC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(9));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1B7DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1B7DCu) goto L_08A1B7DC;
    return;
L_08A1B7DC:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1B7E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 581u, 0x088C3344u>(ctx, &aot_mem) && ctx.pc == 0x08A1B7E8u) goto L_08A1B7E8;
    return;
L_08A1B7E8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(10));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1B808u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1B808u) goto L_08A1B808;
    return;
L_08A1B808:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(11));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1B81Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1B81Cu) goto L_08A1B81C;
    return;
L_08A1B81C:
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1B830u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1B830u) goto L_08A1B830;
    return;
L_08A1B830:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1B83Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 358u, 0x088B2194u>(ctx, &aot_mem) && ctx.pc == 0x08A1B83Cu) goto L_08A1B83C;
    return;
L_08A1B83C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(13));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1B854u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1B854u) goto L_08A1B854;
    return;
L_08A1B854:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1B860u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 301u, 0x088B1C68u>(ctx, &aot_mem) && ctx.pc == 0x08A1B860u) goto L_08A1B860;
    return;
L_08A1B860:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(14));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1B878u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1B878u) goto L_08A1B878;
    return;
L_08A1B878:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1B884u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 173u, 0x088B1040u>(ctx, &aot_mem) && ctx.pc == 0x08A1B884u) goto L_08A1B884;
    return;
L_08A1B884:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(15));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1B89Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1B89Cu) goto L_08A1B89C;
    return;
L_08A1B89C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1B8A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 301u, 0x088B1C68u>(ctx, &aot_mem) && ctx.pc == 0x08A1B8A8u) goto L_08A1B8A8;
    return;
L_08A1B8A8:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1B8C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1B8C0u) goto L_08A1B8C0;
    return;
L_08A1B8C0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1B8CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 173u, 0x088B1040u>(ctx, &aot_mem) && ctx.pc == 0x08A1B8CCu) goto L_08A1B8CC;
    return;
L_08A1B8CC:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(17));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1B8E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1B8E4u) goto L_08A1B8E4;
    return;
L_08A1B8E4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1B8F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 197u, 0x088C1220u>(ctx, &aot_mem) && ctx.pc == 0x08A1B8F0u) goto L_08A1B8F0;
    return;
L_08A1B8F0:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(18));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1B908u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1B908u) goto L_08A1B908;
    return;
L_08A1B908:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1B914u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 358u, 0x088B2194u>(ctx, &aot_mem) && ctx.pc == 0x08A1B914u) goto L_08A1B914;
    return;
L_08A1B914:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(19));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1B92Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1B92Cu) goto L_08A1B92C;
    return;
L_08A1B92C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1B938u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 301u, 0x088B1C68u>(ctx, &aot_mem) && ctx.pc == 0x08A1B938u) goto L_08A1B938;
    return;
L_08A1B938:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1B950u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1B950u) goto L_08A1B950;
    return;
L_08A1B950:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1B95Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 173u, 0x088B1040u>(ctx, &aot_mem) && ctx.pc == 0x08A1B95Cu) goto L_08A1B95C;
    return;
L_08A1B95C:
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7668));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(7752));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(7836));
    ctx.set_gpr(8, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A1B98Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1B98Cu) goto L_08A1B98C;
    return;
L_08A1B98C:
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-17988));
    ctx.set_gpr(3, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-24180)));
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
L_08A1B9BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1B9CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 689u, 0x08A27BA4u>(ctx, &aot_mem) && ctx.pc == 0x08A1B9CCu) goto L_08A1B9CC;
    return;
L_08A1B9CC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1B9DC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24092)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1BA1C;
      }
      goto L_08A1B9F4;
    }
L_08A1B9F4:
    ctx.set_gpr(31, 0x08A1B9FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 217u, 0x0893CDECu>(ctx, &aot_mem) && ctx.pc == 0x08A1B9FCu) goto L_08A1B9FC;
    return;
L_08A1B9FC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08A1BA08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x08A1BA08u) goto L_08A1BA08;
    return;
L_08A1BA08:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1BA14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 732u, 0x088D6FE8u>(ctx, &aot_mem) && ctx.pc == 0x08A1BA14u) goto L_08A1BA14;
    return;
L_08A1BA14:
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-24092), ctx.gpr[2]);
    goto L_08A1BA1C;
L_08A1BA1C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24092)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1BA34:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24092)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1BA60;
      }
      goto L_08A1BA4C;
    }
L_08A1BA4C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1BA68;
      }
      goto L_08A1BA60;
    }
L_08A1BA60:
    ctx.set_gpr(31, 0x08A1BA68u);
    // nop
    goto L_08A1BAC4;
L_08A1BA68:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24092)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1BA80:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(31, 0x08A1BA94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0042_entry, 42u, 574u, 0x088ADBE0u>(ctx, &aot_mem) && ctx.pc == 0x08A1BA94u) goto L_08A1BA94;
    return;
L_08A1BA94:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-8360));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(31, 0x08A1BAA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A1BAA8u) goto L_08A1BAA8;
    return;
L_08A1BAA8:
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
L_08A1BAC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-17684));
    ctx.set_gpr(31, 0x08A1BADCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A1BADCu) goto L_08A1BADC;
    return;
L_08A1BADC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1BAEC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1BAFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A1BAFCu) goto L_08A1BAFC;
    return;
L_08A1BAFC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7920));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24092));
    ctx.set_gpr(6, 2191u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(-13396));
    ctx.set_gpr(7, 2187u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-9000));
    ctx.set_gpr(8, 2210u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-17568));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(7928));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(20));
    ctx.set_gpr(11, 2210u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-17792));
    ctx.set_gpr(31, 0x08A1BB50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A1BB50u) goto L_08A1BB50;
    return;
L_08A1BB50:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1BB60:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1BB70u);
    // nop
    goto L_08A1BA34;
L_08A1BB70:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1BB80:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24088)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1BBAC;
      }
      goto L_08A1BB98;
    }
L_08A1BB98:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1BBB4;
      }
      goto L_08A1BBAC;
    }
L_08A1BBAC:
    ctx.set_gpr(31, 0x08A1BBB4u);
    // nop
    goto L_08A1BC40;
L_08A1BBB4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24088)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1BBCC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x08A1BBE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A1BBE4u) goto L_08A1BBE4;
    return;
L_08A1BBE4:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15444));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(31, 0x08A1BBFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A1BBFCu) goto L_08A1BBFC;
    return;
L_08A1BBFC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15444));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1BC28;
      }
      goto L_08A1BC20;
    }
L_08A1BC20:
    ctx.set_gpr(31, 0x08A1BC28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1BC28u) goto L_08A1BC28;
    return;
L_08A1BC28:
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
L_08A1BC40:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-17304));
    ctx.set_gpr(31, 0x08A1BC58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A1BC58u) goto L_08A1BC58;
    return;
L_08A1BC58:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1BC68:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1BC78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A1BC78u) goto L_08A1BC78;
    return;
L_08A1BC78:
    ctx.set_gpr(2, 2210u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-17148));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(7956));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24088));
    ctx.set_gpr(6, 2208u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(23528));
    ctx.set_gpr(7, 2208u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(25116));
    ctx.set_gpr(8, 2210u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-17180));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(7964));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(11, 2210u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-17460));
    ctx.set_gpr(31, 0x08A1BCD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A1BCD4u) goto L_08A1BCD4;
    return;
L_08A1BCD4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1BCE4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1BCF4u);
    // nop
    goto L_08A1BB80;
L_08A1BCF4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1BD04:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24088)));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A1BD2Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A1BD2Cu) goto L_08A1BD2C;
    return;
L_08A1BD2C:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(7988));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(31, 0x08A1BD48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem) && ctx.pc == 0x08A1BD48u) goto L_08A1BD48;
    return;
L_08A1BD48:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A1BD58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1BD58u) goto L_08A1BD58;
    return;
L_08A1BD58:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(31, 0x08A1BD68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 648u, 0x08926D64u>(ctx, &aot_mem) && ctx.pc == 0x08A1BD68u) goto L_08A1BD68;
    return;
L_08A1BD68:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08A1BD78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 148u, 0x08944B4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1BD78u) goto L_08A1BD78;
    return;
L_08A1BD78:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08A1BD84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 41u, 0x08A1C3A4u>(ctx, &aot_mem) && ctx.pc == 0x08A1BD84u) goto L_08A1BD84;
    return;
L_08A1BD84:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8032));
    ctx.set_gpr(6, 2229u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(8040));
    ctx.set_gpr(7, 2229u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(8048));
    ctx.set_gpr(8, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08A1BDB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 162u, 0x08944C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A1BDB0u) goto L_08A1BDB0;
    return;
L_08A1BDB0:
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
L_08A1BDCC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08A1BDE4u);
    // nop
    goto L_08A1BEFC;
L_08A1BDE4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24076)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1BDF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 50u, 0x089443D4u>(ctx, &aot_mem) && ctx.pc == 0x08A1BDF8u) goto L_08A1BDF8;
    return;
L_08A1BDF8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1BE0C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24076)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1BE38;
      }
      goto L_08A1BE24;
    }
L_08A1BE24:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A1BE40;
      }
      goto L_08A1BE38;
    }
L_08A1BE38:
    ctx.set_gpr(31, 0x08A1BE40u);
    // nop
    goto L_08A1BEFC;
L_08A1BE40:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24076)));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1BE58:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08A1BE70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 398u, 0x08945BF8u>(ctx, &aot_mem) && ctx.pc == 0x08A1BE70u) goto L_08A1BE70;
    return;
L_08A1BE70:
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15308));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.set_gpr(31, 0x08A1BE90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 444u, 0x08905FF0u>(ctx, &aot_mem) && ctx.pc == 0x08A1BE90u) goto L_08A1BE90;
    return;
L_08A1BE90:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(932)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, 2233u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-15308));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1BEBC;
      }
      goto L_08A1BEB4;
    }
L_08A1BEB4:
    ctx.set_gpr(31, 0x08A1BEBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1BEBCu) goto L_08A1BEBC;
    return;
L_08A1BEBC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1BED0;
      }
      goto L_08A1BEC8;
    }
L_08A1BEC8:
    ctx.set_gpr(31, 0x08A1BED0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1BED0u) goto L_08A1BED0;
    return;
L_08A1BED0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A1BEE4;
      }
      goto L_08A1BEDC;
    }
L_08A1BEDC:
    ctx.set_gpr(31, 0x08A1BEE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x08A1BEE4u) goto L_08A1BEE4;
    return;
L_08A1BEE4:
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
L_08A1BEFC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(4, 2210u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-16604));
    ctx.set_gpr(31, 0x08A1BF14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 286u, 0x08945508u>(ctx, &aot_mem) && ctx.pc == 0x08A1BF14u) goto L_08A1BF14;
    return;
L_08A1BF14:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1BF24:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1BF34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 130u, 0x08A04824u>(ctx, &aot_mem) && ctx.pc == 0x08A1BF34u) goto L_08A1BF34;
    return;
L_08A1BF34:
    ctx.set_gpr(2, 2210u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-16448));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.set_gpr(2, 2229u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8056));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(4, 0u + 0u);
    ctx.set_gpr(5, 2246u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-24076));
    ctx.set_gpr(6, 2196u << 16u);
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(25520));
    ctx.set_gpr(7, 2188u << 16u);
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(-27092));
    ctx.set_gpr(8, 2210u << 16u);
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(-16480));
    ctx.set_gpr(9, 2229u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(8068));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(24));
    ctx.set_gpr(11, 2210u << 16u);
    ctx.set_gpr(11, ctx.gpr[11] + static_cast<std::uint32_t>(-16808));
    ctx.set_gpr(31, 0x08A1BF90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 294u, 0x08945594u>(ctx, &aot_mem) && ctx.pc == 0x08A1BF90u) goto L_08A1BF90;
    return;
L_08A1BF90:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1BFA0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08A1BFB0u);
    // nop
    goto L_08A1BE0C;
L_08A1BFB0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A1BFC0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-24076)));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08A1BFE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 236u, 0x089451A8u>(ctx, &aot_mem) && ctx.pc == 0x08A1BFE8u) goto L_08A1BFE8;
    return;
L_08A1BFE8:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(8088));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08A1C004u);
    // nop
    (void)rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 151u, 0x08944B98u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0133(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0133_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_133(Runtime &runtime) {
    runtime.register_generated_unit(133u, 0x08A18000u, 16384u, &recomp_unit_0133, &recomp_unit_0133_entry);
    runtime.register_function(0x08A18000u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18050u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18060u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18070u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18080u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18090u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A180A0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A180C0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A180E8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18104u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1811Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18124u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18130u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1813Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18144u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1815Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18174u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18188u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18190u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A181A8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A181C0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A181E0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18204u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1820Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18218u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18220u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1822Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18234u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1824Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18264u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18274u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18284u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A182E0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A182F0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18300u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18310u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18338u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18354u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18364u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18370u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18384u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18390u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A183ACu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A183B8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A183ECu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18408u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18420u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18434u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1843Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18454u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1846Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18498u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A184BCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A184C4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A184D0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A184D8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A184E4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A184ECu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A184F8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18500u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1850Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18514u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1852Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18544u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1855Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1856Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1857Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A185E0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A185F0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18600u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18610u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18620u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18648u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18664u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18674u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18680u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1869Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A186A8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A186C4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A186D0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A186ECu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A186FCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1870Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18720u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1872Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18744u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18750u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18788u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18798u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A187B4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A187C4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A187D4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A187E4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A187F4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18804u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1881Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18830u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18844u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1885Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18870u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18878u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18890u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A188A4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A188B8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A188D4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A188ECu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A188FCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1890Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18958u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18968u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18978u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18988u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A189A0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A189A8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A189B4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A189C0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A189C8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A189E0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A189F8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18A0Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18A14u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18A2Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18A44u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18A70u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18A94u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18A9Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18AA8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18AB0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18ACCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18AE4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18AFCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18B0Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18B1Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18B78u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18B88u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18B98u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18BA8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18BB8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18BE0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18BFCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18C0Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18C18u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18C2Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18C38u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18C6Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18C88u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18CA0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18CB4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18CBCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18CD4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18CECu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18D10u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18D38u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18D50u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18D68u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18D78u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18D88u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18DE4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18DF4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18E04u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18E14u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18E24u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18E54u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18E68u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18E84u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18E90u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18EA4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18ECCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18EE8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18EF4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18F10u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18F28u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18F3Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18F44u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18F5Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18F70u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18F84u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18FA0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18FB8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18FC8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A18FD8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19034u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19044u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19054u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19064u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1907Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1908Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1909Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A190ACu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A190BCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A190CCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A190E4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A190F8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1910Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19124u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19138u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19140u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19158u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19170u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A191B0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A191D4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A191DCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A191E8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A191F0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A191FCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19204u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19210u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19218u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19228u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19234u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1923Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19244u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19254u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19260u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19268u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19274u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1927Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1928Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19298u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A192A0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A192A8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A192B8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A192D0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A192DCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A192F8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19310u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19328u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19338u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19348u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A193A4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A193B4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A193C4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A193D4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A193E4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1940Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19428u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19438u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19444u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19460u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1946Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19484u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19490u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A194A8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A194BCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A194D0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A194E4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A194F8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19504u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1951Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19528u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19540u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1954Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19584u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A195A0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A195B8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A195CCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A195D4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A195ECu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19600u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19614u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19630u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19648u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19658u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19668u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A196BCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A196CCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A196DCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A196ECu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19710u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1972Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19754u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1976Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19784u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1978Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19798u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A197A4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A197ACu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A197C4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A197DCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A197F0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A197F8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19810u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19824u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19838u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19854u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1986Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1987Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1988Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A198E0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A198F0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19900u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19910u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19928u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1993Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19944u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1995Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19974u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1998Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A199B0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A199B8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A199D0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A199E8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A199F8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19A08u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19A64u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19A74u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19A84u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19A94u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19ABCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19AD8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19AE8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19AF4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19B28u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19B44u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19B5Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19B70u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19B78u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19B90u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19BA8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19BC8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19BECu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19BF4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19C0Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19C1Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19C34u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19C4Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19C5Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19C6Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19CC8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19CD8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19CE8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19CF8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19D20u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19D3Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19D4Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19D58u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19D88u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19DA4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19DBCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19DD0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19DE4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19DFCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19E04u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19E10u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19E1Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19E24u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19E3Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19E54u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19E68u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19E70u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19E88u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19EA0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19EC4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19EE8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19EF0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19F08u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19F14u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19F30u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19F48u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19F60u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19F70u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19F80u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19FDCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19FECu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A19FFCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A00Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A034u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A050u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A060u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A06Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A0B4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A0D0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A0E8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A0FCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A104u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A11Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A134u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A14Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A170u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A178u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A190u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A1A8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A1B8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A1C8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A224u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A234u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A244u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A254u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A27Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A298u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A2A8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A2B4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A2D8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A2F4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A304u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A318u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A340u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A35Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A374u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A37Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A388u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A394u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A39Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A3B4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A3CCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A3E0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A3E8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A400u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A414u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A428u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A444u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A45Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A46Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A47Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A4D0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A4E0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A4F0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A500u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A518u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A52Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A540u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A558u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A560u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A56Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A578u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A580u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A598u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A5B0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A5C4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A5CCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A5E4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A5FCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A620u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A644u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A64Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A658u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A660u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A678u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A688u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A6A0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A6B8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A6C8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A6D8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A734u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A744u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A754u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A764u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A790u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A7ACu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A7C0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A7D4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A7F0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A804u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A824u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A840u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A84Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A85Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A868u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A880u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A88Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A8C4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A8E4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A8FCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A904u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A910u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A91Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A924u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A93Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A954u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A968u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A970u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A988u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A99Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A9B0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A9CCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A9E4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1A9F4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AA04u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AA58u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AA68u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AA78u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AA88u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AAA0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AAB4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AABCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AAD4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AAECu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AB0Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AB30u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AB3Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AB4Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AB64u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AB7Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AB8Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AB9Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1ABE8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1ABF8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AC08u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AC18u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AC30u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AC44u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AC4Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AC64u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AC80u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AC9Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1ACB4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1ACD8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1ACE0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1ACECu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1ACF4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AD00u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AD08u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AD14u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AD1Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AD28u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AD30u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AD40u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AD58u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AD78u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AD90u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AD9Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1ADA4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1ADB0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1ADBCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1ADC4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1ADD0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1ADDCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1ADE4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1ADF0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1ADFCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AE04u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AE10u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AE1Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AE24u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AE30u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AE3Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AE44u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AE50u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AE5Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AE64u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AE70u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AE7Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AE84u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AE90u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AE9Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AEA4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AEB0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AEBCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AEC4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AED0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AEDCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AEE4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AEF0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AEFCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AF04u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AF10u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AF1Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AF24u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AF30u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AF3Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AF44u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AF50u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AF5Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AF64u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AF70u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AF7Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AF84u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AF90u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AF9Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AFA4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AFB0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AFBCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AFC4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AFD0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AFDCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AFE4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AFF0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1AFFCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B004u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B010u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B01Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B024u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B030u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B03Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B044u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B050u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B05Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B064u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B070u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B07Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B084u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B090u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B09Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B0A4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B0B0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B0BCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B0C4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B0CCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B0E4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B0F0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B0F8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B104u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B110u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B12Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B144u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B1A4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B1B0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B1E4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B1F4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B200u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B21Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B234u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B244u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B254u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B2B8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B2C8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B2D8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B2E8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B2F8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B320u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B33Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B34Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B3A4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B3B4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B3C4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B3D4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B3E4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B3F4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B400u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B41Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B430u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B440u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B454u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B464u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B470u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B48Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B498u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B4B4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B4C4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B4D4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B4E0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B4FCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B508u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B53Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B54Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B568u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B578u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B588u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B598u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B5A8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B5B8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B5D0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B5E4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B5ECu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B604u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B61Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B62Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B63Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B694u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B6A4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B6B4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B6C4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B6ECu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B708u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B718u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B724u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B738u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B744u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B758u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B76Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B77Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B788u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B79Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B7B0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B7BCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B7DCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B7E8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B808u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B81Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B830u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B83Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B854u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B860u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B878u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B884u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B89Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B8A8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B8C0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B8CCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B8E4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B8F0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B908u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B914u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B92Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B938u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B950u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B95Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B98Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B9BCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B9CCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B9DCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B9F4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1B9FCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BA08u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BA14u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BA1Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BA34u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BA4Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BA60u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BA68u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BA80u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BA94u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BAA8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BAC4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BADCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BAECu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BAFCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BB50u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BB60u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BB70u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BB80u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BB98u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BBACu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BBB4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BBCCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BBE4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BBFCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BC20u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BC28u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BC40u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BC58u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BC68u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BC78u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BCD4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BCE4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BCF4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BD04u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BD2Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BD48u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BD58u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BD68u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BD78u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BD84u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BDB0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BDCCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BDE4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BDF8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BE0Cu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BE24u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BE38u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BE40u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BE58u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BE70u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BE90u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BEB4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BEBCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BEC8u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BED0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BEDCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BEE4u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BEFCu, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BF14u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BF24u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BF34u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BF90u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BFA0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BFB0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BFC0u, &recomp_unit_0133, "recomp_unit_0133");
    runtime.register_function(0x08A1BFE8u, &recomp_unit_0133, "recomp_unit_0133");
}
} // namespace psprecomp
