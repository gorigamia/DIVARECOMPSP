#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0091[4088] = {
    1, 0, 2, 0, 0, 3, 0, 0, 4, 0, 0, 5, 0, 6, 0, 0, 0, 7, 0, 8, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0,
    0, 10, 0, 11, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 0, 14, 0, 15, 0, 16, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0,
    0, 0, 19, 0, 0, 0, 20, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 27, 0, 28, 0, 0, 0, 0, 29, 0,
    0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0,
    34, 0, 35, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 40,
    41, 0, 0, 0, 0, 42, 0, 0, 43, 44, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0,
    49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 51, 0, 0, 0, 52, 0, 0, 0, 0,
    0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 58, 0,
    0, 59, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 62, 0, 0, 63, 64, 0, 0, 0, 0, 0, 0, 65, 66, 0, 0,
    0, 0, 0, 67, 0, 0, 0, 0, 68, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 73, 74, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 80, 0, 0, 81, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 89, 0, 0, 90, 0, 0, 91, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 95, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 0, 99, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0,
    0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 104, 0,
    0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 108, 0, 0, 0, 109, 0, 110, 0, 0, 0, 0,
    0, 0, 0, 0, 111, 0, 112, 0, 0, 0, 0, 113, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 116, 0, 0, 0, 0, 0, 117, 0, 0, 0,
    0, 118, 0, 0, 0, 0, 0, 0, 0, 119, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 124,
    0, 0, 125, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 128, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 131, 0,
    0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 136, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0,
    0, 139, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    145, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 149, 150, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0, 153, 154, 0,
    0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 158, 0, 0, 0, 159, 0, 160,
    0, 0, 161, 162, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 166, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 0, 170,
    0, 0, 0, 171, 0, 0, 0, 0, 0, 172, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 176, 0, 0, 0, 0,
    177, 0, 178, 0, 0, 0, 0, 179, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 182, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 184, 0,
    185, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190,
    0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0,
    196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0,
    0, 0, 0, 0, 202, 0, 203, 0, 204, 0, 0, 205, 0, 206, 0, 0, 207, 0, 0, 208, 0, 0, 209, 0, 0, 0, 0, 0, 210, 0, 0, 0,
    0, 0, 211, 0, 0, 0, 0, 0, 0, 212, 213, 214, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 0, 0, 0, 217,
    0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 219, 0, 0, 220, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0,
    0, 0, 223, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0,
    0, 228, 0, 0, 0, 0, 229, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 234, 0, 0,
    0, 0, 235, 0, 0, 0, 0, 0, 236, 0, 0, 237, 0, 0, 238, 0, 0, 0, 0, 0, 0, 239, 240, 0, 241, 0, 0, 242, 0, 0, 0, 0,
    243, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 245, 0, 246, 0, 247, 0, 0, 0, 0, 248, 0, 0, 249, 0, 0, 250, 0, 0, 251,
    0, 0, 0, 252, 0, 0, 253, 0, 0, 0, 254, 0, 0, 255, 0, 0, 0, 256, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 259,
    0, 0, 260, 261, 0, 0, 262, 263, 0, 264, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 267, 268, 0, 269, 0, 0,
    270, 0, 0, 0, 0, 271, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 275, 276, 0, 277,
    0, 0, 278, 0, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 281, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    283, 0, 284, 0, 285, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 0, 288, 0, 289, 290, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    295, 296, 0, 0, 0, 297, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 301, 0, 302,
    0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 306, 0, 0, 307, 308, 0, 309, 0, 0, 0, 0,
    310, 0, 0, 0, 0, 0, 311, 0, 0, 312, 0, 0, 313, 0, 0, 0, 0, 0, 0, 314, 315, 0, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 319, 320, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0,
    0, 0, 322, 0, 0, 0, 323, 0, 0, 324, 0, 0, 325, 326, 0, 327, 0, 0, 328, 329, 0, 0, 0, 0, 330, 0, 331, 0, 0, 332, 0, 0,
    0, 0, 333, 0, 0, 0, 0, 0, 334, 0, 0, 335, 0, 0, 336, 0, 0, 0, 0, 0, 0, 337, 338, 0, 339, 0, 0, 340, 0, 0, 0, 0,
    341, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 343, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0,
    0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 349, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 351,
    0, 0, 0, 352, 0, 0, 0, 0, 0, 353, 0, 0, 0, 354, 0, 0, 0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0,
    0, 359, 0, 0, 360, 0, 361, 0, 362, 0, 0, 0, 363, 0, 364, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 366, 0, 0, 0, 0, 0, 0,
    0, 367, 0, 368, 0, 0, 369, 0, 0, 370, 0, 0, 371, 0, 372, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 374, 0, 0, 0, 0, 375, 0,
    0, 0, 0, 376, 0, 0, 0, 377, 378, 0, 0, 379, 380, 0, 0, 0, 0, 381, 0, 0, 0, 0, 382, 0, 0, 383, 0, 0, 384, 0, 0, 385,
    0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 388, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 390, 0, 0,
    0, 391, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 392, 0, 0, 393, 0, 0, 0, 0, 0, 394, 0, 0,
    0, 0, 0, 0, 0, 395, 0, 396, 0, 0, 397, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 399, 0, 400, 0, 0, 0, 0, 401,
    0, 0, 0, 0, 0, 402, 0, 0, 403, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 406, 0, 0, 407, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 408, 409, 0, 0, 0, 0, 0, 0, 0, 0, 410, 0, 411, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 414, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 416, 0, 417, 0, 0,
    0, 0, 0, 0, 418, 419, 0, 420, 0, 0, 0, 0, 421, 0, 0, 422, 0, 423, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 425, 0, 0,
    0, 0, 0, 0, 426, 0, 0, 0, 0, 427, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 430,
    0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 432, 0, 433, 0, 0, 434, 0, 0, 0, 0, 0, 435, 0, 436, 0, 0, 0, 437, 0, 0, 0,
    0, 438, 439, 0, 0, 0, 440, 0, 0, 0, 0, 441, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 444, 0, 0,
    0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 446, 0, 447, 0, 0, 0, 0, 0, 0, 0, 448, 0, 449, 0, 0, 450, 0, 0, 0, 0, 451,
    0, 452, 0, 0, 453, 454, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 457, 458, 0, 459, 0, 0, 0, 0, 0, 0, 460,
    0, 0, 461, 0, 0, 0, 0, 0, 462, 0, 0, 463, 0, 0, 0, 0, 464, 0, 465, 0, 0, 0, 0, 466, 0, 0, 467, 0, 0, 0, 468, 0,
    469, 0, 0, 470, 0, 0, 0, 471, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 474, 0, 0, 0,
    0, 0, 0, 0, 475, 0, 0, 476, 0, 0, 0, 0, 477, 0, 0, 0, 478, 0, 479, 0, 0, 480, 0, 0, 0, 0, 0, 481, 0, 0, 482, 0,
    0, 0, 0, 483, 0, 0, 0, 484, 0, 485, 0, 0, 0, 486, 0, 0, 0, 0, 0, 487, 0, 488, 0, 0, 0, 0, 489, 0, 0, 490, 0, 0,
    0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 493, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 495, 0, 0, 0, 496,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 498, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0,
    0, 0, 0, 500, 0, 501, 0, 0, 0, 0, 0, 0, 0, 502, 503, 0, 0, 0, 0, 504, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0,
    506, 0, 507, 0, 508, 0, 0, 509, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 511, 0, 0, 0, 0, 512, 0, 0, 513, 0, 0, 0, 0, 0,
    0, 0, 514, 515, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0, 0, 519, 0, 520, 0,
    0, 521, 0, 0, 0, 0, 0, 522, 0, 523, 0, 0, 0, 524, 0, 0, 0, 0, 525, 526, 0, 0, 0, 527, 0, 0, 0, 0, 528, 0, 0, 0,
    0, 529, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 533, 0, 534, 0,
    0, 0, 0, 0, 0, 0, 535, 0, 536, 0, 0, 537, 0, 538, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0, 541,
    0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 544, 0, 0, 0, 545, 0, 0, 0, 546, 0, 0, 0, 0, 547, 0,
    0, 548, 0, 0, 0, 0, 549, 0, 0, 0, 0, 550, 0, 0, 551, 0, 0, 0, 0, 552, 0, 0, 553, 0, 0, 0, 554, 555, 0, 556, 0, 0,
    0, 0, 0, 0, 557, 558, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 559, 0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 561, 0, 562, 0, 563, 0, 0, 0, 564, 0, 0, 565, 0, 566, 0, 0, 0, 0, 0, 567, 0, 0, 568, 0, 0, 0, 569, 0, 0, 0, 0,
    0, 570, 0, 0, 0, 0, 0, 0, 0, 0, 0, 571, 0, 572, 0, 0, 573, 0, 0, 0, 0, 0, 574, 0, 0, 575, 576, 0, 577, 0, 0, 0,
    0, 578, 0, 0, 0, 0, 579, 0, 0, 580, 581, 0, 0, 0, 0, 582, 0, 0, 0, 0, 0, 583, 0, 0, 0, 0, 584, 585, 0, 586, 0, 0,
    587, 0, 0, 0, 0, 0, 588, 0, 0, 589, 0, 0, 0, 0, 590, 0, 0, 0, 0, 0, 0, 591, 0, 592, 0, 0, 593, 0, 0, 0, 0, 0,
    594, 0, 0, 595, 0, 0, 0, 0, 596, 0, 0, 0, 597, 0, 598, 0, 0, 599, 0, 0, 0, 0, 0, 600, 0, 0, 601, 0, 0, 0, 0, 602,
    0, 0, 603, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 604, 0, 0, 605, 0, 0, 0, 0, 0, 606, 0,
    0, 607, 0, 0, 0, 0, 608, 0, 609, 0, 0, 0, 610, 0, 0, 0, 0, 0, 611, 612, 0, 613, 0, 614, 0, 0, 0, 0, 615, 0, 0, 0,
    0, 616, 0, 617, 0, 0, 0, 618, 0, 0, 0, 0, 619, 0, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 621,
    0, 0, 0, 0, 0, 0, 0, 622, 0, 0, 0, 623, 0, 624, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 625, 0, 0, 0, 0, 626, 0, 0, 0, 0, 627, 0, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0,
    0, 629, 0, 0, 0, 0, 0, 0, 630, 0, 0, 0, 0, 631, 0, 632, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 633, 0, 0, 0, 0, 634, 0, 0, 0, 0, 635, 0, 0, 0, 0, 636, 0, 0, 0, 0, 0, 637, 0, 0, 0, 638, 0, 0,
    0, 639, 0, 0, 0, 0, 0, 640, 0, 0, 0, 0, 0, 0, 0, 641, 0, 0, 0, 642, 643, 0, 0, 644, 0, 645, 0, 0, 0, 0, 0, 646,
    0, 0, 0, 0, 0, 0, 0, 647, 0, 0, 0, 648, 649, 0, 0, 650, 0, 651, 0, 0, 0, 0, 0, 652, 0, 0, 0, 0, 0, 0, 0, 653,
    0, 0, 0, 0, 654, 655, 0, 0, 656, 0, 657, 0, 0, 0, 0, 0, 658, 0, 0, 0, 0, 0, 0, 0, 659, 0, 0, 0, 0, 0, 660, 661,
    662, 0, 0, 663, 0, 664, 0, 0, 0, 0, 0, 0, 665, 0, 0, 0, 666, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 667, 0, 0, 668,
    0, 0, 0, 0, 669, 0, 0, 0, 0, 0, 0, 670, 0, 0, 0, 0, 0, 0, 671, 0, 0, 0, 672, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    673, 0, 0, 0, 674, 0, 0, 0, 0, 0, 0, 675, 0, 0, 0, 676, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 677, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 678, 679, 0, 680, 0, 0, 0, 681, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 682, 0, 683, 0, 0, 684, 0, 0, 0, 0, 0, 0, 0, 0, 0, 685, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 686,
    0, 0, 687, 0, 0, 0, 0, 0, 0, 0, 688, 0, 0, 689, 0, 0, 0, 0, 0, 690, 0, 0, 691, 0, 0, 0, 692, 0, 0, 0, 693, 0,
    0, 694, 0, 0, 0, 0, 695, 696, 697, 0, 0, 698, 0, 699, 0, 700, 0, 0, 0, 0, 0, 701, 0, 0, 702, 0, 0, 0, 0, 0, 703, 0,
    0, 704, 0, 705, 0, 0, 706, 0, 707, 708, 0, 709, 0, 0, 0, 0, 710, 711, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 712, 0, 0, 0,
    0, 0, 713, 0, 714, 0, 0, 0, 0, 0, 715, 0, 0, 0, 0, 716, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 717,
    0, 0, 0, 0, 0, 0, 0, 718, 0, 719, 0, 0, 720, 0, 0, 0, 721, 0, 0, 722, 0, 0, 0, 0, 0, 0, 723, 0, 0, 724, 725, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 726, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 727, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 728, 0, 729, 0, 0, 730, 0, 0, 0, 731, 0, 0, 732, 0, 0, 0, 0, 0, 0, 733, 0, 0, 734, 735, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 736, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 737, 0, 0, 0, 0, 0, 0, 0, 738, 739, 0, 0,
    740, 0, 0, 0, 0, 0, 0, 0, 741, 0, 0, 742, 0, 0, 0, 0, 0, 743, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 744, 0, 0,
    0, 745, 0, 0, 0, 0, 0, 746, 0, 0, 0, 0, 0, 747, 0, 748, 0, 749, 0, 0, 750, 0, 0, 751, 0, 0, 0, 0, 0, 0, 0, 752,
    0, 0, 753, 754, 0, 755, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 756, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 757, 0, 0, 758, 0, 0, 0, 0, 759, 0, 760, 0, 0, 0, 0, 0, 0, 0, 0, 0, 761, 0, 0,
    0, 0, 0, 0, 762, 763, 0, 0, 0, 0, 0, 0, 0, 0, 764, 0, 0, 0, 0, 0, 0, 0, 0, 765,
};
void recomp_unit_0091_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08970000u;
        entry_id = (entry_delta < 16352u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0091[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08970000;
    case 2u: goto L_08970008;
    case 3u: goto L_08970014;
    case 4u: goto L_08970020;
    case 5u: goto L_0897002C;
    case 6u: goto L_08970034;
    case 7u: goto L_08970044;
    case 8u: goto L_0897004C;
    case 9u: goto L_0897006C;
    case 10u: goto L_08970084;
    case 11u: goto L_0897008C;
    case 12u: goto L_089700A0;
    case 13u: goto L_089700AC;
    case 14u: goto L_089700C0;
    case 15u: goto L_089700C8;
    case 16u: goto L_089700D0;
    case 17u: goto L_089700E0;
    case 18u: goto L_089700F8;
    case 19u: goto L_08970108;
    case 20u: goto L_08970118;
    case 21u: goto L_08970128;
    case 22u: goto L_0897014C;
    case 23u: goto L_0897015C;
    case 24u: goto L_08970184;
    case 25u: goto L_08970194;
    case 26u: goto L_089701D0;
    case 27u: goto L_089701DC;
    case 28u: goto L_089701E4;
    case 29u: goto L_089701F8;
    case 30u: goto L_08970208;
    case 31u: goto L_0897021C;
    case 32u: goto L_0897023C;
    case 33u: goto L_08970274;
    case 34u: goto L_08970280;
    case 35u: goto L_08970288;
    case 36u: goto L_0897029C;
    case 37u: goto L_089702AC;
    case 38u: goto L_089702C0;
    case 39u: goto L_089702E0;
    case 40u: goto L_089702FC;
    case 41u: goto L_08970300;
    case 42u: goto L_08970314;
    case 43u: goto L_08970320;
    case 44u: goto L_08970324;
    case 45u: goto L_0897032C;
    case 46u: goto L_08970348;
    case 47u: goto L_08970358;
    case 48u: goto L_08970370;
    case 49u: goto L_08970380;
    case 50u: goto L_089703D8;
    case 51u: goto L_089703DC;
    case 52u: goto L_089703EC;
    case 53u: goto L_08970408;
    case 54u: goto L_08970418;
    case 55u: goto L_0897042C;
    case 56u: goto L_08970438;
    case 57u: goto L_0897045C;
    case 58u: goto L_08970478;
    case 59u: goto L_08970484;
    case 60u: goto L_08970494;
    case 61u: goto L_089704B8;
    case 62u: goto L_089704C4;
    case 63u: goto L_089704D0;
    case 64u: goto L_089704D4;
    case 65u: goto L_089704F0;
    case 66u: goto L_089704F4;
    case 67u: goto L_0897050C;
    case 68u: goto L_08970520;
    case 69u: goto L_08970524;
    case 70u: goto L_0897053C;
    case 71u: goto L_08970554;
    case 72u: goto L_08970560;
    case 73u: goto L_08970590;
    case 74u: goto L_08970594;
    case 75u: goto L_089705C8;
    case 76u: goto L_0897063C;
    case 77u: goto L_08970648;
    case 78u: goto L_0897070C;
    case 79u: goto L_08970734;
    case 80u: goto L_08970790;
    case 81u: goto L_0897079C;
    case 82u: goto L_089707A0;
    case 83u: goto L_089707CC;
    case 84u: goto L_089707DC;
    case 85u: goto L_08970808;
    case 86u: goto L_08970844;
    case 87u: goto L_08970858;
    case 88u: goto L_08970874;
    case 89u: goto L_0897089C;
    case 90u: goto L_089708A8;
    case 91u: goto L_089708B4;
    case 92u: goto L_089708B8;
    case 93u: goto L_089708F4;
    case 94u: goto L_08970968;
    case 95u: goto L_08970974;
    case 96u: goto L_08970A34;
    case 97u: goto L_08970A58;
    case 98u: goto L_08970AB4;
    case 99u: goto L_08970AC0;
    case 100u: goto L_08970AC4;
    case 101u: goto L_08970AF8;
    case 102u: goto L_08970B08;
    case 103u: goto L_08970B34;
    case 104u: goto L_08970B78;
    case 105u: goto L_08970B8C;
    case 106u: goto L_08970BA8;
    case 107u: goto L_08970BD0;
    case 108u: goto L_08970BD4;
    case 109u: goto L_08970BE4;
    case 110u: goto L_08970BEC;
    case 111u: goto L_08970C10;
    case 112u: goto L_08970C18;
    case 113u: goto L_08970C2C;
    case 114u: goto L_08970C38;
    case 115u: goto L_08970C50;
    case 116u: goto L_08970C58;
    case 117u: goto L_08970C70;
    case 118u: goto L_08970C84;
    case 119u: goto L_08970CA4;
    case 120u: goto L_08970CAC;
    case 121u: goto L_08970CBC;
    case 122u: goto L_08970CD0;
    case 123u: goto L_08970CF4;
    case 124u: goto L_08970CFC;
    case 125u: goto L_08970D08;
    case 126u: goto L_08970D18;
    case 127u: goto L_08970D28;
    case 128u: goto L_08970D34;
    case 129u: goto L_08970D38;
    case 130u: goto L_08970D6C;
    case 131u: goto L_08970D78;
    case 132u: goto L_08970D9C;
    case 133u: goto L_08970DD4;
    case 134u: goto L_08970DEC;
    case 135u: goto L_08970E28;
    case 136u: goto L_08970E44;
    case 137u: goto L_08970E48;
    case 138u: goto L_08970E60;
    case 139u: goto L_08970E84;
    case 140u: goto L_08970E90;
    case 141u: goto L_08970EA4;
    case 142u: goto L_08971014;
    case 143u: goto L_08971034;
    case 144u: goto L_08971044;
    case 145u: goto L_08971080;
    case 146u: goto L_0897108C;
    case 147u: goto L_089710A0;
    case 148u: goto L_089710B8;
    case 149u: goto L_089710C4;
    case 150u: goto L_089710C8;
    case 151u: goto L_089710E0;
    case 152u: goto L_089710E8;
    case 153u: goto L_089710F4;
    case 154u: goto L_089710F8;
    case 155u: goto L_08971110;
    case 156u: goto L_08971120;
    case 157u: goto L_0897115C;
    case 158u: goto L_08971164;
    case 159u: goto L_08971174;
    case 160u: goto L_0897117C;
    case 161u: goto L_08971188;
    case 162u: goto L_0897118C;
    case 163u: goto L_089711A4;
    case 164u: goto L_089711B4;
    case 165u: goto L_089711F0;
    case 166u: goto L_089711F8;
    case 167u: goto L_08971224;
    case 168u: goto L_08971238;
    case 169u: goto L_08971254;
    case 170u: goto L_0897127C;
    case 171u: goto L_0897128C;
    case 172u: goto L_089712A4;
    case 173u: goto L_089712AC;
    case 174u: goto L_089712C0;
    case 175u: goto L_089712E4;
    case 176u: goto L_089712EC;
    case 177u: goto L_08971300;
    case 178u: goto L_08971308;
    case 179u: goto L_0897131C;
    case 180u: goto L_08971328;
    case 181u: goto L_08971340;
    case 182u: goto L_08971348;
    case 183u: goto L_08971360;
    case 184u: goto L_08971378;
    case 185u: goto L_08971380;
    case 186u: goto L_08971390;
    case 187u: goto L_089713B0;
    case 188u: goto L_089713BC;
    case 189u: goto L_089713D4;
    case 190u: goto L_089713FC;
    case 191u: goto L_08971414;
    case 192u: goto L_08971438;
    case 193u: goto L_08971444;
    case 194u: goto L_08971454;
    case 195u: goto L_08971468;
    case 196u: goto L_08971480;
    case 197u: goto L_0897149C;
    case 198u: goto L_089714B4;
    case 199u: goto L_089714C4;
    case 200u: goto L_089714E0;
    case 201u: goto L_089714F4;
    case 202u: goto L_08971510;
    case 203u: goto L_08971518;
    case 204u: goto L_08971520;
    case 205u: goto L_0897152C;
    case 206u: goto L_08971534;
    case 207u: goto L_08971540;
    case 208u: goto L_0897154C;
    case 209u: goto L_08971558;
    case 210u: goto L_08971570;
    case 211u: goto L_08971588;
    case 212u: goto L_089715A4;
    case 213u: goto L_089715A8;
    case 214u: goto L_089715AC;
    case 215u: goto L_089715C0;
    case 216u: goto L_089715D8;
    case 217u: goto L_089715FC;
    case 218u: goto L_08971614;
    case 219u: goto L_08971628;
    case 220u: goto L_08971634;
    case 221u: goto L_0897164C;
    case 222u: goto L_08971664;
    case 223u: goto L_08971688;
    case 224u: goto L_089716A8;
    case 225u: goto L_089716B4;
    case 226u: goto L_089716C8;
    case 227u: goto L_089716F4;
    case 228u: goto L_08971704;
    case 229u: goto L_08971718;
    case 230u: goto L_08971720;
    case 231u: goto L_08971738;
    case 232u: goto L_08971750;
    case 233u: goto L_08971768;
    case 234u: goto L_08971774;
    case 235u: goto L_08971788;
    case 236u: goto L_089717A0;
    case 237u: goto L_089717AC;
    case 238u: goto L_089717B8;
    case 239u: goto L_089717D4;
    case 240u: goto L_089717D8;
    case 241u: goto L_089717E0;
    case 242u: goto L_089717EC;
    case 243u: goto L_08971800;
    case 244u: goto L_08971814;
    case 245u: goto L_08971834;
    case 246u: goto L_0897183C;
    case 247u: goto L_08971844;
    case 248u: goto L_08971858;
    case 249u: goto L_08971864;
    case 250u: goto L_08971870;
    case 251u: goto L_0897187C;
    case 252u: goto L_0897188C;
    case 253u: goto L_08971898;
    case 254u: goto L_089718A8;
    case 255u: goto L_089718B4;
    case 256u: goto L_089718C4;
    case 257u: goto L_089718D0;
    case 258u: goto L_089718F0;
    case 259u: goto L_089718FC;
    case 260u: goto L_08971908;
    case 261u: goto L_0897190C;
    case 262u: goto L_08971918;
    case 263u: goto L_0897191C;
    case 264u: goto L_08971924;
    case 265u: goto L_08971930;
    case 266u: goto L_08971944;
    case 267u: goto L_08971968;
    case 268u: goto L_0897196C;
    case 269u: goto L_08971974;
    case 270u: goto L_08971980;
    case 271u: goto L_08971994;
    case 272u: goto L_089719A8;
    case 273u: goto L_089719C4;
    case 274u: goto L_089719D4;
    case 275u: goto L_089719F0;
    case 276u: goto L_089719F4;
    case 277u: goto L_089719FC;
    case 278u: goto L_08971A08;
    case 279u: goto L_08971A1C;
    case 280u: goto L_08971A30;
    case 281u: goto L_08971A4C;
    case 282u: goto L_08971A54;
    case 283u: goto L_08971A80;
    case 284u: goto L_08971A88;
    case 285u: goto L_08971A90;
    case 286u: goto L_08971A9C;
    case 287u: goto L_08971AB4;
    case 288u: goto L_08971AC4;
    case 289u: goto L_08971ACC;
    case 290u: goto L_08971AD0;
    case 291u: goto L_08971AE8;
    case 292u: goto L_08971B2C;
    case 293u: goto L_08971B3C;
    case 294u: goto L_08971B4C;
    case 295u: goto L_08971B80;
    case 296u: goto L_08971B84;
    case 297u: goto L_08971B94;
    case 298u: goto L_08971BA8;
    case 299u: goto L_08971BD4;
    case 300u: goto L_08971BE4;
    case 301u: goto L_08971BF4;
    case 302u: goto L_08971BFC;
    case 303u: goto L_08971C04;
    case 304u: goto L_08971C38;
    case 305u: goto L_08971C48;
    case 306u: goto L_08971C54;
    case 307u: goto L_08971C60;
    case 308u: goto L_08971C64;
    case 309u: goto L_08971C6C;
    case 310u: goto L_08971C80;
    case 311u: goto L_08971C98;
    case 312u: goto L_08971CA4;
    case 313u: goto L_08971CB0;
    case 314u: goto L_08971CCC;
    case 315u: goto L_08971CD0;
    case 316u: goto L_08971CE4;
    case 317u: goto L_08971D18;
    case 318u: goto L_08971D38;
    case 319u: goto L_08971D44;
    case 320u: goto L_08971D48;
    case 321u: goto L_08971D64;
    case 322u: goto L_08971D88;
    case 323u: goto L_08971D98;
    case 324u: goto L_08971DA4;
    case 325u: goto L_08971DB0;
    case 326u: goto L_08971DB4;
    case 327u: goto L_08971DBC;
    case 328u: goto L_08971DC8;
    case 329u: goto L_08971DCC;
    case 330u: goto L_08971DE0;
    case 331u: goto L_08971DE8;
    case 332u: goto L_08971DF4;
    case 333u: goto L_08971E08;
    case 334u: goto L_08971E20;
    case 335u: goto L_08971E2C;
    case 336u: goto L_08971E38;
    case 337u: goto L_08971E54;
    case 338u: goto L_08971E58;
    case 339u: goto L_08971E60;
    case 340u: goto L_08971E6C;
    case 341u: goto L_08971E80;
    case 342u: goto L_08971E94;
    case 343u: goto L_08971EB4;
    case 344u: goto L_08971EBC;
    case 345u: goto L_08971EF0;
    case 346u: goto L_08971F08;
    case 347u: goto L_08971F18;
    case 348u: goto L_08971F38;
    case 349u: goto L_08971F50;
    case 350u: goto L_08971F60;
    case 351u: goto L_08971F7C;
    case 352u: goto L_08971F8C;
    case 353u: goto L_08971FA4;
    case 354u: goto L_08971FB4;
    case 355u: goto L_08971FC4;
    case 356u: goto L_08971FDC;
    case 357u: goto L_08972004;
    case 358u: goto L_08972074;
    case 359u: goto L_08972084;
    case 360u: goto L_08972090;
    case 361u: goto L_08972098;
    case 362u: goto L_089720A0;
    case 363u: goto L_089720B0;
    case 364u: goto L_089720B8;
    case 365u: goto L_089720CC;
    case 366u: goto L_089720E4;
    case 367u: goto L_08972104;
    case 368u: goto L_0897210C;
    case 369u: goto L_08972118;
    case 370u: goto L_08972124;
    case 371u: goto L_08972130;
    case 372u: goto L_08972138;
    case 373u: goto L_08972150;
    case 374u: goto L_08972164;
    case 375u: goto L_08972178;
    case 376u: goto L_0897218C;
    case 377u: goto L_0897219C;
    case 378u: goto L_089721A0;
    case 379u: goto L_089721AC;
    case 380u: goto L_089721B0;
    case 381u: goto L_089721C4;
    case 382u: goto L_089721D8;
    case 383u: goto L_089721E4;
    case 384u: goto L_089721F0;
    case 385u: goto L_089721FC;
    case 386u: goto L_08972214;
    case 387u: goto L_08972244;
    case 388u: goto L_08972248;
    case 389u: goto L_0897226C;
    case 390u: goto L_08972274;
    case 391u: goto L_08972284;
    case 392u: goto L_089722D0;
    case 393u: goto L_089722DC;
    case 394u: goto L_089722F4;
    case 395u: goto L_08972314;
    case 396u: goto L_0897231C;
    case 397u: goto L_08972328;
    case 398u: goto L_08972340;
    case 399u: goto L_08972360;
    case 400u: goto L_08972368;
    case 401u: goto L_0897237C;
    case 402u: goto L_08972394;
    case 403u: goto L_089723A0;
    case 404u: goto L_089723B8;
    case 405u: goto L_089723D0;
    case 406u: goto L_089723E4;
    case 407u: goto L_089723F0;
    case 408u: goto L_0897241C;
    case 409u: goto L_08972420;
    case 410u: goto L_08972444;
    case 411u: goto L_0897244C;
    case 412u: goto L_0897245C;
    case 413u: goto L_089724A8;
    case 414u: goto L_089724B4;
    case 415u: goto L_089724CC;
    case 416u: goto L_089724EC;
    case 417u: goto L_089724F4;
    case 418u: goto L_08972510;
    case 419u: goto L_08972514;
    case 420u: goto L_0897251C;
    case 421u: goto L_08972530;
    case 422u: goto L_0897253C;
    case 423u: goto L_08972544;
    case 424u: goto L_0897255C;
    case 425u: goto L_08972574;
    case 426u: goto L_08972590;
    case 427u: goto L_089725A4;
    case 428u: goto L_089725B4;
    case 429u: goto L_089725E0;
    case 430u: goto L_089725FC;
    case 431u: goto L_08972620;
    case 432u: goto L_0897262C;
    case 433u: goto L_08972634;
    case 434u: goto L_08972640;
    case 435u: goto L_08972658;
    case 436u: goto L_08972660;
    case 437u: goto L_08972670;
    case 438u: goto L_08972684;
    case 439u: goto L_08972688;
    case 440u: goto L_08972698;
    case 441u: goto L_089726AC;
    case 442u: goto L_089726C0;
    case 443u: goto L_089726E0;
    case 444u: goto L_089726F4;
    case 445u: goto L_08972718;
    case 446u: goto L_0897272C;
    case 447u: goto L_08972734;
    case 448u: goto L_08972754;
    case 449u: goto L_0897275C;
    case 450u: goto L_08972768;
    case 451u: goto L_0897277C;
    case 452u: goto L_08972784;
    case 453u: goto L_08972790;
    case 454u: goto L_08972794;
    case 455u: goto L_089727A8;
    case 456u: goto L_089727C0;
    case 457u: goto L_089727D4;
    case 458u: goto L_089727D8;
    case 459u: goto L_089727E0;
    case 460u: goto L_089727FC;
    case 461u: goto L_08972808;
    case 462u: goto L_08972820;
    case 463u: goto L_0897282C;
    case 464u: goto L_08972840;
    case 465u: goto L_08972848;
    case 466u: goto L_0897285C;
    case 467u: goto L_08972868;
    case 468u: goto L_08972878;
    case 469u: goto L_08972880;
    case 470u: goto L_0897288C;
    case 471u: goto L_0897289C;
    case 472u: goto L_089728B0;
    case 473u: goto L_089728E0;
    case 474u: goto L_089728F0;
    case 475u: goto L_08972910;
    case 476u: goto L_0897291C;
    case 477u: goto L_08972930;
    case 478u: goto L_08972940;
    case 479u: goto L_08972948;
    case 480u: goto L_08972954;
    case 481u: goto L_0897296C;
    case 482u: goto L_08972978;
    case 483u: goto L_0897298C;
    case 484u: goto L_0897299C;
    case 485u: goto L_089729A4;
    case 486u: goto L_089729B4;
    case 487u: goto L_089729CC;
    case 488u: goto L_089729D4;
    case 489u: goto L_089729E8;
    case 490u: goto L_089729F4;
    case 491u: goto L_08972A08;
    case 492u: goto L_08972A3C;
    case 493u: goto L_08972A40;
    case 494u: goto L_08972A64;
    case 495u: goto L_08972A6C;
    case 496u: goto L_08972A7C;
    case 497u: goto L_08972AC8;
    case 498u: goto L_08972AD4;
    case 499u: goto L_08972AEC;
    case 500u: goto L_08972B0C;
    case 501u: goto L_08972B14;
    case 502u: goto L_08972B34;
    case 503u: goto L_08972B38;
    case 504u: goto L_08972B4C;
    case 505u: goto L_08972B60;
    case 506u: goto L_08972B80;
    case 507u: goto L_08972B88;
    case 508u: goto L_08972B90;
    case 509u: goto L_08972B9C;
    case 510u: goto L_08972BB4;
    case 511u: goto L_08972BC8;
    case 512u: goto L_08972BDC;
    case 513u: goto L_08972BE8;
    case 514u: goto L_08972C08;
    case 515u: goto L_08972C0C;
    case 516u: goto L_08972C24;
    case 517u: goto L_08972C40;
    case 518u: goto L_08972C64;
    case 519u: goto L_08972C70;
    case 520u: goto L_08972C78;
    case 521u: goto L_08972C84;
    case 522u: goto L_08972C9C;
    case 523u: goto L_08972CA4;
    case 524u: goto L_08972CB4;
    case 525u: goto L_08972CC8;
    case 526u: goto L_08972CCC;
    case 527u: goto L_08972CDC;
    case 528u: goto L_08972CF0;
    case 529u: goto L_08972D04;
    case 530u: goto L_08972D24;
    case 531u: goto L_08972D38;
    case 532u: goto L_08972D5C;
    case 533u: goto L_08972D70;
    case 534u: goto L_08972D78;
    case 535u: goto L_08972D98;
    case 536u: goto L_08972DA0;
    case 537u: goto L_08972DAC;
    case 538u: goto L_08972DB4;
    case 539u: goto L_08972DCC;
    case 540u: goto L_08972DE8;
    case 541u: goto L_08972DFC;
    case 542u: goto L_08972E0C;
    case 543u: goto L_08972E38;
    case 544u: goto L_08972E44;
    case 545u: goto L_08972E54;
    case 546u: goto L_08972E64;
    case 547u: goto L_08972E78;
    case 548u: goto L_08972E84;
    case 549u: goto L_08972E98;
    case 550u: goto L_08972EAC;
    case 551u: goto L_08972EB8;
    case 552u: goto L_08972ECC;
    case 553u: goto L_08972ED8;
    case 554u: goto L_08972EE8;
    case 555u: goto L_08972EEC;
    case 556u: goto L_08972EF4;
    case 557u: goto L_08972F10;
    case 558u: goto L_08972F14;
    case 559u: goto L_08972F40;
    case 560u: goto L_08972F50;
    case 561u: goto L_08972F84;
    case 562u: goto L_08972F8C;
    case 563u: goto L_08972F94;
    case 564u: goto L_08972FA4;
    case 565u: goto L_08972FB0;
    case 566u: goto L_08972FB8;
    case 567u: goto L_08972FD0;
    case 568u: goto L_08972FDC;
    case 569u: goto L_08972FEC;
    case 570u: goto L_08973004;
    case 571u: goto L_0897302C;
    case 572u: goto L_08973034;
    case 573u: goto L_08973040;
    case 574u: goto L_08973058;
    case 575u: goto L_08973064;
    case 576u: goto L_08973068;
    case 577u: goto L_08973070;
    case 578u: goto L_08973084;
    case 579u: goto L_08973098;
    case 580u: goto L_089730A4;
    case 581u: goto L_089730A8;
    case 582u: goto L_089730BC;
    case 583u: goto L_089730D4;
    case 584u: goto L_089730E8;
    case 585u: goto L_089730EC;
    case 586u: goto L_089730F4;
    case 587u: goto L_08973100;
    case 588u: goto L_08973118;
    case 589u: goto L_08973124;
    case 590u: goto L_08973138;
    case 591u: goto L_08973154;
    case 592u: goto L_0897315C;
    case 593u: goto L_08973168;
    case 594u: goto L_08973180;
    case 595u: goto L_0897318C;
    case 596u: goto L_089731A0;
    case 597u: goto L_089731B0;
    case 598u: goto L_089731B8;
    case 599u: goto L_089731C4;
    case 600u: goto L_089731DC;
    case 601u: goto L_089731E8;
    case 602u: goto L_089731FC;
    case 603u: goto L_08973208;
    case 604u: goto L_08973254;
    case 605u: goto L_08973260;
    case 606u: goto L_08973278;
    case 607u: goto L_08973284;
    case 608u: goto L_08973298;
    case 609u: goto L_089732A0;
    case 610u: goto L_089732B0;
    case 611u: goto L_089732C8;
    case 612u: goto L_089732CC;
    case 613u: goto L_089732D4;
    case 614u: goto L_089732DC;
    case 615u: goto L_089732F0;
    case 616u: goto L_08973304;
    case 617u: goto L_0897330C;
    case 618u: goto L_0897331C;
    case 619u: goto L_08973330;
    case 620u: goto L_08973348;
    case 621u: goto L_0897337C;
    case 622u: goto L_0897339C;
    case 623u: goto L_089733AC;
    case 624u: goto L_089733B4;
    case 625u: goto L_08973420;
    case 626u: goto L_08973434;
    case 627u: goto L_08973448;
    case 628u: goto L_08973468;
    case 629u: goto L_08973484;
    case 630u: goto L_089734A0;
    case 631u: goto L_089734B4;
    case 632u: goto L_089734BC;
    case 633u: goto L_08973510;
    case 634u: goto L_08973524;
    case 635u: goto L_08973538;
    case 636u: goto L_0897354C;
    case 637u: goto L_08973564;
    case 638u: goto L_08973574;
    case 639u: goto L_08973584;
    case 640u: goto L_0897359C;
    case 641u: goto L_089735BC;
    case 642u: goto L_089735CC;
    case 643u: goto L_089735D0;
    case 644u: goto L_089735DC;
    case 645u: goto L_089735E4;
    case 646u: goto L_089735FC;
    case 647u: goto L_0897361C;
    case 648u: goto L_0897362C;
    case 649u: goto L_08973630;
    case 650u: goto L_0897363C;
    case 651u: goto L_08973644;
    case 652u: goto L_0897365C;
    case 653u: goto L_0897367C;
    case 654u: goto L_08973690;
    case 655u: goto L_08973694;
    case 656u: goto L_089736A0;
    case 657u: goto L_089736A8;
    case 658u: goto L_089736C0;
    case 659u: goto L_089736E0;
    case 660u: goto L_089736F8;
    case 661u: goto L_089736FC;
    case 662u: goto L_08973700;
    case 663u: goto L_0897370C;
    case 664u: goto L_08973714;
    case 665u: goto L_08973730;
    case 666u: goto L_08973740;
    case 667u: goto L_08973770;
    case 668u: goto L_0897377C;
    case 669u: goto L_08973790;
    case 670u: goto L_089737AC;
    case 671u: goto L_089737C8;
    case 672u: goto L_089737D8;
    case 673u: goto L_08973800;
    case 674u: goto L_08973810;
    case 675u: goto L_0897382C;
    case 676u: goto L_0897383C;
    case 677u: goto L_0897386C;
    case 678u: goto L_089738C0;
    case 679u: goto L_089738C4;
    case 680u: goto L_089738CC;
    case 681u: goto L_089738DC;
    case 682u: goto L_08973910;
    case 683u: goto L_08973918;
    case 684u: goto L_08973924;
    case 685u: goto L_0897394C;
    case 686u: goto L_0897397C;
    case 687u: goto L_08973988;
    case 688u: goto L_089739A8;
    case 689u: goto L_089739B4;
    case 690u: goto L_089739CC;
    case 691u: goto L_089739D8;
    case 692u: goto L_089739E8;
    case 693u: goto L_089739F8;
    case 694u: goto L_08973A04;
    case 695u: goto L_08973A18;
    case 696u: goto L_08973A1C;
    case 697u: goto L_08973A20;
    case 698u: goto L_08973A2C;
    case 699u: goto L_08973A34;
    case 700u: goto L_08973A3C;
    case 701u: goto L_08973A54;
    case 702u: goto L_08973A60;
    case 703u: goto L_08973A78;
    case 704u: goto L_08973A84;
    case 705u: goto L_08973A8C;
    case 706u: goto L_08973A98;
    case 707u: goto L_08973AA0;
    case 708u: goto L_08973AA4;
    case 709u: goto L_08973AAC;
    case 710u: goto L_08973AC0;
    case 711u: goto L_08973AC4;
    case 712u: goto L_08973AF0;
    case 713u: goto L_08973B08;
    case 714u: goto L_08973B10;
    case 715u: goto L_08973B28;
    case 716u: goto L_08973B3C;
    case 717u: goto L_08973B7C;
    case 718u: goto L_08973B9C;
    case 719u: goto L_08973BA4;
    case 720u: goto L_08973BB0;
    case 721u: goto L_08973BC0;
    case 722u: goto L_08973BCC;
    case 723u: goto L_08973BE8;
    case 724u: goto L_08973BF4;
    case 725u: goto L_08973BF8;
    case 726u: goto L_08973C24;
    case 727u: goto L_08973C6C;
    case 728u: goto L_08973C94;
    case 729u: goto L_08973C9C;
    case 730u: goto L_08973CA8;
    case 731u: goto L_08973CB8;
    case 732u: goto L_08973CC4;
    case 733u: goto L_08973CE0;
    case 734u: goto L_08973CEC;
    case 735u: goto L_08973CF0;
    case 736u: goto L_08973D20;
    case 737u: goto L_08973D50;
    case 738u: goto L_08973D70;
    case 739u: goto L_08973D74;
    case 740u: goto L_08973D80;
    case 741u: goto L_08973DA0;
    case 742u: goto L_08973DAC;
    case 743u: goto L_08973DC4;
    case 744u: goto L_08973DF4;
    case 745u: goto L_08973E04;
    case 746u: goto L_08973E1C;
    case 747u: goto L_08973E34;
    case 748u: goto L_08973E3C;
    case 749u: goto L_08973E44;
    case 750u: goto L_08973E50;
    case 751u: goto L_08973E5C;
    case 752u: goto L_08973E7C;
    case 753u: goto L_08973E88;
    case 754u: goto L_08973E8C;
    case 755u: goto L_08973E94;
    case 756u: goto L_08973EF8;
    case 757u: goto L_08973F24;
    case 758u: goto L_08973F30;
    case 759u: goto L_08973F44;
    case 760u: goto L_08973F4C;
    case 761u: goto L_08973F74;
    case 762u: goto L_08973F90;
    case 763u: goto L_08973F94;
    case 764u: goto L_08973FB8;
    case 765u: goto L_08973FDC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08970000:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08970084;
      }
      goto L_08970008;
    }
L_08970008:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(137)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08970084;
      }
      goto L_08970014;
    }
L_08970014:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08970034;
      }
      goto L_08970020;
    }
L_08970020:
    ctx.set_gpr(4, ctx.gpr[3] + 0u);
    ctx.set_gpr(31, 0x0897002Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 435u, 0x08929EBCu>(ctx, &aot_mem) && ctx.pc == 0x0897002Cu) goto L_0897002C;
    return;
L_0897002C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897006C;
      }
      goto L_08970034;
    }
L_08970034:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(244)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08970044u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08970044u) goto L_08970044;
    return;
L_08970044:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897006C;
      }
      goto L_0897004C;
    }
L_0897004C:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31440)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897006Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897006Cu) goto L_0897006C;
    return;
L_0897006C:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(124), 0u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), 0u);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(137), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897008C;
      }
      goto L_08970084;
    }
L_08970084:
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(137), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_0897008C;
L_0897008C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089700A0:
    ctx.set_gpr(2, 0u + 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089700AC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2028)));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 1u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089700C8;
      }
      goto L_089700C0;
    }
L_089700C0:
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 1u));
    goto L_089700C8;
L_089700C8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089700D0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2032)));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089700E0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(320)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089700F8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089700F8u) goto L_089700F8;
    return;
L_089700F8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08970108:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08970118u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 685u, 0x0892EEF4u>(ctx, &aot_mem) && ctx.pc == 0x08970118u) goto L_08970118;
    return;
L_08970118:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08970128:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(520)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897014Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897014Cu) goto L_0897014C;
    return;
L_0897014C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897015C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(520)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08970184u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08970184u) goto L_08970184;
    return;
L_08970184:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08970194:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(17, ctx.lo);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(520)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089701D0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089701D0u) goto L_089701D0;
    return;
L_089701D0:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897021C;
      }
      goto L_089701DC;
    }
L_089701DC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897021C;
      }
      goto L_089701E4;
    }
L_089701E4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, ctx.gpr[3] & 2u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08970208;
      }
      goto L_089701F8;
    }
L_089701F8:
    ctx.set_gpr(2, ctx.gpr[3] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897021C;
      }
      goto L_08970208;
    }
L_08970208:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x0897021Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0897021Cu) goto L_0897021C;
    return;
L_0897021C:
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
L_0897023C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(17, ctx.lo);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(520)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08970274u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08970274u) goto L_08970274;
    return;
L_08970274:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089702C0;
      }
      goto L_08970280;
    }
L_08970280:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089702C0;
      }
      goto L_08970288;
    }
L_08970288:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, ctx.gpr[3] & 2u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089702AC;
      }
      goto L_0897029C;
    }
L_0897029C:
    ctx.set_gpr(2, ctx.gpr[3] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089702C0;
      }
      goto L_089702AC;
    }
L_089702AC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x089702C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x089702C0u) goto L_089702C0;
    return;
L_089702C0:
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
L_089702E0:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-1)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(3, ctx.gpr[2] >> 31u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08970300;
      }
      goto L_089702FC;
    }
L_089702FC:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-12));
    goto L_08970300;
L_08970300:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 25u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08970320;
      }
      goto L_08970314;
    }
L_08970314:
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(-6));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08970324;
      }
      goto L_08970320;
    }
L_08970320:
    ctx.set_gpr(2, ctx.gpr[5] + static_cast<std::uint32_t>(-4));
    goto L_08970324;
L_08970324:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897032C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(520)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08970348u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08970348u) goto L_08970348;
    return;
L_08970348:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08970358:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(520)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08970370u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08970370u) goto L_08970370;
    return;
L_08970370:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08970380:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-64));
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
    ctx.set_gpr(22, ctx.gpr[5] + 0u);
    ctx.set_gpr(30, ctx.gpr[6] + 0u);
    ctx.set_gpr(20, ctx.gpr[7] + 0u);
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(23, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089703DC;
      }
      goto L_089703D8;
    }
L_089703D8:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(12));
    goto L_089703DC;
L_089703DC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08970484;
      }
      goto L_089703EC;
    }
L_089703EC:
    ctx.set_gpr(17, ctx.gpr[22] & 65535u);
    ctx.set_gpr(5, ctx.gpr[17] << 2u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08970408u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08970408u) goto L_08970408;
    return;
L_08970408:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897042C;
      }
      goto L_08970418;
    }
L_08970418:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(2, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0897042C;
L_0897042C:
    ctx.set_gpr(2, ctx.gpr[19] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08970418;
      }
      goto L_08970438;
    }
L_08970438:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, ctx.gpr[30] + 0u);
    ctx.set_gpr(7, ctx.gpr[20] + 0u);
    ctx.set_gpr(8, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897045Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897045Cu) goto L_0897045C;
    return;
L_0897045C:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08970478u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08970478u) goto L_08970478;
    return;
L_08970478:
    ctx.set_gpr(2, ctx.gpr[17] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08970D38;
      }
      goto L_08970484;
    }
L_08970484:
    ctx.set_gpr(16, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897050C;
      }
      goto L_08970494;
    }
L_08970494:
    ctx.set_gpr(2, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, ctx.gpr[30] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[3] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089704C4;
      }
      goto L_089704B8;
    }
L_089704B8:
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(256) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089704D0;
      }
      goto L_089704C4;
    }
L_089704C4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089704D4;
      }
      goto L_089704D0;
    }
L_089704D0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    goto L_089704D4;
L_089704D4:
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(1, ctx.gpr[2] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089704F4;
      }
      goto L_089704F0;
    }
L_089704F0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    goto L_089704F4;
L_089704F4:
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(7));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0897050C;
L_0897050C:
    ctx.set_gpr(2, ctx.gpr[22] & 65535u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[19] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08970494;
      }
      goto L_08970520;
    }
L_08970520:
    ctx.set_gpr(17, 0u + 0u);
    goto L_08970524;
L_08970524:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08970BEC;
      }
      goto L_0897053C;
    }
L_0897053C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08970554u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08970554u) goto L_08970554;
    return;
L_08970554:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08970CF4;
      }
      goto L_08970560;
    }
L_08970560:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(3, ctx.gpr[22] & 65535u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(188)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(188), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(196)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(196), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(200)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08970594;
      }
      goto L_08970590;
    }
L_08970590:
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(200), ctx.gpr[3]);
    goto L_08970594;
L_08970594:
    ctx.set_gpr(2, ctx.gpr[17] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(0u));
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[22]));
    ctx.set_gpr(16, ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(19, ctx.gpr[2] + ctx.gpr[18]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089705C8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089705C8u) goto L_089705C8;
    return;
L_089705C8:
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, ctx.gpr[3] << 5u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-8161));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, 0u & 1u);
    ctx.set_gpr(5, ctx.gpr[3] << 6u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-65));
    ctx.set_gpr(4, ctx.gpr[6] & ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-33));
    ctx.set_gpr(4, ctx.gpr[6] & ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[5] & ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[19] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08970648;
      }
      goto L_0897063C;
    }
L_0897063C:
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[2]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897070C;
      }
      goto L_08970648;
    }
L_08970648:
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, (ctx.gpr[19] >> 16u) & 0x00007FFFu);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, (ctx.gpr[2] >> 8u) & 0x000001FFu);
    ctx.set_gpr(3, ctx.gpr[2] << 15u);
    ctx.set_gpr(2, 65280u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32767u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, 0u & 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, 0u & 31u);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-125));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, ctx.gpr[19] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[22]);
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08970734;
      }
      goto L_0897070C;
    }
L_0897070C:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 7u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, ctx.gpr[19] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[22]);
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    goto L_08970734;
L_08970734:
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] >> 2u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 15u);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[19] & 65535u);
    ctx.set_gpr(3, ctx.gpr[2] << 5u);
    ctx.set_gpr(2, 65504u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 31u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897079C;
      }
      goto L_08970790;
    }
L_08970790:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089707A0;
      }
      goto L_0897079C;
    }
L_0897079C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_089707A0;
L_089707A0:
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 11u);
    ctx.set_gpr(4, ctx.gpr[2] >> 16u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(3, ctx.gpr[2] >> 31u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089707DC;
      }
      goto L_089707CC;
    }
L_089707CC:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] & 32767u);
    ctx.set_gpr(2, ctx.gpr[2] << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[2]);
    goto L_089707DC;
L_089707DC:
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, ctx.gpr[2] & ctx.gpr[22]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 27u);
    ctx.set_gpr(2, ctx.gpr[2] >> 28u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897089C;
      }
      goto L_08970808;
    }
L_08970808:
    ctx.set_gpr(2, 43690u << 16u);
    ctx.set_gpr(4, ctx.gpr[2] | 43695u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08970858;
      }
      goto L_08970844;
    }
L_08970844:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 11u);
    ctx.set_gpr(2, ctx.gpr[2] >> 16u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08970874;
      }
      goto L_08970858;
    }
L_08970858:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] & 32767u);
    ctx.set_gpr(4, ctx.gpr[2] << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 11u);
    ctx.set_gpr(2, ctx.gpr[2] >> 16u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[4]);
    goto L_08970874;
L_08970874:
    ctx.set_gpr(4, ctx.gpr[2] - ctx.gpr[18]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(191));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(187));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    goto L_0897089C;
L_0897089C:
    ctx.set_gpr(19, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08970BD4;
      }
      goto L_089708A8;
    }
L_089708A8:
    ctx.set_gpr(2, ctx.gpr[3] & 7u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089708B8;
      }
      goto L_089708B4;
    }
L_089708B4:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(4));
    goto L_089708B8;
L_089708B8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    rt.memory().aot_store16(ctx.gpr[3] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(0u));
    ctx.set_gpr(16, ctx.gpr[3] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, ctx.gpr[19] << 2u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[30] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(23, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089708F4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089708F4u) goto L_089708F4;
    return;
L_089708F4:
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, ctx.gpr[3] << 5u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-8161));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, 0u & 1u);
    ctx.set_gpr(5, ctx.gpr[3] << 6u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-65));
    ctx.set_gpr(4, ctx.gpr[6] & ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(32));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-33));
    ctx.set_gpr(4, ctx.gpr[6] & ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(4, ctx.gpr[5] & ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[4] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_gpr(1, 1u << 16u);
    ctx.set_gpr(1, ctx.gpr[23] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08970974;
      }
      goto L_08970968;
    }
L_08970968:
    ctx.set_gpr(4, static_cast<std::int32_t>(ctx.gpr[2]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08970A34;
      }
      goto L_08970974;
    }
L_08970974:
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, (ctx.gpr[23] >> 16u) & 0x00007FFFu);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, (ctx.gpr[2] >> 8u) & 0x000001FFu);
    ctx.set_gpr(3, ctx.gpr[2] << 15u);
    ctx.set_gpr(2, 65280u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32767u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, 0u & 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, 0u & 31u);
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-125));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, ctx.gpr[23] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[22]);
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08970A58;
      }
      goto L_08970A34;
    }
L_08970A34:
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 7u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, ctx.gpr[23] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, ctx.gpr[2] & ctx.gpr[22]);
    ctx.set_gpr(3, ctx.gpr[2] + static_cast<std::uint32_t>(4));
    goto L_08970A58;
L_08970A58:
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] >> 2u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] & 15u);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[23] & 65535u);
    ctx.set_gpr(3, ctx.gpr[2] << 5u);
    ctx.set_gpr(2, 65504u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 31u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08970AC0;
      }
      goto L_08970AB4;
    }
L_08970AB4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08970AC4;
      }
      goto L_08970AC0;
    }
L_08970AC0:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(12));
    goto L_08970AC4;
L_08970AC4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 11u);
    ctx.set_gpr(5, ctx.gpr[3] >> 16u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(4, ctx.gpr[3] >> 31u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08970B08;
      }
      goto L_08970AF8;
    }
L_08970AF8:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] & 32767u);
    ctx.set_gpr(3, ctx.gpr[3] << 16u);
    ctx.set_gpr(5, ctx.gpr[5] + ctx.gpr[3]);
    goto L_08970B08;
L_08970B08:
    ctx.set_gpr(3, ctx.gpr[5] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, ctx.gpr[3] & ctx.gpr[22]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 27u);
    ctx.set_gpr(3, ctx.gpr[3] >> 28u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, ctx.gpr[4] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08970BD0;
      }
      goto L_08970B34;
    }
L_08970B34:
    ctx.set_gpr(4, ctx.gpr[19] << 2u);
    ctx.set_gpr(6, ctx.gpr[20] + ctx.gpr[4]);
    ctx.set_gpr(4, 43690u << 16u);
    ctx.set_gpr(5, ctx.gpr[4] | 43695u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, ctx.gpr[4] << 24u);
    ctx.set_gpr(4, ctx.gpr[4] >> 31u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08970B8C;
      }
      goto L_08970B78;
    }
L_08970B78:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] << 11u);
    ctx.set_gpr(4, ctx.gpr[4] >> 16u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08970BA8;
      }
      goto L_08970B8C;
    }
L_08970B8C:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[4] & 32767u);
    ctx.set_gpr(5, ctx.gpr[4] << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] << 11u);
    ctx.set_gpr(4, ctx.gpr[4] >> 16u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[5]);
    goto L_08970BA8;
L_08970BA8:
    ctx.set_gpr(4, ctx.gpr[4] - ctx.gpr[18]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[4]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(191));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(187));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[18]);
    goto L_08970BD0;
L_08970BD0:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08970BD4;
L_08970BD4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, ctx.gpr[19] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089708A8;
      }
      goto L_08970BE4;
    }
L_08970BE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08970CF4;
      }
      goto L_08970BEC;
    }
L_08970BEC:
    ctx.set_gpr(7, ctx.gpr[23] + 0u);
    ctx.set_gpr(23, ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(500)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08970C10u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08970C10u) goto L_08970C10;
    return;
L_08970C10:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08970524;
      }
      goto L_08970C18;
    }
L_08970C18:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, ctx.gpr[2] & 64u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08970CAC;
      }
      goto L_08970C2C;
    }
L_08970C2C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08970CF4;
      }
      goto L_08970C38;
    }
L_08970C38:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08970CF4;
      }
      goto L_08970C50;
    }
L_08970C50:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08970CF4;
      }
      goto L_08970C58;
    }
L_08970C58:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08970C70u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08970C70u) goto L_08970C70;
    return;
L_08970C70:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08970C84u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08970C84u) goto L_08970C84;
    return;
L_08970C84:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(3948));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(31, 0x08970CA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08970CA4u) goto L_08970CA4;
    return;
L_08970CA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08970CF4;
      }
      goto L_08970CAC;
    }
L_08970CAC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08970CF4;
      }
      goto L_08970CBC;
    }
L_08970CBC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08970CD0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08970CD0u) goto L_08970CD0;
    return;
L_08970CD0:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4072));
    ctx.set_gpr(5, ctx.gpr[30] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(9, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(31, 0x08970CF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 441u, 0x08955DC4u>(ctx, &aot_mem) && ctx.pc == 0x08970CF4u) goto L_08970CF4;
    return;
L_08970CF4:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08970D34;
      }
      goto L_08970CFC;
    }
L_08970CFC:
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08970D18;
      }
      goto L_08970D08;
    }
L_08970D08:
    ctx.set_gpr(2, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, ctx.gpr[20] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), 0u);
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08970D18;
L_08970D18:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, ctx.gpr[19] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08970D08;
      }
      goto L_08970D28;
    }
L_08970D28:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08970D38;
      }
      goto L_08970D34;
    }
L_08970D34:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08970D38;
L_08970D38:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08970D6C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08970D78:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08970D9Cu);
    // nop
    goto L_089702E0;
L_08970D9C:
    ctx.set_gpr(5, ctx.gpr[2] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(192)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(192), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(196)));
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(196), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08970DD4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08970DD4u) goto L_08970DD4;
    return;
L_08970DD4:
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
L_08970DEC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[21]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[20]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(280)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08970E28u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08970E28u) goto L_08970E28;
    return;
L_08970E28:
    ctx.set_gpr(18, 0u + 0u);
    ctx.set_gpr(21, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08970E48;
      }
      goto L_08970E44;
    }
L_08970E44:
    ctx.set_gpr(18, 0u + static_cast<std::uint32_t>(12));
    goto L_08970E48;
L_08970E48:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089712AC;
      }
      goto L_08970E60;
    }
L_08970E60:
    ctx.set_gpr(17, ctx.gpr[19] + ctx.gpr[18]);
    ctx.set_gpr(2, ctx.gpr[19] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(5, ctx.gpr[18] + ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31440)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08970E84u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08970E84u) goto L_08970E84;
    return;
L_08970E84:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897127C;
      }
      goto L_08970E90;
    }
L_08970E90:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08970EA4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08970EA4u) goto L_08970EA4;
    return;
L_08970EA4:
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, ctx.gpr[3] << 5u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-8161));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(4, 0u & 1u);
    ctx.set_gpr(5, ctx.gpr[4] << 6u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-65));
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(5, ctx.gpr[4] << 5u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-33));
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-2));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(7, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(6, (ctx.gpr[17] >> 16u) & 0x00007FFFu);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(-32768));
    ctx.set_gpr(5, ctx.gpr[7] & ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[6]);
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, (ctx.gpr[2] >> 8u) & 0x000001FFu);
    ctx.set_gpr(5, ctx.gpr[2] << 15u);
    ctx.set_gpr(2, 65280u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32767u);
    ctx.set_gpr(2, ctx.gpr[6] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[5]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(128));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[6]);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[7]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[6]);
    ctx.set_gpr(5, ctx.gpr[5] | ctx.gpr[7]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(2));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-3));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(3, 0u & 31u);
    ctx.set_gpr(4, ctx.gpr[3] << 2u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-125));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(4, ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[4]);
    ctx.set_gpr(3, ctx.gpr[3] >> 2u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] & 15u);
    ctx.set_gpr(4, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-31));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[17] & 65535u);
    ctx.set_gpr(4, ctx.gpr[3] << 5u);
    ctx.set_gpr(3, 65504u << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | 31u);
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089710A0;
      }
      goto L_08971014;
    }
L_08971014:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 11u);
    ctx.set_gpr(4, ctx.gpr[3] >> 16u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(3, ctx.gpr[3] >> 31u);
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08971044;
      }
      goto L_08971034;
    }
L_08971034:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] & 32767u);
    ctx.set_gpr(2, ctx.gpr[2] << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[2]);
    goto L_08971044;
L_08971044:
    ctx.set_gpr(3, ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 27u);
    ctx.set_gpr(2, ctx.gpr[2] >> 28u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(17, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08971080u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 117u, 0x08900AF4u>(ctx, &aot_mem) && ctx.pc == 0x08971080u) goto L_08971080;
    return;
L_08971080:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(205)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089710A0;
      }
      goto L_0897108C;
    }
L_0897108C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x089710A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 108u, 0x08900998u>(ctx, &aot_mem) && ctx.pc == 0x089710A0u) goto L_089710A0;
    return;
L_089710A0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    ctx.set_gpr(5, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089710C4;
      }
      goto L_089710B8;
    }
L_089710B8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089710C8;
      }
      goto L_089710C4;
    }
L_089710C4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_089710C8;
L_089710C8:
    ctx.set_gpr(21, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, ctx.gpr[3] & 2u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08971164;
      }
      goto L_089710E0;
    }
L_089710E0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089710F4;
      }
      goto L_089710E8;
    }
L_089710E8:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089710F8;
      }
      goto L_089710F4;
    }
L_089710F4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(12));
    goto L_089710F8;
L_089710F8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 11u);
    ctx.set_gpr(3, ctx.gpr[2] >> 16u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08971120;
      }
      goto L_08971110;
    }
L_08971110:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] & 32767u);
    ctx.set_gpr(2, ctx.gpr[2] << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    goto L_08971120;
L_08971120:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 27u);
    ctx.set_gpr(2, ctx.gpr[2] >> 28u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[4]);
    ctx.set_gpr(6, ctx.gpr[2] - ctx.gpr[18]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(205));
    ctx.set_gpr(31, 0x0897115Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x0897115Cu) goto L_0897115C;
    return;
L_0897115C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089711F0;
      }
      goto L_08971164;
    }
L_08971164:
    ctx.set_gpr(2, ctx.gpr[3] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089711F0;
      }
      goto L_08971174;
    }
L_08971174:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08971188;
      }
      goto L_0897117C;
    }
L_0897117C:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897118C;
      }
      goto L_08971188;
    }
L_08971188:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(12));
    goto L_0897118C;
L_0897118C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 11u);
    ctx.set_gpr(3, ctx.gpr[2] >> 16u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089711B4;
      }
      goto L_089711A4;
    }
L_089711A4:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] & 32767u);
    ctx.set_gpr(2, ctx.gpr[2] << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    goto L_089711B4;
L_089711B4:
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(3, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 27u);
    ctx.set_gpr(2, ctx.gpr[2] >> 28u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[4]);
    ctx.set_gpr(6, ctx.gpr[2] - ctx.gpr[18]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(31, 0x089711F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x089711F0u) goto L_089711F0;
    return;
L_089711F0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089713BC;
      }
      goto L_089711F8;
    }
L_089711F8:
    ctx.set_gpr(2, 43690u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 43695u);
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(8));
    rt.memory().aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(21, ctx.gpr[21] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08971238;
      }
      goto L_08971224;
    }
L_08971224:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 11u);
    ctx.set_gpr(2, ctx.gpr[2] >> 16u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08971254;
      }
      goto L_08971238;
    }
L_08971238:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] & 32767u);
    ctx.set_gpr(3, ctx.gpr[2] << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 11u);
    ctx.set_gpr(2, ctx.gpr[2] >> 16u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    goto L_08971254;
L_08971254:
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[18]);
    ctx.set_gpr(3, ctx.gpr[21] + ctx.gpr[2]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(191));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(187));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089713BC;
      }
      goto L_0897127C;
    }
L_0897127C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089713BC;
      }
      goto L_0897128C;
    }
L_0897128C:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4200));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089712A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 441u, 0x08955DC4u>(ctx, &aot_mem) && ctx.pc == 0x089712A4u) goto L_089712A4;
    return;
L_089712A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089713BC;
      }
      goto L_089712AC;
    }
L_089712AC:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(288)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089712C0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089712C0u) goto L_089712C0;
    return;
L_089712C0:
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(500)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089712E4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089712E4u) goto L_089712E4;
    return;
L_089712E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08971308;
      }
      goto L_089712EC;
    }
L_089712EC:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(284)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08971300u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08971300u) goto L_08971300;
    return;
L_08971300:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08970E48;
      }
      goto L_08971308;
    }
L_08971308:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, ctx.gpr[2] & 64u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08971380;
      }
      goto L_0897131C;
    }
L_0897131C:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089713B0;
      }
      goto L_08971328;
    }
L_08971328:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089713B0;
      }
      goto L_08971340;
    }
L_08971340:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089713B0;
      }
      goto L_08971348;
    }
L_08971348:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08971360u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08971360u) goto L_08971360;
    return;
L_08971360:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4268));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(31, 0x08971378u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08971378u) goto L_08971378;
    return;
L_08971378:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089713B0;
      }
      goto L_08971380;
    }
L_08971380:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089713B0;
      }
      goto L_08971390;
    }
L_08971390:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4368));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(164)));
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(108)));
    ctx.set_gpr(31, 0x089713B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 441u, 0x08955DC4u>(ctx, &aot_mem) && ctx.pc == 0x089713B0u) goto L_089713B0;
    return;
L_089713B0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089713D4;
      }
      goto L_089713BC;
    }
L_089713BC:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(292)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089713D4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089713D4u) goto L_089713D4;
    return;
L_089713D4:
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
L_089713FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08971414u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 265u, 0x08931DC0u>(ctx, &aot_mem) && ctx.pc == 0x08971414u) goto L_08971414;
    return;
L_08971414:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4096));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31440)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2060));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08971438u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08971438u) goto L_08971438;
    return;
L_08971438:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(212), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08971454;
      }
      goto L_08971444;
    }
L_08971444:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4484));
    ctx.set_gpr(31, 0x08971454u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08971454u) goto L_08971454;
    return;
L_08971454:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2060));
    ctx.set_gpr(31, 0x08971468u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08971468u) goto L_08971468;
    return;
L_08971468:
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(216), ctx.gpr[5]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2020)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089714E0;
      }
      goto L_08971480;
    }
L_08971480:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31440)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897149Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897149Cu) goto L_0897149C;
    return;
L_0897149C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(2020), ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2020)));
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089714C4;
      }
      goto L_089714B4;
    }
L_089714B4:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4484));
    ctx.set_gpr(31, 0x089714C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x089714C4u) goto L_089714C4;
    return;
L_089714C4:
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(2024), ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(2028), 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(2032), 0u);
    goto L_089714E0;
L_089714E0:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089714F4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08971520;
      }
      goto L_08971510;
    }
L_08971510:
    ctx.set_gpr(31, 0x08971518u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 268u, 0x08931F1Cu>(ctx, &aot_mem) && ctx.pc == 0x08971518u) goto L_08971518;
    return;
L_08971518:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089715AC;
      }
      goto L_08971520;
    }
L_08971520:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08971534;
      }
      goto L_0897152C;
    }
L_0897152C:
    ctx.set_gpr(31, 0x08971534u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 473u, 0x0896B574u>(ctx, &aot_mem) && ctx.pc == 0x08971534u) goto L_08971534;
    return;
L_08971534:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08971540u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 268u, 0x08931F1Cu>(ctx, &aot_mem) && ctx.pc == 0x08971540u) goto L_08971540;
    return;
L_08971540:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089715A8;
      }
      goto L_0897154C;
    }
L_0897154C:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(2020)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08971588;
      }
      goto L_08971558;
    }
L_08971558:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31440)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08971570u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08971570u) goto L_08971570;
    return;
L_08971570:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(2024), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(2028), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(2032), 0u);
    goto L_08971588;
L_08971588:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31440)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089715A4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089715A4u) goto L_089715A4;
    return;
L_089715A4:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(212), 0u);
    goto L_089715A8;
L_089715A8:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(212), 0u);
    goto L_089715AC;
L_089715AC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089715C0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x089715D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 282u, 0x0892D320u>(ctx, &aot_mem) && ctx.pc == 0x089715D8u) goto L_089715D8;
    return;
L_089715D8:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(3524));
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
L_089715FC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08971614u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 284u, 0x0892D364u>(ctx, &aot_mem) && ctx.pc == 0x08971614u) goto L_08971614;
    return;
L_08971614:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(3524));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08971634;
      }
      goto L_08971628;
    }
L_08971628:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08971634u);
    // nop
    goto L_089715C0;
L_08971634:
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
L_0897164C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08971664u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 286u, 0x0892D3A8u>(ctx, &aot_mem) && ctx.pc == 0x08971664u) goto L_08971664;
    return;
L_08971664:
    ctx.set_gpr(2, 2232u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(3524));
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
L_08971688:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(496)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089716A8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089716A8u) goto L_089716A8;
    return;
L_089716A8:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089716B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 288u, 0x0892D3ECu>(ctx, &aot_mem) && ctx.pc == 0x089716B4u) goto L_089716B4;
    return;
L_089716B4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089716C8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, ctx.gpr[2] & 8192u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08971720;
      }
      goto L_089716F4;
    }
L_089716F4:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(372)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08971704u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08971704u) goto L_08971704;
    return;
L_08971704:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08971718u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 292u, 0x08932134u>(ctx, &aot_mem) && ctx.pc == 0x08971718u) goto L_08971718;
    return;
L_08971718:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08971738;
      }
      goto L_08971720;
    }
L_08971720:
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(520)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08971738u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08971738u) goto L_08971738;
    return;
L_08971738:
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
L_08971750:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08971774;
      }
      goto L_08971768;
    }
L_08971768:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08971844;
      }
      goto L_08971774;
    }
L_08971774:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, 43690u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 43695u);
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089717B8;
      }
      goto L_08971788;
    }
L_08971788:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8)));
    ctx.set_gpr(1, 16u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 17u);
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089717AC;
      }
      goto L_089717A0;
    }
L_089717A0:
    ctx.set_gpr(5, ctx.gpr[5] - ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089717B8;
      }
      goto L_089717AC;
    }
L_089717AC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08971844;
      }
      goto L_089717B8;
    }
L_089717B8:
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-1)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(3, ctx.gpr[2] >> 31u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089717D8;
      }
      goto L_089717D4;
    }
L_089717D4:
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(-12));
    goto L_089717D8;
L_089717D8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089717EC;
      }
      goto L_089717E0;
    }
L_089717E0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08971844;
      }
      goto L_089717EC;
    }
L_089717EC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08971814;
      }
      goto L_08971800;
    }
L_08971800:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(2, ctx.gpr[2] << 19u);
    ctx.set_gpr(4, ctx.gpr[2] >> 24u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08971834;
      }
      goto L_08971814;
    }
L_08971814:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(2, ctx.gpr[2] << 19u);
    ctx.set_gpr(3, ctx.gpr[2] >> 24u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] << 8u);
    ctx.set_gpr(2, ctx.gpr[2] >> 23u);
    ctx.set_gpr(2, ctx.gpr[2] << 8u);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[2]);
    goto L_08971834;
L_08971834:
    ctx.set_gpr(31, 0x0897183Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 542u, 0x0892E534u>(ctx, &aot_mem) && ctx.pc == 0x0897183Cu) goto L_0897183C;
    return;
L_0897183C:
    ctx.set_gpr(2, ctx.gpr[2] ^ ctx.gpr[16]);
    ctx.set_gpr(2, ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_08971844;
L_08971844:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08971858:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08971898;
      }
      goto L_08971864;
    }
L_08971864:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08971898;
      }
      goto L_08971870;
    }
L_08971870:
    ctx.set_gpr(2, ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08971918;
      }
      goto L_0897187C;
    }
L_0897187C:
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[3]);
    ctx.set_gpr(1, ctx.gpr[5] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08971918;
      }
      goto L_0897188C;
    }
L_0897188C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897191C;
      }
      goto L_08971898;
    }
L_08971898:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(2028)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08971918;
      }
      goto L_089718A8;
    }
L_089718A8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(2020)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08971918;
      }
      goto L_089718B4;
    }
L_089718B4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(2024)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08971918;
      }
      goto L_089718C4;
    }
L_089718C4:
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897190C;
      }
      goto L_089718D0;
    }
L_089718D0:
    ctx.set_gpr(3, ctx.gpr[7] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(2020)));
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[5] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08971908;
      }
      goto L_089718F0;
    }
L_089718F0:
    ctx.set_gpr(1, ctx.gpr[5] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08971908;
      }
      goto L_089718FC;
    }
L_089718FC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897191C;
      }
      goto L_08971908;
    }
L_08971908:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(2));
    goto L_0897190C;
L_0897190C:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089718D0;
      }
      goto L_08971918;
    }
L_08971918:
    ctx.set_gpr(2, 0u + 0u);
    goto L_0897191C;
L_0897191C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08971924:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08971930:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, 43690u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 43695u);
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089719D4;
      }
      goto L_08971944;
    }
L_08971944:
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8)));
    ctx.set_gpr(4, ctx.gpr[5] - ctx.gpr[6]);
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-1)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(3, ctx.gpr[2] >> 31u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0897196C;
      }
      goto L_08971968;
    }
L_08971968:
    ctx.set_gpr(5, ctx.gpr[4] + static_cast<std::uint32_t>(-12));
    goto L_0897196C;
L_0897196C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08971980;
      }
      goto L_08971974;
    }
L_08971974:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08971A4C;
      }
      goto L_08971980;
    }
L_08971980:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089719A8;
      }
      goto L_08971994;
    }
L_08971994:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 11u);
    ctx.set_gpr(3, ctx.gpr[2] >> 16u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089719C4;
      }
      goto L_089719A8;
    }
L_089719A8:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] & 32767u);
    ctx.set_gpr(3, ctx.gpr[2] << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 11u);
    ctx.set_gpr(2, ctx.gpr[2] >> 16u);
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    goto L_089719C4;
L_089719C4:
    ctx.set_gpr(2, ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08971A4C;
      }
      goto L_089719D4;
    }
L_089719D4:
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-1)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(3, ctx.gpr[2] >> 31u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089719F4;
      }
      goto L_089719F0;
    }
L_089719F0:
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(-12));
    goto L_089719F4;
L_089719F4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08971A08;
      }
      goto L_089719FC;
    }
L_089719FC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08971A4C;
      }
      goto L_08971A08;
    }
L_08971A08:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08971A30;
      }
      goto L_08971A1C;
    }
L_08971A1C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 11u);
    ctx.set_gpr(2, ctx.gpr[2] >> 16u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08971A4C;
      }
      goto L_08971A30;
    }
L_08971A30:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] & 32767u);
    ctx.set_gpr(3, ctx.gpr[2] << 16u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 11u);
    ctx.set_gpr(2, ctx.gpr[2] >> 16u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    goto L_08971A4C;
L_08971A4C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08971A54:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] & 1u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(3, ctx.gpr[3] & 1u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08971ACC;
      }
      goto L_08971A80;
    }
L_08971A80:
    ctx.set_gpr(31, 0x08971A88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 616u, 0x0892EADCu>(ctx, &aot_mem) && ctx.pc == 0x08971A88u) goto L_08971A88;
    return;
L_08971A88:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08971ACC;
      }
      goto L_08971A90;
    }
L_08971A90:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08971AC4;
      }
      goto L_08971A9C;
    }
L_08971A9C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08971AB4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08971AB4u) goto L_08971AB4;
    return;
L_08971AB4:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4528));
    ctx.set_gpr(31, 0x08971AC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08971AC4u) goto L_08971AC4;
    return;
L_08971AC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08971AD0;
      }
      goto L_08971ACC;
    }
L_08971ACC:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(140), ctx.gpr[16]);
    goto L_08971AD0;
L_08971AD0:
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
L_08971AE8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
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
    ctx.set_gpr(22, ctx.gpr[8] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08971BA8;
      }
      goto L_08971B2C;
    }
L_08971B2C:
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(280)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08971B3Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08971B3Cu) goto L_08971B3C;
    return;
L_08971B3C:
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(17, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08971B84;
      }
      goto L_08971B4C;
    }
L_08971B4C:
    ctx.set_gpr(3, ctx.gpr[17] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2020)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_gpr(8, ctx.gpr[2] - ctx.gpr[7]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(9, 0u + 0u);
    ctx.set_gpr(10, ctx.gpr[22] + 0u);
    ctx.set_gpr(31, 0x08971B80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 457u, 0x0892A068u>(ctx, &aot_mem) && ctx.pc == 0x08971B80u) goto L_08971B80;
    return;
L_08971B80:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(2));
    goto L_08971B84;
L_08971B84:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2028)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08971B4C;
      }
      goto L_08971B94;
    }
L_08971B94:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(288)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08971BA8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08971BA8u) goto L_08971BA8;
    return;
L_08971BA8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
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
L_08971BD4:
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[5]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08971BF4;
      }
      goto L_08971BE4;
    }
L_08971BE4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(24));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(216), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08971BFC;
      }
      goto L_08971BF4;
    }
L_08971BF4:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(16));
    rt.memory().aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(216), ctx.gpr[3]);
    goto L_08971BFC;
L_08971BFC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08971C04:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    ctx.set_gpr(17, ctx.gpr[6] + 0u);
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08971C38u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08971C38u) goto L_08971C38;
    return;
L_08971C38:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08971C60;
      }
      goto L_08971C48;
    }
L_08971C48:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08971C60;
      }
      goto L_08971C54;
    }
L_08971C54:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08971C64;
      }
      goto L_08971C60;
    }
L_08971C60:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08971C64;
L_08971C64:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08971D44;
      }
      goto L_08971C6C;
    }
L_08971C6C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, 43690u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 43695u);
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08971CB0;
      }
      goto L_08971C80;
    }
L_08971C80:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-8)));
    ctx.set_gpr(1, 16u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 17u);
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08971CA4;
      }
      goto L_08971C98;
    }
L_08971C98:
    ctx.set_gpr(18, ctx.gpr[18] - ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08971CB0;
      }
      goto L_08971CA4;
    }
L_08971CA4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08971D48;
      }
      goto L_08971CB0;
    }
L_08971CB0:
    ctx.set_gpr(16, ctx.gpr[18] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(-1)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(3, ctx.gpr[2] >> 31u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08971CD0;
      }
      goto L_08971CCC;
    }
L_08971CCC:
    ctx.set_gpr(16, ctx.gpr[18] + static_cast<std::uint32_t>(-12));
    goto L_08971CD0;
L_08971CD0:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08971CE4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08971CE4u) goto L_08971CE4;
    return;
L_08971CE4:
    ctx.set_gpr(5, rt.memory().aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, ctx.gpr[3] << 5u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-8161));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(4, ctx.gpr[3] >> 31u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08971D38;
      }
      goto L_08971D18;
    }
L_08971D18:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, (ctx.gpr[2] >> 8u) & 0x000001FFu);
    ctx.set_gpr(3, ctx.gpr[2] << 15u);
    ctx.set_gpr(2, 65280u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 32767u);
    ctx.set_gpr(2, ctx.gpr[4] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    goto L_08971D38;
L_08971D38:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08971D48;
      }
      goto L_08971D44;
    }
L_08971D44:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08971D48;
L_08971D48:
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
L_08971D64:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(4, ctx.gpr[5] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08971D88u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08971D88u) goto L_08971D88;
    return;
L_08971D88:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[3]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08971DB0;
      }
      goto L_08971D98;
    }
L_08971D98:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08971DB0;
      }
      goto L_08971DA4;
    }
L_08971DA4:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08971DB4;
      }
      goto L_08971DB0;
    }
L_08971DB0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    goto L_08971DB4;
L_08971DB4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08971DC8;
      }
      goto L_08971DBC;
    }
L_08971DBC:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08971DCC;
      }
      goto L_08971DC8;
    }
L_08971DC8:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08971DCC;
L_08971DCC:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08971DE0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08971DF4;
      }
      goto L_08971DE8;
    }
L_08971DE8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08971EB4;
      }
      goto L_08971DF4;
    }
L_08971DF4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, 43690u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 43695u);
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08971E38;
      }
      goto L_08971E08;
    }
L_08971E08:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8)));
    ctx.set_gpr(1, 16u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 17u);
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[1] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08971E2C;
      }
      goto L_08971E20;
    }
L_08971E20:
    ctx.set_gpr(5, ctx.gpr[5] - ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08971E38;
      }
      goto L_08971E2C;
    }
L_08971E2C:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08971EB4;
      }
      goto L_08971E38;
    }
L_08971E38:
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-1)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(3, ctx.gpr[2] >> 31u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08971E58;
      }
      goto L_08971E54;
    }
L_08971E54:
    ctx.set_gpr(4, ctx.gpr[5] + static_cast<std::uint32_t>(-12));
    goto L_08971E58;
L_08971E58:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08971E6C;
      }
      goto L_08971E60;
    }
L_08971E60:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08971EB4;
      }
      goto L_08971E6C;
    }
L_08971E6C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08971E94;
      }
      goto L_08971E80;
    }
L_08971E80:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(2, ctx.gpr[2] << 19u);
    ctx.set_gpr(2, ctx.gpr[2] >> 24u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08971EB4;
      }
      goto L_08971E94;
    }
L_08971E94:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(2, ctx.gpr[2] << 19u);
    ctx.set_gpr(3, ctx.gpr[2] >> 24u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] << 8u);
    ctx.set_gpr(2, ctx.gpr[2] >> 23u);
    ctx.set_gpr(2, ctx.gpr[2] << 8u);
    ctx.set_gpr(2, ctx.gpr[3] + ctx.gpr[2]);
    goto L_08971EB4;
L_08971EB4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08971EBC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(17, ctx.gpr[4] + 0u);
    ctx.set_gpr(16, ctx.gpr[5] + 0u);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31440)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(2060));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08971EF0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08971EF0u) goto L_08971EF0;
    return;
L_08971EF0:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(212), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[2] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(2060));
    ctx.set_gpr(31, 0x08971F08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08971F08u) goto L_08971F08;
    return;
L_08971F08:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2020)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08971F7C;
      }
      goto L_08971F18;
    }
L_08971F18:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31440)));
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08971F38u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08971F38u) goto L_08971F38;
    return;
L_08971F38:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(212)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(2020), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2020)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08971F60;
      }
      goto L_08971F50;
    }
L_08971F50:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4484));
    ctx.set_gpr(31, 0x08971F60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08971F60u) goto L_08971F60;
    return;
L_08971F60:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(16));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(212)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(2024), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(212)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(2028), 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(212)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(2032), 0u);
    goto L_08971F7C;
L_08971F7C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08971F8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 425u, 0x08945E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08971F8Cu) goto L_08971F8C;
    return;
L_08971F8C:
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
L_08971FA4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08971FB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 426u, 0x0892DD28u>(ctx, &aot_mem) && ctx.pc == 0x08971FB4u) goto L_08971FB4;
    return;
L_08971FB4:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08971FC4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08971FDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 425u, 0x0892DD18u>(ctx, &aot_mem) && ctx.pc == 0x08971FDCu) goto L_08971FDC;
    return;
L_08971FDC:
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(4096));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), ctx.gpr[3]);
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11072)));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(140), ctx.gpr[3]);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08972004:
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
    ctx.set_gpr(20, ctx.gpr[4] + 0u);
    ctx.set_gpr(19, ctx.gpr[5] + 0u);
    ctx.set_gpr(18, ctx.gpr[6] + 0u);
    ctx.set_gpr(22, ctx.gpr[7] + 0u);
    ctx.set_gpr(21, 0u + 0u);
    ctx.set_gpr(23, 0u + 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.set_gpr(30, 0u + 0u);
    ctx.set_gpr(17, 0u + 0u);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, ctx.gpr[2] & 512u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08972118;
      }
      goto L_08972074;
    }
L_08972074:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089720E4;
      }
      goto L_08972084;
    }
L_08972084:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089720B0;
      }
      goto L_08972090;
    }
L_08972090:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089720A0;
      }
      goto L_08972098;
    }
L_08972098:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089720B0;
      }
      goto L_089720A0;
    }
L_089720A0:
    ctx.set_gpr(16, 2228u << 16u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-14968));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089720B8;
      }
      goto L_089720B0;
    }
L_089720B0:
    ctx.set_gpr(16, 2228u << 16u);
    ctx.set_gpr(16, ctx.gpr[16] + static_cast<std::uint32_t>(-14952));
    goto L_089720B8;
L_089720B8:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089720CCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089720CCu) goto L_089720CC;
    return;
L_089720CC:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4648));
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x089720E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 461u, 0x08955FA4u>(ctx, &aot_mem) && ctx.pc == 0x089720E4u) goto L_089720E4;
    return;
L_089720E4:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(500)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08972104u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08972104u) goto L_08972104;
    return;
L_08972104:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08972118;
      }
      goto L_0897210C;
    }
L_0897210C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08973348;
      }
      goto L_08972118;
    }
L_08972118:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08972178;
      }
      goto L_08972124;
    }
L_08972124:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08972178;
      }
      goto L_08972130;
    }
L_08972130:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[3]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08972178;
      }
      goto L_08972138;
    }
L_08972138:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08972150u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08972150u) goto L_08972150;
    return;
L_08972150:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08972164u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08972164u) goto L_08972164;
    return;
L_08972164:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(-14836));
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08972178u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08972178u) goto L_08972178;
    return;
L_08972178:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(280)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897218Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897218Cu) goto L_0897218C;
    return;
L_0897218C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(1, ctx.gpr[22] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089721A0;
      }
      goto L_0897219C;
    }
L_0897219C:
    ctx.set_gpr(22, ctx.gpr[2] + 0u);
    goto L_089721A0;
L_089721A0:
    ctx.set_gpr(1, ctx.gpr[22] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089721B0;
      }
      goto L_089721AC;
    }
L_089721AC:
    ctx.set_gpr(22, 0u + static_cast<std::uint32_t>(8));
    goto L_089721B0;
L_089721B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, ctx.gpr[2] & 1u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089721D8;
      }
      goto L_089721C4;
    }
L_089721C4:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    ctx.set_gpr(30, ctx.gpr[22] + 0u);
    ctx.set_gpr(2, ctx.gpr[22] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    goto L_089721D8;
L_089721D8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089729D4;
      }
      goto L_089721E4;
    }
L_089721E4:
    ctx.set_gpr(16, 0u + 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897251C;
      }
      goto L_089721F0;
    }
L_089721F0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08972368;
      }
      goto L_089721FC;
    }
L_089721FC:
    ctx.set_gpr(21, ctx.gpr[19] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, 43690u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 43695u);
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0897231C;
      }
      goto L_08972214;
    }
L_08972214:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-8)));
    ctx.set_gpr(2, ctx.gpr[3] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
    ctx.set_gpr(19, ctx.gpr[19] - ctx.gpr[3]);
    ctx.set_gpr(17, ctx.gpr[19] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-1)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(4, ctx.gpr[3] >> 31u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08972248;
      }
      goto L_08972244;
    }
L_08972244:
    ctx.set_gpr(17, ctx.gpr[19] + static_cast<std::uint32_t>(-12));
    goto L_08972248;
L_08972248:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 11u);
    ctx.set_gpr(4, ctx.gpr[3] >> 16u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(3, ctx.gpr[3] >> 31u);
    ctx.set_gpr(3, ctx.gpr[3] & 255u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08972274;
      }
      goto L_0897226C;
    }
L_0897226C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08972284;
      }
      goto L_08972274;
    }
L_08972274:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] & 32767u);
    ctx.set_gpr(3, ctx.gpr[3] << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[3]);
    goto L_08972284;
L_08972284:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, ctx.gpr[4] - ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(21, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[21] | ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(2, ctx.gpr[2] << 8u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(2, ctx.gpr[2] << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(21, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(2, 48059u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 48063u);
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0897253C;
      }
      goto L_089722D0;
    }
L_089722D0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0897253C;
      }
      goto L_089722DC;
    }
L_089722DC:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089722F4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089722F4u) goto L_089722F4;
    return;
L_089722F4:
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4748));
    ctx.set_gpr(2, 48059u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] | 48063u);
    ctx.set_gpr(7, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x08972314u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08972314u) goto L_08972314;
    return;
L_08972314:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897253C;
      }
      goto L_0897231C;
    }
L_0897231C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0897253C;
      }
      goto L_08972328;
    }
L_08972328:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08972340u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08972340u) goto L_08972340;
    return;
L_08972340:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4840));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(2, 43690u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] | 43695u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(31, 0x08972360u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08972360u) goto L_08972360;
    return;
L_08972360:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897253C;
      }
      goto L_08972368;
    }
L_08972368:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, 43690u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 43695u);
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089724F4;
      }
      goto L_0897237C;
    }
L_0897237C:
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-8)));
    ctx.set_gpr(1, 16u << 16u);
    ctx.set_gpr(1, ctx.gpr[1] | 17u);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[1]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_089723F0;
      }
      goto L_08972394;
    }
L_08972394:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089723D0;
      }
      goto L_089723A0;
    }
L_089723A0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089723B8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089723B8u) goto L_089723B8;
    return;
L_089723B8:
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(4932));
    ctx.set_gpr(6, ctx.gpr[30] + 0u);
    ctx.set_gpr(31, 0x089723D0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x089723D0u) goto L_089723D0;
    return;
L_089723D0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(288)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089723E4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089723E4u) goto L_089723E4;
    return;
L_089723E4:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08973348;
      }
      goto L_089723F0;
    }
L_089723F0:
    ctx.set_gpr(2, ctx.gpr[30] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
    ctx.set_gpr(19, ctx.gpr[19] - ctx.gpr[30]);
    ctx.set_gpr(17, ctx.gpr[19] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-1)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(4, ctx.gpr[3] >> 31u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08972420;
      }
      goto L_0897241C;
    }
L_0897241C:
    ctx.set_gpr(17, ctx.gpr[19] + static_cast<std::uint32_t>(-12));
    goto L_08972420;
L_08972420:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 11u);
    ctx.set_gpr(4, ctx.gpr[3] >> 16u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(3, ctx.gpr[3] >> 31u);
    ctx.set_gpr(3, ctx.gpr[3] & 255u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897244C;
      }
      goto L_08972444;
    }
L_08972444:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897245C;
      }
      goto L_0897244C;
    }
L_0897244C:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] & 32767u);
    ctx.set_gpr(3, ctx.gpr[3] << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[3]);
    goto L_0897245C;
L_0897245C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, ctx.gpr[4] - ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(21, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[21] | ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(2, ctx.gpr[2] << 8u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(2, ctx.gpr[2] << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(21, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(2, 48059u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 48063u);
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0897253C;
      }
      goto L_089724A8;
    }
L_089724A8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0897253C;
      }
      goto L_089724B4;
    }
L_089724B4:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089724CCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089724CCu) goto L_089724CC;
    return;
L_089724CC:
    ctx.set_gpr(5, ctx.gpr[19] + static_cast<std::uint32_t>(8));
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(5016));
    ctx.set_gpr(2, 48059u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] | 48063u);
    ctx.set_gpr(7, ctx.gpr[21] + 0u);
    ctx.set_gpr(31, 0x089724ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x089724ECu) goto L_089724EC;
    return;
L_089724EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897253C;
      }
      goto L_089724F4;
    }
L_089724F4:
    ctx.set_gpr(17, ctx.gpr[19] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-1)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(3, ctx.gpr[2] >> 31u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08972514;
      }
      goto L_08972510;
    }
L_08972510:
    ctx.set_gpr(17, ctx.gpr[19] + static_cast<std::uint32_t>(-12));
    goto L_08972514;
L_08972514:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897253C;
      }
      goto L_0897251C;
    }
L_0897251C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(288)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08972530u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08972530u) goto L_08972530;
    return;
L_08972530:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08973348;
      }
      goto L_0897253C;
    }
L_0897253C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089729A4;
      }
      goto L_08972544;
    }
L_08972544:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08972574;
      }
      goto L_0897255C;
    }
L_0897255C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 11u);
    ctx.set_gpr(4, ctx.gpr[3] >> 16u);
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08972590;
      }
      goto L_08972574;
    }
L_08972574:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 11u);
    ctx.set_gpr(4, ctx.gpr[3] >> 16u);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] & 32767u);
    ctx.set_gpr(3, ctx.gpr[3] << 16u);
    ctx.set_gpr(5, ctx.gpr[4] + ctx.gpr[3]);
    goto L_08972590;
L_08972590:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(21, ctx.gpr[5] - ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_089725B4;
      }
      goto L_089725A4;
    }
L_089725A4:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] & 32767u);
    ctx.set_gpr(3, ctx.gpr[3] << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[3]);
    goto L_089725B4;
L_089725B4:
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(4, ctx.gpr[4] & ctx.gpr[3]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 27u);
    ctx.set_gpr(3, ctx.gpr[3] >> 28u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(3, ctx.gpr[3] << 2u);
    ctx.set_gpr(23, ctx.gpr[4] + ctx.gpr[3]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089725FC;
      }
      goto L_089725E0;
    }
L_089725E0:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, ctx.gpr[3] << 19u);
    ctx.set_gpr(3, ctx.gpr[3] >> 24u);
    ctx.set_gpr(4, ctx.gpr[3] & 65535u);
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08972620;
      }
      goto L_089725FC;
    }
L_089725FC:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, ctx.gpr[3] << 19u);
    ctx.set_gpr(3, ctx.gpr[3] >> 24u);
    ctx.set_gpr(4, ctx.gpr[3] & 65535u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] << 8u);
    ctx.set_gpr(3, ctx.gpr[3] >> 23u);
    ctx.set_gpr(3, ctx.gpr[3] << 8u);
    ctx.set_gpr(5, ctx.gpr[4] + ctx.gpr[3]);
    goto L_08972620;
L_08972620:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08972768;
      }
      goto L_0897262C;
    }
L_0897262C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08972640;
      }
      goto L_08972634;
    }
L_08972634:
    ctx.set_gpr(4, ctx.gpr[4] & 65535u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08972658;
      }
      goto L_08972640;
    }
L_08972640:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] << 8u);
    ctx.set_gpr(2, ctx.gpr[2] >> 23u);
    ctx.set_gpr(3, ctx.gpr[2] << 8u);
    ctx.set_gpr(2, ctx.gpr[4] & 65535u);
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    goto L_08972658;
L_08972658:
    ctx.set_gpr(31, 0x08972660u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 542u, 0x0892E534u>(ctx, &aot_mem) && ctx.pc == 0x08972660u) goto L_08972660;
    return;
L_08972660:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(21, ctx.gpr[28] + static_cast<std::uint32_t>(-32740));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08972688;
      }
      goto L_08972670;
    }
L_08972670:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08972684u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08972684u) goto L_08972684;
    return;
L_08972684:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    goto L_08972688;
L_08972688:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08972718;
      }
      goto L_08972698;
    }
L_08972698:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089726C0;
      }
      goto L_089726AC;
    }
L_089726AC:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(2, ctx.gpr[2] << 19u);
    ctx.set_gpr(17, ctx.gpr[2] >> 24u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089726E0;
      }
      goto L_089726C0;
    }
L_089726C0:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(2, ctx.gpr[2] << 19u);
    ctx.set_gpr(3, ctx.gpr[2] >> 24u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] << 8u);
    ctx.set_gpr(2, ctx.gpr[2] >> 23u);
    ctx.set_gpr(2, ctx.gpr[2] << 8u);
    ctx.set_gpr(17, ctx.gpr[3] + ctx.gpr[2]);
    goto L_089726E0;
L_089726E0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089726F4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089726F4u) goto L_089726F4;
    return;
L_089726F4:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(5108));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[21] + 0u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(9, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08972718u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 441u, 0x08955DC4u>(ctx, &aot_mem) && ctx.pc == 0x08972718u) goto L_08972718;
    return;
L_08972718:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(288)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897272Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897272Cu) goto L_0897272C;
    return;
L_0897272C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897275C;
      }
      goto L_08972734;
    }
L_08972734:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[22] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08972754u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08972754u) goto L_08972754;
    return;
L_08972754:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08973348;
      }
      goto L_0897275C;
    }
L_0897275C:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08973348;
      }
      goto L_08972768;
    }
L_08972768:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(3, ctx.gpr[3] & 2u);
    ctx.set_gpr(3, 0u < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_089727A8;
      }
      goto L_0897277C;
    }
L_0897277C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08972790;
      }
      goto L_08972784;
    }
L_08972784:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08972794;
      }
      goto L_08972790;
    }
L_08972790:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_08972794;
L_08972794:
    ctx.set_gpr(6, ctx.gpr[23] - ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(253));
    ctx.set_gpr(31, 0x089727A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x089727A8u) goto L_089727A8;
    return;
L_089727A8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(3, ctx.gpr[2] >> 31u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089727D4;
      }
      goto L_089727C0;
    }
L_089727C0:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, ctx.gpr[2] << 30u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089727D8;
      }
      goto L_089727D4;
    }
L_089727D4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089727D8;
L_089727D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08972848;
      }
      goto L_089727E0;
    }
L_089727E0:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31440)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089727FCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089727FCu) goto L_089727FC;
    return;
L_089727FC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08973330;
      }
      goto L_08972808;
    }
L_08972808:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[23] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08972820u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 117u, 0x08900AF4u>(ctx, &aot_mem) && ctx.pc == 0x08972820u) goto L_08972820;
    return;
L_08972820:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(205)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08973330;
      }
      goto L_0897282C;
    }
L_0897282C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08972840u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 108u, 0x08900998u>(ctx, &aot_mem) && ctx.pc == 0x08972840u) goto L_08972840;
    return;
L_08972840:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08973330;
      }
      goto L_08972848;
    }
L_08972848:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 26u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08972948;
      }
      goto L_0897285C;
    }
L_0897285C:
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08972868u);
    // nop
    goto L_089702E0;
L_08972868:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08972880;
      }
      goto L_08972878;
    }
L_08972878:
    ctx.set_gpr(2, ctx.gpr[2] & 65535u);
    ctx.set_gpr(17, ctx.gpr[17] - ctx.gpr[2]);
    goto L_08972880;
L_08972880:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089728B0;
      }
      goto L_0897288C;
    }
L_0897288C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089728B0;
      }
      goto L_0897289C;
    }
L_0897289C:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(5224));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089728B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 441u, 0x08955DC4u>(ctx, &aot_mem) && ctx.pc == 0x089728B0u) goto L_089728B0;
    return;
L_089728B0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(192)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(192), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(196)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(196), ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.set_gpr(2, ctx.gpr[2] & 65535u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08973330;
      }
      goto L_089728E0;
    }
L_089728E0:
    ctx.set_gpr(17, ctx.gpr[17] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08972930;
      }
      goto L_089728F0;
    }
L_089728F0:
    ctx.set_gpr(18, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(19, ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08972910u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 117u, 0x08900AF4u>(ctx, &aot_mem) && ctx.pc == 0x08972910u) goto L_08972910;
    return;
L_08972910:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(205)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08972930;
      }
      goto L_0897291C;
    }
L_0897291C:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08972930u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 108u, 0x08900998u>(ctx, &aot_mem) && ctx.pc == 0x08972930u) goto L_08972930;
    return;
L_08972930:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(31, 0x08972940u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 373u, 0x0896A9DCu>(ctx, &aot_mem) && ctx.pc == 0x08972940u) goto L_08972940;
    return;
L_08972940:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08973330;
      }
      goto L_08972948;
    }
L_08972948:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897298C;
      }
      goto L_08972954;
    }
L_08972954:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[23] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x0897296Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 117u, 0x08900AF4u>(ctx, &aot_mem) && ctx.pc == 0x0897296Cu) goto L_0897296C;
    return;
L_0897296C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(205)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897298C;
      }
      goto L_08972978;
    }
L_08972978:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x0897298Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 108u, 0x08900998u>(ctx, &aot_mem) && ctx.pc == 0x0897298Cu) goto L_0897298C;
    return;
L_0897298C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x0897299Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 373u, 0x0896A9DCu>(ctx, &aot_mem) && ctx.pc == 0x0897299Cu) goto L_0897299C;
    return;
L_0897299C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08973330;
      }
      goto L_089729A4;
    }
L_089729A4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08973330;
      }
      goto L_089729B4;
    }
L_089729B4:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(5292));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089729CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 441u, 0x08955DC4u>(ctx, &aot_mem) && ctx.pc == 0x089729CCu) goto L_089729CC;
    return;
L_089729CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08973330;
      }
      goto L_089729D4;
    }
L_089729D4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.set_gpr(2, ctx.gpr[18] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08972EAC;
      }
      goto L_089729E8;
    }
L_089729E8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08972BE8;
      }
      goto L_089729F4;
    }
L_089729F4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-4)));
    ctx.set_gpr(2, 43690u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 43695u);
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08972B14;
      }
      goto L_08972A08;
    }
L_08972A08:
    ctx.set_gpr(30, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-8)));
    ctx.set_gpr(2, ctx.gpr[30] + static_cast<std::uint32_t>(4));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[19] + 0u);
    ctx.set_gpr(19, ctx.gpr[19] - ctx.gpr[30]);
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(17, ctx.gpr[19] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-1)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(4, ctx.gpr[3] >> 31u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08972A40;
      }
      goto L_08972A3C;
    }
L_08972A3C:
    ctx.set_gpr(17, ctx.gpr[19] + static_cast<std::uint32_t>(-12));
    goto L_08972A40;
L_08972A40:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 11u);
    ctx.set_gpr(4, ctx.gpr[3] >> 16u);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(3, ctx.gpr[3] >> 31u);
    ctx.set_gpr(3, ctx.gpr[3] & 255u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08972A6C;
      }
      goto L_08972A64;
    }
L_08972A64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08972A7C;
      }
      goto L_08972A6C;
    }
L_08972A6C:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] & 32767u);
    ctx.set_gpr(3, ctx.gpr[3] << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[3]);
    goto L_08972A7C;
L_08972A7C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(3, ctx.gpr[4] - ctx.gpr[3]);
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[16] | ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    ctx.set_gpr(2, ctx.gpr[2] << 8u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(2, ctx.gpr[2] << 16u);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(16, ctx.gpr[3] | ctx.gpr[2]);
    ctx.set_gpr(2, 48059u << 16u);
    ctx.set_gpr(2, ctx.gpr[2] | 48063u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08972C0C;
      }
      goto L_08972AC8;
    }
L_08972AC8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08972C0C;
      }
      goto L_08972AD4;
    }
L_08972AD4:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08972AECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08972AECu) goto L_08972AEC;
    return;
L_08972AEC:
    ctx.set_gpr(5, ctx.gpr[19] + ctx.gpr[30]);
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(5352));
    ctx.set_gpr(2, 48059u << 16u);
    ctx.set_gpr(6, ctx.gpr[2] | 48063u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08972B0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08972B0Cu) goto L_08972B0C;
    return;
L_08972B0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08972C0C;
      }
      goto L_08972B14;
    }
L_08972B14:
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(17, ctx.gpr[19] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-1)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(3, ctx.gpr[2] >> 31u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08972B38;
      }
      goto L_08972B34;
    }
L_08972B34:
    ctx.set_gpr(17, ctx.gpr[19] + static_cast<std::uint32_t>(-12));
    goto L_08972B38;
L_08972B38:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08972B60;
      }
      goto L_08972B4C;
    }
L_08972B4C:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(2, ctx.gpr[2] << 19u);
    ctx.set_gpr(4, ctx.gpr[2] >> 24u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08972B80;
      }
      goto L_08972B60;
    }
L_08972B60:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(2, ctx.gpr[2] << 19u);
    ctx.set_gpr(3, ctx.gpr[2] >> 24u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] << 8u);
    ctx.set_gpr(2, ctx.gpr[2] >> 23u);
    ctx.set_gpr(2, ctx.gpr[2] << 8u);
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[2]);
    goto L_08972B80;
L_08972B80:
    ctx.set_gpr(31, 0x08972B88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 542u, 0x0892E534u>(ctx, &aot_mem) && ctx.pc == 0x08972B88u) goto L_08972B88;
    return;
L_08972B88:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08972C0C;
      }
      goto L_08972B90;
    }
L_08972B90:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08972BC8;
      }
      goto L_08972B9C;
    }
L_08972B9C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08972BB4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08972BB4u) goto L_08972BB4;
    return;
L_08972BB4:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(5444));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x08972BC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x08972BC8u) goto L_08972BC8;
    return;
L_08972BC8:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(288)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08972BDCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08972BDCu) goto L_08972BDC;
    return;
L_08972BDC:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08973348;
      }
      goto L_08972BE8;
    }
L_08972BE8:
    ctx.set_gpr(23, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(17, ctx.gpr[19] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-1)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(3, ctx.gpr[2] >> 31u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08972C0C;
      }
      goto L_08972C08;
    }
L_08972C08:
    ctx.set_gpr(17, ctx.gpr[19] + static_cast<std::uint32_t>(-12));
    goto L_08972C0C;
L_08972C0C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08972C40;
      }
      goto L_08972C24;
    }
L_08972C24:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, ctx.gpr[3] << 19u);
    ctx.set_gpr(3, ctx.gpr[3] >> 24u);
    ctx.set_gpr(4, ctx.gpr[3] & 65535u);
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08972C64;
      }
      goto L_08972C40;
    }
L_08972C40:
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(3, ctx.gpr[3] << 19u);
    ctx.set_gpr(3, ctx.gpr[3] >> 24u);
    ctx.set_gpr(4, ctx.gpr[3] & 65535u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] << 8u);
    ctx.set_gpr(3, ctx.gpr[3] >> 23u);
    ctx.set_gpr(3, ctx.gpr[3] << 8u);
    ctx.set_gpr(5, ctx.gpr[4] + ctx.gpr[3]);
    goto L_08972C64;
L_08972C64:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08972DAC;
      }
      goto L_08972C70;
    }
L_08972C70:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08972C84;
      }
      goto L_08972C78;
    }
L_08972C78:
    ctx.set_gpr(4, ctx.gpr[4] & 65535u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08972C9C;
      }
      goto L_08972C84;
    }
L_08972C84:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] << 8u);
    ctx.set_gpr(2, ctx.gpr[2] >> 23u);
    ctx.set_gpr(3, ctx.gpr[2] << 8u);
    ctx.set_gpr(2, ctx.gpr[4] & 65535u);
    ctx.set_gpr(4, ctx.gpr[2] + ctx.gpr[3]);
    goto L_08972C9C;
L_08972C9C:
    ctx.set_gpr(31, 0x08972CA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 542u, 0x0892E534u>(ctx, &aot_mem) && ctx.pc == 0x08972CA4u) goto L_08972CA4;
    return;
L_08972CA4:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(21, ctx.gpr[28] + static_cast<std::uint32_t>(-32740));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08972CCC;
      }
      goto L_08972CB4;
    }
L_08972CB4:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08972CC8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08972CC8u) goto L_08972CC8;
    return;
L_08972CC8:
    ctx.set_gpr(21, ctx.gpr[2] + 0u);
    goto L_08972CCC;
L_08972CCC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08972D5C;
      }
      goto L_08972CDC;
    }
L_08972CDC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08972D04;
      }
      goto L_08972CF0;
    }
L_08972CF0:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(2, ctx.gpr[2] << 19u);
    ctx.set_gpr(17, ctx.gpr[2] >> 24u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08972D24;
      }
      goto L_08972D04;
    }
L_08972D04:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    ctx.set_gpr(2, ctx.gpr[2] << 19u);
    ctx.set_gpr(3, ctx.gpr[2] >> 24u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] << 8u);
    ctx.set_gpr(2, ctx.gpr[2] >> 23u);
    ctx.set_gpr(2, ctx.gpr[2] << 8u);
    ctx.set_gpr(17, ctx.gpr[3] + ctx.gpr[2]);
    goto L_08972D24;
L_08972D24:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(464)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08972D38u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08972D38u) goto L_08972D38;
    return;
L_08972D38:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(5524));
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, ctx.gpr[21] + 0u);
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(9, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08972D5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 441u, 0x08955DC4u>(ctx, &aot_mem) && ctx.pc == 0x08972D5Cu) goto L_08972D5C;
    return;
L_08972D5C:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(288)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08972D70u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08972D70u) goto L_08972D70;
    return;
L_08972D70:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08972DA0;
      }
      goto L_08972D78;
    }
L_08972D78:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(7, ctx.gpr[22] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08972D98u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08972D98u) goto L_08972D98;
    return;
L_08972D98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08973348;
      }
      goto L_08972DA0;
    }
L_08972DA0:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08973348;
      }
      goto L_08972DAC;
    }
L_08972DAC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08972DCC;
      }
      goto L_08972DB4;
    }
L_08972DB4:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 11u);
    ctx.set_gpr(4, ctx.gpr[3] >> 16u);
    ctx.set_gpr(5, ctx.gpr[4] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08972DE8;
      }
      goto L_08972DCC;
    }
L_08972DCC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 11u);
    ctx.set_gpr(4, ctx.gpr[3] >> 16u);
    ctx.set_gpr(3, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] & 32767u);
    ctx.set_gpr(3, ctx.gpr[3] << 16u);
    ctx.set_gpr(5, ctx.gpr[4] + ctx.gpr[3]);
    goto L_08972DE8;
L_08972DE8:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(21, ctx.gpr[5] - ctx.gpr[3]);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08972E0C;
      }
      goto L_08972DFC;
    }
L_08972DFC:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] & 32767u);
    ctx.set_gpr(2, ctx.gpr[2] << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + ctx.gpr[2]);
    goto L_08972E0C;
L_08972E0C:
    ctx.set_gpr(2, ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(3, ctx.gpr[2] & ctx.gpr[23]);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 27u);
    ctx.set_gpr(2, ctx.gpr[2] >> 28u);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(2, ctx.gpr[2] << 2u);
    ctx.set_gpr(23, ctx.gpr[3] + ctx.gpr[2]);
    ctx.set_gpr(1, ctx.gpr[22] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08972E44;
      }
      goto L_08972E38;
    }
L_08972E38:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08972E84;
      }
      goto L_08972E44;
    }
L_08972E44:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08972E84;
      }
      goto L_08972E54;
    }
L_08972E54:
    { const std::uint32_t dividend = ctx.gpr[19]; const std::uint32_t divisor = ctx.gpr[22]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.set_gpr(2, ctx.hi);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08972E84;
      }
      goto L_08972E64;
    }
L_08972E64:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(31, 0x08972E78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 2u, 0x0896C028u>(ctx, &aot_mem) && ctx.pc == 0x08972E78u) goto L_08972E78;
    return;
L_08972E78:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08972EEC;
      }
      goto L_08972E84;
    }
L_08972E84:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(31, 0x08972E98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 258u, 0x0896E420u>(ctx, &aot_mem) && ctx.pc == 0x08972E98u) goto L_08972E98;
    return;
L_08972E98:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08972EEC;
      }
      goto L_08972EAC;
    }
L_08972EAC:
    ctx.set_gpr(1, ctx.gpr[22] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] != 0u;
    // nop
      if (branch_taken) {
          goto L_08972ED8;
      }
      goto L_08972EB8;
    }
L_08972EB8:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[22] + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08972ECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 258u, 0x0896E420u>(ctx, &aot_mem) && ctx.pc == 0x08972ECCu) goto L_08972ECC;
    return;
L_08972ECC:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08972EEC;
      }
      goto L_08972ED8;
    }
L_08972ED8:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(31, 0x08972EE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 313u, 0x089669E4u>(ctx, &aot_mem) && ctx.pc == 0x08972EE8u) goto L_08972EE8;
    return;
L_08972EE8:
    ctx.set_gpr(16, ctx.gpr[2] + 0u);
    goto L_08972EEC;
L_08972EEC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089732A0;
      }
      goto L_08972EF4;
    }
L_08972EF4:
    ctx.set_gpr(22, ctx.gpr[16] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-1)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(3, ctx.gpr[2] >> 31u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08972F14;
      }
      goto L_08972F10;
    }
L_08972F10:
    ctx.set_gpr(22, ctx.gpr[16] + static_cast<std::uint32_t>(-12));
    goto L_08972F14;
L_08972F14:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 11u);
    ctx.set_gpr(3, ctx.gpr[2] >> 16u);
    ctx.set_gpr(5, ctx.gpr[3] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    ctx.set_gpr(2, ctx.gpr[2] & 255u);
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08972F50;
      }
      goto L_08972F40;
    }
L_08972F40:
    ctx.set_gpr(4, rt.memory().aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(4, ctx.gpr[4] & 32767u);
    ctx.set_gpr(4, ctx.gpr[4] << 16u);
    ctx.set_gpr(5, ctx.gpr[3] + ctx.gpr[4]);
    goto L_08972F50;
L_08972F50:
    ctx.set_gpr(5, ctx.gpr[5] + static_cast<std::uint32_t>(3));
    ctx.set_gpr(4, 0u + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(5, ctx.gpr[5] & ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[4] << 27u);
    ctx.set_gpr(4, ctx.gpr[4] >> 28u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[4] << 2u);
    ctx.set_gpr(4, ctx.gpr[5] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0897302C;
      }
      goto L_08972F84;
    }
L_08972F84:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08972F94;
      }
      goto L_08972F8C;
    }
L_08972F8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08972FA4;
      }
      goto L_08972F94;
    }
L_08972F94:
    ctx.set_gpr(2, rt.memory().aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] & 32767u);
    ctx.set_gpr(2, ctx.gpr[2] << 16u);
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[2]);
    goto L_08972FA4;
L_08972FA4:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_0897302C;
      }
      goto L_08972FB0;
    }
L_08972FB0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0897302C;
      }
      goto L_08972FB8;
    }
L_08972FB8:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(412)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08972FD0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08972FD0u) goto L_08972FD0;
    return;
L_08972FD0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08972FDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x08972FDCu) goto L_08972FDC;
    return;
L_08972FDC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x08972FECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 30u, 0x089482C8u>(ctx, &aot_mem) && ctx.pc == 0x08972FECu) goto L_08972FEC;
    return;
L_08972FEC:
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(456)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08973004u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08973004u) goto L_08973004;
    return;
L_08973004:
    ctx.set_gpr(3, 2228u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-11152)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.set_gpr(7, ctx.gpr[2] + 0u);
    ctx.set_gpr(8, ctx.gpr[22] + 0u);
    ctx.set_gpr(9, 2228u << 16u);
    ctx.set_gpr(9, ctx.gpr[9] + static_cast<std::uint32_t>(5640));
    ctx.set_gpr(31, 0x0897302Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 456u, 0x08955F2Cu>(ctx, &aot_mem) && ctx.pc == 0x0897302Cu) goto L_0897302C;
    return;
L_0897302C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089731FC;
      }
      goto L_08973034;
    }
L_08973034:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089731B8;
      }
      goto L_08973040;
    }
L_08973040:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(4, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[19] + ctx.gpr[30]);
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08973064;
      }
      goto L_08973058;
    }
L_08973058:
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08973068;
      }
      goto L_08973064;
    }
L_08973064:
    ctx.set_gpr(6, ctx.gpr[21] + 0u);
    goto L_08973068;
L_08973068:
    ctx.set_gpr(31, 0x08973070u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 662u, 0x08812B08u>(ctx, &aot_mem) && ctx.pc == 0x08973070u) goto L_08973070;
    return;
L_08973070:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, ctx.gpr[2] & 2u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089730BC;
      }
      goto L_08973084;
    }
L_08973084:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089730A4;
      }
      goto L_08973098;
    }
L_08973098:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(4));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089730A8;
      }
      goto L_089730A4;
    }
L_089730A4:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(12));
    goto L_089730A8;
L_089730A8:
    ctx.set_gpr(6, ctx.gpr[23] - ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[19] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(253));
    ctx.set_gpr(31, 0x089730BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x089730BCu) goto L_089730BC;
    return;
L_089730BC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(3, ctx.gpr[2] >> 31u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089730E8;
      }
      goto L_089730D4;
    }
L_089730D4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(11)));
    ctx.set_gpr(2, ctx.gpr[2] << 30u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089730EC;
      }
      goto L_089730E8;
    }
L_089730E8:
    ctx.set_gpr(2, 0u + 0u);
    goto L_089730EC;
L_089730EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897315C;
      }
      goto L_089730F4;
    }
L_089730F4:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08973138;
      }
      goto L_08973100;
    }
L_08973100:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[23] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08973118u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 117u, 0x08900AF4u>(ctx, &aot_mem) && ctx.pc == 0x08973118u) goto L_08973118;
    return;
L_08973118:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(205)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08973138;
      }
      goto L_08973124;
    }
L_08973124:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08973138u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 108u, 0x08900998u>(ctx, &aot_mem) && ctx.pc == 0x08973138u) goto L_08973138;
    return;
L_08973138:
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31440)));
    ctx.set_gpr(5, ctx.gpr[17] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08973154u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08973154u) goto L_08973154;
    return;
L_08973154:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089731FC;
      }
      goto L_0897315C;
    }
L_0897315C:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089731A0;
      }
      goto L_08973168;
    }
L_08973168:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[23] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08973180u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 117u, 0x08900AF4u>(ctx, &aot_mem) && ctx.pc == 0x08973180u) goto L_08973180;
    return;
L_08973180:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(205)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089731A0;
      }
      goto L_0897318C;
    }
L_0897318C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089731A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 108u, 0x08900998u>(ctx, &aot_mem) && ctx.pc == 0x089731A0u) goto L_089731A0;
    return;
L_089731A0:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089731B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 373u, 0x0896A9DCu>(ctx, &aot_mem) && ctx.pc == 0x089731B0u) goto L_089731B0;
    return;
L_089731B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089731FC;
      }
      goto L_089731B8;
    }
L_089731B8:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089731FC;
      }
      goto L_089731C4;
    }
L_089731C4:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[21] + 0u);
    ctx.set_gpr(6, ctx.gpr[23] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x089731DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 117u, 0x08900AF4u>(ctx, &aot_mem) && ctx.pc == 0x089731DCu) goto L_089731DC;
    return;
L_089731DC:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(205)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089731FC;
      }
      goto L_089731E8;
    }
L_089731E8:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[23] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x089731FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 108u, 0x08900998u>(ctx, &aot_mem) && ctx.pc == 0x089731FCu) goto L_089731FC;
    return;
L_089731FC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08973254;
      }
      goto L_08973208;
    }
L_08973208:
    ctx.set_gpr(2, 43690u << 16u);
    ctx.set_gpr(3, ctx.gpr[2] | 43695u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-4));
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(-8));
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(16, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(3, ctx.gpr[16] + ctx.gpr[18]);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(191));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(187));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[2]));
    rt.memory().aot_store8(ctx.gpr[3] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08973254;
L_08973254:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08973298;
      }
      goto L_08973260;
    }
L_08973260:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(7, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08973278u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 117u, 0x08900AF4u>(ctx, &aot_mem) && ctx.pc == 0x08973278u) goto L_08973278;
    return;
L_08973278:
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(205)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08973298;
      }
      goto L_08973284;
    }
L_08973284:
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(1));
    ctx.set_gpr(31, 0x08973298u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 108u, 0x08900998u>(ctx, &aot_mem) && ctx.pc == 0x08973298u) goto L_08973298;
    return;
L_08973298:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089732CC;
      }
      goto L_089732A0;
    }
L_089732A0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(144)));
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089732C8;
      }
      goto L_089732B0;
    }
L_089732B0:
    ctx.set_gpr(4, 2228u << 16u);
    ctx.set_gpr(4, ctx.gpr[4] + static_cast<std::uint32_t>(5688));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x089732C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 441u, 0x08955DC4u>(ctx, &aot_mem) && ctx.pc == 0x089732C8u) goto L_089732C8;
    return;
L_089732C8:
    ctx.set_gpr(16, 0u + 0u);
    goto L_089732CC;
L_089732CC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08973330;
      }
      goto L_089732D4;
    }
L_089732D4:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08973330;
      }
      goto L_089732DC;
    }
L_089732DC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(140)));
    ctx.set_gpr(2, ctx.gpr[3] & 2u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897330C;
      }
      goto L_089732F0;
    }
L_089732F0:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + static_cast<std::uint32_t>(205));
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08973304u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08973304u) goto L_08973304;
    return;
L_08973304:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08973330;
      }
      goto L_0897330C;
    }
L_0897330C:
    ctx.set_gpr(2, ctx.gpr[3] & 4u);
    ctx.set_gpr(2, 0u < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08973330;
      }
      goto L_0897331C;
    }
L_0897331C:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08973330u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08973330u) goto L_08973330;
    return;
L_08973330:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(292)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08973348u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08973348u) goto L_08973348;
    return;
L_08973348:
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
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(80));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897337C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, 2245u << 16u);
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(31440)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897339Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897339Cu) goto L_0897339C;
    return;
L_0897339C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089733AC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089733B4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] >> 1u);
    ctx.set_gpr(2, 32768u << 16u);
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(31)));
    ctx.set_gpr(2, 0u & 1u);
    ctx.set_gpr(3, ctx.gpr[2] << 7u);
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(2, ctx.gpr[5] & ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[2] | ctx.gpr[3]);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08973434;
      }
      goto L_08973420;
    }
L_08973420:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08973448;
      }
      goto L_08973434;
    }
L_08973434:
    ctx.set_gpr(5, ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08973448u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08973448u) goto L_08973448;
    return;
L_08973448:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(3, ctx.gpr[16] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(31, 0x08973468u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 566u, 0x0892E720u>(ctx, &aot_mem) && ctx.pc == 0x08973468u) goto L_08973468;
    return;
L_08973468:
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
L_08973484:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x089734A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 575u, 0x0892E7DCu>(ctx, &aot_mem) && ctx.pc == 0x089734A0u) goto L_089734A0;
    return;
L_089734A0:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    rt.memory().aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), 0u);
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x089734B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 616u, 0x0892EADCu>(ctx, &aot_mem) && ctx.pc == 0x089734B4u) goto L_089734B4;
    return;
L_089734B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897354C;
      }
      goto L_089734BC;
    }
L_089734BC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, ctx.gpr[3] << 1u);
    ctx.set_gpr(4, ctx.gpr[4] >> 1u);
    ctx.set_gpr(3, 32768u << 16u);
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[3]);
    ctx.set_gpr(5, rt.memory().aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(31)));
    ctx.set_gpr(3, 0u & 1u);
    ctx.set_gpr(4, ctx.gpr[3] << 7u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(3, ctx.gpr[5] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[4]);
    rt.memory().aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(17, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[3]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08973524;
      }
      goto L_08973510;
    }
L_08973510:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(1));
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08973538;
      }
      goto L_08973524;
    }
L_08973524:
    ctx.set_gpr(5, ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, 0u + static_cast<std::uint32_t>(4));
    ctx.set_gpr(31, 0x08973538u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 795u, 0x0890FB1Cu>(ctx, &aot_mem) && ctx.pc == 0x08973538u) goto L_08973538;
    return;
L_08973538:
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(4, ctx.gpr[17] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_0897354C;
L_0897354C:
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
L_08973564:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08973574u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 581u, 0x0892E848u>(ctx, &aot_mem) && ctx.pc == 0x08973574u) goto L_08973574;
    return;
L_08973574:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08973584:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089735D0;
      }
      goto L_0897359C;
    }
L_0897359C:
    ctx.set_gpr(4, ctx.gpr[7] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(3, ctx.gpr[3] >> 31u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089735CC;
      }
      goto L_089735BC;
    }
L_089735BC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    goto L_089735CC;
L_089735CC:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_089735D0;
L_089735D0:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897359C;
      }
      goto L_089735DC;
    }
L_089735DC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089735E4:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08973630;
      }
      goto L_089735FC;
    }
L_089735FC:
    ctx.set_gpr(4, ctx.gpr[7] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(3, ctx.gpr[3] >> 31u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897362C;
      }
      goto L_0897361C;
    }
L_0897361C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    goto L_0897362C;
L_0897362C:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08973630;
L_08973630:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089735FC;
      }
      goto L_0897363C;
    }
L_0897363C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08973644:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08973694;
      }
      goto L_0897365C;
    }
L_0897365C:
    ctx.set_gpr(4, ctx.gpr[7] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(3, ctx.gpr[3] >> 31u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08973690;
      }
      goto L_0897367C;
    }
L_0897367C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] >> 1u);
    ctx.set_gpr(3, ctx.gpr[3] + static_cast<std::uint32_t>(4));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    goto L_08973690;
L_08973690:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08973694;
L_08973694:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897365C;
      }
      goto L_089736A0;
    }
L_089736A0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089736A8:
    ctx.set_gpr(2, 0u + 0u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(7, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08973700;
      }
      goto L_089736C0;
    }
L_089736C0:
    ctx.set_gpr(4, ctx.gpr[7] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(3, ctx.gpr[3] >> 31u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089736FC;
      }
      goto L_089736E0;
    }
L_089736E0:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] >> 1u);
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[3] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089736FC;
      }
      goto L_089736F8;
    }
L_089736F8:
    ctx.set_gpr(2, ctx.gpr[3] + 0u);
    goto L_089736FC;
L_089736FC:
    ctx.set_gpr(7, ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08973700;
L_08973700:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_089736C0;
      }
      goto L_0897370C;
    }
L_0897370C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08973714:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08973730u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08973730u) goto L_08973730;
    return;
L_08973730:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08973740:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(16, ctx.lo);
    ctx.set_gpr(5, ctx.gpr[16] + 0u);
    ctx.set_gpr(6, ctx.gpr[7] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08973770u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08973770u) goto L_08973770;
    return;
L_08973770:
    ctx.set_gpr(17, ctx.gpr[2] + 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08973790;
      }
      goto L_0897377C;
    }
L_0897377C:
    ctx.set_gpr(4, ctx.gpr[17] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08973790u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 719u, 0x08812EE8u>(ctx, &aot_mem) && ctx.pc == 0x08973790u) goto L_08973790;
    return;
L_08973790:
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
L_089737AC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x089737C8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089737C8u) goto L_089737C8;
    return;
L_089737C8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089737D8:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(2, ctx.gpr[5] + 0u);
    ctx.set_gpr(7, ctx.gpr[6] + 0u);
    ctx.set_gpr(5, 0u + 0u);
    ctx.set_gpr(6, ctx.gpr[2] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08973800u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08973800u) goto L_08973800;
    return;
L_08973800:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08973810:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x0897382Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897382Cu) goto L_0897382C;
    return;
L_0897382C:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897383C:
    ctx.set_gpr(2, ctx.gpr[4] - ctx.gpr[5]);
    ctx.set_gpr(5, ctx.gpr[2] - ctx.gpr[6]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(3, ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(3, ctx.gpr[3] - ctx.gpr[2]);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.set_gpr(2, ctx.lo);
    ctx.set_gpr(2, ctx.gpr[3] - ctx.gpr[2]);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897386C:
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
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[2]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.set_gpr(17, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.set_gpr(1, ctx.gpr[18] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089738C4;
      }
      goto L_089738C0;
    }
L_089738C0:
    ctx.set_gpr(18, ctx.gpr[2] + 0u);
    goto L_089738C4;
L_089738C4:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08973910;
      }
      goto L_089738CC;
    }
L_089738CC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(31, 0x089738DCu);
    // nop
    goto L_08973E1C;
L_089738DC:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(4, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(17, ctx.gpr[3] << 1u);
    ctx.set_gpr(17, ctx.gpr[17] >> 1u);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.set_gpr(31, 0x08973910u);
    // nop
    goto L_08973E94;
L_08973910:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08973924;
      }
      goto L_08973918;
    }
L_08973918:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08973AC4;
      }
      goto L_08973924;
    }
L_08973924:
    ctx.set_gpr(11, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(10, 0u + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(9, ctx.gpr[10] + 0u);
    ctx.set_gpr(22, 0u + 0u);
    ctx.set_gpr(16, 0u + 0u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(8, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08973A20;
      }
      goto L_0897394C;
    }
L_0897394C:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(3, ctx.gpr[8] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(4, ctx.gpr[2] << 1u);
    ctx.set_gpr(4, ctx.gpr[4] >> 1u);
    ctx.set_gpr(2, rt.memory().aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(2, ctx.gpr[2] << 24u);
    ctx.set_gpr(2, ctx.gpr[2] >> 31u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08973988;
      }
      goto L_0897397C;
    }
L_0897397C:
    ctx.set_gpr(11, ctx.gpr[11] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08973A1C;
      }
      goto L_08973988;
    }
L_08973988:
    ctx.set_gpr(3, ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[11] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(2, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(6, ctx.gpr[3] - ctx.gpr[2]);
    ctx.set_gpr(2, ctx.gpr[6] + ctx.gpr[19]);
    ctx.set_gpr(1, ctx.gpr[4] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089739B4;
      }
      goto L_089739A8;
    }
L_089739A8:
    ctx.set_gpr(11, ctx.gpr[11] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08973A1C;
      }
      goto L_089739B4;
    }
L_089739B4:
    ctx.set_gpr(2, ctx.gpr[4] - ctx.gpr[6]);
    ctx.set_gpr(2, ctx.gpr[2] - ctx.gpr[19]);
    ctx.set_gpr(12, ctx.gpr[3] & ctx.gpr[2]);
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(31, 0x089739CCu);
    // nop
    goto L_0897383C;
L_089739CC:
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_089739E8;
      }
      goto L_089739D8;
    }
L_089739D8:
    ctx.set_gpr(10, ctx.gpr[8] + 0u);
    ctx.set_gpr(9, ctx.gpr[2] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(22, ctx.gpr[11] + 0u);
    goto L_089739E8;
L_089739E8:
    ctx.set_gpr(5, ctx.gpr[19] + 0u);
    ctx.set_gpr(6, ctx.gpr[12] + 0u);
    ctx.set_gpr(31, 0x089739F8u);
    // nop
    goto L_0897383C;
L_089739F8:
    ctx.set_gpr(1, ctx.gpr[2] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08973A18;
      }
      goto L_08973A04;
    }
L_08973A04:
    ctx.set_gpr(10, ctx.gpr[8] + 0u);
    ctx.set_gpr(9, ctx.gpr[2] + 0u);
    ctx.set_gpr(2, ctx.gpr[4] - ctx.gpr[19]);
    ctx.set_gpr(16, ctx.gpr[2] - ctx.gpr[12]);
    ctx.set_gpr(22, ctx.gpr[11] + 0u);
    goto L_08973A18;
L_08973A18:
    ctx.set_gpr(11, ctx.gpr[11] + ctx.gpr[4]);
    goto L_08973A1C;
L_08973A1C:
    ctx.set_gpr(8, ctx.gpr[8] + static_cast<std::uint32_t>(1));
    goto L_08973A20;
L_08973A20:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897394C;
      }
      goto L_08973A2C;
    }
L_08973A2C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[10]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08973A60;
      }
      goto L_08973A34;
    }
L_08973A34:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08973A54;
      }
      goto L_08973A3C;
    }
L_08973A3C:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_gpr(31, 0x08973A54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 8u, 0x08974084u>(ctx, &aot_mem) && ctx.pc == 0x08973A54u) goto L_08973A54;
    return;
L_08973A54:
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08973AC4;
      }
      goto L_08973A60;
    }
L_08973A60:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[10] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(7, ctx.gpr[16] + 0u);
    ctx.set_gpr(31, 0x08973A78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 8u, 0x08974084u>(ctx, &aot_mem) && ctx.pc == 0x08973A78u) goto L_08973A78;
    return;
L_08973A78:
    ctx.set_gpr(16, ctx.gpr[22] + ctx.gpr[16]);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08973AC0;
      }
      goto L_08973A84;
    }
L_08973A84:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08973AC0;
      }
      goto L_08973A8C;
    }
L_08973A8C:
    ctx.set_gpr(1, ctx.gpr[17] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08973AA0;
      }
      goto L_08973A98;
    }
L_08973A98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08973AA4;
      }
      goto L_08973AA0;
    }
L_08973AA0:
    ctx.set_gpr(17, ctx.gpr[19] + 0u);
    goto L_08973AA4;
L_08973AA4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08973AC0;
      }
      goto L_08973AAC;
    }
L_08973AAC:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[17] + 0u);
    ctx.set_gpr(31, 0x08973AC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0003_entry, 3u, 679u, 0x08812C2Cu>(ctx, &aot_mem) && ctx.pc == 0x08973AC0u) goto L_08973AC0;
    return;
L_08973AC0:
    ctx.set_gpr(2, ctx.gpr[16] + 0u);
    goto L_08973AC4;
L_08973AC4:
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
L_08973AF0:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08973B28;
      }
      goto L_08973B08;
    }
L_08973B08:
    ctx.set_gpr(31, 0x08973B10u);
    // nop
    goto L_08973E1C;
L_08973B10:
    ctx.set_gpr(4, ctx.gpr[16] + 0u);
    ctx.set_gpr(5, ctx.gpr[2] + 0u);
    ctx.set_gpr(6, ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.set_gpr(7, ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.set_gpr(31, 0x08973B28u);
    // nop
    goto L_08973E94;
L_08973B28:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(32));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08973B3C:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
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
    ctx.set_gpr(22, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08973BB0;
      }
      goto L_08973B7C;
    }
L_08973B7C:
    ctx.set_gpr(17, ctx.gpr[18] << 2u);
    ctx.set_gpr(2, ctx.gpr[22] + ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08973B9Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08973B9Cu) goto L_08973B9C;
    return;
L_08973B9C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08973BC0;
      }
      goto L_08973BA4;
    }
L_08973BA4:
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08973BB0;
L_08973BB0:
    ctx.set_gpr(16, ctx.gpr[20] & 65535u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08973B7C;
      }
      goto L_08973BC0;
    }
L_08973BC0:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08973BF4;
      }
      goto L_08973BCC;
    }
L_08973BCC:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08973BE8u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08973BE8u) goto L_08973BE8;
    return;
L_08973BE8:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08973BF8;
      }
      goto L_08973BF4;
    }
L_08973BF4:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08973BF8;
L_08973BF8:
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_gpr(22, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_gpr(21, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_gpr(20, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(19, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
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
L_08973C24:
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
    ctx.set_gpr(22, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, ctx.gpr[7] + 0u);
    ctx.set_gpr(23, ctx.gpr[8] + 0u);
    ctx.set_gpr(18, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08973CA8;
      }
      goto L_08973C6C;
    }
L_08973C6C:
    ctx.set_gpr(17, ctx.gpr[18] << 2u);
    ctx.set_gpr(3, ctx.gpr[22] + ctx.gpr[17]);
    ctx.set_gpr(2, ctx.gpr[23] + ctx.gpr[17]);
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08973C94u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08973C94u) goto L_08973C94;
    return;
L_08973C94:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08973CB8;
      }
      goto L_08973C9C;
    }
L_08973C9C:
    ctx.set_gpr(3, ctx.gpr[19] + ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.set_gpr(18, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08973CA8;
L_08973CA8:
    ctx.set_gpr(16, ctx.gpr[20] & 65535u);
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08973C6C;
      }
      goto L_08973CB8;
    }
L_08973CB8:
    ctx.set_gpr(1, static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08973CEC;
      }
      goto L_08973CC4;
    }
L_08973CC4:
    ctx.set_gpr(4, ctx.gpr[21] + 0u);
    ctx.set_gpr(5, ctx.gpr[18] + 0u);
    ctx.set_gpr(6, ctx.gpr[19] + 0u);
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08973CE0u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08973CE0u) goto L_08973CE0;
    return;
L_08973CE0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08973CF0;
      }
      goto L_08973CEC;
    }
L_08973CEC:
    ctx.set_gpr(2, 0u + 0u);
    goto L_08973CF0;
L_08973CF0:
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
L_08973D20:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[18]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[16]);
    ctx.set_gpr(18, ctx.gpr[4] + 0u);
    ctx.set_gpr(17, ctx.gpr[5] + 0u);
    ctx.set_gpr(16, ctx.gpr[6] + 0u);
    ctx.set_gpr(19, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08973D74;
      }
      goto L_08973D50;
    }
L_08973D50:
    ctx.set_gpr(2, ctx.gpr[19] << 2u);
    ctx.set_gpr(2, ctx.gpr[16] + ctx.gpr[2]);
    ctx.set_gpr(4, ctx.gpr[18] + 0u);
    ctx.set_gpr(5, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(25, rt.memory().aot_load32(ctx.gpr[25] + static_cast<std::uint32_t>(144)));
    jump_target = ctx.gpr[25];
    ctx.set_gpr(31, 0x08973D70u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08973D70u) goto L_08973D70;
    return;
L_08973D70:
    ctx.set_gpr(19, ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_08973D74;
L_08973D74:
    ctx.set_gpr(3, ctx.gpr[19] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08973D50;
      }
      goto L_08973D80;
    }
L_08973D80:
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
L_08973DA0:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(1));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08973DAC:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[16]);
    ctx.set_gpr(16, ctx.gpr[4] + 0u);
    ctx.set_gpr(31, 0x08973DC4u);
    // nop
    goto L_08973E1C;
L_08973DC4:
    ctx.set_gpr(4, rt.memory().aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(3, ctx.gpr[2] << 2u);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(2, ctx.gpr[2] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] >> 1u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(16, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08973DF4:
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[31]);
    ctx.set_gpr(31, 0x08973E04u);
    // nop
    goto L_08973E1C;
L_08973E04:
    ctx.set_gpr(2, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(0u) ? 1u : 0u);
    ctx.set_gpr(2, ctx.gpr[2] ^ 1u);
    ctx.set_gpr(31, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.set_gpr(29, ctx.gpr[29] + static_cast<std::uint32_t>(16));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08973E1C:
    ctx.set_gpr(8, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    ctx.set_gpr(7, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.set_gpr(2, 0u + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08973E7C;
      }
      goto L_08973E34;
    }
L_08973E34:
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08973E44;
      }
      goto L_08973E3C;
    }
L_08973E3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08973E8C;
      }
      goto L_08973E44;
    }
L_08973E44:
    ctx.set_gpr(1, ctx.gpr[5] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[1] == 0u;
    // nop
      if (branch_taken) {
          goto L_08973E5C;
      }
      goto L_08973E50;
    }
L_08973E50:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08973E8C;
      }
      goto L_08973E5C;
    }
L_08973E5C:
    ctx.set_gpr(4, ctx.gpr[2] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] >> 1u);
    ctx.set_gpr(8, ctx.gpr[8] + ctx.gpr[3]);
    ctx.set_gpr(2, ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_08973E7C;
L_08973E7C:
    ctx.set_gpr(3, static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08973E34;
      }
      goto L_08973E88;
    }
L_08973E88:
    ctx.set_gpr(2, 0u + static_cast<std::uint32_t>(-1));
    goto L_08973E8C;
L_08973E8C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08973E94:
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
    ctx.set_gpr(16, ctx.gpr[7] + 0u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(8, ctx.gpr[18] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(7, ctx.gpr[3] + ctx.gpr[8]);
    ctx.set_gpr(6, rt.memory().aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, 0u & 1u);
    ctx.set_gpr(5, ctx.gpr[3] << 7u);
    ctx.set_gpr(3, 0u + static_cast<std::uint32_t>(-129));
    ctx.set_gpr(3, ctx.gpr[6] & ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[3] | ctx.gpr[5]);
    rt.memory().aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[3]));
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(204)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08973F44;
      }
      goto L_08973EF8;
    }
L_08973EF8:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[8]);
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(20, ctx.gpr[2] << 1u);
    ctx.set_gpr(20, ctx.gpr[20] >> 1u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, ctx.gpr[20] + 0u);
    ctx.set_gpr(7, 0u + 0u);
    ctx.set_gpr(31, 0x08973F24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 117u, 0x08900AF4u>(ctx, &aot_mem) && ctx.pc == 0x08973F24u) goto L_08973F24;
    return;
L_08973F24:
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(205)));
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08973F44;
      }
      goto L_08973F30;
    }
L_08973F30:
    ctx.set_gpr(4, ctx.gpr[20] + 0u);
    ctx.set_gpr(5, ctx.gpr[20] + 0u);
    ctx.set_gpr(6, 0u + 0u);
    ctx.set_gpr(31, 0x08973F44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 108u, 0x08900998u>(ctx, &aot_mem) && ctx.pc == 0x08973F44u) goto L_08973F44;
    return;
L_08973F44:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08973F94;
      }
      goto L_08973F4C;
    }
L_08973F4C:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.set_gpr(4, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(4, ctx.gpr[3] + ctx.gpr[4]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(3, ctx.gpr[3] >> 31u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08973F90;
      }
      goto L_08973F74;
    }
L_08973F74:
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[3] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] >> 1u);
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.set_gpr(18, ctx.gpr[5] + 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08973F94;
      }
      goto L_08973F90;
    }
L_08973F90:
    rt.memory().aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    goto L_08973F94;
L_08973F94:
    rt.memory().aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(212)));
    ctx.set_gpr(16, ctx.gpr[18] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(3, ctx.gpr[3] + ctx.gpr[16]);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    rt.memory().aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 2u, 0x08974018u>(ctx, &aot_mem); return;
      }
      goto L_08973FB8;
    }
L_08973FB8:
    ctx.set_gpr(5, ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.set_gpr(6, ctx.gpr[5] << 2u);
    ctx.set_gpr(3, rt.memory().aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_gpr(6, ctx.gpr[3] + ctx.gpr[6]);
    ctx.set_gpr(3, rt.memory().aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(3)));
    ctx.set_gpr(3, ctx.gpr[3] << 24u);
    ctx.set_gpr(3, ctx.gpr[3] >> 31u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 3u, 0x08974030u>(ctx, &aot_mem); return;
      }
      goto L_08973FDC;
    }
L_08973FDC:
    ctx.set_gpr(2, rt.memory().aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] >> 1u);
    ctx.set_gpr(6, rt.memory().aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.set_gpr(2, ctx.gpr[6] << 1u);
    ctx.set_gpr(2, ctx.gpr[2] >> 1u);
    ctx.set_gpr(2, ctx.gpr[2] + ctx.gpr[3]);
    ctx.set_gpr(3, ctx.gpr[2] << 1u);
    ctx.set_gpr(3, ctx.gpr[3] >> 1u);
    ctx.pc = 0x08974000u; return;
}

void recomp_unit_0091(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0091_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_91(Runtime &runtime) {
    runtime.register_generated_unit(91u, 0x08970000u, 16384u, &recomp_unit_0091, &recomp_unit_0091_entry);
    runtime.register_function(0x08970000u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970008u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970014u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970020u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897002Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970034u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970044u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897004Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897006Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970084u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897008Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089700A0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089700ACu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089700C0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089700C8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089700D0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089700E0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089700F8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970108u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970118u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970128u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897014Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897015Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970184u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970194u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089701D0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089701DCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089701E4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089701F8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970208u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897021Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897023Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970274u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970280u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970288u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897029Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089702ACu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089702C0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089702E0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089702FCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970300u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970314u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970320u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970324u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897032Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970348u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970358u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970370u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970380u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089703D8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089703DCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089703ECu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970408u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970418u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897042Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970438u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897045Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970478u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970484u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970494u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089704B8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089704C4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089704D0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089704D4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089704F0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089704F4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897050Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970520u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970524u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897053Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970554u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970560u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970590u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970594u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089705C8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897063Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970648u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897070Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970734u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970790u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897079Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089707A0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089707CCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089707DCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970808u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970844u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970858u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970874u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897089Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089708A8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089708B4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089708B8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089708F4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970968u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970974u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970A34u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970A58u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970AB4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970AC0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970AC4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970AF8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970B08u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970B34u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970B78u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970B8Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970BA8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970BD0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970BD4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970BE4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970BECu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970C10u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970C18u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970C2Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970C38u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970C50u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970C58u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970C70u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970C84u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970CA4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970CACu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970CBCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970CD0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970CF4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970CFCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970D08u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970D18u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970D28u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970D34u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970D38u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970D6Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970D78u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970D9Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970DD4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970DECu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970E28u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970E44u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970E48u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970E60u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970E84u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970E90u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08970EA4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971014u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971034u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971044u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971080u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897108Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089710A0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089710B8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089710C4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089710C8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089710E0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089710E8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089710F4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089710F8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971110u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971120u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897115Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971164u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971174u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897117Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971188u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897118Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089711A4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089711B4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089711F0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089711F8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971224u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971238u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971254u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897127Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897128Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089712A4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089712ACu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089712C0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089712E4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089712ECu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971300u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971308u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897131Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971328u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971340u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971348u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971360u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971378u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971380u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971390u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089713B0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089713BCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089713D4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089713FCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971414u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971438u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971444u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971454u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971468u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971480u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897149Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089714B4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089714C4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089714E0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089714F4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971510u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971518u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971520u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897152Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971534u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971540u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897154Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971558u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971570u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971588u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089715A4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089715A8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089715ACu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089715C0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089715D8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089715FCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971614u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971628u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971634u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897164Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971664u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971688u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089716A8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089716B4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089716C8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089716F4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971704u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971718u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971720u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971738u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971750u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971768u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971774u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971788u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089717A0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089717ACu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089717B8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089717D4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089717D8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089717E0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089717ECu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971800u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971814u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971834u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897183Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971844u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971858u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971864u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971870u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897187Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897188Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971898u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089718A8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089718B4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089718C4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089718D0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089718F0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089718FCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971908u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897190Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971918u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897191Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971924u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971930u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971944u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971968u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897196Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971974u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971980u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971994u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089719A8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089719C4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089719D4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089719F0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089719F4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089719FCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971A08u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971A1Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971A30u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971A4Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971A54u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971A80u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971A88u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971A90u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971A9Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971AB4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971AC4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971ACCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971AD0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971AE8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971B2Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971B3Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971B4Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971B80u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971B84u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971B94u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971BA8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971BD4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971BE4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971BF4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971BFCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971C04u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971C38u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971C48u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971C54u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971C60u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971C64u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971C6Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971C80u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971C98u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971CA4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971CB0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971CCCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971CD0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971CE4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971D18u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971D38u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971D44u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971D48u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971D64u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971D88u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971D98u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971DA4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971DB0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971DB4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971DBCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971DC8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971DCCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971DE0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971DE8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971DF4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971E08u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971E20u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971E2Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971E38u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971E54u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971E58u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971E60u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971E6Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971E80u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971E94u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971EB4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971EBCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971EF0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971F08u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971F18u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971F38u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971F50u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971F60u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971F7Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971F8Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971FA4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971FB4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971FC4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08971FDCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972004u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972074u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972084u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972090u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972098u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089720A0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089720B0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089720B8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089720CCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089720E4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972104u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897210Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972118u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972124u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972130u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972138u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972150u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972164u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972178u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897218Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897219Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089721A0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089721ACu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089721B0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089721C4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089721D8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089721E4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089721F0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089721FCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972214u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972244u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972248u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897226Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972274u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972284u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089722D0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089722DCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089722F4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972314u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897231Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972328u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972340u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972360u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972368u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897237Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972394u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089723A0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089723B8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089723D0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089723E4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089723F0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897241Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972420u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972444u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897244Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897245Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089724A8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089724B4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089724CCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089724ECu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089724F4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972510u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972514u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897251Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972530u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897253Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972544u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897255Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972574u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972590u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089725A4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089725B4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089725E0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089725FCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972620u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897262Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972634u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972640u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972658u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972660u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972670u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972684u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972688u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972698u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089726ACu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089726C0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089726E0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089726F4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972718u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897272Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972734u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972754u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897275Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972768u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897277Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972784u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972790u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972794u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089727A8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089727C0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089727D4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089727D8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089727E0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089727FCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972808u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972820u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897282Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972840u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972848u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897285Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972868u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972878u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972880u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897288Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897289Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089728B0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089728E0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089728F0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972910u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897291Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972930u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972940u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972948u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972954u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897296Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972978u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897298Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897299Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089729A4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089729B4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089729CCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089729D4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089729E8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089729F4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972A08u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972A3Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972A40u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972A64u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972A6Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972A7Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972AC8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972AD4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972AECu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972B0Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972B14u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972B34u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972B38u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972B4Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972B60u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972B80u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972B88u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972B90u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972B9Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972BB4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972BC8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972BDCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972BE8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972C08u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972C0Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972C24u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972C40u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972C64u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972C70u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972C78u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972C84u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972C9Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972CA4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972CB4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972CC8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972CCCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972CDCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972CF0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972D04u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972D24u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972D38u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972D5Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972D70u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972D78u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972D98u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972DA0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972DACu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972DB4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972DCCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972DE8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972DFCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972E0Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972E38u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972E44u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972E54u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972E64u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972E78u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972E84u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972E98u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972EACu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972EB8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972ECCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972ED8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972EE8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972EECu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972EF4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972F10u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972F14u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972F40u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972F50u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972F84u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972F8Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972F94u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972FA4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972FB0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972FB8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972FD0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972FDCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08972FECu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973004u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897302Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973034u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973040u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973058u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973064u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973068u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973070u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973084u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973098u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089730A4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089730A8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089730BCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089730D4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089730E8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089730ECu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089730F4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973100u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973118u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973124u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973138u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973154u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897315Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973168u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973180u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897318Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089731A0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089731B0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089731B8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089731C4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089731DCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089731E8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089731FCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973208u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973254u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973260u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973278u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973284u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973298u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089732A0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089732B0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089732C8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089732CCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089732D4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089732DCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089732F0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973304u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897330Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897331Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973330u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973348u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897337Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897339Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089733ACu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089733B4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973420u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973434u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973448u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973468u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973484u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089734A0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089734B4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089734BCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973510u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973524u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973538u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897354Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973564u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973574u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973584u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897359Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089735BCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089735CCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089735D0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089735DCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089735E4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089735FCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897361Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897362Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973630u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897363Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973644u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897365Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897367Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973690u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973694u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089736A0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089736A8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089736C0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089736E0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089736F8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089736FCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973700u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897370Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973714u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973730u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973740u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973770u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897377Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973790u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089737ACu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089737C8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089737D8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973800u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973810u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897382Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897383Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897386Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089738C0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089738C4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089738CCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089738DCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973910u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973918u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973924u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897394Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x0897397Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973988u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089739A8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089739B4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089739CCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089739D8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089739E8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x089739F8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973A04u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973A18u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973A1Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973A20u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973A2Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973A34u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973A3Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973A54u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973A60u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973A78u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973A84u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973A8Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973A98u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973AA0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973AA4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973AACu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973AC0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973AC4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973AF0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973B08u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973B10u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973B28u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973B3Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973B7Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973B9Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973BA4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973BB0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973BC0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973BCCu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973BE8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973BF4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973BF8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973C24u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973C6Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973C94u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973C9Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973CA8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973CB8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973CC4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973CE0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973CECu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973CF0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973D20u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973D50u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973D70u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973D74u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973D80u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973DA0u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973DACu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973DC4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973DF4u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973E04u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973E1Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973E34u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973E3Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973E44u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973E50u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973E5Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973E7Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973E88u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973E8Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973E94u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973EF8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973F24u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973F30u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973F44u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973F4Cu, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973F74u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973F90u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973F94u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973FB8u, &recomp_unit_0091, "recomp_unit_0091");
    runtime.register_function(0x08973FDCu, &recomp_unit_0091, "recomp_unit_0091");
}
} // namespace psprecomp
