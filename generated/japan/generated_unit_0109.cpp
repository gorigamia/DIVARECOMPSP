#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0109[4028] = {
    1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 9, 0, 10, 0, 0, 11, 0, 0, 0, 12, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0,
    0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 18,
    0, 19, 0, 0, 0, 20, 0, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0,
    0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 27, 0, 28, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 31, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 35, 0, 0, 36, 0, 0, 0, 37, 0, 0,
    0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0,
    0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 49, 0, 0, 0, 0, 50,
    0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 53, 0, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0,
    56, 57, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 62,
    0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0,
    0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 69, 0, 70, 0, 0, 0, 71, 0, 0, 0, 0, 72, 0, 73, 0, 74, 0, 0, 0, 75, 0, 0,
    0, 0, 76, 0, 77, 0, 78, 0, 0, 79, 0, 80, 81, 0, 0, 82, 0, 83, 84, 0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 86, 0, 87,
    0, 0, 88, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0,
    98, 0, 0, 0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0,
    0, 104, 105, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0,
    0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 120, 0, 0,
    0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 124, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 127, 0, 0,
    128, 0, 0, 0, 0, 0, 0, 129, 130, 0, 0, 131, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0,
    0, 135, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 138, 0, 0, 0, 0, 139, 0, 0, 140, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 143, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 144, 0, 145, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 148,
    0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 0, 0, 0, 150, 151, 0, 0, 152, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 154, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 158, 0, 0, 0, 0,
    0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 160, 161, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 164, 0, 165, 0, 0,
    0, 166, 0, 0, 167, 0, 168, 0, 0, 0, 169, 0, 0, 170, 0, 171, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 176, 0, 0, 0, 0, 0, 0, 177,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 178, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181,
    0, 182, 0, 183, 0, 0, 0, 184, 0, 0, 185, 0, 186, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0,
    0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 193, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198,
    0, 0, 199, 0, 0, 0, 0, 200, 0, 201, 0, 202, 203, 0, 0, 0, 0, 204, 0, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 0,
    0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 209, 0, 0, 0, 0, 210, 0, 211, 0, 212, 213, 0, 0, 0, 0, 214, 0, 0, 0, 0, 215, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 219, 220, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 222, 0, 223, 0, 0, 224, 0, 0, 225, 0, 0, 0, 226, 0, 0, 227, 0, 0, 228, 0, 0, 0, 229, 0, 0, 230, 0, 0, 231, 0,
    0, 0, 232, 0, 0, 233, 0, 0, 234, 0, 0, 0, 235, 0, 0, 236, 0, 0, 237, 0, 0, 0, 238, 0, 0, 239, 240, 0, 241, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 245, 246, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    248, 0, 0, 0, 249, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 254, 0, 255, 256,
    0, 0, 0, 257, 0, 0, 0, 258, 0, 0, 259, 260, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 265, 0, 266, 0, 267, 268, 0, 0, 0, 269, 0, 0, 0, 270,
    0, 0, 271, 272, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275,
    0, 0, 276, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 279, 0, 280, 281, 0, 282, 0, 0, 0, 283, 0, 284, 0, 0, 0, 285, 286,
    0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 290, 0, 0, 0, 0, 0, 0, 291, 0, 292, 0, 0, 0, 293,
    0, 0, 0, 0, 0, 0, 294, 0, 295, 0, 0, 0, 296, 297, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0,
    300, 0, 0, 301, 0, 302, 0, 0, 303, 0, 0, 304, 0, 0, 305, 0, 0, 306, 0, 0, 307, 0, 308, 0, 0, 309, 0, 0, 310, 0, 311, 0,
    0, 312, 0, 0, 0, 313, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 317,
    0, 0, 0, 318, 0, 0, 319, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 321, 322, 0, 0, 323, 0, 0, 0, 324, 0, 0, 325, 0, 0,
    0, 0, 326, 0, 0, 0, 0, 0, 0, 327, 328, 0, 0, 329, 0, 0, 0, 330, 0, 0, 331, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0,
    333, 334, 0, 0, 335, 0, 0, 0, 0, 336, 0, 0, 337, 0, 0, 338, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 340, 341, 0,
    0, 0, 0, 0, 342, 343, 0, 0, 344, 0, 0, 0, 345, 0, 0, 346, 0, 0, 347, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0,
    349, 350, 0, 0, 0, 0, 0, 351, 352, 0, 0, 353, 0, 0, 0, 354, 0, 0, 355, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 357, 358,
    0, 0, 359, 0, 0, 0, 0, 360, 0, 0, 361, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 363, 364, 0, 0, 365, 0, 0, 0, 0, 0,
    366, 0, 0, 0, 367, 0, 0, 368, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 370, 371, 0, 0, 372, 0, 373, 0, 0, 374, 0,
    0, 375, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 378, 0, 0, 379, 0, 0, 0, 0, 0, 380, 0, 0,
    381, 0, 0, 382, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 384, 385, 0, 0, 0, 0, 0, 0, 386, 387, 0, 0, 388, 0, 0,
    0, 389, 0, 0, 390, 0, 391, 0, 0, 392, 0, 393, 394, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0,
    0, 0, 0, 397, 0, 0, 398, 0, 0, 399, 0, 0, 0, 400, 401, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0,
    404, 0, 405, 0, 0, 406, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 409, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 412, 0, 413, 0, 0, 414, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 420, 0, 421, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 423, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 428, 0, 429, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0,
    0, 432, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 437, 0, 0, 0, 438, 0, 439, 0, 0, 440, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0,
    0, 0, 442, 0, 443, 0, 0, 0, 444, 0, 445, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 448,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 451, 0, 0, 0, 0, 0, 0, 452, 0, 0, 0,
    0, 0, 0, 453, 0, 454, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 459, 0, 0, 0, 0, 0, 0, 0, 460, 0, 461, 0, 0, 462, 0, 0, 0, 0, 0,
    463, 0, 0, 0, 0, 0, 0, 464, 0, 465, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 467, 0, 0, 468, 0, 0, 0,
    0, 0, 469, 0, 0, 0, 0, 0, 0, 470, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 473,
    0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 476, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 478, 0, 479, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0,
    0, 0, 0, 0, 0, 487, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 490, 0, 491, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 493, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 496, 0, 497, 0, 0, 0, 0, 0, 0, 498, 0, 499, 0, 0, 0, 0, 0,
    0, 500, 0, 501, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 506, 0, 0, 0, 0, 0, 0, 0, 507, 0, 508, 0, 0, 509, 0, 0, 0, 0, 510, 0,
    0, 0, 0, 0, 0, 511, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 514, 0, 0, 515, 0, 0, 0,
    0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 517, 0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0,
    520, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 524, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 526, 0, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 528, 0, 529,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 531, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0,
    536, 0, 537, 0, 0, 538, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 544, 0, 0, 0, 0, 545, 0, 546, 0, 547, 548,
    0, 0, 549, 0, 550, 0, 0, 551, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 553, 0, 0, 0, 0, 0, 0, 0, 0, 0, 554, 0, 0, 555,
    0, 0, 0, 0, 556, 0, 557, 0, 558, 559, 0, 0, 0, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 561,
    0, 0, 562, 0, 0, 0, 0, 563, 0, 564, 0, 565, 566, 0, 0, 567, 0, 568, 0, 0, 569, 0, 0, 0, 0, 0, 0, 570, 0, 0, 0, 0,
    0, 0, 571, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 572, 0, 0, 573, 0, 0, 0, 0, 574, 0, 575, 0, 576, 577, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 578, 0, 0, 0, 0, 0, 0, 0, 579, 0, 580, 0, 0, 581, 582, 0, 0, 0, 0, 0, 583, 0, 0,
    0, 0, 0, 0, 0, 584, 0, 585, 0, 0, 586, 587, 0, 0, 0, 0, 0, 588, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 589, 0, 0, 0, 0, 0, 590, 0, 0, 0, 0, 591, 0, 0, 0, 592, 0, 0, 0, 0, 0, 593, 0, 0, 0, 0, 594, 0, 0,
    0, 0, 595, 0, 0, 0, 0, 0, 596, 0, 0, 0, 0, 597, 0, 0, 0, 0, 598, 0, 0, 0, 0, 0, 599, 0, 0, 0, 0, 600, 0, 0,
    0, 601, 0, 0, 0, 0, 0, 602, 0, 0, 0, 0, 603, 0, 0, 0, 0, 604, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0, 606, 0, 0, 0,
    0, 0, 607, 608, 0, 0, 609, 0, 0, 0, 0, 610, 0, 0, 0, 611, 0, 0, 0, 0, 0, 0, 612, 0, 0, 0, 0, 0, 613, 614, 0, 0,
    615, 0, 0, 0, 0, 0, 616, 0, 0, 0, 617, 0, 0, 0, 0, 0, 618, 0, 0, 0, 0, 0, 0, 619, 0, 620, 0, 0, 621, 0, 0, 0,
    0, 0, 0, 622, 0, 0, 0, 0, 0, 0, 623, 0, 0, 0, 0, 0, 624, 0, 0, 0, 625, 0, 0, 0, 0, 0, 0, 626, 0, 0, 0, 0,
    0, 627, 628, 0, 0, 629, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 630, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 631, 0, 0, 0, 0, 0, 632, 0, 0, 0, 0, 0, 633, 0, 0, 0, 0, 0, 634, 0, 0, 0, 0, 0, 635, 0, 0, 0, 0, 0,
    636, 0, 0, 0, 0, 0, 637, 0, 0, 638, 0, 0, 639, 0, 640, 0, 0, 641, 0, 642, 0, 0, 643, 0, 644, 0, 0, 645, 0, 0, 0, 0,
    0, 0, 0, 646, 0, 647, 0, 0, 648, 0, 0, 0, 0, 0, 0, 0, 649, 0, 650, 0, 0, 0, 651, 0, 652, 0, 0, 0, 653, 0, 0, 654,
    655, 0, 0, 0, 0, 656, 0, 657, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 658, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 659, 0, 660, 0, 0, 0, 0, 0, 0, 661, 0, 662, 0, 0, 0, 0, 0, 0, 663, 0, 664,
    0, 0, 0, 0, 0, 0, 665, 0, 666, 0, 0, 0, 0, 0, 0, 667, 0, 668, 0, 0, 669, 0, 0, 0, 0, 0, 0, 670, 0, 671, 0, 0,
    672, 0, 0, 0, 0, 0, 0, 673, 0, 674, 0, 0, 675, 0, 0, 0, 0, 0, 0, 676, 0, 677, 678, 0, 0, 0, 0, 0, 0, 0, 679, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 680, 0, 681, 0, 0, 682, 0, 0, 0, 0, 0, 0, 683, 0, 684, 0, 0, 685, 0, 0,
    0, 0, 0, 0, 686, 0, 687, 688, 0, 0, 0, 0, 0, 0, 0, 689, 0, 0, 690, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 691, 0, 0, 0, 0, 0, 0, 0,
    692, 0, 0, 693, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 694,
    0, 0, 0, 0, 0, 0, 0, 695, 0, 0, 696, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 697, 0, 0, 0, 0, 0, 0, 0, 698, 0, 0, 699,
};
void recomp_unit_0109_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089B8000u;
        entry_id = (entry_delta < 16112u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0109[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089B8000;
    case 2u: goto L_089B8018;
    case 3u: goto L_089B8038;
    case 4u: goto L_089B806C;
    case 5u: goto L_089B80A0;
    case 6u: goto L_089B80C4;
    case 7u: goto L_089B80E4;
    case 8u: goto L_089B8118;
    case 9u: goto L_089B8130;
    case 10u: goto L_089B8138;
    case 11u: goto L_089B8144;
    case 12u: goto L_089B8154;
    case 13u: goto L_089B816C;
    case 14u: goto L_089B8190;
    case 15u: goto L_089B81A0;
    case 16u: goto L_089B81C4;
    case 17u: goto L_089B81F0;
    case 18u: goto L_089B81FC;
    case 19u: goto L_089B8204;
    case 20u: goto L_089B8214;
    case 21u: goto L_089B8220;
    case 22u: goto L_089B8234;
    case 23u: goto L_089B8254;
    case 24u: goto L_089B8264;
    case 25u: goto L_089B8288;
    case 26u: goto L_089B82AC;
    case 27u: goto L_089B82B8;
    case 28u: goto L_089B82C0;
    case 29u: goto L_089B82D0;
    case 30u: goto L_089B82DC;
    case 31u: goto L_089B8304;
    case 32u: goto L_089B830C;
    case 33u: goto L_089B8340;
    case 34u: goto L_089B8350;
    case 35u: goto L_089B8358;
    case 36u: goto L_089B8364;
    case 37u: goto L_089B8374;
    case 38u: goto L_089B8384;
    case 39u: goto L_089B83AC;
    case 40u: goto L_089B83B8;
    case 41u: goto L_089B83C8;
    case 42u: goto L_089B83E8;
    case 43u: goto L_089B83F8;
    case 44u: goto L_089B8408;
    case 45u: goto L_089B8420;
    case 46u: goto L_089B842C;
    case 47u: goto L_089B843C;
    case 48u: goto L_089B845C;
    case 49u: goto L_089B8468;
    case 50u: goto L_089B847C;
    case 51u: goto L_089B849C;
    case 52u: goto L_089B84B4;
    case 53u: goto L_089B84B8;
    case 54u: goto L_089B84CC;
    case 55u: goto L_089B84E8;
    case 56u: goto L_089B8500;
    case 57u: goto L_089B8504;
    case 58u: goto L_089B8510;
    case 59u: goto L_089B8530;
    case 60u: goto L_089B854C;
    case 61u: goto L_089B8568;
    case 62u: goto L_089B857C;
    case 63u: goto L_089B8594;
    case 64u: goto L_089B85BC;
    case 65u: goto L_089B85C8;
    case 66u: goto L_089B85F8;
    case 67u: goto L_089B860C;
    case 68u: goto L_089B8620;
    case 69u: goto L_089B8628;
    case 70u: goto L_089B8630;
    case 71u: goto L_089B8640;
    case 72u: goto L_089B8654;
    case 73u: goto L_089B865C;
    case 74u: goto L_089B8664;
    case 75u: goto L_089B8674;
    case 76u: goto L_089B8688;
    case 77u: goto L_089B8690;
    case 78u: goto L_089B8698;
    case 79u: goto L_089B86A4;
    case 80u: goto L_089B86AC;
    case 81u: goto L_089B86B0;
    case 82u: goto L_089B86BC;
    case 83u: goto L_089B86C4;
    case 84u: goto L_089B86C8;
    case 85u: goto L_089B86D4;
    case 86u: goto L_089B86F4;
    case 87u: goto L_089B86FC;
    case 88u: goto L_089B8708;
    case 89u: goto L_089B870C;
    case 90u: goto L_089B8728;
    case 91u: goto L_089B873C;
    case 92u: goto L_089B8750;
    case 93u: goto L_089B8774;
    case 94u: goto L_089B87AC;
    case 95u: goto L_089B87F0;
    case 96u: goto L_089B8820;
    case 97u: goto L_089B8860;
    case 98u: goto L_089B8880;
    case 99u: goto L_089B8894;
    case 100u: goto L_089B88A4;
    case 101u: goto L_089B88B4;
    case 102u: goto L_089B88D4;
    case 103u: goto L_089B88E4;
    case 104u: goto L_089B8904;
    case 105u: goto L_089B8908;
    case 106u: goto L_089B8920;
    case 107u: goto L_089B8930;
    case 108u: goto L_089B8944;
    case 109u: goto L_089B897C;
    case 110u: goto L_089B89BC;
    case 111u: goto L_089B89EC;
    case 112u: goto L_089B8A28;
    case 113u: goto L_089B8A50;
    case 114u: goto L_089B8A78;
    case 115u: goto L_089B8AB0;
    case 116u: goto L_089B8AF8;
    case 117u: goto L_089B8B14;
    case 118u: goto L_089B8B30;
    case 119u: goto L_089B8B68;
    case 120u: goto L_089B8B74;
    case 121u: goto L_089B8B88;
    case 122u: goto L_089B8BAC;
    case 123u: goto L_089B8BC0;
    case 124u: goto L_089B8BC8;
    case 125u: goto L_089B8BCC;
    case 126u: goto L_089B8BE0;
    case 127u: goto L_089B8BF4;
    case 128u: goto L_089B8C00;
    case 129u: goto L_089B8C1C;
    case 130u: goto L_089B8C20;
    case 131u: goto L_089B8C2C;
    case 132u: goto L_089B8C40;
    case 133u: goto L_089B8C5C;
    case 134u: goto L_089B8C78;
    case 135u: goto L_089B8C84;
    case 136u: goto L_089B8C90;
    case 137u: goto L_089B8CD0;
    case 138u: goto L_089B8D08;
    case 139u: goto L_089B8D1C;
    case 140u: goto L_089B8D28;
    case 141u: goto L_089B8D30;
    case 142u: goto L_089B8D58;
    case 143u: goto L_089B8D6C;
    case 144u: goto L_089B8D9C;
    case 145u: goto L_089B8DA4;
    case 146u: goto L_089B8DC0;
    case 147u: goto L_089B8DF0;
    case 148u: goto L_089B8DFC;
    case 149u: goto L_089B8E18;
    case 150u: goto L_089B8E38;
    case 151u: goto L_089B8E3C;
    case 152u: goto L_089B8E48;
    case 153u: goto L_089B8E5C;
    case 154u: goto L_089B8E8C;
    case 155u: goto L_089B8E94;
    case 156u: goto L_089B8EB0;
    case 157u: goto L_089B8EE0;
    case 158u: goto L_089B8EEC;
    case 159u: goto L_089B8F08;
    case 160u: goto L_089B8F28;
    case 161u: goto L_089B8F2C;
    case 162u: goto L_089B8F38;
    case 163u: goto L_089B8F64;
    case 164u: goto L_089B8F6C;
    case 165u: goto L_089B8F74;
    case 166u: goto L_089B8F84;
    case 167u: goto L_089B8F90;
    case 168u: goto L_089B8F98;
    case 169u: goto L_089B8FA8;
    case 170u: goto L_089B8FB4;
    case 171u: goto L_089B8FBC;
    case 172u: goto L_089B8FD8;
    case 173u: goto L_089B9008;
    case 174u: goto L_089B9024;
    case 175u: goto L_089B9058;
    case 176u: goto L_089B9060;
    case 177u: goto L_089B907C;
    case 178u: goto L_089B90A4;
    case 179u: goto L_089B90AC;
    case 180u: goto L_089B90D4;
    case 181u: goto L_089B90FC;
    case 182u: goto L_089B9104;
    case 183u: goto L_089B910C;
    case 184u: goto L_089B911C;
    case 185u: goto L_089B9128;
    case 186u: goto L_089B9130;
    case 187u: goto L_089B9148;
    case 188u: goto L_089B9178;
    case 189u: goto L_089B9190;
    case 190u: goto L_089B91C0;
    case 191u: goto L_089B91C8;
    case 192u: goto L_089B91D8;
    case 193u: goto L_089B9208;
    case 194u: goto L_089B9210;
    case 195u: goto L_089B9238;
    case 196u: goto L_089B924C;
    case 197u: goto L_089B9264;
    case 198u: goto L_089B927C;
    case 199u: goto L_089B9288;
    case 200u: goto L_089B929C;
    case 201u: goto L_089B92A4;
    case 202u: goto L_089B92AC;
    case 203u: goto L_089B92B0;
    case 204u: goto L_089B92C4;
    case 205u: goto L_089B92D8;
    case 206u: goto L_089B92EC;
    case 207u: goto L_089B9304;
    case 208u: goto L_089B931C;
    case 209u: goto L_089B9328;
    case 210u: goto L_089B933C;
    case 211u: goto L_089B9344;
    case 212u: goto L_089B934C;
    case 213u: goto L_089B9350;
    case 214u: goto L_089B9364;
    case 215u: goto L_089B9378;
    case 216u: goto L_089B9414;
    case 217u: goto L_089B9434;
    case 218u: goto L_089B9444;
    case 219u: goto L_089B9450;
    case 220u: goto L_089B9454;
    case 221u: goto L_089B9460;
    case 222u: goto L_089B9488;
    case 223u: goto L_089B9490;
    case 224u: goto L_089B949C;
    case 225u: goto L_089B94A8;
    case 226u: goto L_089B94B8;
    case 227u: goto L_089B94C4;
    case 228u: goto L_089B94D0;
    case 229u: goto L_089B94E0;
    case 230u: goto L_089B94EC;
    case 231u: goto L_089B94F8;
    case 232u: goto L_089B9508;
    case 233u: goto L_089B9514;
    case 234u: goto L_089B9520;
    case 235u: goto L_089B9530;
    case 236u: goto L_089B953C;
    case 237u: goto L_089B9548;
    case 238u: goto L_089B9558;
    case 239u: goto L_089B9564;
    case 240u: goto L_089B9568;
    case 241u: goto L_089B9570;
    case 242u: goto L_089B960C;
    case 243u: goto L_089B962C;
    case 244u: goto L_089B963C;
    case 245u: goto L_089B9648;
    case 246u: goto L_089B964C;
    case 247u: goto L_089B9658;
    case 248u: goto L_089B9680;
    case 249u: goto L_089B9690;
    case 250u: goto L_089B96A0;
    case 251u: goto L_089B973C;
    case 252u: goto L_089B9754;
    case 253u: goto L_089B9768;
    case 254u: goto L_089B9770;
    case 255u: goto L_089B9778;
    case 256u: goto L_089B977C;
    case 257u: goto L_089B978C;
    case 258u: goto L_089B979C;
    case 259u: goto L_089B97A8;
    case 260u: goto L_089B97AC;
    case 261u: goto L_089B97B8;
    case 262u: goto L_089B97E0;
    case 263u: goto L_089B981C;
    case 264u: goto L_089B9834;
    case 265u: goto L_089B9848;
    case 266u: goto L_089B9850;
    case 267u: goto L_089B9858;
    case 268u: goto L_089B985C;
    case 269u: goto L_089B986C;
    case 270u: goto L_089B987C;
    case 271u: goto L_089B9888;
    case 272u: goto L_089B988C;
    case 273u: goto L_089B9898;
    case 274u: goto L_089B98C4;
    case 275u: goto L_089B98FC;
    case 276u: goto L_089B9908;
    case 277u: goto L_089B9920;
    case 278u: goto L_089B9934;
    case 279u: goto L_089B993C;
    case 280u: goto L_089B9944;
    case 281u: goto L_089B9948;
    case 282u: goto L_089B9950;
    case 283u: goto L_089B9960;
    case 284u: goto L_089B9968;
    case 285u: goto L_089B9978;
    case 286u: goto L_089B997C;
    case 287u: goto L_089B9990;
    case 288u: goto L_089B99B4;
    case 289u: goto L_089B9A3C;
    case 290u: goto L_089B9A48;
    case 291u: goto L_089B9A64;
    case 292u: goto L_089B9A6C;
    case 293u: goto L_089B9A7C;
    case 294u: goto L_089B9A98;
    case 295u: goto L_089B9AA0;
    case 296u: goto L_089B9AB0;
    case 297u: goto L_089B9AB4;
    case 298u: goto L_089B9ACC;
    case 299u: goto L_089B9AF4;
    case 300u: goto L_089B9B00;
    case 301u: goto L_089B9B0C;
    case 302u: goto L_089B9B14;
    case 303u: goto L_089B9B20;
    case 304u: goto L_089B9B2C;
    case 305u: goto L_089B9B38;
    case 306u: goto L_089B9B44;
    case 307u: goto L_089B9B50;
    case 308u: goto L_089B9B58;
    case 309u: goto L_089B9B64;
    case 310u: goto L_089B9B70;
    case 311u: goto L_089B9B78;
    case 312u: goto L_089B9B84;
    case 313u: goto L_089B9B94;
    case 314u: goto L_089B9BAC;
    case 315u: goto L_089B9BC4;
    case 316u: goto L_089B9BD8;
    case 317u: goto L_089B9BFC;
    case 318u: goto L_089B9C0C;
    case 319u: goto L_089B9C18;
    case 320u: goto L_089B9C2C;
    case 321u: goto L_089B9C48;
    case 322u: goto L_089B9C4C;
    case 323u: goto L_089B9C58;
    case 324u: goto L_089B9C68;
    case 325u: goto L_089B9C74;
    case 326u: goto L_089B9C88;
    case 327u: goto L_089B9CA4;
    case 328u: goto L_089B9CA8;
    case 329u: goto L_089B9CB4;
    case 330u: goto L_089B9CC4;
    case 331u: goto L_089B9CD0;
    case 332u: goto L_089B9CE4;
    case 333u: goto L_089B9D00;
    case 334u: goto L_089B9D04;
    case 335u: goto L_089B9D10;
    case 336u: goto L_089B9D24;
    case 337u: goto L_089B9D30;
    case 338u: goto L_089B9D3C;
    case 339u: goto L_089B9D54;
    case 340u: goto L_089B9D74;
    case 341u: goto L_089B9D78;
    case 342u: goto L_089B9D90;
    case 343u: goto L_089B9D94;
    case 344u: goto L_089B9DA0;
    case 345u: goto L_089B9DB0;
    case 346u: goto L_089B9DBC;
    case 347u: goto L_089B9DC8;
    case 348u: goto L_089B9DE0;
    case 349u: goto L_089B9E00;
    case 350u: goto L_089B9E04;
    case 351u: goto L_089B9E1C;
    case 352u: goto L_089B9E20;
    case 353u: goto L_089B9E2C;
    case 354u: goto L_089B9E3C;
    case 355u: goto L_089B9E48;
    case 356u: goto L_089B9E5C;
    case 357u: goto L_089B9E78;
    case 358u: goto L_089B9E7C;
    case 359u: goto L_089B9E88;
    case 360u: goto L_089B9E9C;
    case 361u: goto L_089B9EA8;
    case 362u: goto L_089B9EBC;
    case 363u: goto L_089B9ED8;
    case 364u: goto L_089B9EDC;
    case 365u: goto L_089B9EE8;
    case 366u: goto L_089B9F00;
    case 367u: goto L_089B9F10;
    case 368u: goto L_089B9F1C;
    case 369u: goto L_089B9F38;
    case 370u: goto L_089B9F54;
    case 371u: goto L_089B9F58;
    case 372u: goto L_089B9F64;
    case 373u: goto L_089B9F6C;
    case 374u: goto L_089B9F78;
    case 375u: goto L_089B9F84;
    case 376u: goto L_089B9FA0;
    case 377u: goto L_089B9FCC;
    case 378u: goto L_089B9FD0;
    case 379u: goto L_089B9FDC;
    case 380u: goto L_089B9FF4;
    case 381u: goto L_089BA000;
    case 382u: goto L_089BA00C;
    case 383u: goto L_089BA024;
    case 384u: goto L_089BA044;
    case 385u: goto L_089BA048;
    case 386u: goto L_089BA064;
    case 387u: goto L_089BA068;
    case 388u: goto L_089BA074;
    case 389u: goto L_089BA084;
    case 390u: goto L_089BA090;
    case 391u: goto L_089BA098;
    case 392u: goto L_089BA0A4;
    case 393u: goto L_089BA0AC;
    case 394u: goto L_089BA0B0;
    case 395u: goto L_089BA0D0;
    case 396u: goto L_089BA0F4;
    case 397u: goto L_089BA10C;
    case 398u: goto L_089BA118;
    case 399u: goto L_089BA124;
    case 400u: goto L_089BA134;
    case 401u: goto L_089BA138;
    case 402u: goto L_089BA140;
    case 403u: goto L_089BA168;
    case 404u: goto L_089BA180;
    case 405u: goto L_089BA188;
    case 406u: goto L_089BA194;
    case 407u: goto L_089BA1C0;
    case 408u: goto L_089BA1D8;
    case 409u: goto L_089BA1F8;
    case 410u: goto L_089BA224;
    case 411u: goto L_089BA24C;
    case 412u: goto L_089BA264;
    case 413u: goto L_089BA26C;
    case 414u: goto L_089BA278;
    case 415u: goto L_089BA2A4;
    case 416u: goto L_089BA2BC;
    case 417u: goto L_089BA2DC;
    case 418u: goto L_089BA308;
    case 419u: goto L_089BA330;
    case 420u: goto L_089BA348;
    case 421u: goto L_089BA350;
    case 422u: goto L_089BA35C;
    case 423u: goto L_089BA388;
    case 424u: goto L_089BA3A0;
    case 425u: goto L_089BA3C0;
    case 426u: goto L_089BA3EC;
    case 427u: goto L_089BA414;
    case 428u: goto L_089BA42C;
    case 429u: goto L_089BA434;
    case 430u: goto L_089BA440;
    case 431u: goto L_089BA46C;
    case 432u: goto L_089BA484;
    case 433u: goto L_089BA4A4;
    case 434u: goto L_089BA4D0;
    case 435u: goto L_089BA4FC;
    case 436u: goto L_089BA524;
    case 437u: goto L_089BA52C;
    case 438u: goto L_089BA53C;
    case 439u: goto L_089BA544;
    case 440u: goto L_089BA550;
    case 441u: goto L_089BA56C;
    case 442u: goto L_089BA588;
    case 443u: goto L_089BA590;
    case 444u: goto L_089BA5A0;
    case 445u: goto L_089BA5A8;
    case 446u: goto L_089BA5B4;
    case 447u: goto L_089BA5E0;
    case 448u: goto L_089BA5FC;
    case 449u: goto L_089BA628;
    case 450u: goto L_089BA64C;
    case 451u: goto L_089BA654;
    case 452u: goto L_089BA670;
    case 453u: goto L_089BA68C;
    case 454u: goto L_089BA694;
    case 455u: goto L_089BA6A8;
    case 456u: goto L_089BA6CC;
    case 457u: goto L_089BA704;
    case 458u: goto L_089BA72C;
    case 459u: goto L_089BA734;
    case 460u: goto L_089BA754;
    case 461u: goto L_089BA75C;
    case 462u: goto L_089BA768;
    case 463u: goto L_089BA780;
    case 464u: goto L_089BA79C;
    case 465u: goto L_089BA7A4;
    case 466u: goto L_089BA7DC;
    case 467u: goto L_089BA7E4;
    case 468u: goto L_089BA7F0;
    case 469u: goto L_089BA808;
    case 470u: goto L_089BA824;
    case 471u: goto L_089BA82C;
    case 472u: goto L_089BA874;
    case 473u: goto L_089BA87C;
    case 474u: goto L_089BA888;
    case 475u: goto L_089BA8A8;
    case 476u: goto L_089BA8C4;
    case 477u: goto L_089BA8CC;
    case 478u: goto L_089BA914;
    case 479u: goto L_089BA91C;
    case 480u: goto L_089BA928;
    case 481u: goto L_089BA948;
    case 482u: goto L_089BA96C;
    case 483u: goto L_089BA9A0;
    case 484u: goto L_089BA9C4;
    case 485u: goto L_089BA9CC;
    case 486u: goto L_089BA9F8;
    case 487u: goto L_089BAA14;
    case 488u: goto L_089BAA1C;
    case 489u: goto L_089BAA50;
    case 490u: goto L_089BAA6C;
    case 491u: goto L_089BAA74;
    case 492u: goto L_089BAAB8;
    case 493u: goto L_089BAAD4;
    case 494u: goto L_089BAADC;
    case 495u: goto L_089BAB20;
    case 496u: goto L_089BAB3C;
    case 497u: goto L_089BAB44;
    case 498u: goto L_089BAB60;
    case 499u: goto L_089BAB68;
    case 500u: goto L_089BAB84;
    case 501u: goto L_089BAB8C;
    case 502u: goto L_089BABA0;
    case 503u: goto L_089BABC8;
    case 504u: goto L_089BAC00;
    case 505u: goto L_089BAC28;
    case 506u: goto L_089BAC30;
    case 507u: goto L_089BAC50;
    case 508u: goto L_089BAC58;
    case 509u: goto L_089BAC64;
    case 510u: goto L_089BAC78;
    case 511u: goto L_089BAC94;
    case 512u: goto L_089BAC9C;
    case 513u: goto L_089BACDC;
    case 514u: goto L_089BACE4;
    case 515u: goto L_089BACF0;
    case 516u: goto L_089BAD10;
    case 517u: goto L_089BAD2C;
    case 518u: goto L_089BAD34;
    case 519u: goto L_089BAD78;
    case 520u: goto L_089BAD80;
    case 521u: goto L_089BAD8C;
    case 522u: goto L_089BADAC;
    case 523u: goto L_089BADD0;
    case 524u: goto L_089BAE04;
    case 525u: goto L_089BAE28;
    case 526u: goto L_089BAE30;
    case 527u: goto L_089BAE58;
    case 528u: goto L_089BAE74;
    case 529u: goto L_089BAE7C;
    case 530u: goto L_089BAEB8;
    case 531u: goto L_089BAED4;
    case 532u: goto L_089BAEDC;
    case 533u: goto L_089BAF14;
    case 534u: goto L_089BAF3C;
    case 535u: goto L_089BAF68;
    case 536u: goto L_089BAF80;
    case 537u: goto L_089BAF88;
    case 538u: goto L_089BAF94;
    case 539u: goto L_089BAFB0;
    case 540u: goto L_089BAFC8;
    case 541u: goto L_089BAFEC;
    case 542u: goto L_089BB018;
    case 543u: goto L_089BB048;
    case 544u: goto L_089BB054;
    case 545u: goto L_089BB068;
    case 546u: goto L_089BB070;
    case 547u: goto L_089BB078;
    case 548u: goto L_089BB07C;
    case 549u: goto L_089BB088;
    case 550u: goto L_089BB090;
    case 551u: goto L_089BB09C;
    case 552u: goto L_089BB0AC;
    case 553u: goto L_089BB0C8;
    case 554u: goto L_089BB0F0;
    case 555u: goto L_089BB0FC;
    case 556u: goto L_089BB110;
    case 557u: goto L_089BB118;
    case 558u: goto L_089BB120;
    case 559u: goto L_089BB124;
    case 560u: goto L_089BB14C;
    case 561u: goto L_089BB17C;
    case 562u: goto L_089BB188;
    case 563u: goto L_089BB19C;
    case 564u: goto L_089BB1A4;
    case 565u: goto L_089BB1AC;
    case 566u: goto L_089BB1B0;
    case 567u: goto L_089BB1BC;
    case 568u: goto L_089BB1C4;
    case 569u: goto L_089BB1D0;
    case 570u: goto L_089BB1EC;
    case 571u: goto L_089BB208;
    case 572u: goto L_089BB238;
    case 573u: goto L_089BB244;
    case 574u: goto L_089BB258;
    case 575u: goto L_089BB260;
    case 576u: goto L_089BB268;
    case 577u: goto L_089BB26C;
    case 578u: goto L_089BB2A4;
    case 579u: goto L_089BB2C4;
    case 580u: goto L_089BB2CC;
    case 581u: goto L_089BB2D8;
    case 582u: goto L_089BB2DC;
    case 583u: goto L_089BB2F4;
    case 584u: goto L_089BB314;
    case 585u: goto L_089BB31C;
    case 586u: goto L_089BB328;
    case 587u: goto L_089BB32C;
    case 588u: goto L_089BB344;
    case 589u: goto L_089BB38C;
    case 590u: goto L_089BB3A4;
    case 591u: goto L_089BB3B8;
    case 592u: goto L_089BB3C8;
    case 593u: goto L_089BB3E0;
    case 594u: goto L_089BB3F4;
    case 595u: goto L_089BB408;
    case 596u: goto L_089BB420;
    case 597u: goto L_089BB434;
    case 598u: goto L_089BB448;
    case 599u: goto L_089BB460;
    case 600u: goto L_089BB474;
    case 601u: goto L_089BB484;
    case 602u: goto L_089BB49C;
    case 603u: goto L_089BB4B0;
    case 604u: goto L_089BB4C4;
    case 605u: goto L_089BB4D4;
    case 606u: goto L_089BB4F0;
    case 607u: goto L_089BB508;
    case 608u: goto L_089BB50C;
    case 609u: goto L_089BB518;
    case 610u: goto L_089BB52C;
    case 611u: goto L_089BB53C;
    case 612u: goto L_089BB558;
    case 613u: goto L_089BB570;
    case 614u: goto L_089BB574;
    case 615u: goto L_089BB580;
    case 616u: goto L_089BB598;
    case 617u: goto L_089BB5A8;
    case 618u: goto L_089BB5C0;
    case 619u: goto L_089BB5DC;
    case 620u: goto L_089BB5E4;
    case 621u: goto L_089BB5F0;
    case 622u: goto L_089BB60C;
    case 623u: goto L_089BB628;
    case 624u: goto L_089BB640;
    case 625u: goto L_089BB650;
    case 626u: goto L_089BB66C;
    case 627u: goto L_089BB684;
    case 628u: goto L_089BB688;
    case 629u: goto L_089BB694;
    case 630u: goto L_089BB6C0;
    case 631u: goto L_089BB708;
    case 632u: goto L_089BB720;
    case 633u: goto L_089BB738;
    case 634u: goto L_089BB750;
    case 635u: goto L_089BB768;
    case 636u: goto L_089BB780;
    case 637u: goto L_089BB798;
    case 638u: goto L_089BB7A4;
    case 639u: goto L_089BB7B0;
    case 640u: goto L_089BB7B8;
    case 641u: goto L_089BB7C4;
    case 642u: goto L_089BB7CC;
    case 643u: goto L_089BB7D8;
    case 644u: goto L_089BB7E0;
    case 645u: goto L_089BB7EC;
    case 646u: goto L_089BB80C;
    case 647u: goto L_089BB814;
    case 648u: goto L_089BB820;
    case 649u: goto L_089BB840;
    case 650u: goto L_089BB848;
    case 651u: goto L_089BB858;
    case 652u: goto L_089BB860;
    case 653u: goto L_089BB870;
    case 654u: goto L_089BB87C;
    case 655u: goto L_089BB880;
    case 656u: goto L_089BB894;
    case 657u: goto L_089BB89C;
    case 658u: goto L_089BB8F4;
    case 659u: goto L_089BB92C;
    case 660u: goto L_089BB934;
    case 661u: goto L_089BB950;
    case 662u: goto L_089BB958;
    case 663u: goto L_089BB974;
    case 664u: goto L_089BB97C;
    case 665u: goto L_089BB998;
    case 666u: goto L_089BB9A0;
    case 667u: goto L_089BB9BC;
    case 668u: goto L_089BB9C4;
    case 669u: goto L_089BB9D0;
    case 670u: goto L_089BB9EC;
    case 671u: goto L_089BB9F4;
    case 672u: goto L_089BBA00;
    case 673u: goto L_089BBA1C;
    case 674u: goto L_089BBA24;
    case 675u: goto L_089BBA30;
    case 676u: goto L_089BBA4C;
    case 677u: goto L_089BBA54;
    case 678u: goto L_089BBA58;
    case 679u: goto L_089BBA78;
    case 680u: goto L_089BBAB0;
    case 681u: goto L_089BBAB8;
    case 682u: goto L_089BBAC4;
    case 683u: goto L_089BBAE0;
    case 684u: goto L_089BBAE8;
    case 685u: goto L_089BBAF4;
    case 686u: goto L_089BBB10;
    case 687u: goto L_089BBB18;
    case 688u: goto L_089BBB1C;
    case 689u: goto L_089BBB3C;
    case 690u: goto L_089BBB48;
    case 691u: goto L_089BBC60;
    case 692u: goto L_089BBC80;
    case 693u: goto L_089BBC8C;
    case 694u: goto L_089BBD7C;
    case 695u: goto L_089BBD9C;
    case 696u: goto L_089BBDA8;
    case 697u: goto L_089BBEC0;
    case 698u: goto L_089BBEE0;
    case 699u: goto L_089BBEEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089B8000:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, ctx.gpr[2] << 16u);
    ctx.set_gpr(16, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] & 3840u);
    ctx.set_gpr(31, 0x089B8018u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 685u, 0x089B7F34u>(ctx, &aot_mem) && ctx.pc == 0x089B8018u) goto L_089B8018;
    return;
L_089B8018:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-241));
    ctx.set_gpr(3, ctx.gpr[16] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, ctx.gpr[2] << 4u);
    ctx.set_gpr(16, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[17] & 61440u);
    ctx.set_gpr(31, 0x089B8038u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 685u, 0x089B7F34u>(ctx, &aot_mem) && ctx.pc == 0x089B8038u) goto L_089B8038;
    return;
L_089B8038:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-3841));
    ctx.set_gpr(4, ctx.gpr[16] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, ctx.gpr[3] << 8u);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
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
L_089B806C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    ctx.set_gpr(16, ctx.gpr[8] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(31, 0x089B80A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 691u, 0x089B7F64u>(ctx, &aot_mem) && ctx.pc == 0x089B80A0u) goto L_089B80A0;
    return;
L_089B80A0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[17] + 0u);
    ctx.set_gpr(8, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B80C4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B80C4u) goto L_089B80C4;
    return;
L_089B80C4:
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
L_089B80E4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(31, 0x089B8118u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 691u, 0x089B7F64u>(ctx, &aot_mem) && ctx.pc == 0x089B8118u) goto L_089B8118;
    return;
L_089B8118:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B8154;
      }
      goto L_089B8130;
    }
L_089B8130:
    ctx.set_gpr(31, 0x089B8138u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 224u, 0x0893CE5Cu>(ctx, &aot_mem) && ctx.pc == 0x089B8138u) goto L_089B8138;
    return;
L_089B8138:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089B8144u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089B8144u) goto L_089B8144;
    return;
L_089B8144:
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089B8154u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089B8154u) goto L_089B8154;
    return;
L_089B8154:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, ctx.gpr[3] & 240u);
    ctx.set_gpr(20, (ctx.gpr[3] >> 4u) & 0x000000FFu);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8220;
      }
      goto L_089B816C;
    }
L_089B816C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, ctx.gpr[20] << 2u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B8190u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8190u) goto L_089B8190;
    return;
L_089B8190:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.set_gpr(21, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8214;
      }
      goto L_089B81A0;
    }
L_089B81A0:
    ctx.set_gpr(19, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(2, ctx.gpr[21] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(18, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B81F0;
      }
      goto L_089B81C4;
    }
L_089B81C4:
    ctx.set_gpr(2, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_089B81F0;
L_089B81F0:
    ctx.set_gpr(2, ctx.gpr[5] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B81C4;
      }
      goto L_089B81FC;
    }
L_089B81FC:
    ctx.set_gpr(31, 0x089B8204u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089B8204u) goto L_089B8204;
    return;
L_089B8204:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_089B8214;
L_089B8214:
    ctx.set_gpr(3, ctx.gpr[21] < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B81A0;
      }
      goto L_089B8220;
    }
L_089B8220:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(3, ctx.gpr[3] & 3840u);
    ctx.set_gpr(20, (ctx.gpr[3] >> 8u) & 0x000000FFu);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B82DC;
      }
      goto L_089B8234;
    }
L_089B8234:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B8254u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8254u) goto L_089B8254;
    return;
L_089B8254:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(21, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B82D0;
      }
      goto L_089B8264;
    }
L_089B8264:
    ctx.set_gpr(19, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(2, ctx.gpr[21] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(18, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B82AC;
      }
      goto L_089B8288;
    }
L_089B8288:
    ctx.set_gpr(2, ctx.gpr[4] + ctx.gpr[6]);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[21]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_089B82AC;
L_089B82AC:
    ctx.set_gpr(2, ctx.gpr[6] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B8288;
      }
      goto L_089B82B8;
    }
L_089B82B8:
    ctx.set_gpr(31, 0x089B82C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089B82C0u) goto L_089B82C0;
    return;
L_089B82C0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(1));
    goto L_089B82D0;
L_089B82D0:
    ctx.set_gpr(3, ctx.gpr[21] < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B8264;
      }
      goto L_089B82DC;
    }
L_089B82DC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8304:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B830C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B8340u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8340u) goto L_089B8340;
    return;
L_089B8340:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B8374;
      }
      goto L_089B8350;
    }
L_089B8350:
    ctx.set_gpr(31, 0x089B8358u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 224u, 0x0893CE5Cu>(ctx, &aot_mem) && ctx.pc == 0x089B8358u) goto L_089B8358;
    return;
L_089B8358:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x089B8364u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 199u, 0x0893CC68u>(ctx, &aot_mem) && ctx.pc == 0x089B8364u) goto L_089B8364;
    return;
L_089B8364:
    ctx.set_gpr(4, ctx.gpr[20] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089B8374u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089B8374u) goto L_089B8374;
    return;
L_089B8374:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B83B8;
      }
      goto L_089B8384;
    }
L_089B8384:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(16, ctx.gpr[2] << 2u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B83ACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B83ACu) goto L_089B83AC;
    return;
L_089B83AC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(18, ctx.gpr[18] + ctx.gpr[16]);
    goto L_089B83B8;
L_089B83B8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B842C;
      }
      goto L_089B83C8;
    }
L_089B83C8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(16, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 64u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B83F8;
      }
      goto L_089B83E8;
    }
L_089B83E8:
    ctx.set_gpr(2, 128u << 16u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8408;
      }
      goto L_089B83F8;
    }
L_089B83F8:
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] << 3u);
    ctx.set_gpr(16, ctx.gpr[16] + ctx.gpr[2]);
    goto L_089B8408;
L_089B8408:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B8420u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8420u) goto L_089B8420;
    return;
L_089B8420:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(18, ctx.gpr[18] + ctx.gpr[16]);
    goto L_089B842C;
L_089B842C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8468;
      }
      goto L_089B843C;
    }
L_089B843C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, ctx.gpr[2] << 2u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B845Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B845Cu) goto L_089B845C;
    return;
L_089B845C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(18, ctx.gpr[18] + ctx.gpr[16]);
    goto L_089B8468;
L_089B8468:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 240u);
    ctx.set_gpr(3, (ctx.gpr[2] >> 4u) & 0x000000FFu);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B84B8;
      }
      goto L_089B847C;
    }
L_089B847C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[2] << 2u);
    ctx.set_gpr(18, ctx.gpr[18] + ctx.gpr[5]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B84B8;
      }
      goto L_089B849C;
    }
L_089B849C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B84B4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B84B4u) goto L_089B84B4;
    return;
L_089B84B4:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    goto L_089B84B8;
L_089B84B8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 3840u);
    ctx.set_gpr(3, (ctx.gpr[2] >> 8u) & 0x000000FFu);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8504;
      }
      goto L_089B84CC;
    }
L_089B84CC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(5, ctx.lo);
    ctx.set_gpr(18, ctx.gpr[18] + ctx.gpr[5]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B8504;
      }
      goto L_089B84E8;
    }
L_089B84E8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B8500u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8500u) goto L_089B8500;
    return;
L_089B8500:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    goto L_089B8504;
L_089B8504:
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B854C;
      }
      goto L_089B8510;
    }
L_089B8510:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, ctx.gpr[2] << 3u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B8530u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8530u) goto L_089B8530;
    return;
L_089B8530:
    ctx.set_gpr(3, ctx.gpr[19] + static_cast<std::uint32_t>(11));
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(18, ctx.gpr[18] + ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_089B854C;
L_089B854C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 15u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, (ctx.gpr[2] >> 16u) & 0x000000FFu);
    ctx.set_gpr(2, ctx.gpr[19] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B8510;
      }
      goto L_089B8568;
    }
L_089B8568:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(256)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B857Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B857Cu) goto L_089B857C;
    return;
L_089B857C:
    ctx.set_gpr(16, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(260)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B8594u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8594u) goto L_089B8594;
    return;
L_089B8594:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
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
L_089B85BC:
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(28));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B85C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B85F8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B85F8u) goto L_089B85F8;
    return;
L_089B85F8:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8630;
      }
      goto L_089B860C;
    }
L_089B860C:
    ctx.set_gpr(16, ctx.gpr[20] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8630;
      }
      goto L_089B8620;
    }
L_089B8620:
    ctx.set_gpr(31, 0x089B8628u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089B8628u) goto L_089B8628;
    return;
L_089B8628:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    goto L_089B8630;
L_089B8630:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 2u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8664;
      }
      goto L_089B8640;
    }
L_089B8640:
    ctx.set_gpr(16, ctx.gpr[20] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8664;
      }
      goto L_089B8654;
    }
L_089B8654:
    ctx.set_gpr(31, 0x089B865Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089B865Cu) goto L_089B865C;
    return;
L_089B865C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), 0u);
    goto L_089B8664;
L_089B8664:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8698;
      }
      goto L_089B8674;
    }
L_089B8674:
    ctx.set_gpr(16, ctx.gpr[20] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8698;
      }
      goto L_089B8688;
    }
L_089B8688:
    ctx.set_gpr(31, 0x089B8690u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089B8690u) goto L_089B8690;
    return;
L_089B8690:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), 0u);
    goto L_089B8698;
L_089B8698:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B86B0;
      }
      goto L_089B86A4;
    }
L_089B86A4:
    ctx.set_gpr(31, 0x089B86ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089B86ACu) goto L_089B86AC;
    return;
L_089B86AC:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(32), 0u);
    goto L_089B86B0;
L_089B86B0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B86C8;
      }
      goto L_089B86BC;
    }
L_089B86BC:
    ctx.set_gpr(31, 0x089B86C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089B86C4u) goto L_089B86C4;
    return;
L_089B86C4:
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(36), 0u);
    goto L_089B86C8;
L_089B86C8:
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B870C;
      }
      goto L_089B86D4;
    }
L_089B86D4:
    ctx.set_gpr(17, ctx.gpr[20] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[19] + static_cast<std::uint32_t>(11));
    ctx.set_gpr(16, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[16]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8708;
      }
      goto L_089B86F4;
    }
L_089B86F4:
    ctx.set_gpr(31, 0x089B86FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089B86FCu) goto L_089B86FC;
    return;
L_089B86FC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    goto L_089B8708;
L_089B8708:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_089B870C;
L_089B870C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 15u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, (ctx.gpr[2] >> 16u) & 0x000000FFu);
    ctx.set_gpr(2, ctx.gpr[19] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B86D4;
      }
      goto L_089B8728;
    }
L_089B8728:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(248)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B873Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B873Cu) goto L_089B873C;
    return;
L_089B873C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(252)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B8750u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8750u) goto L_089B8750;
    return;
L_089B8750:
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
L_089B8774:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B87ACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B87ACu) goto L_089B87AC;
    return;
L_089B87AC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & 240u);
    ctx.set_gpr(3, (ctx.gpr[3] >> 4u) & 0x000000FFu);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B87F0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B8820u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8820u) goto L_089B8820;
    return;
L_089B8820:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 240u);
    ctx.set_gpr(2, (ctx.gpr[2] >> 4u) & 0x000000FFu);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
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
L_089B8860:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B8880u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8880u) goto L_089B8880;
    return;
L_089B8880:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & 240u);
    ctx.set_gpr(5, (ctx.gpr[3] >> 4u) & 0x000000FFu);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8930;
      }
      goto L_089B8894;
    }
L_089B8894:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8920;
      }
      goto L_089B88A4;
    }
L_089B88A4:
    ctx.fpr[1] = std::bit_cast<float>(0u);
    ctx.set_gpr(6, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B88D4;
      }
      goto L_089B88B4;
    }
L_089B88B4:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.fpr[1] = ctx.fpr[1] + ctx.fpr[0];
    ctx.set_gpr(6, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    goto L_089B88D4;
L_089B88D4:
    ctx.set_gpr(3, ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B88B4;
      }
      goto L_089B88E4;
    }
L_089B88E4:
    ctx.set_gpr(3, 16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[1] = ctx.fpr[0] - ctx.fpr[1];
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[1] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089B8908;
      }
      goto L_089B8904;
    }
L_089B8904:
    ctx.set_fpr_bits(1, ctx.fpr_bits(0));
    goto L_089B8908;
L_089B8908:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-4), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    goto L_089B8920;
L_089B8920:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[7] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B88A4;
      }
      goto L_089B8930;
    }
L_089B8930:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8944:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B897Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B897Cu) goto L_089B897C;
    return;
L_089B897C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & 240u);
    ctx.set_gpr(3, (ctx.gpr[3] >> 4u) & 0x000000FFu);
    ctx.set_gpr(4, ctx.gpr[17] + ctx.gpr[19]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[16]));
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
L_089B89BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B89ECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B89ECu) goto L_089B89EC;
    return;
L_089B89EC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 240u);
    ctx.set_gpr(2, (ctx.gpr[2] >> 4u) & 0x000000FFu);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[18]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
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
L_089B8A28:
    ctx.set_gpr(3, 16128u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8A50:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, 16384u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8A78:
    ctx.fpr[1] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[2] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(3, 16128u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[3]);
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(1, 0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[5] << 3u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8AB0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[5] << 3u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, 16384u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.set_fpr_bits(0, 0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8AF8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8B14:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[5] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8B30:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(20, ctx.gpr[7] + 0u);
    ctx.set_gpr(16, ctx.gpr[8] + 0u);
    ctx.set_gpr(31, 0x089B8B68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089B8B68u) goto L_089B8B68;
    return;
L_089B8B68:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089B8B74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 388u, 0x0898E210u>(ctx, &aot_mem) && ctx.pc == 0x089B8B74u) goto L_089B8B74;
    return;
L_089B8B74:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, 0x089B8B88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089B8B88u) goto L_089B8B88;
    return;
L_089B8B88:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[20] + 0u);
    ctx.set_gpr(8, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B8BACu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8BACu) goto L_089B8BAC;
    return;
L_089B8BAC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, ctx.gpr[20] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8BC8;
      }
      goto L_089B8BC0;
    }
L_089B8BC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8BCC;
      }
      goto L_089B8BC8;
    }
L_089B8BC8:
    ctx.set_gpr(20, ctx.gpr[17] + 0u);
    goto L_089B8BCC;
L_089B8BCC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B8BE0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8BE0u) goto L_089B8BE0;
    return;
L_089B8BE0:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089B8BF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 80u, 0x089BC8ACu>(ctx, &aot_mem) && ctx.pc == 0x089B8BF4u) goto L_089B8BF4;
    return;
L_089B8BF4:
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8C20;
      }
      goto L_089B8C00;
    }
L_089B8C00:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[18] + 0u);
    ctx.set_gpr(8, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x089B8C1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 624u, 0x089B79B4u>(ctx, &aot_mem) && ctx.pc == 0x089B8C1Cu) goto L_089B8C1C;
    return;
L_089B8C1C:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_089B8C20;
L_089B8C20:
    ctx.set_gpr(2, ctx.gpr[18] < ctx.gpr[20] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B8C00;
      }
      goto L_089B8C2C;
    }
L_089B8C2C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(184)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B8C40u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8C40u) goto L_089B8C40;
    return;
L_089B8C40:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32744)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B8C5Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8C5Cu) goto L_089B8C5C;
    return;
L_089B8C5C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32744)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B8C78u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8C78u) goto L_089B8C78;
    return;
L_089B8C78:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089B8C84u);
    // nop
    goto L_089B85C8;
L_089B8C84:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(31, 0x089B8C90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089B8C90u) goto L_089B8C90;
    return;
L_089B8C90:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(32)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(36)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(36), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(31, 0x089B8CD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089B8CD0u) goto L_089B8CD0;
    return;
L_089B8CD0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(32), 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(36), 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(40), 0u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(28), 0u);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32744)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B8D08u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8D08u) goto L_089B8D08;
    return;
L_089B8D08:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(244)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B8D1Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B8D1Cu) goto L_089B8D1C;
    return;
L_089B8D1C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8D30;
      }
      goto L_089B8D28;
    }
L_089B8D28:
    ctx.set_gpr(31, 0x089B8D30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089B8D30u) goto L_089B8D30;
    return;
L_089B8D30:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8D58:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, 64u << 16u);
    ctx.set_gpr(3, ctx.gpr[7] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8D9C;
      }
      goto L_089B8D6C;
    }
L_089B8D6C:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[5] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089B8D9C;
L_089B8D9C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8DA4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    ctx.set_gpr(3, 64u << 16u);
    ctx.set_gpr(3, ctx.gpr[7] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8DF0;
      }
      goto L_089B8DC0;
    }
L_089B8DC0:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[5] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089B8DF0;
L_089B8DF0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8DFC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    ctx.set_gpr(2, 64u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8E38;
      }
      goto L_089B8E18;
    }
L_089B8E18:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8E3C;
      }
      goto L_089B8E38;
    }
L_089B8E38:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089B8E3C;
L_089B8E3C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8E48:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, 128u << 16u);
    ctx.set_gpr(3, ctx.gpr[7] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8E8C;
      }
      goto L_089B8E5C;
    }
L_089B8E5C:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[5] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089B8E8C;
L_089B8E8C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8E94:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    ctx.set_gpr(3, 128u << 16u);
    ctx.set_gpr(3, ctx.gpr[7] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8EE0;
      }
      goto L_089B8EB0;
    }
L_089B8EB0:
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[5] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[5]);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089B8EE0;
L_089B8EE0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8EEC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[3]);
    ctx.set_gpr(2, 128u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8F28;
      }
      goto L_089B8F08;
    }
L_089B8F08:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[5] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[5]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8F2C;
      }
      goto L_089B8F28;
    }
L_089B8F28:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089B8F2C;
L_089B8F2C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B8F38:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8F74;
      }
      goto L_089B8F64;
    }
L_089B8F64:
    ctx.set_gpr(31, 0x089B8F6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089B8F6Cu) goto L_089B8F6C;
    return;
L_089B8F6C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(64), 0u);
    goto L_089B8F74;
L_089B8F74:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8F98;
      }
      goto L_089B8F84;
    }
L_089B8F84:
    ctx.set_gpr(18, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x089B8F90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089B8F90u) goto L_089B8F90;
    return;
L_089B8F90:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(60), 0u);
    goto L_089B8F98;
L_089B8F98:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B8FBC;
      }
      goto L_089B8FA8;
    }
L_089B8FA8:
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x089B8FB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089B8FB4u) goto L_089B8FB4;
    return;
L_089B8FB4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(76), 0u);
    goto L_089B8FBC;
L_089B8FBC:
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
L_089B8FD8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B9008u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B9008u) goto L_089B9008;
    return;
L_089B9008:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(2, 48u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] & ctx.gpr[2]);
    ctx.set_gpr(2, (ctx.gpr[2] >> 20u) & 0x000000FFu);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9060;
      }
      goto L_089B9024;
    }
L_089B9024:
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(20, ctx.lo);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(19, ctx.gpr[2] + static_cast<std::uint32_t>(60));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B9058u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B9058u) goto L_089B9058;
    return;
L_089B9058:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[20]);
    goto L_089B9060;
L_089B9060:
    ctx.set_gpr(3, ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(64), 0u);
    ctx.set_gpr(2, 256u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B90AC;
      }
      goto L_089B907C;
    }
L_089B907C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(19, ctx.gpr[2] << 2u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(76));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B90A4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B90A4u) goto L_089B90A4;
    return;
L_089B90A4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[19]);
    goto L_089B90AC;
L_089B90AC:
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
L_089B90D4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B910C;
      }
      goto L_089B90FC;
    }
L_089B90FC:
    ctx.set_gpr(31, 0x089B9104u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089B9104u) goto L_089B9104;
    return;
L_089B9104:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(68), 0u);
    goto L_089B910C;
L_089B910C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9130;
      }
      goto L_089B911C;
    }
L_089B911C:
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(31, 0x089B9128u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x089B9128u) goto L_089B9128;
    return;
L_089B9128:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(72), 0u);
    goto L_089B9130;
L_089B9130:
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
L_089B9148:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B9178u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B9178u) goto L_089B9178;
    return;
L_089B9178:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(2, 64u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B91C8;
      }
      goto L_089B9190;
    }
L_089B9190:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(20, ctx.gpr[2] << 2u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(19, ctx.gpr[2] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B91C0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B91C0u) goto L_089B91C0;
    return;
L_089B91C0:
    rt.memory().aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[20]);
    goto L_089B91C8;
L_089B91C8:
    ctx.set_gpr(2, 128u << 16u);
    ctx.set_gpr(2, ctx.gpr[16] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9210;
      }
      goto L_089B91D8;
    }
L_089B91D8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(19, ctx.gpr[2] << 2u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, ctx.gpr[2] + static_cast<std::uint32_t>(72));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B9208u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B9208u) goto L_089B9208;
    return;
L_089B9208:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(17, ctx.gpr[17] + ctx.gpr[19]);
    goto L_089B9210;
L_089B9210:
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
L_089B9238:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x089B924Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 445u, 0x08906000u>(ctx, &aot_mem) && ctx.pc == 0x089B924Cu) goto L_089B924C;
    return;
L_089B924C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13872));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(31, 0x089B9264u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 590u, 0x0895680Cu>(ctx, &aot_mem) && ctx.pc == 0x089B9264u) goto L_089B9264;
    return;
L_089B9264:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32624)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27476));
    ctx.set_gpr(31, 0x089B927Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x089B927Cu) goto L_089B927C;
    return;
L_089B927C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B92AC;
      }
      goto L_089B9288;
    }
L_089B9288:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26848)));
    ctx.set_gpr(31, 0x089B929Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x089B929Cu) goto L_089B929C;
    return;
L_089B929C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B92AC;
      }
      goto L_089B92A4;
    }
L_089B92A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B92B0;
      }
      goto L_089B92AC;
    }
L_089B92AC:
    ctx.set_gpr(16, 0u + 0u);
    goto L_089B92B0;
L_089B92B0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13872));
    ctx.set_gpr(31, 0x089B92C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 246u, 0x089411E8u>(ctx, &aot_mem) && ctx.pc == 0x089B92C4u) goto L_089B92C4;
    return;
L_089B92C4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B92D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(31, 0x089B92ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0064_entry, 64u, 445u, 0x08906000u>(ctx, &aot_mem) && ctx.pc == 0x089B92ECu) goto L_089B92EC;
    return;
L_089B92EC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13860));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(31, 0x089B9304u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 590u, 0x0895680Cu>(ctx, &aot_mem) && ctx.pc == 0x089B9304u) goto L_089B9304;
    return;
L_089B9304:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32628)));
    ctx.set_gpr(5, 2228u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(27476));
    ctx.set_gpr(31, 0x089B931Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 149u, 0x08944B68u>(ctx, &aot_mem) && ctx.pc == 0x089B931Cu) goto L_089B931C;
    return;
L_089B931C:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B934C;
      }
      goto L_089B9328;
    }
L_089B9328:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(26848)));
    ctx.set_gpr(31, 0x089B933Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x089B933Cu) goto L_089B933C;
    return;
L_089B933C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B934C;
      }
      goto L_089B9344;
    }
L_089B9344:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9350;
      }
      goto L_089B934C;
    }
L_089B934C:
    ctx.set_gpr(16, 0u + 0u);
    goto L_089B9350;
L_089B9350:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 2229u << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-13860));
    ctx.set_gpr(31, 0x089B9364u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 246u, 0x089411E8u>(ctx, &aot_mem) && ctx.pc == 0x089B9364u) goto L_089B9364;
    return;
L_089B9364:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B9378:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(41)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(69), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(42)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(70), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(43)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(71), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[6]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9454;
      }
      goto L_089B9414;
    }
L_089B9414:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089B9434u);
    // nop
    goto L_089B9488;
L_089B9434:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089B9450;
      }
      goto L_089B9444;
    }
L_089B9444:
    ctx.set_gpr(19, ctx.gpr[17] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9460;
      }
      goto L_089B9450;
    }
L_089B9450:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_089B9454;
L_089B9454:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9414;
      }
      goto L_089B9460;
    }
L_089B9460:
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
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
L_089B9488:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B949C;
      }
      goto L_089B9490;
    }
L_089B9490:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9568;
      }
      goto L_089B949C;
    }
L_089B949C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B94C4;
      }
      goto L_089B94A8;
    }
L_089B94A8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089B94C4;
      }
      goto L_089B94B8;
    }
L_089B94B8:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9568;
      }
      goto L_089B94C4;
    }
L_089B94C4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B94EC;
      }
      goto L_089B94D0;
    }
L_089B94D0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089B94EC;
      }
      goto L_089B94E0;
    }
L_089B94E0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9568;
      }
      goto L_089B94EC;
    }
L_089B94EC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9514;
      }
      goto L_089B94F8;
    }
L_089B94F8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089B9514;
      }
      goto L_089B9508;
    }
L_089B9508:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9568;
      }
      goto L_089B9514;
    }
L_089B9514:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B953C;
      }
      goto L_089B9520;
    }
L_089B9520:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089B953C;
      }
      goto L_089B9530;
    }
L_089B9530:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9568;
      }
      goto L_089B953C;
    }
L_089B953C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9564;
      }
      goto L_089B9548;
    }
L_089B9548:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089B9564;
      }
      goto L_089B9558;
    }
L_089B9558:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9568;
      }
      goto L_089B9564;
    }
L_089B9564:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_089B9568;
L_089B9568:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B9570:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(41)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(69), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(42)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(70), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(43)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(71), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[6]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B964C;
      }
      goto L_089B960C;
    }
L_089B960C:
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089B962Cu);
    // nop
    goto L_089B9488;
L_089B962C:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089B9648;
      }
      goto L_089B963C;
    }
L_089B963C:
    ctx.set_gpr(19, ctx.gpr[17] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9658;
      }
      goto L_089B9648;
    }
L_089B9648:
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_089B964C;
L_089B964C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B960C;
      }
      goto L_089B9658;
    }
L_089B9658:
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
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
L_089B9680:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x089B9690u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 425u, 0x089FA1D0u>(ctx, &aot_mem) && ctx.pc == 0x089B9690u) goto L_089B9690;
    return;
L_089B9690:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B96A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(41)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(69), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(42)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(70), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(43)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(71), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[6]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B97AC;
      }
      goto L_089B973C;
    }
L_089B973C:
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9778;
      }
      goto L_089B9754;
    }
L_089B9754:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32632)));
    ctx.set_gpr(31, 0x089B9768u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x089B9768u) goto L_089B9768;
    return;
L_089B9768:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9778;
      }
      goto L_089B9770;
    }
L_089B9770:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B977C;
      }
      goto L_089B9778;
    }
L_089B9778:
    ctx.set_gpr(18, 0u + 0u);
    goto L_089B977C;
L_089B977C:
    ctx.set_gpr(4, ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089B978Cu);
    // nop
    goto L_089B9488;
L_089B978C:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089B97A8;
      }
      goto L_089B979C;
    }
L_089B979C:
    ctx.set_gpr(20, ctx.gpr[18] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B97B8;
      }
      goto L_089B97A8;
    }
L_089B97A8:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_089B97AC;
L_089B97AC:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B973C;
      }
      goto L_089B97B8;
    }
L_089B97B8:
    ctx.set_gpr(2, ctx.gpr[20] + 0u);
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
L_089B97E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(21, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(20, 0u + 0u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B988C;
      }
      goto L_089B981C;
    }
L_089B981C:
    ctx.set_gpr(3, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9858;
      }
      goto L_089B9834;
    }
L_089B9834:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32632)));
    ctx.set_gpr(31, 0x089B9848u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x089B9848u) goto L_089B9848;
    return;
L_089B9848:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9858;
      }
      goto L_089B9850;
    }
L_089B9850:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B985C;
      }
      goto L_089B9858;
    }
L_089B9858:
    ctx.set_gpr(18, 0u + 0u);
    goto L_089B985C;
L_089B985C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089B986Cu);
    // nop
    goto L_089B9488;
L_089B986C:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089B9888;
      }
      goto L_089B987C;
    }
L_089B987C:
    ctx.set_gpr(20, ctx.gpr[18] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9898;
      }
      goto L_089B9888;
    }
L_089B9888:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_089B988C;
L_089B988C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B981C;
      }
      goto L_089B9898;
    }
L_089B9898:
    ctx.set_gpr(2, ctx.gpr[20] + 0u);
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
L_089B98C4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089B98FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 312u, 0x089495E8u>(ctx, &aot_mem) && ctx.pc == 0x089B98FCu) goto L_089B98FC;
    return;
L_089B98FC:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B997C;
      }
      goto L_089B9908;
    }
L_089B9908:
    ctx.set_gpr(4, ctx.gpr[16] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9944;
      }
      goto L_089B9920;
    }
L_089B9920:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32632)));
    ctx.set_gpr(31, 0x089B9934u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x089B9934u) goto L_089B9934;
    return;
L_089B9934:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9944;
      }
      goto L_089B993C;
    }
L_089B993C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9948;
      }
      goto L_089B9944;
    }
L_089B9944:
    ctx.set_gpr(20, 0u + 0u);
    goto L_089B9948;
L_089B9948:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9978;
      }
      goto L_089B9950;
    }
L_089B9950:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089B9960u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 33u, 0x089BC64Cu>(ctx, &aot_mem) && ctx.pc == 0x089B9960u) goto L_089B9960;
    return;
L_089B9960:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9978;
      }
      goto L_089B9968;
    }
L_089B9968:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089B9978u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 299u, 0x089494E0u>(ctx, &aot_mem) && ctx.pc == 0x089B9978u) goto L_089B9978;
    return;
L_089B9978:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089B997C;
L_089B997C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9908;
      }
      goto L_089B9990;
    }
L_089B9990:
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
L_089B99B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[3]));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(25)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(26)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(27)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x089B9A3Cu);
    // nop
    goto L_089B97E0;
L_089B9A3C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9AB0;
      }
      goto L_089B9A48;
    }
L_089B9A48:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26768)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B9A64u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B9A64u) goto L_089B9A64;
    return;
L_089B9A64:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089B9A7C;
      }
      goto L_089B9A6C;
    }
L_089B9A6C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9AB4;
      }
      goto L_089B9A7C;
    }
L_089B9A7C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26748)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B9A98u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B9A98u) goto L_089B9A98;
    return;
L_089B9A98:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089B9AB0;
      }
      goto L_089B9AA0;
    }
L_089B9AA0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9AB4;
      }
      goto L_089B9AB0;
    }
L_089B9AB0:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089B9AB4;
L_089B9AB4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089B9ACC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[8] + 0u);
    ctx.set_gpr(31, 0x089B9AF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089B9AF4u) goto L_089B9AF4;
    return;
L_089B9AF4:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089B9B00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 421u, 0x0898E544u>(ctx, &aot_mem) && ctx.pc == 0x089B9B00u) goto L_089B9B00;
    return;
L_089B9B00:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9B2C;
      }
      goto L_089B9B0C;
    }
L_089B9B0C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9B20;
      }
      goto L_089B9B14;
    }
L_089B9B14:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089B9B20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089B9B20u) goto L_089B9B20;
    return;
L_089B9B20:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA0B0;
      }
      goto L_089B9B2C;
    }
L_089B9B2C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089B9B38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 41u, 0x0894835Cu>(ctx, &aot_mem) && ctx.pc == 0x089B9B38u) goto L_089B9B38;
    return;
L_089B9B38:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089B9B44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0098_entry, 98u, 157u, 0x0898CD48u>(ctx, &aot_mem) && ctx.pc == 0x089B9B44u) goto L_089B9B44;
    return;
L_089B9B44:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9B84;
      }
      goto L_089B9B50;
    }
L_089B9B50:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9B64;
      }
      goto L_089B9B58;
    }
L_089B9B58:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089B9B64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089B9B64u) goto L_089B9B64;
    return;
L_089B9B64:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9B78;
      }
      goto L_089B9B70;
    }
L_089B9B70:
    ctx.set_gpr(31, 0x089B9B78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089B9B78u) goto L_089B9B78;
    return;
L_089B9B78:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA0B0;
      }
      goto L_089B9B84;
    }
L_089B9B84:
    ctx.set_gpr(4, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089B9B94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089B9B94u) goto L_089B9B94;
    return;
L_089B9B94:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(31, 0x089B9BACu);
    // nop
    goto L_089BB6C0;
L_089B9BAC:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B9BC4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B9BC4u) goto L_089B9BC4;
    return;
L_089B9BC4:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(31, 0x089B9BD8u);
    // nop
    goto L_089BA10C;
L_089B9BD8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B9BFCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B9BFCu) goto L_089B9BFC;
    return;
L_089B9BFC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9C58;
      }
      goto L_089B9C0C;
    }
L_089B9C0C:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9C4C;
      }
      goto L_089B9C18;
    }
L_089B9C18:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089B9C2Cu);
    // nop
    goto L_089BA1D8;
L_089B9C2C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B9C48u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B9C48u) goto L_089B9C48;
    return;
L_089B9C48:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089B9C4C;
L_089B9C4C:
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9C18;
      }
      goto L_089B9C58;
    }
L_089B9C58:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, ctx.gpr[2] & 2u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9CB4;
      }
      goto L_089B9C68;
    }
L_089B9C68:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9CA8;
      }
      goto L_089B9C74;
    }
L_089B9C74:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089B9C88u);
    // nop
    goto L_089BA2BC;
L_089B9C88:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B9CA4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B9CA4u) goto L_089B9CA4;
    return;
L_089B9CA4:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089B9CA8;
L_089B9CA8:
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9C74;
      }
      goto L_089B9CB4;
    }
L_089B9CB4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, ctx.gpr[2] & 4u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9D10;
      }
      goto L_089B9CC4;
    }
L_089B9CC4:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9D04;
      }
      goto L_089B9CD0;
    }
L_089B9CD0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089B9CE4u);
    // nop
    goto L_089BA5FC;
L_089B9CE4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B9D00u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B9D00u) goto L_089B9D00;
    return;
L_089B9D00:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089B9D04;
L_089B9D04:
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9CD0;
      }
      goto L_089B9D10;
    }
L_089B9D10:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, ctx.gpr[3] & 240u);
    ctx.set_gpr(2, (ctx.gpr[2] >> 4u) & 0x000000FFu);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9DA0;
      }
      goto L_089B9D24;
    }
L_089B9D24:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9D94;
      }
      goto L_089B9D30;
    }
L_089B9D30:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9D78;
      }
      goto L_089B9D3C;
    }
L_089B9D3C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089B9D54u);
    // nop
    goto L_089BA96C;
L_089B9D54:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(0));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(176)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B9D74u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B9D74u) goto L_089B9D74;
    return;
L_089B9D74:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089B9D78;
L_089B9D78:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, ctx.gpr[3] & 240u);
    ctx.set_gpr(2, (ctx.gpr[2] >> 4u) & 0x000000FFu);
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9D3C;
      }
      goto L_089B9D90;
    }
L_089B9D90:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089B9D94;
L_089B9D94:
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9D30;
      }
      goto L_089B9DA0;
    }
L_089B9DA0:
    ctx.set_gpr(2, ctx.gpr[3] & 3840u);
    ctx.set_gpr(2, (ctx.gpr[2] >> 8u) & 0x000000FFu);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9E2C;
      }
      goto L_089B9DB0;
    }
L_089B9DB0:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9E20;
      }
      goto L_089B9DBC;
    }
L_089B9DBC:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9E04;
      }
      goto L_089B9DC8;
    }
L_089B9DC8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089B9DE0u);
    // nop
    goto L_089BADD0;
L_089B9DE0:
    ctx.set_gpr(7, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(188)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B9E00u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B9E00u) goto L_089B9E00;
    return;
L_089B9E00:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089B9E04;
L_089B9E04:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, ctx.gpr[3] & 3840u);
    ctx.set_gpr(2, (ctx.gpr[2] >> 8u) & 0x000000FFu);
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9DC8;
      }
      goto L_089B9E1C;
    }
L_089B9E1C:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089B9E20;
L_089B9E20:
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9DBC;
      }
      goto L_089B9E2C;
    }
L_089B9E2C:
    ctx.set_gpr(2, 128u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9E88;
      }
      goto L_089B9E3C;
    }
L_089B9E3C:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9E7C;
      }
      goto L_089B9E48;
    }
L_089B9E48:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089B9E5Cu);
    // nop
    goto L_089BA484;
L_089B9E5C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B9E78u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B9E78u) goto L_089B9E78;
    return;
L_089B9E78:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089B9E7C;
L_089B9E7C:
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9E48;
      }
      goto L_089B9E88;
    }
L_089B9E88:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 64u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9EE8;
      }
      goto L_089B9E9C;
    }
L_089B9E9C:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9EDC;
      }
      goto L_089B9EA8;
    }
L_089B9EA8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089B9EBCu);
    // nop
    goto L_089BA3A0;
L_089B9EBC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B9ED8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B9ED8u) goto L_089B9ED8;
    return;
L_089B9ED8:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089B9EDC;
L_089B9EDC:
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9EA8;
      }
      goto L_089B9EE8;
    }
L_089B9EE8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 48u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, (ctx.gpr[2] >> 20u) & 0x000000FFu);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9FDC;
      }
      goto L_089B9F00;
    }
L_089B9F00:
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089B9F6C;
      }
      goto L_089B9F10;
    }
L_089B9F10:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9F58;
      }
      goto L_089B9F1C;
    }
L_089B9F1C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B9F38u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B9F38u) goto L_089B9F38;
    return;
L_089B9F38:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(0));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(208)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B9F54u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B9F54u) goto L_089B9F54;
    return;
L_089B9F54:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089B9F58;
L_089B9F58:
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9F1C;
      }
      goto L_089B9F64;
    }
L_089B9F64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9FDC;
      }
      goto L_089B9F6C;
    }
L_089B9F6C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089B9FDC;
      }
      goto L_089B9F78;
    }
L_089B9F78:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089B9FD0;
      }
      goto L_089B9F84;
    }
L_089B9F84:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B9FA0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B9FA0u) goto L_089B9FA0;
    return;
L_089B9FA0:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(216)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089B9FCCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089B9FCCu) goto L_089B9FCC;
    return;
L_089B9FCC:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089B9FD0;
L_089B9FD0:
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089B9F84;
      }
      goto L_089B9FDC;
    }
L_089B9FDC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 15u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, (ctx.gpr[2] >> 16u) & 0x000000FFu);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA074;
      }
      goto L_089B9FF4;
    }
L_089B9FF4:
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA068;
      }
      goto L_089BA000;
    }
L_089BA000:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA048;
      }
      goto L_089BA00C;
    }
L_089BA00C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089BA024u);
    // nop
    goto L_089BAFC8;
L_089BA024:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(196)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BA044u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BA044u) goto L_089BA044;
    return;
L_089BA044:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089BA048;
L_089BA048:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, 15u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, (ctx.gpr[2] >> 16u) & 0x000000FFu);
    ctx.set_gpr(2, ctx.gpr[16] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BA00C;
      }
      goto L_089BA064;
    }
L_089BA064:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089BA068;
L_089BA068:
    ctx.set_gpr(2, ctx.gpr[17] < ctx.gpr[18] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BA000;
      }
      goto L_089BA074;
    }
L_089BA074:
    ctx.set_gpr(4, ctx.gpr[19] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(31, 0x089BA084u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089BA084u) goto L_089BA084;
    return;
L_089BA084:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA098;
      }
      goto L_089BA090;
    }
L_089BA090:
    ctx.set_gpr(31, 0x089BA098u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089BA098u) goto L_089BA098;
    return;
L_089BA098:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA0AC;
      }
      goto L_089BA0A4;
    }
L_089BA0A4:
    ctx.set_gpr(31, 0x089BA0ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 257u, 0x0883D454u>(ctx, &aot_mem) && ctx.pc == 0x089BA0ACu) goto L_089BA0AC;
    return;
L_089BA0AC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_089BA0B0;
L_089BA0B0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BA0D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(4, ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089BA0F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 61u, 0x089584C4u>(ctx, &aot_mem) && ctx.pc == 0x089BA0F4u) goto L_089BA0F4;
    return;
L_089BA0F4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BA10C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA138;
      }
      goto L_089BA118;
    }
L_089BA118:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA138;
      }
      goto L_089BA124;
    }
L_089BA124:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089BA138;
      }
      goto L_089BA134;
    }
L_089BA134:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_089BA138;
L_089BA138:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BA140:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089BA168u);
    // nop
    goto L_089B96A0;
L_089BA168:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA1C0;
      }
      goto L_089BA180;
    }
L_089BA180:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_089BA1C0;
      }
      goto L_089BA188;
    }
L_089BA188:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA1C0;
      }
      goto L_089BA194;
    }
L_089BA194:
    ctx.set_gpr(3, ctx.gpr[17] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089BA1C0;
L_089BA1C0:
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
L_089BA1D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089BA1F8u);
    // nop
    goto L_089B96A0;
L_089BA1F8:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[16] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BA224:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089BA24Cu);
    // nop
    goto L_089B96A0;
L_089BA24C:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA2A4;
      }
      goto L_089BA264;
    }
L_089BA264:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_089BA2A4;
      }
      goto L_089BA26C;
    }
L_089BA26C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA2A4;
      }
      goto L_089BA278;
    }
L_089BA278:
    ctx.set_gpr(3, ctx.gpr[17] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089BA2A4;
L_089BA2A4:
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
L_089BA2BC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089BA2DCu);
    // nop
    goto L_089B96A0;
L_089BA2DC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[16] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BA308:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089BA330u);
    // nop
    goto L_089B96A0;
L_089BA330:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA388;
      }
      goto L_089BA348;
    }
L_089BA348:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_089BA388;
      }
      goto L_089BA350;
    }
L_089BA350:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA388;
      }
      goto L_089BA35C;
    }
L_089BA35C:
    ctx.set_gpr(3, ctx.gpr[17] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089BA388;
L_089BA388:
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
L_089BA3A0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089BA3C0u);
    // nop
    goto L_089B96A0;
L_089BA3C0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[16] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BA3EC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089BA414u);
    // nop
    goto L_089B96A0;
L_089BA414:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA46C;
      }
      goto L_089BA42C;
    }
L_089BA42C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_089BA46C;
      }
      goto L_089BA434;
    }
L_089BA434:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA46C;
      }
      goto L_089BA440;
    }
L_089BA440:
    ctx.set_gpr(3, ctx.gpr[17] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089BA46C;
L_089BA46C:
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
L_089BA484:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089BA4A4u);
    // nop
    goto L_089B96A0;
L_089BA4A4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[16] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[16]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BA4D0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089BA4FCu);
    // nop
    goto L_089B96A0;
L_089BA4FC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(29992)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BA524u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BA524u) goto L_089BA524;
    return;
L_089BA524:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089BA56C;
      }
      goto L_089BA52C;
    }
L_089BA52C:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA5E0;
      }
      goto L_089BA53C;
    }
L_089BA53C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_089BA5E0;
      }
      goto L_089BA544;
    }
L_089BA544:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA5E0;
      }
      goto L_089BA550;
    }
L_089BA550:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, ctx.gpr[17] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA5E0;
      }
      goto L_089BA56C;
    }
L_089BA56C:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26740)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BA588u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BA588u) goto L_089BA588;
    return;
L_089BA588:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089BA5E0;
      }
      goto L_089BA590;
    }
L_089BA590:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA5E0;
      }
      goto L_089BA5A0;
    }
L_089BA5A0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_089BA5E0;
      }
      goto L_089BA5A8;
    }
L_089BA5A8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA5E0;
      }
      goto L_089BA5B4;
    }
L_089BA5B4:
    ctx.set_gpr(4, ctx.gpr[17] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(29)));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(30)));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(31)));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_089BA5E0;
L_089BA5E0:
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
L_089BA5FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089BA628u);
    // nop
    goto L_089B96A0;
L_089BA628:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(19, 0u + 0u);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(29992)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BA64Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BA64Cu) goto L_089BA64C;
    return;
L_089BA64C:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089BA670;
      }
      goto L_089BA654;
    }
L_089BA654:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA6A8;
      }
      goto L_089BA670;
    }
L_089BA670:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26740)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BA68Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BA68Cu) goto L_089BA68C;
    return;
L_089BA68C:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089BA6A8;
      }
      goto L_089BA694;
    }
L_089BA694:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_089BA6A8;
L_089BA6A8:
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
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
L_089BA6CC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089BA704u);
    // nop
    goto L_089B96A0;
L_089BA704:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30040)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BA72Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BA72Cu) goto L_089BA72C;
    return;
L_089BA72C:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089BA780;
      }
      goto L_089BA734;
    }
L_089BA734:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[18] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA948;
      }
      goto L_089BA754;
    }
L_089BA754:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089BA948;
      }
      goto L_089BA75C;
    }
L_089BA75C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA948;
      }
      goto L_089BA768;
    }
L_089BA768:
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA948;
      }
      goto L_089BA780;
    }
L_089BA780:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26776)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BA79Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BA79Cu) goto L_089BA79C;
    return;
L_089BA79C:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089BA808;
      }
      goto L_089BA7A4;
    }
L_089BA7A4:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[17] << 3u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[29]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA948;
      }
      goto L_089BA7DC;
    }
L_089BA7DC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_089BA948;
      }
      goto L_089BA7E4;
    }
L_089BA7E4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA948;
      }
      goto L_089BA7F0;
    }
L_089BA7F0:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA948;
      }
      goto L_089BA808;
    }
L_089BA808:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26768)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BA824u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BA824u) goto L_089BA824;
    return;
L_089BA824:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089BA8A8;
      }
      goto L_089BA82C;
    }
L_089BA82C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[17] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[29]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA948;
      }
      goto L_089BA874;
    }
L_089BA874:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_089BA948;
      }
      goto L_089BA87C;
    }
L_089BA87C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA948;
      }
      goto L_089BA888;
    }
L_089BA888:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA948;
      }
      goto L_089BA8A8;
    }
L_089BA8A8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26748)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BA8C4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BA8C4u) goto L_089BA8C4;
    return;
L_089BA8C4:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089BA948;
      }
      goto L_089BA8CC;
    }
L_089BA8CC:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[17] << 4u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[29]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA948;
      }
      goto L_089BA914;
    }
L_089BA914:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_089BA948;
      }
      goto L_089BA91C;
    }
L_089BA91C:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BA948;
      }
      goto L_089BA928;
    }
L_089BA928:
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089BA948;
L_089BA948:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BA96C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089BA9A0u);
    // nop
    goto L_089B96A0;
L_089BA9A0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30040)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BA9C4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BA9C4u) goto L_089BA9C4;
    return;
L_089BA9C4:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089BA9F8;
      }
      goto L_089BA9CC;
    }
L_089BA9CC:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BABA0;
      }
      goto L_089BA9F8;
    }
L_089BA9F8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26776)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BAA14u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BAA14u) goto L_089BAA14;
    return;
L_089BAA14:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089BAA50;
      }
      goto L_089BAA1C;
    }
L_089BAA1C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[17] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BABA0;
      }
      goto L_089BAA50;
    }
L_089BAA50:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26768)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BAA6Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BAA6Cu) goto L_089BAA6C;
    return;
L_089BAA6C:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089BAAB8;
      }
      goto L_089BAA74;
    }
L_089BAA74:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[17] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[17]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BABA0;
      }
      goto L_089BAAB8;
    }
L_089BAAB8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26748)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BAAD4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BAAD4u) goto L_089BAAD4;
    return;
L_089BAAD4:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089BAB20;
      }
      goto L_089BAADC;
    }
L_089BAADC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[17] << 4u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_gpr(2, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[29]);
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BABA0;
      }
      goto L_089BAB20;
    }
L_089BAB20:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30016)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BAB3Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BAB3Cu) goto L_089BAB3C;
    return;
L_089BAB3C:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089BABA0;
      }
      goto L_089BAB44;
    }
L_089BAB44:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30004)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BAB60u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BAB60u) goto L_089BAB60;
    return;
L_089BAB60:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089BABA0;
      }
      goto L_089BAB68;
    }
L_089BAB68:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30028)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BAB84u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BAB84u) goto L_089BAB84;
    return;
L_089BAB84:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089BABA0;
      }
      goto L_089BAB8C;
    }
L_089BAB8C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BABA0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BABA0u) goto L_089BABA0;
    return;
L_089BABA0:
    ctx.set_fpr_bits(0, ctx.fpr_bits(20));
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(96));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BABC8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(17, ctx.gpr[7] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089BAC00u);
    // nop
    goto L_089B96A0;
L_089BAC00:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30028)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BAC28u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BAC28u) goto L_089BAC28;
    return;
L_089BAC28:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089BAC78;
      }
      goto L_089BAC30;
    }
L_089BAC30:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[3])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    ctx.set_gpr(4, ctx.gpr[19] + ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BADAC;
      }
      goto L_089BAC50;
    }
L_089BAC50:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089BADAC;
      }
      goto L_089BAC58;
    }
L_089BAC58:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BADAC;
      }
      goto L_089BAC64;
    }
L_089BAC64:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[17]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BADAC;
      }
      goto L_089BAC78;
    }
L_089BAC78:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26760)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BAC94u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BAC94u) goto L_089BAC94;
    return;
L_089BAC94:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089BAD10;
      }
      goto L_089BAC9C;
    }
L_089BAC9C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[18] << 1u);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[18]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[29]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BADAC;
      }
      goto L_089BACDC;
    }
L_089BACDC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_089BADAC;
      }
      goto L_089BACE4;
    }
L_089BACE4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BADAC;
      }
      goto L_089BACF0;
    }
L_089BACF0:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(45)));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(46)));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BADAC;
      }
      goto L_089BAD10;
    }
L_089BAD10:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26740)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BAD2Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BAD2Cu) goto L_089BAD2C;
    return;
L_089BAD2C:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089BADAC;
      }
      goto L_089BAD34;
    }
L_089BAD34:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(4, ctx.gpr[18] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[29]);
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BADAC;
      }
      goto L_089BAD78;
    }
L_089BAD78:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_089BADAC;
      }
      goto L_089BAD80;
    }
L_089BAD80:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BADAC;
      }
      goto L_089BAD8C;
    }
L_089BAD8C:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(41)));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(42)));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(43)));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    goto L_089BADAC;
L_089BADAC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BADD0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089BAE04u);
    // nop
    goto L_089B96A0;
L_089BAE04:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(3, 2245u << 16u);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(30028)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BAE28u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BAE28u) goto L_089BAE28;
    return;
L_089BAE28:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089BAE58;
      }
      goto L_089BAE30;
    }
L_089BAE30:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[2])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(17, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BAF14;
      }
      goto L_089BAE58;
    }
L_089BAE58:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26760)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BAE74u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BAE74u) goto L_089BAE74;
    return;
L_089BAE74:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089BAEB8;
      }
      goto L_089BAE7C;
    }
L_089BAE7C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(2, ctx.gpr[18] << 1u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(1)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(2)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(46), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[29]);
    ctx.set_gpr(17, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BAF14;
      }
      goto L_089BAEB8;
    }
L_089BAEB8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26740)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BAED4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BAED4u) goto L_089BAED4;
    return;
L_089BAED4:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089BAF14;
      }
      goto L_089BAEDC;
    }
L_089BAEDC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(1)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(2)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(3)));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, ctx.gpr[19] + ctx.gpr[29]);
    ctx.set_gpr(17, rt.memory().aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    goto L_089BAF14;
L_089BAF14:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BAF3C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089BAF68u);
    // nop
    goto L_089B96A0;
L_089BAF68:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BAFB0;
      }
      goto L_089BAF80;
    }
L_089BAF80:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_089BAFB0;
      }
      goto L_089BAF88;
    }
L_089BAF88:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BAFB0;
      }
      goto L_089BAF94;
    }
L_089BAF94:
    ctx.set_gpr(4, ctx.gpr[17] << 3u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089BAFB0;
L_089BAFB0:
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
L_089BAFC8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089BAFECu);
    // nop
    goto L_089B96A0;
L_089BAFEC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(3, ctx.gpr[16] << 3u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BB018:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_fpr_bits(20, ctx.fpr_bits(12));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089BB048u);
    // nop
    goto L_089B96A0;
L_089BB048:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB078;
      }
      goto L_089BB054;
    }
L_089BB054:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30040)));
    ctx.set_gpr(31, 0x089BB068u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB068u) goto L_089BB068;
    return;
L_089BB068:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB078;
      }
      goto L_089BB070;
    }
L_089BB070:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB07C;
      }
      goto L_089BB078;
    }
L_089BB078:
    ctx.set_gpr(16, 0u + 0u);
    goto L_089BB07C;
L_089BB07C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB0AC;
      }
      goto L_089BB088;
    }
L_089BB088:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_089BB0AC;
      }
      goto L_089BB090;
    }
L_089BB090:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB0AC;
      }
      goto L_089BB09C;
    }
L_089BB09C:
    ctx.set_gpr(4, ctx.gpr[17] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_089BB0AC;
L_089BB0AC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BB0C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089BB0F0u);
    // nop
    goto L_089B96A0;
L_089BB0F0:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB120;
      }
      goto L_089BB0FC;
    }
L_089BB0FC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30040)));
    ctx.set_gpr(31, 0x089BB110u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB110u) goto L_089BB110;
    return;
L_089BB110:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB120;
      }
      goto L_089BB118;
    }
L_089BB118:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB124;
      }
      goto L_089BB120;
    }
L_089BB120:
    ctx.set_gpr(16, 0u + 0u);
    goto L_089BB124;
L_089BB124:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
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
L_089BB14C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089BB17Cu);
    // nop
    goto L_089B96A0;
L_089BB17C:
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB1AC;
      }
      goto L_089BB188;
    }
L_089BB188:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26776)));
    ctx.set_gpr(31, 0x089BB19Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB19Cu) goto L_089BB19C;
    return;
L_089BB19C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB1AC;
      }
      goto L_089BB1A4;
    }
L_089BB1A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB1B0;
      }
      goto L_089BB1AC;
    }
L_089BB1AC:
    ctx.set_gpr(17, 0u + 0u);
    goto L_089BB1B0;
L_089BB1B0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB1EC;
      }
      goto L_089BB1BC;
    }
L_089BB1BC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_089BB1EC;
      }
      goto L_089BB1C4;
    }
L_089BB1C4:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB1EC;
      }
      goto L_089BB1D0;
    }
L_089BB1D0:
    ctx.set_gpr(4, ctx.gpr[18] << 3u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089BB1EC;
L_089BB1EC:
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
L_089BB208:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(9));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089BB238u);
    // nop
    goto L_089B96A0;
L_089BB238:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB268;
      }
      goto L_089BB244;
    }
L_089BB244:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26776)));
    ctx.set_gpr(31, 0x089BB258u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 857u, 0x08947F8Cu>(ctx, &aot_mem) && ctx.pc == 0x089BB258u) goto L_089BB258;
    return;
L_089BB258:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB268;
      }
      goto L_089BB260;
    }
L_089BB260:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB26C;
      }
      goto L_089BB268;
    }
L_089BB268:
    ctx.set_gpr(16, 0u + 0u);
    goto L_089BB26C;
L_089BB26C:
    ctx.set_gpr(4, ctx.gpr[18] << 3u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(4)));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
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
L_089BB2A4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089BB2C4u);
    // nop
    goto L_089B96A0;
L_089BB2C4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB2DC;
      }
      goto L_089BB2CC;
    }
L_089BB2CC:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089BB2D8u);
    // nop
    goto L_089BB8F4;
L_089BB2D8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_089BB2DC;
L_089BB2DC:
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
L_089BB2F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089BB314u);
    // nop
    goto L_089B96A0;
L_089BB314:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB32C;
      }
      goto L_089BB31C;
    }
L_089BB31C:
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089BB328u);
    // nop
    goto L_089BBA78;
L_089BB328:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_089BB32C;
L_089BB32C:
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
L_089BB344:
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
    ctx.set_gpr(19, ctx.gpr[6] + 0u);
    ctx.set_gpr(18, ctx.gpr[7] + 0u);
    ctx.set_gpr(17, ctx.gpr[8] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB3B8;
      }
      goto L_089BB38C;
    }
L_089BB38C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BB3A4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BB3A4u) goto L_089BB3A4;
    return;
L_089BB3A4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089BB3B8u);
    // nop
    goto L_089BA140;
L_089BB3B8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & 2u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB3F4;
      }
      goto L_089BB3C8;
    }
L_089BB3C8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BB3E0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BB3E0u) goto L_089BB3E0;
    return;
L_089BB3E0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089BB3F4u);
    // nop
    goto L_089BA224;
L_089BB3F4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 64u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB434;
      }
      goto L_089BB408;
    }
L_089BB408:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BB420u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BB420u) goto L_089BB420;
    return;
L_089BB420:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089BB434u);
    // nop
    goto L_089BA308;
L_089BB434:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 128u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB474;
      }
      goto L_089BB448;
    }
L_089BB448:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BB460u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BB460u) goto L_089BB460;
    return;
L_089BB460:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089BB474u);
    // nop
    goto L_089BA3EC;
L_089BB474:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & 4u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB4B0;
      }
      goto L_089BB484;
    }
L_089BB484:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(168)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BB49Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BB49Cu) goto L_089BB49C;
    return;
L_089BB49C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089BB4B0u);
    // nop
    goto L_089BA4D0;
L_089BB4B0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & 240u);
    ctx.set_gpr(3, (ctx.gpr[3] >> 4u) & 0x000000FFu);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB518;
      }
      goto L_089BB4C4;
    }
L_089BB4C4:
    ctx.set_gpr(22, ctx.gpr[3] & 255u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB50C;
      }
      goto L_089BB4D4;
    }
L_089BB4D4:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(180)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BB4F0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BB4F0u) goto L_089BB4F0;
    return;
L_089BB4F0:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(0));
    ctx.set_gpr(31, 0x089BB508u);
    // nop
    goto L_089BA6CC;
L_089BB508:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089BB50C;
L_089BB50C:
    ctx.set_gpr(3, ctx.gpr[16] < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BB4D4;
      }
      goto L_089BB518;
    }
L_089BB518:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & 3840u);
    ctx.set_gpr(3, (ctx.gpr[3] >> 8u) & 0x000000FFu);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB580;
      }
      goto L_089BB52C;
    }
L_089BB52C:
    ctx.set_gpr(22, ctx.gpr[3] & 255u);
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB574;
      }
      goto L_089BB53C;
    }
L_089BB53C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(192)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BB558u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BB558u) goto L_089BB558;
    return;
L_089BB558:
    ctx.set_gpr(7, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089BB570u);
    // nop
    goto L_089BABC8;
L_089BB570:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089BB574;
L_089BB574:
    ctx.set_gpr(3, ctx.gpr[16] < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BB53C;
      }
      goto L_089BB580;
    }
L_089BB580:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 48u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(3, (ctx.gpr[3] >> 20u) & 0x000000FFu);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB628;
      }
      goto L_089BB598;
    }
L_089BB598:
    ctx.set_gpr(4, ctx.gpr[3] & 255u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089BB5E4;
      }
      goto L_089BB5A8;
    }
L_089BB5A8:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(212)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BB5C0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BB5C0u) goto L_089BB5C0;
    return;
L_089BB5C0:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_fpr_bits(12, ctx.fpr_bits(0));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BB5DCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BB5DCu) goto L_089BB5DC;
    return;
L_089BB5DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB628;
      }
      goto L_089BB5E4;
    }
L_089BB5E4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089BB628;
      }
      goto L_089BB5F0;
    }
L_089BB5F0:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BB60Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BB60Cu) goto L_089BB60C;
    return;
L_089BB60C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BB628u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BB628u) goto L_089BB628;
    return;
L_089BB628:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 15u << 16u);
    ctx.set_gpr(3, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(3, (ctx.gpr[3] >> 16u) & 0x000000FFu);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB694;
      }
      goto L_089BB640;
    }
L_089BB640:
    ctx.set_gpr(16, ctx.gpr[3] & 255u);
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB688;
      }
      goto L_089BB650;
    }
L_089BB650:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(204)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BB66Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BB66Cu) goto L_089BB66C;
    return;
L_089BB66C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089BB684u);
    // nop
    goto L_089BAF3C;
L_089BB684:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    goto L_089BB688;
L_089BB688:
    ctx.set_gpr(3, ctx.gpr[17] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BB650;
      }
      goto L_089BB694;
    }
L_089BB694:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
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
L_089BB6C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-48));
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
    ctx.set_gpr(21, ctx.gpr[4] + 0u);
    ctx.set_gpr(20, ctx.gpr[5] + 0u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089BB708u);
    // nop
    goto L_089B96A0;
L_089BB708:
    ctx.set_gpr(19, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(3));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089BB720u);
    // nop
    goto L_089B96A0;
L_089BB720:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089BB738u);
    // nop
    goto L_089B96A0;
L_089BB738:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(5));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089BB750u);
    // nop
    goto L_089B96A0;
L_089BB750:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(6));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089BB768u);
    // nop
    goto L_089B96A0;
L_089BB768:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089BB780u);
    // nop
    goto L_089B96A0;
L_089BB780:
    ctx.set_gpr(23, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(7));
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089BB798u);
    // nop
    goto L_089B96A0;
L_089BB798:
    ctx.set_gpr(30, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB7B0;
      }
      goto L_089BB7A4;
    }
L_089BB7A4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] | 1u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_089BB7B0;
L_089BB7B0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB7C4;
      }
      goto L_089BB7B8;
    }
L_089BB7B8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] | 2u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_089BB7C4;
L_089BB7C4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB7D8;
      }
      goto L_089BB7CC;
    }
L_089BB7CC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] | 4u);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_089BB7D8;
L_089BB7D8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB80C;
      }
      goto L_089BB7E0;
    }
L_089BB7E0:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089BB7ECu);
    // nop
    goto L_089BB2A4;
L_089BB7EC:
    ctx.set_gpr(4, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-241));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[4] << 4u);
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_089BB80C;
L_089BB80C:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB840;
      }
      goto L_089BB814;
    }
L_089BB814:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089BB820u);
    // nop
    goto L_089BB2F4;
L_089BB820:
    ctx.set_gpr(4, ctx.gpr[2] & 255u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3841));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[4] << 8u);
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_089BB840;
L_089BB840:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB858;
      }
      goto L_089BB848;
    }
L_089BB848:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 128u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_089BB858;
L_089BB858:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB870;
      }
      goto L_089BB860;
    }
L_089BB860:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, 64u << 16u);
    ctx.set_gpr(2, ctx.gpr[3] | ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    goto L_089BB870;
L_089BB870:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BB880;
      }
      goto L_089BB87C;
    }
L_089BB87C:
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_089BB880;
L_089BB880:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089BB894u);
    // nop
    goto L_089B96A0;
L_089BB894:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BB87C;
      }
      goto L_089BB89C;
    }
L_089BB89C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 65520u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 65535u);
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[16] & 255u);
    ctx.set_gpr(3, ctx.gpr[3] << 16u);
    ctx.set_gpr(3, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BB8F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30040)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BB92Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BB92Cu) goto L_089BB92C;
    return;
L_089BB92C:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089BB9C4;
      }
      goto L_089BB934;
    }
L_089BB934:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29952)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BB950u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BB950u) goto L_089BB950;
    return;
L_089BB950:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089BB9C4;
      }
      goto L_089BB958;
    }
L_089BB958:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30028)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BB974u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BB974u) goto L_089BB974;
    return;
L_089BB974:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089BB9C4;
      }
      goto L_089BB97C;
    }
L_089BB97C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30016)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BB998u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BB998u) goto L_089BB998;
    return;
L_089BB998:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089BB9C4;
      }
      goto L_089BB9A0;
    }
L_089BB9A0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30004)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BB9BCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BB9BCu) goto L_089BB9BC;
    return;
L_089BB9BC:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089BB9D0;
      }
      goto L_089BB9C4;
    }
L_089BB9C4:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BBA58;
      }
      goto L_089BB9D0;
    }
L_089BB9D0:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26776)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BB9ECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BB9ECu) goto L_089BB9EC;
    return;
L_089BB9EC:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089BBA00;
      }
      goto L_089BB9F4;
    }
L_089BB9F4:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BBA58;
      }
      goto L_089BBA00;
    }
L_089BBA00:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26768)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BBA1Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BBA1Cu) goto L_089BBA1C;
    return;
L_089BBA1C:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089BBA30;
      }
      goto L_089BBA24;
    }
L_089BBA24:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BBA58;
      }
      goto L_089BBA30;
    }
L_089BBA30:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26748)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BBA4Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BBA4Cu) goto L_089BBA4C;
    return;
L_089BBA4C:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089BBA58;
      }
      goto L_089BBA54;
    }
L_089BBA54:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(4));
    goto L_089BBA58;
L_089BBA58:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
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
L_089BBA78:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30028)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BBAB0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BBAB0u) goto L_089BBAB0;
    return;
L_089BBAB0:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089BBAC4;
      }
      goto L_089BBAB8;
    }
L_089BBAB8:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BBB1C;
      }
      goto L_089BBAC4;
    }
L_089BBAC4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26760)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BBAE0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BBAE0u) goto L_089BBAE0;
    return;
L_089BBAE0:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089BBAF4;
      }
      goto L_089BBAE8;
    }
L_089BBAE8:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(3));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089BBB1C;
      }
      goto L_089BBAF4;
    }
L_089BBAF4:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26740)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089BBB10u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089BBB10u) goto L_089BBB10;
    return;
L_089BBB10:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089BBB1C;
      }
      goto L_089BBB18;
    }
L_089BBB18:
    ctx.set_gpr(16, 0u + static_cast<std::uint32_t>(4));
    goto L_089BBB1C;
L_089BBB1C:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
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
L_089BBB3C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32181))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BBC60;
      }
      goto L_089BBB48;
    }
L_089BBB48:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26768)));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30756), ctx.gpr[7]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30004)));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30752), ctx.gpr[6]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30732), ctx.gpr[7]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26748)));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30728), ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30708), ctx.gpr[7]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30704), ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30684), ctx.gpr[7]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29952)));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30680), ctx.gpr[5]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30028)));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30676), ctx.gpr[3]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30016)));
    ctx.set_gpr(8, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-30672), ctx.gpr[2]);
    ctx.set_gpr(8, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-30668), ctx.gpr[6]);
    ctx.set_gpr(8, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-30660), ctx.gpr[7]);
    ctx.set_gpr(8, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-30656), ctx.gpr[5]);
    ctx.set_gpr(8, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-30652), ctx.gpr[3]);
    ctx.set_gpr(8, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-30648), ctx.gpr[2]);
    ctx.set_gpr(8, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-30644), ctx.gpr[6]);
    ctx.set_gpr(8, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-30636), ctx.gpr[7]);
    ctx.set_gpr(8, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-30632), ctx.gpr[5]);
    ctx.set_gpr(8, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-30628), ctx.gpr[3]);
    ctx.set_gpr(8, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-30624), ctx.gpr[2]);
    ctx.set_gpr(8, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-30620), ctx.gpr[6]);
    ctx.set_gpr(8, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-30612), ctx.gpr[7]);
    ctx.set_gpr(8, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-30588), ctx.gpr[7]);
    ctx.set_gpr(8, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-30564), ctx.gpr[7]);
    ctx.set_gpr(7, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-30560), ctx.gpr[5]);
    ctx.set_gpr(5, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-30556), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-30552), ctx.gpr[2]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30548), ctx.gpr[6]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-32181), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_089BBC60;
L_089BBC60:
    ctx.set_gpr(2, ctx.gpr[4] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-30756));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BBC80:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32180))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BBD7C;
      }
      goto L_089BBC8C;
    }
L_089BBC8C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29992)));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30516), ctx.gpr[5]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26740)));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30512), ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30496), ctx.gpr[5]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30492), ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30476), ctx.gpr[5]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30472), ctx.gpr[3]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30456), ctx.gpr[5]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30452), ctx.gpr[3]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30004)));
    ctx.set_gpr(6, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-30448), ctx.gpr[2]);
    ctx.set_gpr(6, 2246u << 16u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-26760)));
    ctx.set_gpr(6, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-30444), ctx.gpr[8]);
    ctx.set_gpr(6, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-30436), ctx.gpr[5]);
    ctx.set_gpr(6, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-30432), ctx.gpr[3]);
    ctx.set_gpr(6, 2245u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(30016)));
    ctx.set_gpr(6, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-30428), ctx.gpr[7]);
    ctx.set_gpr(6, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-30416), ctx.gpr[5]);
    ctx.set_gpr(6, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-30412), ctx.gpr[3]);
    ctx.set_gpr(6, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-30408), ctx.gpr[2]);
    ctx.set_gpr(6, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-30396), ctx.gpr[5]);
    ctx.set_gpr(6, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-30392), ctx.gpr[3]);
    ctx.set_gpr(6, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-30376), ctx.gpr[5]);
    ctx.set_gpr(6, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-30372), ctx.gpr[3]);
    ctx.set_gpr(6, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-30356), ctx.gpr[5]);
    ctx.set_gpr(5, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-30352), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-30348), ctx.gpr[2]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30344), ctx.gpr[8]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-32180), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_089BBD7C;
L_089BBD7C:
    ctx.set_gpr(2, ctx.gpr[4] << 2u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-30516));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BBD9C:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32179))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089BBEC0;
      }
      goto L_089BBDA8;
    }
L_089BBDA8:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26768)));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30316), ctx.gpr[7]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30004)));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30312), ctx.gpr[6]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29952)));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30308), ctx.gpr[5]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30292), ctx.gpr[7]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30268), ctx.gpr[7]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30244), ctx.gpr[7]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30240), ctx.gpr[5]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30028)));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30236), ctx.gpr[3]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30016)));
    ctx.set_gpr(8, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-30232), ctx.gpr[2]);
    ctx.set_gpr(8, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-30228), ctx.gpr[6]);
    ctx.set_gpr(8, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-30220), ctx.gpr[7]);
    ctx.set_gpr(8, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-30216), ctx.gpr[5]);
    ctx.set_gpr(8, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-30212), ctx.gpr[3]);
    ctx.set_gpr(8, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-30208), ctx.gpr[2]);
    ctx.set_gpr(8, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-30204), ctx.gpr[6]);
    ctx.set_gpr(8, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-30196), ctx.gpr[7]);
    ctx.set_gpr(8, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-30192), ctx.gpr[5]);
    ctx.set_gpr(8, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-30188), ctx.gpr[3]);
    ctx.set_gpr(8, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-30184), ctx.gpr[2]);
    ctx.set_gpr(8, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-30180), ctx.gpr[6]);
    ctx.set_gpr(8, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-30172), ctx.gpr[7]);
    ctx.set_gpr(8, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-30168), ctx.gpr[3]);
    ctx.set_gpr(8, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-30148), ctx.gpr[7]);
    ctx.set_gpr(8, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-30144), ctx.gpr[3]);
    ctx.set_gpr(8, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-30124), ctx.gpr[7]);
    ctx.set_gpr(7, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-30120), ctx.gpr[5]);
    ctx.set_gpr(5, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-30116), ctx.gpr[3]);
    ctx.set_gpr(3, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-30112), ctx.gpr[2]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30108), ctx.gpr[6]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[28] + static_cast<std::uint32_t>(-32179), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_089BBEC0;
L_089BBEC0:
    ctx.set_gpr(2, ctx.gpr[4] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[2] << 3u);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-30316));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089BBEE0:
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(rt.memory().aot_load8(ctx.gpr[28] + static_cast<std::uint32_t>(-32178))))));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 2u, 0x089BC03Cu>(ctx, &aot_mem); return;
      }
      goto L_089BBEEC;
    }
L_089BBEEC:
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26776)));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30076), ctx.gpr[9]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30004)));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30072), ctx.gpr[8]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30052), ctx.gpr[9]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26768)));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30048), ctx.gpr[7]);
    ctx.set_gpr(2, 2246u << 16u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(-26748)));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30044), ctx.gpr[6]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30028), ctx.gpr[9]);
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30004), ctx.gpr[9]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(29952)));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30000), ctx.gpr[5]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30028)));
    ctx.set_gpr(2, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29996), ctx.gpr[3]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(30016)));
    ctx.set_gpr(10, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-29992), ctx.gpr[2]);
    ctx.set_gpr(10, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-29988), ctx.gpr[8]);
    ctx.set_gpr(10, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-29980), ctx.gpr[9]);
    ctx.set_gpr(10, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-29976), ctx.gpr[5]);
    ctx.set_gpr(10, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-29972), ctx.gpr[3]);
    ctx.set_gpr(10, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-29968), ctx.gpr[2]);
    ctx.set_gpr(10, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-29964), ctx.gpr[8]);
    ctx.set_gpr(10, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-29956), ctx.gpr[9]);
    ctx.set_gpr(10, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-29952), ctx.gpr[5]);
    ctx.set_gpr(10, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-29948), ctx.gpr[3]);
    ctx.set_gpr(10, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-29944), ctx.gpr[2]);
    ctx.set_gpr(10, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-29940), ctx.gpr[8]);
    ctx.set_gpr(10, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-29932), ctx.gpr[9]);
    ctx.set_gpr(10, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-29928), ctx.gpr[3]);
    ctx.set_gpr(10, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-29924), ctx.gpr[7]);
    ctx.set_gpr(10, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-29920), ctx.gpr[6]);
    ctx.set_gpr(10, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-29908), ctx.gpr[9]);
    ctx.set_gpr(10, 2246u << 16u);
    rt.memory().aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-29904), ctx.gpr[3]);
    ctx.set_gpr(10, 2246u << 16u);
    ctx.pc = 0x089BC000u; return;
}

void recomp_unit_0109(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0109_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_109(Runtime &runtime) {
    runtime.register_generated_unit(109u, 0x089B8000u, 16384u, &recomp_unit_0109, &recomp_unit_0109_entry);
    runtime.register_function(0x089B8000u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8018u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8038u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B806Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B80A0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B80C4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B80E4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8118u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8130u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8138u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8144u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8154u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B816Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8190u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B81A0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B81C4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B81F0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B81FCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8204u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8214u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8220u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8234u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8254u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8264u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8288u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B82ACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B82B8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B82C0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B82D0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B82DCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8304u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B830Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8340u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8350u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8358u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8364u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8374u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8384u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B83ACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B83B8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B83C8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B83E8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B83F8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8408u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8420u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B842Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B843Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B845Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8468u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B847Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B849Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B84B4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B84B8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B84CCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B84E8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8500u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8504u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8510u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8530u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B854Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8568u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B857Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8594u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B85BCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B85C8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B85F8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B860Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8620u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8628u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8630u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8640u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8654u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B865Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8664u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8674u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8688u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8690u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8698u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B86A4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B86ACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B86B0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B86BCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B86C4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B86C8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B86D4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B86F4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B86FCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8708u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B870Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8728u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B873Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8750u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8774u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B87ACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B87F0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8820u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8860u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8880u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8894u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B88A4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B88B4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B88D4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B88E4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8904u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8908u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8920u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8930u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8944u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B897Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B89BCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B89ECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8A28u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8A50u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8A78u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8AB0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8AF8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8B14u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8B30u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8B68u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8B74u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8B88u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8BACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8BC0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8BC8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8BCCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8BE0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8BF4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8C00u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8C1Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8C20u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8C2Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8C40u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8C5Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8C78u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8C84u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8C90u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8CD0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8D08u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8D1Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8D28u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8D30u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8D58u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8D6Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8D9Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8DA4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8DC0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8DF0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8DFCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8E18u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8E38u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8E3Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8E48u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8E5Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8E8Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8E94u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8EB0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8EE0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8EECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8F08u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8F28u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8F2Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8F38u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8F64u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8F6Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8F74u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8F84u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8F90u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8F98u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8FA8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8FB4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8FBCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B8FD8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9008u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9024u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9058u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9060u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B907Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B90A4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B90ACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B90D4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B90FCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9104u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B910Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B911Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9128u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9130u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9148u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9178u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9190u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B91C0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B91C8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B91D8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9208u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9210u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9238u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B924Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9264u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B927Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9288u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B929Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B92A4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B92ACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B92B0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B92C4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B92D8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B92ECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9304u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B931Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9328u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B933Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9344u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B934Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9350u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9364u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9378u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9414u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9434u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9444u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9450u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9454u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9460u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9488u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9490u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B949Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B94A8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B94B8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B94C4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B94D0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B94E0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B94ECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B94F8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9508u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9514u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9520u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9530u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B953Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9548u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9558u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9564u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9568u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9570u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B960Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B962Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B963Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9648u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B964Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9658u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9680u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9690u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B96A0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B973Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9754u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9768u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9770u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9778u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B977Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B978Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B979Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B97A8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B97ACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B97B8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B97E0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B981Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9834u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9848u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9850u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9858u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B985Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B986Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B987Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9888u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B988Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9898u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B98C4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B98FCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9908u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9920u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9934u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B993Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9944u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9948u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9950u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9960u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9968u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9978u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B997Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9990u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B99B4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9A3Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9A48u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9A64u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9A6Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9A7Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9A98u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9AA0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9AB0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9AB4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9ACCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9AF4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9B00u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9B0Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9B14u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9B20u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9B2Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9B38u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9B44u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9B50u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9B58u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9B64u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9B70u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9B78u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9B84u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9B94u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9BACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9BC4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9BD8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9BFCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9C0Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9C18u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9C2Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9C48u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9C4Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9C58u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9C68u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9C74u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9C88u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9CA4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9CA8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9CB4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9CC4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9CD0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9CE4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9D00u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9D04u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9D10u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9D24u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9D30u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9D3Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9D54u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9D74u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9D78u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9D90u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9D94u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9DA0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9DB0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9DBCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9DC8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9DE0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9E00u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9E04u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9E1Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9E20u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9E2Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9E3Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9E48u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9E5Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9E78u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9E7Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9E88u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9E9Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9EA8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9EBCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9ED8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9EDCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9EE8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9F00u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9F10u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9F1Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9F38u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9F54u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9F58u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9F64u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9F6Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9F78u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9F84u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9FA0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9FCCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9FD0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9FDCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089B9FF4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA000u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA00Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA024u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA044u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA048u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA064u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA068u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA074u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA084u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA090u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA098u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA0A4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA0ACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA0B0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA0D0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA0F4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA10Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA118u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA124u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA134u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA138u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA140u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA168u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA180u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA188u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA194u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA1C0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA1D8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA1F8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA224u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA24Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA264u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA26Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA278u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA2A4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA2BCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA2DCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA308u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA330u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA348u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA350u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA35Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA388u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA3A0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA3C0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA3ECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA414u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA42Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA434u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA440u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA46Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA484u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA4A4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA4D0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA4FCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA524u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA52Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA53Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA544u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA550u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA56Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA588u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA590u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA5A0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA5A8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA5B4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA5E0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA5FCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA628u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA64Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA654u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA670u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA68Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA694u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA6A8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA6CCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA704u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA72Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA734u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA754u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA75Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA768u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA780u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA79Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA7A4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA7DCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA7E4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA7F0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA808u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA824u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA82Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA874u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA87Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA888u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA8A8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA8C4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA8CCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA914u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA91Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA928u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA948u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA96Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA9A0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA9C4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA9CCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BA9F8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAA14u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAA1Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAA50u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAA6Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAA74u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAAB8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAAD4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAADCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAB20u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAB3Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAB44u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAB60u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAB68u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAB84u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAB8Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BABA0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BABC8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAC00u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAC28u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAC30u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAC50u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAC58u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAC64u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAC78u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAC94u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAC9Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BACDCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BACE4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BACF0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAD10u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAD2Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAD34u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAD78u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAD80u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAD8Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BADACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BADD0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAE04u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAE28u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAE30u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAE58u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAE74u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAE7Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAEB8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAED4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAEDCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAF14u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAF3Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAF68u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAF80u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAF88u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAF94u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAFB0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAFC8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BAFECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB018u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB048u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB054u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB068u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB070u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB078u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB07Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB088u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB090u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB09Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB0ACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB0C8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB0F0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB0FCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB110u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB118u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB120u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB124u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB14Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB17Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB188u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB19Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB1A4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB1ACu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB1B0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB1BCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB1C4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB1D0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB1ECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB208u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB238u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB244u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB258u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB260u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB268u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB26Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB2A4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB2C4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB2CCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB2D8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB2DCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB2F4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB314u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB31Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB328u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB32Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB344u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB38Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB3A4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB3B8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB3C8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB3E0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB3F4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB408u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB420u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB434u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB448u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB460u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB474u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB484u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB49Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB4B0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB4C4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB4D4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB4F0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB508u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB50Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB518u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB52Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB53Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB558u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB570u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB574u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB580u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB598u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB5A8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB5C0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB5DCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB5E4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB5F0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB60Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB628u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB640u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB650u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB66Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB684u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB688u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB694u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB6C0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB708u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB720u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB738u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB750u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB768u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB780u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB798u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB7A4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB7B0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB7B8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB7C4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB7CCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB7D8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB7E0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB7ECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB80Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB814u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB820u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB840u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB848u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB858u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB860u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB870u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB87Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB880u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB894u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB89Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB8F4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB92Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB934u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB950u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB958u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB974u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB97Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB998u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB9A0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB9BCu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB9C4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB9D0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB9ECu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BB9F4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBA00u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBA1Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBA24u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBA30u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBA4Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBA54u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBA58u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBA78u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBAB0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBAB8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBAC4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBAE0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBAE8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBAF4u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBB10u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBB18u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBB1Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBB3Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBB48u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBC60u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBC80u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBC8Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBD7Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBD9Cu, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBDA8u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBEC0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBEE0u, &recomp_unit_0109, "recomp_unit_0109");
    runtime.register_function(0x089BBEECu, &recomp_unit_0109, "recomp_unit_0109");
}
} // namespace psprecomp
